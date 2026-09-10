// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_m_top.h for the primary calling header

#include "Vspi_m_top__pch.h"
#include "Vspi_m_top_spi_m_top.h"

VL_ATTR_COLD void Vspi_m_top_spi_m_top___eval_initial__TOP__spi_m_top(Vspi_m_top_spi_m_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_m_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vspi_m_top_spi_m_top___eval_initial__TOP__spi_m_top\n"); );
    // Body
    vlSelf->ssp_load_tx_shift = 0U;
    vlSelf->u_shift__DOT__ssp_data_valid_iw = 0U;
}

VL_ATTR_COLD void Vspi_m_top_spi_m_top___stl_sequent__TOP__spi_m_top__0(Vspi_m_top_spi_m_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_m_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vspi_m_top_spi_m_top___stl_sequent__TOP__spi_m_top__0\n"); );
    // Init
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_hee7dff28__0;
    u_mstfsm__DOT____VdfgTmp_hee7dff28__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_h984bb531__0;
    u_mstfsm__DOT____VdfgTmp_h984bb531__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_h35682704__0;
    u_mstfsm__DOT____VdfgTmp_h35682704__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_hcfdbf001__0;
    u_mstfsm__DOT____VdfgTmp_hcfdbf001__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_hd3e036e5__0;
    u_mstfsm__DOT____VdfgTmp_hd3e036e5__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_hd8e3371d__0;
    u_mstfsm__DOT____VdfgTmp_hd8e3371d__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_ha8ae4cd3__0;
    u_mstfsm__DOT____VdfgTmp_ha8ae4cd3__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_h15943f13__0;
    u_mstfsm__DOT____VdfgTmp_h15943f13__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_h7d515d71__0;
    u_mstfsm__DOT____VdfgTmp_h7d515d71__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_h3e02eda8__0;
    u_mstfsm__DOT____VdfgTmp_h3e02eda8__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_h0a2a8df9__0;
    u_mstfsm__DOT____VdfgTmp_h0a2a8df9__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_he701203a__0;
    u_mstfsm__DOT____VdfgTmp_he701203a__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_h1ed429a4__0;
    u_mstfsm__DOT____VdfgTmp_h1ed429a4__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_hc278a5f2__0;
    u_mstfsm__DOT____VdfgTmp_hc278a5f2__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_hf3a2c16c__0;
    u_mstfsm__DOT____VdfgTmp_hf3a2c16c__0 = 0;
    CData/*0:0*/ u_mstfsm__DOT____VdfgTmp_h8e073a41__0;
    u_mstfsm__DOT____VdfgTmp_h8e073a41__0 = 0;
    CData/*0:0*/ __VdfgTmp_h42f24797__0;
    __VdfgTmp_h42f24797__0 = 0;
    // Body
    vlSelf->u_regfile__DOT__fsm_busy = vlSelf->fsm_busy;
    vlSelf->u_regfile__DOT__fsm_sleep = vlSelf->fsm_sleep;
    vlSelf->u_regfile__DOT__fsm_multi_mst = vlSelf->fsm_multi_mst;
    vlSelf->u_regfile__DOT__mst_contention = vlSelf->mst_contention;
    vlSelf->u_regfile__DOT__start_xfer = vlSelf->start_xfer;
    vlSelf->u_regfile__DOT__baud2 = vlSelf->baud2;
    vlSelf->u_regfile__DOT__baudr = vlSelf->cov_baudr;
    vlSelf->u_regfile__DOT__sclk_active = vlSelf->cov_scpol_active;
    vlSelf->u_regfile__DOT__tx_push_data = vlSelf->tx_push_data;
    vlSelf->u_regfile__DOT__tx_push = vlSelf->tx_push;
    vlSelf->u_regfile__DOT__tx_pop = vlSelf->tx_pop;
    vlSelf->u_regfile__DOT__ssienr = vlSelf->ssienr;
    vlSelf->u_regfile__DOT__txftlr = vlSelf->txftlr;
    vlSelf->u_regfile__DOT__rxftlr = vlSelf->rxftlr;
    vlSelf->u_regfile__DOT__cov_txftlr = (1U & ((IData)(vlSelf->txftlr) 
                                                >> 0U));
    vlSelf->u_intctl__DOT__ssi_en = vlSelf->ssienr;
    vlSelf->u_intctl__DOT__mst_contention = vlSelf->mst_contention;
    vlSelf->u_fifo__DOT__tx_push = vlSelf->tx_push;
    vlSelf->u_fifo__DOT__tx_push_data = vlSelf->tx_push_data;
    vlSelf->u_fifo__DOT__tx_pop = vlSelf->tx_pop;
    vlSelf->u_sclkgen__DOT__baudr = vlSelf->cov_baudr;
    vlSelf->u_sclkgen__DOT__sclk_active = vlSelf->cov_scpol_active;
    vlSelf->u_sclkgen__DOT__ssi_en = vlSelf->ssienr;
    vlSelf->u_sclkgen__DOT__sclk_out = vlSelf->sclk_out;
    vlSelf->u_mstfsm__DOT__ssi_en = vlSelf->ssienr;
    vlSelf->u_mstfsm__DOT__start_xfer = vlSelf->start_xfer;
    vlSelf->u_mstfsm__DOT__baud2 = vlSelf->baud2;
    vlSelf->u_mstfsm__DOT__txfthr = vlSelf->txftlr;
    vlSelf->u_mstfsm__DOT__fsm_busy = vlSelf->fsm_busy;
    vlSelf->u_mstfsm__DOT__ssi_oe_n = vlSelf->ssi_oe_n;
    vlSelf->u_mstfsm__DOT__fsm_sleep = vlSelf->fsm_sleep;
    vlSelf->u_mstfsm__DOT__ssp_load_tx_shift = vlSelf->ssp_load_tx_shift;
    vlSelf->u_mstfsm__DOT__fsm_multi_mst = vlSelf->fsm_multi_mst;
    vlSelf->u_shift__DOT__ssi_en = vlSelf->ssienr;
    vlSelf->u_shift__DOT__ss_n = vlSelf->ss_n;
    vlSelf->u_shift__DOT__txd = vlSelf->txd;
    vlSelf->u_shift__DOT__tx_pop = vlSelf->tx_pop;
    vlSelf->u_sclkgen__DOT__r_det = (0x7fffU & (((IData)(vlSelf->cov_baudr) 
                                                 >> 1U) 
                                                - (IData)(1U)));
    vlSelf->u_sclkgen__DOT__f_det = (0xffffU & ((IData)(vlSelf->cov_baudr) 
                                                - (IData)(1U)));
    vlSelf->u_regfile__DOT__slv_sel = (0U != (IData)(vlSelf->u_regfile__DOT__ser_ir));
    vlSelf->u_sclkgen__DOT__sclk_active_sync = vlSelf->cov_scpol_active;
    vlSelf->cov_txd = vlSelf->txd;
    vlSelf->cov_txftlr = (1U & (IData)(vlSelf->txftlr));
    vlSelf->ctrlr0 = vlSelf->u_regfile__DOT__ctrlr0_ir;
    vlSelf->cov_tx_push = vlSelf->tx_push;
    vlSelf->cov_sclk_out = vlSelf->sclk_out;
    vlSelf->cov_fsm_state_id = ((2U == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                 ? 1U : ((4U == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                          ? 2U : ((8U 
                                                   == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                                   ? 3U
                                                   : 
                                                  ((0x10U 
                                                    == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                                     ? 5U
                                                     : 
                                                    ((0x40U 
                                                      == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                                      ? 6U
                                                      : 
                                                     ((0x80U 
                                                       == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                                       ? 7U
                                                       : 
                                                      ((0x100U 
                                                        == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                                        ? 8U
                                                        : 
                                                       ((0x200U 
                                                         == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                                         ? 9U
                                                         : 
                                                        ((0x400U 
                                                          == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                                          ? 0xaU
                                                          : 
                                                         ((0x800U 
                                                           == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                                           ? 0xbU
                                                           : 
                                                          ((0x1000U 
                                                            == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                                            ? 0xcU
                                                            : 
                                                           ((0x2000U 
                                                             == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                                             ? 0xdU
                                                             : 
                                                            ((0x4000U 
                                                              == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                                              ? 0xeU
                                                              : 0U))))))))))))));
    vlSelf->cov_fsm_state = vlSelf->u_mstfsm__DOT__c_state;
    vlSelf->cov_bit_cnt = vlSelf->u_mstfsm__DOT__bit_cnt;
    vlSelf->cov_ctrl_cnt = vlSelf->u_mstfsm__DOT__ctrl_cnt;
    vlSelf->cov_frame_cnt = vlSelf->u_mstfsm__DOT__frame_cnt;
    vlSelf->cov_baud2 = vlSelf->baud2;
    vlSelf->cov_tx_pop = vlSelf->tx_pop;
    vlSelf->cov_spi0_control = vlSelf->u_mstfsm__DOT__spi0_control;
    vlSelf->cov_spi1_control = vlSelf->u_mstfsm__DOT__spi1_control;
    vlSelf->cov_s1 = vlSelf->mst_contention;
    vlSelf->cov_s2 = vlSelf->u_regfile__DOT__dcol;
    vlSelf->cov_hold_ss_cnt = vlSelf->u_mstfsm__DOT__hold_ss_cnt;
    vlSelf->cov_start_xfer = vlSelf->start_xfer;
    vlSelf->cov_fsm_busy = vlSelf->fsm_busy;
    vlSelf->cov_fsm_sleep = vlSelf->fsm_sleep;
    vlSelf->cov_s0 = vlSelf->u_mstfsm__DOT__abort_seen;
    vlSelf->rx_push_data = vlSelf->u_shift__DOT__rx_buffer;
    vlSelf->tx_pop_data = vlSelf->u_fifo__DOT__tx_mem
        [(7U & (IData)(vlSelf->u_fifo__DOT__tx_rd))];
    vlSelf->cov_last_frame = vlSelf->u_mstfsm__DOT__last_frame;
    vlSelf->cov_scpol = (1U & (vlSelf->u_regfile__DOT__ctrlr0_ir 
                               >> 9U));
    vlSelf->cov_slv_oe = (1U & (vlSelf->u_regfile__DOT__ctrlr0_ir 
                                >> 0xcU));
    vlSelf->cov_sclk_re = vlSelf->u_sclkgen__DOT__sclk_re_ir;
    vlSelf->cov_sclk_fe = vlSelf->u_sclkgen__DOT__sclk_fe_ir;
    vlSelf->cov_rx_push = vlSelf->u_shift__DOT__rx_push_reg;
    vlSelf->ssi_busy = vlSelf->u_regfile__DOT__fsm_busy_sr;
    vlSelf->cov_imr = vlSelf->u_regfile__DOT__imr_ir;
    vlSelf->cov_ssi_sleep = vlSelf->u_regfile__DOT__ssi_sleep_ir;
    vlSelf->cov_ser = vlSelf->u_regfile__DOT__ser_ir;
    vlSelf->cov_rx_level = (0xfU & ((IData)(vlSelf->u_fifo__DOT__rx_wr) 
                                    - (IData)(vlSelf->u_fifo__DOT__rx_rd)));
    vlSelf->cov_multi_mst_sync = ((IData)(vlSelf->fsm_multi_mst) 
                                  ^ (IData)(vlSelf->u_regfile__DOT__multi_mst_edge));
    vlSelf->cov_rx_data = vlSelf->u_fifo__DOT__rx_mem
        [(7U & (IData)(vlSelf->u_fifo__DOT__rx_rd))];
    vlSelf->cov_rx_empty = ((IData)(vlSelf->u_fifo__DOT__rx_rd) 
                            == (IData)(vlSelf->u_fifo__DOT__rx_wr));
    vlSelf->cov_rx_full = (((7U & (IData)(vlSelf->u_fifo__DOT__rx_wr)) 
                            == (7U & (IData)(vlSelf->u_fifo__DOT__rx_rd))) 
                           & ((1U & ((IData)(vlSelf->u_fifo__DOT__rx_wr) 
                                     >> 3U)) != (1U 
                                                 & ((IData)(vlSelf->u_fifo__DOT__rx_rd) 
                                                    >> 3U))));
    vlSelf->cov_tx_full = (((7U & (IData)(vlSelf->u_fifo__DOT__tx_wr)) 
                            == (7U & (IData)(vlSelf->u_fifo__DOT__tx_rd))) 
                           & ((1U & ((IData)(vlSelf->u_fifo__DOT__tx_wr) 
                                     >> 3U)) != (1U 
                                                 & ((IData)(vlSelf->u_fifo__DOT__tx_rd) 
                                                    >> 3U))));
    vlSelf->cov_srl_test = (1U & (vlSelf->u_regfile__DOT__ctrlr0_ir 
                                  >> 0xdU));
    vlSelf->u_mstfsm__DOT__rxd_sync = vlSelf->u_mstfsm__DOT__rxd_sync_2;
    vlSelf->cov_risr = (((IData)(vlSelf->u_intctl__DOT__irisr_mst_collision) 
                         << 5U) | (((IData)(vlSelf->u_intctl__DOT__irisr_rx_full) 
                                    << 4U) | (((IData)(vlSelf->u_intctl__DOT__irisr_rx_fifo_overflow) 
                                               << 3U) 
                                              | (((IData)(vlSelf->u_intctl__DOT__irisr_rx_fifo_underflow) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->u_intctl__DOT__irisr_tx_fifo_overflow) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->u_intctl__DOT__irisr_tx_empty))))));
    vlSelf->cov_mwcr = vlSelf->u_regfile__DOT__mwcr_ir;
    vlSelf->cov_ss_tgl_en = (1U & (vlSelf->u_regfile__DOT__ctrlr0_ir 
                                   >> 0xeU));
    vlSelf->cov_cfs = (0xfU & (vlSelf->u_regfile__DOT__ctrlr0_ir 
                               >> 0x10U));
    vlSelf->cov_tx_level = (0xfU & ((IData)(vlSelf->u_fifo__DOT__tx_wr) 
                                    - (IData)(vlSelf->u_fifo__DOT__tx_rd)));
    vlSelf->cov_dfs = (0x1fU & vlSelf->u_regfile__DOT__ctrlr0_ir);
    vlSelf->cov_tx_empty = ((IData)(vlSelf->u_fifo__DOT__tx_rd) 
                            == (IData)(vlSelf->u_fifo__DOT__tx_wr));
    vlSelf->cov_ndf = (0x1ffffU & ((IData)(1U) + (IData)(vlSelf->u_regfile__DOT__ctrlr1)));
    vlSelf->cov_tmod = (3U & (vlSelf->u_regfile__DOT__ctrlr0_ir 
                              >> 0xaU));
    vlSelf->cov_scph = (1U & (vlSelf->u_regfile__DOT__ctrlr0_ir 
                              >> 8U));
    vlSelf->cov_frf = (3U & (vlSelf->u_regfile__DOT__ctrlr0_ir 
                             >> 6U));
    vlSelf->u_regfile__DOT__spec_txftlr_dflt = vlSelf->SPEC_TXFTLR_DFLT;
    vlSelf->u_mstfsm__DOT__rxd = vlSelf->rxd;
    vlSelf->u_shift__DOT__rxd = vlSelf->rxd;
    vlSelf->u_regfile__DOT__resetn = vlSelf->rst_n;
    vlSelf->u_intctl__DOT__resetn = vlSelf->rst_n;
    vlSelf->u_fifo__DOT__rst_n = vlSelf->rst_n;
    vlSelf->u_sclkgen__DOT__rst_n = vlSelf->rst_n;
    vlSelf->u_mstfsm__DOT__rst_n = vlSelf->rst_n;
    vlSelf->u_shift__DOT__rst_n = vlSelf->rst_n;
    vlSelf->u_regfile__DOT__clk = vlSelf->clk;
    vlSelf->u_intctl__DOT__clk = vlSelf->clk;
    vlSelf->u_fifo__DOT__clk = vlSelf->clk;
    vlSelf->u_sclkgen__DOT__clk = vlSelf->clk;
    vlSelf->u_mstfsm__DOT__clk = vlSelf->clk;
    vlSelf->u_shift__DOT__clk = vlSelf->clk;
    vlSelf->u_regfile__DOT__reg_wdata = vlSelf->reg_wdata;
    vlSelf->u_regfile__DOT__reg_re = vlSelf->reg_re;
    vlSelf->u_intctl__DOT__rd_en = vlSelf->reg_re;
    vlSelf->u_regfile__DOT__reg_we = vlSelf->reg_we;
    vlSelf->u_mstfsm__DOT__spec_hold_ss = vlSelf->SPEC_HOLD_SS;
    vlSelf->u_mstfsm__DOT__ss_in_n = vlSelf->ss_in_n;
    vlSelf->cov_ss_in_n = vlSelf->ss_in_n;
    vlSelf->u_regfile__DOT__spec_cfs_min = vlSelf->SPEC_CFS_MIN;
    vlSelf->u_regfile__DOT__reg_addr = vlSelf->reg_addr;
    vlSelf->u_regfile__DOT__ctrlr0_we = ((0U == (IData)(vlSelf->reg_addr)) 
                                         & (IData)(vlSelf->reg_we));
    vlSelf->u_regfile__DOT__ctrlr1_we = ((1U == (IData)(vlSelf->reg_addr)) 
                                         & (IData)(vlSelf->reg_we));
    vlSelf->u_regfile__DOT__mwcr_we = ((3U == (IData)(vlSelf->reg_addr)) 
                                       & (IData)(vlSelf->reg_we));
    vlSelf->u_regfile__DOT__ser_we = ((4U == (IData)(vlSelf->reg_addr)) 
                                      & (IData)(vlSelf->reg_we));
    vlSelf->u_regfile__DOT__baudr_we = ((5U == (IData)(vlSelf->reg_addr)) 
                                        & (IData)(vlSelf->reg_we));
    vlSelf->u_regfile__DOT__txftlr_we = ((6U == (IData)(vlSelf->reg_addr)) 
                                         & (IData)(vlSelf->reg_we));
    vlSelf->u_regfile__DOT__rxftlr_we = ((7U == (IData)(vlSelf->reg_addr)) 
                                         & (IData)(vlSelf->reg_we));
    vlSelf->rdec_icr_en = (0x12U == (IData)(vlSelf->reg_addr));
    vlSelf->rdec_txoicr_en = (0xeU == (IData)(vlSelf->reg_addr));
    vlSelf->rdec_rxoicr_en = (0xfU == (IData)(vlSelf->reg_addr));
    vlSelf->rdec_rxuicr_en = (0x10U == (IData)(vlSelf->reg_addr));
    vlSelf->rdec_msticr_en = (0x11U == (IData)(vlSelf->reg_addr));
    vlSelf->u_regfile__DOT__ssienr_we = ((2U == (IData)(vlSelf->reg_addr)) 
                                         & (IData)(vlSelf->reg_we));
    vlSelf->u_regfile__DOT__imr_we = ((0xbU == (IData)(vlSelf->reg_addr)) 
                                      & (IData)(vlSelf->reg_we));
    vlSelf->u_regfile__DOT__dr_en_w = ((0x18U <= (IData)(vlSelf->reg_addr)) 
                                       & (0x3bU >= (IData)(vlSelf->reg_addr)));
    vlSelf->u_regfile__DOT__ctrlr0 = vlSelf->ctrlr0;
    vlSelf->u_regfile__DOT__cov_tx_push = vlSelf->cov_tx_push;
    vlSelf->u_mstfsm__DOT__cov_fsm_state_id = vlSelf->cov_fsm_state_id;
    vlSelf->u_mstfsm__DOT__cov_fsm_state = vlSelf->cov_fsm_state;
    vlSelf->u_mstfsm__DOT__cov_bit_cnt = vlSelf->cov_bit_cnt;
    vlSelf->u_mstfsm__DOT__cov_ctrl_cnt = vlSelf->cov_ctrl_cnt;
    vlSelf->u_mstfsm__DOT__cov_frame_cnt = vlSelf->cov_frame_cnt;
    vlSelf->u_regfile__DOT__cov_baud2 = vlSelf->cov_baud2;
    vlSelf->u_regfile__DOT__cov_tx_pop = vlSelf->cov_tx_pop;
    vlSelf->u_mstfsm__DOT__cov_spi0_control = vlSelf->cov_spi0_control;
    vlSelf->u_mstfsm__DOT__cov_spi1_control = vlSelf->cov_spi1_control;
    vlSelf->u_regfile__DOT__cov_s1 = vlSelf->cov_s1;
    vlSelf->u_regfile__DOT__cov_s2 = vlSelf->cov_s2;
    vlSelf->u_mstfsm__DOT__cov_hold_ss_cnt = vlSelf->cov_hold_ss_cnt;
    vlSelf->u_regfile__DOT__cov_start_xfer = vlSelf->cov_start_xfer;
    vlSelf->u_mstfsm__DOT__cov_fsm_busy = vlSelf->cov_fsm_busy;
    vlSelf->u_mstfsm__DOT__cov_fsm_sleep = vlSelf->cov_fsm_sleep;
    vlSelf->u_mstfsm__DOT__cov_s0 = vlSelf->cov_s0;
    vlSelf->u_fifo__DOT__rx_push_data = vlSelf->rx_push_data;
    vlSelf->u_shift__DOT__rx_push_data = vlSelf->rx_push_data;
    vlSelf->u_fifo__DOT__tx_pop_data = vlSelf->tx_pop_data;
    vlSelf->u_shift__DOT__tx_pop_data = vlSelf->tx_pop_data;
    vlSelf->u_mstfsm__DOT__cov_last_frame = vlSelf->cov_last_frame;
    vlSelf->u_mstfsm__DOT__early_last_frame = vlSelf->cov_last_frame;
    vlSelf->u_regfile__DOT__cov_scpol = vlSelf->cov_scpol;
    vlSelf->scpol = vlSelf->cov_scpol;
    vlSelf->u_regfile__DOT__cov_slv_oe = vlSelf->cov_slv_oe;
    vlSelf->slv_oe = vlSelf->cov_slv_oe;
    vlSelf->u_sclkgen__DOT__sclk_re = vlSelf->cov_sclk_re;
    vlSelf->u_mstfsm__DOT__sclk_re = vlSelf->cov_sclk_re;
    vlSelf->sclk_re = vlSelf->cov_sclk_re;
    vlSelf->u_sclkgen__DOT__sclk_fe = vlSelf->cov_sclk_fe;
    vlSelf->u_mstfsm__DOT__sclk_fe = vlSelf->cov_sclk_fe;
    vlSelf->sclk_fe = vlSelf->cov_sclk_fe;
    vlSelf->u_fifo__DOT__rx_push = vlSelf->cov_rx_push;
    vlSelf->u_shift__DOT__rx_push = vlSelf->cov_rx_push;
    vlSelf->rx_push = vlSelf->cov_rx_push;
    vlSelf->u_regfile__DOT__cov_ssi_busy = vlSelf->ssi_busy;
    vlSelf->cov_ssi_busy = vlSelf->ssi_busy;
    vlSelf->u_regfile__DOT__imr = vlSelf->cov_imr;
    vlSelf->u_intctl__DOT__imr = vlSelf->cov_imr;
    vlSelf->imr = vlSelf->cov_imr;
    vlSelf->u_regfile__DOT__ssi_sleep = vlSelf->cov_ssi_sleep;
    vlSelf->u_regfile__DOT__cov_ssi_sleep = vlSelf->cov_ssi_sleep;
    vlSelf->ssi_sleep = vlSelf->cov_ssi_sleep;
    vlSelf->u_regfile__DOT__ser = vlSelf->cov_ser;
    vlSelf->u_regfile__DOT__cov_ser = vlSelf->cov_ser;
    vlSelf->u_shift__DOT__ser = vlSelf->cov_ser;
    vlSelf->ser = vlSelf->cov_ser;
    vlSelf->u_regfile__DOT__rx_fifo_wc = vlSelf->cov_rx_level;
    vlSelf->u_fifo__DOT__rx_level = vlSelf->cov_rx_level;
    vlSelf->rx_level = vlSelf->cov_rx_level;
    vlSelf->rx_wc = vlSelf->cov_rx_level;
    vlSelf->u_regfile__DOT__multi_mst_sync = vlSelf->cov_multi_mst_sync;
    vlSelf->u_regfile__DOT__cov_multi_mst_sync = vlSelf->cov_multi_mst_sync;
    vlSelf->u_intctl__DOT__multi_mst_sync = vlSelf->cov_multi_mst_sync;
    vlSelf->multi_mst_sync = vlSelf->cov_multi_mst_sync;
    vlSelf->u_regfile__DOT__rx_pop_data = vlSelf->cov_rx_data;
    vlSelf->u_fifo__DOT__rx_pop_data = vlSelf->cov_rx_data;
    vlSelf->rx_pop_data = vlSelf->cov_rx_data;
    vlSelf->u_regfile__DOT__rx_empty = vlSelf->cov_rx_empty;
    vlSelf->u_fifo__DOT__rx_empty = vlSelf->cov_rx_empty;
    vlSelf->rx_empty = vlSelf->cov_rx_empty;
    vlSelf->u_fifo__DOT__rx_empty_w = vlSelf->cov_rx_empty;
    vlSelf->u_regfile__DOT__rx_full = vlSelf->cov_rx_full;
    vlSelf->u_intctl__DOT__rx_full = vlSelf->cov_rx_full;
    vlSelf->u_fifo__DOT__rx_full = vlSelf->cov_rx_full;
    vlSelf->rx_full = vlSelf->cov_rx_full;
    vlSelf->u_fifo__DOT__rx_full_w = vlSelf->cov_rx_full;
    vlSelf->u_regfile__DOT__tx_full = vlSelf->cov_tx_full;
    vlSelf->u_fifo__DOT__tx_full = vlSelf->cov_tx_full;
    vlSelf->tx_full = vlSelf->cov_tx_full;
    vlSelf->u_fifo__DOT__tx_full_w = vlSelf->cov_tx_full;
    if (vlSelf->cov_srl_test) {
        vlSelf->u_regfile__DOT__cov_srl_test = 1U;
        vlSelf->u_mstfsm__DOT__srl_test = 1U;
        vlSelf->u_shift__DOT__srl_test = 1U;
        vlSelf->srl_test = 1U;
        vlSelf->u_shift__DOT__rxd_mst_int = vlSelf->txd;
    } else {
        vlSelf->u_regfile__DOT__cov_srl_test = 0U;
        vlSelf->u_mstfsm__DOT__srl_test = 0U;
        vlSelf->u_shift__DOT__srl_test = 0U;
        vlSelf->srl_test = 0U;
        vlSelf->u_shift__DOT__rxd_mst_int = vlSelf->rxd;
    }
    vlSelf->u_regfile__DOT__risr = vlSelf->cov_risr;
    vlSelf->u_intctl__DOT__risr = vlSelf->cov_risr;
    vlSelf->risr = vlSelf->cov_risr;
    vlSelf->u_intctl__DOT__irisr = vlSelf->cov_risr;
    vlSelf->cov_isr = ((IData)(vlSelf->u_regfile__DOT__imr_ir) 
                       & (IData)(vlSelf->cov_risr));
    vlSelf->u_regfile__DOT__mwcr = vlSelf->cov_mwcr;
    vlSelf->u_mstfsm__DOT__mwcr = vlSelf->cov_mwcr;
    vlSelf->mwcr = vlSelf->cov_mwcr;
    vlSelf->u_regfile__DOT__cov_ss_tgl_en = vlSelf->cov_ss_tgl_en;
    vlSelf->u_mstfsm__DOT__ss_tgl_en = vlSelf->cov_ss_tgl_en;
    vlSelf->ss_tgl_en = vlSelf->cov_ss_tgl_en;
    vlSelf->u_regfile__DOT__cov_cfs = vlSelf->cov_cfs;
    vlSelf->cov_eff_cfs = (((IData)(vlSelf->cov_cfs) 
                            < (IData)(vlSelf->SPEC_CFS_MIN))
                            ? (IData)(vlSelf->SPEC_CFS_MIN)
                            : (IData)(vlSelf->cov_cfs));
    vlSelf->u_regfile__DOT__tx_fifo_wc = vlSelf->cov_tx_level;
    vlSelf->u_fifo__DOT__tx_level = vlSelf->cov_tx_level;
    vlSelf->u_mstfsm__DOT__tx_fifo_level = vlSelf->cov_tx_level;
    vlSelf->tx_level = vlSelf->cov_tx_level;
    vlSelf->tx_wc = vlSelf->cov_tx_level;
    vlSelf->u_regfile__DOT__tx_empty_early = ((~ (IData)(vlSelf->tx_push)) 
                                              & ((IData)(vlSelf->tx_pop) 
                                                 & (1U 
                                                    == (IData)(vlSelf->cov_tx_level))));
    __VdfgTmp_h42f24797__0 = ((IData)(vlSelf->cov_tx_level) 
                              > (7U & (IData)(vlSelf->txftlr)));
    vlSelf->u_regfile__DOT__cov_dfs = vlSelf->cov_dfs;
    vlSelf->u_regfile__DOT__cov_eff_dfs = vlSelf->cov_dfs;
    vlSelf->u_mstfsm__DOT__dfs = vlSelf->cov_dfs;
    vlSelf->u_shift__DOT__dfs = vlSelf->cov_dfs;
    vlSelf->dfs = vlSelf->cov_dfs;
    vlSelf->cov_eff_dfs = vlSelf->cov_dfs;
    vlSelf->u_mstfsm__DOT__sspf_done = ((IData)(vlSelf->u_mstfsm__DOT__bit_cnt) 
                                        == (0x3fU & 
                                            ((IData)(vlSelf->cov_dfs) 
                                             - (IData)(1U))));
    vlSelf->u_regfile__DOT__tx_empty = vlSelf->cov_tx_empty;
    vlSelf->u_intctl__DOT__tx_empty = vlSelf->cov_tx_empty;
    vlSelf->u_fifo__DOT__tx_empty = vlSelf->cov_tx_empty;
    vlSelf->u_mstfsm__DOT__tx_empty = vlSelf->cov_tx_empty;
    vlSelf->tx_empty = vlSelf->cov_tx_empty;
    vlSelf->u_fifo__DOT__tx_empty_w = vlSelf->cov_tx_empty;
    vlSelf->u_regfile__DOT__ndf = vlSelf->cov_ndf;
    vlSelf->u_regfile__DOT__cov_ndf = vlSelf->cov_ndf;
    vlSelf->u_mstfsm__DOT__ndf = vlSelf->cov_ndf;
    vlSelf->ndf = vlSelf->cov_ndf;
    vlSelf->u_regfile__DOT__cov_tmod = vlSelf->cov_tmod;
    vlSelf->u_mstfsm__DOT__tmod = vlSelf->cov_tmod;
    vlSelf->tmod = vlSelf->cov_tmod;
    vlSelf->u_regfile__DOT__cov_scph = vlSelf->cov_scph;
    vlSelf->u_mstfsm__DOT__scph = vlSelf->cov_scph;
    vlSelf->scph = vlSelf->cov_scph;
    u_mstfsm__DOT____VdfgTmp_hd3e036e5__0 = ((~ (IData)(vlSelf->u_mstfsm__DOT__spi1_control)) 
                                             & (IData)(vlSelf->cov_scph));
    u_mstfsm__DOT____VdfgTmp_hd8e3371d__0 = (1U & (
                                                   (~ (IData)(vlSelf->cov_scph)) 
                                                   & (~ (IData)(vlSelf->u_mstfsm__DOT__spi0_control))));
    vlSelf->u_regfile__DOT__cov_frf = vlSelf->cov_frf;
    vlSelf->u_mstfsm__DOT__frf = vlSelf->cov_frf;
    vlSelf->u_shift__DOT__frf = vlSelf->cov_frf;
    vlSelf->frf = vlSelf->cov_frf;
    vlSelf->u_mstfsm__DOT__spi1 = ((0U == (IData)(vlSelf->cov_frf)) 
                                   & (IData)(vlSelf->cov_scph));
    vlSelf->u_mstfsm__DOT__ssp = (1U == (IData)(vlSelf->cov_frf));
    vlSelf->u_mstfsm__DOT__spi0 = ((~ (IData)(vlSelf->cov_scph)) 
                                   & (0U == (IData)(vlSelf->cov_frf)));
    vlSelf->u_mstfsm__DOT__mwire = (2U == (IData)(vlSelf->cov_frf));
    vlSelf->u_regfile__DOT__rdec_icr_en = vlSelf->rdec_icr_en;
    vlSelf->u_intctl__DOT__rdec_icr_en = vlSelf->rdec_icr_en;
    vlSelf->u_regfile__DOT__rdec_txoicr_en = vlSelf->rdec_txoicr_en;
    vlSelf->u_intctl__DOT__rdec_txoicr_en = vlSelf->rdec_txoicr_en;
    vlSelf->u_regfile__DOT__rdec_rxoicr_en = vlSelf->rdec_rxoicr_en;
    vlSelf->u_intctl__DOT__rdec_rxoicr_en = vlSelf->rdec_rxoicr_en;
    vlSelf->u_regfile__DOT__rdec_rxuicr_en = vlSelf->rdec_rxuicr_en;
    vlSelf->u_intctl__DOT__rdec_rxuicr_en = vlSelf->rdec_rxuicr_en;
    vlSelf->u_regfile__DOT__rdec_msticr_en = vlSelf->rdec_msticr_en;
    vlSelf->u_intctl__DOT__rdec_msticr_en = vlSelf->rdec_msticr_en;
    vlSelf->fifo_rst_n = (((~ (IData)(vlSelf->u_regfile__DOT__ssienr_we)) 
                           & (IData)(vlSelf->ssienr)) 
                          | (vlSelf->reg_wdata & ((IData)(vlSelf->ssienr) 
                                                  & (IData)(vlSelf->u_regfile__DOT__ssienr_we))));
    vlSelf->set0_imr5 = ((~ (vlSelf->reg_wdata >> 5U)) 
                         & (IData)(vlSelf->u_regfile__DOT__imr_we));
    vlSelf->set1_imr5 = ((IData)(vlSelf->u_regfile__DOT__imr_we) 
                         & (vlSelf->reg_wdata >> 5U));
    vlSelf->u_regfile__DOT__rdec_dr_en = vlSelf->u_regfile__DOT__dr_en_w;
    vlSelf->rx_pop = ((IData)(vlSelf->u_regfile__DOT__dr_en_w) 
                      & ((IData)(vlSelf->reg_re) & (IData)(vlSelf->ssienr)));
    vlSelf->u_regfile__DOT__dr_we = ((IData)(vlSelf->u_regfile__DOT__dr_en_w) 
                                     & (IData)(vlSelf->reg_we));
    vlSelf->u_regfile__DOT__isr = vlSelf->cov_isr;
    vlSelf->u_intctl__DOT__isr = vlSelf->cov_isr;
    vlSelf->isr = vlSelf->cov_isr;
    vlSelf->ssi_txo_intr = (1U & (~ ((IData)(vlSelf->cov_isr) 
                                     >> 1U)));
    vlSelf->ssi_rxu_intr = (1U & (~ ((IData)(vlSelf->cov_isr) 
                                     >> 2U)));
    vlSelf->ssi_rxf_intr = (1U & (~ ((IData)(vlSelf->cov_isr) 
                                     >> 4U)));
    vlSelf->ssi_rxo_intr = (1U & (~ ((IData)(vlSelf->cov_isr) 
                                     >> 3U)));
    vlSelf->ssi_txe_intr = (1U & (~ (IData)(vlSelf->cov_isr)));
    vlSelf->ssi_mst_intr = (1U & (~ ((IData)(vlSelf->cov_isr) 
                                     >> 5U)));
    vlSelf->reg_rdata = 0U;
    vlSelf->reg_rdata = ((0x20U & (IData)(vlSelf->reg_addr))
                          ? ((IData)(vlSelf->u_regfile__DOT__dr_en_w)
                              ? vlSelf->cov_rx_data
                              : 0U) : ((0x10U & (IData)(vlSelf->reg_addr))
                                        ? ((8U & (IData)(vlSelf->reg_addr))
                                            ? ((IData)(vlSelf->u_regfile__DOT__dr_en_w)
                                                ? vlSelf->cov_rx_data
                                                : 0U)
                                            : ((4U 
                                                & (IData)(vlSelf->reg_addr))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->reg_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->reg_addr))
                                                     ? 0x1020101U
                                                     : 0x53315f31U)
                                                    : 
                                                   ((IData)(vlSelf->u_regfile__DOT__dr_en_w)
                                                     ? vlSelf->cov_rx_data
                                                     : 0U))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->reg_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->reg_addr))
                                                     ? 
                                                    ((IData)(vlSelf->u_regfile__DOT__dr_en_w)
                                                      ? vlSelf->cov_rx_data
                                                      : 0U)
                                                     : 
                                                    ((0xfffffffeU 
                                                      & vlSelf->reg_rdata) 
                                                     | (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3eU 
                                                                 & (IData)(vlSelf->cov_isr))))))
                                                    : 
                                                   ((0xfffffffeU 
                                                     & vlSelf->reg_rdata) 
                                                    | (1U 
                                                       & ((1U 
                                                           & (IData)(vlSelf->reg_addr))
                                                           ? 
                                                          ((IData)(vlSelf->cov_isr) 
                                                           >> 5U)
                                                           : 
                                                          ((IData)(vlSelf->cov_isr) 
                                                           >> 2U)))))))
                                        : ((8U & (IData)(vlSelf->reg_addr))
                                            ? ((4U 
                                                & (IData)(vlSelf->reg_addr))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->reg_addr))
                                                    ? 
                                                   ((0xfffffffeU 
                                                     & vlSelf->reg_rdata) 
                                                    | (1U 
                                                       & ((1U 
                                                           & (IData)(vlSelf->reg_addr))
                                                           ? 
                                                          ((IData)(vlSelf->cov_isr) 
                                                           >> 3U)
                                                           : 
                                                          ((IData)(vlSelf->cov_isr) 
                                                           >> 1U))))
                                                    : 
                                                   ((0xffffffc0U 
                                                     & vlSelf->reg_rdata) 
                                                    | ((1U 
                                                        & (IData)(vlSelf->reg_addr))
                                                        ? (IData)(vlSelf->cov_risr)
                                                        : (IData)(vlSelf->cov_isr))))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->reg_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->reg_addr))
                                                     ? 
                                                    ((0xffffffc0U 
                                                      & vlSelf->reg_rdata) 
                                                     | (IData)(vlSelf->u_regfile__DOT__imr_ir))
                                                     : 
                                                    (((IData)(vlSelf->u_regfile__DOT__dcol) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->cov_rx_full) 
                                                         << 4U) 
                                                        | ((8U 
                                                            & ((~ (IData)(vlSelf->cov_rx_empty)) 
                                                               << 3U)) 
                                                           | (((IData)(vlSelf->cov_tx_empty) 
                                                               << 2U) 
                                                              | ((2U 
                                                                  & ((~ (IData)(vlSelf->cov_tx_full)) 
                                                                     << 1U)) 
                                                                 | (IData)(vlSelf->fsm_busy)))))))
                                                    : 
                                                   ((0xfffffff0U 
                                                     & vlSelf->reg_rdata) 
                                                    | ((1U 
                                                        & (IData)(vlSelf->reg_addr))
                                                        ? (IData)(vlSelf->u_regfile__DOT__rxflr)
                                                        : (IData)(vlSelf->u_regfile__DOT__txflr)))))
                                            : ((4U 
                                                & (IData)(vlSelf->reg_addr))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->reg_addr))
                                                    ? 
                                                   ((0xfffffff0U 
                                                     & vlSelf->reg_rdata) 
                                                    | ((1U 
                                                        & (IData)(vlSelf->reg_addr))
                                                        ? (IData)(vlSelf->rxftlr)
                                                        : (IData)(vlSelf->txftlr)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->reg_addr))
                                                     ? 
                                                    ((0xffff0000U 
                                                      & vlSelf->reg_rdata) 
                                                     | (IData)(vlSelf->cov_baudr))
                                                     : 
                                                    ((0xfffffff0U 
                                                      & vlSelf->reg_rdata) 
                                                     | (IData)(vlSelf->u_regfile__DOT__ser_ir))))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->reg_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->reg_addr))
                                                     ? 
                                                    ((0xfffffff8U 
                                                      & vlSelf->reg_rdata) 
                                                     | (IData)(vlSelf->u_regfile__DOT__mwcr_ir))
                                                     : 
                                                    ((0xfffffffeU 
                                                      & vlSelf->reg_rdata) 
                                                     | (IData)(vlSelf->ssienr)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->reg_addr))
                                                     ? 
                                                    ((0xffff0000U 
                                                      & vlSelf->reg_rdata) 
                                                     | (IData)(vlSelf->u_regfile__DOT__ctrlr1))
                                                     : 
                                                    (0xfffdfU 
                                                     & vlSelf->u_regfile__DOT__ctrlr0_ir)))))));
    vlSelf->u_regfile__DOT__cov_eff_cfs = vlSelf->cov_eff_cfs;
    vlSelf->u_mstfsm__DOT__cfs = vlSelf->cov_eff_cfs;
    vlSelf->eff_cfs = vlSelf->cov_eff_cfs;
    vlSelf->u_regfile__DOT__tx_fifo_ready = (1U & (
                                                   (2U 
                                                    == (IData)(vlSelf->cov_tmod))
                                                    ? 
                                                   (~ (IData)(vlSelf->cov_tx_empty))
                                                    : (IData)(__VdfgTmp_h42f24797__0)));
    vlSelf->u_mstfsm__DOT__tx_fifo_filled = ((2U == (IData)(vlSelf->cov_tmod)) 
                                             | (IData)(__VdfgTmp_h42f24797__0));
    vlSelf->u_mstfsm__DOT__wrong_pol = (1U & (((IData)(vlSelf->u_mstfsm__DOT__ssp) 
                                               & (IData)(vlSelf->ss_in_n)) 
                                              | ((~ (IData)(vlSelf->u_mstfsm__DOT__ssp)) 
                                                 & (~ (IData)(vlSelf->ss_in_n)))));
    vlSelf->cov_ss_active = ((IData)(vlSelf->u_mstfsm__DOT__ssp)
                              ? (0U != (IData)(vlSelf->ss_n))
                              : (0U != (0xfU & (~ (IData)(vlSelf->ss_n)))));
    vlSelf->u_mstfsm__DOT____VdfgTmp_hf2a781db__0 = 
        ((IData)(vlSelf->u_mstfsm__DOT__spi0) | (IData)(vlSelf->u_mstfsm__DOT__spi1));
    u_mstfsm__DOT____VdfgTmp_h7d515d71__0 = ((IData)(vlSelf->u_mstfsm__DOT__mwire) 
                                             & (IData)(vlSelf->cov_srl_test));
    vlSelf->cov_c_done = (((IData)(vlSelf->u_mstfsm__DOT__mwire) 
                           & ((IData)(vlSelf->cov_eff_cfs) 
                              == (IData)(vlSelf->u_mstfsm__DOT__ctrl_cnt))) 
                          | (IData)(vlSelf->u_mstfsm__DOT__c_done_ir));
    vlSelf->cov_f_done = (((IData)(vlSelf->u_mstfsm__DOT__mwire) 
                           & ((IData)(vlSelf->baud2) 
                              | (3U == (3U & (IData)(vlSelf->u_regfile__DOT__mwcr_ir)))))
                           ? ((IData)(vlSelf->u_mstfsm__DOT__bit_cnt) 
                              == (0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->cov_dfs))))
                           : (((IData)(vlSelf->u_mstfsm__DOT__mwire) 
                               & (2U == (3U & (IData)(vlSelf->u_regfile__DOT__mwcr_ir))))
                               ? (IData)(vlSelf->u_mstfsm__DOT__f_done_ir)
                               : ((IData)(vlSelf->u_mstfsm__DOT__bit_cnt) 
                                  == (IData)(vlSelf->cov_dfs))));
    vlSelf->u_mstfsm__DOT____VdfgTmp_h53254bb6__0 = 
        ((IData)(vlSelf->u_mstfsm__DOT__ssp) | (IData)(vlSelf->u_mstfsm__DOT__mwire));
    vlSelf->cov_x_done = ((((3U == (IData)(vlSelf->cov_tmod)) 
                            & (0U == (IData)(vlSelf->cov_frf))) 
                           | (((~ (IData)(vlSelf->u_mstfsm__DOT__mwire)) 
                               & (2U == (IData)(vlSelf->cov_tmod))) 
                              | ((IData)(vlSelf->u_mstfsm__DOT__mwire) 
                                 & (IData)((1U == (3U 
                                                   & (IData)(vlSelf->u_regfile__DOT__mwcr_ir)))))))
                           ? (vlSelf->u_mstfsm__DOT__frame_cnt 
                              == vlSelf->cov_ndf) : (IData)(vlSelf->u_mstfsm__DOT__last_frame));
    u_mstfsm__DOT____VdfgTmp_h1ed429a4__0 = ((IData)(vlSelf->u_mstfsm__DOT__spi0) 
                                             | (IData)(vlSelf->u_mstfsm__DOT__mwire));
    vlSelf->u_regfile__DOT__fifo_rst_n = vlSelf->fifo_rst_n;
    vlSelf->u_fifo__DOT__fifo_rst_n = vlSelf->fifo_rst_n;
    vlSelf->u_regfile__DOT__set0_imr5 = vlSelf->set0_imr5;
    vlSelf->u_intctl__DOT__set0_imr5 = vlSelf->set0_imr5;
    vlSelf->u_regfile__DOT__set1_imr5 = vlSelf->set1_imr5;
    vlSelf->u_intctl__DOT__set1_imr5 = vlSelf->set1_imr5;
    vlSelf->u_regfile__DOT__rx_pop = vlSelf->rx_pop;
    vlSelf->u_fifo__DOT__rx_pop = vlSelf->rx_pop;
    vlSelf->cov_rx_underflow = ((IData)(vlSelf->rx_pop) 
                                & (IData)(vlSelf->cov_rx_empty));
    vlSelf->cov_rx_overflow = ((IData)(vlSelf->u_shift__DOT__rx_push_reg) 
                               & ((~ (IData)(vlSelf->rx_pop)) 
                                  & (IData)(vlSelf->cov_rx_full)));
    vlSelf->u_regfile__DOT__tx_push_c = ((IData)(vlSelf->u_regfile__DOT__dr_we) 
                                         & (IData)(vlSelf->ssienr));
    vlSelf->u_intctl__DOT__ssi_txo_intr = vlSelf->ssi_txo_intr;
    vlSelf->u_intctl__DOT__ssi_rxu_intr = vlSelf->ssi_rxu_intr;
    vlSelf->u_intctl__DOT__ssi_rxf_intr = vlSelf->ssi_rxf_intr;
    vlSelf->u_intctl__DOT__ssi_rxo_intr = vlSelf->ssi_rxo_intr;
    vlSelf->u_intctl__DOT__ssi_txe_intr = vlSelf->ssi_txe_intr;
    vlSelf->cov_ssi_txe_intr = vlSelf->ssi_txe_intr;
    vlSelf->u_intctl__DOT__ssi_mst_intr = vlSelf->ssi_mst_intr;
    vlSelf->cov_ssi_mst_intr = vlSelf->ssi_mst_intr;
    vlSelf->u_regfile__DOT__reg_rdata = vlSelf->reg_rdata;
    vlSelf->u_mstfsm__DOT__cov_c_done = vlSelf->cov_c_done;
    vlSelf->u_mstfsm__DOT__c_done = vlSelf->cov_c_done;
    vlSelf->u_mstfsm__DOT__cov_f_done = vlSelf->cov_f_done;
    vlSelf->u_mstfsm__DOT__f_done = vlSelf->cov_f_done;
    vlSelf->u_mstfsm__DOT__cov_x_done = vlSelf->cov_x_done;
    vlSelf->u_mstfsm__DOT__x_done = vlSelf->cov_x_done;
    if (u_mstfsm__DOT____VdfgTmp_h1ed429a4__0) {
        vlSelf->u_mstfsm__DOT__sclk_fe_int = vlSelf->u_sclkgen__DOT__sclk_re_ir;
        vlSelf->u_mstfsm__DOT__sclk_re_int = vlSelf->u_sclkgen__DOT__sclk_fe_ir;
    } else {
        vlSelf->u_mstfsm__DOT__sclk_fe_int = vlSelf->u_sclkgen__DOT__sclk_fe_ir;
        vlSelf->u_mstfsm__DOT__sclk_re_int = vlSelf->u_sclkgen__DOT__sclk_re_ir;
    }
    vlSelf->u_intctl__DOT__rx_underflow = vlSelf->cov_rx_underflow;
    vlSelf->u_fifo__DOT__rx_underflow = vlSelf->cov_rx_underflow;
    vlSelf->u_intctl__DOT__rx_overflow = vlSelf->cov_rx_overflow;
    vlSelf->u_fifo__DOT__rx_overflow = vlSelf->cov_rx_overflow;
    vlSelf->cov_tx_overflow = ((IData)(vlSelf->u_regfile__DOT__dr_we) 
                               & ((IData)(vlSelf->cov_tx_full) 
                                  | ((((IData)(vlSelf->u_regfile__DOT__tx_push_c) 
                                       | (IData)(vlSelf->tx_push)) 
                                      & (7U == (7U 
                                                & (IData)(vlSelf->cov_tx_level)))) 
                                     | ((IData)(vlSelf->u_regfile__DOT__tx_push_c) 
                                        & ((IData)(vlSelf->tx_push) 
                                           & (6U == 
                                              (7U & (IData)(vlSelf->cov_tx_level))))))));
    vlSelf->cov_s3 = ((0x2000U == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                      & ((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                         & ((IData)(vlSelf->cov_tx_empty) 
                            | (IData)(vlSelf->u_regfile__DOT__mwcr_ir))));
    u_mstfsm__DOT____VdfgTmp_he701203a__0 = ((0x40U 
                                              == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                             & (IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int));
    u_mstfsm__DOT____VdfgTmp_h0a2a8df9__0 = ((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                                             | (IData)(vlSelf->baud2));
    vlSelf->u_mstfsm__DOT__inc_frame_cnt = ((0x10U 
                                             == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                            & (((IData)(vlSelf->u_mstfsm__DOT__bit_cnt) 
                                                == 
                                                (0x3fU 
                                                 & ((IData)(vlSelf->cov_dfs) 
                                                    - (IData)(2U)))) 
                                               & (((3U 
                                                    != (IData)(vlSelf->cov_tmod)) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->cov_tmod)) 
                                                      & ((IData)(u_mstfsm__DOT____VdfgTmp_hd8e3371d__0) 
                                                         | (IData)(u_mstfsm__DOT____VdfgTmp_hd3e036e5__0)))) 
                                                  & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int))));
    vlSelf->u_mstfsm__DOT__inc_ctrl_cnt = ((8U == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                           & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int));
    u_mstfsm__DOT____VdfgTmp_h3e02eda8__0 = ((0x10U 
                                              == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                             & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int));
    u_mstfsm__DOT____VdfgTmp_hf3a2c16c__0 = ((0x80U 
                                              == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                             & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int));
    u_mstfsm__DOT____VdfgTmp_hc278a5f2__0 = ((0x40U 
                                              == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                             & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int));
    u_mstfsm__DOT____VdfgTmp_h15943f13__0 = ((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                             | (IData)(vlSelf->baud2));
    u_mstfsm__DOT____VdfgTmp_ha8ae4cd3__0 = ((0x20U 
                                              == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                             & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int));
    vlSelf->u_mstfsm__DOT__n_state = (((((((((1U == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                             | (2U 
                                                == (IData)(vlSelf->u_mstfsm__DOT__c_state))) 
                                            | (4U == (IData)(vlSelf->u_mstfsm__DOT__c_state))) 
                                           | (0x1000U 
                                              == (IData)(vlSelf->u_mstfsm__DOT__c_state))) 
                                          | (8U == (IData)(vlSelf->u_mstfsm__DOT__c_state))) 
                                         | (0x10U == (IData)(vlSelf->u_mstfsm__DOT__c_state))) 
                                        | (0x20U == (IData)(vlSelf->u_mstfsm__DOT__c_state))) 
                                       | (0x40U == (IData)(vlSelf->u_mstfsm__DOT__c_state)))
                                       ? ((1U == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                           ? ((((((IData)(vlSelf->start_xfer) 
                                                  & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int)) 
                                                 & (IData)(vlSelf->u_mstfsm__DOT__tx_fifo_filled)) 
                                                & (~ (IData)(vlSelf->cov_tx_empty))) 
                                               & (((IData)(vlSelf->u_mstfsm__DOT__ssp) 
                                                   & (~ (IData)(vlSelf->ss_in_n))) 
                                                  | ((~ (IData)(vlSelf->u_mstfsm__DOT__ssp)) 
                                                     & (IData)(vlSelf->ss_in_n))))
                                               ? 2U
                                               : 1U)
                                           : ((2U == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                               ? (((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                                                   | (IData)(vlSelf->baud2))
                                                   ? 4U
                                                   : 2U)
                                               : ((4U 
                                                   == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                                   ? 
                                                  (((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                    | (IData)(vlSelf->baud2))
                                                    ? 
                                                   ((IData)(vlSelf->u_mstfsm__DOT__mwire)
                                                     ? 8U
                                                     : 0x10U)
                                                    : 4U)
                                                   : 
                                                  ((0x1000U 
                                                    == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                                    ? 
                                                   (((IData)(vlSelf->baud2) 
                                                     & (IData)(vlSelf->cov_tx_empty))
                                                     ? 0x80U
                                                     : 
                                                    ((((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                       | (IData)(vlSelf->baud2)) 
                                                      & ((~ (IData)(vlSelf->cov_f_done)) 
                                                         | (IData)(vlSelf->cov_mwcr)))
                                                      ? 0x10U
                                                      : 
                                                     ((((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                        | (IData)(vlSelf->baud2)) 
                                                       & (IData)(vlSelf->cov_f_done))
                                                       ? 8U
                                                       : 0x1000U)))
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                                     ? 
                                                    ((((IData)(vlSelf->cov_c_done) 
                                                       & (~ 
                                                          ((IData)(vlSelf->cov_mwcr) 
                                                           >> 1U))) 
                                                      & ((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                         | (IData)(vlSelf->baud2)))
                                                      ? 0x40U
                                                      : 
                                                     (((((IData)(vlSelf->cov_c_done) 
                                                         & ((IData)(vlSelf->cov_mwcr) 
                                                            >> 1U)) 
                                                        & (~ (IData)(vlSelf->cov_tx_empty))) 
                                                       & ((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                                                          | (IData)(vlSelf->baud2)))
                                                       ? 0x1000U
                                                       : 
                                                      (((((IData)(vlSelf->cov_c_done) 
                                                          & ((IData)(vlSelf->cov_mwcr) 
                                                             >> 1U)) 
                                                         & (IData)(vlSelf->cov_tx_empty)) 
                                                        & ((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                                                           | (IData)(vlSelf->baud2)))
                                                        ? 0x80U
                                                        : 8U)))
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                                      ? 
                                                     (((((((IData)(vlSelf->cov_f_done) 
                                                           & (~ (IData)(vlSelf->u_mstfsm__DOT__ssp))) 
                                                          & (~ (IData)(vlSelf->u_mstfsm__DOT__mwire))) 
                                                         | (((IData)(vlSelf->cov_f_done) 
                                                             & (IData)(vlSelf->u_mstfsm__DOT__mwire)) 
                                                            & (~ 
                                                               ((IData)(vlSelf->cov_mwcr) 
                                                                >> 1U)))) 
                                                        | ((((IData)(vlSelf->cov_f_done) 
                                                             & (IData)(vlSelf->u_mstfsm__DOT__x_done_1d)) 
                                                            & (~ (IData)(vlSelf->u_mstfsm__DOT__mwire))) 
                                                           & (IData)(vlSelf->u_mstfsm__DOT__ssp))) 
                                                       | ((((IData)(vlSelf->cov_f_done) 
                                                            & (IData)(vlSelf->cov_x_done)) 
                                                           & (~ (IData)(vlSelf->u_mstfsm__DOT__mwire))) 
                                                          & (~ (IData)(vlSelf->u_mstfsm__DOT__ssp))))
                                                       ? 0x20U
                                                       : 
                                                      (((((IData)(vlSelf->cov_f_done) 
                                                          & (IData)(vlSelf->u_mstfsm__DOT__mwire)) 
                                                         & (2U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->cov_mwcr)))) 
                                                        & (~ (IData)(vlSelf->cov_x_done)))
                                                        ? 0x1000U
                                                        : 
                                                       (((((IData)(vlSelf->cov_f_done) 
                                                           & (IData)(vlSelf->u_mstfsm__DOT__mwire)) 
                                                          & (6U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->cov_mwcr)))) 
                                                         & (~ (IData)(vlSelf->cov_x_done)))
                                                         ? 0x80U
                                                         : 
                                                        (((((IData)(vlSelf->cov_x_done) 
                                                            & (IData)(vlSelf->u_mstfsm__DOT__mwire)) 
                                                           & ((IData)(vlSelf->cov_mwcr) 
                                                              >> 1U)) 
                                                          & (IData)(vlSelf->cov_f_done))
                                                          ? 0x80U
                                                          : 
                                                         ((((IData)(vlSelf->u_mstfsm__DOT__ssp) 
                                                            & (IData)(vlSelf->cov_f_done)) 
                                                           & (~ (IData)(vlSelf->cov_x_done)))
                                                           ? 0x40U
                                                           : 0x10U)))))
                                                      : 
                                                     ((0x20U 
                                                       == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                                       ? 
                                                      ((((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                                                         | (IData)(vlSelf->baud2)) 
                                                        & ((IData)(vlSelf->u_mstfsm__DOT__spi0) 
                                                           & (~ (IData)(vlSelf->baud2))))
                                                        ? 0x80U
                                                        : 
                                                       ((((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                                                          | (IData)(vlSelf->baud2)) 
                                                         & ((((IData)(vlSelf->u_mstfsm__DOT__spi1) 
                                                              & (IData)(vlSelf->cov_x_done)) 
                                                             | (((IData)(vlSelf->u_mstfsm__DOT__spi0) 
                                                                 & (IData)(vlSelf->baud2)) 
                                                                & ((IData)(vlSelf->cov_x_done) 
                                                                   | (IData)(vlSelf->cov_ss_tgl_en)))) 
                                                            | (IData)(vlSelf->u_mstfsm__DOT__ssp)))
                                                         ? 0x100U
                                                         : 
                                                        ((((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                           | (IData)(vlSelf->baud2)) 
                                                          & ((IData)(vlSelf->u_mstfsm__DOT__mwire) 
                                                             & (IData)(vlSelf->cov_x_done)))
                                                          ? 0x100U
                                                          : 
                                                         ((((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                            | (IData)(vlSelf->baud2)) 
                                                           & ((~ (IData)(vlSelf->cov_x_done)) 
                                                              & (IData)(vlSelf->u_mstfsm__DOT__spi1)))
                                                           ? 0x10U
                                                           : 
                                                          ((((((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                               | (IData)(vlSelf->baud2)) 
                                                              & (~ (IData)(vlSelf->cov_x_done))) 
                                                             & (IData)(vlSelf->u_mstfsm__DOT__mwire)) 
                                                            & (~ (IData)(vlSelf->cov_mwcr)))
                                                            ? 8U
                                                            : 
                                                           (((((((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                                 | (IData)(vlSelf->baud2)) 
                                                                & (~ (IData)(vlSelf->cov_x_done))) 
                                                               & (IData)(vlSelf->u_mstfsm__DOT__mwire)) 
                                                              & (IData)(vlSelf->cov_mwcr)) 
                                                             | ((((((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                                                                    | (IData)(vlSelf->baud2)) 
                                                                   & (IData)(vlSelf->u_mstfsm__DOT__spi0)) 
                                                                  & (IData)(vlSelf->baud2)) 
                                                                 & (~ (IData)(vlSelf->cov_x_done))) 
                                                                & (~ (IData)(vlSelf->cov_ss_tgl_en))))
                                                             ? 0x10U
                                                             : 0x20U))))))
                                                       : 
                                                      ((((((IData)(vlSelf->u_mstfsm__DOT__mwire) 
                                                           & (IData)(vlSelf->baud2)) 
                                                          & (IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int)) 
                                                         | (((IData)(vlSelf->u_mstfsm__DOT__mwire) 
                                                             & (~ (IData)(vlSelf->baud2))) 
                                                            & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int))) 
                                                        | ((~ (IData)(vlSelf->u_mstfsm__DOT__mwire)) 
                                                           & ((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                              | (IData)(vlSelf->baud2))))
                                                        ? 0x10U
                                                        : 0x40U))))))))
                                       : ((0x80U == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                           ? (((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                               | (IData)(vlSelf->baud2))
                                               ? ((IData)(vlSelf->cov_ss_tgl_en)
                                                   ? 0x100U
                                                   : 
                                                  (((IData)(vlSelf->u_mstfsm__DOT____VdfgTmp_h53254bb6__0) 
                                                    | (IData)(vlSelf->u_mstfsm__DOT__spi1))
                                                    ? 0x100U
                                                    : 
                                                   (((IData)(vlSelf->u_mstfsm__DOT__spi0) 
                                                     & ((IData)(vlSelf->cov_x_done) 
                                                        | (IData)(vlSelf->u_mstfsm__DOT__abort_ir)))
                                                     ? 0x100U
                                                     : 0x10U)))
                                               : 0x80U)
                                           : ((0x100U 
                                               == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                               ? ((
                                                   ((((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                                                      | (IData)(vlSelf->baud2)) 
                                                     & (IData)(vlSelf->u_mstfsm__DOT__spi0)) 
                                                    & (~ (IData)(vlSelf->cov_x_done))) 
                                                   & (~ (IData)(vlSelf->u_mstfsm__DOT__abort_ir)))
                                                   ? 0x40U
                                                   : 
                                                  ((((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                                                     | (IData)(vlSelf->baud2)) 
                                                    & (IData)(vlSelf->u_mstfsm__DOT__mwire))
                                                    ? 0x400U
                                                    : 
                                                   (((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                     & ((IData)(vlSelf->u_mstfsm__DOT__ssp) 
                                                        | ((IData)(vlSelf->u_mstfsm__DOT__spi0) 
                                                           & ((IData)(vlSelf->cov_x_done) 
                                                              | (IData)(vlSelf->u_mstfsm__DOT__abort_ir)))))
                                                     ? 0x400U
                                                     : 
                                                    ((((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                       | (IData)(vlSelf->baud2)) 
                                                      & ((IData)(vlSelf->u_mstfsm__DOT__spi1) 
                                                         | (IData)(vlSelf->u_mstfsm__DOT__ssp)))
                                                      ? 0x200U
                                                      : 0x100U))))
                                               : ((0x200U 
                                                   == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                                   ? 
                                                  (((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                                                    | (IData)(vlSelf->baud2))
                                                    ? 
                                                   (((IData)(vlSelf->u_mstfsm__DOT__hold_ss_cnt) 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->SPEC_HOLD_SS) 
                                                         - (IData)(1U))))
                                                     ? 0x400U
                                                     : 0x200U)
                                                    : 0x200U)
                                                   : 
                                                  ((0x400U 
                                                    == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                                    ? 
                                                   ((((IData)(vlSelf->u_mstfsm__DOT__mwire) 
                                                      & ((IData)(vlSelf->cov_mwcr) 
                                                         >> 2U)) 
                                                     & ((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                        | (IData)(vlSelf->baud2)))
                                                     ? 0x2000U
                                                     : 
                                                    (((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                      | (IData)(vlSelf->baud2))
                                                      ? 1U
                                                      : 0x400U))
                                                    : 
                                                   ((0x2000U 
                                                     == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                                     ? 
                                                    (((((IData)(vlSelf->u_mstfsm__DOT__rxd_sync) 
                                                        & (~ (IData)(vlSelf->cov_mwcr))) 
                                                       & (~ (IData)(vlSelf->cov_tx_empty))) 
                                                      & (IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int))
                                                      ? 0x1000U
                                                      : 
                                                     ((((IData)(vlSelf->u_mstfsm__DOT__rxd_sync) 
                                                        & ((IData)(vlSelf->cov_mwcr) 
                                                           | (IData)(vlSelf->cov_tx_empty))) 
                                                       & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int))
                                                       ? 0x4000U
                                                       : 0x2000U))
                                                     : 
                                                    ((0x4000U 
                                                      == (IData)(vlSelf->u_mstfsm__DOT__c_state))
                                                      ? 
                                                     ((((((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                                                          & (IData)(vlSelf->baud2)) 
                                                         | ((~ (IData)(vlSelf->baud2)) 
                                                            & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int))) 
                                                        & (~ (IData)(vlSelf->cov_tx_empty))) 
                                                       & (IData)(vlSelf->cov_mwcr))
                                                       ? 0x1000U
                                                       : 
                                                      (((IData)(vlSelf->u_mstfsm__DOT__sclk_re_int) 
                                                        & (~ 
                                                           ((IData)(vlSelf->cov_mwcr) 
                                                            & (~ (IData)(vlSelf->cov_tx_empty)))))
                                                        ? 1U
                                                        : 0x4000U))
                                                      : 
                                                     ((IData)(vlSelf->ssienr)
                                                       ? 1U
                                                       : 0x800U))))))));
    vlSelf->u_regfile__DOT__tx_overflow = vlSelf->cov_tx_overflow;
    vlSelf->u_intctl__DOT__tx_overflow = vlSelf->cov_tx_overflow;
    vlSelf->tx_overflow = vlSelf->cov_tx_overflow;
    vlSelf->u_mstfsm__DOT__load_start_bit = vlSelf->cov_s3;
    vlSelf->u_mstfsm__DOT__cov_s3 = vlSelf->cov_s3;
    vlSelf->u_shift__DOT__load_start_bit = vlSelf->cov_s3;
    vlSelf->load_start_bit = vlSelf->cov_s3;
    vlSelf->u_mstfsm__DOT__cov_start_bit_ctl = vlSelf->cov_s3;
    vlSelf->u_mstfsm__DOT__clr_ctrl_cnt = ((((0x10U 
                                              == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                             | ((0x20U 
                                                 == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                                | (1U 
                                                   == (IData)(vlSelf->u_mstfsm__DOT__c_state)))) 
                                            & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int)) 
                                           | (IData)(u_mstfsm__DOT____VdfgTmp_he701203a__0));
    vlSelf->cov_rx_shift_en = ((~ ((IData)(vlSelf->u_mstfsm__DOT__mwire) 
                                   & ((~ (IData)(vlSelf->cov_srl_test)) 
                                      & ((IData)(vlSelf->u_regfile__DOT__mwcr_ir) 
                                         >> 1U)))) 
                               & (((8U == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                   & ((IData)(u_mstfsm__DOT____VdfgTmp_h0a2a8df9__0) 
                                      & ((IData)(vlSelf->u_regfile__DOT__mwcr_ir) 
                                         >> 1U))) | 
                                  (((0x10U == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                    & (IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int)) 
                                   | (((0x20U == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                       & (IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int)) 
                                      | ((~ (IData)(vlSelf->u_mstfsm__DOT__mwire)) 
                                         & (IData)(u_mstfsm__DOT____VdfgTmp_he701203a__0))))));
    vlSelf->u_mstfsm__DOT__inc_bit_cnt = (((0x1000U 
                                            == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                           & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int)) 
                                          | (((0x20U 
                                               == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                              & ((IData)(vlSelf->baud2) 
                                                 & (IData)(vlSelf->u_mstfsm__DOT__mwire))) 
                                             | (IData)(u_mstfsm__DOT____VdfgTmp_h3e02eda8__0)));
    vlSelf->cov_tx_shift_en = (((IData)(u_mstfsm__DOT____VdfgTmp_h3e02eda8__0) 
                                & ((IData)(vlSelf->u_mstfsm__DOT__mwire) 
                                   | ((~ (vlSelf->u_regfile__DOT__ctrlr0_ir 
                                          >> 0xbU)) 
                                      | ((3U == (IData)(vlSelf->cov_tmod)) 
                                         & ((IData)(vlSelf->u_mstfsm__DOT__spi0_control) 
                                            | (IData)(vlSelf->u_mstfsm__DOT__spi1_control)))))) 
                               | (IData)(vlSelf->u_mstfsm__DOT__inc_ctrl_cnt));
    u_mstfsm__DOT____VdfgTmp_hcfdbf001__0 = ((IData)(u_mstfsm__DOT____VdfgTmp_hf3a2c16c__0) 
                                             & ((~ (IData)(vlSelf->u_mstfsm__DOT__mwire)) 
                                                & (~ (IData)(vlSelf->cov_x_done))));
    u_mstfsm__DOT____VdfgTmp_h35682704__0 = ((0x1000U 
                                              == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                             & (IData)(u_mstfsm__DOT____VdfgTmp_h15943f13__0));
    vlSelf->u_mstfsm__DOT__clr_bit_cnt = (((IData)(u_mstfsm__DOT____VdfgTmp_hc278a5f2__0) 
                                           & ((IData)(vlSelf->u_mstfsm__DOT____VdfgTmp_h53254bb6__0) 
                                              | (IData)(vlSelf->cov_ss_tgl_en))) 
                                          | (((IData)(u_mstfsm__DOT____VdfgTmp_hf3a2c16c__0) 
                                              & ((~ (IData)(vlSelf->u_mstfsm__DOT__ssp)) 
                                                 & ((~ (IData)(vlSelf->u_mstfsm__DOT__mwire)) 
                                                    & (~ (IData)(vlSelf->cov_ss_tgl_en))))) 
                                             | ((IData)(u_mstfsm__DOT____VdfgTmp_ha8ae4cd3__0) 
                                                | (((1U 
                                                     == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                                    & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int)) 
                                                   | (((8U 
                                                        == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                                       & (IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int)) 
                                                      | (((0x1000U 
                                                           == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                                          & ((IData)(vlSelf->u_regfile__DOT__mwcr_ir) 
                                                             & (IData)(u_mstfsm__DOT____VdfgTmp_h0a2a8df9__0))) 
                                                         | ((0x40U 
                                                             == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                                            & ((IData)(u_mstfsm__DOT____VdfgTmp_h0a2a8df9__0) 
                                                               & (IData)(vlSelf->u_mstfsm__DOT__mwire)))))))));
    u_mstfsm__DOT____VdfgTmp_h984bb531__0 = (((4U == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                              & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int)) 
                                             | (((~ (IData)(vlSelf->cov_x_done)) 
                                                 & (IData)(u_mstfsm__DOT____VdfgTmp_ha8ae4cd3__0)) 
                                                | ((IData)(u_mstfsm__DOT____VdfgTmp_hc278a5f2__0) 
                                                   & (IData)(vlSelf->u_mstfsm__DOT__ssp))));
    vlSelf->u_mstfsm__DOT__clr_frame_cnt = (((0x400U 
                                              == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                             & (0x400U 
                                                != (IData)(vlSelf->u_mstfsm__DOT__n_state))) 
                                            | (1U == (IData)(vlSelf->u_mstfsm__DOT__c_state)));
    vlSelf->u_mstfsm__DOT__fsm_busy_iw = ((1U != (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                          & (0x800U 
                                             != (IData)(vlSelf->u_mstfsm__DOT__n_state)));
    vlSelf->tx_dfs = ((8U == (IData)(vlSelf->u_mstfsm__DOT__n_state))
                       ? (IData)(vlSelf->cov_eff_cfs)
                       : (IData)(vlSelf->cov_dfs));
    u_mstfsm__DOT____VdfgTmp_hee7dff28__0 = ((1U != (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                             & ((0x400U 
                                                 != (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                                & (0x800U 
                                                   != (IData)(vlSelf->u_mstfsm__DOT__n_state))));
    vlSelf->cov_sclk_mask = ((0x10U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                             | ((0x20U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                | (((0x1000U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                    & (0x2000U != (IData)(vlSelf->u_mstfsm__DOT__c_state))) 
                                   | (((0x1000U == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                       & (0x80U == (IData)(vlSelf->u_mstfsm__DOT__n_state))) 
                                      | ((0x80U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                         | ((8U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                            | (((4U 
                                                 == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                                & ((IData)(vlSelf->u_mstfsm__DOT__spi1) 
                                                   | (IData)(vlSelf->u_mstfsm__DOT__ssp))) 
                                               | (((0x4000U 
                                                    == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                                   & (IData)(vlSelf->cov_tx_empty)) 
                                                  | ((0x40U 
                                                      == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                                     & (IData)(vlSelf->u_mstfsm__DOT____VdfgTmp_h53254bb6__0))))))))));
    vlSelf->u_mstfsm__DOT__fsm_sleep_iw = (0x800U == (IData)(vlSelf->u_mstfsm__DOT__n_state));
    vlSelf->u_mstfsm__DOT__rx_shift_en = vlSelf->cov_rx_shift_en;
    vlSelf->u_mstfsm__DOT__cov_rx_shift_en = vlSelf->cov_rx_shift_en;
    vlSelf->u_shift__DOT__rx_shift_en = vlSelf->cov_rx_shift_en;
    vlSelf->rx_shift_en = vlSelf->cov_rx_shift_en;
    vlSelf->u_shift__DOT__i_rx_shift_en = ((IData)(vlSelf->cov_rx_shift_en) 
                                           & (IData)(vlSelf->ssienr));
    vlSelf->u_mstfsm__DOT__tx_shift_en = vlSelf->cov_tx_shift_en;
    vlSelf->u_mstfsm__DOT__cov_tx_shift_en = vlSelf->cov_tx_shift_en;
    vlSelf->u_shift__DOT__tx_shift_en = vlSelf->cov_tx_shift_en;
    vlSelf->tx_shift_en = vlSelf->cov_tx_shift_en;
    vlSelf->cov_load_rx_buf = (((2U == (IData)(vlSelf->cov_tmod)) 
                                | ((0U == (IData)(vlSelf->cov_tmod)) 
                                   | ((IData)(vlSelf->u_mstfsm__DOT__mwire) 
                                      | ((3U == (IData)(vlSelf->cov_tmod)) 
                                         & ((IData)(u_mstfsm__DOT____VdfgTmp_hd3e036e5__0) 
                                            | (IData)(u_mstfsm__DOT____VdfgTmp_hd8e3371d__0)))))) 
                               & (((IData)(u_mstfsm__DOT____VdfgTmp_h35682704__0) 
                                   & (IData)(vlSelf->cov_srl_test)) 
                                  | ((IData)(u_mstfsm__DOT____VdfgTmp_ha8ae4cd3__0) 
                                     | (((0x40U == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                         & ((IData)(u_mstfsm__DOT____VdfgTmp_h15943f13__0) 
                                            & ((IData)(vlSelf->u_mstfsm__DOT__ssp) 
                                               | (IData)(u_mstfsm__DOT____VdfgTmp_h7d515d71__0)))) 
                                        | (((0x80U 
                                             == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                            & ((IData)(u_mstfsm__DOT____VdfgTmp_h15943f13__0) 
                                               & ((~ (IData)(vlSelf->u_mstfsm__DOT__mwire)) 
                                                  | (IData)(u_mstfsm__DOT____VdfgTmp_h7d515d71__0)))) 
                                           | ((0x100U 
                                               == (IData)(vlSelf->u_mstfsm__DOT__c_state)) 
                                              & ((~ (IData)(vlSelf->u_mstfsm__DOT__spi0)) 
                                                 & ((~ (IData)(vlSelf->u_mstfsm__DOT__mwire)) 
                                                    & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int)))))))));
    vlSelf->cov_load_tx_buffer = ((~ (IData)(vlSelf->u_mstfsm__DOT__tx_load_en)) 
                                  & ((IData)(u_mstfsm__DOT____VdfgTmp_h984bb531__0) 
                                     | (IData)(u_mstfsm__DOT____VdfgTmp_hcfdbf001__0)));
    vlSelf->cov_load_tx_shift = ((IData)(vlSelf->u_mstfsm__DOT__tx_load_en) 
                                 & ((~ (IData)(vlSelf->cov_tx_empty)) 
                                    & ((IData)(u_mstfsm__DOT____VdfgTmp_h984bb531__0) 
                                       | ((IData)(u_mstfsm__DOT____VdfgTmp_h35682704__0) 
                                          | ((~ (IData)(vlSelf->u_mstfsm__DOT__abort_ir)) 
                                             & (IData)(u_mstfsm__DOT____VdfgTmp_hcfdbf001__0))))));
    vlSelf->u_mstfsm__DOT__fsm_multi_mst_iw = ((IData)(vlSelf->u_mstfsm__DOT__fsm_busy_iw) 
                                               & (((IData)(vlSelf->ss_in_n) 
                                                   & (IData)(vlSelf->u_mstfsm__DOT__ssp)) 
                                                  | ((~ (IData)(vlSelf->ss_in_n)) 
                                                     & (~ (IData)(vlSelf->u_mstfsm__DOT__ssp)))));
    vlSelf->u_mstfsm__DOT__tx_dfs = vlSelf->tx_dfs;
    vlSelf->u_shift__DOT__tx_dfs = vlSelf->tx_dfs;
    vlSelf->u_sclkgen__DOT__sclk_mask = vlSelf->cov_sclk_mask;
    vlSelf->u_mstfsm__DOT__sclk_mask = vlSelf->cov_sclk_mask;
    vlSelf->sclk_mask = vlSelf->cov_sclk_mask;
    vlSelf->u_mstfsm__DOT__sclk_mask_int = vlSelf->cov_sclk_mask;
    u_mstfsm__DOT____VdfgTmp_h8e073a41__0 = ((0x400U 
                                              == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                             | (IData)(vlSelf->u_mstfsm__DOT__fsm_sleep_iw));
    if (vlSelf->u_mstfsm__DOT____VdfgTmp_hf2a781db__0) {
        vlSelf->fsm_slv_sel = ((IData)(u_mstfsm__DOT____VdfgTmp_hee7dff28__0) 
                               & (0x40U != (IData)(vlSelf->u_mstfsm__DOT__n_state)));
        vlSelf->u_mstfsm__DOT__ssi_oe_n_iw = ((1U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                              | (IData)(u_mstfsm__DOT____VdfgTmp_h8e073a41__0));
    } else if (vlSelf->u_mstfsm__DOT__ssp) {
        vlSelf->fsm_slv_sel = ((2U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                               | ((4U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                  | ((0x40U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                     | ((0x10U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                        & ((IData)(vlSelf->u_mstfsm__DOT__sspf_done) 
                                           & ((~ (IData)(vlSelf->cov_x_done)) 
                                              & (IData)(vlSelf->u_mstfsm__DOT__sclk_re_int)))))));
        vlSelf->u_mstfsm__DOT__ssi_oe_n_iw = ((1U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                              | ((2U 
                                                  == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                                 | (IData)(u_mstfsm__DOT____VdfgTmp_h8e073a41__0)));
    } else {
        vlSelf->fsm_slv_sel = u_mstfsm__DOT____VdfgTmp_hee7dff28__0;
        vlSelf->u_mstfsm__DOT__ssi_oe_n_iw = ((1U == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                              | ((IData)(vlSelf->u_mstfsm__DOT__fsm_sleep_iw) 
                                                 | (((~ 
                                                      ((IData)(vlSelf->u_regfile__DOT__mwcr_ir) 
                                                       >> 1U)) 
                                                     & (0x10U 
                                                        == (IData)(vlSelf->u_mstfsm__DOT__n_state))) 
                                                    | (((~ (IData)(vlSelf->baud2)) 
                                                        & ((IData)(vlSelf->u_mstfsm__DOT__sclk_fe_int) 
                                                           & (0x40U 
                                                              == (IData)(vlSelf->u_mstfsm__DOT__n_state)))) 
                                                       | (((IData)(vlSelf->ssi_oe_n) 
                                                           & (0x40U 
                                                              == (IData)(vlSelf->u_mstfsm__DOT__n_state))) 
                                                          | (((~ 
                                                               ((IData)(vlSelf->u_regfile__DOT__mwcr_ir) 
                                                                >> 1U)) 
                                                              & (0x100U 
                                                                 == (IData)(vlSelf->u_mstfsm__DOT__n_state))) 
                                                             | (((~ 
                                                                  ((IData)(vlSelf->u_regfile__DOT__mwcr_ir) 
                                                                   >> 1U)) 
                                                                 & (0x80U 
                                                                    == (IData)(vlSelf->u_mstfsm__DOT__n_state))) 
                                                                | ((0x400U 
                                                                    == (IData)(vlSelf->u_mstfsm__DOT__n_state)) 
                                                                   | (0x20U 
                                                                      == (IData)(vlSelf->u_mstfsm__DOT__n_state))))))))));
    }
    vlSelf->u_mstfsm__DOT__load_rx_buf = vlSelf->cov_load_rx_buf;
    vlSelf->u_mstfsm__DOT__cov_load_rx_buf = vlSelf->cov_load_rx_buf;
    vlSelf->u_shift__DOT__load_rx_buf = vlSelf->cov_load_rx_buf;
    vlSelf->load_rx_buf = vlSelf->cov_load_rx_buf;
    vlSelf->u_shift__DOT__i_load_rx_buf = ((IData)(vlSelf->cov_load_rx_buf) 
                                           & (IData)(vlSelf->ssienr));
    vlSelf->u_mstfsm__DOT__load_tx_buffer = vlSelf->cov_load_tx_buffer;
    vlSelf->u_mstfsm__DOT__cov_load_tx_buffer = vlSelf->cov_load_tx_buffer;
    vlSelf->u_shift__DOT__load_tx_buffer = vlSelf->cov_load_tx_buffer;
    vlSelf->load_tx_buffer = vlSelf->cov_load_tx_buffer;
    vlSelf->u_mstfsm__DOT__load_tx_shift = vlSelf->cov_load_tx_shift;
    vlSelf->u_mstfsm__DOT__cov_load_tx_shift = vlSelf->cov_load_tx_shift;
    vlSelf->u_shift__DOT__load_tx_shift = vlSelf->cov_load_tx_shift;
    vlSelf->load_tx_shift = vlSelf->cov_load_tx_shift;
    vlSelf->u_mstfsm__DOT__fsm_slv_sel = vlSelf->fsm_slv_sel;
    vlSelf->u_shift__DOT__fsm_slv_sel = vlSelf->fsm_slv_sel;
}

VL_ATTR_COLD void Vspi_m_top_spi_m_top___ctor_var_reset(Vspi_m_top_spi_m_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_m_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vspi_m_top_spi_m_top___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->reg_we = VL_RAND_RESET_I(1);
    vlSelf->reg_addr = VL_RAND_RESET_I(6);
    vlSelf->reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->reg_re = VL_RAND_RESET_I(1);
    vlSelf->reg_rdata = VL_RAND_RESET_I(32);
    vlSelf->rxd = VL_RAND_RESET_I(1);
    vlSelf->ss_in_n = VL_RAND_RESET_I(1);
    vlSelf->sclk_out = VL_RAND_RESET_I(1);
    vlSelf->txd = VL_RAND_RESET_I(1);
    vlSelf->ss_n = VL_RAND_RESET_I(4);
    vlSelf->ssi_busy = VL_RAND_RESET_I(1);
    vlSelf->ssi_txe_intr = VL_RAND_RESET_I(1);
    vlSelf->ssi_txo_intr = VL_RAND_RESET_I(1);
    vlSelf->ssi_rxu_intr = VL_RAND_RESET_I(1);
    vlSelf->ssi_rxf_intr = VL_RAND_RESET_I(1);
    vlSelf->ssi_rxo_intr = VL_RAND_RESET_I(1);
    vlSelf->ssi_mst_intr = VL_RAND_RESET_I(1);
    vlSelf->SPEC_CFS_MIN = VL_RAND_RESET_I(4);
    vlSelf->SPEC_HOLD_SS = VL_RAND_RESET_I(4);
    vlSelf->SPEC_TXFTLR_DFLT = VL_RAND_RESET_I(4);
    vlSelf->cov_fsm_state_id = VL_RAND_RESET_I(4);
    vlSelf->cov_fsm_state = VL_RAND_RESET_I(15);
    vlSelf->cov_sclk_re = VL_RAND_RESET_I(1);
    vlSelf->cov_sclk_fe = VL_RAND_RESET_I(1);
    vlSelf->cov_sclk_out = VL_RAND_RESET_I(1);
    vlSelf->cov_sclk_mask = VL_RAND_RESET_I(1);
    vlSelf->cov_bit_cnt = VL_RAND_RESET_I(6);
    vlSelf->cov_ctrl_cnt = VL_RAND_RESET_I(4);
    vlSelf->cov_frame_cnt = VL_RAND_RESET_I(17);
    vlSelf->cov_f_done = VL_RAND_RESET_I(1);
    vlSelf->cov_c_done = VL_RAND_RESET_I(1);
    vlSelf->cov_x_done = VL_RAND_RESET_I(1);
    vlSelf->cov_last_frame = VL_RAND_RESET_I(1);
    vlSelf->cov_tx_shift_en = VL_RAND_RESET_I(1);
    vlSelf->cov_rx_shift_en = VL_RAND_RESET_I(1);
    vlSelf->cov_load_tx_shift = VL_RAND_RESET_I(1);
    vlSelf->cov_load_tx_buffer = VL_RAND_RESET_I(1);
    vlSelf->cov_load_rx_buf = VL_RAND_RESET_I(1);
    vlSelf->cov_s3 = VL_RAND_RESET_I(1);
    vlSelf->cov_txd = VL_RAND_RESET_I(1);
    vlSelf->cov_ss_in_n = VL_RAND_RESET_I(1);
    vlSelf->cov_ss_active = VL_RAND_RESET_I(1);
    vlSelf->cov_dfs = VL_RAND_RESET_I(5);
    vlSelf->cov_eff_dfs = VL_RAND_RESET_I(5);
    vlSelf->cov_cfs = VL_RAND_RESET_I(4);
    vlSelf->cov_eff_cfs = VL_RAND_RESET_I(4);
    vlSelf->cov_baudr = VL_RAND_RESET_I(16);
    vlSelf->cov_baud2 = VL_RAND_RESET_I(1);
    vlSelf->cov_ndf = VL_RAND_RESET_I(17);
    vlSelf->cov_tmod = VL_RAND_RESET_I(2);
    vlSelf->cov_frf = VL_RAND_RESET_I(2);
    vlSelf->cov_scph = VL_RAND_RESET_I(1);
    vlSelf->cov_scpol = VL_RAND_RESET_I(1);
    vlSelf->cov_srl_test = VL_RAND_RESET_I(1);
    vlSelf->cov_ss_tgl_en = VL_RAND_RESET_I(1);
    vlSelf->cov_slv_oe = VL_RAND_RESET_I(1);
    vlSelf->cov_ser = VL_RAND_RESET_I(4);
    vlSelf->cov_tx_level = VL_RAND_RESET_I(4);
    vlSelf->cov_rx_level = VL_RAND_RESET_I(4);
    vlSelf->cov_tx_full = VL_RAND_RESET_I(1);
    vlSelf->cov_tx_empty = VL_RAND_RESET_I(1);
    vlSelf->cov_rx_full = VL_RAND_RESET_I(1);
    vlSelf->cov_rx_empty = VL_RAND_RESET_I(1);
    vlSelf->cov_tx_overflow = VL_RAND_RESET_I(1);
    vlSelf->cov_rx_overflow = VL_RAND_RESET_I(1);
    vlSelf->cov_rx_underflow = VL_RAND_RESET_I(1);
    vlSelf->cov_risr = VL_RAND_RESET_I(6);
    vlSelf->cov_isr = VL_RAND_RESET_I(6);
    vlSelf->cov_imr = VL_RAND_RESET_I(6);
    vlSelf->cov_ssi_txe_intr = VL_RAND_RESET_I(1);
    vlSelf->cov_ssi_mst_intr = VL_RAND_RESET_I(1);
    vlSelf->cov_s1 = VL_RAND_RESET_I(1);
    vlSelf->cov_multi_mst_sync = VL_RAND_RESET_I(1);
    vlSelf->cov_s2 = VL_RAND_RESET_I(1);
    vlSelf->cov_hold_ss_cnt = VL_RAND_RESET_I(4);
    vlSelf->cov_start_xfer = VL_RAND_RESET_I(1);
    vlSelf->cov_fsm_busy = VL_RAND_RESET_I(1);
    vlSelf->cov_fsm_sleep = VL_RAND_RESET_I(1);
    vlSelf->cov_ssi_busy = VL_RAND_RESET_I(1);
    vlSelf->cov_ssi_sleep = VL_RAND_RESET_I(1);
    vlSelf->cov_rx_push = VL_RAND_RESET_I(1);
    vlSelf->cov_tx_pop = VL_RAND_RESET_I(1);
    vlSelf->cov_rx_data = VL_RAND_RESET_I(32);
    vlSelf->cov_mwcr = VL_RAND_RESET_I(3);
    vlSelf->cov_spi0_control = VL_RAND_RESET_I(1);
    vlSelf->cov_spi1_control = VL_RAND_RESET_I(1);
    vlSelf->cov_txftlr = VL_RAND_RESET_I(4);
    vlSelf->cov_s0 = VL_RAND_RESET_I(1);
    vlSelf->sclk_re = VL_RAND_RESET_I(1);
    vlSelf->sclk_fe = VL_RAND_RESET_I(1);
    vlSelf->sclk_mask = VL_RAND_RESET_I(1);
    vlSelf->fsm_slv_sel = VL_RAND_RESET_I(1);
    vlSelf->ssi_oe_n = VL_RAND_RESET_I(1);
    vlSelf->fsm_busy = VL_RAND_RESET_I(1);
    vlSelf->fsm_sleep = VL_RAND_RESET_I(1);
    vlSelf->fsm_multi_mst = VL_RAND_RESET_I(1);
    vlSelf->load_tx_shift = VL_RAND_RESET_I(1);
    vlSelf->load_tx_buffer = VL_RAND_RESET_I(1);
    vlSelf->load_rx_buf = VL_RAND_RESET_I(1);
    vlSelf->tx_shift_en = VL_RAND_RESET_I(1);
    vlSelf->rx_shift_en = VL_RAND_RESET_I(1);
    vlSelf->load_start_bit = VL_RAND_RESET_I(1);
    vlSelf->ssp_load_tx_shift = VL_RAND_RESET_I(1);
    vlSelf->tx_dfs = VL_RAND_RESET_I(5);
    vlSelf->start_xfer = VL_RAND_RESET_I(1);
    vlSelf->baud2 = VL_RAND_RESET_I(1);
    vlSelf->multi_mst_sync = VL_RAND_RESET_I(1);
    vlSelf->mst_contention = VL_RAND_RESET_I(1);
    vlSelf->tx_push = VL_RAND_RESET_I(1);
    vlSelf->rx_pop = VL_RAND_RESET_I(1);
    vlSelf->tx_pop = VL_RAND_RESET_I(1);
    vlSelf->rx_push = VL_RAND_RESET_I(1);
    vlSelf->tx_overflow = VL_RAND_RESET_I(1);
    vlSelf->cov_tx_push = VL_RAND_RESET_I(1);
    vlSelf->tx_full = VL_RAND_RESET_I(1);
    vlSelf->tx_empty = VL_RAND_RESET_I(1);
    vlSelf->rx_full = VL_RAND_RESET_I(1);
    vlSelf->rx_empty = VL_RAND_RESET_I(1);
    vlSelf->tx_level = VL_RAND_RESET_I(4);
    vlSelf->rx_level = VL_RAND_RESET_I(4);
    vlSelf->tx_wc = VL_RAND_RESET_I(4);
    vlSelf->rx_wc = VL_RAND_RESET_I(4);
    vlSelf->txftlr = VL_RAND_RESET_I(4);
    vlSelf->rxftlr = VL_RAND_RESET_I(4);
    vlSelf->tx_push_data = VL_RAND_RESET_I(32);
    vlSelf->tx_pop_data = VL_RAND_RESET_I(32);
    vlSelf->rx_pop_data = VL_RAND_RESET_I(32);
    vlSelf->rx_push_data = VL_RAND_RESET_I(32);
    vlSelf->eff_cfs = VL_RAND_RESET_I(4);
    vlSelf->ctrlr0 = VL_RAND_RESET_I(20);
    vlSelf->ser = VL_RAND_RESET_I(4);
    vlSelf->ndf = VL_RAND_RESET_I(17);
    vlSelf->ssienr = VL_RAND_RESET_I(1);
    vlSelf->mwcr = VL_RAND_RESET_I(3);
    vlSelf->imr = VL_RAND_RESET_I(6);
    vlSelf->isr = VL_RAND_RESET_I(6);
    vlSelf->risr = VL_RAND_RESET_I(6);
    vlSelf->fifo_rst_n = VL_RAND_RESET_I(1);
    vlSelf->ssi_sleep = VL_RAND_RESET_I(1);
    vlSelf->cov_scpol_active = VL_RAND_RESET_I(1);
    vlSelf->set0_imr5 = VL_RAND_RESET_I(1);
    vlSelf->set1_imr5 = VL_RAND_RESET_I(1);
    vlSelf->rdec_icr_en = VL_RAND_RESET_I(1);
    vlSelf->rdec_txoicr_en = VL_RAND_RESET_I(1);
    vlSelf->rdec_rxoicr_en = VL_RAND_RESET_I(1);
    vlSelf->rdec_rxuicr_en = VL_RAND_RESET_I(1);
    vlSelf->rdec_msticr_en = VL_RAND_RESET_I(1);
    vlSelf->dfs = VL_RAND_RESET_I(5);
    vlSelf->frf = VL_RAND_RESET_I(2);
    vlSelf->scph = VL_RAND_RESET_I(1);
    vlSelf->scpol = VL_RAND_RESET_I(1);
    vlSelf->tmod = VL_RAND_RESET_I(2);
    vlSelf->slv_oe = VL_RAND_RESET_I(1);
    vlSelf->srl_test = VL_RAND_RESET_I(1);
    vlSelf->ss_tgl_en = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__resetn = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__reg_we = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__reg_addr = VL_RAND_RESET_I(6);
    vlSelf->u_regfile__DOT__reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->u_regfile__DOT__reg_re = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__reg_rdata = VL_RAND_RESET_I(32);
    vlSelf->u_regfile__DOT__fsm_busy = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__fsm_sleep = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__fsm_multi_mst = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__mst_contention = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__multi_mst_sync = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__start_xfer = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__baud2 = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__baudr = VL_RAND_RESET_I(16);
    vlSelf->u_regfile__DOT__sclk_active = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__ctrlr0 = VL_RAND_RESET_I(20);
    vlSelf->u_regfile__DOT__ser = VL_RAND_RESET_I(4);
    vlSelf->u_regfile__DOT__ndf = VL_RAND_RESET_I(17);
    vlSelf->u_regfile__DOT__set0_imr5 = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__set1_imr5 = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__tx_push_data = VL_RAND_RESET_I(32);
    vlSelf->u_regfile__DOT__tx_push = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__rx_pop = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__tx_pop = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__tx_fifo_wc = VL_RAND_RESET_I(4);
    vlSelf->u_regfile__DOT__rx_fifo_wc = VL_RAND_RESET_I(4);
    vlSelf->u_regfile__DOT__fifo_rst_n = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__tx_full = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__tx_empty = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__rx_full = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__rx_empty = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__ssi_sleep = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__ssienr = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__mwcr = VL_RAND_RESET_I(3);
    vlSelf->u_regfile__DOT__txftlr = VL_RAND_RESET_I(4);
    vlSelf->u_regfile__DOT__rxftlr = VL_RAND_RESET_I(4);
    vlSelf->u_regfile__DOT__isr = VL_RAND_RESET_I(6);
    vlSelf->u_regfile__DOT__risr = VL_RAND_RESET_I(6);
    vlSelf->u_regfile__DOT__rdec_icr_en = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__rdec_txoicr_en = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__rdec_rxoicr_en = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__rdec_rxuicr_en = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__rdec_msticr_en = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__tx_overflow = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__imr = VL_RAND_RESET_I(6);
    vlSelf->u_regfile__DOT__rx_pop_data = VL_RAND_RESET_I(32);
    vlSelf->u_regfile__DOT__spec_cfs_min = VL_RAND_RESET_I(4);
    vlSelf->u_regfile__DOT__spec_txftlr_dflt = VL_RAND_RESET_I(4);
    vlSelf->u_regfile__DOT__cov_dfs = VL_RAND_RESET_I(5);
    vlSelf->u_regfile__DOT__cov_eff_dfs = VL_RAND_RESET_I(5);
    vlSelf->u_regfile__DOT__cov_cfs = VL_RAND_RESET_I(4);
    vlSelf->u_regfile__DOT__cov_eff_cfs = VL_RAND_RESET_I(4);
    vlSelf->u_regfile__DOT__cov_frf = VL_RAND_RESET_I(2);
    vlSelf->u_regfile__DOT__cov_scph = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__cov_scpol = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__cov_tmod = VL_RAND_RESET_I(2);
    vlSelf->u_regfile__DOT__cov_srl_test = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__cov_ss_tgl_en = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__cov_slv_oe = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__cov_ser = VL_RAND_RESET_I(4);
    vlSelf->u_regfile__DOT__cov_baud2 = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__cov_ndf = VL_RAND_RESET_I(17);
    vlSelf->u_regfile__DOT__cov_s2 = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__cov_ssi_busy = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__cov_ssi_sleep = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__cov_multi_mst_sync = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__cov_s1 = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__cov_start_xfer = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__cov_tx_push = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__cov_tx_pop = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__cov_txftlr = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__dr_en_w = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__rdec_dr_en = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__tx_push_c = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__tx_empty_early = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__slv_sel = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__tx_fifo_ready = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__ctrlr0_we = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__ctrlr1_we = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__ssienr_we = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__mwcr_we = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__ser_we = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__baudr_we = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__txftlr_we = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__rxftlr_we = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__dr_we = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__imr_we = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__ctrlr0_ir = VL_RAND_RESET_I(20);
    vlSelf->u_regfile__DOT__ctrlr1 = VL_RAND_RESET_I(16);
    vlSelf->u_regfile__DOT__mwcr_ir = VL_RAND_RESET_I(3);
    vlSelf->u_regfile__DOT__ser_ir = VL_RAND_RESET_I(4);
    vlSelf->u_regfile__DOT__imr_ir = VL_RAND_RESET_I(6);
    vlSelf->u_regfile__DOT__txflr = VL_RAND_RESET_I(4);
    vlSelf->u_regfile__DOT__rxflr = VL_RAND_RESET_I(4);
    vlSelf->u_regfile__DOT__dcol = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__fsm_busy_sr = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__multi_mst_edge = VL_RAND_RESET_I(1);
    vlSelf->u_regfile__DOT__ssi_sleep_ir = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__resetn = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__imr = VL_RAND_RESET_I(6);
    vlSelf->u_intctl__DOT__rdec_rxoicr_en = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__rdec_txoicr_en = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__rdec_rxuicr_en = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__rdec_msticr_en = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__rdec_icr_en = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__rd_en = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__tx_empty = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__tx_overflow = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__rx_underflow = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__rx_full = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__rx_overflow = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__multi_mst_sync = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__set0_imr5 = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__set1_imr5 = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__ssi_en = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__ssi_txe_intr = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__ssi_txo_intr = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__ssi_rxu_intr = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__ssi_rxf_intr = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__ssi_rxo_intr = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__ssi_mst_intr = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__mst_contention = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__risr = VL_RAND_RESET_I(6);
    vlSelf->u_intctl__DOT__isr = VL_RAND_RESET_I(6);
    vlSelf->u_intctl__DOT__irisr_rx_full = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__irisr_rx_fifo_overflow = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__irisr_rx_fifo_underflow = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__irisr_tx_fifo_overflow = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__irisr_tx_empty = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__irisr_mst_collision = VL_RAND_RESET_I(1);
    vlSelf->u_intctl__DOT__irisr = VL_RAND_RESET_I(6);
    vlSelf->u_fifo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->u_fifo__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->u_fifo__DOT__fifo_rst_n = VL_RAND_RESET_I(1);
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
    vlSelf->u_fifo__DOT__rx_overflow = VL_RAND_RESET_I(1);
    vlSelf->u_fifo__DOT__rx_underflow = VL_RAND_RESET_I(1);
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
    vlSelf->u_fifo__DOT__tx_rd = VL_RAND_RESET_I(4);
    vlSelf->u_fifo__DOT__tx_wr = VL_RAND_RESET_I(4);
    vlSelf->u_fifo__DOT__rx_rd = VL_RAND_RESET_I(4);
    vlSelf->u_fifo__DOT__rx_wr = VL_RAND_RESET_I(4);
    vlSelf->u_fifo__DOT__tx_full_w = VL_RAND_RESET_I(1);
    vlSelf->u_fifo__DOT__tx_empty_w = VL_RAND_RESET_I(1);
    vlSelf->u_fifo__DOT__rx_full_w = VL_RAND_RESET_I(1);
    vlSelf->u_fifo__DOT__rx_empty_w = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__baudr = VL_RAND_RESET_I(16);
    vlSelf->u_sclkgen__DOT__sclk_mask = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__sclk_active = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__ssi_en = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__sclk_out = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__sclk_re = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__sclk_fe = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__sclk_active_sync = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__r_det = VL_RAND_RESET_I(15);
    vlSelf->u_sclkgen__DOT__f_det = VL_RAND_RESET_I(16);
    vlSelf->u_sclkgen__DOT__ssi_cnt = VL_RAND_RESET_I(16);
    vlSelf->u_sclkgen__DOT__sclk_re_ir = VL_RAND_RESET_I(1);
    vlSelf->u_sclkgen__DOT__sclk_fe_ir = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__ssi_en = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__start_xfer = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__tx_empty = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__sclk_re = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__sclk_fe = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__mwcr = VL_RAND_RESET_I(3);
    vlSelf->u_mstfsm__DOT__frf = VL_RAND_RESET_I(2);
    vlSelf->u_mstfsm__DOT__scph = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__ss_tgl_en = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__tmod = VL_RAND_RESET_I(2);
    vlSelf->u_mstfsm__DOT__dfs = VL_RAND_RESET_I(5);
    vlSelf->u_mstfsm__DOT__cfs = VL_RAND_RESET_I(4);
    vlSelf->u_mstfsm__DOT__ndf = VL_RAND_RESET_I(17);
    vlSelf->u_mstfsm__DOT__srl_test = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__baud2 = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__ss_in_n = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__rxd = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__tx_fifo_level = VL_RAND_RESET_I(4);
    vlSelf->u_mstfsm__DOT__txfthr = VL_RAND_RESET_I(4);
    vlSelf->u_mstfsm__DOT__spec_hold_ss = VL_RAND_RESET_I(4);
    vlSelf->u_mstfsm__DOT__fsm_busy = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__fsm_slv_sel = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__sclk_mask = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__ssi_oe_n = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__fsm_sleep = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__load_tx_shift = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__ssp_load_tx_shift = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__load_tx_buffer = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__load_rx_buf = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__tx_shift_en = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__tx_dfs = VL_RAND_RESET_I(5);
    vlSelf->u_mstfsm__DOT__rx_shift_en = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__fsm_multi_mst = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__load_start_bit = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_fsm_state_id = VL_RAND_RESET_I(4);
    vlSelf->u_mstfsm__DOT__cov_fsm_state = VL_RAND_RESET_I(15);
    vlSelf->u_mstfsm__DOT__cov_bit_cnt = VL_RAND_RESET_I(6);
    vlSelf->u_mstfsm__DOT__cov_ctrl_cnt = VL_RAND_RESET_I(4);
    vlSelf->u_mstfsm__DOT__cov_frame_cnt = VL_RAND_RESET_I(17);
    vlSelf->u_mstfsm__DOT__cov_f_done = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_c_done = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_x_done = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_last_frame = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_tx_shift_en = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_rx_shift_en = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_load_tx_shift = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_load_tx_buffer = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_load_rx_buf = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_s3 = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_hold_ss_cnt = VL_RAND_RESET_I(4);
    vlSelf->u_mstfsm__DOT__cov_spi0_control = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_spi1_control = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_fsm_busy = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_fsm_sleep = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_start_bit_ctl = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__cov_s0 = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__c_state = VL_RAND_RESET_I(15);
    vlSelf->u_mstfsm__DOT__n_state = VL_RAND_RESET_I(15);
    vlSelf->u_mstfsm__DOT__bit_cnt = VL_RAND_RESET_I(6);
    vlSelf->u_mstfsm__DOT__ctrl_cnt = VL_RAND_RESET_I(4);
    vlSelf->u_mstfsm__DOT__frame_cnt = VL_RAND_RESET_I(17);
    vlSelf->u_mstfsm__DOT__last_frame = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__x_done_1d = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__tx_load_en = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__c_done_ir = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__f_done_ir = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__abort_ir = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__abort_seen = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__spi0_control = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__spi1_control = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__rxd_sync_1 = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__rxd_sync_2 = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__hold_ss_cnt = VL_RAND_RESET_I(4);
    vlSelf->u_mstfsm__DOT__ssp = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__spi0 = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__spi1 = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__mwire = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__sclk_re_int = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__sclk_fe_int = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__tx_fifo_filled = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__f_done = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__sspf_done = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__c_done = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__x_done = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__early_last_frame = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__inc_bit_cnt = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__clr_bit_cnt = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__inc_ctrl_cnt = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__clr_ctrl_cnt = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__inc_frame_cnt = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__clr_frame_cnt = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__sclk_mask_int = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__fsm_sleep_iw = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__fsm_busy_iw = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__fsm_multi_mst_iw = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__ssi_oe_n_iw = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__rxd_sync = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT__wrong_pol = VL_RAND_RESET_I(1);
    vlSelf->u_mstfsm__DOT____VdfgTmp_hf2a781db__0 = 0;
    vlSelf->u_mstfsm__DOT____VdfgTmp_h53254bb6__0 = 0;
    vlSelf->u_shift__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__tx_shift_en = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__load_tx_buffer = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__load_start_bit = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__rx_shift_en = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__load_rx_buf = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__load_tx_shift = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__tx_pop_data = VL_RAND_RESET_I(32);
    vlSelf->u_shift__DOT__rxd = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__dfs = VL_RAND_RESET_I(5);
    vlSelf->u_shift__DOT__tx_dfs = VL_RAND_RESET_I(5);
    vlSelf->u_shift__DOT__fsm_slv_sel = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__ser = VL_RAND_RESET_I(4);
    vlSelf->u_shift__DOT__frf = VL_RAND_RESET_I(2);
    vlSelf->u_shift__DOT__srl_test = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__ssi_en = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__ss_n = VL_RAND_RESET_I(4);
    vlSelf->u_shift__DOT__txd = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__rx_push_data = VL_RAND_RESET_I(32);
    vlSelf->u_shift__DOT__rx_push = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__tx_pop = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__rx_push_reg = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__tx_shift_reg = VL_RAND_RESET_I(32);
    vlSelf->u_shift__DOT__tx_buffer = VL_RAND_RESET_I(32);
    vlSelf->u_shift__DOT__rx_shift_reg = VL_RAND_RESET_I(32);
    vlSelf->u_shift__DOT__rx_buffer = VL_RAND_RESET_I(32);
    vlSelf->u_shift__DOT__load_start_bit_ir = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__rxd_mst_int = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__ssp_data_valid_iw = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__i_rx_shift_en = VL_RAND_RESET_I(1);
    vlSelf->u_shift__DOT__i_load_rx_buf = VL_RAND_RESET_I(1);
}
