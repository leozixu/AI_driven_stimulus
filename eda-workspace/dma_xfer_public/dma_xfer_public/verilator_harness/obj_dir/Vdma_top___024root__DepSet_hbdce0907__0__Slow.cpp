// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma_top.h for the primary calling header

#include "Vdma_top__pch.h"
#include "Vdma_top___024root.h"

VL_ATTR_COLD void Vdma_top___024root___eval_static(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vdma_top___024root___eval_initial__TOP(Vdma_top___024root* vlSelf);

VL_ATTR_COLD void Vdma_top___024root___eval_initial(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___eval_initial\n"); );
    // Body
    Vdma_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vdma_top___024root___eval_initial__TOP(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->dma_top__DOT__ord0 = 0U;
    vlSelf->dma_top__DOT__ord1 = 1U;
    vlSelf->dma_top__DOT__ord2 = 2U;
    vlSelf->dma_top__DOT__ord3 = 3U;
    vlSelf->dma_top__DOT__u_arb__DOT__ord0 = 0U;
    vlSelf->dma_top__DOT__u_arb__DOT__ord1 = 1U;
    vlSelf->dma_top__DOT__u_arb__DOT__ord2 = 2U;
    vlSelf->dma_top__DOT__u_arb__DOT__ord3 = 3U;
}

VL_ATTR_COLD void Vdma_top___024root___eval_final(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdma_top___024root___dump_triggers__stl(Vdma_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdma_top___024root___eval_phase__stl(Vdma_top___024root* vlSelf);

VL_ATTR_COLD void Vdma_top___024root___eval_settle(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___eval_settle\n"); );
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
            Vdma_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/Race/workspace/eda-workspace/dma_xfer_public/dma_xfer_public/verilator_harness/../dut/dma_top.v", 31, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdma_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdma_top___024root___dump_triggers__stl(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdma_top___024root___stl_sequent__TOP__0(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ dma_top__DOT____VdfgTmp_h37f2adaf__0;
    dma_top__DOT____VdfgTmp_h37f2adaf__0 = 0;
    CData/*0:0*/ dma_top__DOT____VdfgTmp_h319435ed__0;
    dma_top__DOT____VdfgTmp_h319435ed__0 = 0;
    CData/*0:0*/ dma_top__DOT____VdfgTmp_h31cb386d__0;
    dma_top__DOT____VdfgTmp_h31cb386d__0 = 0;
    CData/*0:0*/ dma_top__DOT____VdfgTmp_h319ce109__0;
    dma_top__DOT____VdfgTmp_h319ce109__0 = 0;
    // Body
    vlSelf->dma_top__DOT__conf_ch = vlSelf->conf_ch;
    vlSelf->dma_top__DOT__conf_wr = vlSelf->conf_wr;
    vlSelf->dma_top__DOT__conf_field = vlSelf->conf_field;
    vlSelf->dma_top__DOT__conf_data = vlSelf->conf_data;
    vlSelf->dma_top__DOT__start = vlSelf->start;
    vlSelf->dma_top__DOT__cov_arb_winner = vlSelf->cov_arb_winner;
    vlSelf->dma_top__DOT__cov_arb_valid = vlSelf->cov_arb_valid;
    vlSelf->dma_top__DOT__cov_arb_conflict = vlSelf->cov_arb_conflict;
    vlSelf->dma_top__DOT__cov_active_ch = vlSelf->cov_active_ch;
    vlSelf->dma_top__DOT__cov_dir = vlSelf->cov_dir;
    vlSelf->dma_top__DOT__cov_burst = vlSelf->cov_burst;
    vlSelf->dma_top__DOT__cov_saddr = vlSelf->cov_saddr;
    vlSelf->dma_top__DOT__cov_daddr = vlSelf->cov_daddr;
    vlSelf->dma_top__DOT__cov_len = vlSelf->cov_len;
    vlSelf->dma_top__DOT__cov_hold = vlSelf->cov_hold;
    vlSelf->dma_top__DOT__cov_done_ok_valid = vlSelf->cov_done_ok_valid;
    vlSelf->dma_top__DOT__cov_done_class = vlSelf->cov_done_class;
    vlSelf->dma_top__DOT__cov_seq1 = vlSelf->cov_seq1;
    vlSelf->dma_top__DOT__cov_seq2 = vlSelf->cov_seq2;
    vlSelf->dma_top__DOT__cov_seq3 = vlSelf->cov_seq3;
    vlSelf->dma_top__DOT__cov_seq4 = vlSelf->cov_seq4;
    vlSelf->dma_top__DOT__cov_seq5 = vlSelf->cov_seq5;
    vlSelf->dma_top__DOT__cov_seq6 = vlSelf->cov_seq6;
    vlSelf->dma_top__DOT__cov_seq7 = vlSelf->cov_seq7;
    vlSelf->dma_top__DOT__cov_seq8 = vlSelf->cov_seq8;
    vlSelf->dma_top__DOT__cov_seq9 = vlSelf->cov_seq9;
    vlSelf->dma_top__DOT__cov_seq10 = vlSelf->cov_seq10;
    vlSelf->dma_top__DOT__cov_seq11 = vlSelf->cov_seq11;
    vlSelf->dma_top__DOT__cov_seq12 = vlSelf->cov_seq12;
    vlSelf->dma_top__DOT__w_ord0 = vlSelf->dma_top__DOT__ord0;
    vlSelf->dma_top__DOT__w_ord1 = vlSelf->dma_top__DOT__ord1;
    vlSelf->dma_top__DOT__w_ord2 = vlSelf->dma_top__DOT__ord2;
    vlSelf->dma_top__DOT__w_ord3 = vlSelf->dma_top__DOT__ord3;
    vlSelf->dma_top__DOT__u_arb__DOT__grant = vlSelf->dma_top__DOT__g;
    vlSelf->dma_top__DOT__u_arb__DOT__winner = vlSelf->dma_top__DOT__w;
    vlSelf->dma_top__DOT__got_any = (vlSelf->dma_top__DOT__got
                                     [3U] | (vlSelf->dma_top__DOT__got
                                             [2U] | 
                                             (vlSelf->dma_top__DOT__got
                                              [1U] 
                                              | vlSelf->dma_top__DOT__got
                                              [0U])));
    vlSelf->dma_top__DOT__any_hevt = ((vlSelf->dma_top__DOT__hevt
                                       [3U] << 3U) 
                                      | ((vlSelf->dma_top__DOT__hevt
                                          [2U] << 2U) 
                                         | ((vlSelf->dma_top__DOT__hevt
                                             [1U] << 1U) 
                                            | vlSelf->dma_top__DOT__hevt
                                            [0U])));
    vlSelf->dma_top__DOT__clk = vlSelf->clk;
    vlSelf->dma_top__DOT__rst_n = vlSelf->rst_n;
    vlSelf->cov_ch0_state = vlSelf->dma_top__DOT__fsm
        [0U];
    vlSelf->cov_ch1_state = vlSelf->dma_top__DOT__fsm
        [1U];
    vlSelf->cov_ch2_state = vlSelf->dma_top__DOT__fsm
        [2U];
    vlSelf->cov_ch3_state = vlSelf->dma_top__DOT__fsm
        [3U];
    vlSelf->dma_top__DOT__any_active_v = (((1U == vlSelf->dma_top__DOT__fsm
                                            [3U]) << 3U) 
                                          | (((1U == 
                                               vlSelf->dma_top__DOT__fsm
                                               [2U]) 
                                              << 2U) 
                                             | (((1U 
                                                  == 
                                                  vlSelf->dma_top__DOT__fsm
                                                  [1U]) 
                                                 << 1U) 
                                                | (1U 
                                                   == 
                                                   vlSelf->dma_top__DOT__fsm
                                                   [0U]))));
    vlSelf->dma_top__DOT__cfg_write_ok = ((IData)(vlSelf->conf_wr) 
                                          & ((~ (vlSelf->dma_top__DOT__got
                                                 [vlSelf->conf_ch] 
                                                 | (IData)(vlSelf->cov_hold))) 
                                             & (0U 
                                                == 
                                                vlSelf->dma_top__DOT__fsm
                                                [vlSelf->conf_ch])));
    vlSelf->dma_top__DOT__any_done_v = ((((~ vlSelf->dma_top__DOT__got
                                           [3U]) & 
                                          (2U == vlSelf->dma_top__DOT__fsm
                                           [3U])) << 3U) 
                                        | ((((~ vlSelf->dma_top__DOT__got
                                              [2U]) 
                                             & (2U 
                                                == 
                                                vlSelf->dma_top__DOT__fsm
                                                [2U])) 
                                            << 2U) 
                                           | ((((~ 
                                                 vlSelf->dma_top__DOT__got
                                                 [1U]) 
                                                & (2U 
                                                   == 
                                                   vlSelf->dma_top__DOT__fsm
                                                   [1U])) 
                                               << 1U) 
                                              | ((~ 
                                                  vlSelf->dma_top__DOT__got
                                                  [0U]) 
                                                 & (2U 
                                                    == 
                                                    vlSelf->dma_top__DOT__fsm
                                                    [0U])))));
    vlSelf->dma_top__DOT__start_rise2 = ((~ (IData)(vlSelf->dma_top__DOT__start_d2)) 
                                         & (IData)(vlSelf->start));
    vlSelf->dma_top__DOT__comp_dmode = (vlSelf->dma_top__DOT__hevt
                                        [0U] ? vlSelf->dma_top__DOT__dmode
                                        [0U] : (vlSelf->dma_top__DOT__hevt
                                                [1U]
                                                 ? 
                                                vlSelf->dma_top__DOT__dmode
                                                [1U]
                                                 : 
                                                (vlSelf->dma_top__DOT__hevt
                                                 [2U]
                                                  ? 
                                                 vlSelf->dma_top__DOT__dmode
                                                 [2U]
                                                  : 
                                                 vlSelf->dma_top__DOT__dmode
                                                 [3U])));
    dma_top__DOT____VdfgTmp_h37f2adaf__0 = (vlSelf->dma_top__DOT__got
                                            [3U] & 
                                            (1U == 
                                             vlSelf->dma_top__DOT__fsm
                                             [3U]));
    dma_top__DOT____VdfgTmp_h319435ed__0 = (vlSelf->dma_top__DOT__got
                                            [2U] & 
                                            (1U == 
                                             vlSelf->dma_top__DOT__fsm
                                             [2U]));
    dma_top__DOT____VdfgTmp_h31cb386d__0 = (vlSelf->dma_top__DOT__got
                                            [1U] & 
                                            (1U == 
                                             vlSelf->dma_top__DOT__fsm
                                             [1U]));
    dma_top__DOT____VdfgTmp_h319ce109__0 = (vlSelf->dma_top__DOT__got
                                            [0U] & 
                                            (1U == 
                                             vlSelf->dma_top__DOT__fsm
                                             [0U]));
    vlSelf->dma_top__DOT__u_arb__DOT__clk = vlSelf->dma_top__DOT__clk;
    vlSelf->dma_top__DOT__u_arb__DOT__rst_n = vlSelf->dma_top__DOT__rst_n;
    vlSelf->dma_top__DOT__cov_ch0_state = vlSelf->cov_ch0_state;
    vlSelf->dma_top__DOT__cov_ch1_state = vlSelf->cov_ch1_state;
    vlSelf->dma_top__DOT__cov_ch2_state = vlSelf->cov_ch2_state;
    vlSelf->dma_top__DOT__cov_ch3_state = vlSelf->cov_ch3_state;
    vlSelf->dma_top__DOT__a_any_active = (0U != (IData)(vlSelf->dma_top__DOT__any_active_v));
    vlSelf->dma_top__DOT__a_any_done = (0U != (IData)(vlSelf->dma_top__DOT__any_done_v));
    vlSelf->dma_top__DOT__a_any_start = (0U != (IData)(vlSelf->dma_top__DOT__start_rise2));
    vlSelf->dma_top__DOT__comp_correct = ((4U == (IData)(vlSelf->dma_top__DOT__comp_dmode)) 
                                          | ((3U == (IData)(vlSelf->dma_top__DOT__comp_dmode)) 
                                             | ((5U 
                                                 == (IData)(vlSelf->dma_top__DOT__comp_dmode)) 
                                                | (7U 
                                                   == (IData)(vlSelf->dma_top__DOT__comp_dmode)))));
    vlSelf->dma_top__DOT__arb_conflict_w = (1U < ((IData)(dma_top__DOT____VdfgTmp_h319ce109__0) 
                                                  + 
                                                  ((IData)(dma_top__DOT____VdfgTmp_h31cb386d__0) 
                                                   + 
                                                   ((IData)(dma_top__DOT____VdfgTmp_h319435ed__0) 
                                                    + (IData)(dma_top__DOT____VdfgTmp_h37f2adaf__0)))));
    vlSelf->dma_top__DOT__req = (((IData)(dma_top__DOT____VdfgTmp_h37f2adaf__0) 
                                  << 3U) | (((IData)(dma_top__DOT____VdfgTmp_h319435ed__0) 
                                             << 2U) 
                                            | (((IData)(dma_top__DOT____VdfgTmp_h31cb386d__0) 
                                                << 1U) 
                                               | (IData)(dma_top__DOT____VdfgTmp_h319ce109__0))));
    vlSelf->dma_top__DOT__req_nh = ((~ (- (IData)((IData)(vlSelf->cov_hold)))) 
                                    & (IData)(vlSelf->dma_top__DOT__req));
    vlSelf->dma_top__DOT__u_arb__DOT__req = vlSelf->dma_top__DOT__req_nh;
    vlSelf->dma_top__DOT__arb_valid = (0U != (IData)(vlSelf->dma_top__DOT__req_nh));
}

VL_ATTR_COLD void Vdma_top___024root___eval_stl(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vdma_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vdma_top___024root___eval_triggers__stl(Vdma_top___024root* vlSelf);

VL_ATTR_COLD bool Vdma_top___024root___eval_phase__stl(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdma_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vdma_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdma_top___024root___dump_triggers__ico(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vdma_top___024root___dump_triggers__act(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdma_top___024root___dump_triggers__nba(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdma_top___024root___ctor_var_reset(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->conf_ch = VL_RAND_RESET_I(2);
    vlSelf->conf_wr = VL_RAND_RESET_I(1);
    vlSelf->conf_field = VL_RAND_RESET_I(2);
    vlSelf->conf_data = VL_RAND_RESET_I(32);
    vlSelf->start = VL_RAND_RESET_I(4);
    vlSelf->cov_ch0_state = VL_RAND_RESET_I(2);
    vlSelf->cov_ch1_state = VL_RAND_RESET_I(2);
    vlSelf->cov_ch2_state = VL_RAND_RESET_I(2);
    vlSelf->cov_ch3_state = VL_RAND_RESET_I(2);
    vlSelf->cov_arb_winner = VL_RAND_RESET_I(2);
    vlSelf->cov_arb_valid = VL_RAND_RESET_I(1);
    vlSelf->cov_arb_conflict = VL_RAND_RESET_I(1);
    vlSelf->cov_active_ch = VL_RAND_RESET_I(2);
    vlSelf->cov_dir = VL_RAND_RESET_I(4);
    vlSelf->cov_burst = VL_RAND_RESET_I(3);
    vlSelf->cov_saddr = VL_RAND_RESET_I(32);
    vlSelf->cov_daddr = VL_RAND_RESET_I(32);
    vlSelf->cov_len = VL_RAND_RESET_I(16);
    vlSelf->cov_hold = VL_RAND_RESET_I(1);
    vlSelf->cov_done_ok_valid = VL_RAND_RESET_I(1);
    vlSelf->cov_done_class = VL_RAND_RESET_I(4);
    vlSelf->cov_seq1 = VL_RAND_RESET_I(1);
    vlSelf->cov_seq2 = VL_RAND_RESET_I(1);
    vlSelf->cov_seq3 = VL_RAND_RESET_I(1);
    vlSelf->cov_seq4 = VL_RAND_RESET_I(1);
    vlSelf->cov_seq5 = VL_RAND_RESET_I(1);
    vlSelf->cov_seq6 = VL_RAND_RESET_I(1);
    vlSelf->cov_seq7 = VL_RAND_RESET_I(1);
    vlSelf->cov_seq8 = VL_RAND_RESET_I(1);
    vlSelf->cov_seq9 = VL_RAND_RESET_I(1);
    vlSelf->cov_seq10 = VL_RAND_RESET_I(1);
    vlSelf->cov_seq11 = VL_RAND_RESET_I(1);
    vlSelf->cov_seq12 = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__conf_ch = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__conf_wr = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__conf_field = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__conf_data = VL_RAND_RESET_I(32);
    vlSelf->dma_top__DOT__start = VL_RAND_RESET_I(4);
    vlSelf->dma_top__DOT__cov_ch0_state = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__cov_ch1_state = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__cov_ch2_state = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__cov_ch3_state = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__cov_arb_winner = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__cov_arb_valid = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__cov_arb_conflict = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__cov_active_ch = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__cov_dir = VL_RAND_RESET_I(4);
    vlSelf->dma_top__DOT__cov_burst = VL_RAND_RESET_I(3);
    vlSelf->dma_top__DOT__cov_saddr = VL_RAND_RESET_I(32);
    vlSelf->dma_top__DOT__cov_daddr = VL_RAND_RESET_I(32);
    vlSelf->dma_top__DOT__cov_len = VL_RAND_RESET_I(16);
    vlSelf->dma_top__DOT__cov_hold = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__cov_done_ok_valid = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__cov_done_class = VL_RAND_RESET_I(4);
    vlSelf->dma_top__DOT__cov_seq1 = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__cov_seq2 = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__cov_seq3 = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__cov_seq4 = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__cov_seq5 = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__cov_seq6 = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__cov_seq7 = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__cov_seq8 = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__cov_seq9 = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__cov_seq10 = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__cov_seq11 = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__cov_seq12 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dma_top__DOT__saddr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dma_top__DOT__daddr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dma_top__DOT__len[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dma_top__DOT__dmode[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dma_top__DOT__burst[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dma_top__DOT__fsm[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dma_top__DOT__remain[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dma_top__DOT__got[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dma_top__DOT__hevt[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->dma_top__DOT__start_d = VL_RAND_RESET_I(4);
    vlSelf->dma_top__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->dma_top__DOT__bi = VL_RAND_RESET_I(32);
    vlSelf->dma_top__DOT__req = VL_RAND_RESET_I(4);
    vlSelf->dma_top__DOT__req_nh = VL_RAND_RESET_I(4);
    vlSelf->dma_top__DOT__arb_valid = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__w_ord0 = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__w_ord1 = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__w_ord2 = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__w_ord3 = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__ord0 = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__ord1 = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__ord2 = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__ord3 = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__g = VL_RAND_RESET_I(4);
    vlSelf->dma_top__DOT__w = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__hld_state = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__hld_cnt = VL_RAND_RESET_I(16);
    vlSelf->dma_top__DOT__hld_class = VL_RAND_RESET_I(4);
    vlSelf->dma_top__DOT__any_hevt = VL_RAND_RESET_I(4);
    vlSelf->dma_top__DOT__comp_dmode = VL_RAND_RESET_I(4);
    vlSelf->dma_top__DOT__comp_correct = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__arb_conflict_w = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__cfg_write_ok = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__start_d2 = VL_RAND_RESET_I(4);
    vlSelf->dma_top__DOT__start_rise2 = VL_RAND_RESET_I(4);
    vlSelf->dma_top__DOT__s1_cfg = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__s1_start = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__s1_active = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__s3_started = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__s3_cfgs = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__hold_prev = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__conf_cnt = VL_RAND_RESET_I(3);
    vlSelf->dma_top__DOT__arb_cnt = VL_RAND_RESET_I(5);
    vlSelf->dma_top__DOT__idle_cnt = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dma_top__DOT__a2d[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dma_top__DOT__acont[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->dma_top__DOT__hold_cnt_internal = VL_RAND_RESET_I(5);
    vlSelf->dma_top__DOT__pw = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__pw_valid = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__any_active_v = VL_RAND_RESET_I(4);
    vlSelf->dma_top__DOT__any_done_v = VL_RAND_RESET_I(4);
    vlSelf->dma_top__DOT__got_any = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__a_any_start = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__a_any_active = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__a_any_done = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__qi = VL_RAND_RESET_I(32);
    vlSelf->dma_top__DOT__u_arb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__u_arb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__u_arb__DOT__req = VL_RAND_RESET_I(4);
    vlSelf->dma_top__DOT__u_arb__DOT__grant = VL_RAND_RESET_I(4);
    vlSelf->dma_top__DOT__u_arb__DOT__winner = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__u_arb__DOT__grant_valid = VL_RAND_RESET_I(1);
    vlSelf->dma_top__DOT__u_arb__DOT__ord0 = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__u_arb__DOT__ord1 = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__u_arb__DOT__ord2 = VL_RAND_RESET_I(2);
    vlSelf->dma_top__DOT__u_arb__DOT__ord3 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
}
