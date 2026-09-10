// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_m_top.h for the primary calling header

#include "Vspi_m_top__pch.h"
#include "Vspi_m_top___024root.h"

VL_ATTR_COLD void Vspi_m_top___024root___eval_static(Vspi_m_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_m_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_m_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vspi_m_top___024root___eval_final(Vspi_m_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_m_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_m_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_m_top___024root___dump_triggers__stl(Vspi_m_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vspi_m_top___024root___eval_phase__stl(Vspi_m_top___024root* vlSelf);

VL_ATTR_COLD void Vspi_m_top___024root___eval_settle(Vspi_m_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_m_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_m_top___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vspi_m_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/workspace/spi_master_public/spi_master_public/verilator_harness/../dut/spi_m_top.v", 7, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vspi_m_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_m_top___024root___dump_triggers__stl(Vspi_m_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_m_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_m_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vspi_m_top___024root___eval_triggers__stl(Vspi_m_top___024root* vlSelf);
VL_ATTR_COLD void Vspi_m_top___024root___eval_stl(Vspi_m_top___024root* vlSelf);

VL_ATTR_COLD bool Vspi_m_top___024root___eval_phase__stl(Vspi_m_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_m_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_m_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vspi_m_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vspi_m_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_m_top___024root___dump_triggers__ico(Vspi_m_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_m_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_m_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_m_top___024root___dump_triggers__act(Vspi_m_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_m_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_m_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge spi_m_top.clk or negedge spi_m_top.rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_m_top___024root___dump_triggers__nba(Vspi_m_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_m_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_m_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge spi_m_top.clk or negedge spi_m_top.rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vspi_m_top___024root___ctor_var_reset(Vspi_m_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_m_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_m_top___024root___ctor_var_reset\n"); );
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
    vlSelf->__Vtrigprevexpr___TOP__spi_m_top__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__spi_m_top__rst_n__0 = VL_RAND_RESET_I(1);
}
