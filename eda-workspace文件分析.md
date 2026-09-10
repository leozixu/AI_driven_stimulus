# docker/eda-workspace/ 文件详细分析

> 本文档结合赛题要求 `eda_race.md`，分析 `docker/eda-workspace/` 内部各文件的具体作用。
> 文件的简要说明见 `docker/README.md`。
>
> 参考文档：`../eda_race.md`（赛题指南，含命题文档 + 附件 A/B/C）

---

## 一、三个公开 DUT

| 目录 | 对应赛题 | 难度 | 总 bin 数 |
|------|---------|------|----------|
| `dma_xfer_public/` | 题一：可编程 DMA 传输控制器 | 低 | ~35 |
| `spi_master_public/` | 题二：全功能 SPI/SSP/Microwire 主机控制器 | 最高 | ~94 |
| `spi_xfer_public/` | 题三：SPI/SSP 主机串行传输控制器 | 高 | 86 |

三个 DUT 内部目录结构完全一致（各 7 类核心文件）。以下以 `spi_xfer_public/spi_xfer_public/` 为例详细说明。

---

## 二、每个 DUT 目录下的文件

```
<题名>_public/
├── local_sim.py            # 周期精确 Python DUT（快速推理/调试）
├── coverage_simulator.py   # 覆盖率统计（对应附件 C）
├── harness.py              # 评测循环（内置公平随机基线示例）
├── inference_interface.py  # 推理接口（参赛者核心开发文件）
├── dut/                    # 规格书 dut_spec.md、RTL 源码、coverage_meta.json
│   ├── dut_spec.md         # DUT 功能规格说明（附件 A.6）
│   ├── coverage_meta.json  # 覆盖组元数据（附件 C.5，模拟器读取）
│   ├── covergroup.svh      # SystemVerilog 覆盖组定义（附件 A.5，VCS 编译用）
│   └── *.v                 # RTL 源码（spi_xfer_top.v / spi_mstfsm.v / ...）
└── verilator_harness/      # Verilator 真实 RTL 仿真
    ├── build.sh            # Verilator 编译脚本
    ├── sim_main.cpp        # C++ 仿真主程序（文本协议驱动）
    ├── run_verilator.py    # Verilator harness runner
    ├── verilator_dut.py    # local_sim 的透明替换层（VerilatorDut）
    └── obj_dir/            # 预编译模型产物
```

---

### 2.1 `inference_interface.py` — 推理接口（参赛者核心开发文件）

**赛题定位**：对应附件 B.3 的 `InferenceInterface` 标准接口。

**作用**：
- 实现 `class InferenceInterface`，包含 `__init__(dut_spec_path, covergroup_path)` 和 `predict(coverage_state, step, max_steps) -> np.ndarray`
- `predict()` 接收当前覆盖率状态（二值向量），返回下一周期的激励动作向量
- 内置 **两种基线方法**（赛题 4.3.4 节要求）：
  - **`policy="random"`**：纯随机激励生成，每维在 `[0, BOUNDS[i])` 均匀采样
  - **`policy="greedy"`**：简单贪心搜索，固定候选动作池循环，命中新 bin 的候选保留复用

**动作空间解码**：动作向量维度 D 由 `dut_spec.md` 定义。例如 `spi_xfer` 是 12 维 `[reg_we, reg_addr, reg_wdata, reg_re, rxd, ss_in_n, rst_n, pad0..pad4]`

**与赛题约束的关系**：
- `predict()` 内**不得修改模型权重**（赛题 4.6 节），但允许动态调整 prompt 策略
- 单次调用建议 ≤ 30ms（2 小时墙钟 ÷ 3 个 DUT ÷ 5 万 cycles ≈ 44ms/cycle，扣除 VCS 开销）

---

### 2.2 `harness.py` — 评测循环（黑盒评估框架）

**赛题定位**：模拟赛题 4.6 节描述的评测脚本调用流程（附件 B.4）。

**作用**：
- `XxxHarness` 类封装了完整的仿真循环：
  - `reset()` → 复位 DUT 和覆盖率模拟器，返回初始全零 coverage_state
  - `step(stimulus)` → 解码 action 向量 → 驱动 DUT（local_sim 或 Verilator）→ 更新覆盖率 → 返回 `(state, reward, done, info)`
- `run_episode(agent)` → 顶层循环入口，每 `interval=1000` cycles 采样覆盖率曲线点
- 将覆盖率曲线保存到 `coverage_curves.json`（用于后续 AUC 计算，对应赛题评分公式 5.1）

**隐藏参数注入**：
- `load_secrets()` 加载 `eval_secrets_*.json`（隐藏参数，如 `SPEC_DFS_MIN`、`SPEC_HOLD_SS`）
- 对应赛题 4.3.1 节"关键隐蔽参数，具体值不随包公布"

**后端切换**：
- `backend="local"` → 使用 Python 周期精确模型（快速调试）
- `backend="verilator"`（**默认**）→ 使用真实 RTL 仿真数据

**各题 D 维数与动作布局**：
- `spi_xfer_public`：12 维 `[reg_we, reg_addr, reg_wdata, reg_re, rxd, ss_in_n, rst_n, pad0..pad4]`
- `dma_xfer_public`：15 维 `[ch_sel, conf_wr, conf_field, d0, d1, d2, d3, start, pad0..pad6]`

---

### 2.3 `local_sim.py` — 周期精确 Python DUT 模型

**赛题定位**：对应赛题 4.3.2 节开发阶段的"Verilator + Coverage 模拟工具"环境。

**作用**：
- 纯 Python 实现的 DUT 行为模型，与 `dut/spi_xfer_top.v` RTL 功能一致
- 包含完整的寄存器文件、FIFO、时钟分频器、主状态机（11 个状态）、移位控制器
- `read_signals()` 输出 40+ 个 `cov_*` 信号，供 `CoverageSimulator` 消费
- 仿真的同时直接暴露覆盖率计算所需的全部中间状态（比真实 RTL 端可见信号更多），便于调试与快速验证

**隐藏参数**：
- `spec_dfs_min`（帧长下限）和 `spec_hold_ss`（保持周期数）—— 赛题标注的"隐藏参数"
- 默认值与评测端一致，保证本地可达覆盖率与评测一致

**与赛题 4.3.2 节的关系**：开发阶段用此模型替代 VCS，获取与评测一致的覆盖率反馈。`coverage_simulator.py` 的每 cycle `step()` 调用对应附件 C.4 的仿真循环示例。

---

### 2.4 `coverage_simulator.py` — 覆盖率模拟器

**赛题定位**：完全对应附件 C 的 `CoverageSimulator` 规范。

**作用**：
- 读取 `dut/coverage_meta.json` 定义，按覆盖点类型计算 bin 命中状态
- 5 种覆盖点类型处理（对应附件 A.3）：
  - `basic`（基本功能覆盖点）：匹配 FSM 状态、协议模式、tmod
  - `boundary`（数据边界覆盖点）：匹配帧长边界、波特率分频边界、FIFO 水位
  - `condition`（条件组合覆盖点）：匹配 `baud2_path`、`x_done`、`last_frame` 等组合条件
  - `sequential`（时序窗口覆盖点）：匹配 `hold_last_frame`、`seq_a/b/c` 等时序序列
  - `cross`（交叉覆盖点）：匹配 `protocol_x_tmod`、`protocol_x_dfs_boundary` 等多变量组合
- `get_bin_vector()` / `get_state()` 输出与评测一致的 `np.ndarray`（shape=(total_bins,), dtype=float32）

**与赛题评分的关系**：
- `coverage` 属性返回 `hit_bins / total_bins`，评分公式 5.1 中的 $C_{final}$ 和 AUC 均基于此
- 每 1000 cycles 采样一次覆盖率曲线点（对应赛题 5.1 节 AUC 积分采样间隔）

---

### 2.5 `dut/` 目录 — DUT 规格与覆盖组定义

**`dut/dut_spec.md`**（DUT 功能规格说明文档）：
- 对应附件 A.6，包含功能概述、接口信号表、寄存器映射、操作模式、激励接口说明
- 评测时通过 `InferenceInterface.__init__(dut_spec_path)` 传入参赛者算法
- 注意：`win_mode / win_len` 等派生信号属于评测机制内部信号，不写入 dut_spec.md（附件 A.3.4）

**`dut/coverage_meta.json`**（覆盖组元数据）：
- 对应附件 C.5 格式，定义 `total_bins`、`coverpoints[]`（name/type/signal/bins）
- 被 `CoverageSimulator` 读取，决定覆盖率计算规则
- 以 `spi_xfer_public` 为例，共 86 个 bin，22 个覆盖点，含 5 个 cross 和 3 个 sequential
- `bin` 顺序规则：`coverage_state` 的 bin 按 coverpoints 数组顺序展开、各覆盖点的 bins[] 依次拼接（附件 A.7）

**`dut/covergroup.svh`**（SystemVerilog 覆盖组定义）：
- 对应附件 A.5，评测阶段由 VCS 编译使用
- 与 `coverage_meta.json` 同源转换，保证双工具一致性

**`dut/*.v`**（Verilog RTL 源文件）：
- 各 DUT 的硬件描述代码，如 `spi_xfer_top.v`、`spi_mstfsm.v`、`spi_fifo.v`、`spi_regfile.v`、`spi_shift.v`、`spi_sclkgen.v`
- 赛题 4.3.1 节要求"公开 DUT 的 RTL 可直接获取（用于训练/验证方法）"

---

### 2.6 `verilator_harness/` 目录 — Verilator 真实 RTL 仿真层

**`verilator_harness/build.sh`**：
- Verilator 编译脚本，调用 `verilator --cc --exe --public --trace` 将 RTL 编译为 C++ 模型
- 编译产物在 `obj_dir/` 下（已预编译）

**`verilator_harness/sim_main.cpp`**：
- C++ 仿真主程序，实现文本协议驱动：
  - **stdin 输入**：每行 `reg_we reg_addr reg_wdata reg_re rxd ss_in_n rst_n`
  - **stdout 输出**：首行 CSV 表头，后续每行 43 个覆盖率观测信号值
- 驱动一个完整时钟周期：`clk=0 → 输入稳定 → clk=1 → 采样 → clk=0`
- 接收 `argv[1]=SPEC_DFS_MIN`、`argv[2]=SPEC_HOLD_SS` 作为隐藏参数

**`verilator_harness/run_verilator.py`**：
- `VerilatorHarness` 类：确保编译产物存在，管理文本协议通信
- `run_actions(actions)`：批量运行动作序列，返回每 cycle 信号字典
- `run_and_save_curve()`：运行完整仿真并用 `CoverageSimulator` 计算覆盖率曲线

**`verilator_harness/verilator_dut.py`**：
- `VerilatorDut` 类：`local_sim.SpiXferPublic` 的**透明替换层**
- 启动持久子进程（`subprocess.Popen`），每 cycle 通过 stdin/stdout 通信
- 保持与 `local_sim` 相同的 `step(action)` / `read_signals()` / `close()` 接口
- `harness.backend="verilator"` 时默认使用此实现

**`verilator_harness/obj_dir/`**（预编译产物）：
- Verilator 编译生成的 C++ 源码和共享库（`Vspi_xfer_top.mk`、`Vspi_xfer_top__ALL.a` 等）
- 开箱即用，无需联网编译；参数不匹配时 `build.sh` 自动重编

---

## 三、文件层次与赛题框架的对应关系

```
评测脚本（组委会）            赛题 B.4 节
    ↓ predict() / coverage_state
dut_spec.md → InferenceInterface → action → harness.step()
                    ↓                         ↓
           coverage_simulator.py       local_sim.py / Verilator
                    ↓                         ↓
           coverage_meta.json          RTL *.v → sim_main.cpp
                    ↓                         ↓
           二值覆盖率向量              obj_dir/ 预编译模型
```

| 赛题要求 | 对应文件 | 说明 |
|---------|---------|------|
| 附件 B.3 推理接口 | `inference_interface.py` | 参赛者实现 `predict()` |
| 附件 C 覆盖率模拟 | `coverage_simulator.py` | 替代 VCS 做本地覆盖率采集 |
| 附件 C.4 仿真循环 | `harness.py` | 封装 `run_episode()` 闭环 |
| 附件 A.6 DUT Spec | `dut/dut_spec.md` | 功能规格 + 寄存器映射 |
| 附件 A.5 covergroup | `dut/covergroup.svh` | VCS 用覆盖率定义 |
| 附件 C.5 meta 格式 | `dut/coverage_meta.json` | 模拟器用覆盖率定义 |
| 赛题 4.3.3 开发环境 | `local_sim.py` | 周期精确 Python 模型 |
| 赛题 4.3.3 评测环境 | `verilator_harness/` | 真实 RTL Verilator 仿真 |
| 赛题 4.3.4 基线参考 | `inference_interface.py` 内 `random`/`greedy` | 两种基线方法 |
| 赛题 4.3.1 隐藏参数 | `harness.py` 内 `load_secrets()` | 评测端注入 `eval_secrets_*.json` |

---

## 四、local_sim 与 Verilator 两个后端的关系

### 4.1 为什么做一套 Python 替身（local_sim.py），不直接用 RTL 仿真？

核心原因：**速度、反馈、调试能力**三者不可兼得。

1. **Verilator RTL 仿真慢**：本质上在模拟门级信号翻转。单次 5 万 cycles 完整运行需 30 分钟级，赌博式开发不可取。
2. **`local_sim.py` 是开发加速器**：纯 Python，无 C++ 编译链接与进程通信开销，一次 `step()` 微秒级完成。
3. **`local_sim.py` 暴露了更多中间信号**：`read_signals()` 返回 40+ 个 `cov_*` 信号（`cov_fsm_state_id`, `cov_tx_level`, `cov_hold_ss_cnt`...），在真实 RTL 中这些是经 `verilator --public` 暴露的内部信号，正常顶层端口只有 13 个。

| 层面 | 用途 | 速度 | 可见性 |
|------|------|------|--------|
| `local_sim.py` | 每天跑 1000 次迭代调参 | ⚡ 微秒级 | 全信号可见 |
| Verilator RTL | 验证算法在真实硬件模型上是否有效 | 🐢 毫秒级 | 只暴露 cov_* |
| VCS（评测） | 最终评分 | 🐢 同毫秒级 | 只有二值向量 |

三者覆盖率计算一致（通过同一份 `coverage_meta.json` 保证），只是速度与信号可见性不同。赛题 4.3.2 节"快速"二字即指此设计决策。

### 4.2 两种后端可以互相切换

看 `harness.py` 的构造逻辑：

```python
class SpiXferHarness:
    def __init__(self, secrets=None, backend="verilator"):  # ← 默认就是 Verilator
        ...
        self.backend = backend
        self._dut = self._make_dut()   # ← 根据 backend 选择

    def _make_dut(self):
        if self.backend == "local":
            return self._ls.SpiXferPublic(...)        # ← Python 模型
        return self._mk_verilator_dut()                # ← 真实 RTL
```

两者接口完全一致：

| 接口 | `local_sim.SpiXferPublic` | `verilator_dut.VerilatorDut` |
|------|--------------------------|------------------------------|
| `step(action_dict)` | 纯 Python 状态机更新 | 通过 stdin 发送给 C++ 进程，读 stdout 返回 |
| `read_signals()` | 直接返回内部 cov_* 信号字典 | 解析 C++ 进程输出的 CSV 行 |
| `reset()` | 重置 Python 成员变量 | 杀掉旧进程，重新 spawn |

**结论：它们在 harness 层是互斥的两个后端，切换只需改一个参数。** 但切换不等于等价——VerilatorDut 每次 `step()` 要做 `stdin.write + flush + stdout.readline`（进程间上下文切换 + 管道 I/O），比纯 Python 的 `local_sim` 慢约两个数量级。

### 4.3 README 说"默认 Verilator"才是开发流程

`docker/README.md` 明确：**"默认使用真实 RTL 仿真（backend=verilator）"**。这表示赛题组希望你**默认在真实 RTL 上开发**，`local_sim` 定位为辅：

1. **快速验证思路**——算法雏形切 `local`，秒出结果，确认覆盖率在涨
2. **调试内部信号**——`read_signals()` 40+ 信号，随时打断点
3. **最终验证**——切回 `verilator` 跑完整 5 万 cycles，确认真实 RTL 结果一致

```
┌───────────────────────────────────────────────┐
│ 1. 新想法 → 切 local_sim 试                     │
│    backend="local"  →  几秒出覆盖率曲线          │
│                        不对就改，再试            │
├───────────────────────────────────────────────┤
│ 2. 曲线满意了 → 切 Verilator 确认               │
│    backend="verilator" → 跑一遍完整 5 万 cycles  │
│                          结果一致？OK            │
├───────────────────────────────────────────────┤
│ 3. 评测→ VCS 跑（代码完全一样，换成 VCS 编译）    │
└───────────────────────────────────────────────┘
```

**`local_sim` 是快速迭代的"草稿纸"，Verilator 是"正式提交前的验证"——两者切换只需改一个参数，实测结果应一致，但速度差两个数量级。**

---

## 五、开发流程示例

进入对应题目目录：

```bash
cd /workspace/spi_xfer_public/spi_xfer_public
```

在此目录编写激励生成 agent：实现 `predict(coverage_state, step, max_steps)` 返回动作向量，再通过 `harness.run_episode(agent)` 跑覆盖率闭环。可先运行 `python3 harness.py` 观察自带的公平随机基线结果。

---

## 六、附：赛题评分公式要点

$$Score = \frac{1}{N} \sum_{i=1}^{N} \left(0.6 \times \frac{C_{final}^{(i)} - C_{baseline}^{(i)}}{C_{max}^{(i)} - C_{baseline}^{(i)}} + 0.4 \times \frac{AUC^{(i)} - AUC_{baseline}^{(i)}}{AUC_{max}^{(i)} - AUC_{baseline}^{(i)}}\right) \times 100$$

- $N=3$：评测 DUT 数量
- $C_{final}^{(i)}$：覆盖率终值（分子若为负取 0）
- $AUC^{(i)}$：覆盖率-仿真预算曲线下面积（梯形法，每 1000 cycles 采点）
- 分母有下限保障：$C_{max}^{(i)} = \max(C_{max}^{(i)}, C_{baseline}^{(i)} \times 1.5)$（两项独立触发）
- **只有显著超越随机基线才能获得高分**，所以必须在覆盖率**终值**与**收敛速度(AUC)**上都超过基线
