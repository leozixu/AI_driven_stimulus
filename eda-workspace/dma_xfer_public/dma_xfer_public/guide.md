# dma_xfer_public 初始激励序列设计说明

> 本文仅依据 `dut/dut_spec.md` 与 `dut/covergroup.svh` 两个文件推导，不依赖任何实现代码。
> 所有覆盖率结论都是**按覆盖组语义逐 bin 解析得出**，非实测值。

---

## 1. 动作向量 → DUT 端口 的映射

动作 15 维（`dut_spec.md:77-94`）：

```
action = [ch_sel, conf_wr, conf_field, d0, d1, d2, d3, start, pad0..pad6]
```

解码到端口：

| 动作位 | 端口 | 说明 |
|---|---|---|
| `a[0]` `ch_sel` | `conf_ch[1:0]` | 目标通道，`% 4` |
| `a[1]` `conf_wr` | `conf_wr` | 写使能；**仅当 `start=0` 时执行** |
| `a[2]` `conf_field` | `conf_field[1:0]` | 0=saddr / 1=daddr / 2=打包 |
| `a[3..6]` = `d0..d3` | `conf_data[31:0]` | 小端拼装：`conf_data = d3<<24 \| d2<<16 \| d1<<8 \| d0` |
| `a[7]` `start` | `start[3:0]` | `ch_sel` 决定拉高哪一位；**上升沿锁存请求** |

本文用四个助记符书写序列（`0×7` 表示 7 个占位 0）：

```
W(C, F, V)      写字段：  [C, 1, F, V&0xFF, (V>>8)&0xFF, (V>>16)&0xFF, (V>>24)&0xFF, 0, 0×7]
P(C, L, M, b)   写打包：  W 的变体，V = (b<<21) | (M<<16) | L
S(C)            启动：    [C, 0, 0, 0,0,0,0, 1, 0×7]
N(n)            n 拍空转：全零动作
```

### 1.1 打包字段的位域（`dut_spec.md:34-38`）

```
conf_data[15:0]  = L  传输长度（块数）
conf_data[20:16] = M  dir_mode：bit3 = 方向（0=MEM→MEM，1=MEM→IO），bit2:0 = 模式
conf_data[23:21] = b  burst（0~7）
```

于是 `d2` 这一字节同时承载 `M` 与 `b`：

```
d2 = (M & 0x1F) | ((b & 0x7) << 5)          d3 = 0
```

**别把方向塞进 `b`**：`M` 是 5 bit（`bit3` 就是方向位），`b` 只有 3 bit、合法范围 0~7。
要切到 MEM→IO，改的是 `M` 的 bit3（记作 `M|8`），不是 `b`。
`P(C, L, M, b)` 的四个位置固定是「通道、长度、dir_mode、burst」。

**注意**：配置写只在目标通道 IDLE 且不在 hold 窗口时生效（`dut_spec.md:27-28`），
且必须 `start=0`（`dut_spec.md:85`）。所以"编程"和"启动"永远不能同拍。

### 1.2 两条必须遵守的时序约束

1. **上升沿**：`S(C)` 之后必须紧跟至少一拍 `start=0`，否则位形持续拉高不再产生上升沿。
2. **DONE 停留**：剩余块数归零后通道停在 DONE 一拍再回 IDLE（`dut_spec.md:68`）。
   重编程同一通道前要留出这一拍，否则配置写无效。

---

## 2. 覆盖组对信号的要求（摘自 `covergroup.svh`）

| 覆盖点 | 采样信号 | 采样条件 | bins |
|---|---|---|---|
| `ch0..3_state_cp` | `chN_state` | 每拍 | idle/active/done（值 0/1/2）×4 |
| `arb_winner_cp` | `arb_winner` | **`iff (arb_valid)`** | win0..win3（值 0..3） |
| `dir_dir_cp` | `dir_dir = dir_dir_signal[3]` | 每拍 | mem_mem(0) / mem_io(1) |
| `cfg_burst_cp` | `cfg_burst` | 每拍 | burst0..burst7（值 0..7） |
| `active_ch_cp` | `active_ch` | 每拍 | ch0_act..ch3_act（值 0..3） |
| `arb_conflict_cp` | `arb_conflict` | 每拍 | no_conflict(0) / conflict(1) |
| `hold_cp` | `hold` | 每拍 | hold_off(0) / hold_on(1) |
| `saddr_cp` / `daddr_cp` | `cfg_saddr` / `cfg_daddr` | 每拍 | 0 / 1 / 2³²−2 / 2³²−1 |
| `len_cp` | `cfg_len` | 每拍 | 0 / 1 / 2¹⁶−2 / 2¹⁶−1 |
| `done_ok_cp` | `done_ok` | **`iff (done_ok_valid)`** | 0 / 1 / 2 / 3 |

**两处 `iff` 是关键**：`arb_winner_cp` 和 `done_ok_cp` 只在有效拍采样——
不真正跑一次仲裁、不真正完成一次正确传输，这两个覆盖点永远不会翻绿。

### 2.1 交叉项的组合（`covergroup.svh:146-199`）

```
arb_hold_cp    : (arb_winner, hold)      win0..3 × {hold_on, hold_off}      8
done_ch_cp     : (done_ok, active_ch)    [0,0] [1,1] [2,2] [3,3]            4   ← 对角线
len_state_cp   : (cfg_len, ch0_state)    [1, done0] [65535, idle0]          2
addr_dir_cp    : (cfg_saddr, dir_dir)    saddr∈{0,1,0xFFFFFFFF}×{mem,io}    6
burst_hold_cp  : (cfg_burst, hold)       burst∈{0,7,1}×{hold_off,on}        6
dir_done_cp    : (dir_dir, done_ok)      mem×{0,1}   io×{2,3}               4
```

**`done_ch_cp` 只有对角线 bin**，意味着：类别 0 必须跑在通道 0 上、类别 1 在通道 1 上，
依此类推。配合 `dir_done_cp` 的 `mem_done0 / mem_done1 / io_done2 / io_done3`，可以确定：

```
类别 0 → MEM 模式 → 通道 0
类别 1 → MEM 模式 → 通道 1
类别 2 → IO  模式 → 通道 2
类别 3 → IO  模式 → 通道 3
```

即 4 个"正确" `dir_mode` 中，**2 个在 MEM 侧（bit3=0）、2 个在 IO 侧（bit3=1）**。
这条推理是 §3 块 4 能把候选空间压到 16 个的全部依据。

### 2.2 时序序列 Q1–Q12 与覆盖组 bin 的对应

`dut_spec.md:113-127` 用 Q1–Q12 指代 12 条 SVA 序列，它们在覆盖组里是
`temporal_sequences`（`covergroup.svh:205-218`）的 12 个 `hit` bin，各由一个 `cov_seqN` 信号驱动：

| spec 编号 | 序列名 | 覆盖组 bin | 信号 |
|---|---|---|---|
| Q1 | 完整握手 | `seq_full_handshake` | `cov_seq1` |
| Q2 | 多拍活跃 | `seq_multi_beat` | `cov_seq2` |
| Q3 | 无中断正确传输 | `seq_ok_uninterrupt` | `cov_seq3` |
| Q4 | hold 保持 | `seq_hold_persist` | `cov_seq4` |
| Q5 | hold→上报 | `seq_hold_then_ok` | `cov_seq5` |
| Q6 | 冲突解析 | `seq_arb_resolved` | `cov_seq6` |
| Q7 | 仲裁连续 | `seq_arb_cont` | `cov_seq7` |
| Q8 | 完成观测 | `seq_done_observed` | `cov_seq8` |
| Q9 | 空闲稳定 | `seq_idle_stable` | `cov_seq9` |
| Q10 | 快速收尾 | `seq_quick_done` | `cov_seq10` |
| Q11 | 通道切换 | `seq_chan_switch` | `cov_seq11` |
| Q12 | done 一致 | `seq_done_consistent` | `cov_seq12` |

注意 Q3 在覆盖组里的 bin 名是 `seq_ok_uninterrupt`（**没有结尾的 ed**），
与 spec 文字里的"无中断"描述无关，纯粹是两处命名不统一。

---

## 3. 初始激励序列

### 块 1 — 边界值配置写（11 拍，全程不启动）

针对 `saddr_cp / daddr_cp / len_cp` 各 4 个 bin。通道 0 保持 IDLE，写入即刻更新 cookie。

| 拍 | 动作 | 期望命中 |
|---|---|---|
| 1 | `W(0,0,1)` | `saddr_one` |
| 2 | `W(0,0,0xFFFFFFFE)` | `saddr_upper_m1` |
| 3 | `W(0,0,0xFFFFFFFF)` | `saddr_allones` |
| 4 | `W(0,1,1)` | `daddr_one` |
| 5 | `W(0,1,0xFFFFFFFE)` | `daddr_upper_m1` |
| 6 | `W(0,1,0xFFFFFFFF)` | `daddr_allones` |
| 7 | `P(0,1,0,0)` | `len_one` |
| 8 | `P(0,0xFFFE,0,0)` | `len_upper_m1` |
| 9 | `P(0,0xFFFF,0,0)` | `len_allones` + **`len_hi_idle`**（cfg_len=0xFFFF 且 ch0 仍 IDLE） |
| 10 | `W(0,0,0)` | 复原 saddr |
| 11 | `W(0,1,0)` | 复原 daddr |

第 9 拍同时拿到 `len_x_state` 交叉项的一条 `len_hi_idle`——**必须趁 ch0 还在 IDLE 时写
`0xFFFF`**，一旦启动过就再也凑不齐这个组合。

### 块 2 — 单通道独占总线（13 拍）

只让通道 0 请求，独占总线连续 8 拍，用来打满"多拍"类时序序列。

| 拍 | 动作 | 说明 |
|---|---|---|
| 1 | `W(0,0,0)` | saddr=0 |
| 2 | `W(0,1,0)` | daddr=0 |
| 3 | `P(0,8,0,0)` | L=8, M=0, b=0 |
| 4 | `S(0)` | 上升沿启动 |
| 5–13 | `N(9)` | 8 拍授权 + 1 拍 DONE |

命中：`active0`、`done0`、`win0`（arb_valid=1 且 winner=0）、`ch0_act`、`no_conflict`
序列：**Q1 完整握手**、**Q2 多拍活跃**（ACTIVE 连续 ≥3）、**Q7 仲裁连续**、**Q8 完成观测**

### 块 3 — 四通道并发（12 + 8 + 20 = 40 拍）

编程四个通道，`burst` 与方向错开，然后逐拍启动，让四个请求同时压在仲裁器上。

| 拍 | 动作 |
|---|---|
| 1–3 | `W(0,0,0)` `W(0,1,0)` `P(0,4,0,0)` |
| 4–6 | `W(1,0,0)` `W(1,1,0)` `P(1,4,0,1)` |
| 7–9 | `W(2,0,0)` `W(2,1,0)` `P(2,4,8,7)` |
| 10–12 | `W(3,0,0)` `W(3,1,0)` `P(3,4,8,1)` |
| 13–20 | `S(0)` `N(1)` `S(1)` `N(1)` `S(2)` `N(1)` `S(3)` `N(1)` |
| 21–40 | `N(20)` |

`M=8` 表示 `bit3=1` → MEM→IO；`M=0` 是 MEM→MEM。每个通道穿插 `N(1)` 是为了给出干净的
上升沿，也顺便避开"连续两拍同一通道"造成的边沿丢失。

命中：`win0..win3`、`ch0_act..ch3_act`、`active0..active3`、`done0..done3`、
`conflict`（≥2 通道同时请求）、`dir_dir.mem_io`
交叉：`arb_x_hold` 的 4 个 `winN_nohold`
序列：**Q6 冲突解析**（conflict 后 ≤2 拍被解决）、**Q11 通道切换**（相邻两拍不同通道获授权）

### 块 4 — 隐藏正确模式探测（自适应，≤16 轮 × ≤520 拍）

提升幅度最大、也最耗时的一块。候选空间被 §2.1 的推理压到 16 个：

```
MEM 侧：M ∈ {0,1,2,3,4,5,6,7}        （bit3=0，其中 2 个正确）
IO  侧：M ∈ {8,9,10,11,12,13,14,15}  （bit3=1，其中 2 个正确）
```

单轮探测（MEM 候选跑通道 0，IO 候选跑通道 2；`L=1` 让传输最快走完）：

```
W(C,0,0) → W(C,1,0) → P(C, 1, M, b) → S(C) → 等待
```

等待期的判定规则（**只用 bin 命中反馈**，正是评测端能拿到的东西）：

| 观察到 | 结论 | 下一步 |
|---|---|---|
| `hold_cp.hold_on` 翻绿 | `M` 命中隐藏正确子集 | 继续等，直到 `xfer_done_ok.done_ok_k` 翻绿 → 记录 **M ↔ 类别 k** |
| 直接出现 `xfer_done_ok.done_ok_k` | 同上（hold 窗口已跑完） | 再等 ≥1 拍让通道回 IDLE |
| 满 520 拍仍无动静 | `M` 非正确 | 换下一个候选 |

520 = `N` 上界 512（`dut_spec.md:17`）+ 完成/上报开销 8 拍。

**必须等满 hold 窗口才能发下一轮**：`dut_spec.md:74-75` 明确仲裁器在 hold 期间屏蔽所有请求，
提前编程或启动都会被丢弃，反而浪费更多拍。

**早停**：一旦 4 个类别（0/1/2/3）都找到对应模式就停止扫描。典型只需 8~12 轮。

### 块 5 — 正确模式回归匹配通道（4 轮）

按 §2.1 推出的"类别 k 落通道 k"，把探测结果重跑一遍：

| 轮次 | 动作 | 打的 bin |
|---|---|---|
| 1 | `W(0,0,0) W(0,1,0) P(0,L,M₀,0) S(0)` | `done_ch0`、`mem_done0`、`win0_hold`、`burst0_hold` |
| 2 | `W(1,0,0) W(1,1,0) P(1,L,M₁,1) S(1)` | `done_ch1`、`mem_done1`、`win1_hold`、`burst1_hold` |
| 3 | `W(2,0,0) W(2,1,0) P(2,L,M₂,7) S(2)` | `done_ch2`、`io_done2`、`win2_hold`、`burst7_hold` |
| 4 | `W(3,0,0) W(3,1,0) P(3,L,M₃,1) S(3)` | `done_ch3`、`io_done3`、`win3_hold` |

命中：`done_ok_0..3`、`hold_on`、`done_ch_cross` 全 4 个、`dir_done_cp` 全 4 个、
`arb_x_hold` 的 `winN_hold`、`burst_hold_cp` 的 `burst{0,1,7}_hold`
序列：**Q3 无中断正确传输**、**Q4 hold 保持**（N ≥ 8 > 4）、**Q5 hold→上报**、**Q12 done 一致**

`M_k` 是块 4 探测出的、类别为 k 的 `dir_mode`。每轮同样要等满 hold 窗口。

### 块 6 — 非正确模式补齐（约 30 拍）

取块 4 里已确认**非正确**的任一模式 `M_bad`，用它做短传输：

| 动作 | 期望命中 |
|---|---|
| `P(0,1,M_bad,0)` + `S(0)` + `N(2)` | **Q10 快速收尾**（ACTIVE→DONE ≤2 且无 hold）、`len1_done` |
| `W(0,0,1)` + `P(0,L,M_bad,0)` + `S(0)` | `saddr1_mem` |
| `W(0,0,0xFFFFFFFF)` + `P(0,L,M_bad,0)` + `S(0)` | `saddr_hi_mem` |
| `W(0,0,1)` + `P(0,L,M_bad\|8,0)` + `S(0)` | `saddr1_io` |
| `W(0,0,0xFFFFFFFF)` + `P(0,L,M_bad\|8,0)` + `S(0)` | `saddr_hi_io` |
| `P(0,L,M_bad,7)` + `S(0)` | `burst7_nohold` |
| `P(0,L,M_bad,1)` + `S(0)` | `burst1_nohold` |

`saddr0_mem` / `saddr0_io` 已由块 3 命中，`burst0_nohold` 由复位默认命中，不必重做。

### 块 7 — burst 全扫描（8 × 约 12 拍）

`cfg_burst` 需要 burst0~7 各出现一次。逐个 burst 单独跑一次单通道传输：

```
P(0, L, M_bad, b) + S(0) + N(10)         对 b = 0..7
```

`burst0/1/7` 前面已命中，实际只需补 `b = 2,3,4,5,6` 五次。

---

## 4. 预期覆盖

按 §2 逐 bin 对照本序列：

全部 92 个 bin 逐一列出归属，可对照 `covergroup.svh` 逐条核验：

| 覆盖点 | bins | 逐 bin 来源 |
|---|---|---|
| `ch0..3_state_cp` | 12 | `idle0` `idle1` `idle2` `idle3` ← 复位默认；`active0` `done0` ← 块 2；`active1` `active2` `active3` `done1` `done2` `done3` ← 块 3 |
| `arb_winner_cp` | 4 | `win0` ← 块 2；`win1` `win2` `win3` ← 块 3 |
| `dir_dir_cp` | 2 | `mem_mem` ← 块 2；`mem_io` ← 块 3 |
| `cfg_burst_cp` | 8 | `burst0` ← 块 2；`burst1` `burst7` ← 块 6；`burst2` `burst3` `burst4` `burst5` `burst6` ← 块 7 |
| `active_ch_cp` | 4 | `ch0_act` ← 块 2；`ch1_act` `ch2_act` `ch3_act` ← 块 3 |
| `arb_conflict_cp` | 2 | `no_conflict` ← 块 2；`conflict` ← 块 3 |
| `hold_cp` | 2 | `hold_off` ← 块 1~3；`hold_on` ← 块 4/5 |
| `saddr_cp` `daddr_cp` | 8 | `saddr_zero` `daddr_zero` ← 复位默认；其余 6 个 ← 块 1 |
| `len_cp` | 4 | `len_zero` ← 复位默认；`len_one` `len_upper_m1` `len_allones` ← 块 1 |
| `done_ok_cp` | 4 | `done_ok_0` `done_ok_1` `done_ok_2` `done_ok_3` ← 块 4 探测出、块 5 复现 |
| `arb_hold_cp` | 8 | `win0_nohold` ← 块 2；`win1_nohold` `win2_nohold` `win3_nohold` ← 块 3；`win0_hold..win3_hold` ← 块 5 |
| `done_ch_cp` | 4 | `done_ch0` `done_ch1` `done_ch2` `done_ch3` ← 块 5 |
| `len_state_cp` | 2 | `len_hi_idle` ← 块 1；`len1_done` ← 块 6 |
| `addr_dir_cp` | 6 | `saddr0_mem` ← 块 2；`saddr0_io` ← 块 3；`saddr1_mem` `saddr1_io` `saddr_hi_mem` `saddr_hi_io` ← 块 6 |
| `burst_hold_cp` | 6 | `burst0_nohold` ← 块 2；`burst7_nohold` `burst1_nohold` ← 块 6；`burst0_hold` `burst1_hold` `burst7_hold` ← 块 5 |
| `dir_done_cp` | 4 | `mem_done0` `mem_done1` `io_done2` `io_done3` ← 块 5 |
| `temporal_sequences` | 12 | Q1 Q2 Q7 Q8 ← 块 2；Q6 Q11 ← 块 3；Q3 Q4 Q5 Q12 ← 块 5；Q10 ← 块 6；Q9 ← 块 4/5 的等待期 |
| **合计** | **92** | |

即**逐 bin 推导可达 92/92**。

其中真正"白送"的只有复位默认值那一小撮（`idle0..3`、`*_zero` 三个，
以及 `mem_mem` 等 `value=0` 的叶子）——其余全部要求 DUT 真正动起来。
注意本表**没有**把 `win0`、`burst0`、`winN_nohold` 算作白送：
`arb_winner_cp` 带 `iff (arb_valid)`，复位时未必采样，
所以它们一律挂在块 2/3 上，不依赖这个不确定点。

### 周期预算

| 块 | 拍数 |
|---|---|
| 1 | 11 |
| 2 | 13 |
| 3 | 40 |
| 4 | ≤ 16 × 524 ≈ 8400（带早停，典型 8~12 轮，约 4~6k） |
| 5 | 4 × 525 ≈ 2100 |
| 6 | ~30 |
| 7 | ~60 |
| **合计** | **≈ 10.7k（典型 ~7k）** |

在赛题 5 万~10 万周期/DUT 的预算内，块 4 是唯一的大头。
若预算紧张，块 4 可以只扫 MEM 侧或 IO 侧——代价是丢掉一半的 `xfer_done_ok` 与
`dir_done_cp`。

---

## 5. 必须说明的不确定性

这份序列建立在三条**从这两个文件推出的假设**上，任何一条不成立都要调整：

1. **候选空间是 16 个而非 32 个**。依据是 `covergroup.svh:193` 的注释与 `dir_done_cp` 的
   `mem_done0/1 + io_done2/3` 组合。若实际"正确"模式不遵循 bit3=方向 这个约定，
   候选要放宽到全部 32 个 `dir_mode`（`L=1`，每轮仍然 ≤520 拍，总预算翻倍到 ~16k）。
2. **`cfg_saddr` / `cfg_daddr` / `cfg_len` / `cfg_burst` 这些 cookie 在配置写时即更新**。
   `dut_spec.md:49` 对 `cov_saddr/cov_daddr/cov_len` 的描述是"最近获总线**或**最近编程通道"
   ——两条路径都算。若实际只在总线授权时更新，块 1 与块 6 的边界值必须改为
   "先写值、再让该通道获一次授权"才能命中。
3. **`N` 的实际值未知，必须按上界 512 等**。这是 `dut_spec.md:17` 给出的区间。
   若能在运行期观察到 `hold_on` 与 `done_ok_k` 之间的间隔，可把它测出来并据此缩短后续等待。

另外，块 4/5 的等待逻辑天然会产出一长串连续的"全局空闲"拍，
顺带满足 **Q9 空闲稳定**（≥3 拍）——不需要专门设计。

---

## 6. 接进 `_policy()` 的方式

本文的序列是"初始激励"——即 `_policy` 在 `step` 较小时应当原样吐出的动作表。
建议实现为按块组织的状态机：

```
step 0..10     块 1
step 11..21    块 2
step 22..61    块 3
step 62..      块 4 探测循环（读到 hold_on / done_ok_k 后推进状态）
...
```

块 4 之后的所有块都依赖探测结果（`M_bad` 与四个 `M_k`），所以从块 4 起必须由
**覆盖率向量反馈驱动**，而不能写死拍数。可用的反馈就是 `self.bins[i]` 与
`coverage_state[i]` 的对应关系——`self.bins` 的下标即 `coverage_state` 的下标。

> 注意：`_policy` 返回的向量长度应为 `self.dim`（本 DUT 为 15）。
> 骨架的 `_as_action` 不会替你截断或补齐。

---

## 附录 A — 可直接粘贴的动作向量（块 1~3，共 64 拍）

复制下面整段。`[0]*15` 是空转拍，`PROLOGUE` 展开后就是 64 个 15 维 float 向量。

```python
# ---- 助记符 → 动作向量 ----
def W(C, F, V):
    """写通道 C 的字段 F，值 V（小端拆成 d0..d3）"""
    return [C, 1, F, V & 0xFF, (V >> 8) & 0xFF, (V >> 16) & 0xFF, (V >> 24) & 0xFF,
            0, 0, 0, 0, 0, 0, 0, 0]

def P(C, L, M, b):
    """写打包字段：L=长度, M=dir_mode(bit3=方向), b=burst(0~7)"""
    return W(C, 2, (b << 21) | (M << 16) | L)

def S(C):
    """启动通道 C（start 上升沿）"""
    return [C, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0]

N = [0] * 15          # 空转一拍

# ---- 块 1：ch0 边界值配置写（11 拍，全程不启动）----
B1 = [
    W(0, 0, 1),             # saddr_one
    W(0, 0, 0xFFFFFFFE),    # saddr_upper_m1
    W(0, 0, 0xFFFFFFFF),    # saddr_allones
    W(0, 1, 1),             # daddr_one
    W(0, 1, 0xFFFFFFFE),    # daddr_upper_m1
    W(0, 1, 0xFFFFFFFF),    # daddr_allones
    P(0, 1, 0, 0),          # len_one
    P(0, 0xFFFE, 0, 0),     # len_upper_m1
    P(0, 0xFFFF, 0, 0),     # len_allones + len_hi_idle（此刻 ch0 仍 IDLE）
    W(0, 0, 0),             # 复原 saddr
    W(0, 1, 0),             # 复原 daddr
]

# ---- 块 2：ch0 独占总线跑满 8 拍（13 拍）----
B2 = [W(0, 0, 0), W(0, 1, 0), P(0, 8, 0, 0), S(0)] + [N] * 9

# ---- 块 3：四通道并发（40 拍）----
B3 = [
    W(0, 0, 0), W(0, 1, 0), P(0, 4, 0, 0),      # ch0: MEM→MEM, burst 0
    W(1, 0, 0), W(1, 1, 0), P(1, 4, 0, 1),      # ch1: MEM→MEM, burst 1
    W(2, 0, 0), W(2, 1, 0), P(2, 4, 8, 7),      # ch2: MEM→IO , burst 7
    W(3, 0, 0), W(3, 1, 0), P(3, 4, 8, 1),      # ch3: MEM→IO , burst 1
    S(0), N, S(1), N, S(2), N, S(3), N,         # 逐个拉起，留出上升沿
] + [N] * 20

PROLOGUE = B1 + B2 + B3        # 11 + 13 + 40 = 64 拍
```

最小可测的 `_policy`——先只回放这段，确认覆盖率跳变：

```python
def _policy(self, coverage_state, step, max_steps):
    if step < len(PROLOGUE):
        return PROLOGUE[step]
    return None            # 之后空转，等接入块 4 的探测逻辑
```

前三条展开后的字面量（便于核对拼装是否正确）：

```
W(0, 0, 1)           -> [0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
W(0, 0, 0xFFFFFFFE)  -> [0, 1, 0, 254, 255, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0]
P(2, 4, 8, 7)        -> [2, 1, 2, 4, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0]
```

`P(2,4,8,7)` 的 `d2=232` 可自行验算：`232 = 8 | (7<<5) = 8 + 224`，
即 `dir_mode=8`（bit3=1 → IO）、`burst=7`。

---

## 附录 B — 块 4~7 的生成式

后面四块依赖探测结果，无法写成固定表，用生成器表达。`M_ok[k]` 是类别 k 对应的
`dir_mode`，`M_bad` 是任一已确认非正确的模式（块 4 顺带产出）。

```python
# ---- 块 4：探测。每轮 = 4 拍驱动 + ≤520 拍等待 ----
def probe_round(C, M, b=0):
    return [W(C, 0, 0), W(C, 1, 0), P(C, 1, M, b), S(C)]

CAND_MEM = list(range(0, 8))       # bit3=0，含 2 个正确
CAND_IO  = list(range(8, 16))      # bit3=1，含 2 个正确
PROBE_C  = {0: 0, 1: 0, 2: 2, 3: 2}   # MEM 候选跑通道 0，IO 候选跑通道 2

# ---- 块 5：正确模式回归匹配通道，(burst)=(0,1,7,1) ----
def replay_round(k, L=3):
    b = (0, 1, 7, 1)[k]
    return [W(k, 0, 0), W(k, 1, 0), P(k, L, M_ok[k], b), S(k)]

# ---- 块 6：非正确模式补齐 ----
def block6(M_bad, L=3):
    return ([P(0, 1, M_bad, 0), S(0)]                              # Q10 + len1_done
            + [W(0, 0, 1), P(0, L, M_bad, 0), S(0)]                 # saddr1_mem
            + [W(0, 0, 0xFFFFFFFF), P(0, L, M_bad, 0), S(0)]        # saddr_hi_mem
            + [W(0, 0, 1), P(0, L, M_bad | 8, 0), S(0)]             # saddr1_io
            + [W(0, 0, 0xFFFFFFFF), P(0, L, M_bad | 8, 0), S(0)]    # saddr_hi_io
            + [P(0, L, M_bad, 7), S(0)]                             # burst7_nohold
            + [P(0, L, M_bad, 1), S(0)])                            # burst1_nohold

# ---- 块 7：burst 2~6 扫描 ----
def block7(M_bad, L=3):
    out = []
    for b in (2, 3, 4, 5, 6):
        out += [P(0, L, M_bad, b), S(0)] + [N] * (L + 3)
    return out
```

每轮驱动后必须补足等待拍：`S(C)` 之后跟 `[N] * (L + 3)` 让传输走完；
块 4/5 则要一直等到 `hold_on` / `done_ok_k` 翻绿或满 520 拍，不能写死拍数。
