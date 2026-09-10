// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_xfer_top.h for the primary calling header

#include "Vspi_xfer_top__pch.h"
#include "Vspi_xfer_top_spi_xfer_top.h"

VL_INLINE_OPT void Vspi_xfer_top_spi_xfer_top___ico_sequent__TOP__spi_xfer_top__0(Vspi_xfer_top_spi_xfer_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_xfer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vspi_xfer_top_spi_xfer_top___ico_sequent__TOP__spi_xfer_top__0\n"); );
    // Init
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_hf0b0fd97__0;
    u_mstfsm__DOT____VdfgTmp_hf0b0fd97__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_h17ec1c85__0;
    u_mstfsm__DOT____VdfgTmp_h17ec1c85__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_hc0aea06c__0;
    u_mstfsm__DOT____VdfgTmp_hc0aea06c__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_hda122231__0;
    u_mstfsm__DOT____VdfgTmp_hda122231__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_h9cc55e2e__0;
    u_mstfsm__DOT____VdfgTmp_h9cc55e2e__0 = 0;
    // Body
    vlSelf->u_regfile__DOT__tx_full = vlSelf->cov_tx_full;
    vlSelf->u_regfile__DOT__tx_empty = vlSelf->cov_tx_empty;
    vlSelf->u_regfile__DOT__tx_level = vlSelf->cov_tx_level;
    vlSelf->u_regfile__DOT__rx_full = vlSelf->cov_rx_full;
    vlSelf->u_regfile__DOT__rx_empty = vlSelf->cov_rx_empty;
    vlSelf->u_regfile__DOT__rx_level = vlSelf->cov_rx_level;
    vlSelf->u_regfile__DOT__rx_pop_data = vlSelf->cov_rx_data;
    vlSelf->u_fifo__DOT__tx_full = vlSelf->cov_tx_full;
    vlSelf->u_fifo__DOT__tx_empty = vlSelf->cov_tx_empty;
    vlSelf->u_fifo__DOT__rx_full = vlSelf->cov_rx_full;
    vlSelf->u_fifo__DOT__rx_empty = vlSelf->cov_rx_empty;
    vlSelf->u_fifo__DOT__tx_level = vlSelf->cov_tx_level;
    vlSelf->u_fifo__DOT__rx_level = vlSelf->cov_rx_level;
    vlSelf->u_fifo__DOT__rx_pop_data = vlSelf->cov_rx_data;
    vlSelf->u_sclkgen__DOT__sclk_active = vlSelf->cov_scpol;
    vlSelf->u_sclkgen__DOT__sclk_re = vlSelf->cov_sclk_re;
    vlSelf->u_sclkgen__DOT__sclk_fe = vlSelf->cov_sclk_fe;
    vlSelf->u_mstfsm__DOT__tx_empty = vlSelf->cov_tx_empty;
    vlSelf->u_mstfsm__DOT__tx_fifo_level = vlSelf->cov_tx_level;
    vlSelf->u_mstfsm__DOT__sclk_re = vlSelf->cov_sclk_re;
    vlSelf->u_mstfsm__DOT__sclk_fe = vlSelf->cov_sclk_fe;
    vlSelf->u_mstfsm__DOT__frf = vlSelf->cov_frf;
    vlSelf->u_mstfsm__DOT__scph = vlSelf->cov_scph;
    vlSelf->u_mstfsm__DOT__tmod = vlSelf->cov_tmod;
    vlSelf->u_mstfsm__DOT__ndf = vlSelf->cov_ndf;
    vlSelf->u_mstfsm__DOT__ss_tgl_en = vlSelf->cov_ss_tgl_en;
    vlSelf->u_mstfsm__DOT__baud2 = vlSelf->cov_baud2;
    vlSelf->u_mstfsm__DOT__cov_fsm_state = vlSelf->cov_fsm_state;
    vlSelf->u_mstfsm__DOT__cov_bit_cnt = vlSelf->cov_bit_cnt;
    vlSelf->u_mstfsm__DOT__cov_frame_cnt = vlSelf->cov_frame_cnt;
    vlSelf->u_mstfsm__DOT__cov_last_frame = vlSelf->cov_last_frame;
    vlSelf->u_mstfsm__DOT__cov_hold_ss_cnt = vlSelf->cov_hold_ss_cnt;
    vlSelf->u_mstfsm__DOT__cov_s0 = vlSelf->cov_s0;
    vlSelf->u_mstfsm__DOT__cov_s1 = vlSelf->cov_s1;
    vlSelf->u_shift__DOT__frf = vlSelf->cov_frf;
    vlSelf->u_shift__DOT__srl_test = vlSelf->cov_srl_test;
    vlSelf->u_shift__DOT__cov_txd = vlSelf->cov_txd;
    vlSelf->dfs = vlSelf->cov_dfs;
    vlSelf->frf = vlSelf->cov_frf;
    vlSelf->scph = vlSelf->cov_scph;
    vlSelf->scpol = vlSelf->cov_scpol;
    vlSelf->tmod = vlSelf->cov_tmod;
    vlSelf->srl_test = vlSelf->cov_srl_test;
    vlSelf->ss_tgl_en = vlSelf->cov_ss_tgl_en;
    vlSelf->sclk_re = vlSelf->cov_sclk_re;
    vlSelf->sclk_fe = vlSelf->cov_sclk_fe;
    vlSelf->baud2 = vlSelf->cov_baud2;
    vlSelf->ndf = vlSelf->cov_ndf;
    vlSelf->tx_level = vlSelf->cov_tx_level;
    vlSelf->rx_level = vlSelf->cov_rx_level;
    vlSelf->tx_empty = vlSelf->cov_tx_empty;
    vlSelf->tx_full = vlSelf->cov_tx_full;
    vlSelf->rx_empty = vlSelf->cov_rx_empty;
    vlSelf->rx_full = vlSelf->cov_rx_full;
    vlSelf->rx_pop_data = vlSelf->cov_rx_data;
    vlSelf->u_fifo__DOT__tx_rd_ok = ((~ (IData)(vlSelf->cov_tx_empty)) 
                                     & (IData)(vlSelf->u_shift__DOT__tx_pop_ir));
    vlSelf->u_fifo__DOT__rx_wr_ok = ((~ (IData)(vlSelf->cov_rx_full)) 
                                     & (IData)(vlSelf->u_shift__DOT__rx_push_ir));
    vlSelf->u_regfile__DOT__tx_fifo_ready = (1U & (
                                                   (2U 
                                                    == (IData)(vlSelf->cov_tmod))
                                                    ? 
                                                   (~ (IData)(vlSelf->cov_tx_empty))
                                                    : 
                                                   ((IData)(vlSelf->u_fifo__DOT__tx_cnt) 
                                                    > (IData)(vlSelf->txftlr))));
    vlSelf->u_mstfsm__DOT__rx_load_gate = ((0U == (IData)(vlSelf->cov_tmod)) 
                                           | ((2U == (IData)(vlSelf->cov_tmod)) 
                                              | (3U 
                                                 == (IData)(vlSelf->cov_tmod))));
    vlSelf->u_mstfsm__DOT__tx_fifo_filled = ((2U == (IData)(vlSelf->cov_tmod)) 
                                             | ((IData)(vlSelf->u_fifo__DOT__tx_cnt) 
                                                > (IData)(vlSelf->txftlr)));
    vlSelf->dfs_dec = (0x3fU & ((IData)(1U) + (IData)(vlSelf->cov_dfs)));
    vlSelf->u_mstfsm__DOT__spi1 = ((0U == (IData)(vlSelf->cov_frf)) 
                                   & (IData)(vlSelf->cov_scph));
    vlSelf->cov_x_done = ((((3U == (IData)(vlSelf->cov_tmod)) 
                            & (0U == (IData)(vlSelf->cov_frf))) 
                           | (2U == (IData)(vlSelf->cov_tmod)))
                           ? (vlSelf->u_mstfsm__DOT__frame_cnt 
                              == vlSelf->cov_ndf) : (IData)(vlSelf->u_mstfsm__DOT__last_frame));
    vlSelf->u_mstfsm__DOT__ssp = (1U == (IData)(vlSelf->cov_frf));
    vlSelf->u_mstfsm__DOT__spi0 = ((~ (IData)(vlSelf->cov_scph)) 
                                   & (0U == (IData)(vlSelf->cov_frf)));
    vlSelf->u_regfile__DOT__reg_wdata = vlSelf->reg_wdata;
    vlSelf->u_fifo__DOT__tx_push_data = vlSelf->reg_wdata;
    vlSelf->u_shift__DOT__rxd = vlSelf->rxd;
    vlSelf->u_shift__DOT__rxd_mst_int = ((IData)(vlSelf->cov_srl_test)
                                          ? (IData)(vlSelf->txd)
                                          : (IData)(vlSelf->rxd));
    vlSelf->u_regfile__DOT__rst_n = vlSelf->rst_n;
    vlSelf->u_fifo__DOT__rst_n = vlSelf->rst_n;
    vlSelf->u_sclkgen__DOT__rst_n = vlSelf->rst_n;
    vlSelf->u_mstfsm__DOT__rst_n = vlSelf->rst_n;
    vlSelf->u_shift__DOT__rst_n = vlSelf->rst_n;
    vlSelf->u_regfile__DOT__clk = vlSelf->clk;
    vlSelf->u_fifo__DOT__clk = vlSelf->clk;
    vlSelf->u_sclkgen__DOT__clk = vlSelf->clk;
    vlSelf->u_mstfsm__DOT__clk = vlSelf->clk;
    vlSelf->u_shift__DOT__clk = vlSelf->clk;
    vlSelf->u_regfile__DOT__reg_re = vlSelf->reg_re;
    vlSelf->u_regfile__DOT__reg_we = vlSelf->reg_we;
    vlSelf->u_regfile__DOT__reg_addr = vlSelf->reg_addr;
    vlSelf->rx_pop = ((IData)(vlSelf->reg_re) & (9U 
                                                 == (IData)(vlSelf->reg_addr)));
    vlSelf->tx_push = ((IData)(vlSelf->reg_we) & (9U 
                                                  == (IData)(vlSelf->reg_addr)));
    vlSelf->reg_rdata = ((8U & (IData)(vlSelf->reg_addr))
                          ? ((4U & (IData)(vlSelf->reg_addr))
                              ? 0U : ((2U & (IData)(vlSelf->reg_addr))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelf->reg_addr))
                                                ? vlSelf->cov_rx_data
                                                : (
                                                   ((IData)(vlSelf->cov_rx_full) 
                                                    << 4U) 
                                                   | ((8U 
                                                       & ((~ (IData)(vlSelf->cov_rx_empty)) 
                                                          << 3U)) 
                                                      | (((IData)(vlSelf->cov_tx_empty) 
                                                          << 2U) 
                                                         | ((2U 
                                                             & ((~ (IData)(vlSelf->cov_tx_full)) 
                                                                << 1U)) 
                                                            | (IData)(vlSelf->ssi_busy))))))))
                          : ((4U & (IData)(vlSelf->reg_addr))
                              ? ((2U & (IData)(vlSelf->reg_addr))
                                  ? ((1U & (IData)(vlSelf->reg_addr))
                                      ? (IData)(vlSelf->cov_rx_level)
                                      : (IData)(vlSelf->cov_tx_level))
                                  : ((1U & (IData)(vlSelf->reg_addr))
                                      ? (IData)(vlSelf->txftlr)
                                      : (IData)(vlSelf->baudr)))
                              : ((2U & (IData)(vlSelf->reg_addr))
                                  ? ((1U & (IData)(vlSelf->reg_addr))
                                      ? (IData)(vlSelf->ser)
                                      : (IData)(vlSelf->ssienr))
                                  : ((1U & (IData)(vlSelf->reg_addr))
                                      ? vlSelf->ctrlr1
                                      : vlSelf->ctrlr0))));
    vlSelf->u_mstfsm__DOT__spec_hold_ss = vlSelf->SPEC_HOLD_SS;
    vlSelf->u_mstfsm__DOT__ss_in_n = vlSelf->ss_in_n;
    vlSelf->cov_ss_in_n = vlSelf->ss_in_n;
    vlSelf->cov_eff_dfs = (((IData)(vlSelf->dfs_dec) 
                            < (IData)(vlSelf->SPEC_DFS_MIN))
                            ? (IData)(vlSelf->SPEC_DFS_MIN)
                            : (IData)(vlSelf->dfs_dec));
    vlSelf->u_mstfsm__DOT__cov_x_done = vlSelf->cov_x_done;
    vlSelf->u_mstfsm__DOT__x_done = vlSelf->cov_x_done;
    vlSelf->u_mstfsm__DOT__abort_now = ((IData)(vlSelf->ssienr) 
                                        & ((((IData)(vlSelf->u_mstfsm__DOT__ssp) 
                                             & (IData)(vlSelf->ss_in_n)) 
                                            | ((~ (IData)(vlSelf->u_mstfsm__DOT__ssp)) 
                                               & (~ (IData)(vlSelf->ss_in_n)))) 
                                           & ((0U != (IData)(vlSelf->fsm_c_state)) 
                                              & (0xaU 
                                                 != (IData)(vlSelf->fsm_c_state)))));
    vlSelf->u_mstfsm__DOT____VdfgTmp_hf2822343__0 = 
        ((IData)(vlSelf->u_mstfsm__DOT__spi0) | (IData)(vlSelf->u_mstfsm__DOT__spi1));
    if (vlSelf->u_mstfsm__DOT__spi0) {
        vlSelf->u_mstfsm__DOT__sclk_fe_int = vlSelf->u_sclkgen__DOT__sclk_re_ir;
        vlSelf->u_mstfsm__DOT__sclk_re_int = vlSelf->u_sclkgen__DOT__sclk_fe_ir;
    } else {
        vlSelf->u_mstfsm__DOT__sclk_fe_int = vlSelf->u_sclkgen__DOT__sclk_fe_ir;
        vlSelf->u_mstfsm__DOT__sclk_re_int = vlSelf->u_sclkgen__DOT__sclk_re_ir;
    }
    vlSelf->u_regfile__DOT__rx_pop = vlSelf->rx_pop;
    vlSelf->u_fifo__DOT__rx_pop = vlSelf->rx_pop;
    vlSelf->u_fifo__DOT__rx_rd_ok = ((~ (IData)(vlSelf->cov_rx_empty)) 
                                     & (IData)(vlSelf->rx_pop));
    vlSelf->u_regfile__DOT__tx_push = vlSelf->tx_push;
    vlSelf->u_fifo__DOT__tx_push = vlSelf->tx_push;
    vlSelf->u_fifo__DOT__tx_wr_ok = ((~ (IData)(vlSelf->cov_tx_full)) 
                                     & (IData)(vlSelf->tx_push));
    vlSelf->u_regfile__DOT__tx_empty_early = ((~ (IData)(vlSelf->tx_push)) 
                                              & ((IData)(vlSelf->u_shift__DOT__tx_pop_ir) 
                                                 & (1U 
                                                    == (IData)(vlSelf->u_fifo__DOT__tx_cnt))));
    vlSelf->u_regfile__DOT__reg_rdata = vlSelf->reg_rdata;
    vlSelf->u_mstfsm__DOT__dfs = vlSelf->cov_eff_dfs;
    vlSelf->u_mstfsm__DOT__tx_dfs = vlSelf->cov_eff_dfs;
    vlSelf->u_shift__DOT__dfs = vlSelf->cov_eff_dfs;
    vlSelf->dfs_eff = vlSelf->cov_eff_dfs;
    vlSelf->tx_dfs = vlSelf->cov_eff_dfs;
    vlSelf->u_mstfsm__DOT__dfs_eff = vlSelf->cov_eff_dfs;
    vlSelf->u_mstfsm__DOT__sspf_done = ((IData)(vlSelf->u_mstfsm__DOT__bit_cnt) 
                                        == (0x3fU & 
                                            ((IData)(vlSelf->cov_eff_dfs) 
                                             - (IData)(1U))));
    vlSelf->u_mstfsm__DOT__f_done = ((IData)(vlSelf->u_mstfsm__DOT__bit_cnt) 
                                     == (IData)(vlSelf->cov_eff_dfs));
    vlSelf->cov_rx_shift_en = (((3U == (IData)(vlSelf->fsm_c_state)) 
                                | ((4U == (IData)(vlSelf->fsm_c_state)) 
                                   | (5U == (IData)(vlSelf->fsm_c_state)))) 
                               & (IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int));
    vlSelf->u_mstfsm__DOT__inc_frame_cnt = ((3U == (IData)(vlSelf->fsm_c_state)) 
                                            & (((IData)(vlSelf->u_mstfsm__DOT__bit_cnt) 
                                                == 
                                                (0x3fU 
                                                 & ((IData)(vlSelf->cov_eff_dfs) 
                                                    - (IData)(2U)))) 
                                               & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int)));
    vlSelf->u_mstfsm__DOT__inc_bit_cnt = ((3U == (IData)(vlSelf->fsm_c_state)) 
                                          & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int));
    u_mstfsm__DOT____VdfgTmp_h17ec1c85__0 = ((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                             | (IData)(vlSelf->cov_baud2));
    vlSelf->u_mstfsm__DOT____VdfgTmp_hc03193b8__0 = 
        ((2U == (IData)(vlSelf->fsm_c_state)) & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int));
    u_mstfsm__DOT____VdfgTmp_hc0aea06c__0 = ((5U == (IData)(vlSelf->fsm_c_state)) 
                                             & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int));
    u_mstfsm__DOT____VdfgTmp_hda122231__0 = ((6U == (IData)(vlSelf->fsm_c_state)) 
                                             & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int));
    u_mstfsm__DOT____VdfgTmp_hf0b0fd97__0 = ((4U == (IData)(vlSelf->fsm_c_state)) 
                                             & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int));
    vlSelf->u_mstfsm__DOT__n_state = ((8U & (IData)(vlSelf->fsm_c_state))
                                       ? ((4U & (IData)(vlSelf->fsm_c_state))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelf->fsm_c_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->fsm_c_state))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->ssienr)
                                                      ? 0U
                                                      : 0xaU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->fsm_c_state))
                                                     ? 
                                                    (((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                      | (IData)(vlSelf->cov_baud2))
                                                      ? 0U
                                                      : 9U)
                                                     : 
                                                    ((((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                                                       | (IData)(vlSelf->cov_baud2)) 
                                                      & ((IData)(vlSelf->u_mstfsm__DOT__hold_cnt) 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->SPEC_HOLD_SS) 
                                                             - (IData)(1U)))))
                                                      ? 9U
                                                      : 8U))))
                                       : ((4U & (IData)(vlSelf->fsm_c_state))
                                           ? ((2U & (IData)(vlSelf->fsm_c_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->fsm_c_state))
                                                   ? 
                                                  ((((((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                                                       | (IData)(vlSelf->cov_baud2)) 
                                                      & (IData)(vlSelf->u_mstfsm__DOT__spi0)) 
                                                     & (~ (IData)(vlSelf->cov_x_done))) 
                                                    & (~ (IData)(vlSelf->u_mstfsm__DOT__abort_ir)))
                                                    ? 5U
                                                    : 
                                                   (((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                     & ((IData)(vlSelf->u_mstfsm__DOT__ssp) 
                                                        | ((IData)(vlSelf->u_mstfsm__DOT__spi0) 
                                                           & ((IData)(vlSelf->cov_x_done) 
                                                              | (IData)(vlSelf->u_mstfsm__DOT__abort_ir)))))
                                                     ? 9U
                                                     : 
                                                    ((((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                       | (IData)(vlSelf->cov_baud2)) 
                                                      & ((IData)(vlSelf->u_mstfsm__DOT__spi1) 
                                                         | (IData)(vlSelf->u_mstfsm__DOT__ssp)))
                                                      ? 8U
                                                      : 7U)))
                                                   : 
                                                  (((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                    | (IData)(vlSelf->cov_baud2))
                                                    ? 
                                                   ((((IData)(vlSelf->cov_ss_tgl_en) 
                                                      | (IData)(vlSelf->u_mstfsm__DOT__ssp)) 
                                                     | (IData)(vlSelf->u_mstfsm__DOT__spi1))
                                                     ? 7U
                                                     : 
                                                    (((IData)(vlSelf->cov_x_done) 
                                                      | (IData)(vlSelf->u_mstfsm__DOT__abort_ir))
                                                      ? 7U
                                                      : 3U))
                                                    : 6U))
                                               : ((1U 
                                                   & (IData)(vlSelf->fsm_c_state))
                                                   ? 
                                                  (((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                    | (IData)(vlSelf->cov_baud2))
                                                    ? 3U
                                                    : 5U)
                                                   : 
                                                  (((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                                                    | (IData)(vlSelf->cov_baud2))
                                                    ? 
                                                   (((IData)(vlSelf->u_mstfsm__DOT__spi0) 
                                                     & (~ (IData)(vlSelf->cov_baud2)))
                                                     ? 6U
                                                     : 
                                                    (((((IData)(vlSelf->u_mstfsm__DOT__spi1) 
                                                        & (IData)(vlSelf->cov_x_done)) 
                                                       | (((IData)(vlSelf->u_mstfsm__DOT__spi0) 
                                                           & (IData)(vlSelf->cov_baud2)) 
                                                          & ((IData)(vlSelf->cov_x_done) 
                                                             | (IData)(vlSelf->cov_ss_tgl_en)))) 
                                                      | (IData)(vlSelf->u_mstfsm__DOT__ssp))
                                                      ? 7U
                                                      : 
                                                     (((((IData)(vlSelf->u_mstfsm__DOT__spi0) 
                                                         & (IData)(vlSelf->cov_baud2)) 
                                                        & (~ (IData)(vlSelf->cov_x_done))) 
                                                       & (~ (IData)(vlSelf->cov_ss_tgl_en)))
                                                       ? 3U
                                                       : 4U)))
                                                    : 
                                                   (((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                     | (IData)(vlSelf->cov_baud2))
                                                     ? 
                                                    (((~ (IData)(vlSelf->cov_x_done)) 
                                                      & (IData)(vlSelf->u_mstfsm__DOT__spi1))
                                                      ? 3U
                                                      : 4U)
                                                     : 4U))))
                                           : ((2U & (IData)(vlSelf->fsm_c_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->fsm_c_state))
                                                   ? 
                                                  (((~ (IData)(vlSelf->u_mstfsm__DOT__ssp)) 
                                                    & (IData)(vlSelf->u_mstfsm__DOT__f_done))
                                                    ? 4U
                                                    : 
                                                   (((IData)(vlSelf->u_mstfsm__DOT__ssp) 
                                                     & ((~ (IData)(vlSelf->cov_x_done)) 
                                                        & (IData)(vlSelf->u_mstfsm__DOT__f_done)))
                                                     ? 5U
                                                     : 
                                                    ((((IData)(vlSelf->u_mstfsm__DOT__ssp) 
                                                       & (IData)(vlSelf->u_mstfsm__DOT__f_done)) 
                                                      & (IData)(vlSelf->u_mstfsm__DOT__x_done_1d))
                                                      ? 4U
                                                      : 3U)))
                                                   : 
                                                  (((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                    | (IData)(vlSelf->cov_baud2))
                                                    ? 3U
                                                    : 2U))
                                               : ((1U 
                                                   & (IData)(vlSelf->fsm_c_state))
                                                   ? 
                                                  (((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                                                    | (IData)(vlSelf->cov_baud2))
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  ((((((IData)(vlSelf->start_xfer) 
                                                       & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int)) 
                                                      & (IData)(vlSelf->u_mstfsm__DOT__tx_fifo_filled)) 
                                                     & (~ (IData)(vlSelf->cov_tx_empty))) 
                                                    & (((~ (IData)(vlSelf->u_mstfsm__DOT__ssp)) 
                                                        & (IData)(vlSelf->ss_in_n)) 
                                                       | ((IData)(vlSelf->u_mstfsm__DOT__ssp) 
                                                          & (~ (IData)(vlSelf->ss_in_n)))))
                                                    ? 1U
                                                    : 0U)))));
    vlSelf->u_mstfsm__DOT__rx_shift_en = vlSelf->cov_rx_shift_en;
    vlSelf->u_mstfsm__DOT__cov_rx_shift_en = vlSelf->cov_rx_shift_en;
    vlSelf->u_shift__DOT__rx_shift_en = vlSelf->cov_rx_shift_en;
    vlSelf->rx_shift_en = vlSelf->cov_rx_shift_en;
    vlSelf->cov_tx_shift_en = ((IData)(vlSelf->u_mstfsm__DOT__inc_bit_cnt) 
                               & ((~ (vlSelf->ctrlr0 
                                      >> 0xaU)) | (3U 
                                                   == (IData)(vlSelf->cov_tmod))));
    vlSelf->u_mstfsm__DOT____VdfgTmp_hdb116fd1__0 = 
        (((IData)(u_mstfsm__DOT____VdfgTmp_hc0aea06c__0) 
          & (IData)(vlSelf->u_mstfsm__DOT__ssp)) | 
         ((~ (IData)(vlSelf->cov_x_done)) & (IData)(u_mstfsm__DOT____VdfgTmp_hda122231__0)));
    vlSelf->u_mstfsm__DOT__clr_bit_cnt = (((IData)(u_mstfsm__DOT____VdfgTmp_hc0aea06c__0) 
                                           & ((IData)(vlSelf->u_mstfsm__DOT__ssp) 
                                              | (IData)(vlSelf->cov_ss_tgl_en))) 
                                          | (((IData)(u_mstfsm__DOT____VdfgTmp_hda122231__0) 
                                              & ((~ (IData)(vlSelf->u_mstfsm__DOT__ssp)) 
                                                 & (~ (IData)(vlSelf->cov_ss_tgl_en)))) 
                                             | ((IData)(u_mstfsm__DOT____VdfgTmp_hf0b0fd97__0) 
                                                | ((0U 
                                                    == (IData)(vlSelf->fsm_c_state)) 
                                                   & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int)))));
    vlSelf->cov_load_rx_buf = ((IData)(vlSelf->u_mstfsm__DOT__rx_load_gate) 
                               & ((IData)(u_mstfsm__DOT____VdfgTmp_hf0b0fd97__0) 
                                  | (((5U == (IData)(vlSelf->fsm_c_state)) 
                                      & ((IData)(u_mstfsm__DOT____VdfgTmp_h17ec1c85__0) 
                                         & (IData)(vlSelf->u_mstfsm__DOT__ssp))) 
                                     | (((6U == (IData)(vlSelf->fsm_c_state)) 
                                         & (IData)(u_mstfsm__DOT____VdfgTmp_h17ec1c85__0)) 
                                        | ((7U == (IData)(vlSelf->fsm_c_state)) 
                                           & ((~ (IData)(vlSelf->u_mstfsm__DOT__spi0)) 
                                              & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int)))))));
    vlSelf->u_mstfsm__DOT____VdfgTmp_h0e46c02e__0 = 
        ((~ (IData)(vlSelf->cov_x_done)) & (IData)(u_mstfsm__DOT____VdfgTmp_hf0b0fd97__0));
    vlSelf->u_mstfsm__DOT__clr_frame_cnt = ((0U == (IData)(vlSelf->fsm_c_state)) 
                                            | ((9U 
                                                == (IData)(vlSelf->fsm_c_state)) 
                                               & (9U 
                                                  != (IData)(vlSelf->u_mstfsm__DOT__n_state))));
    vlSelf->u_mstfsm__DOT__busy_now = ((0U != (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                       & (0xaU != (IData)(vlSelf->u_mstfsm__DOT__n_state)));
    u_mstfsm__DOT____VdfgTmp_h9cc55e2e__0 = ((9U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                             | (0xaU 
                                                == (IData)(vlSelf->u_mstfsm__DOT__n_state)));
    if (vlSelf->u_mstfsm__DOT____VdfgTmp_hf2822343__0) {
        vlSelf->fsm_slv_sel = ((0U != (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                               & ((9U != (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                  & ((0xaU != (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                     & (5U != (IData)(vlSelf->u_mstfsm__DOT__n_state)))));
        vlSelf->u_mstfsm__DOT__ssi_oe_n_iw = (1U & 
                                              ((0U 
                                                == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                               | (IData)(u_mstfsm__DOT____VdfgTmp_h9cc55e2e__0)));
    } else {
        vlSelf->fsm_slv_sel = ((IData)(vlSelf->u_mstfsm__DOT__ssp) 
                               & ((1U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                  | ((2U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                     | ((5U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                        | ((3U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                           & ((IData)(vlSelf->u_mstfsm__DOT__sspf_done) 
                                              & ((~ (IData)(vlSelf->cov_x_done)) 
                                                 & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int))))))));
        vlSelf->u_mstfsm__DOT__ssi_oe_n_iw = (1U & 
                                              ((~ (IData)(vlSelf->u_mstfsm__DOT__ssp)) 
                                               | ((0U 
                                                   == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                                  | ((1U 
                                                      == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                                     | (IData)(u_mstfsm__DOT____VdfgTmp_h9cc55e2e__0)))));
    }
    vlSelf->cov_sclk_mask = ((3U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                             | ((4U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                | ((6U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                   | (((2U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                       & ((IData)(vlSelf->u_mstfsm__DOT__spi1) 
                                          | (IData)(vlSelf->u_mstfsm__DOT__ssp))) 
                                      | ((5U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                         & (IData)(vlSelf->u_mstfsm__DOT__ssp))))));
    vlSelf->u_mstfsm__DOT__tx_shift_en = vlSelf->cov_tx_shift_en;
    vlSelf->u_mstfsm__DOT__cov_tx_shift_en = vlSelf->cov_tx_shift_en;
    vlSelf->u_shift__DOT__tx_shift_en = vlSelf->cov_tx_shift_en;
    vlSelf->tx_shift_en = vlSelf->cov_tx_shift_en;
    vlSelf->u_mstfsm__DOT__load_rx_buf = vlSelf->cov_load_rx_buf;
    vlSelf->u_mstfsm__DOT__cov_load_rx_buf = vlSelf->cov_load_rx_buf;
    vlSelf->u_shift__DOT__load_rx_buf = vlSelf->cov_load_rx_buf;
    vlSelf->load_rx_buf = vlSelf->cov_load_rx_buf;
    vlSelf->load_tx_buffer = ((~ (IData)(vlSelf->u_mstfsm__DOT__tx_load_en)) 
                              & ((IData)(vlSelf->u_mstfsm__DOT____VdfgTmp_hc03193b8__0) 
                                 | ((IData)(vlSelf->u_mstfsm__DOT____VdfgTmp_h0e46c02e__0) 
                                    | (IData)(vlSelf->u_mstfsm__DOT____VdfgTmp_hdb116fd1__0))));
    vlSelf->u_mstfsm__DOT__refill_now = ((IData)(vlSelf->u_mstfsm__DOT__busy_now) 
                                         & ((IData)(vlSelf->cov_tx_empty) 
                                            & (1U <= vlSelf->u_mstfsm__DOT__frame_cnt)));
    vlSelf->u_mstfsm__DOT__fsm_slv_sel = vlSelf->fsm_slv_sel;
    vlSelf->u_shift__DOT__fsm_slv_sel = vlSelf->fsm_slv_sel;
    vlSelf->u_sclkgen__DOT__sclk_mask = vlSelf->cov_sclk_mask;
    vlSelf->u_mstfsm__DOT__sclk_mask = vlSelf->cov_sclk_mask;
    vlSelf->sclk_mask = vlSelf->cov_sclk_mask;
    vlSelf->cov_load_tx_shift = ((IData)(vlSelf->u_mstfsm__DOT__tx_load_en) 
                                 & ((~ (IData)(vlSelf->cov_tx_empty)) 
                                    & ((IData)(vlSelf->u_mstfsm__DOT____VdfgTmp_hc03193b8__0) 
                                       | (((IData)(vlSelf->u_mstfsm__DOT____VdfgTmp_h0e46c02e__0) 
                                           & ((~ (IData)(vlSelf->u_mstfsm__DOT__ssp)) 
                                              | (IData)(vlSelf->cov_sclk_mask))) 
                                          | (IData)(vlSelf->u_mstfsm__DOT____VdfgTmp_hdb116fd1__0)))));
    vlSelf->u_mstfsm__DOT__load_tx_buffer = vlSelf->load_tx_buffer;
    vlSelf->u_shift__DOT__load_tx_buffer = vlSelf->load_tx_buffer;
    vlSelf->u_mstfsm__DOT__load_tx_shift = vlSelf->cov_load_tx_shift;
    vlSelf->u_mstfsm__DOT__cov_load_tx_shift = vlSelf->cov_load_tx_shift;
    vlSelf->u_shift__DOT__load_tx_shift = vlSelf->cov_load_tx_shift;
    vlSelf->load_tx_shift = vlSelf->cov_load_tx_shift;
}

VL_INLINE_OPT void Vspi_xfer_top_spi_xfer_top___nba_sequent__TOP__spi_xfer_top__0(Vspi_xfer_top_spi_xfer_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_xfer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vspi_xfer_top_spi_xfer_top___nba_sequent__TOP__spi_xfer_top__0\n"); );
    // Init
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_hf0b0fd97__0;
    u_mstfsm__DOT____VdfgTmp_hf0b0fd97__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_h17ec1c85__0;
    u_mstfsm__DOT____VdfgTmp_h17ec1c85__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_hc0aea06c__0;
    u_mstfsm__DOT____VdfgTmp_hc0aea06c__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_hda122231__0;
    u_mstfsm__DOT____VdfgTmp_hda122231__0 = 0;
    CData/*2:0*/ __Vdlyvdim0__u_fifo__DOT__tx_mem__v0;
    __Vdlyvdim0__u_fifo__DOT__tx_mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__u_fifo__DOT__tx_mem__v0;
    __Vdlyvval__u_fifo__DOT__tx_mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_fifo__DOT__tx_mem__v0;
    __Vdlyvset__u_fifo__DOT__tx_mem__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__u_fifo__DOT__rx_mem__v0;
    __Vdlyvdim0__u_fifo__DOT__rx_mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__u_fifo__DOT__rx_mem__v0;
    __Vdlyvval__u_fifo__DOT__rx_mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_fifo__DOT__rx_mem__v0;
    __Vdlyvset__u_fifo__DOT__rx_mem__v0 = 0;
    SData/*15:0*/ __Vdly__u_sclkgen__DOT__ssi_cnt;
    __Vdly__u_sclkgen__DOT__ssi_cnt = 0;
    CData/*5:0*/ __Vdly__u_mstfsm__DOT__bit_cnt;
    __Vdly__u_mstfsm__DOT__bit_cnt = 0;
    IData/*16:0*/ __Vdly__u_mstfsm__DOT__frame_cnt;
    __Vdly__u_mstfsm__DOT__frame_cnt = 0;
    CData/*0:0*/ __Vdly__u_mstfsm__DOT__tx_load_en;
    __Vdly__u_mstfsm__DOT__tx_load_en = 0;
    CData/*3:0*/ __Vdly__u_mstfsm__DOT__hold_cnt;
    __Vdly__u_mstfsm__DOT__hold_cnt = 0;
    IData/*31:0*/ __Vdly__u_shift__DOT__tx_shift_reg;
    __Vdly__u_shift__DOT__tx_shift_reg = 0;
    IData/*31:0*/ __Vdly__u_shift__DOT__rx_shift_reg;
    __Vdly__u_shift__DOT__rx_shift_reg = 0;
    // Body
    __Vdly__u_shift__DOT__rx_shift_reg = vlSelf->u_shift__DOT__rx_shift_reg;
    __Vdlyvset__u_fifo__DOT__tx_mem__v0 = 0U;
    __Vdlyvset__u_fifo__DOT__rx_mem__v0 = 0U;
    __Vdly__u_shift__DOT__tx_shift_reg = vlSelf->u_shift__DOT__tx_shift_reg;
    __Vdly__u_mstfsm__DOT__bit_cnt = vlSelf->u_mstfsm__DOT__bit_cnt;
    __Vdly__u_mstfsm__DOT__frame_cnt = vlSelf->u_mstfsm__DOT__frame_cnt;
    __Vdly__u_mstfsm__DOT__hold_cnt = vlSelf->u_mstfsm__DOT__hold_cnt;
    __Vdly__u_mstfsm__DOT__tx_load_en = vlSelf->u_mstfsm__DOT__tx_load_en;
    __Vdly__u_sclkgen__DOT__ssi_cnt = vlSelf->u_sclkgen__DOT__ssi_cnt;
    vlSelf->u_mstfsm__DOT__ssi_oe_n_ir = ((1U & (~ (IData)(vlSelf->rst_n))) 
                                          || (IData)(vlSelf->u_mstfsm__DOT__ssi_oe_n_iw));
    vlSelf->u_shift__DOT__tx_pop_ir = ((IData)(vlSelf->rst_n) 
                                       && (IData)(vlSelf->cov_load_tx_shift));
    vlSelf->u_mstfsm__DOT__fsm_sleep_ir = ((IData)(vlSelf->rst_n) 
                                           && (0xaU 
                                               == (IData)(vlSelf->u_mstfsm__DOT__n_state)));
    vlSelf->u_mstfsm__DOT__fsm_busy_ir = ((IData)(vlSelf->rst_n) 
                                          && ((0U != (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                              & (0xaU 
                                                 != (IData)(vlSelf->u_mstfsm__DOT__n_state))));
    vlSelf->start_xfer = ((IData)(vlSelf->rst_n) && 
                          (((IData)(vlSelf->u_regfile__DOT__slv_sel) 
                            & (~ (IData)(vlSelf->u_regfile__DOT__tx_empty_early))) 
                           & (IData)(vlSelf->u_regfile__DOT__tx_fifo_ready)));
    vlSelf->u_mstfsm__DOT__x_done_1d = ((IData)(vlSelf->rst_n) 
                                        && (IData)(vlSelf->cov_x_done));
    vlSelf->u_shift__DOT__rx_push_ir = ((IData)(vlSelf->rst_n) 
                                        && ((IData)(vlSelf->ssienr) 
                                            & (IData)(vlSelf->cov_load_rx_buf)));
    vlSelf->u_sclkgen__DOT__sclk_fe_ir = ((IData)(vlSelf->rst_n) 
                                          && ((IData)(vlSelf->ssienr) 
                                              && ((IData)(vlSelf->u_sclkgen__DOT__ssi_cnt) 
                                                  == (IData)(vlSelf->u_sclkgen__DOT__f_det))));
    vlSelf->u_sclkgen__DOT__sclk_re_ir = ((IData)(vlSelf->rst_n) 
                                          && ((IData)(vlSelf->ssienr) 
                                              && ((IData)(vlSelf->u_sclkgen__DOT__ssi_cnt) 
                                                  == (IData)(vlSelf->u_sclkgen__DOT__r_det))));
    if (vlSelf->rst_n) {
        if (vlSelf->cov_rx_shift_en) {
            __Vdly__u_shift__DOT__rx_shift_reg = ((vlSelf->u_shift__DOT__rx_shift_reg 
                                                   << 1U) 
                                                  | (IData)(vlSelf->u_shift__DOT__rxd_mst_int));
        }
        if (vlSelf->u_fifo__DOT__tx_rd_ok) {
            vlSelf->u_fifo__DOT__tx_rd_ptr = (7U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelf->u_fifo__DOT__tx_rd_ptr)));
        }
        if (vlSelf->u_fifo__DOT__tx_wr_ok) {
            __Vdlyvval__u_fifo__DOT__tx_mem__v0 = vlSelf->reg_wdata;
            __Vdlyvset__u_fifo__DOT__tx_mem__v0 = 1U;
            __Vdlyvdim0__u_fifo__DOT__tx_mem__v0 = vlSelf->u_fifo__DOT__tx_wr_ptr;
            vlSelf->u_fifo__DOT__tx_wr_ptr = (7U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelf->u_fifo__DOT__tx_wr_ptr)));
        }
        if (vlSelf->u_fifo__DOT__rx_rd_ok) {
            vlSelf->u_fifo__DOT__rx_rd_ptr = (7U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelf->u_fifo__DOT__rx_rd_ptr)));
        }
        if (vlSelf->u_fifo__DOT__rx_wr_ok) {
            __Vdlyvval__u_fifo__DOT__rx_mem__v0 = vlSelf->u_shift__DOT__cov_rx_buffer;
            __Vdlyvset__u_fifo__DOT__rx_mem__v0 = 1U;
            __Vdlyvdim0__u_fifo__DOT__rx_mem__v0 = vlSelf->u_fifo__DOT__rx_wr_ptr;
            vlSelf->u_fifo__DOT__rx_wr_ptr = (7U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelf->u_fifo__DOT__rx_wr_ptr)));
        }
        vlSelf->u_fifo__DOT__rx_cnt = (0xfU & ((2U 
                                                == 
                                                (((IData)(vlSelf->u_fifo__DOT__rx_wr_ok) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->u_fifo__DOT__rx_rd_ok)))
                                                ? ((IData)(1U) 
                                                   + (IData)(vlSelf->u_fifo__DOT__rx_cnt))
                                                : (
                                                   (1U 
                                                    == 
                                                    (((IData)(vlSelf->u_fifo__DOT__rx_wr_ok) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->u_fifo__DOT__rx_rd_ok)))
                                                    ? 
                                                   ((IData)(vlSelf->u_fifo__DOT__rx_cnt) 
                                                    - (IData)(1U))
                                                    : (IData)(vlSelf->u_fifo__DOT__rx_cnt))));
        if (vlSelf->u_mstfsm__DOT__clr_bit_cnt) {
            __Vdly__u_mstfsm__DOT__bit_cnt = 0U;
        } else if (vlSelf->u_mstfsm__DOT__inc_bit_cnt) {
            __Vdly__u_mstfsm__DOT__bit_cnt = (0x3fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->u_mstfsm__DOT__bit_cnt)));
        }
        if (vlSelf->u_mstfsm__DOT__clr_frame_cnt) {
            __Vdly__u_mstfsm__DOT__frame_cnt = 0U;
        } else if (vlSelf->u_mstfsm__DOT__inc_frame_cnt) {
            __Vdly__u_mstfsm__DOT__frame_cnt = (0x1ffffU 
                                                & ((IData)(1U) 
                                                   + vlSelf->u_mstfsm__DOT__frame_cnt));
        }
        vlSelf->u_fifo__DOT__tx_cnt = (0xfU & ((2U 
                                                == 
                                                (((IData)(vlSelf->u_fifo__DOT__tx_wr_ok) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->u_fifo__DOT__tx_rd_ok)))
                                                ? ((IData)(1U) 
                                                   + (IData)(vlSelf->u_fifo__DOT__tx_cnt))
                                                : (
                                                   (1U 
                                                    == 
                                                    (((IData)(vlSelf->u_fifo__DOT__tx_wr_ok) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->u_fifo__DOT__tx_rd_ok)))
                                                    ? 
                                                   ((IData)(vlSelf->u_fifo__DOT__tx_cnt) 
                                                    - (IData)(1U))
                                                    : (IData)(vlSelf->u_fifo__DOT__tx_cnt))));
        if ((8U != (IData)(vlSelf->fsm_c_state))) {
            __Vdly__u_mstfsm__DOT__hold_cnt = 0U;
        } else if (((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                    | (IData)(vlSelf->cov_baud2))) {
            __Vdly__u_mstfsm__DOT__hold_cnt = (((IData)(vlSelf->u_mstfsm__DOT__hold_cnt) 
                                                == 
                                                (0xfU 
                                                 & ((IData)(vlSelf->SPEC_HOLD_SS) 
                                                    - (IData)(1U))))
                                                ? 0U
                                                : (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->u_mstfsm__DOT__hold_cnt))));
        }
        if ((2U == (IData)(vlSelf->fsm_c_state))) {
            if (((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                 | (IData)(vlSelf->cov_baud2))) {
                __Vdly__u_mstfsm__DOT__tx_load_en = 
                    (2U != (IData)(vlSelf->cov_tmod));
            }
        } else {
            __Vdly__u_mstfsm__DOT__tx_load_en = ((0U 
                                                  == (IData)(vlSelf->fsm_c_state)) 
                                                 || (IData)(vlSelf->u_mstfsm__DOT__tx_load_en));
        }
        if (vlSelf->u_mstfsm__DOT__refill_now) {
            vlSelf->u_mstfsm__DOT__refill_seen_r = 1U;
        } else if ((9U == (IData)(vlSelf->u_mstfsm__DOT__n_state))) {
            vlSelf->u_mstfsm__DOT__refill_seen_r = 0U;
        }
        if (vlSelf->u_mstfsm__DOT__abort_now) {
            vlSelf->u_mstfsm__DOT__abort_seen_r = 1U;
        } else if ((9U == (IData)(vlSelf->u_mstfsm__DOT__n_state))) {
            vlSelf->u_mstfsm__DOT__abort_seen_r = 0U;
        }
        if (vlSelf->cov_xfer_complete) {
            vlSelf->write_active_r = 0U;
        } else if ((((IData)(vlSelf->reg_we) & (9U 
                                                == (IData)(vlSelf->reg_addr))) 
                    & (IData)(vlSelf->ssi_busy))) {
            vlSelf->write_active_r = 1U;
        }
        if (vlSelf->cov_load_rx_buf) {
            vlSelf->u_shift__DOT__rx_buffer = ((0x20U 
                                                & (IData)(vlSelf->cov_eff_dfs))
                                                ? vlSelf->u_shift__DOT__rx_shift_reg
                                                : (
                                                   (0x10U 
                                                    & (IData)(vlSelf->cov_eff_dfs))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->cov_eff_dfs))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->cov_eff_dfs))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->cov_eff_dfs))
                                                        ? 
                                                       (0x7fffffffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg)
                                                        : 
                                                       (0x3fffffffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->cov_eff_dfs))
                                                        ? 
                                                       (0x1fffffffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg)
                                                        : 
                                                       (0xfffffffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->cov_eff_dfs))
                                                        ? (IData)((QData)((IData)(
                                                                                (0x7ffffffU 
                                                                                & vlSelf->u_shift__DOT__rx_shift_reg))))
                                                        : 
                                                       (0x3ffffffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->cov_eff_dfs))
                                                        ? 
                                                       (0x1ffffffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg)
                                                        : 
                                                       (0xffffffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->cov_eff_dfs))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->cov_eff_dfs))
                                                        ? 
                                                       (0x7fffffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg)
                                                        : 
                                                       (0x3fffffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->cov_eff_dfs))
                                                        ? 
                                                       (0x1fffffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg)
                                                        : 
                                                       (0xfffffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->cov_eff_dfs))
                                                        ? 
                                                       (0x7ffffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg)
                                                        : 
                                                       (0x3ffffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->cov_eff_dfs))
                                                        ? (IData)((QData)((IData)(
                                                                                (0x1ffffU 
                                                                                & vlSelf->u_shift__DOT__rx_shift_reg))))
                                                        : 
                                                       (0xffffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->cov_eff_dfs))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->cov_eff_dfs))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->cov_eff_dfs))
                                                        ? 
                                                       (0x7fffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg)
                                                        : 
                                                       (0x3fffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->cov_eff_dfs))
                                                        ? 
                                                       (0x1fffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg)
                                                        : 
                                                       (0xfffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->cov_eff_dfs))
                                                        ? 
                                                       (0x7ffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg)
                                                        : 
                                                       (0x3ffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->cov_eff_dfs))
                                                        ? 
                                                       (0x1ffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg)
                                                        : 
                                                       (0xffU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->cov_eff_dfs))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->cov_eff_dfs))
                                                        ? (IData)((QData)((IData)(
                                                                                (0x7fU 
                                                                                & vlSelf->u_shift__DOT__rx_shift_reg))))
                                                        : 
                                                       (0x3fU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->cov_eff_dfs))
                                                        ? 
                                                       (0x1fU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg)
                                                        : 
                                                       (0xfU 
                                                        & vlSelf->u_shift__DOT__rx_shift_reg)))
                                                      : vlSelf->u_shift__DOT__rx_shift_reg))));
        }
        if (vlSelf->cov_load_tx_shift) {
            __Vdly__u_shift__DOT__tx_shift_reg = vlSelf->tx_pop_data;
            vlSelf->txd = (1U & ((0x20U & (IData)(vlSelf->cov_eff_dfs))
                                  ? (vlSelf->tx_pop_data 
                                     >> 0x1fU) : ((0x10U 
                                                   & (IData)(vlSelf->cov_eff_dfs))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelf->cov_eff_dfs))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->cov_eff_dfs))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->cov_eff_dfs))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->tx_pop_data 
                                                       >> 0x1eU)
                                                       : 
                                                      (vlSelf->tx_pop_data 
                                                       >> 0x1dU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->tx_pop_data 
                                                       >> 0x1cU)
                                                       : 
                                                      (vlSelf->tx_pop_data 
                                                       >> 0x1bU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->cov_eff_dfs))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->tx_pop_data 
                                                       >> 0x1aU)
                                                       : 
                                                      (vlSelf->tx_pop_data 
                                                       >> 0x19U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->tx_pop_data 
                                                       >> 0x18U)
                                                       : 
                                                      (vlSelf->tx_pop_data 
                                                       >> 0x17U))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->cov_eff_dfs))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->cov_eff_dfs))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->tx_pop_data 
                                                       >> 0x16U)
                                                       : 
                                                      (vlSelf->tx_pop_data 
                                                       >> 0x15U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->tx_pop_data 
                                                       >> 0x14U)
                                                       : 
                                                      (vlSelf->tx_pop_data 
                                                       >> 0x13U)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->cov_eff_dfs))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->tx_pop_data 
                                                       >> 0x12U)
                                                       : 
                                                      (vlSelf->tx_pop_data 
                                                       >> 0x11U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->tx_pop_data 
                                                       >> 0x10U)
                                                       : 
                                                      (vlSelf->tx_pop_data 
                                                       >> 0xfU)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->cov_eff_dfs))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->cov_eff_dfs))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->cov_eff_dfs))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->tx_pop_data 
                                                       >> 0xeU)
                                                       : 
                                                      (vlSelf->tx_pop_data 
                                                       >> 0xdU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->tx_pop_data 
                                                       >> 0xcU)
                                                       : 
                                                      (vlSelf->tx_pop_data 
                                                       >> 0xbU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->cov_eff_dfs))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->tx_pop_data 
                                                       >> 0xaU)
                                                       : 
                                                      (vlSelf->tx_pop_data 
                                                       >> 9U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->tx_pop_data 
                                                       >> 8U)
                                                       : 
                                                      (vlSelf->tx_pop_data 
                                                       >> 7U))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->cov_eff_dfs))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->cov_eff_dfs))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->tx_pop_data 
                                                       >> 6U)
                                                       : 
                                                      (vlSelf->tx_pop_data 
                                                       >> 5U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->tx_pop_data 
                                                       >> 4U)
                                                       : 
                                                      (vlSelf->tx_pop_data 
                                                       >> 3U)))
                                                     : 
                                                    (vlSelf->tx_pop_data 
                                                     >> 0x1fU))))));
            vlSelf->u_shift__DOT__tx_buffer = vlSelf->tx_pop_data;
        } else if (vlSelf->load_tx_buffer) {
            __Vdly__u_shift__DOT__tx_shift_reg = vlSelf->u_shift__DOT__tx_buffer;
            vlSelf->txd = (1U & ((0x20U & (IData)(vlSelf->cov_eff_dfs))
                                  ? (vlSelf->u_shift__DOT__tx_buffer 
                                     >> 0x1fU) : ((0x10U 
                                                   & (IData)(vlSelf->cov_eff_dfs))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelf->cov_eff_dfs))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->cov_eff_dfs))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->cov_eff_dfs))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 0x1eU)
                                                       : 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 0x1dU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 0x1cU)
                                                       : 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 0x1bU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->cov_eff_dfs))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 0x1aU)
                                                       : 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 0x19U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 0x18U)
                                                       : 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 0x17U))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->cov_eff_dfs))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->cov_eff_dfs))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 0x16U)
                                                       : 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 0x15U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 0x14U)
                                                       : 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 0x13U)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->cov_eff_dfs))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 0x12U)
                                                       : 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 0x11U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 0x10U)
                                                       : 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 0xfU)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->cov_eff_dfs))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->cov_eff_dfs))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->cov_eff_dfs))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 0xeU)
                                                       : 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 0xdU))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 0xcU)
                                                       : 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 0xbU)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->cov_eff_dfs))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 0xaU)
                                                       : 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 9U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 8U)
                                                       : 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 7U))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->cov_eff_dfs))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->cov_eff_dfs))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 6U)
                                                       : 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 5U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->cov_eff_dfs))
                                                       ? 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 4U)
                                                       : 
                                                      (vlSelf->u_shift__DOT__tx_buffer 
                                                       >> 3U)))
                                                     : 
                                                    (vlSelf->u_shift__DOT__tx_buffer 
                                                     >> 0x1fU))))));
        } else if (vlSelf->cov_tx_shift_en) {
            vlSelf->txd = (1U & (vlSelf->u_shift__DOT__tx_shift_reg 
                                 >> (0x1fU & ((IData)(vlSelf->cov_eff_dfs) 
                                              - (IData)(1U)))));
            if ((0x20U & (IData)(vlSelf->cov_eff_dfs))) {
                __Vdly__u_shift__DOT__tx_shift_reg 
                    = (vlSelf->u_shift__DOT__tx_shift_reg 
                       << 1U);
            } else if ((0x10U & (IData)(vlSelf->cov_eff_dfs))) {
                __Vdly__u_shift__DOT__tx_shift_reg 
                    = ((8U & (IData)(vlSelf->cov_eff_dfs))
                        ? ((4U & (IData)(vlSelf->cov_eff_dfs))
                            ? ((2U & (IData)(vlSelf->cov_eff_dfs))
                                ? ((1U & (IData)(vlSelf->cov_eff_dfs))
                                    ? ((0x80000000U 
                                        & __Vdly__u_shift__DOT__tx_shift_reg) 
                                       | (0x7ffffffeU 
                                          & (vlSelf->u_shift__DOT__tx_shift_reg 
                                             << 1U)))
                                    : ((0xc0000000U 
                                        & __Vdly__u_shift__DOT__tx_shift_reg) 
                                       | (0x3ffffffeU 
                                          & (vlSelf->u_shift__DOT__tx_shift_reg 
                                             << 1U))))
                                : ((1U & (IData)(vlSelf->cov_eff_dfs))
                                    ? ((0xe0000000U 
                                        & __Vdly__u_shift__DOT__tx_shift_reg) 
                                       | (0x1ffffffeU 
                                          & (vlSelf->u_shift__DOT__tx_shift_reg 
                                             << 1U)))
                                    : ((0xf0000000U 
                                        & __Vdly__u_shift__DOT__tx_shift_reg) 
                                       | (0xffffffeU 
                                          & (vlSelf->u_shift__DOT__tx_shift_reg 
                                             << 1U)))))
                            : ((2U & (IData)(vlSelf->cov_eff_dfs))
                                ? ((1U & (IData)(vlSelf->cov_eff_dfs))
                                    ? ((0xf8000000U 
                                        & __Vdly__u_shift__DOT__tx_shift_reg) 
                                       | (0x7fffffeU 
                                          & (vlSelf->u_shift__DOT__tx_shift_reg 
                                             << 1U)))
                                    : ((0xfc000000U 
                                        & __Vdly__u_shift__DOT__tx_shift_reg) 
                                       | (0x3fffffeU 
                                          & (vlSelf->u_shift__DOT__tx_shift_reg 
                                             << 1U))))
                                : ((1U & (IData)(vlSelf->cov_eff_dfs))
                                    ? ((0xfe000000U 
                                        & __Vdly__u_shift__DOT__tx_shift_reg) 
                                       | (0x1fffffeU 
                                          & (vlSelf->u_shift__DOT__tx_shift_reg 
                                             << 1U)))
                                    : ((0xff000000U 
                                        & __Vdly__u_shift__DOT__tx_shift_reg) 
                                       | (0xfffffeU 
                                          & (vlSelf->u_shift__DOT__tx_shift_reg 
                                             << 1U))))))
                        : ((4U & (IData)(vlSelf->cov_eff_dfs))
                            ? ((2U & (IData)(vlSelf->cov_eff_dfs))
                                ? ((1U & (IData)(vlSelf->cov_eff_dfs))
                                    ? ((0xff800000U 
                                        & __Vdly__u_shift__DOT__tx_shift_reg) 
                                       | (0x7ffffeU 
                                          & (vlSelf->u_shift__DOT__tx_shift_reg 
                                             << 1U)))
                                    : ((0xffc00000U 
                                        & __Vdly__u_shift__DOT__tx_shift_reg) 
                                       | (0x3ffffeU 
                                          & (vlSelf->u_shift__DOT__tx_shift_reg 
                                             << 1U))))
                                : ((1U & (IData)(vlSelf->cov_eff_dfs))
                                    ? ((0xffe00000U 
                                        & __Vdly__u_shift__DOT__tx_shift_reg) 
                                       | (0x1ffffeU 
                                          & (vlSelf->u_shift__DOT__tx_shift_reg 
                                             << 1U)))
                                    : ((0xfff00000U 
                                        & __Vdly__u_shift__DOT__tx_shift_reg) 
                                       | (0xffffeU 
                                          & (vlSelf->u_shift__DOT__tx_shift_reg 
                                             << 1U)))))
                            : ((2U & (IData)(vlSelf->cov_eff_dfs))
                                ? ((1U & (IData)(vlSelf->cov_eff_dfs))
                                    ? ((0xfff80000U 
                                        & __Vdly__u_shift__DOT__tx_shift_reg) 
                                       | (0x7fffeU 
                                          & (vlSelf->u_shift__DOT__tx_shift_reg 
                                             << 1U)))
                                    : ((0xfffc0000U 
                                        & __Vdly__u_shift__DOT__tx_shift_reg) 
                                       | (0x3fffeU 
                                          & (vlSelf->u_shift__DOT__tx_shift_reg 
                                             << 1U))))
                                : ((1U & (IData)(vlSelf->cov_eff_dfs))
                                    ? ((0xfffe0000U 
                                        & __Vdly__u_shift__DOT__tx_shift_reg) 
                                       | (0x1fffeU 
                                          & (vlSelf->u_shift__DOT__tx_shift_reg 
                                             << 1U)))
                                    : ((0xffff0000U 
                                        & __Vdly__u_shift__DOT__tx_shift_reg) 
                                       | (0xfffeU & 
                                          (vlSelf->u_shift__DOT__tx_shift_reg 
                                           << 1U)))))));
            } else if ((8U & (IData)(vlSelf->cov_eff_dfs))) {
                __Vdly__u_shift__DOT__tx_shift_reg 
                    = ((4U & (IData)(vlSelf->cov_eff_dfs))
                        ? ((2U & (IData)(vlSelf->cov_eff_dfs))
                            ? ((1U & (IData)(vlSelf->cov_eff_dfs))
                                ? ((0xffff8000U & __Vdly__u_shift__DOT__tx_shift_reg) 
                                   | (0x7ffeU & (vlSelf->u_shift__DOT__tx_shift_reg 
                                                 << 1U)))
                                : ((0xffffc000U & __Vdly__u_shift__DOT__tx_shift_reg) 
                                   | (0x3ffeU & (vlSelf->u_shift__DOT__tx_shift_reg 
                                                 << 1U))))
                            : ((1U & (IData)(vlSelf->cov_eff_dfs))
                                ? ((0xffffe000U & __Vdly__u_shift__DOT__tx_shift_reg) 
                                   | (0x1ffeU & (vlSelf->u_shift__DOT__tx_shift_reg 
                                                 << 1U)))
                                : ((0xfffff000U & __Vdly__u_shift__DOT__tx_shift_reg) 
                                   | (0xffeU & (vlSelf->u_shift__DOT__tx_shift_reg 
                                                << 1U)))))
                        : ((2U & (IData)(vlSelf->cov_eff_dfs))
                            ? ((1U & (IData)(vlSelf->cov_eff_dfs))
                                ? ((0xfffff800U & __Vdly__u_shift__DOT__tx_shift_reg) 
                                   | (0x7feU & (vlSelf->u_shift__DOT__tx_shift_reg 
                                                << 1U)))
                                : ((0xfffffc00U & __Vdly__u_shift__DOT__tx_shift_reg) 
                                   | (0x3feU & (vlSelf->u_shift__DOT__tx_shift_reg 
                                                << 1U))))
                            : ((1U & (IData)(vlSelf->cov_eff_dfs))
                                ? ((0xfffffe00U & __Vdly__u_shift__DOT__tx_shift_reg) 
                                   | (0x1feU & (vlSelf->u_shift__DOT__tx_shift_reg 
                                                << 1U)))
                                : ((0xffffff00U & __Vdly__u_shift__DOT__tx_shift_reg) 
                                   | (0xfeU & (vlSelf->u_shift__DOT__tx_shift_reg 
                                               << 1U))))));
            } else if ((4U & (IData)(vlSelf->cov_eff_dfs))) {
                __Vdly__u_shift__DOT__tx_shift_reg 
                    = ((2U & (IData)(vlSelf->cov_eff_dfs))
                        ? ((1U & (IData)(vlSelf->cov_eff_dfs))
                            ? ((0xffffff80U & __Vdly__u_shift__DOT__tx_shift_reg) 
                               | (0x7eU & (vlSelf->u_shift__DOT__tx_shift_reg 
                                           << 1U)))
                            : ((0xffffffc0U & __Vdly__u_shift__DOT__tx_shift_reg) 
                               | (0x3eU & (vlSelf->u_shift__DOT__tx_shift_reg 
                                           << 1U))))
                        : ((1U & (IData)(vlSelf->cov_eff_dfs))
                            ? ((0xffffffe0U & __Vdly__u_shift__DOT__tx_shift_reg) 
                               | (0x1eU & (vlSelf->u_shift__DOT__tx_shift_reg 
                                           << 1U)))
                            : ((0xfffffff0U & __Vdly__u_shift__DOT__tx_shift_reg) 
                               | (0xeU & (vlSelf->u_shift__DOT__tx_shift_reg 
                                          << 1U)))));
            } else {
                __Vdly__u_shift__DOT__tx_shift_reg 
                    = (vlSelf->u_shift__DOT__tx_shift_reg 
                       << 1U);
            }
        }
        vlSelf->prev_fsm_state = vlSelf->fsm_c_state;
        if (((6U == (IData)(vlSelf->fsm_c_state)) & (IData)(vlSelf->cov_x_done))) {
            vlSelf->u_mstfsm__DOT__abort_ir = 1U;
        } else if (((0U == (IData)(vlSelf->fsm_c_state)) 
                    | (9U == (IData)(vlSelf->fsm_c_state)))) {
            vlSelf->u_mstfsm__DOT__abort_ir = 0U;
        }
        if ((((IData)(vlSelf->cov_tx_empty) & ((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                                               | (IData)(vlSelf->cov_baud2))) 
             & (7U != (IData)(vlSelf->fsm_c_state)))) {
            vlSelf->u_mstfsm__DOT__last_frame = 1U;
        } else if (((~ (IData)(vlSelf->cov_tx_empty)) 
                    & ((3U == (IData)(vlSelf->fsm_c_state)) 
                       | (0U == (IData)(vlSelf->fsm_c_state))))) {
            vlSelf->u_mstfsm__DOT__last_frame = 0U;
        }
        if (vlSelf->ssienr) {
            __Vdly__u_sclkgen__DOT__ssi_cnt = (((IData)(vlSelf->u_sclkgen__DOT__ssi_cnt) 
                                                == 
                                                (0xffffU 
                                                 & ((IData)(vlSelf->baudr) 
                                                    - (IData)(1U))))
                                                ? 0U
                                                : (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->u_sclkgen__DOT__ssi_cnt))));
            if ((1U & (((0U == (IData)(vlSelf->baudr)) 
                        | (~ (IData)(vlSelf->cov_sclk_mask))) 
                       | (0U == (IData)(vlSelf->u_sclkgen__DOT__ssi_cnt))))) {
                vlSelf->sclk_out = (1U & (~ (IData)(vlSelf->cov_scpol)));
            } else if (((IData)(vlSelf->u_sclkgen__DOT__ssi_cnt) 
                        == (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->baudr), 1U)))) {
                vlSelf->sclk_out = vlSelf->cov_scpol;
            }
            vlSelf->fsm_c_state = ((1U & (((IData)(vlSelf->u_mstfsm__DOT__ssp) 
                                           & (IData)(vlSelf->ss_in_n)) 
                                          | ((~ (IData)(vlSelf->u_mstfsm__DOT__ssp)) 
                                             & (~ (IData)(vlSelf->ss_in_n)))))
                                    ? 0U : (IData)(vlSelf->u_mstfsm__DOT__n_state));
        } else {
            __Vdly__u_sclkgen__DOT__ssi_cnt = 0U;
            vlSelf->sclk_out = (1U & (~ (IData)(vlSelf->cov_scpol)));
            vlSelf->fsm_c_state = 0xaU;
        }
        vlSelf->ss_n = (0xfU & ((1U == (IData)(vlSelf->cov_frf))
                                 ? ((IData)(vlSelf->ser) 
                                    & (- (IData)((IData)(vlSelf->fsm_slv_sel))))
                                 : (~ ((IData)(vlSelf->ser) 
                                       & (- (IData)((IData)(vlSelf->fsm_slv_sel)))))));
        if (vlSelf->reg_we) {
            if ((2U != (IData)(vlSelf->reg_addr))) {
                if ((1U & (~ (IData)(vlSelf->ssienr)))) {
                    if ((1U & (~ ((IData)(vlSelf->reg_addr) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelf->reg_addr))) {
                            if ((1U & (~ ((IData)(vlSelf->reg_addr) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->reg_addr))) {
                                    vlSelf->txftlr 
                                        = (0xfU & vlSelf->reg_wdata);
                                } else {
                                    vlSelf->baudr = 
                                        (0xffffU & vlSelf->reg_wdata);
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->reg_addr))) {
                            if ((1U & (IData)(vlSelf->reg_addr))) {
                                vlSelf->ser = (0xfU 
                                               & vlSelf->reg_wdata);
                            }
                        } else if ((1U & (IData)(vlSelf->reg_addr))) {
                            vlSelf->ctrlr1 = (0x1ffffU 
                                              & vlSelf->reg_wdata);
                        } else {
                            vlSelf->ctrlr0 = vlSelf->reg_wdata;
                        }
                    }
                }
            }
            if ((2U == (IData)(vlSelf->reg_addr))) {
                vlSelf->ssienr = (1U & vlSelf->reg_wdata);
            }
        }
    } else {
        __Vdly__u_shift__DOT__rx_shift_reg = 0U;
        vlSelf->u_fifo__DOT__tx_rd_ptr = 0U;
        vlSelf->u_fifo__DOT__tx_wr_ptr = 0U;
        vlSelf->u_fifo__DOT__rx_rd_ptr = 0U;
        vlSelf->u_fifo__DOT__rx_wr_ptr = 0U;
        vlSelf->u_fifo__DOT__rx_cnt = 0U;
        __Vdly__u_mstfsm__DOT__bit_cnt = 0U;
        __Vdly__u_mstfsm__DOT__frame_cnt = 0U;
        vlSelf->u_fifo__DOT__tx_cnt = 0U;
        __Vdly__u_mstfsm__DOT__hold_cnt = 0U;
        __Vdly__u_mstfsm__DOT__tx_load_en = 1U;
        __Vdly__u_sclkgen__DOT__ssi_cnt = 0U;
        vlSelf->u_mstfsm__DOT__refill_seen_r = 0U;
        vlSelf->u_mstfsm__DOT__abort_seen_r = 0U;
        vlSelf->write_active_r = 0U;
        vlSelf->u_shift__DOT__rx_buffer = 0U;
        __Vdly__u_shift__DOT__tx_shift_reg = 0U;
        vlSelf->txd = 0U;
        vlSelf->prev_fsm_state = 0U;
        vlSelf->u_mstfsm__DOT__abort_ir = 0U;
        vlSelf->u_mstfsm__DOT__last_frame = 0U;
        vlSelf->sclk_out = (1U & (~ (IData)(vlSelf->cov_scpol)));
        vlSelf->ss_n = 0xfU;
        vlSelf->u_shift__DOT__tx_buffer = 0U;
        vlSelf->fsm_c_state = 0U;
        vlSelf->ctrlr0 = 0U;
        vlSelf->ctrlr1 = 0U;
        vlSelf->ser = 0U;
        vlSelf->baudr = 0U;
        vlSelf->txftlr = 0U;
        vlSelf->ssienr = 0U;
    }
    if (__Vdlyvset__u_fifo__DOT__tx_mem__v0) {
        vlSelf->u_fifo__DOT__tx_mem[__Vdlyvdim0__u_fifo__DOT__tx_mem__v0] 
            = __Vdlyvval__u_fifo__DOT__tx_mem__v0;
    }
    if (__Vdlyvset__u_fifo__DOT__rx_mem__v0) {
        vlSelf->u_fifo__DOT__rx_mem[__Vdlyvdim0__u_fifo__DOT__rx_mem__v0] 
            = __Vdlyvval__u_fifo__DOT__rx_mem__v0;
    }
    vlSelf->u_mstfsm__DOT__bit_cnt = __Vdly__u_mstfsm__DOT__bit_cnt;
    vlSelf->u_mstfsm__DOT__frame_cnt = __Vdly__u_mstfsm__DOT__frame_cnt;
    vlSelf->u_mstfsm__DOT__hold_cnt = __Vdly__u_mstfsm__DOT__hold_cnt;
    vlSelf->u_mstfsm__DOT__tx_load_en = __Vdly__u_mstfsm__DOT__tx_load_en;
    vlSelf->u_shift__DOT__rx_shift_reg = __Vdly__u_shift__DOT__rx_shift_reg;
    vlSelf->u_shift__DOT__tx_shift_reg = __Vdly__u_shift__DOT__tx_shift_reg;
    vlSelf->u_sclkgen__DOT__ssi_cnt = __Vdly__u_sclkgen__DOT__ssi_cnt;
    vlSelf->cov_rx_data = vlSelf->u_fifo__DOT__rx_mem
        [vlSelf->u_fifo__DOT__rx_rd_ptr];
    vlSelf->cov_rx_level = vlSelf->u_fifo__DOT__rx_cnt;
    vlSelf->cov_rx_empty = (0U == (IData)(vlSelf->u_fifo__DOT__rx_cnt));
    vlSelf->cov_rx_full = (8U == (IData)(vlSelf->u_fifo__DOT__rx_cnt));
    vlSelf->cov_bit_cnt = vlSelf->u_mstfsm__DOT__bit_cnt;
    vlSelf->cov_frame_cnt = vlSelf->u_mstfsm__DOT__frame_cnt;
    vlSelf->cov_tx_level = vlSelf->u_fifo__DOT__tx_cnt;
    vlSelf->cov_tx_full = (8U == (IData)(vlSelf->u_fifo__DOT__tx_cnt));
    vlSelf->cov_tx_empty = (0U == (IData)(vlSelf->u_fifo__DOT__tx_cnt));
    vlSelf->cov_hold_ss_cnt = vlSelf->u_mstfsm__DOT__hold_cnt;
    vlSelf->ssi_oe_n = vlSelf->u_mstfsm__DOT__ssi_oe_n_ir;
    vlSelf->tx_pop = vlSelf->u_shift__DOT__tx_pop_ir;
    vlSelf->fsm_sleep = vlSelf->u_mstfsm__DOT__fsm_sleep_ir;
    vlSelf->cov_s1 = vlSelf->u_mstfsm__DOT__refill_seen_r;
    vlSelf->cov_s0 = vlSelf->u_mstfsm__DOT__abort_seen_r;
    vlSelf->cov_s2 = vlSelf->write_active_r;
    vlSelf->ssi_busy = vlSelf->u_mstfsm__DOT__fsm_busy_ir;
    vlSelf->u_shift__DOT__cov_rx_buffer = vlSelf->u_shift__DOT__rx_buffer;
    vlSelf->u_regfile__DOT__start_xfer = vlSelf->start_xfer;
    vlSelf->u_mstfsm__DOT__start_xfer = vlSelf->start_xfer;
    vlSelf->cov_start_xfer = vlSelf->start_xfer;
    vlSelf->u_shift__DOT__txd = vlSelf->txd;
    vlSelf->cov_txd = vlSelf->txd;
    vlSelf->rx_push = vlSelf->u_shift__DOT__rx_push_ir;
    vlSelf->cov_sclk_fe = vlSelf->u_sclkgen__DOT__sclk_fe_ir;
    vlSelf->cov_sclk_re = vlSelf->u_sclkgen__DOT__sclk_re_ir;
    vlSelf->cov_last_frame = vlSelf->u_mstfsm__DOT__last_frame;
    vlSelf->u_sclkgen__DOT__ssi_cnt_out = vlSelf->u_sclkgen__DOT__ssi_cnt;
    vlSelf->u_sclkgen__DOT__sclk_out = vlSelf->sclk_out;
    vlSelf->cov_sclk_out = vlSelf->sclk_out;
    vlSelf->u_shift__DOT__ss_n = vlSelf->ss_n;
    vlSelf->cov_ss_active = (0U != (0xfU & (~ (IData)(vlSelf->ss_n))));
    vlSelf->u_regfile__DOT__rx_pop_data = vlSelf->cov_rx_data;
    vlSelf->u_fifo__DOT__rx_pop_data = vlSelf->cov_rx_data;
    vlSelf->rx_pop_data = vlSelf->cov_rx_data;
    vlSelf->u_regfile__DOT__rx_level = vlSelf->cov_rx_level;
    vlSelf->u_fifo__DOT__rx_level = vlSelf->cov_rx_level;
    vlSelf->rx_level = vlSelf->cov_rx_level;
    vlSelf->u_regfile__DOT__rx_empty = vlSelf->cov_rx_empty;
    vlSelf->u_fifo__DOT__rx_empty = vlSelf->cov_rx_empty;
    vlSelf->rx_empty = vlSelf->cov_rx_empty;
    vlSelf->u_regfile__DOT__rx_full = vlSelf->cov_rx_full;
    vlSelf->u_fifo__DOT__rx_full = vlSelf->cov_rx_full;
    vlSelf->rx_full = vlSelf->cov_rx_full;
    vlSelf->u_fifo__DOT__rx_wr_ok = ((~ (IData)(vlSelf->cov_rx_full)) 
                                     & (IData)(vlSelf->u_shift__DOT__rx_push_ir));
    vlSelf->u_mstfsm__DOT__cov_bit_cnt = vlSelf->cov_bit_cnt;
    vlSelf->u_mstfsm__DOT__cov_frame_cnt = vlSelf->cov_frame_cnt;
    vlSelf->u_regfile__DOT__tx_level = vlSelf->cov_tx_level;
    vlSelf->u_fifo__DOT__tx_level = vlSelf->cov_tx_level;
    vlSelf->u_mstfsm__DOT__tx_fifo_level = vlSelf->cov_tx_level;
    vlSelf->tx_level = vlSelf->cov_tx_level;
    vlSelf->u_regfile__DOT__tx_full = vlSelf->cov_tx_full;
    vlSelf->u_fifo__DOT__tx_full = vlSelf->cov_tx_full;
    vlSelf->tx_full = vlSelf->cov_tx_full;
    vlSelf->u_regfile__DOT__tx_empty = vlSelf->cov_tx_empty;
    vlSelf->u_fifo__DOT__tx_empty = vlSelf->cov_tx_empty;
    vlSelf->u_mstfsm__DOT__tx_empty = vlSelf->cov_tx_empty;
    vlSelf->tx_empty = vlSelf->cov_tx_empty;
    vlSelf->u_fifo__DOT__tx_rd_ok = ((~ (IData)(vlSelf->cov_tx_empty)) 
                                     & (IData)(vlSelf->u_shift__DOT__tx_pop_ir));
    vlSelf->u_mstfsm__DOT__cov_hold_ss_cnt = vlSelf->cov_hold_ss_cnt;
    vlSelf->u_mstfsm__DOT__ssi_oe_n = vlSelf->ssi_oe_n;
    vlSelf->u_regfile__DOT__tx_pop = vlSelf->tx_pop;
    vlSelf->u_fifo__DOT__tx_pop = vlSelf->tx_pop;
    vlSelf->u_shift__DOT__tx_pop = vlSelf->tx_pop;
    vlSelf->u_mstfsm__DOT__fsm_sleep = vlSelf->fsm_sleep;
    vlSelf->u_mstfsm__DOT__cov_s1 = vlSelf->cov_s1;
    vlSelf->u_mstfsm__DOT__cov_s0 = vlSelf->cov_s0;
    vlSelf->u_regfile__DOT__fsm_busy = vlSelf->ssi_busy;
    vlSelf->u_mstfsm__DOT__fsm_busy = vlSelf->ssi_busy;
    vlSelf->fsm_busy = vlSelf->ssi_busy;
    vlSelf->u_fifo__DOT__rx_push_data = vlSelf->u_shift__DOT__cov_rx_buffer;
    vlSelf->u_shift__DOT__rx_push_data = vlSelf->u_shift__DOT__cov_rx_buffer;
    vlSelf->rx_push_data = vlSelf->u_shift__DOT__cov_rx_buffer;
    vlSelf->u_shift__DOT__cov_txd = vlSelf->cov_txd;
    vlSelf->tx_pop_data = vlSelf->u_fifo__DOT__tx_mem
        [vlSelf->u_fifo__DOT__tx_rd_ptr];
    vlSelf->u_fifo__DOT__rx_push = vlSelf->rx_push;
    vlSelf->u_shift__DOT__rx_push = vlSelf->rx_push;
    vlSelf->u_sclkgen__DOT__sclk_fe = vlSelf->cov_sclk_fe;
    vlSelf->u_mstfsm__DOT__sclk_fe = vlSelf->cov_sclk_fe;
    vlSelf->sclk_fe = vlSelf->cov_sclk_fe;
    vlSelf->u_sclkgen__DOT__sclk_re = vlSelf->cov_sclk_re;
    vlSelf->u_mstfsm__DOT__sclk_re = vlSelf->cov_sclk_re;
    vlSelf->sclk_re = vlSelf->cov_sclk_re;
    vlSelf->u_mstfsm__DOT__cov_last_frame = vlSelf->cov_last_frame;
    vlSelf->u_fifo__DOT__tx_pop_data = vlSelf->tx_pop_data;
    vlSelf->u_shift__DOT__tx_pop_data = vlSelf->tx_pop_data;
    vlSelf->u_mstfsm__DOT__c_state = vlSelf->fsm_c_state;
    vlSelf->cov_fsm_state_id = vlSelf->fsm_c_state;
    vlSelf->cov_xfer_complete = ((0U == (IData)(vlSelf->fsm_c_state)) 
                                 & ((0U != (IData)(vlSelf->prev_fsm_state)) 
                                    & (0xaU != (IData)(vlSelf->prev_fsm_state))));
    vlSelf->cov_fsm_state = (0x7ffU & ((IData)(1U) 
                                       << (IData)(vlSelf->fsm_c_state)));
    vlSelf->u_regfile__DOT__ser = vlSelf->ser;
    vlSelf->u_shift__DOT__ser = vlSelf->ser;
    vlSelf->u_regfile__DOT__slv_sel = (0U != (IData)(vlSelf->ser));
    vlSelf->cov_ser = vlSelf->ser;
    vlSelf->u_regfile__DOT__txftlr = vlSelf->txftlr;
    vlSelf->u_mstfsm__DOT__txfthr = vlSelf->txftlr;
    vlSelf->u_regfile__DOT__baudr = vlSelf->baudr;
    vlSelf->u_sclkgen__DOT__baudr = vlSelf->baudr;
    vlSelf->u_sclkgen__DOT__r_det = (0xffffU & (VL_SHIFTR_III(16,16,32, (IData)(vlSelf->baudr), 1U) 
                                                - (IData)(1U)));
    vlSelf->u_sclkgen__DOT__f_det = (0xffffU & ((IData)(vlSelf->baudr) 
                                                - (IData)(1U)));
    vlSelf->cov_baudr = vlSelf->baudr;
    vlSelf->cov_baud2 = (2U == (IData)(vlSelf->baudr));
    vlSelf->u_regfile__DOT__ctrlr1 = vlSelf->ctrlr1;
    vlSelf->cov_ndf = (0x1ffffU & vlSelf->ctrlr1);
    vlSelf->u_regfile__DOT__ctrlr0 = vlSelf->ctrlr0;
    vlSelf->cov_scpol = (1U & (vlSelf->ctrlr0 >> 8U));
    vlSelf->cov_srl_test = (1U & (vlSelf->ctrlr0 >> 0xbU));
    vlSelf->cov_ss_tgl_en = (1U & (vlSelf->ctrlr0 >> 0xcU));
    vlSelf->cov_dfs = (0x1fU & vlSelf->ctrlr0);
    vlSelf->cov_tmod = (3U & (vlSelf->ctrlr0 >> 9U));
    vlSelf->cov_scph = (1U & (vlSelf->ctrlr0 >> 7U));
    vlSelf->cov_frf = (3U & (vlSelf->ctrlr0 >> 5U));
    vlSelf->u_mstfsm__DOT__cov_fsm_state = vlSelf->cov_fsm_state;
    vlSelf->u_mstfsm__DOT__baud2 = vlSelf->cov_baud2;
    vlSelf->baud2 = vlSelf->cov_baud2;
    vlSelf->u_mstfsm__DOT__ndf = vlSelf->cov_ndf;
    vlSelf->ndf = vlSelf->cov_ndf;
    vlSelf->u_sclkgen__DOT__sclk_active = vlSelf->cov_scpol;
    vlSelf->scpol = vlSelf->cov_scpol;
    vlSelf->u_shift__DOT__srl_test = vlSelf->cov_srl_test;
    vlSelf->srl_test = vlSelf->cov_srl_test;
    vlSelf->u_mstfsm__DOT__ss_tgl_en = vlSelf->cov_ss_tgl_en;
    vlSelf->ss_tgl_en = vlSelf->cov_ss_tgl_en;
    vlSelf->dfs = vlSelf->cov_dfs;
    vlSelf->dfs_dec = (0x3fU & ((IData)(1U) + (IData)(vlSelf->cov_dfs)));
    vlSelf->u_mstfsm__DOT__tmod = vlSelf->cov_tmod;
    vlSelf->tmod = vlSelf->cov_tmod;
    vlSelf->u_regfile__DOT__tx_fifo_ready = (1U & (
                                                   (2U 
                                                    == (IData)(vlSelf->cov_tmod))
                                                    ? 
                                                   (~ (IData)(vlSelf->cov_tx_empty))
                                                    : 
                                                   ((IData)(vlSelf->u_fifo__DOT__tx_cnt) 
                                                    > (IData)(vlSelf->txftlr))));
    vlSelf->u_mstfsm__DOT__rx_load_gate = ((0U == (IData)(vlSelf->cov_tmod)) 
                                           | ((2U == (IData)(vlSelf->cov_tmod)) 
                                              | (3U 
                                                 == (IData)(vlSelf->cov_tmod))));
    vlSelf->u_mstfsm__DOT__tx_fifo_filled = ((2U == (IData)(vlSelf->cov_tmod)) 
                                             | ((IData)(vlSelf->u_fifo__DOT__tx_cnt) 
                                                > (IData)(vlSelf->txftlr)));
    vlSelf->u_mstfsm__DOT__scph = vlSelf->cov_scph;
    vlSelf->scph = vlSelf->cov_scph;
    vlSelf->u_mstfsm__DOT__frf = vlSelf->cov_frf;
    vlSelf->u_shift__DOT__frf = vlSelf->cov_frf;
    vlSelf->frf = vlSelf->cov_frf;
    vlSelf->u_mstfsm__DOT__spi1 = ((0U == (IData)(vlSelf->cov_frf)) 
                                   & (IData)(vlSelf->cov_scph));
    vlSelf->cov_x_done = ((((3U == (IData)(vlSelf->cov_tmod)) 
                            & (0U == (IData)(vlSelf->cov_frf))) 
                           | (2U == (IData)(vlSelf->cov_tmod)))
                           ? (vlSelf->u_mstfsm__DOT__frame_cnt 
                              == vlSelf->cov_ndf) : (IData)(vlSelf->u_mstfsm__DOT__last_frame));
    vlSelf->u_mstfsm__DOT__ssp = (1U == (IData)(vlSelf->cov_frf));
    vlSelf->u_mstfsm__DOT__spi0 = ((~ (IData)(vlSelf->cov_scph)) 
                                   & (0U == (IData)(vlSelf->cov_frf)));
    vlSelf->u_regfile__DOT__ssienr = vlSelf->ssienr;
    vlSelf->u_sclkgen__DOT__ssi_en = vlSelf->ssienr;
    vlSelf->u_mstfsm__DOT__ssi_en = vlSelf->ssienr;
    vlSelf->u_shift__DOT__ssi_en = vlSelf->ssienr;
    vlSelf->u_mstfsm__DOT__cov_x_done = vlSelf->cov_x_done;
    vlSelf->u_mstfsm__DOT__x_done = vlSelf->cov_x_done;
    vlSelf->u_mstfsm__DOT____VdfgTmp_hf2822343__0 = 
        ((IData)(vlSelf->u_mstfsm__DOT__spi0) | (IData)(vlSelf->u_mstfsm__DOT__spi1));
    if (vlSelf->u_mstfsm__DOT__spi0) {
        vlSelf->u_mstfsm__DOT__sclk_fe_int = vlSelf->u_sclkgen__DOT__sclk_re_ir;
        vlSelf->u_mstfsm__DOT__sclk_re_int = vlSelf->u_sclkgen__DOT__sclk_fe_ir;
    } else {
        vlSelf->u_mstfsm__DOT__sclk_fe_int = vlSelf->u_sclkgen__DOT__sclk_fe_ir;
        vlSelf->u_mstfsm__DOT__sclk_re_int = vlSelf->u_sclkgen__DOT__sclk_re_ir;
    }
    vlSelf->cov_rx_shift_en = (((3U == (IData)(vlSelf->fsm_c_state)) 
                                | ((4U == (IData)(vlSelf->fsm_c_state)) 
                                   | (5U == (IData)(vlSelf->fsm_c_state)))) 
                               & (IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int));
    vlSelf->u_mstfsm__DOT__inc_bit_cnt = ((3U == (IData)(vlSelf->fsm_c_state)) 
                                          & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int));
    u_mstfsm__DOT____VdfgTmp_h17ec1c85__0 = ((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                             | (IData)(vlSelf->cov_baud2));
    vlSelf->u_mstfsm__DOT____VdfgTmp_hc03193b8__0 = 
        ((2U == (IData)(vlSelf->fsm_c_state)) & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int));
    u_mstfsm__DOT____VdfgTmp_hc0aea06c__0 = ((5U == (IData)(vlSelf->fsm_c_state)) 
                                             & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int));
    u_mstfsm__DOT____VdfgTmp_hda122231__0 = ((6U == (IData)(vlSelf->fsm_c_state)) 
                                             & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int));
    u_mstfsm__DOT____VdfgTmp_hf0b0fd97__0 = ((4U == (IData)(vlSelf->fsm_c_state)) 
                                             & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int));
    vlSelf->u_mstfsm__DOT__rx_shift_en = vlSelf->cov_rx_shift_en;
    vlSelf->u_mstfsm__DOT__cov_rx_shift_en = vlSelf->cov_rx_shift_en;
    vlSelf->u_shift__DOT__rx_shift_en = vlSelf->cov_rx_shift_en;
    vlSelf->rx_shift_en = vlSelf->cov_rx_shift_en;
    vlSelf->cov_tx_shift_en = ((IData)(vlSelf->u_mstfsm__DOT__inc_bit_cnt) 
                               & ((~ (vlSelf->ctrlr0 
                                      >> 0xaU)) | (3U 
                                                   == (IData)(vlSelf->cov_tmod))));
    vlSelf->u_mstfsm__DOT____VdfgTmp_hdb116fd1__0 = 
        (((IData)(u_mstfsm__DOT____VdfgTmp_hc0aea06c__0) 
          & (IData)(vlSelf->u_mstfsm__DOT__ssp)) | 
         ((~ (IData)(vlSelf->cov_x_done)) & (IData)(u_mstfsm__DOT____VdfgTmp_hda122231__0)));
    vlSelf->u_mstfsm__DOT__clr_bit_cnt = (((IData)(u_mstfsm__DOT____VdfgTmp_hc0aea06c__0) 
                                           & ((IData)(vlSelf->u_mstfsm__DOT__ssp) 
                                              | (IData)(vlSelf->cov_ss_tgl_en))) 
                                          | (((IData)(u_mstfsm__DOT____VdfgTmp_hda122231__0) 
                                              & ((~ (IData)(vlSelf->u_mstfsm__DOT__ssp)) 
                                                 & (~ (IData)(vlSelf->cov_ss_tgl_en)))) 
                                             | ((IData)(u_mstfsm__DOT____VdfgTmp_hf0b0fd97__0) 
                                                | ((0U 
                                                    == (IData)(vlSelf->fsm_c_state)) 
                                                   & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int)))));
    vlSelf->cov_load_rx_buf = ((IData)(vlSelf->u_mstfsm__DOT__rx_load_gate) 
                               & ((IData)(u_mstfsm__DOT____VdfgTmp_hf0b0fd97__0) 
                                  | (((5U == (IData)(vlSelf->fsm_c_state)) 
                                      & ((IData)(u_mstfsm__DOT____VdfgTmp_h17ec1c85__0) 
                                         & (IData)(vlSelf->u_mstfsm__DOT__ssp))) 
                                     | (((6U == (IData)(vlSelf->fsm_c_state)) 
                                         & (IData)(u_mstfsm__DOT____VdfgTmp_h17ec1c85__0)) 
                                        | ((7U == (IData)(vlSelf->fsm_c_state)) 
                                           & ((~ (IData)(vlSelf->u_mstfsm__DOT__spi0)) 
                                              & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int)))))));
    vlSelf->u_mstfsm__DOT____VdfgTmp_h0e46c02e__0 = 
        ((~ (IData)(vlSelf->cov_x_done)) & (IData)(u_mstfsm__DOT____VdfgTmp_hf0b0fd97__0));
    vlSelf->u_mstfsm__DOT__tx_shift_en = vlSelf->cov_tx_shift_en;
    vlSelf->u_mstfsm__DOT__cov_tx_shift_en = vlSelf->cov_tx_shift_en;
    vlSelf->u_shift__DOT__tx_shift_en = vlSelf->cov_tx_shift_en;
    vlSelf->tx_shift_en = vlSelf->cov_tx_shift_en;
    vlSelf->u_mstfsm__DOT__load_rx_buf = vlSelf->cov_load_rx_buf;
    vlSelf->u_mstfsm__DOT__cov_load_rx_buf = vlSelf->cov_load_rx_buf;
    vlSelf->u_shift__DOT__load_rx_buf = vlSelf->cov_load_rx_buf;
    vlSelf->load_rx_buf = vlSelf->cov_load_rx_buf;
    vlSelf->load_tx_buffer = ((~ (IData)(vlSelf->u_mstfsm__DOT__tx_load_en)) 
                              & ((IData)(vlSelf->u_mstfsm__DOT____VdfgTmp_hc03193b8__0) 
                                 | ((IData)(vlSelf->u_mstfsm__DOT____VdfgTmp_h0e46c02e__0) 
                                    | (IData)(vlSelf->u_mstfsm__DOT____VdfgTmp_hdb116fd1__0))));
    vlSelf->u_mstfsm__DOT__load_tx_buffer = vlSelf->load_tx_buffer;
    vlSelf->u_shift__DOT__load_tx_buffer = vlSelf->load_tx_buffer;
}

VL_INLINE_OPT void Vspi_xfer_top_spi_xfer_top___nba_sequent__TOP__spi_xfer_top__1(Vspi_xfer_top_spi_xfer_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_xfer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vspi_xfer_top_spi_xfer_top___nba_sequent__TOP__spi_xfer_top__1\n"); );
    // Init
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_h9cc55e2e__0;
    u_mstfsm__DOT____VdfgTmp_h9cc55e2e__0 = 0;
    // Body
    vlSelf->u_shift__DOT__rxd_mst_int = ((IData)(vlSelf->cov_srl_test)
                                          ? (IData)(vlSelf->txd)
                                          : (IData)(vlSelf->rxd));
    vlSelf->cov_eff_dfs = (((IData)(vlSelf->dfs_dec) 
                            < (IData)(vlSelf->SPEC_DFS_MIN))
                            ? (IData)(vlSelf->SPEC_DFS_MIN)
                            : (IData)(vlSelf->dfs_dec));
    vlSelf->u_mstfsm__DOT__abort_now = ((IData)(vlSelf->ssienr) 
                                        & ((((IData)(vlSelf->u_mstfsm__DOT__ssp) 
                                             & (IData)(vlSelf->ss_in_n)) 
                                            | ((~ (IData)(vlSelf->u_mstfsm__DOT__ssp)) 
                                               & (~ (IData)(vlSelf->ss_in_n)))) 
                                           & ((0U != (IData)(vlSelf->fsm_c_state)) 
                                              & (0xaU 
                                                 != (IData)(vlSelf->fsm_c_state)))));
    vlSelf->reg_rdata = ((8U & (IData)(vlSelf->reg_addr))
                          ? ((4U & (IData)(vlSelf->reg_addr))
                              ? 0U : ((2U & (IData)(vlSelf->reg_addr))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelf->reg_addr))
                                                ? vlSelf->cov_rx_data
                                                : (
                                                   ((IData)(vlSelf->cov_rx_full) 
                                                    << 4U) 
                                                   | ((8U 
                                                       & ((~ (IData)(vlSelf->cov_rx_empty)) 
                                                          << 3U)) 
                                                      | (((IData)(vlSelf->cov_tx_empty) 
                                                          << 2U) 
                                                         | ((2U 
                                                             & ((~ (IData)(vlSelf->cov_tx_full)) 
                                                                << 1U)) 
                                                            | (IData)(vlSelf->ssi_busy))))))))
                          : ((4U & (IData)(vlSelf->reg_addr))
                              ? ((2U & (IData)(vlSelf->reg_addr))
                                  ? ((1U & (IData)(vlSelf->reg_addr))
                                      ? (IData)(vlSelf->cov_rx_level)
                                      : (IData)(vlSelf->cov_tx_level))
                                  : ((1U & (IData)(vlSelf->reg_addr))
                                      ? (IData)(vlSelf->txftlr)
                                      : (IData)(vlSelf->baudr)))
                              : ((2U & (IData)(vlSelf->reg_addr))
                                  ? ((1U & (IData)(vlSelf->reg_addr))
                                      ? (IData)(vlSelf->ser)
                                      : (IData)(vlSelf->ssienr))
                                  : ((1U & (IData)(vlSelf->reg_addr))
                                      ? vlSelf->ctrlr1
                                      : vlSelf->ctrlr0))));
    vlSelf->u_fifo__DOT__rx_rd_ok = ((~ (IData)(vlSelf->cov_rx_empty)) 
                                     & (IData)(vlSelf->rx_pop));
    vlSelf->u_fifo__DOT__tx_wr_ok = ((~ (IData)(vlSelf->cov_tx_full)) 
                                     & (IData)(vlSelf->tx_push));
    vlSelf->u_regfile__DOT__tx_empty_early = ((~ (IData)(vlSelf->tx_push)) 
                                              & ((IData)(vlSelf->u_shift__DOT__tx_pop_ir) 
                                                 & (1U 
                                                    == (IData)(vlSelf->u_fifo__DOT__tx_cnt))));
    vlSelf->u_mstfsm__DOT__dfs = vlSelf->cov_eff_dfs;
    vlSelf->u_mstfsm__DOT__tx_dfs = vlSelf->cov_eff_dfs;
    vlSelf->u_shift__DOT__dfs = vlSelf->cov_eff_dfs;
    vlSelf->dfs_eff = vlSelf->cov_eff_dfs;
    vlSelf->tx_dfs = vlSelf->cov_eff_dfs;
    vlSelf->u_mstfsm__DOT__dfs_eff = vlSelf->cov_eff_dfs;
    vlSelf->u_mstfsm__DOT__inc_frame_cnt = ((3U == (IData)(vlSelf->fsm_c_state)) 
                                            & (((IData)(vlSelf->u_mstfsm__DOT__bit_cnt) 
                                                == 
                                                (0x3fU 
                                                 & ((IData)(vlSelf->cov_eff_dfs) 
                                                    - (IData)(2U)))) 
                                               & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int)));
    vlSelf->u_mstfsm__DOT__sspf_done = ((IData)(vlSelf->u_mstfsm__DOT__bit_cnt) 
                                        == (0x3fU & 
                                            ((IData)(vlSelf->cov_eff_dfs) 
                                             - (IData)(1U))));
    vlSelf->u_mstfsm__DOT__f_done = ((IData)(vlSelf->u_mstfsm__DOT__bit_cnt) 
                                     == (IData)(vlSelf->cov_eff_dfs));
    vlSelf->u_regfile__DOT__reg_rdata = vlSelf->reg_rdata;
    vlSelf->u_mstfsm__DOT__n_state = ((8U & (IData)(vlSelf->fsm_c_state))
                                       ? ((4U & (IData)(vlSelf->fsm_c_state))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelf->fsm_c_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->fsm_c_state))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->ssienr)
                                                      ? 0U
                                                      : 0xaU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->fsm_c_state))
                                                     ? 
                                                    (((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                      | (IData)(vlSelf->cov_baud2))
                                                      ? 0U
                                                      : 9U)
                                                     : 
                                                    ((((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                                                       | (IData)(vlSelf->cov_baud2)) 
                                                      & ((IData)(vlSelf->u_mstfsm__DOT__hold_cnt) 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->SPEC_HOLD_SS) 
                                                             - (IData)(1U)))))
                                                      ? 9U
                                                      : 8U))))
                                       : ((4U & (IData)(vlSelf->fsm_c_state))
                                           ? ((2U & (IData)(vlSelf->fsm_c_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->fsm_c_state))
                                                   ? 
                                                  ((((((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                                                       | (IData)(vlSelf->cov_baud2)) 
                                                      & (IData)(vlSelf->u_mstfsm__DOT__spi0)) 
                                                     & (~ (IData)(vlSelf->cov_x_done))) 
                                                    & (~ (IData)(vlSelf->u_mstfsm__DOT__abort_ir)))
                                                    ? 5U
                                                    : 
                                                   (((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                     & ((IData)(vlSelf->u_mstfsm__DOT__ssp) 
                                                        | ((IData)(vlSelf->u_mstfsm__DOT__spi0) 
                                                           & ((IData)(vlSelf->cov_x_done) 
                                                              | (IData)(vlSelf->u_mstfsm__DOT__abort_ir)))))
                                                     ? 9U
                                                     : 
                                                    ((((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                       | (IData)(vlSelf->cov_baud2)) 
                                                      & ((IData)(vlSelf->u_mstfsm__DOT__spi1) 
                                                         | (IData)(vlSelf->u_mstfsm__DOT__ssp)))
                                                      ? 8U
                                                      : 7U)))
                                                   : 
                                                  (((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                    | (IData)(vlSelf->cov_baud2))
                                                    ? 
                                                   ((((IData)(vlSelf->cov_ss_tgl_en) 
                                                      | (IData)(vlSelf->u_mstfsm__DOT__ssp)) 
                                                     | (IData)(vlSelf->u_mstfsm__DOT__spi1))
                                                     ? 7U
                                                     : 
                                                    (((IData)(vlSelf->cov_x_done) 
                                                      | (IData)(vlSelf->u_mstfsm__DOT__abort_ir))
                                                      ? 7U
                                                      : 3U))
                                                    : 6U))
                                               : ((1U 
                                                   & (IData)(vlSelf->fsm_c_state))
                                                   ? 
                                                  (((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                    | (IData)(vlSelf->cov_baud2))
                                                    ? 3U
                                                    : 5U)
                                                   : 
                                                  (((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                                                    | (IData)(vlSelf->cov_baud2))
                                                    ? 
                                                   (((IData)(vlSelf->u_mstfsm__DOT__spi0) 
                                                     & (~ (IData)(vlSelf->cov_baud2)))
                                                     ? 6U
                                                     : 
                                                    (((((IData)(vlSelf->u_mstfsm__DOT__spi1) 
                                                        & (IData)(vlSelf->cov_x_done)) 
                                                       | (((IData)(vlSelf->u_mstfsm__DOT__spi0) 
                                                           & (IData)(vlSelf->cov_baud2)) 
                                                          & ((IData)(vlSelf->cov_x_done) 
                                                             | (IData)(vlSelf->cov_ss_tgl_en)))) 
                                                      | (IData)(vlSelf->u_mstfsm__DOT__ssp))
                                                      ? 7U
                                                      : 
                                                     (((((IData)(vlSelf->u_mstfsm__DOT__spi0) 
                                                         & (IData)(vlSelf->cov_baud2)) 
                                                        & (~ (IData)(vlSelf->cov_x_done))) 
                                                       & (~ (IData)(vlSelf->cov_ss_tgl_en)))
                                                       ? 3U
                                                       : 4U)))
                                                    : 
                                                   (((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                     | (IData)(vlSelf->cov_baud2))
                                                     ? 
                                                    (((~ (IData)(vlSelf->cov_x_done)) 
                                                      & (IData)(vlSelf->u_mstfsm__DOT__spi1))
                                                      ? 3U
                                                      : 4U)
                                                     : 4U))))
                                           : ((2U & (IData)(vlSelf->fsm_c_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->fsm_c_state))
                                                   ? 
                                                  (((~ (IData)(vlSelf->u_mstfsm__DOT__ssp)) 
                                                    & (IData)(vlSelf->u_mstfsm__DOT__f_done))
                                                    ? 4U
                                                    : 
                                                   (((IData)(vlSelf->u_mstfsm__DOT__ssp) 
                                                     & ((~ (IData)(vlSelf->cov_x_done)) 
                                                        & (IData)(vlSelf->u_mstfsm__DOT__f_done)))
                                                     ? 5U
                                                     : 
                                                    ((((IData)(vlSelf->u_mstfsm__DOT__ssp) 
                                                       & (IData)(vlSelf->u_mstfsm__DOT__f_done)) 
                                                      & (IData)(vlSelf->u_mstfsm__DOT__x_done_1d))
                                                      ? 4U
                                                      : 3U)))
                                                   : 
                                                  (((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                    | (IData)(vlSelf->cov_baud2))
                                                    ? 3U
                                                    : 2U))
                                               : ((1U 
                                                   & (IData)(vlSelf->fsm_c_state))
                                                   ? 
                                                  (((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                                                    | (IData)(vlSelf->cov_baud2))
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  ((((((IData)(vlSelf->start_xfer) 
                                                       & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int)) 
                                                      & (IData)(vlSelf->u_mstfsm__DOT__tx_fifo_filled)) 
                                                     & (~ (IData)(vlSelf->cov_tx_empty))) 
                                                    & (((~ (IData)(vlSelf->u_mstfsm__DOT__ssp)) 
                                                        & (IData)(vlSelf->ss_in_n)) 
                                                       | ((IData)(vlSelf->u_mstfsm__DOT__ssp) 
                                                          & (~ (IData)(vlSelf->ss_in_n)))))
                                                    ? 1U
                                                    : 0U)))));
    vlSelf->u_mstfsm__DOT__clr_frame_cnt = ((0U == (IData)(vlSelf->fsm_c_state)) 
                                            | ((9U 
                                                == (IData)(vlSelf->fsm_c_state)) 
                                               & (9U 
                                                  != (IData)(vlSelf->u_mstfsm__DOT__n_state))));
    vlSelf->u_mstfsm__DOT__busy_now = ((0U != (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                       & (0xaU != (IData)(vlSelf->u_mstfsm__DOT__n_state)));
    u_mstfsm__DOT____VdfgTmp_h9cc55e2e__0 = ((9U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                             | (0xaU 
                                                == (IData)(vlSelf->u_mstfsm__DOT__n_state)));
    if (vlSelf->u_mstfsm__DOT____VdfgTmp_hf2822343__0) {
        vlSelf->fsm_slv_sel = ((0U != (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                               & ((9U != (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                  & ((0xaU != (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                     & (5U != (IData)(vlSelf->u_mstfsm__DOT__n_state)))));
        vlSelf->u_mstfsm__DOT__ssi_oe_n_iw = (1U & 
                                              ((0U 
                                                == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                               | (IData)(u_mstfsm__DOT____VdfgTmp_h9cc55e2e__0)));
    } else {
        vlSelf->fsm_slv_sel = ((IData)(vlSelf->u_mstfsm__DOT__ssp) 
                               & ((1U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                  | ((2U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                     | ((5U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                        | ((3U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                           & ((IData)(vlSelf->u_mstfsm__DOT__sspf_done) 
                                              & ((~ (IData)(vlSelf->cov_x_done)) 
                                                 & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int))))))));
        vlSelf->u_mstfsm__DOT__ssi_oe_n_iw = (1U & 
                                              ((~ (IData)(vlSelf->u_mstfsm__DOT__ssp)) 
                                               | ((0U 
                                                   == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                                  | ((1U 
                                                      == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                                     | (IData)(u_mstfsm__DOT____VdfgTmp_h9cc55e2e__0)))));
    }
    vlSelf->cov_sclk_mask = ((3U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                             | ((4U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                | ((6U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                   | (((2U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                       & ((IData)(vlSelf->u_mstfsm__DOT__spi1) 
                                          | (IData)(vlSelf->u_mstfsm__DOT__ssp))) 
                                      | ((5U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                         & (IData)(vlSelf->u_mstfsm__DOT__ssp))))));
    vlSelf->u_mstfsm__DOT__refill_now = ((IData)(vlSelf->u_mstfsm__DOT__busy_now) 
                                         & ((IData)(vlSelf->cov_tx_empty) 
                                            & (1U <= vlSelf->u_mstfsm__DOT__frame_cnt)));
    vlSelf->u_mstfsm__DOT__fsm_slv_sel = vlSelf->fsm_slv_sel;
    vlSelf->u_shift__DOT__fsm_slv_sel = vlSelf->fsm_slv_sel;
    vlSelf->u_sclkgen__DOT__sclk_mask = vlSelf->cov_sclk_mask;
    vlSelf->u_mstfsm__DOT__sclk_mask = vlSelf->cov_sclk_mask;
    vlSelf->sclk_mask = vlSelf->cov_sclk_mask;
    vlSelf->cov_load_tx_shift = ((IData)(vlSelf->u_mstfsm__DOT__tx_load_en) 
                                 & ((~ (IData)(vlSelf->cov_tx_empty)) 
                                    & ((IData)(vlSelf->u_mstfsm__DOT____VdfgTmp_hc03193b8__0) 
                                       | (((IData)(vlSelf->u_mstfsm__DOT____VdfgTmp_h0e46c02e__0) 
                                           & ((~ (IData)(vlSelf->u_mstfsm__DOT__ssp)) 
                                              | (IData)(vlSelf->cov_sclk_mask))) 
                                          | (IData)(vlSelf->u_mstfsm__DOT____VdfgTmp_hdb116fd1__0)))));
    vlSelf->u_mstfsm__DOT__load_tx_shift = vlSelf->cov_load_tx_shift;
    vlSelf->u_mstfsm__DOT__cov_load_tx_shift = vlSelf->cov_load_tx_shift;
    vlSelf->u_shift__DOT__load_tx_shift = vlSelf->cov_load_tx_shift;
    vlSelf->load_tx_shift = vlSelf->cov_load_tx_shift;
}
