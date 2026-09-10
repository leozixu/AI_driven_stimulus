// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_xfer_top.h for the primary calling header

#include "Vspi_xfer_top__pch.h"
#include "Vspi_xfer_top__Syms.h"
#include "Vspi_xfer_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_xfer_top___024root___dump_triggers__ico(Vspi_xfer_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vspi_xfer_top___024root___eval_triggers__ico(Vspi_xfer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_xfer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_xfer_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspi_xfer_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vspi_xfer_top___024root___ico_sequent__TOP__0(Vspi_xfer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_xfer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_xfer_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->cov_rx_data = vlSymsp->TOP__spi_xfer_top.cov_rx_data;
    vlSelf->cov_s2 = vlSymsp->TOP__spi_xfer_top.cov_s2;
    vlSelf->cov_s1 = vlSymsp->TOP__spi_xfer_top.cov_s1;
    vlSelf->cov_s0 = vlSymsp->TOP__spi_xfer_top.cov_s0;
    vlSelf->cov_hold_ss_cnt = vlSymsp->TOP__spi_xfer_top.cov_hold_ss_cnt;
    vlSelf->cov_rx_full = vlSymsp->TOP__spi_xfer_top.cov_rx_full;
    vlSelf->cov_rx_empty = vlSymsp->TOP__spi_xfer_top.cov_rx_empty;
    vlSelf->cov_tx_full = vlSymsp->TOP__spi_xfer_top.cov_tx_full;
    vlSelf->cov_tx_empty = vlSymsp->TOP__spi_xfer_top.cov_tx_empty;
    vlSelf->cov_rx_level = vlSymsp->TOP__spi_xfer_top.cov_rx_level;
    vlSelf->cov_tx_level = vlSymsp->TOP__spi_xfer_top.cov_tx_level;
    vlSelf->cov_ser = vlSymsp->TOP__spi_xfer_top.cov_ser;
    vlSelf->cov_ss_tgl_en = vlSymsp->TOP__spi_xfer_top.cov_ss_tgl_en;
    vlSelf->cov_srl_test = vlSymsp->TOP__spi_xfer_top.cov_srl_test;
    vlSelf->cov_scpol = vlSymsp->TOP__spi_xfer_top.cov_scpol;
    vlSelf->cov_scph = vlSymsp->TOP__spi_xfer_top.cov_scph;
    vlSelf->cov_frf = vlSymsp->TOP__spi_xfer_top.cov_frf;
    vlSelf->cov_tmod = vlSymsp->TOP__spi_xfer_top.cov_tmod;
    vlSelf->cov_ndf = vlSymsp->TOP__spi_xfer_top.cov_ndf;
    vlSelf->cov_baud2 = vlSymsp->TOP__spi_xfer_top.cov_baud2;
    vlSelf->cov_baudr = vlSymsp->TOP__spi_xfer_top.cov_baudr;
    vlSelf->cov_dfs = vlSymsp->TOP__spi_xfer_top.cov_dfs;
    vlSelf->cov_txd = vlSymsp->TOP__spi_xfer_top.cov_txd;
    vlSelf->cov_xfer_complete = vlSymsp->TOP__spi_xfer_top.cov_xfer_complete;
    vlSelf->cov_ss_active = vlSymsp->TOP__spi_xfer_top.cov_ss_active;
    vlSelf->cov_last_frame = vlSymsp->TOP__spi_xfer_top.cov_last_frame;
    vlSelf->cov_frame_cnt = vlSymsp->TOP__spi_xfer_top.cov_frame_cnt;
    vlSelf->cov_bit_cnt = vlSymsp->TOP__spi_xfer_top.cov_bit_cnt;
    vlSelf->cov_sclk_out = vlSymsp->TOP__spi_xfer_top.cov_sclk_out;
    vlSelf->cov_sclk_fe = vlSymsp->TOP__spi_xfer_top.cov_sclk_fe;
    vlSelf->cov_sclk_re = vlSymsp->TOP__spi_xfer_top.cov_sclk_re;
    vlSelf->cov_fsm_state_id = vlSymsp->TOP__spi_xfer_top.cov_fsm_state_id;
    vlSelf->cov_fsm_state = vlSymsp->TOP__spi_xfer_top.cov_fsm_state;
    vlSymsp->TOP__spi_xfer_top.reg_wdata = vlSelf->reg_wdata;
    vlSymsp->TOP__spi_xfer_top.rxd = vlSelf->rxd;
    vlSymsp->TOP__spi_xfer_top.rst_n = vlSelf->rst_n;
    vlSymsp->TOP__spi_xfer_top.clk = vlSelf->clk;
    vlSymsp->TOP__spi_xfer_top.reg_re = vlSelf->reg_re;
    vlSymsp->TOP__spi_xfer_top.reg_we = vlSelf->reg_we;
    vlSymsp->TOP__spi_xfer_top.reg_addr = vlSelf->reg_addr;
    vlSymsp->TOP__spi_xfer_top.SPEC_HOLD_SS = vlSelf->SPEC_HOLD_SS;
    vlSymsp->TOP__spi_xfer_top.ss_in_n = vlSelf->ss_in_n;
    vlSymsp->TOP__spi_xfer_top.SPEC_DFS_MIN = vlSelf->SPEC_DFS_MIN;
}

VL_INLINE_OPT void Vspi_xfer_top___024root___ico_sequent__TOP__1(Vspi_xfer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_xfer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_xfer_top___024root___ico_sequent__TOP__1\n"); );
    // Body
    vlSelf->cov_x_done = vlSymsp->TOP__spi_xfer_top.cov_x_done;
    vlSelf->reg_rdata = vlSymsp->TOP__spi_xfer_top.reg_rdata;
    vlSelf->cov_ss_in_n = vlSymsp->TOP__spi_xfer_top.cov_ss_in_n;
    vlSelf->cov_eff_dfs = vlSymsp->TOP__spi_xfer_top.cov_eff_dfs;
    vlSelf->cov_rx_shift_en = vlSymsp->TOP__spi_xfer_top.cov_rx_shift_en;
    vlSelf->cov_tx_shift_en = vlSymsp->TOP__spi_xfer_top.cov_tx_shift_en;
    vlSelf->cov_load_rx_buf = vlSymsp->TOP__spi_xfer_top.cov_load_rx_buf;
    vlSelf->cov_sclk_mask = vlSymsp->TOP__spi_xfer_top.cov_sclk_mask;
    vlSelf->cov_load_tx_shift = vlSymsp->TOP__spi_xfer_top.cov_load_tx_shift;
}

void Vspi_xfer_top_spi_xfer_top___ico_sequent__TOP__spi_xfer_top__0(Vspi_xfer_top_spi_xfer_top* vlSelf);

void Vspi_xfer_top___024root___eval_ico(Vspi_xfer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_xfer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_xfer_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vspi_xfer_top___024root___ico_sequent__TOP__0(vlSelf);
        Vspi_xfer_top_spi_xfer_top___ico_sequent__TOP__spi_xfer_top__0((&vlSymsp->TOP__spi_xfer_top));
        Vspi_xfer_top___024root___ico_sequent__TOP__1(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_xfer_top___024root___dump_triggers__act(Vspi_xfer_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vspi_xfer_top___024root___eval_triggers__act(Vspi_xfer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_xfer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_xfer_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSymsp->TOP__spi_xfer_top.clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_xfer_top__clk__0))) 
                                     | ((~ (IData)(vlSymsp->TOP__spi_xfer_top.rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_xfer_top__rst_n__0))));
    vlSelf->__Vtrigprevexpr___TOP__spi_xfer_top__clk__0 
        = vlSymsp->TOP__spi_xfer_top.clk;
    vlSelf->__Vtrigprevexpr___TOP__spi_xfer_top__rst_n__0 
        = vlSymsp->TOP__spi_xfer_top.rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspi_xfer_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vspi_xfer_top___024root___nba_sequent__TOP__0(Vspi_xfer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_xfer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_xfer_top___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->txd = vlSymsp->TOP__spi_xfer_top.txd;
    vlSelf->sclk_out = vlSymsp->TOP__spi_xfer_top.sclk_out;
    vlSelf->ss_n = vlSymsp->TOP__spi_xfer_top.ss_n;
    vlSelf->cov_rx_data = vlSymsp->TOP__spi_xfer_top.cov_rx_data;
    vlSelf->cov_rx_level = vlSymsp->TOP__spi_xfer_top.cov_rx_level;
    vlSelf->cov_rx_empty = vlSymsp->TOP__spi_xfer_top.cov_rx_empty;
    vlSelf->cov_rx_full = vlSymsp->TOP__spi_xfer_top.cov_rx_full;
    vlSelf->cov_bit_cnt = vlSymsp->TOP__spi_xfer_top.cov_bit_cnt;
    vlSelf->cov_frame_cnt = vlSymsp->TOP__spi_xfer_top.cov_frame_cnt;
    vlSelf->cov_tx_level = vlSymsp->TOP__spi_xfer_top.cov_tx_level;
    vlSelf->cov_tx_full = vlSymsp->TOP__spi_xfer_top.cov_tx_full;
    vlSelf->cov_tx_empty = vlSymsp->TOP__spi_xfer_top.cov_tx_empty;
    vlSelf->cov_hold_ss_cnt = vlSymsp->TOP__spi_xfer_top.cov_hold_ss_cnt;
    vlSelf->cov_s1 = vlSymsp->TOP__spi_xfer_top.cov_s1;
    vlSelf->cov_s0 = vlSymsp->TOP__spi_xfer_top.cov_s0;
    vlSelf->cov_s2 = vlSymsp->TOP__spi_xfer_top.cov_s2;
    vlSelf->ssi_busy = vlSymsp->TOP__spi_xfer_top.ssi_busy;
    vlSelf->cov_start_xfer = vlSymsp->TOP__spi_xfer_top.cov_start_xfer;
    vlSelf->cov_txd = vlSymsp->TOP__spi_xfer_top.cov_txd;
    vlSelf->cov_sclk_fe = vlSymsp->TOP__spi_xfer_top.cov_sclk_fe;
    vlSelf->cov_sclk_re = vlSymsp->TOP__spi_xfer_top.cov_sclk_re;
    vlSelf->cov_last_frame = vlSymsp->TOP__spi_xfer_top.cov_last_frame;
    vlSelf->cov_sclk_out = vlSymsp->TOP__spi_xfer_top.cov_sclk_out;
    vlSelf->cov_ss_active = vlSymsp->TOP__spi_xfer_top.cov_ss_active;
    vlSelf->cov_fsm_state_id = vlSymsp->TOP__spi_xfer_top.cov_fsm_state_id;
    vlSelf->cov_xfer_complete = vlSymsp->TOP__spi_xfer_top.cov_xfer_complete;
    vlSelf->cov_fsm_state = vlSymsp->TOP__spi_xfer_top.cov_fsm_state;
    vlSelf->cov_ser = vlSymsp->TOP__spi_xfer_top.cov_ser;
    vlSelf->cov_baudr = vlSymsp->TOP__spi_xfer_top.cov_baudr;
    vlSelf->cov_baud2 = vlSymsp->TOP__spi_xfer_top.cov_baud2;
    vlSelf->cov_ndf = vlSymsp->TOP__spi_xfer_top.cov_ndf;
    vlSelf->cov_scpol = vlSymsp->TOP__spi_xfer_top.cov_scpol;
    vlSelf->cov_srl_test = vlSymsp->TOP__spi_xfer_top.cov_srl_test;
    vlSelf->cov_ss_tgl_en = vlSymsp->TOP__spi_xfer_top.cov_ss_tgl_en;
    vlSelf->cov_dfs = vlSymsp->TOP__spi_xfer_top.cov_dfs;
    vlSelf->cov_tmod = vlSymsp->TOP__spi_xfer_top.cov_tmod;
    vlSelf->cov_scph = vlSymsp->TOP__spi_xfer_top.cov_scph;
    vlSelf->cov_frf = vlSymsp->TOP__spi_xfer_top.cov_frf;
    vlSelf->cov_x_done = vlSymsp->TOP__spi_xfer_top.cov_x_done;
    vlSelf->cov_rx_shift_en = vlSymsp->TOP__spi_xfer_top.cov_rx_shift_en;
    vlSelf->cov_tx_shift_en = vlSymsp->TOP__spi_xfer_top.cov_tx_shift_en;
    vlSelf->cov_load_rx_buf = vlSymsp->TOP__spi_xfer_top.cov_load_rx_buf;
}

VL_INLINE_OPT void Vspi_xfer_top___024root___nba_sequent__TOP__1(Vspi_xfer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_xfer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_xfer_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->cov_eff_dfs = vlSymsp->TOP__spi_xfer_top.cov_eff_dfs;
    vlSelf->reg_rdata = vlSymsp->TOP__spi_xfer_top.reg_rdata;
    vlSelf->cov_sclk_mask = vlSymsp->TOP__spi_xfer_top.cov_sclk_mask;
    vlSelf->cov_load_tx_shift = vlSymsp->TOP__spi_xfer_top.cov_load_tx_shift;
}

void Vspi_xfer_top_spi_xfer_top___nba_sequent__TOP__spi_xfer_top__0(Vspi_xfer_top_spi_xfer_top* vlSelf);
void Vspi_xfer_top_spi_xfer_top___nba_sequent__TOP__spi_xfer_top__1(Vspi_xfer_top_spi_xfer_top* vlSelf);

void Vspi_xfer_top___024root___eval_nba(Vspi_xfer_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_xfer_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_xfer_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_xfer_top_spi_xfer_top___nba_sequent__TOP__spi_xfer_top__0((&vlSymsp->TOP__spi_xfer_top));
        Vspi_xfer_top___024root___nba_sequent__TOP__0(vlSelf);
        Vspi_xfer_top_spi_xfer_top___nba_sequent__TOP__spi_xfer_top__1((&vlSymsp->TOP__spi_xfer_top));
        Vspi_xfer_top___024root___nba_sequent__TOP__1(vlSelf);
    }
}
