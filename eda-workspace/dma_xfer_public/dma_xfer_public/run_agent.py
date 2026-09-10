#!/usr/bin/env python3
"""
run_agent.py — 独立 driver，把 inference_interface.py 的 InferenceInterface
接进 harness.run_episode() 跑覆盖率闭环。

为什么不直接改 harness.py：harness.py 的 __main__ 用的是它自己内联的 RandAgent，
不 import inference_interface.py，所以改接口文件后 `python3 harness.py` 不会有任何反应。
本脚本不改动组委会提供的任何一行代码。

用法（在包目录下）：
    python3 run_agent.py                                # 默认跑法
    python3 run_agent.py --dut-dir /path/to/other_pkg   # 换 DUT 包（同一份接口代码）

跑法由下面的常量决定，没有对应的命令行开关——API 和打印都引用同一组常量，
避免出现"打印的说 local、实际跑 verilator"这种自相矛盾。要快速迭代就把
BACKEND 改成 "local"（纯 Python 镜像，秒级），验完再改回来。
"""

import argparse
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))

BACKEND = "verilator"   # verilator=真实 RTL（默认）；local=纯 Python 镜像（快）
MAX_STEPS = 20000
INTERVAL = 1000         # 对齐 eda_race.md 5.1：AUC 每 1000 周期采样一次


def trapezoid_auc(curve):
    """覆盖率-周期曲线的梯形积分，按周期跨度归一化（对齐 eda_race.md 5.1 的 AUC 口径）。

    curve: [(step, coverage_fraction), ...]，scale 在 0/1 之间。
    """
    if not curve:
        return 0.0
    xs = [float(s) for s, _ in curve]
    ys = [float(c) for _, c in curve]
    if len(xs) == 1:
        return ys[0]
    area = 0.0
    for i in range(1, len(xs)):
        area += (xs[i] - xs[i - 1]) * (ys[i] + ys[i - 1]) / 2.0
    span = xs[-1] - xs[0]
    return area / span if span > 0 else ys[-1]


def main():
    ap = argparse.ArgumentParser(description="跑 InferenceInterface 的覆盖率闭环")
    ap.add_argument("--dut-dir", default=HERE,
                    help="DUT 包目录（含 harness.py / dut/），默认本文件所在目录")
    args = ap.parse_args()

    dut_dir = os.path.abspath(args.dut_dir)
    if not os.path.exists(os.path.join(dut_dir, "harness.py")):
        print(f"[driver] 找不到 {dut_dir}/harness.py", file=sys.stderr)
        return 1
    sys.path.insert(0, dut_dir)

    import harness                                       # noqa: E402
    from inference_interface import InferenceInterface   # noqa: E402

    inf = InferenceInterface(
        dut_spec_path=os.path.join(dut_dir, "dut", "dut_spec.md"),
        covergroup_path=os.path.join(dut_dir, "dut", "covergroup.svh"),
    )
    print(f"[driver] dut_dir={dut_dir}")
    print(f"[driver] dim={inf.dim} total_bins={inf.total_bins} "
          f"backend={BACKEND} max_steps={MAX_STEPS} interval={INTERVAL}")

    curve = harness.run_episode(inf, max_steps=MAX_STEPS,
                                interval=INTERVAL, backend=BACKEND)

    print("[driver] curve:", [(s, round(c, 4)) for s, c in curve])
    print(f"[driver] final coverage = {curve[-1][1] * 100:.2f}%  "
          f"AUC = {trapezoid_auc(curve):.4f}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
