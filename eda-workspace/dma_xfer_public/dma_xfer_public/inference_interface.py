#!/usr/bin/env python3
"""
inference_interface.py — DUT 无关骨架

赛题最终只交付同一份接口函数（对齐大赛框架 4.6 节 / 附件 B.3），三个 DUT 共用这一份代码，
因此本文件**不得包含任何具体 DUT 的常量**：动作维数、每维上界、任务表等一律不写死，
全部在运行时从 dut_spec_path / covergroup_path 推出来。

    class InferenceInterface:
        def __init__(self, dut_spec_path: str, covergroup_path: str)
        def predict(self, coverage_state: np.ndarray,
                    step: int, max_steps: int) -> np.ndarray

契约：
  - coverage_state : np.ndarray, shape (total_bins,), float32, 取值 {0.0, 1.0}，评测端给出
  - 返回值         : np.ndarray, shape (dim,), float32，每个元素必须有限
  - predict() 单次 ≤30 ms；不得修改模型权重；评测端单线程调用
  - __init__ / predict 都不得向外抛异常 —— 评测端是另一个进程，抛了整题作废

扩展点只有一个：_policy()。其余都是骨架自带的解析与兜底。

注意：评测适配器会对动作做 a = [int(x) for x in action]（见 harness.py 的 decode），
所以 NaN / Inf 会在**评测端进程**里抛 ValueError，_as_action() 必须兜住。
"""

import os
import re
import sys

import numpy as np

# 解析不出维数时的占位值：0 => predict 返回空向量，由评测端自行补齐成合法动作
_DEFAULT_DIM = 0

# spec 里动作空间标题的通用写法，如 "## 4. 动作空间（推理接口，15 维）"
# 中间允许若干非数字字符（题号/括号/说明），避免绑定某一题的排版
_DIM_RE = re.compile(r"动作空间[^0-9]{0,16}(\d+)\s*维")


# ---------------------------------------------------------------------- #
# 解析辅助：全部失败即返回空值，绝不抛异常
# ---------------------------------------------------------------------- #
def _read_text(path):
    if not path:
        return ""
    try:
        with open(path, encoding="utf-8", errors="replace") as f:
            return f.read()
    except Exception:
        return ""


def _parse_dim(spec_text):
    """从 spec 正文解析动作维数；解析不出返回 _DEFAULT_DIM。"""
    m = _DIM_RE.search(spec_text or "")
    if not m:
        return _DEFAULT_DIM
    try:
        return int(m.group(1))
    except Exception:
        return _DEFAULT_DIM


# covergroup.svh 里的两种声明形态：
#   ch0_state_cp: coverpoint ch0_state { bins idle0 = {2'd0}; ... }
#   arb_hold_cp:  cross bf_inst.arb_winner_cp, cc_inst.hold_cp { bins win0_hold = binsof(...); }
_CP_RE = re.compile(r"([A-Za-z_]\w*)\s*:\s*(coverpoint|cross)\b")
_BIN_RE = re.compile(r"\bbins\s+([A-Za-z_]\w*)\s*=")
_COMMENT_RE = re.compile(r"//[^\n]*|/\*.*?\*/", re.S)


def _parse_covergroup_bins(covergroup_text):
    """按**声明顺序**解析 covergroup.svh，返回 [(coverpoint 标签, bin 名), ...]。

    返回值的下标就是 coverage_state 的下标——解析这个文件就是为了这个映射。
    解析不出返回 []。

    正则的边界：`\\bbins\\s+` 不会误匹配 `binsof(` （bins 后面紧跟字母 o）或
    `ignore_bins` / `illegal_bins` （bins 前面是下划线，无词边界）。
    """
    if not covergroup_text:
        return []
    text = _COMMENT_RE.sub(" ", covergroup_text)
    marks = [(m.start(), 0, m.group(1)) for m in _CP_RE.finditer(text)]
    marks += [(m.start(), 1, m.group(1)) for m in _BIN_RE.finditer(text)]
    marks.sort(key=lambda t: t[0])

    bins = []
    cp = ""
    for _pos, is_bin, name in marks:
        if is_bin:
            bins.append((cp, name))
        else:
            cp = name
    return bins


def _as_action(action, dim):
    """把 _policy 的返回值强制成合法的 float32 动作向量。

    - None / 空数组 -> 全零动作（长度 dim）：DUT 空转但不崩
    - NaN / Inf      -> 就地清零，避免评测端 int() 抛 ValueError
    """
    if action is not None:
        try:
            a = np.asarray(action, dtype=np.float32).reshape(-1)
        except Exception:
            a = np.zeros(0, dtype=np.float32)
        if a.size:
            # copy=False：已经是 float32 时不额外拷贝
            return np.nan_to_num(a, nan=0.0, posinf=0.0, neginf=0.0).astype(
                np.float32, copy=False)
    return np.zeros(max(int(dim), 0), dtype=np.float32)


# ---------------------------------------------------------------------- #
# 题一 dma_xfer_public 的激励序列（供 _policy 按顺序回放）
#
# 纯开环：不读 coverage_state，没有条件分支，每次 predict 按顺序吐一条。
# 序列在模块导入时一次性定死，运行期只做一次游标自增。
# ---------------------------------------------------------------------- #
_DMA_DIM = 15       # 动作维数，同时当题一签名用：不是 15 维的 DUT 一律空转

# XFER_HOLD_N 的规格上界是 512（dut_spec.md §2.3），留点余量等它走到 DONE
_DMA_PAD = 520


def _dW(C, F, V):
    """写通道 C 的字段 F，值 V（小端拆进 d0..d3）。"""
    return [C, 1, F, V & 0xFF, (V >> 8) & 0xFF, (V >> 16) & 0xFF, (V >> 24) & 0xFF,
            0, 0, 0, 0, 0, 0, 0, 0]


def _dP(C, L, M, b):
    """写打包字段：conf_data = (burst<<21) | (dir_mode<<16) | len。

    M 的 bit3 是方向、bit2:0 是模式；b 是 burst(0~7)，别把方向塞进 b。
    """
    return _dW(C, 2, (b << 21) | (M << 16) | L)


def _dS(C):
    """启动通道 C。conf_wr=0 且 start=1，即拉起一次上升沿。"""
    return [C, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0]


_DN = [0] * 15      # 空转一拍


# 块 1：ch0 边界值配置写（11 拍，全程不启动）
_B1 = [
    _dW(0, 0, 1), _dW(0, 0, 0xFFFFFFFE), _dW(0, 0, 0xFFFFFFFF),     # saddr 边界
    _dW(0, 1, 1), _dW(0, 1, 0xFFFFFFFE), _dW(0, 1, 0xFFFFFFFF),     # daddr 边界
    _dP(0, 1, 0, 0), _dP(0, 0xFFFE, 0, 0), _dP(0, 0xFFFF, 0, 0),    # len 边界
    _dW(0, 0, 0), _dW(0, 1, 0),                                     # 复原地址
]

# 块 2：ch0 独占总线跑满（13 拍）
_B2 = [_dW(0, 0, 0), _dW(0, 1, 0), _dP(0, 8, 0, 0), _dS(0)] + [_DN] * 9

# 块 3：四通道并发（40 拍）
_B3 = [
    _dW(0, 0, 0), _dW(0, 1, 0), _dP(0, 4, 0, 0),    # ch0: MEM→MEM, burst 0
    _dW(1, 0, 0), _dW(1, 1, 0), _dP(1, 4, 0, 1),    # ch1: MEM→MEM, burst 1
    _dW(2, 0, 0), _dW(2, 1, 0), _dP(2, 4, 8, 7),    # ch2: MEM→IO , burst 7
    _dW(3, 0, 0), _dW(3, 1, 0), _dP(3, 4, 8, 1),    # ch3: MEM→IO , burst 1
    _dS(0), _DN, _dS(1), _DN, _dS(2), _DN, _dS(3), _DN,
] + [_DN] * 20


def _dma_sweep():
    """dir_mode 全空间（bit3 方向 × bit2:0 模式 = 16 个候选）× 4 个通道。

    DONE_OK_MODES 藏了 4 个正确值，规格里没写是哪 4 个——开环不猜，直接全跑：
    对的那些自然会进 hold、翻绿 done_ok* / ch*_state / seq_*，错的只浪费等待拍。
    同一个 M 的 4 个通道并发启动（相隔 1 拍），所以一轮只花一个 N 而不是四个。
    burst 取 M % 8，顺带把 cfg_burst_cp 的 8 个 bin 铺满，不额外花拍。
    """
    seq = []
    for M in range(16):
        for C in range(4):
            seq += [_dW(C, 0, 0), _dW(C, 1, 0), _dP(C, 3, M, M % 8), _dS(C)]
        seq += [_DN] * _DMA_PAD
    return seq


# 64 拍 PROLOGUE + 16×(16+520) 拍遍历 = 8640 拍；之后 _policy 返回 None 一直空转
_DMA_SEQ = _B1 + _B2 + _B3 + _dma_sweep()


# ---------------------------------------------------------------------- #
# 官方接口
# ---------------------------------------------------------------------- #
class InferenceInterface:
    def __init__(self, dut_spec_path=None, covergroup_path=None):
        self.dut_spec_path = dut_spec_path
        self.covergroup_path = covergroup_path
        # 原始素材，供 _policy 使用；读不到时都是 ""
        self.spec_text = _read_text(dut_spec_path)
        self.covergroup_text = _read_text(covergroup_path)
        # 运行时解析，三个 DUT 共用同一份代码的关键
        self.dim = _parse_dim(self.spec_text)
        # bin 映射：self.bins[i] 就是 coverage_state[i] 对应的 (coverpoint, bin)
        self.bins = _parse_covergroup_bins(self.covergroup_text)
        self.total_bins = len(self.bins)
        self._warned = False

    # ------------------------------------------------------------------ #
    # 唯一扩展点
    # ------------------------------------------------------------------ #
    def _policy(self, coverage_state, step, max_steps):
        """按顺序回放预置的 DMA 激励序列（纯开环，不看 coverage_state）。

        序列走完、或遇到的不是题一那个 15 维 DUT，就返回 None 让它空转。

        游标存在 self._dma_i 而不是用 step 计数：step 由调用方给，换个驱动脚本
        就可能变（比如从 1 开始、或跳着给），内部游标才能保证「每次调用按顺序
        吐一条」这个约定。
        """
        if self.dim != _DMA_DIM:
            return None
        i = getattr(self, "_dma_i", 0)
        if i < len(_DMA_SEQ):
            self._dma_i = i + 1
            return _DMA_SEQ[i]
        return None
        #return NotImplementedError

    # ------------------------------------------------------------------ #
    # 骨架：解析 + 兜底，不做任何策略
    # ------------------------------------------------------------------ #
    def predict(self, coverage_state, step, max_steps):
        try:
            state = np.asarray(coverage_state, dtype=np.float32).reshape(-1)
        except Exception:
            state = np.zeros(0, dtype=np.float32)

        try:
            action = self._policy(state, step, max_steps)
        except Exception as exc:
            # 只告警一次，避免 20000 拍刷屏；不吞掉问题，但也不让它炸掉整题
            if not self._warned:
                self._warned = True
                print(f"[InferenceInterface] _policy 失败，退化为空转动作: "
                      f"{type(exc).__name__}: {exc}", file=sys.stderr)
            action = None

        return _as_action(action, self.dim)


if __name__ == "__main__":
    _here = os.path.dirname(os.path.abspath(__file__))
    inf = InferenceInterface(
        dut_spec_path=os.path.join(_here, "dut", "dut_spec.md"),
        covergroup_path=os.path.join(_here, "dut", "covergroup.svh"),
    )
    print(f"dim = {inf.dim}, total_bins = {inf.total_bins}")

    a = inf.predict(np.zeros(inf.total_bins, dtype=np.float32), 0, 1000)
    assert isinstance(a, np.ndarray), "必须返回 np.ndarray"
    assert a.ndim == 1, "必须是一维向量"
    assert a.dtype == np.float32, "必须是 float32"
    assert np.all(np.isfinite(a)), "不得含 NaN / Inf"
    print(f"skeleton smoke OK, action shape = {a.shape}")
