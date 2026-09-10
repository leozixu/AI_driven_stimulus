// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_m_top.h for the primary calling header

#include "Vspi_m_top__pch.h"
#include "Vspi_m_top__Syms.h"
#include "Vspi_m_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_m_top___024root___dump_triggers__ico(Vspi_m_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vspi_m_top___024root___eval_triggers__ico(Vspi_m_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_m_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_m_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspi_m_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vspi_m_top___024root___ico_sequent__TOP__0(Vspi_m_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_m_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_m_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->cov_s0 = vlSymsp->TOP__spi_m_top.cov_s0;
    vlSelf->cov_txftlr = vlSymsp->TOP__spi_m_top.cov_txftlr;
    vlSelf->cov_spi1_control = vlSymsp->TOP__spi_m_top.cov_spi1_control;
    vlSelf->cov_spi0_control = vlSymsp->TOP__spi_m_top.cov_spi0_control;
    vlSelf->cov_mwcr = vlSymsp->TOP__spi_m_top.cov_mwcr;
    vlSelf->cov_rx_data = vlSymsp->TOP__spi_m_top.cov_rx_data;
    vlSelf->cov_tx_pop = vlSymsp->TOP__spi_m_top.cov_tx_pop;
    vlSelf->cov_rx_push = vlSymsp->TOP__spi_m_top.cov_rx_push;
    vlSelf->cov_ssi_sleep = vlSymsp->TOP__spi_m_top.cov_ssi_sleep;
    vlSelf->cov_ssi_busy = vlSymsp->TOP__spi_m_top.cov_ssi_busy;
    vlSelf->cov_fsm_sleep = vlSymsp->TOP__spi_m_top.cov_fsm_sleep;
    vlSelf->cov_fsm_busy = vlSymsp->TOP__spi_m_top.cov_fsm_busy;
    vlSelf->cov_start_xfer = vlSymsp->TOP__spi_m_top.cov_start_xfer;
    vlSelf->cov_hold_ss_cnt = vlSymsp->TOP__spi_m_top.cov_hold_ss_cnt;
    vlSelf->cov_s2 = vlSymsp->TOP__spi_m_top.cov_s2;
    vlSelf->cov_multi_mst_sync = vlSymsp->TOP__spi_m_top.cov_multi_mst_sync;
    vlSelf->cov_s1 = vlSymsp->TOP__spi_m_top.cov_s1;
    vlSelf->cov_imr = vlSymsp->TOP__spi_m_top.cov_imr;
    vlSelf->cov_risr = vlSymsp->TOP__spi_m_top.cov_risr;
    vlSelf->cov_rx_empty = vlSymsp->TOP__spi_m_top.cov_rx_empty;
    vlSelf->cov_rx_full = vlSymsp->TOP__spi_m_top.cov_rx_full;
    vlSelf->cov_tx_empty = vlSymsp->TOP__spi_m_top.cov_tx_empty;
    vlSelf->cov_tx_full = vlSymsp->TOP__spi_m_top.cov_tx_full;
    vlSelf->cov_rx_level = vlSymsp->TOP__spi_m_top.cov_rx_level;
    vlSelf->cov_tx_level = vlSymsp->TOP__spi_m_top.cov_tx_level;
    vlSelf->cov_ser = vlSymsp->TOP__spi_m_top.cov_ser;
    vlSelf->cov_slv_oe = vlSymsp->TOP__spi_m_top.cov_slv_oe;
    vlSelf->cov_ss_tgl_en = vlSymsp->TOP__spi_m_top.cov_ss_tgl_en;
    vlSelf->cov_srl_test = vlSymsp->TOP__spi_m_top.cov_srl_test;
    vlSelf->cov_scpol = vlSymsp->TOP__spi_m_top.cov_scpol;
    vlSelf->cov_scph = vlSymsp->TOP__spi_m_top.cov_scph;
    vlSelf->cov_frf = vlSymsp->TOP__spi_m_top.cov_frf;
    vlSelf->cov_tmod = vlSymsp->TOP__spi_m_top.cov_tmod;
    vlSelf->cov_ndf = vlSymsp->TOP__spi_m_top.cov_ndf;
    vlSelf->cov_baud2 = vlSymsp->TOP__spi_m_top.cov_baud2;
    vlSelf->cov_baudr = vlSymsp->TOP__spi_m_top.cov_baudr;
    vlSelf->cov_cfs = vlSymsp->TOP__spi_m_top.cov_cfs;
    vlSelf->cov_dfs = vlSymsp->TOP__spi_m_top.cov_dfs;
    vlSelf->cov_txd = vlSymsp->TOP__spi_m_top.cov_txd;
    vlSelf->cov_last_frame = vlSymsp->TOP__spi_m_top.cov_last_frame;
    vlSelf->cov_frame_cnt = vlSymsp->TOP__spi_m_top.cov_frame_cnt;
    vlSelf->cov_ctrl_cnt = vlSymsp->TOP__spi_m_top.cov_ctrl_cnt;
    vlSelf->cov_bit_cnt = vlSymsp->TOP__spi_m_top.cov_bit_cnt;
    vlSelf->cov_sclk_out = vlSymsp->TOP__spi_m_top.cov_sclk_out;
    vlSelf->cov_sclk_fe = vlSymsp->TOP__spi_m_top.cov_sclk_fe;
    vlSelf->cov_sclk_re = vlSymsp->TOP__spi_m_top.cov_sclk_re;
    vlSelf->cov_fsm_state = vlSymsp->TOP__spi_m_top.cov_fsm_state;
    vlSelf->cov_fsm_state_id = vlSymsp->TOP__spi_m_top.cov_fsm_state_id;
    vlSymsp->TOP__spi_m_top.SPEC_TXFTLR_DFLT = vlSelf->SPEC_TXFTLR_DFLT;
    vlSymsp->TOP__spi_m_top.rxd = vlSelf->rxd;
    vlSymsp->TOP__spi_m_top.rst_n = vlSelf->rst_n;
    vlSymsp->TOP__spi_m_top.clk = vlSelf->clk;
    vlSymsp->TOP__spi_m_top.reg_wdata = vlSelf->reg_wdata;
    vlSymsp->TOP__spi_m_top.reg_re = vlSelf->reg_re;
    vlSymsp->TOP__spi_m_top.reg_we = vlSelf->reg_we;
    vlSymsp->TOP__spi_m_top.SPEC_HOLD_SS = vlSelf->SPEC_HOLD_SS;
    vlSymsp->TOP__spi_m_top.ss_in_n = vlSelf->ss_in_n;
    vlSymsp->TOP__spi_m_top.SPEC_CFS_MIN = vlSelf->SPEC_CFS_MIN;
    vlSymsp->TOP__spi_m_top.reg_addr = vlSelf->reg_addr;
}

VL_INLINE_OPT void Vspi_m_top___024root___ico_sequent__TOP__1(Vspi_m_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_m_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_m_top___024root___ico_sequent__TOP__1\n"); );
    // Body
    vlSelf->cov_eff_dfs = vlSymsp->TOP__spi_m_top.cov_eff_dfs;
    vlSelf->cov_isr = vlSymsp->TOP__spi_m_top.cov_isr;
    vlSelf->cov_ss_in_n = vlSymsp->TOP__spi_m_top.cov_ss_in_n;
    vlSelf->cov_eff_cfs = vlSymsp->TOP__spi_m_top.cov_eff_cfs;
    vlSelf->ssi_txo_intr = vlSymsp->TOP__spi_m_top.ssi_txo_intr;
    vlSelf->ssi_rxu_intr = vlSymsp->TOP__spi_m_top.ssi_rxu_intr;
    vlSelf->ssi_rxf_intr = vlSymsp->TOP__spi_m_top.ssi_rxf_intr;
    vlSelf->ssi_rxo_intr = vlSymsp->TOP__spi_m_top.ssi_rxo_intr;
    vlSelf->ssi_txe_intr = vlSymsp->TOP__spi_m_top.ssi_txe_intr;
    vlSelf->ssi_mst_intr = vlSymsp->TOP__spi_m_top.ssi_mst_intr;
    vlSelf->cov_ss_active = vlSymsp->TOP__spi_m_top.cov_ss_active;
    vlSelf->cov_f_done = vlSymsp->TOP__spi_m_top.cov_f_done;
    vlSelf->cov_x_done = vlSymsp->TOP__spi_m_top.cov_x_done;
    vlSelf->cov_c_done = vlSymsp->TOP__spi_m_top.cov_c_done;
    vlSelf->reg_rdata = vlSymsp->TOP__spi_m_top.reg_rdata;
    vlSelf->cov_ssi_txe_intr = vlSymsp->TOP__spi_m_top.cov_ssi_txe_intr;
    vlSelf->cov_ssi_mst_intr = vlSymsp->TOP__spi_m_top.cov_ssi_mst_intr;
    vlSelf->cov_rx_underflow = vlSymsp->TOP__spi_m_top.cov_rx_underflow;
    vlSelf->cov_rx_overflow = vlSymsp->TOP__spi_m_top.cov_rx_overflow;
    vlSelf->cov_s3 = vlSymsp->TOP__spi_m_top.cov_s3;
    vlSelf->cov_tx_overflow = vlSymsp->TOP__spi_m_top.cov_tx_overflow;
    vlSelf->cov_rx_shift_en = vlSymsp->TOP__spi_m_top.cov_rx_shift_en;
    vlSelf->cov_tx_shift_en = vlSymsp->TOP__spi_m_top.cov_tx_shift_en;
    vlSelf->cov_sclk_mask = vlSymsp->TOP__spi_m_top.cov_sclk_mask;
    vlSelf->cov_load_rx_buf = vlSymsp->TOP__spi_m_top.cov_load_rx_buf;
    vlSelf->cov_load_tx_buffer = vlSymsp->TOP__spi_m_top.cov_load_tx_buffer;
    vlSelf->cov_load_tx_shift = vlSymsp->TOP__spi_m_top.cov_load_tx_shift;
}

void Vspi_m_top_spi_m_top___ico_sequent__TOP__spi_m_top__0(Vspi_m_top_spi_m_top* vlSelf);

void Vspi_m_top___024root___eval_ico(Vspi_m_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_m_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_m_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vspi_m_top___024root___ico_sequent__TOP__0(vlSelf);
        Vspi_m_top_spi_m_top___ico_sequent__TOP__spi_m_top__0((&vlSymsp->TOP__spi_m_top));
        Vspi_m_top___024root___ico_sequent__TOP__1(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_m_top___024root___dump_triggers__act(Vspi_m_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vspi_m_top___024root___eval_triggers__act(Vspi_m_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_m_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_m_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSymsp->TOP__spi_m_top.clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_m_top__clk__0))) 
                                     | ((~ (IData)(vlSymsp->TOP__spi_m_top.rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_m_top__rst_n__0))));
    vlSelf->__Vtrigprevexpr___TOP__spi_m_top__clk__0 
        = vlSymsp->TOP__spi_m_top.clk;
    vlSelf->__Vtrigprevexpr___TOP__spi_m_top__rst_n__0 
        = vlSymsp->TOP__spi_m_top.rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspi_m_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vspi_m_top___024root___nba_sequent__TOP__0(Vspi_m_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_m_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_m_top___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->txd = vlSymsp->TOP__spi_m_top.txd;
    vlSelf->sclk_out = vlSymsp->TOP__spi_m_top.sclk_out;
    vlSelf->ss_n = vlSymsp->TOP__spi_m_top.ss_n;
    vlSelf->cov_rx_data = vlSymsp->TOP__spi_m_top.cov_rx_data;
    vlSelf->cov_rx_level = vlSymsp->TOP__spi_m_top.cov_rx_level;
    vlSelf->cov_rx_empty = vlSymsp->TOP__spi_m_top.cov_rx_empty;
    vlSelf->cov_rx_full = vlSymsp->TOP__spi_m_top.cov_rx_full;
    vlSelf->cov_frame_cnt = vlSymsp->TOP__spi_m_top.cov_frame_cnt;
    vlSelf->cov_tx_full = vlSymsp->TOP__spi_m_top.cov_tx_full;
    vlSelf->cov_tx_level = vlSymsp->TOP__spi_m_top.cov_tx_level;
    vlSelf->cov_tx_empty = vlSymsp->TOP__spi_m_top.cov_tx_empty;
    vlSelf->cov_hold_ss_cnt = vlSymsp->TOP__spi_m_top.cov_hold_ss_cnt;
    vlSelf->cov_rx_push = vlSymsp->TOP__spi_m_top.cov_rx_push;
    vlSelf->cov_ser = vlSymsp->TOP__spi_m_top.cov_ser;
    vlSelf->ssi_busy = vlSymsp->TOP__spi_m_top.ssi_busy;
    vlSelf->cov_s2 = vlSymsp->TOP__spi_m_top.cov_s2;
    vlSelf->cov_spi1_control = vlSymsp->TOP__spi_m_top.cov_spi1_control;
    vlSelf->cov_txftlr = vlSymsp->TOP__spi_m_top.cov_txftlr;
    vlSelf->cov_txd = vlSymsp->TOP__spi_m_top.cov_txd;
    vlSelf->cov_bit_cnt = vlSymsp->TOP__spi_m_top.cov_bit_cnt;
    vlSelf->cov_ssi_sleep = vlSymsp->TOP__spi_m_top.cov_ssi_sleep;
    vlSelf->cov_ndf = vlSymsp->TOP__spi_m_top.cov_ndf;
    vlSelf->cov_sclk_out = vlSymsp->TOP__spi_m_top.cov_sclk_out;
    vlSelf->cov_mwcr = vlSymsp->TOP__spi_m_top.cov_mwcr;
    vlSelf->cov_sclk_fe = vlSymsp->TOP__spi_m_top.cov_sclk_fe;
    vlSelf->cov_sclk_re = vlSymsp->TOP__spi_m_top.cov_sclk_re;
    vlSelf->cov_start_xfer = vlSymsp->TOP__spi_m_top.cov_start_xfer;
    vlSelf->cov_s0 = vlSymsp->TOP__spi_m_top.cov_s0;
    vlSelf->cov_ctrl_cnt = vlSymsp->TOP__spi_m_top.cov_ctrl_cnt;
    vlSelf->cov_spi0_control = vlSymsp->TOP__spi_m_top.cov_spi0_control;
    vlSelf->cov_last_frame = vlSymsp->TOP__spi_m_top.cov_last_frame;
    vlSelf->cov_ssi_busy = vlSymsp->TOP__spi_m_top.cov_ssi_busy;
    vlSelf->cov_imr = vlSymsp->TOP__spi_m_top.cov_imr;
    vlSelf->cov_tx_pop = vlSymsp->TOP__spi_m_top.cov_tx_pop;
    vlSelf->cov_fsm_busy = vlSymsp->TOP__spi_m_top.cov_fsm_busy;
    vlSelf->cov_fsm_sleep = vlSymsp->TOP__spi_m_top.cov_fsm_sleep;
    vlSelf->cov_s1 = vlSymsp->TOP__spi_m_top.cov_s1;
    vlSelf->cov_baud2 = vlSymsp->TOP__spi_m_top.cov_baud2;
    vlSelf->cov_fsm_state_id = vlSymsp->TOP__spi_m_top.cov_fsm_state_id;
    vlSelf->cov_fsm_state = vlSymsp->TOP__spi_m_top.cov_fsm_state;
    vlSelf->cov_scpol = vlSymsp->TOP__spi_m_top.cov_scpol;
    vlSelf->cov_slv_oe = vlSymsp->TOP__spi_m_top.cov_slv_oe;
    vlSelf->cov_srl_test = vlSymsp->TOP__spi_m_top.cov_srl_test;
    vlSelf->cov_ss_tgl_en = vlSymsp->TOP__spi_m_top.cov_ss_tgl_en;
    vlSelf->cov_cfs = vlSymsp->TOP__spi_m_top.cov_cfs;
    vlSelf->cov_dfs = vlSymsp->TOP__spi_m_top.cov_dfs;
    vlSelf->cov_tmod = vlSymsp->TOP__spi_m_top.cov_tmod;
    vlSelf->cov_scph = vlSymsp->TOP__spi_m_top.cov_scph;
    vlSelf->cov_frf = vlSymsp->TOP__spi_m_top.cov_frf;
    vlSelf->cov_multi_mst_sync = vlSymsp->TOP__spi_m_top.cov_multi_mst_sync;
    vlSelf->cov_baudr = vlSymsp->TOP__spi_m_top.cov_baudr;
    vlSelf->cov_eff_dfs = vlSymsp->TOP__spi_m_top.cov_eff_dfs;
    vlSelf->cov_risr = vlSymsp->TOP__spi_m_top.cov_risr;
    vlSelf->cov_ss_active = vlSymsp->TOP__spi_m_top.cov_ss_active;
    vlSelf->cov_f_done = vlSymsp->TOP__spi_m_top.cov_f_done;
    vlSelf->cov_x_done = vlSymsp->TOP__spi_m_top.cov_x_done;
    vlSelf->cov_isr = vlSymsp->TOP__spi_m_top.cov_isr;
    vlSelf->ssi_txo_intr = vlSymsp->TOP__spi_m_top.ssi_txo_intr;
    vlSelf->ssi_rxu_intr = vlSymsp->TOP__spi_m_top.ssi_rxu_intr;
    vlSelf->ssi_rxf_intr = vlSymsp->TOP__spi_m_top.ssi_rxf_intr;
    vlSelf->ssi_rxo_intr = vlSymsp->TOP__spi_m_top.ssi_rxo_intr;
    vlSelf->ssi_txe_intr = vlSymsp->TOP__spi_m_top.ssi_txe_intr;
    vlSelf->ssi_mst_intr = vlSymsp->TOP__spi_m_top.ssi_mst_intr;
    vlSelf->cov_s3 = vlSymsp->TOP__spi_m_top.cov_s3;
    vlSelf->cov_ssi_txe_intr = vlSymsp->TOP__spi_m_top.cov_ssi_txe_intr;
    vlSelf->cov_ssi_mst_intr = vlSymsp->TOP__spi_m_top.cov_ssi_mst_intr;
    vlSelf->cov_rx_shift_en = vlSymsp->TOP__spi_m_top.cov_rx_shift_en;
    vlSelf->cov_tx_shift_en = vlSymsp->TOP__spi_m_top.cov_tx_shift_en;
    vlSelf->cov_load_rx_buf = vlSymsp->TOP__spi_m_top.cov_load_rx_buf;
    vlSelf->cov_load_tx_buffer = vlSymsp->TOP__spi_m_top.cov_load_tx_buffer;
    vlSelf->cov_load_tx_shift = vlSymsp->TOP__spi_m_top.cov_load_tx_shift;
}

VL_INLINE_OPT void Vspi_m_top___024root___nba_sequent__TOP__1(Vspi_m_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_m_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_m_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->cov_eff_cfs = vlSymsp->TOP__spi_m_top.cov_eff_cfs;
    vlSelf->reg_rdata = vlSymsp->TOP__spi_m_top.reg_rdata;
    vlSelf->cov_c_done = vlSymsp->TOP__spi_m_top.cov_c_done;
    vlSelf->cov_rx_underflow = vlSymsp->TOP__spi_m_top.cov_rx_underflow;
    vlSelf->cov_rx_overflow = vlSymsp->TOP__spi_m_top.cov_rx_overflow;
    vlSelf->cov_tx_overflow = vlSymsp->TOP__spi_m_top.cov_tx_overflow;
    vlSelf->cov_sclk_mask = vlSymsp->TOP__spi_m_top.cov_sclk_mask;
}

void Vspi_m_top_spi_m_top___nba_sequent__TOP__spi_m_top__0(Vspi_m_top_spi_m_top* vlSelf);
void Vspi_m_top_spi_m_top___nba_sequent__TOP__spi_m_top__1(Vspi_m_top_spi_m_top* vlSelf);

void Vspi_m_top___024root___eval_nba(Vspi_m_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_m_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_m_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_m_top_spi_m_top___nba_sequent__TOP__spi_m_top__0((&vlSymsp->TOP__spi_m_top));
        Vspi_m_top___024root___nba_sequent__TOP__0(vlSelf);
        Vspi_m_top_spi_m_top___nba_sequent__TOP__spi_m_top__1((&vlSymsp->TOP__spi_m_top));
        Vspi_m_top___024root___nba_sequent__TOP__1(vlSelf);
    }
}
