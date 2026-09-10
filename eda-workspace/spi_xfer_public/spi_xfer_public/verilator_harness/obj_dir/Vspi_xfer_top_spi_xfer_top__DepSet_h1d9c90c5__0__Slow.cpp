// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_xfer_top.h for the primary calling header

#include "Vspi_xfer_top__pch.h"
#include "Vspi_xfer_top_spi_xfer_top.h"

VL_ATTR_COLD void Vspi_xfer_top_spi_xfer_top___stl_sequent__TOP__spi_xfer_top__0(Vspi_xfer_top_spi_xfer_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_xfer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vspi_xfer_top_spi_xfer_top___stl_sequent__TOP__spi_xfer_top__0\n"); );
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
    vlSelf->u_regfile__DOT__ctrlr0 = vlSelf->ctrlr0;
    vlSelf->u_regfile__DOT__ctrlr1 = vlSelf->ctrlr1;
    vlSelf->u_regfile__DOT__ssienr = vlSelf->ssienr;
    vlSelf->u_regfile__DOT__ser = vlSelf->ser;
    vlSelf->u_regfile__DOT__baudr = vlSelf->baudr;
    vlSelf->u_regfile__DOT__txftlr = vlSelf->txftlr;
    vlSelf->u_regfile__DOT__start_xfer = vlSelf->start_xfer;
    vlSelf->u_sclkgen__DOT__ssi_en = vlSelf->ssienr;
    vlSelf->u_sclkgen__DOT__baudr = vlSelf->baudr;
    vlSelf->u_sclkgen__DOT__sclk_out = vlSelf->sclk_out;
    vlSelf->u_mstfsm__DOT__ssi_en = vlSelf->ssienr;
    vlSelf->u_mstfsm__DOT__start_xfer = vlSelf->start_xfer;
    vlSelf->u_mstfsm__DOT__txfthr = vlSelf->txftlr;
    vlSelf->u_mstfsm__DOT__c_state = vlSelf->fsm_c_state;
    vlSelf->u_shift__DOT__ser = vlSelf->ser;
    vlSelf->u_shift__DOT__ssi_en = vlSelf->ssienr;
    vlSelf->u_shift__DOT__txd = vlSelf->txd;
    vlSelf->u_shift__DOT__ss_n = vlSelf->ss_n;
    vlSelf->u_sclkgen__DOT__r_det = (0xffffU & (VL_SHIFTR_III(16,16,32, (IData)(vlSelf->baudr), 1U) 
                                                - (IData)(1U)));
    vlSelf->u_sclkgen__DOT__f_det = (0xffffU & ((IData)(vlSelf->baudr) 
                                                - (IData)(1U)));
    vlSelf->u_regfile__DOT__slv_sel = (0U != (IData)(vlSelf->ser));
    vlSelf->u_sclkgen__DOT__ssi_cnt_out = vlSelf->u_sclkgen__DOT__ssi_cnt;
    vlSelf->cov_fsm_state_id = vlSelf->fsm_c_state;
    vlSelf->cov_baudr = vlSelf->baudr;
    vlSelf->cov_sclk_out = vlSelf->sclk_out;
    vlSelf->cov_ss_active = (0U != (0xfU & (~ (IData)(vlSelf->ss_n))));
    vlSelf->cov_ser = vlSelf->ser;
    vlSelf->cov_s2 = vlSelf->write_active_r;
    vlSelf->cov_start_xfer = vlSelf->start_xfer;
    vlSelf->fsm_sleep = vlSelf->u_mstfsm__DOT__fsm_sleep_ir;
    vlSelf->ssi_oe_n = vlSelf->u_mstfsm__DOT__ssi_oe_n_ir;
    vlSelf->cov_xfer_complete = ((0U == (IData)(vlSelf->fsm_c_state)) 
                                 & ((0U != (IData)(vlSelf->prev_fsm_state)) 
                                    & (0xaU != (IData)(vlSelf->prev_fsm_state))));
    vlSelf->cov_fsm_state = (0x7ffU & ((IData)(1U) 
                                       << (IData)(vlSelf->fsm_c_state)));
    vlSelf->cov_bit_cnt = vlSelf->u_mstfsm__DOT__bit_cnt;
    vlSelf->cov_frame_cnt = vlSelf->u_mstfsm__DOT__frame_cnt;
    vlSelf->cov_last_frame = vlSelf->u_mstfsm__DOT__last_frame;
    vlSelf->cov_txd = vlSelf->txd;
    vlSelf->rx_push = vlSelf->u_shift__DOT__rx_push_ir;
    vlSelf->cov_hold_ss_cnt = vlSelf->u_mstfsm__DOT__hold_cnt;
    vlSelf->cov_s0 = vlSelf->u_mstfsm__DOT__abort_seen_r;
    vlSelf->cov_s1 = vlSelf->u_mstfsm__DOT__refill_seen_r;
    vlSelf->tx_pop_data = vlSelf->u_fifo__DOT__tx_mem
        [vlSelf->u_fifo__DOT__tx_rd_ptr];
    vlSelf->cov_scpol = (1U & (vlSelf->ctrlr0 >> 8U));
    vlSelf->tx_pop = vlSelf->u_shift__DOT__tx_pop_ir;
    vlSelf->u_shift__DOT__cov_rx_buffer = vlSelf->u_shift__DOT__rx_buffer;
    vlSelf->cov_sclk_re = vlSelf->u_sclkgen__DOT__sclk_re_ir;
    vlSelf->cov_sclk_fe = vlSelf->u_sclkgen__DOT__sclk_fe_ir;
    vlSelf->cov_srl_test = (1U & (vlSelf->ctrlr0 >> 0xbU));
    vlSelf->cov_rx_level = vlSelf->u_fifo__DOT__rx_cnt;
    vlSelf->ssi_busy = vlSelf->u_mstfsm__DOT__fsm_busy_ir;
    vlSelf->cov_rx_data = vlSelf->u_fifo__DOT__rx_mem
        [vlSelf->u_fifo__DOT__rx_rd_ptr];
    vlSelf->cov_tx_level = vlSelf->u_fifo__DOT__tx_cnt;
    vlSelf->cov_tx_full = (8U == (IData)(vlSelf->u_fifo__DOT__tx_cnt));
    vlSelf->cov_rx_empty = (0U == (IData)(vlSelf->u_fifo__DOT__rx_cnt));
    vlSelf->cov_rx_full = (8U == (IData)(vlSelf->u_fifo__DOT__rx_cnt));
    vlSelf->cov_ss_tgl_en = (1U & (vlSelf->ctrlr0 >> 0xcU));
    vlSelf->cov_baud2 = (2U == (IData)(vlSelf->baudr));
    vlSelf->cov_dfs = (0x1fU & vlSelf->ctrlr0);
    vlSelf->cov_tx_empty = (0U == (IData)(vlSelf->u_fifo__DOT__tx_cnt));
    vlSelf->cov_ndf = (0x1ffffU & vlSelf->ctrlr1);
    vlSelf->cov_tmod = (3U & (vlSelf->ctrlr0 >> 9U));
    vlSelf->cov_scph = (1U & (vlSelf->ctrlr0 >> 7U));
    vlSelf->cov_frf = (3U & (vlSelf->ctrlr0 >> 5U));
    vlSelf->u_regfile__DOT__reg_wdata = vlSelf->reg_wdata;
    vlSelf->u_fifo__DOT__tx_push_data = vlSelf->reg_wdata;
    vlSelf->u_shift__DOT__rxd = vlSelf->rxd;
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
    vlSelf->u_mstfsm__DOT__spec_hold_ss = vlSelf->SPEC_HOLD_SS;
    vlSelf->u_mstfsm__DOT__ss_in_n = vlSelf->ss_in_n;
    vlSelf->cov_ss_in_n = vlSelf->ss_in_n;
    vlSelf->u_mstfsm__DOT__fsm_sleep = vlSelf->fsm_sleep;
    vlSelf->u_mstfsm__DOT__ssi_oe_n = vlSelf->ssi_oe_n;
    vlSelf->u_mstfsm__DOT__cov_fsm_state = vlSelf->cov_fsm_state;
    vlSelf->u_mstfsm__DOT__cov_bit_cnt = vlSelf->cov_bit_cnt;
    vlSelf->u_mstfsm__DOT__cov_frame_cnt = vlSelf->cov_frame_cnt;
    vlSelf->u_mstfsm__DOT__cov_last_frame = vlSelf->cov_last_frame;
    vlSelf->u_shift__DOT__cov_txd = vlSelf->cov_txd;
    vlSelf->u_fifo__DOT__rx_push = vlSelf->rx_push;
    vlSelf->u_shift__DOT__rx_push = vlSelf->rx_push;
    vlSelf->u_mstfsm__DOT__cov_hold_ss_cnt = vlSelf->cov_hold_ss_cnt;
    vlSelf->u_mstfsm__DOT__cov_s0 = vlSelf->cov_s0;
    vlSelf->u_mstfsm__DOT__cov_s1 = vlSelf->cov_s1;
    vlSelf->u_fifo__DOT__tx_pop_data = vlSelf->tx_pop_data;
    vlSelf->u_shift__DOT__tx_pop_data = vlSelf->tx_pop_data;
    vlSelf->u_sclkgen__DOT__sclk_active = vlSelf->cov_scpol;
    vlSelf->scpol = vlSelf->cov_scpol;
    vlSelf->u_regfile__DOT__tx_pop = vlSelf->tx_pop;
    vlSelf->u_fifo__DOT__tx_pop = vlSelf->tx_pop;
    vlSelf->u_shift__DOT__tx_pop = vlSelf->tx_pop;
    vlSelf->u_fifo__DOT__rx_push_data = vlSelf->u_shift__DOT__cov_rx_buffer;
    vlSelf->u_shift__DOT__rx_push_data = vlSelf->u_shift__DOT__cov_rx_buffer;
    vlSelf->rx_push_data = vlSelf->u_shift__DOT__cov_rx_buffer;
    vlSelf->u_sclkgen__DOT__sclk_re = vlSelf->cov_sclk_re;
    vlSelf->u_mstfsm__DOT__sclk_re = vlSelf->cov_sclk_re;
    vlSelf->sclk_re = vlSelf->cov_sclk_re;
    vlSelf->u_sclkgen__DOT__sclk_fe = vlSelf->cov_sclk_fe;
    vlSelf->u_mstfsm__DOT__sclk_fe = vlSelf->cov_sclk_fe;
    vlSelf->sclk_fe = vlSelf->cov_sclk_fe;
    if (vlSelf->cov_srl_test) {
        vlSelf->u_shift__DOT__srl_test = 1U;
        vlSelf->srl_test = 1U;
        vlSelf->u_shift__DOT__rxd_mst_int = vlSelf->txd;
    } else {
        vlSelf->u_shift__DOT__srl_test = 0U;
        vlSelf->srl_test = 0U;
        vlSelf->u_shift__DOT__rxd_mst_int = vlSelf->rxd;
    }
    vlSelf->u_regfile__DOT__rx_level = vlSelf->cov_rx_level;
    vlSelf->u_fifo__DOT__rx_level = vlSelf->cov_rx_level;
    vlSelf->rx_level = vlSelf->cov_rx_level;
    vlSelf->u_regfile__DOT__fsm_busy = vlSelf->ssi_busy;
    vlSelf->u_mstfsm__DOT__fsm_busy = vlSelf->ssi_busy;
    vlSelf->fsm_busy = vlSelf->ssi_busy;
    vlSelf->u_regfile__DOT__rx_pop_data = vlSelf->cov_rx_data;
    vlSelf->u_fifo__DOT__rx_pop_data = vlSelf->cov_rx_data;
    vlSelf->rx_pop_data = vlSelf->cov_rx_data;
    vlSelf->u_regfile__DOT__tx_level = vlSelf->cov_tx_level;
    vlSelf->u_fifo__DOT__tx_level = vlSelf->cov_tx_level;
    vlSelf->u_mstfsm__DOT__tx_fifo_level = vlSelf->cov_tx_level;
    vlSelf->tx_level = vlSelf->cov_tx_level;
    vlSelf->u_regfile__DOT__tx_full = vlSelf->cov_tx_full;
    vlSelf->u_fifo__DOT__tx_full = vlSelf->cov_tx_full;
    vlSelf->tx_full = vlSelf->cov_tx_full;
    vlSelf->u_regfile__DOT__rx_empty = vlSelf->cov_rx_empty;
    vlSelf->u_fifo__DOT__rx_empty = vlSelf->cov_rx_empty;
    vlSelf->rx_empty = vlSelf->cov_rx_empty;
    vlSelf->u_regfile__DOT__rx_full = vlSelf->cov_rx_full;
    vlSelf->u_fifo__DOT__rx_full = vlSelf->cov_rx_full;
    vlSelf->rx_full = vlSelf->cov_rx_full;
    vlSelf->u_fifo__DOT__rx_wr_ok = ((~ (IData)(vlSelf->cov_rx_full)) 
                                     & (IData)(vlSelf->u_shift__DOT__rx_push_ir));
    vlSelf->u_mstfsm__DOT__ss_tgl_en = vlSelf->cov_ss_tgl_en;
    vlSelf->ss_tgl_en = vlSelf->cov_ss_tgl_en;
    vlSelf->u_mstfsm__DOT__baud2 = vlSelf->cov_baud2;
    vlSelf->baud2 = vlSelf->cov_baud2;
    vlSelf->dfs = vlSelf->cov_dfs;
    vlSelf->dfs_dec = (0x3fU & ((IData)(1U) + (IData)(vlSelf->cov_dfs)));
    vlSelf->u_regfile__DOT__tx_empty = vlSelf->cov_tx_empty;
    vlSelf->u_fifo__DOT__tx_empty = vlSelf->cov_tx_empty;
    vlSelf->u_mstfsm__DOT__tx_empty = vlSelf->cov_tx_empty;
    vlSelf->tx_empty = vlSelf->cov_tx_empty;
    vlSelf->u_fifo__DOT__tx_rd_ok = ((~ (IData)(vlSelf->cov_tx_empty)) 
                                     & (IData)(vlSelf->u_shift__DOT__tx_pop_ir));
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
    vlSelf->u_mstfsm__DOT__ndf = vlSelf->cov_ndf;
    vlSelf->ndf = vlSelf->cov_ndf;
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
    vlSelf->cov_eff_dfs = (((IData)(vlSelf->dfs_dec) 
                            < (IData)(vlSelf->SPEC_DFS_MIN))
                            ? (IData)(vlSelf->SPEC_DFS_MIN)
                            : (IData)(vlSelf->dfs_dec));
    vlSelf->u_regfile__DOT__reg_rdata = vlSelf->reg_rdata;
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

VL_ATTR_COLD void Vspi_xfer_top_spi_xfer_top___ctor_var_reset(Vspi_xfer_top_spi_xfer_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_xfer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vspi_xfer_top_spi_xfer_top___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->reg_we = VL_RAND_RESET_I(1);
    vlSelf->reg_addr = VL_RAND_RESET_I(4);
    vlSelf->reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->reg_re = VL_RAND_RESET_I(1);
    vlSelf->reg_rdata = VL_RAND_RESET_I(32);
    vlSelf->rxd = VL_RAND_RESET_I(1);
    vlSelf->ss_in_n = VL_RAND_RESET_I(1);
    vlSelf->sclk_out = VL_RAND_RESET_I(1);
    vlSelf->txd = VL_RAND_RESET_I(1);
    vlSelf->ss_n = VL_RAND_RESET_I(4);
    vlSelf->ssi_busy = VL_RAND_RESET_I(1);
    vlSelf->SPEC_DFS_MIN = VL_RAND_RESET_I(4);
    vlSelf->SPEC_HOLD_SS = VL_RAND_RESET_I(4);
    vlSelf->cov_fsm_state = VL_RAND_RESET_I(11);
    vlSelf->cov_fsm_state_id = VL_RAND_RESET_I(4);
    vlSelf->cov_sclk_re = VL_RAND_RESET_I(1);
    vlSelf->cov_sclk_fe = VL_RAND_RESET_I(1);
    vlSelf->cov_sclk_out = VL_RAND_RESET_I(1);
    vlSelf->cov_sclk_mask = VL_RAND_RESET_I(1);
    vlSelf->cov_bit_cnt = VL_RAND_RESET_I(6);
    vlSelf->cov_frame_cnt = VL_RAND_RESET_I(17);
    vlSelf->cov_x_done = VL_RAND_RESET_I(1);
    vlSelf->cov_last_frame = VL_RAND_RESET_I(1);
    vlSelf->cov_tx_shift_en = VL_RAND_RESET_I(1);
    vlSelf->cov_rx_shift_en = VL_RAND_RESET_I(1);
    vlSelf->cov_load_tx_shift = VL_RAND_RESET_I(1);
    vlSelf->cov_load_rx_buf = VL_RAND_RESET_I(1);
    vlSelf->cov_ss_active = VL_RAND_RESET_I(1);
    vlSelf->cov_xfer_complete = VL_RAND_RESET_I(1);
    vlSelf->cov_txd = VL_RAND_RESET_I(1);
    vlSelf->cov_dfs = VL_RAND_RESET_I(5);
    vlSelf->cov_eff_dfs = VL_RAND_RESET_I(6);
    vlSelf->cov_baudr = VL_RAND_RESET_I(16);
    vlSelf->cov_baud2 = VL_RAND_RESET_I(1);
    vlSelf->cov_ndf = VL_RAND_RESET_I(17);
    vlSelf->cov_tmod = VL_RAND_RESET_I(2);
    vlSelf->cov_frf = VL_RAND_RESET_I(2);
    vlSelf->cov_scph = VL_RAND_RESET_I(1);
    vlSelf->cov_scpol = VL_RAND_RESET_I(1);
    vlSelf->cov_srl_test = VL_RAND_RESET_I(1);
    vlSelf->cov_ss_tgl_en = VL_RAND_RESET_I(1);
    vlSelf->cov_ser = VL_RAND_RESET_I(4);
    vlSelf->cov_tx_level = VL_RAND_RESET_I(4);
    vlSelf->cov_rx_level = VL_RAND_RESET_I(4);
    vlSelf->cov_tx_empty = VL_RAND_RESET_I(1);
    vlSelf->cov_tx_full = VL_RAND_RESET_I(1);
    vlSelf->cov_rx_empty = VL_RAND_RESET_I(1);
    vlSelf->cov_rx_full = VL_RAND_RESET_I(1);
    vlSelf->cov_hold_ss_cnt = VL_RAND_RESET_I(4);
    vlSelf->cov_s0 = VL_RAND_RESET_I(1);
    vlSelf->cov_s1 = VL_RAND_RESET_I(1);
    vlSelf->cov_s2 = VL_RAND_RESET_I(1);
    vlSelf->cov_rx_data = VL_RAND_RESET_I(32);
    vlSelf->cov_ss_in_n = VL_RAND_RESET_I(1);
    vlSelf->cov_start_xfer = VL_RAND_RESET_I(1);
    vlSelf->sclk_re = VL_RAND_RESET_I(1);
    vlSelf->sclk_fe = VL_RAND_RESET_I(1);
    vlSelf->sclk_mask = VL_RAND_RESET_I(1);
    vlSelf->fsm_slv_sel = VL_RAND_RESET_I(1);
    vlSelf->load_tx_shift = VL_RAND_RESET_I(1);
    vlSelf->load_tx_buffer = VL_RAND_RESET_I(1);
    vlSelf->load_rx_buf = VL_RAND_RESET_I(1);
    vlSelf->tx_shift_en = VL_RAND_RESET_I(1);
    vlSelf->rx_shift_en = VL_RAND_RESET_I(1);
    vlSelf->tx_dfs = VL_RAND_RESET_I(6);
    vlSelf->ssi_oe_n = VL_RAND_RESET_I(1);
    vlSelf->fsm_busy = VL_RAND_RESET_I(1);
    vlSelf->fsm_sleep = VL_RAND_RESET_I(1);
    vlSelf->tx_pop = VL_RAND_RESET_I(1);
    vlSelf->rx_push = VL_RAND_RESET_I(1);
    vlSelf->tx_push = VL_RAND_RESET_I(1);
    vlSelf->rx_pop = VL_RAND_RESET_I(1);
    vlSelf->tx_full = VL_RAND_RESET_I(1);
    vlSelf->tx_empty = VL_RAND_RESET_I(1);
    vlSelf->rx_full = VL_RAND_RESET_I(1);
    vlSelf->rx_empty = VL_RAND_RESET_I(1);
    vlSelf->tx_level = VL_RAND_RESET_I(4);
    vlSelf->rx_level = VL_RAND_RESET_I(4);
    vlSelf->tx_pop_data = VL_RAND_RESET_I(32);
    vlSelf->rx_pop_data = VL_RAND_RESET_I(32);
    vlSelf->rx_push_data = VL_RAND_RESET_I(32);
    vlSelf->fsm_c_state = VL_RAND_RESET_I(4);
    vlSelf->start_xfer = VL_RAND_RESET_I(1);
    vlSelf->baud2 = VL_RAND_RESET_I(1);
    vlSelf->ctrlr0 = VL_RAND_RESET_I(32);
    vlSelf->ctrlr1 = VL_RAND_RESET_I(32);
    vlSelf->ssienr = VL_RAND_RESET_I(1);
    vlSelf->ser = VL_RAND_RESET_I(4);
    vlSelf->baudr = VL_RAND_RESET_I(16);
    vlSelf->txftlr = VL_RAND_RESET_I(4);
    vlSelf->dfs = VL_RAND_RESET_I(5);
    vlSelf->frf = VL_RAND_RESET_I(2);
    vlSelf->scph = VL_RAND_RESET_I(1);
    vlSelf->scpol = VL_RAND_RESET_I(1);
    vlSelf->tmod = VL_RAND_RESET_I(2);
    vlSelf->srl_test = VL_RAND_RESET_I(1);
    vlSelf->ss_tgl_en = VL_RAND_RESET_I(1);
    vlSelf->ndf = VL_RAND_RESET_I(17);
    vlSelf->dfs_dec = VL_RAND_RESET_I(6);
    vlSelf->dfs_eff = VL_RAND_RESET_I(6);
    vlSelf->prev_fsm_state = VL_RAND_RESET_I(4);
    vlSelf->write_active_r = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__reg_we = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__reg_addr = VL_RAND_RESET_I(4);
    vlSelf->u_regfile__DOT__reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->u_regfile__DOT__reg_re = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__reg_rdata = VL_RAND_RESET_I(32);
    vlSelf->u_regfile__DOT__ctrlr0 = VL_RAND_RESET_I(32);
    vlSelf->u_regfile__DOT__ctrlr1 = VL_RAND_RESET_I(32);
    vlSelf->u_regfile__DOT__ssienr = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__ser = VL_RAND_RESET_I(4);
    vlSelf->u_regfile__DOT__baudr = VL_RAND_RESET_I(16);
    vlSelf->u_regfile__DOT__txftlr = VL_RAND_RESET_I(4);
    vlSelf->u_regfile__DOT__fsm_busy = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__tx_full = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__tx_empty = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__tx_level = VL_RAND_RESET_I(4);
    vlSelf->u_regfile__DOT__rx_full = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__rx_empty = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__rx_level = VL_RAND_RESET_I(4);
    vlSelf->u_regfile__DOT__rx_pop_data = VL_RAND_RESET_I(32);
    vlSelf->u_regfile__DOT__tx_pop = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__tx_push = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__rx_pop = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__start_xfer = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__slv_sel = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__tx_empty_early = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__tx_fifo_ready = VL_RAND_RESET_I(1);
    vlSelf->u_fifo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->u_fifo__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->u_fifo__DOT__tx_push = VL_RAND_RESET_I(1);
    vlSelf->u_fifo__DOT__tx_push_data = VL_RAND_RESET_I(32);
    vlSelf->u_fifo__DOT__tx_pop = VL_RAND_RESET_I(1);
    vlSelf->u_fifo__DOT__rx_push = VL_RAND_RESET_I(1);
    vlSelf->u_fifo__DOT__rx_push_data = VL_RAND_RESET_I(32);
    vlSelf->u_fifo__DOT__rx_pop = VL_RAND_RESET_I(1);
    vlSelf->u_fifo__DOT__tx_full = VL_RAND_RESET_I(1);
    vlSelf->u_fifo__DOT__tx_empty = VL_RAND_RESET_I(1);
    vlSelf->u_fifo__DOT__rx_full = VL_RAND_RESET_I(1);
    vlSelf->u_fifo__DOT__rx_empty = VL_RAND_RESET_I(1);
    vlSelf->u_fifo__DOT__tx_level = VL_RAND_RESET_I(4);
    vlSelf->u_fifo__DOT__rx_level = VL_RAND_RESET_I(4);
    vlSelf->u_fifo__DOT__tx_pop_data = VL_RAND_RESET_I(32);
    vlSelf->u_fifo__DOT__rx_pop_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->u_fifo__DOT__tx_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->u_fifo__DOT__rx_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->u_fifo__DOT__tx_wr_ptr = VL_RAND_RESET_I(3);
    vlSelf->u_fifo__DOT__tx_rd_ptr = VL_RAND_RESET_I(3);
    vlSelf->u_fifo__DOT__rx_wr_ptr = VL_RAND_RESET_I(3);
    vlSelf->u_fifo__DOT__rx_rd_ptr = VL_RAND_RESET_I(3);
    vlSelf->u_fifo__DOT__tx_cnt = VL_RAND_RESET_I(4);
    vlSelf->u_fifo__DOT__rx_cnt = VL_RAND_RESET_I(4);
    vlSelf->u_fifo__DOT__tx_wr_ok = VL_RAND_RESET_I(1);
    vlSelf->u_fifo__DOT__tx_rd_ok = VL_RAND_RESET_I(1);
    vlSelf->u_fifo__DOT__rx_wr_ok = VL_RAND_RESET_I(1);
    vlSelf->u_fifo__DOT__rx_rd_ok = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__ssi_en = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__baudr = VL_RAND_RESET_I(16);
    vlSelf->u_sclkgen__DOT__sclk_mask = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__sclk_active = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__sclk_out = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__sclk_re = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__sclk_fe = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__ssi_cnt_out = VL_RAND_RESET_I(16);
    vlSelf->u_sclkgen__DOT__ssi_cnt = VL_RAND_RESET_I(16);
    vlSelf->u_sclkgen__DOT__sclk_re_ir = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__sclk_fe_ir = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__r_det = VL_RAND_RESET_I(16);
    vlSelf->u_sclkgen__DOT__f_det = VL_RAND_RESET_I(16);
    vlSelf->u_mstfsm__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__ssi_en = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__start_xfer = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__tx_empty = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__tx_fifo_level = VL_RAND_RESET_I(4);
    vlSelf->u_mstfsm__DOT__txfthr = VL_RAND_RESET_I(4);
    vlSelf->u_mstfsm__DOT__sclk_re = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__sclk_fe = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__frf = VL_RAND_RESET_I(2);
    vlSelf->u_mstfsm__DOT__scph = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__tmod = VL_RAND_RESET_I(2);
    vlSelf->u_mstfsm__DOT__dfs = VL_RAND_RESET_I(6);
    vlSelf->u_mstfsm__DOT__ndf = VL_RAND_RESET_I(17);
    vlSelf->u_mstfsm__DOT__ss_tgl_en = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__ss_in_n = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__baud2 = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__spec_hold_ss = VL_RAND_RESET_I(4);
    vlSelf->u_mstfsm__DOT__c_state = VL_RAND_RESET_I(4);
    vlSelf->u_mstfsm__DOT__fsm_busy = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__fsm_sleep = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__sclk_mask = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__fsm_slv_sel = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__load_tx_shift = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__load_tx_buffer = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__load_rx_buf = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__tx_shift_en = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__rx_shift_en = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__tx_dfs = VL_RAND_RESET_I(6);
    vlSelf->u_mstfsm__DOT__ssi_oe_n = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_fsm_state = VL_RAND_RESET_I(11);
    vlSelf->u_mstfsm__DOT__cov_bit_cnt = VL_RAND_RESET_I(6);
    vlSelf->u_mstfsm__DOT__cov_frame_cnt = VL_RAND_RESET_I(17);
    vlSelf->u_mstfsm__DOT__cov_x_done = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_last_frame = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_tx_shift_en = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_rx_shift_en = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_load_tx_shift = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_load_rx_buf = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_hold_ss_cnt = VL_RAND_RESET_I(4);
    vlSelf->u_mstfsm__DOT__cov_s0 = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_s1 = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__spi0 = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__spi1 = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__ssp = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__sclk_re_int = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__sclk_fe_int = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__bit_cnt = VL_RAND_RESET_I(6);
    vlSelf->u_mstfsm__DOT__frame_cnt = VL_RAND_RESET_I(17);
    vlSelf->u_mstfsm__DOT__last_frame = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__x_done_1d = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__tx_load_en = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__abort_ir = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__hold_cnt = VL_RAND_RESET_I(4);
    vlSelf->u_mstfsm__DOT__n_state = VL_RAND_RESET_I(4);
    vlSelf->u_mstfsm__DOT__dfs_eff = VL_RAND_RESET_I(6);
    vlSelf->u_mstfsm__DOT__f_done = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__sspf_done = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__tx_fifo_filled = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__x_done = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__inc_bit_cnt = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__clr_bit_cnt = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__inc_frame_cnt = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__clr_frame_cnt = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__abort_now = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__busy_now = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__refill_now = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__abort_seen_r = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__refill_seen_r = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__fsm_sleep_ir = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__fsm_busy_ir = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__rx_load_gate = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__ssi_oe_n_iw = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__ssi_oe_n_ir = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT____VdfgTmp_hf2822343__0 = 0;
    vlSelf->u_mstfsm__DOT____VdfgTmp_hc03193b8__0 = 0;
    vlSelf->u_mstfsm__DOT____VdfgTmp_h0e46c02e__0 = 0;
    vlSelf->u_mstfsm__DOT____VdfgTmp_hdb116fd1__0 = 0;
    vlSelf->u_shift__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__tx_shift_en = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__load_tx_shift = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__load_tx_buffer = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__rx_shift_en = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__load_rx_buf = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__tx_pop_data = VL_RAND_RESET_I(32);
    vlSelf->u_shift__DOT__rxd = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__dfs = VL_RAND_RESET_I(6);
    vlSelf->u_shift__DOT__fsm_slv_sel = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__ser = VL_RAND_RESET_I(4);
    vlSelf->u_shift__DOT__frf = VL_RAND_RESET_I(2);
    vlSelf->u_shift__DOT__srl_test = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__ssi_en = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__txd = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__tx_pop = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__rx_push = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__ss_n = VL_RAND_RESET_I(4);
    vlSelf->u_shift__DOT__rx_push_data = VL_RAND_RESET_I(32);
    vlSelf->u_shift__DOT__cov_txd = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__cov_rx_buffer = VL_RAND_RESET_I(32);
    vlSelf->u_shift__DOT__tx_shift_reg = VL_RAND_RESET_I(32);
    vlSelf->u_shift__DOT__tx_buffer = VL_RAND_RESET_I(32);
    vlSelf->u_shift__DOT__rx_shift_reg = VL_RAND_RESET_I(32);
    vlSelf->u_shift__DOT__rx_buffer = VL_RAND_RESET_I(32);
    vlSelf->u_shift__DOT__tx_pop_ir = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__rx_push_ir = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__rxd_mst_int = VL_RAND_RESET_I(1);
}
