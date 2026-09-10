// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma_top.h for the primary calling header

#include "Vdma_top__pch.h"
#include "Vdma_top___024root.h"

VL_INLINE_OPT void Vdma_top___024root___ico_sequent__TOP__0(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->dma_top__DOT__conf_ch = vlSelf->conf_ch;
    vlSelf->dma_top__DOT__conf_wr = vlSelf->conf_wr;
    vlSelf->dma_top__DOT__conf_field = vlSelf->conf_field;
    vlSelf->dma_top__DOT__conf_data = vlSelf->conf_data;
    vlSelf->dma_top__DOT__start = vlSelf->start;
    vlSelf->dma_top__DOT__clk = vlSelf->clk;
    vlSelf->dma_top__DOT__rst_n = vlSelf->rst_n;
    vlSelf->dma_top__DOT__cfg_write_ok = ((IData)(vlSelf->conf_wr) 
                                          & ((~ (vlSelf->dma_top__DOT__got
                                                 [vlSelf->conf_ch] 
                                                 | (IData)(vlSelf->cov_hold))) 
                                             & (0U 
                                                == 
                                                vlSelf->dma_top__DOT__fsm
                                                [vlSelf->conf_ch])));
    vlSelf->dma_top__DOT__start_rise2 = ((~ (IData)(vlSelf->dma_top__DOT__start_d2)) 
                                         & (IData)(vlSelf->start));
    vlSelf->dma_top__DOT__u_arb__DOT__clk = vlSelf->dma_top__DOT__clk;
    vlSelf->dma_top__DOT__u_arb__DOT__rst_n = vlSelf->dma_top__DOT__rst_n;
    vlSelf->dma_top__DOT__a_any_start = (0U != (IData)(vlSelf->dma_top__DOT__start_rise2));
}

void Vdma_top___024root___eval_ico(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vdma_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vdma_top___024root___eval_triggers__ico(Vdma_top___024root* vlSelf);

bool Vdma_top___024root___eval_phase__ico(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdma_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vdma_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdma_top___024root___eval_act(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vdma_top___024root___nba_sequent__TOP__0(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ dma_top__DOT____VdfgTmp_h37f2adaf__0;
    dma_top__DOT____VdfgTmp_h37f2adaf__0 = 0;
    CData/*0:0*/ dma_top__DOT____VdfgTmp_h319435ed__0;
    dma_top__DOT____VdfgTmp_h319435ed__0 = 0;
    CData/*0:0*/ dma_top__DOT____VdfgTmp_h31cb386d__0;
    dma_top__DOT____VdfgTmp_h31cb386d__0 = 0;
    CData/*0:0*/ dma_top__DOT____VdfgTmp_h319ce109__0;
    dma_top__DOT____VdfgTmp_h319ce109__0 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__hevt__v0;
    __Vdlyvset__dma_top__DOT__hevt__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__fsm__v0;
    __Vdlyvset__dma_top__DOT__fsm__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__fsm__v1;
    __Vdlyvset__dma_top__DOT__fsm__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__fsm__v2;
    __Vdlyvset__dma_top__DOT__fsm__v2 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__fsm__v3;
    __Vdlyvset__dma_top__DOT__fsm__v3 = 0;
    CData/*1:0*/ __Vdlyvdim0__dma_top__DOT__saddr__v0;
    __Vdlyvdim0__dma_top__DOT__saddr__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dma_top__DOT__saddr__v0;
    __Vdlyvval__dma_top__DOT__saddr__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__saddr__v0;
    __Vdlyvset__dma_top__DOT__saddr__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__dma_top__DOT__daddr__v0;
    __Vdlyvdim0__dma_top__DOT__daddr__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dma_top__DOT__daddr__v0;
    __Vdlyvval__dma_top__DOT__daddr__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__daddr__v0;
    __Vdlyvset__dma_top__DOT__daddr__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__dma_top__DOT__len__v0;
    __Vdlyvdim0__dma_top__DOT__len__v0 = 0;
    SData/*15:0*/ __Vdlyvval__dma_top__DOT__len__v0;
    __Vdlyvval__dma_top__DOT__len__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__len__v0;
    __Vdlyvset__dma_top__DOT__len__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__dma_top__DOT__remain__v0;
    __Vdlyvdim0__dma_top__DOT__remain__v0 = 0;
    SData/*15:0*/ __Vdlyvval__dma_top__DOT__remain__v0;
    __Vdlyvval__dma_top__DOT__remain__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__dma_top__DOT__dmode__v0;
    __Vdlyvdim0__dma_top__DOT__dmode__v0 = 0;
    CData/*3:0*/ __Vdlyvval__dma_top__DOT__dmode__v0;
    __Vdlyvval__dma_top__DOT__dmode__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__dma_top__DOT__burst__v0;
    __Vdlyvdim0__dma_top__DOT__burst__v0 = 0;
    CData/*2:0*/ __Vdlyvval__dma_top__DOT__burst__v0;
    __Vdlyvval__dma_top__DOT__burst__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__got__v0;
    __Vdlyvset__dma_top__DOT__got__v0 = 0;
    SData/*15:0*/ __Vdlyvval__dma_top__DOT__remain__v1;
    __Vdlyvval__dma_top__DOT__remain__v1 = 0;
    CData/*1:0*/ __Vdlyvval__dma_top__DOT__fsm__v4;
    __Vdlyvval__dma_top__DOT__fsm__v4 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__got__v1;
    __Vdlyvset__dma_top__DOT__got__v1 = 0;
    SData/*15:0*/ __Vdlyvval__dma_top__DOT__remain__v2;
    __Vdlyvval__dma_top__DOT__remain__v2 = 0;
    CData/*1:0*/ __Vdlyvval__dma_top__DOT__fsm__v5;
    __Vdlyvval__dma_top__DOT__fsm__v5 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__got__v2;
    __Vdlyvset__dma_top__DOT__got__v2 = 0;
    SData/*15:0*/ __Vdlyvval__dma_top__DOT__remain__v3;
    __Vdlyvval__dma_top__DOT__remain__v3 = 0;
    CData/*1:0*/ __Vdlyvval__dma_top__DOT__fsm__v6;
    __Vdlyvval__dma_top__DOT__fsm__v6 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__got__v3;
    __Vdlyvset__dma_top__DOT__got__v3 = 0;
    SData/*15:0*/ __Vdlyvval__dma_top__DOT__remain__v4;
    __Vdlyvval__dma_top__DOT__remain__v4 = 0;
    CData/*1:0*/ __Vdlyvval__dma_top__DOT__fsm__v7;
    __Vdlyvval__dma_top__DOT__fsm__v7 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__saddr__v1;
    __Vdlyvset__dma_top__DOT__saddr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__fsm__v12;
    __Vdlyvset__dma_top__DOT__fsm__v12 = 0;
    SData/*15:0*/ __Vdlyvval__dma_top__DOT__remain__v10;
    __Vdlyvval__dma_top__DOT__remain__v10 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__remain__v10;
    __Vdlyvset__dma_top__DOT__remain__v10 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__fsm__v13;
    __Vdlyvset__dma_top__DOT__fsm__v13 = 0;
    SData/*15:0*/ __Vdlyvval__dma_top__DOT__remain__v12;
    __Vdlyvval__dma_top__DOT__remain__v12 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__remain__v12;
    __Vdlyvset__dma_top__DOT__remain__v12 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__fsm__v14;
    __Vdlyvset__dma_top__DOT__fsm__v14 = 0;
    SData/*15:0*/ __Vdlyvval__dma_top__DOT__remain__v14;
    __Vdlyvval__dma_top__DOT__remain__v14 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__remain__v14;
    __Vdlyvset__dma_top__DOT__remain__v14 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__fsm__v15;
    __Vdlyvset__dma_top__DOT__fsm__v15 = 0;
    SData/*15:0*/ __Vdlyvval__dma_top__DOT__remain__v16;
    __Vdlyvval__dma_top__DOT__remain__v16 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__remain__v16;
    __Vdlyvset__dma_top__DOT__remain__v16 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__fsm__v16;
    __Vdlyvset__dma_top__DOT__fsm__v16 = 0;
    CData/*3:0*/ __Vdly__dma_top__DOT__hld_class;
    __Vdly__dma_top__DOT__hld_class = 0;
    CData/*1:0*/ __Vdly__dma_top__DOT__hld_state;
    __Vdly__dma_top__DOT__hld_state = 0;
    SData/*15:0*/ __Vdly__dma_top__DOT__hld_cnt;
    __Vdly__dma_top__DOT__hld_cnt = 0;
    CData/*3:0*/ __Vdlyvval__dma_top__DOT__acont__v0;
    __Vdlyvval__dma_top__DOT__acont__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__acont__v0;
    __Vdlyvset__dma_top__DOT__acont__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__acont__v1;
    __Vdlyvset__dma_top__DOT__acont__v1 = 0;
    CData/*3:0*/ __Vdlyvval__dma_top__DOT__acont__v2;
    __Vdlyvval__dma_top__DOT__acont__v2 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__acont__v2;
    __Vdlyvset__dma_top__DOT__acont__v2 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__acont__v3;
    __Vdlyvset__dma_top__DOT__acont__v3 = 0;
    CData/*3:0*/ __Vdlyvval__dma_top__DOT__acont__v4;
    __Vdlyvval__dma_top__DOT__acont__v4 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__acont__v4;
    __Vdlyvset__dma_top__DOT__acont__v4 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__acont__v5;
    __Vdlyvset__dma_top__DOT__acont__v5 = 0;
    CData/*3:0*/ __Vdlyvval__dma_top__DOT__acont__v6;
    __Vdlyvval__dma_top__DOT__acont__v6 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__acont__v6;
    __Vdlyvset__dma_top__DOT__acont__v6 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__acont__v7;
    __Vdlyvset__dma_top__DOT__acont__v7 = 0;
    CData/*0:0*/ __Vdly__dma_top__DOT__s3_started;
    __Vdly__dma_top__DOT__s3_started = 0;
    CData/*0:0*/ __Vdly__dma_top__DOT__s3_cfgs;
    __Vdly__dma_top__DOT__s3_cfgs = 0;
    CData/*0:0*/ __Vdly__dma_top__DOT__s1_cfg;
    __Vdly__dma_top__DOT__s1_cfg = 0;
    CData/*0:0*/ __Vdly__dma_top__DOT__s1_start;
    __Vdly__dma_top__DOT__s1_start = 0;
    CData/*0:0*/ __Vdly__dma_top__DOT__s1_active;
    __Vdly__dma_top__DOT__s1_active = 0;
    CData/*2:0*/ __Vdly__dma_top__DOT__conf_cnt;
    __Vdly__dma_top__DOT__conf_cnt = 0;
    CData/*4:0*/ __Vdly__dma_top__DOT__idle_cnt;
    __Vdly__dma_top__DOT__idle_cnt = 0;
    CData/*3:0*/ __Vdlyvval__dma_top__DOT__a2d__v0;
    __Vdlyvval__dma_top__DOT__a2d__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__a2d__v0;
    __Vdlyvset__dma_top__DOT__a2d__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__a2d__v1;
    __Vdlyvset__dma_top__DOT__a2d__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__a2d__v2;
    __Vdlyvset__dma_top__DOT__a2d__v2 = 0;
    CData/*3:0*/ __Vdlyvval__dma_top__DOT__a2d__v3;
    __Vdlyvval__dma_top__DOT__a2d__v3 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__a2d__v3;
    __Vdlyvset__dma_top__DOT__a2d__v3 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__a2d__v4;
    __Vdlyvset__dma_top__DOT__a2d__v4 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__a2d__v5;
    __Vdlyvset__dma_top__DOT__a2d__v5 = 0;
    CData/*3:0*/ __Vdlyvval__dma_top__DOT__a2d__v6;
    __Vdlyvval__dma_top__DOT__a2d__v6 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__a2d__v6;
    __Vdlyvset__dma_top__DOT__a2d__v6 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__a2d__v7;
    __Vdlyvset__dma_top__DOT__a2d__v7 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__a2d__v8;
    __Vdlyvset__dma_top__DOT__a2d__v8 = 0;
    CData/*3:0*/ __Vdlyvval__dma_top__DOT__a2d__v9;
    __Vdlyvval__dma_top__DOT__a2d__v9 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__a2d__v9;
    __Vdlyvset__dma_top__DOT__a2d__v9 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__a2d__v10;
    __Vdlyvset__dma_top__DOT__a2d__v10 = 0;
    CData/*0:0*/ __Vdlyvset__dma_top__DOT__a2d__v11;
    __Vdlyvset__dma_top__DOT__a2d__v11 = 0;
    // Body
    __Vdlyvset__dma_top__DOT__hevt__v0 = 0U;
    __Vdly__dma_top__DOT__conf_cnt = vlSelf->dma_top__DOT__conf_cnt;
    __Vdly__dma_top__DOT__s1_active = vlSelf->dma_top__DOT__s1_active;
    __Vdly__dma_top__DOT__s1_start = vlSelf->dma_top__DOT__s1_start;
    __Vdly__dma_top__DOT__s1_cfg = vlSelf->dma_top__DOT__s1_cfg;
    __Vdly__dma_top__DOT__hld_cnt = vlSelf->dma_top__DOT__hld_cnt;
    __Vdly__dma_top__DOT__hld_state = vlSelf->dma_top__DOT__hld_state;
    __Vdly__dma_top__DOT__hld_class = vlSelf->dma_top__DOT__hld_class;
    __Vdly__dma_top__DOT__s3_cfgs = vlSelf->dma_top__DOT__s3_cfgs;
    __Vdly__dma_top__DOT__s3_started = vlSelf->dma_top__DOT__s3_started;
    __Vdlyvset__dma_top__DOT__acont__v0 = 0U;
    __Vdlyvset__dma_top__DOT__acont__v1 = 0U;
    __Vdlyvset__dma_top__DOT__acont__v2 = 0U;
    __Vdlyvset__dma_top__DOT__acont__v3 = 0U;
    __Vdlyvset__dma_top__DOT__acont__v4 = 0U;
    __Vdlyvset__dma_top__DOT__acont__v5 = 0U;
    __Vdlyvset__dma_top__DOT__acont__v6 = 0U;
    __Vdlyvset__dma_top__DOT__acont__v7 = 0U;
    __Vdly__dma_top__DOT__idle_cnt = vlSelf->dma_top__DOT__idle_cnt;
    __Vdlyvset__dma_top__DOT__a2d__v0 = 0U;
    __Vdlyvset__dma_top__DOT__a2d__v1 = 0U;
    __Vdlyvset__dma_top__DOT__a2d__v2 = 0U;
    __Vdlyvset__dma_top__DOT__a2d__v3 = 0U;
    __Vdlyvset__dma_top__DOT__a2d__v4 = 0U;
    __Vdlyvset__dma_top__DOT__a2d__v5 = 0U;
    __Vdlyvset__dma_top__DOT__a2d__v6 = 0U;
    __Vdlyvset__dma_top__DOT__a2d__v7 = 0U;
    __Vdlyvset__dma_top__DOT__a2d__v8 = 0U;
    __Vdlyvset__dma_top__DOT__a2d__v9 = 0U;
    __Vdlyvset__dma_top__DOT__a2d__v10 = 0U;
    __Vdlyvset__dma_top__DOT__a2d__v11 = 0U;
    __Vdlyvset__dma_top__DOT__remain__v10 = 0U;
    __Vdlyvset__dma_top__DOT__remain__v12 = 0U;
    __Vdlyvset__dma_top__DOT__remain__v14 = 0U;
    __Vdlyvset__dma_top__DOT__remain__v16 = 0U;
    __Vdlyvset__dma_top__DOT__fsm__v12 = 0U;
    __Vdlyvset__dma_top__DOT__fsm__v13 = 0U;
    __Vdlyvset__dma_top__DOT__fsm__v14 = 0U;
    __Vdlyvset__dma_top__DOT__fsm__v15 = 0U;
    __Vdlyvset__dma_top__DOT__fsm__v16 = 0U;
    __Vdlyvset__dma_top__DOT__daddr__v0 = 0U;
    __Vdlyvset__dma_top__DOT__saddr__v0 = 0U;
    __Vdlyvset__dma_top__DOT__len__v0 = 0U;
    __Vdlyvset__dma_top__DOT__fsm__v0 = 0U;
    __Vdlyvset__dma_top__DOT__fsm__v1 = 0U;
    __Vdlyvset__dma_top__DOT__fsm__v2 = 0U;
    __Vdlyvset__dma_top__DOT__fsm__v3 = 0U;
    __Vdlyvset__dma_top__DOT__got__v0 = 0U;
    __Vdlyvset__dma_top__DOT__got__v1 = 0U;
    __Vdlyvset__dma_top__DOT__got__v2 = 0U;
    __Vdlyvset__dma_top__DOT__got__v3 = 0U;
    __Vdlyvset__dma_top__DOT__saddr__v1 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        __Vdlyvset__dma_top__DOT__hevt__v0 = 1U;
    }
    if (vlSelf->rst_n) {
        vlSelf->dma_top__DOT__qi = 1U;
        vlSelf->dma_top__DOT__qi = 2U;
        vlSelf->dma_top__DOT__qi = 3U;
        vlSelf->dma_top__DOT__qi = 4U;
        vlSelf->dma_top__DOT__qi = 1U;
        vlSelf->dma_top__DOT__qi = 2U;
        vlSelf->dma_top__DOT__qi = 3U;
        vlSelf->dma_top__DOT__qi = 4U;
        vlSelf->dma_top__DOT__bi = 1U;
        vlSelf->dma_top__DOT__bi = 2U;
        vlSelf->dma_top__DOT__bi = 3U;
        vlSelf->dma_top__DOT__bi = 4U;
        vlSelf->dma_top__DOT__bi = 1U;
        vlSelf->dma_top__DOT__bi = 2U;
        vlSelf->dma_top__DOT__bi = 3U;
        vlSelf->dma_top__DOT__bi = 4U;
        vlSelf->dma_top__DOT__u_arb__DOT__grant_valid 
            = (0U != (IData)(vlSelf->dma_top__DOT__req_nh));
    } else {
        vlSelf->dma_top__DOT__bi = 1U;
        vlSelf->dma_top__DOT__bi = 2U;
        vlSelf->dma_top__DOT__bi = 3U;
        vlSelf->dma_top__DOT__bi = 4U;
    }
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->dma_top__DOT__u_arb__DOT__grant_valid = 0U;
    }
    if (vlSelf->rst_n) {
        vlSelf->dma_top__DOT__g = 0U;
        vlSelf->dma_top__DOT__w = 0U;
        if ((1U & ((IData)(vlSelf->dma_top__DOT__req_nh) 
                   >> (IData)(vlSelf->dma_top__DOT__u_arb__DOT__ord0)))) {
            vlSelf->dma_top__DOT__w = vlSelf->dma_top__DOT__u_arb__DOT__ord0;
        } else if ((1U & ((IData)(vlSelf->dma_top__DOT__req_nh) 
                          >> (IData)(vlSelf->dma_top__DOT__u_arb__DOT__ord1)))) {
            vlSelf->dma_top__DOT__w = vlSelf->dma_top__DOT__u_arb__DOT__ord1;
        } else if ((1U & ((IData)(vlSelf->dma_top__DOT__req_nh) 
                          >> (IData)(vlSelf->dma_top__DOT__u_arb__DOT__ord2)))) {
            vlSelf->dma_top__DOT__w = vlSelf->dma_top__DOT__u_arb__DOT__ord2;
        } else if ((1U & ((IData)(vlSelf->dma_top__DOT__req_nh) 
                          >> (IData)(vlSelf->dma_top__DOT__u_arb__DOT__ord3)))) {
            vlSelf->dma_top__DOT__w = vlSelf->dma_top__DOT__u_arb__DOT__ord3;
        }
        vlSelf->dma_top__DOT__g = (((~ ((IData)(1U) 
                                        << (IData)(vlSelf->dma_top__DOT__w))) 
                                    & (IData)(vlSelf->dma_top__DOT__g)) 
                                   | (0xfU & ((0U != (IData)(vlSelf->dma_top__DOT__req_nh)) 
                                              << (IData)(vlSelf->dma_top__DOT__w))));
        if ((1U & (~ (IData)(vlSelf->cov_hold)))) {
            vlSelf->dma_top__DOT__bi = 1U;
            vlSelf->dma_top__DOT__bi = 2U;
            vlSelf->dma_top__DOT__bi = 3U;
            vlSelf->dma_top__DOT__bi = 4U;
            if (((vlSelf->dma_top__DOT__got[0U] & (IData)(vlSelf->dma_top__DOT__g)) 
                 & (1U == vlSelf->dma_top__DOT__fsm
                    [0U]))) {
                if ((1U == vlSelf->dma_top__DOT__remain
                     [0U])) {
                    __Vdlyvset__dma_top__DOT__fsm__v12 = 1U;
                } else {
                    __Vdlyvval__dma_top__DOT__remain__v10 
                        = (0xffffU & (vlSelf->dma_top__DOT__remain
                                      [0U] - (IData)(1U)));
                    __Vdlyvset__dma_top__DOT__remain__v10 = 1U;
                }
            }
            if (((vlSelf->dma_top__DOT__got[1U] & ((IData)(vlSelf->dma_top__DOT__g) 
                                                   >> 1U)) 
                 & (1U == vlSelf->dma_top__DOT__fsm
                    [1U]))) {
                if ((1U == vlSelf->dma_top__DOT__remain
                     [1U])) {
                    __Vdlyvset__dma_top__DOT__fsm__v13 = 1U;
                } else {
                    __Vdlyvval__dma_top__DOT__remain__v12 
                        = (0xffffU & (vlSelf->dma_top__DOT__remain
                                      [1U] - (IData)(1U)));
                    __Vdlyvset__dma_top__DOT__remain__v12 = 1U;
                }
            }
            if (((vlSelf->dma_top__DOT__got[2U] & ((IData)(vlSelf->dma_top__DOT__g) 
                                                   >> 2U)) 
                 & (1U == vlSelf->dma_top__DOT__fsm
                    [2U]))) {
                if ((1U == vlSelf->dma_top__DOT__remain
                     [2U])) {
                    __Vdlyvset__dma_top__DOT__fsm__v14 = 1U;
                } else {
                    __Vdlyvval__dma_top__DOT__remain__v14 
                        = (0xffffU & (vlSelf->dma_top__DOT__remain
                                      [2U] - (IData)(1U)));
                    __Vdlyvset__dma_top__DOT__remain__v14 = 1U;
                }
            }
            if (((vlSelf->dma_top__DOT__got[3U] & ((IData)(vlSelf->dma_top__DOT__g) 
                                                   >> 3U)) 
                 & (1U == vlSelf->dma_top__DOT__fsm
                    [3U]))) {
                if ((1U == vlSelf->dma_top__DOT__remain
                     [3U])) {
                    __Vdlyvset__dma_top__DOT__fsm__v15 = 1U;
                } else {
                    __Vdlyvval__dma_top__DOT__remain__v16 
                        = (0xffffU & (vlSelf->dma_top__DOT__remain
                                      [3U] - (IData)(1U)));
                    __Vdlyvset__dma_top__DOT__remain__v16 = 1U;
                }
            }
        }
    } else {
        vlSelf->dma_top__DOT__bi = 1U;
        vlSelf->dma_top__DOT__bi = 2U;
        vlSelf->dma_top__DOT__bi = 3U;
        vlSelf->dma_top__DOT__bi = 4U;
        __Vdlyvset__dma_top__DOT__fsm__v16 = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->dma_top__DOT__g = 0U;
    }
    if (vlSelf->rst_n) {
        if (((2U == vlSelf->dma_top__DOT__fsm[0U]) 
             & (~ vlSelf->dma_top__DOT__got[0U]))) {
            __Vdlyvset__dma_top__DOT__fsm__v0 = 1U;
        }
        if (((2U == vlSelf->dma_top__DOT__fsm[1U]) 
             & (~ vlSelf->dma_top__DOT__got[1U]))) {
            __Vdlyvset__dma_top__DOT__fsm__v1 = 1U;
        }
        if (((2U == vlSelf->dma_top__DOT__fsm[2U]) 
             & (~ vlSelf->dma_top__DOT__got[2U]))) {
            __Vdlyvset__dma_top__DOT__fsm__v2 = 1U;
        }
        if (((2U == vlSelf->dma_top__DOT__fsm[3U]) 
             & (~ vlSelf->dma_top__DOT__got[3U]))) {
            __Vdlyvset__dma_top__DOT__fsm__v3 = 1U;
        }
        if (((((IData)(vlSelf->conf_wr) & (0U == vlSelf->dma_top__DOT__fsm
                                           [vlSelf->conf_ch])) 
              & (~ vlSelf->dma_top__DOT__got[vlSelf->conf_ch])) 
             & (~ (IData)(vlSelf->cov_hold)))) {
            vlSelf->dma_top__DOT__i = vlSelf->conf_ch;
            if ((0U == (IData)(vlSelf->conf_field))) {
                __Vdlyvval__dma_top__DOT__saddr__v0 
                    = vlSelf->conf_data;
                __Vdlyvset__dma_top__DOT__saddr__v0 = 1U;
                __Vdlyvdim0__dma_top__DOT__saddr__v0 
                    = (3U & vlSelf->dma_top__DOT__i);
            } else if ((1U == (IData)(vlSelf->conf_field))) {
                __Vdlyvval__dma_top__DOT__daddr__v0 
                    = vlSelf->conf_data;
                __Vdlyvset__dma_top__DOT__daddr__v0 = 1U;
                __Vdlyvdim0__dma_top__DOT__daddr__v0 
                    = (3U & vlSelf->dma_top__DOT__i);
            } else if ((2U == (IData)(vlSelf->conf_field))) {
                __Vdlyvval__dma_top__DOT__len__v0 = 
                    (0xffffU & vlSelf->conf_data);
                __Vdlyvset__dma_top__DOT__len__v0 = 1U;
                __Vdlyvdim0__dma_top__DOT__len__v0 
                    = (3U & vlSelf->dma_top__DOT__i);
                __Vdlyvval__dma_top__DOT__remain__v0 
                    = (0xffffU & vlSelf->conf_data);
                __Vdlyvdim0__dma_top__DOT__remain__v0 
                    = (3U & vlSelf->dma_top__DOT__i);
                __Vdlyvval__dma_top__DOT__dmode__v0 
                    = (0xfU & (vlSelf->conf_data >> 0x10U));
                __Vdlyvdim0__dma_top__DOT__dmode__v0 
                    = (3U & vlSelf->dma_top__DOT__i);
                __Vdlyvval__dma_top__DOT__burst__v0 
                    = (7U & (vlSelf->conf_data >> 0x15U));
                __Vdlyvdim0__dma_top__DOT__burst__v0 
                    = (3U & vlSelf->dma_top__DOT__i);
            }
        }
        if ((1U & (((IData)(vlSelf->start) & (~ (IData)(vlSelf->dma_top__DOT__start_d))) 
                   & (~ vlSelf->dma_top__DOT__got[0U])))) {
            __Vdlyvset__dma_top__DOT__got__v0 = 1U;
            __Vdlyvval__dma_top__DOT__remain__v1 = 
                vlSelf->dma_top__DOT__len[0U];
            __Vdlyvval__dma_top__DOT__fsm__v4 = ((0U 
                                                  == 
                                                  vlSelf->dma_top__DOT__len
                                                  [0U])
                                                  ? 2U
                                                  : 1U);
        }
        if ((1U & ((((IData)(vlSelf->start) >> 1U) 
                    & (~ ((IData)(vlSelf->dma_top__DOT__start_d) 
                          >> 1U))) & (~ vlSelf->dma_top__DOT__got
                                      [1U])))) {
            __Vdlyvset__dma_top__DOT__got__v1 = 1U;
            __Vdlyvval__dma_top__DOT__remain__v2 = 
                vlSelf->dma_top__DOT__len[1U];
            __Vdlyvval__dma_top__DOT__fsm__v5 = ((0U 
                                                  == 
                                                  vlSelf->dma_top__DOT__len
                                                  [1U])
                                                  ? 2U
                                                  : 1U);
        }
        if ((1U & ((((IData)(vlSelf->start) >> 2U) 
                    & (~ ((IData)(vlSelf->dma_top__DOT__start_d) 
                          >> 2U))) & (~ vlSelf->dma_top__DOT__got
                                      [2U])))) {
            __Vdlyvset__dma_top__DOT__got__v2 = 1U;
            __Vdlyvval__dma_top__DOT__remain__v3 = 
                vlSelf->dma_top__DOT__len[2U];
            __Vdlyvval__dma_top__DOT__fsm__v6 = ((0U 
                                                  == 
                                                  vlSelf->dma_top__DOT__len
                                                  [2U])
                                                  ? 2U
                                                  : 1U);
        }
        if ((IData)(((((IData)(vlSelf->start) >> 3U) 
                      & (~ ((IData)(vlSelf->dma_top__DOT__start_d) 
                            >> 3U))) & (~ vlSelf->dma_top__DOT__got
                                        [3U])))) {
            __Vdlyvset__dma_top__DOT__got__v3 = 1U;
            __Vdlyvval__dma_top__DOT__remain__v4 = 
                vlSelf->dma_top__DOT__len[3U];
            __Vdlyvval__dma_top__DOT__fsm__v7 = ((0U 
                                                  == 
                                                  vlSelf->dma_top__DOT__len
                                                  [3U])
                                                  ? 2U
                                                  : 1U);
        }
        vlSelf->cov_seq8 = 0U;
        if (vlSelf->dma_top__DOT__a_any_done) {
            vlSelf->cov_seq8 = 1U;
        }
        vlSelf->dma_top__DOT__start_d2 = vlSelf->start;
        vlSelf->cov_seq7 = 0U;
        if (vlSelf->dma_top__DOT__arb_valid) {
            if ((1U <= (IData)(vlSelf->dma_top__DOT__arb_cnt))) {
                vlSelf->cov_seq7 = 1U;
            }
            vlSelf->dma_top__DOT__arb_cnt = (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->dma_top__DOT__arb_cnt)));
        } else {
            vlSelf->dma_top__DOT__arb_cnt = 0U;
        }
        vlSelf->cov_seq6 = 0U;
        if (vlSelf->dma_top__DOT__arb_conflict_w) {
            __Vdly__dma_top__DOT__conf_cnt = 2U;
        }
        if ((0U != (IData)(vlSelf->dma_top__DOT__conf_cnt))) {
            __Vdly__dma_top__DOT__conf_cnt = (7U & 
                                              ((IData)(vlSelf->dma_top__DOT__conf_cnt) 
                                               - (IData)(1U)));
            if (vlSelf->dma_top__DOT__arb_valid) {
                vlSelf->cov_seq6 = 1U;
            }
        }
        vlSelf->cov_seq1 = 0U;
        if (vlSelf->dma_top__DOT__cfg_write_ok) {
            __Vdly__dma_top__DOT__s1_cfg = 1U;
            __Vdly__dma_top__DOT__s1_start = 0U;
            __Vdly__dma_top__DOT__s1_active = 0U;
            __Vdly__dma_top__DOT__s3_started = 0U;
            __Vdly__dma_top__DOT__s3_cfgs = 0U;
        } else if ((((IData)(vlSelf->dma_top__DOT__s1_cfg) 
                     & (~ (IData)(vlSelf->dma_top__DOT__s1_start))) 
                    & (IData)(vlSelf->dma_top__DOT__a_any_start))) {
            __Vdly__dma_top__DOT__s1_start = 1U;
        } else if (((((IData)(vlSelf->dma_top__DOT__s1_cfg) 
                      & (IData)(vlSelf->dma_top__DOT__s1_start)) 
                     & (~ (IData)(vlSelf->dma_top__DOT__s1_active))) 
                    & (IData)(vlSelf->dma_top__DOT__a_any_active))) {
            __Vdly__dma_top__DOT__s1_active = 1U;
        } else if (((((IData)(vlSelf->dma_top__DOT__s1_cfg) 
                      & (IData)(vlSelf->dma_top__DOT__s1_start)) 
                     & (IData)(vlSelf->dma_top__DOT__s1_active)) 
                    & (IData)(vlSelf->dma_top__DOT__a_any_done))) {
            vlSelf->cov_seq1 = 1U;
            __Vdly__dma_top__DOT__s1_cfg = 0U;
        }
        vlSelf->cov_seq3 = 0U;
        if (vlSelf->dma_top__DOT__a_any_start) {
            __Vdly__dma_top__DOT__s3_started = 1U;
            __Vdly__dma_top__DOT__s3_cfgs = 0U;
        }
        if (((IData)(vlSelf->dma_top__DOT__s3_started) 
             & (IData)(vlSelf->dma_top__DOT__cfg_write_ok))) {
            __Vdly__dma_top__DOT__s3_cfgs = 1U;
        }
        if (((IData)(vlSelf->dma_top__DOT__s3_started) 
             & (IData)(vlSelf->cov_done_ok_valid))) {
            if ((1U & (~ (IData)(vlSelf->dma_top__DOT__s3_cfgs)))) {
                vlSelf->cov_seq3 = 1U;
            }
            __Vdly__dma_top__DOT__s3_started = 0U;
        }
        vlSelf->cov_seq4 = 0U;
        if (vlSelf->cov_hold) {
            if ((3U <= (IData)(vlSelf->dma_top__DOT__hold_cnt_internal))) {
                vlSelf->cov_seq4 = 1U;
            }
            vlSelf->dma_top__DOT__hold_cnt_internal 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->dma_top__DOT__hold_cnt_internal)));
        } else {
            vlSelf->dma_top__DOT__hold_cnt_internal = 0U;
        }
        vlSelf->cov_seq2 = 0U;
        if ((1U == vlSelf->dma_top__DOT__fsm[0U])) {
            if ((2U <= vlSelf->dma_top__DOT__acont[0U])) {
                vlSelf->cov_seq2 = 1U;
            }
            __Vdlyvval__dma_top__DOT__acont__v0 = (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      vlSelf->dma_top__DOT__acont
                                                      [0U]));
            __Vdlyvset__dma_top__DOT__acont__v0 = 1U;
        } else {
            __Vdlyvset__dma_top__DOT__acont__v1 = 1U;
        }
        if ((1U == vlSelf->dma_top__DOT__fsm[1U])) {
            if ((2U <= vlSelf->dma_top__DOT__acont[1U])) {
                vlSelf->cov_seq2 = 1U;
            }
            __Vdlyvval__dma_top__DOT__acont__v2 = (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      vlSelf->dma_top__DOT__acont
                                                      [1U]));
            __Vdlyvset__dma_top__DOT__acont__v2 = 1U;
        } else {
            __Vdlyvset__dma_top__DOT__acont__v3 = 1U;
        }
        if ((1U == vlSelf->dma_top__DOT__fsm[2U])) {
            if ((2U <= vlSelf->dma_top__DOT__acont[2U])) {
                vlSelf->cov_seq2 = 1U;
            }
            __Vdlyvval__dma_top__DOT__acont__v4 = (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      vlSelf->dma_top__DOT__acont
                                                      [2U]));
            __Vdlyvset__dma_top__DOT__acont__v4 = 1U;
        } else {
            __Vdlyvset__dma_top__DOT__acont__v5 = 1U;
        }
        if ((1U == vlSelf->dma_top__DOT__fsm[3U])) {
            if ((2U <= vlSelf->dma_top__DOT__acont[3U])) {
                vlSelf->cov_seq2 = 1U;
            }
            __Vdlyvval__dma_top__DOT__acont__v6 = (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      vlSelf->dma_top__DOT__acont
                                                      [3U]));
            __Vdlyvset__dma_top__DOT__acont__v6 = 1U;
        } else {
            __Vdlyvset__dma_top__DOT__acont__v7 = 1U;
        }
        vlSelf->cov_seq9 = 0U;
        if (((((((0U == vlSelf->dma_top__DOT__fsm[0U]) 
                 & (0U == vlSelf->dma_top__DOT__fsm
                    [1U])) & (0U == vlSelf->dma_top__DOT__fsm
                              [2U])) & (0U == vlSelf->dma_top__DOT__fsm
                                        [3U])) & (~ (IData)(vlSelf->dma_top__DOT__got_any))) 
             & (~ (IData)(vlSelf->cov_hold)))) {
            __Vdly__dma_top__DOT__idle_cnt = (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->dma_top__DOT__idle_cnt)));
            if ((2U <= (IData)(vlSelf->dma_top__DOT__idle_cnt))) {
                vlSelf->cov_seq9 = 1U;
            }
        } else {
            __Vdly__dma_top__DOT__idle_cnt = 0U;
        }
        vlSelf->cov_seq5 = 0U;
        if (((IData)(vlSelf->cov_done_ok_valid) & (IData)(vlSelf->dma_top__DOT__hold_prev))) {
            vlSelf->cov_seq5 = 1U;
        }
        vlSelf->cov_seq10 = 0U;
        if (((1U == vlSelf->dma_top__DOT__fsm[0U]) 
             & (~ (IData)(vlSelf->cov_hold)))) {
            __Vdlyvval__dma_top__DOT__a2d__v0 = (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    vlSelf->dma_top__DOT__a2d
                                                    [0U]));
            __Vdlyvset__dma_top__DOT__a2d__v0 = 1U;
        } else if ((((2U == vlSelf->dma_top__DOT__fsm
                      [0U]) & (~ vlSelf->dma_top__DOT__got
                               [0U])) & (~ (IData)(vlSelf->cov_hold)))) {
            if (((1U <= vlSelf->dma_top__DOT__a2d[0U]) 
                 & (2U >= vlSelf->dma_top__DOT__a2d
                    [0U]))) {
                vlSelf->cov_seq10 = 1U;
            }
            __Vdlyvset__dma_top__DOT__a2d__v1 = 1U;
        } else {
            __Vdlyvset__dma_top__DOT__a2d__v2 = 1U;
        }
        if (((1U == vlSelf->dma_top__DOT__fsm[1U]) 
             & (~ (IData)(vlSelf->cov_hold)))) {
            __Vdlyvval__dma_top__DOT__a2d__v3 = (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    vlSelf->dma_top__DOT__a2d
                                                    [1U]));
            __Vdlyvset__dma_top__DOT__a2d__v3 = 1U;
        } else if ((((2U == vlSelf->dma_top__DOT__fsm
                      [1U]) & (~ vlSelf->dma_top__DOT__got
                               [1U])) & (~ (IData)(vlSelf->cov_hold)))) {
            if (((1U <= vlSelf->dma_top__DOT__a2d[1U]) 
                 & (2U >= vlSelf->dma_top__DOT__a2d
                    [1U]))) {
                vlSelf->cov_seq10 = 1U;
            }
            __Vdlyvset__dma_top__DOT__a2d__v4 = 1U;
        } else {
            __Vdlyvset__dma_top__DOT__a2d__v5 = 1U;
        }
        if (((1U == vlSelf->dma_top__DOT__fsm[2U]) 
             & (~ (IData)(vlSelf->cov_hold)))) {
            __Vdlyvval__dma_top__DOT__a2d__v6 = (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    vlSelf->dma_top__DOT__a2d
                                                    [2U]));
            __Vdlyvset__dma_top__DOT__a2d__v6 = 1U;
        } else if ((((2U == vlSelf->dma_top__DOT__fsm
                      [2U]) & (~ vlSelf->dma_top__DOT__got
                               [2U])) & (~ (IData)(vlSelf->cov_hold)))) {
            if (((1U <= vlSelf->dma_top__DOT__a2d[2U]) 
                 & (2U >= vlSelf->dma_top__DOT__a2d
                    [2U]))) {
                vlSelf->cov_seq10 = 1U;
            }
            __Vdlyvset__dma_top__DOT__a2d__v7 = 1U;
        } else {
            __Vdlyvset__dma_top__DOT__a2d__v8 = 1U;
        }
        if (((1U == vlSelf->dma_top__DOT__fsm[3U]) 
             & (~ (IData)(vlSelf->cov_hold)))) {
            __Vdlyvval__dma_top__DOT__a2d__v9 = (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    vlSelf->dma_top__DOT__a2d
                                                    [3U]));
            __Vdlyvset__dma_top__DOT__a2d__v9 = 1U;
        } else if ((((2U == vlSelf->dma_top__DOT__fsm
                      [3U]) & (~ vlSelf->dma_top__DOT__got
                               [3U])) & (~ (IData)(vlSelf->cov_hold)))) {
            if (((1U <= vlSelf->dma_top__DOT__a2d[3U]) 
                 & (2U >= vlSelf->dma_top__DOT__a2d
                    [3U]))) {
                vlSelf->cov_seq10 = 1U;
            }
            __Vdlyvset__dma_top__DOT__a2d__v10 = 1U;
        } else {
            __Vdlyvset__dma_top__DOT__a2d__v11 = 1U;
        }
        vlSelf->cov_seq12 = 0U;
        if (vlSelf->cov_done_ok_valid) {
            if (((IData)(vlSelf->cov_active_ch) == 
                 (3U & (IData)(vlSelf->cov_done_class)))) {
                vlSelf->cov_seq12 = 1U;
            }
        }
        vlSelf->cov_seq11 = 0U;
        if (((IData)(vlSelf->dma_top__DOT__arb_valid) 
             & (~ (IData)(vlSelf->cov_hold)))) {
            vlSelf->cov_arb_winner = vlSelf->dma_top__DOT__w;
            vlSelf->cov_saddr = vlSelf->dma_top__DOT__saddr
                [vlSelf->dma_top__DOT__w];
            vlSelf->cov_burst = vlSelf->dma_top__DOT__burst
                [vlSelf->dma_top__DOT__w];
            vlSelf->cov_daddr = vlSelf->dma_top__DOT__daddr
                [vlSelf->dma_top__DOT__w];
            vlSelf->cov_len = vlSelf->dma_top__DOT__len
                [vlSelf->dma_top__DOT__w];
            vlSelf->cov_dir = vlSelf->dma_top__DOT__dmode
                [vlSelf->dma_top__DOT__w];
            if (((IData)(vlSelf->dma_top__DOT__pw_valid) 
                 & ((IData)(vlSelf->dma_top__DOT__pw) 
                    != (IData)(vlSelf->dma_top__DOT__w)))) {
                vlSelf->cov_seq11 = 1U;
            }
            vlSelf->cov_active_ch = vlSelf->dma_top__DOT__w;
            vlSelf->dma_top__DOT__pw = vlSelf->dma_top__DOT__w;
        } else if (((((IData)(vlSelf->conf_wr) & (0U 
                                                  == 
                                                  vlSelf->dma_top__DOT__fsm
                                                  [vlSelf->conf_ch])) 
                     & (~ vlSelf->dma_top__DOT__got
                        [vlSelf->conf_ch])) & (~ (IData)(vlSelf->cov_hold)))) {
            vlSelf->cov_saddr = vlSelf->dma_top__DOT__saddr
                [vlSelf->conf_ch];
            vlSelf->cov_burst = vlSelf->dma_top__DOT__burst
                [vlSelf->conf_ch];
            vlSelf->cov_daddr = vlSelf->dma_top__DOT__daddr
                [vlSelf->conf_ch];
            vlSelf->cov_len = vlSelf->dma_top__DOT__len
                [vlSelf->conf_ch];
            vlSelf->cov_dir = vlSelf->dma_top__DOT__dmode
                [vlSelf->conf_ch];
            vlSelf->cov_active_ch = vlSelf->conf_ch;
        }
        vlSelf->dma_top__DOT__start_d = vlSelf->start;
    } else {
        __Vdlyvset__dma_top__DOT__saddr__v1 = 1U;
        vlSelf->cov_seq8 = 0U;
        vlSelf->dma_top__DOT__start_d2 = 0U;
        vlSelf->dma_top__DOT__arb_cnt = 0U;
        vlSelf->cov_seq7 = 0U;
        __Vdly__dma_top__DOT__conf_cnt = 0U;
        vlSelf->cov_seq6 = 0U;
        __Vdly__dma_top__DOT__s1_cfg = 0U;
        __Vdly__dma_top__DOT__s1_start = 0U;
        __Vdly__dma_top__DOT__s1_active = 0U;
        vlSelf->cov_seq1 = 0U;
        __Vdly__dma_top__DOT__s3_cfgs = 0U;
        __Vdly__dma_top__DOT__s3_started = 0U;
        vlSelf->cov_seq3 = 0U;
        vlSelf->cov_seq4 = 0U;
        vlSelf->cov_seq2 = 0U;
        vlSelf->cov_arb_winner = 0U;
        __Vdly__dma_top__DOT__idle_cnt = 0U;
        vlSelf->cov_seq9 = 0U;
        vlSelf->cov_seq5 = 0U;
        vlSelf->cov_saddr = 0U;
        vlSelf->cov_burst = 0U;
        vlSelf->cov_daddr = 0U;
        vlSelf->cov_len = 0U;
        vlSelf->cov_dir = 0U;
        vlSelf->cov_seq10 = 0U;
        vlSelf->cov_seq12 = 0U;
        vlSelf->cov_seq11 = 0U;
        vlSelf->dma_top__DOT__start_d = 0U;
        vlSelf->cov_active_ch = 0U;
        vlSelf->dma_top__DOT__pw = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->dma_top__DOT__w = 0U;
    }
    vlSelf->cov_arb_valid = ((IData)(vlSelf->rst_n) 
                             && ((IData)(vlSelf->dma_top__DOT__arb_valid) 
                                 & (~ (IData)(vlSelf->cov_hold))));
    vlSelf->cov_arb_conflict = ((IData)(vlSelf->rst_n) 
                                && (((IData)(vlSelf->dma_top__DOT__arb_valid) 
                                     & (~ (IData)(vlSelf->cov_hold))) 
                                    && (IData)(vlSelf->dma_top__DOT__arb_conflict_w)));
    if (__Vdlyvset__dma_top__DOT__hevt__v0) {
        vlSelf->dma_top__DOT__hevt[0U] = 0U;
        vlSelf->dma_top__DOT__hevt[1U] = 0U;
        vlSelf->dma_top__DOT__hevt[2U] = 0U;
        vlSelf->dma_top__DOT__hevt[3U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__fsm__v12) {
        vlSelf->dma_top__DOT__hevt[0U] = 1U;
    }
    if (__Vdlyvset__dma_top__DOT__fsm__v13) {
        vlSelf->dma_top__DOT__hevt[1U] = 1U;
    }
    if (__Vdlyvset__dma_top__DOT__len__v0) {
        vlSelf->dma_top__DOT__remain[__Vdlyvdim0__dma_top__DOT__remain__v0] 
            = __Vdlyvval__dma_top__DOT__remain__v0;
        vlSelf->dma_top__DOT__burst[__Vdlyvdim0__dma_top__DOT__burst__v0] 
            = __Vdlyvval__dma_top__DOT__burst__v0;
        vlSelf->dma_top__DOT__len[__Vdlyvdim0__dma_top__DOT__len__v0] 
            = __Vdlyvval__dma_top__DOT__len__v0;
        vlSelf->dma_top__DOT__dmode[__Vdlyvdim0__dma_top__DOT__dmode__v0] 
            = __Vdlyvval__dma_top__DOT__dmode__v0;
    }
    if (__Vdlyvset__dma_top__DOT__got__v0) {
        vlSelf->dma_top__DOT__remain[0U] = __Vdlyvval__dma_top__DOT__remain__v1;
        vlSelf->dma_top__DOT__got[0U] = 1U;
    }
    if (__Vdlyvset__dma_top__DOT__got__v1) {
        vlSelf->dma_top__DOT__remain[1U] = __Vdlyvval__dma_top__DOT__remain__v2;
        vlSelf->dma_top__DOT__got[1U] = 1U;
    }
    if (__Vdlyvset__dma_top__DOT__got__v2) {
        vlSelf->dma_top__DOT__remain[2U] = __Vdlyvval__dma_top__DOT__remain__v3;
        vlSelf->dma_top__DOT__got[2U] = 1U;
    }
    if (__Vdlyvset__dma_top__DOT__got__v3) {
        vlSelf->dma_top__DOT__remain[3U] = __Vdlyvval__dma_top__DOT__remain__v4;
    }
    if (__Vdlyvset__dma_top__DOT__saddr__v1) {
        vlSelf->dma_top__DOT__remain[0U] = 0U;
        vlSelf->dma_top__DOT__remain[1U] = 0U;
        vlSelf->dma_top__DOT__remain[2U] = 0U;
        vlSelf->dma_top__DOT__remain[3U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__fsm__v12) {
        vlSelf->dma_top__DOT__remain[0U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__remain__v10) {
        vlSelf->dma_top__DOT__remain[0U] = __Vdlyvval__dma_top__DOT__remain__v10;
    }
    if (__Vdlyvset__dma_top__DOT__fsm__v13) {
        vlSelf->dma_top__DOT__remain[1U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__remain__v12) {
        vlSelf->dma_top__DOT__remain[1U] = __Vdlyvval__dma_top__DOT__remain__v12;
    }
    if (__Vdlyvset__dma_top__DOT__fsm__v14) {
        vlSelf->dma_top__DOT__hevt[2U] = 1U;
        vlSelf->dma_top__DOT__remain[2U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__remain__v14) {
        vlSelf->dma_top__DOT__remain[2U] = __Vdlyvval__dma_top__DOT__remain__v14;
    }
    if (__Vdlyvset__dma_top__DOT__fsm__v15) {
        vlSelf->dma_top__DOT__hevt[3U] = 1U;
        vlSelf->dma_top__DOT__remain[3U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__remain__v16) {
        vlSelf->dma_top__DOT__remain[3U] = __Vdlyvval__dma_top__DOT__remain__v16;
    }
    vlSelf->dma_top__DOT__conf_cnt = __Vdly__dma_top__DOT__conf_cnt;
    vlSelf->dma_top__DOT__s1_cfg = __Vdly__dma_top__DOT__s1_cfg;
    vlSelf->dma_top__DOT__s1_start = __Vdly__dma_top__DOT__s1_start;
    vlSelf->dma_top__DOT__s1_active = __Vdly__dma_top__DOT__s1_active;
    vlSelf->dma_top__DOT__s3_started = __Vdly__dma_top__DOT__s3_started;
    vlSelf->dma_top__DOT__s3_cfgs = __Vdly__dma_top__DOT__s3_cfgs;
    if (__Vdlyvset__dma_top__DOT__acont__v0) {
        vlSelf->dma_top__DOT__acont[0U] = __Vdlyvval__dma_top__DOT__acont__v0;
    }
    if (__Vdlyvset__dma_top__DOT__acont__v1) {
        vlSelf->dma_top__DOT__acont[0U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__acont__v2) {
        vlSelf->dma_top__DOT__acont[1U] = __Vdlyvval__dma_top__DOT__acont__v2;
    }
    if (__Vdlyvset__dma_top__DOT__acont__v3) {
        vlSelf->dma_top__DOT__acont[1U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__acont__v4) {
        vlSelf->dma_top__DOT__acont[2U] = __Vdlyvval__dma_top__DOT__acont__v4;
    }
    if (__Vdlyvset__dma_top__DOT__acont__v5) {
        vlSelf->dma_top__DOT__acont[2U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__acont__v6) {
        vlSelf->dma_top__DOT__acont[3U] = __Vdlyvval__dma_top__DOT__acont__v6;
    }
    if (__Vdlyvset__dma_top__DOT__acont__v7) {
        vlSelf->dma_top__DOT__acont[3U] = 0U;
    }
    vlSelf->dma_top__DOT__idle_cnt = __Vdly__dma_top__DOT__idle_cnt;
    if (__Vdlyvset__dma_top__DOT__saddr__v0) {
        vlSelf->dma_top__DOT__saddr[__Vdlyvdim0__dma_top__DOT__saddr__v0] 
            = __Vdlyvval__dma_top__DOT__saddr__v0;
    }
    if (__Vdlyvset__dma_top__DOT__daddr__v0) {
        vlSelf->dma_top__DOT__daddr[__Vdlyvdim0__dma_top__DOT__daddr__v0] 
            = __Vdlyvval__dma_top__DOT__daddr__v0;
    }
    if (__Vdlyvset__dma_top__DOT__got__v3) {
        vlSelf->dma_top__DOT__got[3U] = 1U;
    }
    if (__Vdlyvset__dma_top__DOT__saddr__v1) {
        vlSelf->dma_top__DOT__saddr[0U] = 0U;
        vlSelf->dma_top__DOT__saddr[1U] = 0U;
        vlSelf->dma_top__DOT__saddr[2U] = 0U;
        vlSelf->dma_top__DOT__saddr[3U] = 0U;
        vlSelf->dma_top__DOT__burst[0U] = 0U;
        vlSelf->dma_top__DOT__burst[1U] = 0U;
        vlSelf->dma_top__DOT__burst[2U] = 0U;
        vlSelf->dma_top__DOT__burst[3U] = 0U;
        vlSelf->dma_top__DOT__daddr[0U] = 0U;
        vlSelf->dma_top__DOT__daddr[1U] = 0U;
        vlSelf->dma_top__DOT__daddr[2U] = 0U;
        vlSelf->dma_top__DOT__daddr[3U] = 0U;
        vlSelf->dma_top__DOT__len[0U] = 0U;
        vlSelf->dma_top__DOT__len[1U] = 0U;
        vlSelf->dma_top__DOT__len[2U] = 0U;
        vlSelf->dma_top__DOT__len[3U] = 0U;
        vlSelf->dma_top__DOT__dmode[0U] = 0U;
        vlSelf->dma_top__DOT__dmode[1U] = 0U;
        vlSelf->dma_top__DOT__dmode[2U] = 0U;
        vlSelf->dma_top__DOT__dmode[3U] = 0U;
        vlSelf->dma_top__DOT__got[0U] = 0U;
        vlSelf->dma_top__DOT__got[1U] = 0U;
        vlSelf->dma_top__DOT__got[2U] = 0U;
        vlSelf->dma_top__DOT__got[3U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__fsm__v12) {
        vlSelf->dma_top__DOT__got[0U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__fsm__v13) {
        vlSelf->dma_top__DOT__got[1U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__fsm__v14) {
        vlSelf->dma_top__DOT__got[2U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__fsm__v15) {
        vlSelf->dma_top__DOT__got[3U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__a2d__v0) {
        vlSelf->dma_top__DOT__a2d[0U] = __Vdlyvval__dma_top__DOT__a2d__v0;
    }
    if (__Vdlyvset__dma_top__DOT__a2d__v1) {
        vlSelf->dma_top__DOT__a2d[0U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__a2d__v2) {
        vlSelf->dma_top__DOT__a2d[0U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__a2d__v3) {
        vlSelf->dma_top__DOT__a2d[1U] = __Vdlyvval__dma_top__DOT__a2d__v3;
    }
    if (__Vdlyvset__dma_top__DOT__a2d__v4) {
        vlSelf->dma_top__DOT__a2d[1U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__a2d__v5) {
        vlSelf->dma_top__DOT__a2d[1U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__a2d__v6) {
        vlSelf->dma_top__DOT__a2d[2U] = __Vdlyvval__dma_top__DOT__a2d__v6;
    }
    if (__Vdlyvset__dma_top__DOT__a2d__v7) {
        vlSelf->dma_top__DOT__a2d[2U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__a2d__v8) {
        vlSelf->dma_top__DOT__a2d[2U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__a2d__v9) {
        vlSelf->dma_top__DOT__a2d[3U] = __Vdlyvval__dma_top__DOT__a2d__v9;
    }
    if (__Vdlyvset__dma_top__DOT__a2d__v10) {
        vlSelf->dma_top__DOT__a2d[3U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__a2d__v11) {
        vlSelf->dma_top__DOT__a2d[3U] = 0U;
    }
    vlSelf->dma_top__DOT__cov_seq8 = vlSelf->cov_seq8;
    vlSelf->dma_top__DOT__start_rise2 = ((~ (IData)(vlSelf->dma_top__DOT__start_d2)) 
                                         & (IData)(vlSelf->start));
    vlSelf->dma_top__DOT__cov_seq7 = vlSelf->cov_seq7;
    vlSelf->dma_top__DOT__cov_seq6 = vlSelf->cov_seq6;
    vlSelf->dma_top__DOT__cov_seq1 = vlSelf->cov_seq1;
    vlSelf->dma_top__DOT__cov_seq3 = vlSelf->cov_seq3;
    vlSelf->dma_top__DOT__cov_seq4 = vlSelf->cov_seq4;
    vlSelf->dma_top__DOT__cov_arb_valid = vlSelf->cov_arb_valid;
    vlSelf->dma_top__DOT__cov_arb_conflict = vlSelf->cov_arb_conflict;
    vlSelf->dma_top__DOT__cov_seq2 = vlSelf->cov_seq2;
    vlSelf->dma_top__DOT__cov_arb_winner = vlSelf->cov_arb_winner;
    vlSelf->dma_top__DOT__cov_seq9 = vlSelf->cov_seq9;
    vlSelf->dma_top__DOT__cov_seq5 = vlSelf->cov_seq5;
    vlSelf->dma_top__DOT__hold_prev = ((IData)(vlSelf->rst_n) 
                                       && (IData)(vlSelf->cov_hold));
    vlSelf->dma_top__DOT__cov_saddr = vlSelf->cov_saddr;
    vlSelf->dma_top__DOT__cov_burst = vlSelf->cov_burst;
    vlSelf->dma_top__DOT__cov_daddr = vlSelf->cov_daddr;
    vlSelf->dma_top__DOT__cov_len = vlSelf->cov_len;
    vlSelf->dma_top__DOT__cov_dir = vlSelf->cov_dir;
    vlSelf->dma_top__DOT__cov_seq10 = vlSelf->cov_seq10;
    vlSelf->dma_top__DOT__cov_seq12 = vlSelf->cov_seq12;
    vlSelf->dma_top__DOT__cov_seq11 = vlSelf->cov_seq11;
    vlSelf->dma_top__DOT__pw_valid = ((IData)(vlSelf->rst_n) 
                                      && ((IData)(vlSelf->dma_top__DOT__arb_valid) 
                                          & (~ (IData)(vlSelf->cov_hold))));
    if (vlSelf->rst_n) {
        vlSelf->cov_done_ok_valid = 0U;
        if ((0U == (IData)(vlSelf->dma_top__DOT__hld_state))) {
            if ((0U != (IData)(vlSelf->dma_top__DOT__any_hevt))) {
                if ((4U == (IData)(vlSelf->dma_top__DOT__comp_dmode))) {
                    __Vdly__dma_top__DOT__hld_class = 0U;
                } else if ((3U == (IData)(vlSelf->dma_top__DOT__comp_dmode))) {
                    __Vdly__dma_top__DOT__hld_class = 1U;
                } else if ((5U == (IData)(vlSelf->dma_top__DOT__comp_dmode))) {
                    __Vdly__dma_top__DOT__hld_class = 2U;
                } else if ((7U == (IData)(vlSelf->dma_top__DOT__comp_dmode))) {
                    __Vdly__dma_top__DOT__hld_class = 3U;
                }
                if (vlSelf->dma_top__DOT__comp_correct) {
                    __Vdly__dma_top__DOT__hld_state = 1U;
                    __Vdly__dma_top__DOT__hld_cnt = 0x10U;
                    vlSelf->cov_hold = 1U;
                }
            }
        } else if ((1U == (IData)(vlSelf->dma_top__DOT__hld_state))) {
            if ((1U == (IData)(vlSelf->dma_top__DOT__hld_cnt))) {
                vlSelf->cov_done_ok_valid = 1U;
                vlSelf->cov_done_class = vlSelf->dma_top__DOT__hld_class;
                __Vdly__dma_top__DOT__hld_state = 2U;
                vlSelf->cov_hold = 0U;
            } else {
                __Vdly__dma_top__DOT__hld_cnt = (0xffffU 
                                                 & ((IData)(vlSelf->dma_top__DOT__hld_cnt) 
                                                    - (IData)(1U)));
            }
        } else {
            __Vdly__dma_top__DOT__hld_state = 0U;
        }
    } else {
        __Vdly__dma_top__DOT__hld_state = 0U;
        __Vdly__dma_top__DOT__hld_cnt = 0U;
        __Vdly__dma_top__DOT__hld_class = 0U;
        vlSelf->cov_hold = 0U;
        vlSelf->cov_done_ok_valid = 0U;
        vlSelf->cov_done_class = 0U;
    }
    vlSelf->dma_top__DOT__a_any_start = (0U != (IData)(vlSelf->dma_top__DOT__start_rise2));
    if (__Vdlyvset__dma_top__DOT__fsm__v0) {
        vlSelf->dma_top__DOT__fsm[0U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__fsm__v1) {
        vlSelf->dma_top__DOT__fsm[1U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__fsm__v2) {
        vlSelf->dma_top__DOT__fsm[2U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__fsm__v3) {
        vlSelf->dma_top__DOT__fsm[3U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__got__v0) {
        vlSelf->dma_top__DOT__fsm[0U] = __Vdlyvval__dma_top__DOT__fsm__v4;
    }
    if (__Vdlyvset__dma_top__DOT__got__v1) {
        vlSelf->dma_top__DOT__fsm[1U] = __Vdlyvval__dma_top__DOT__fsm__v5;
    }
    if (__Vdlyvset__dma_top__DOT__got__v2) {
        vlSelf->dma_top__DOT__fsm[2U] = __Vdlyvval__dma_top__DOT__fsm__v6;
    }
    if (__Vdlyvset__dma_top__DOT__got__v3) {
        vlSelf->dma_top__DOT__fsm[3U] = __Vdlyvval__dma_top__DOT__fsm__v7;
    }
    if (__Vdlyvset__dma_top__DOT__saddr__v1) {
        vlSelf->dma_top__DOT__fsm[0U] = 0U;
        vlSelf->dma_top__DOT__fsm[1U] = 0U;
        vlSelf->dma_top__DOT__fsm[2U] = 0U;
        vlSelf->dma_top__DOT__fsm[3U] = 0U;
    }
    if (__Vdlyvset__dma_top__DOT__fsm__v12) {
        vlSelf->dma_top__DOT__fsm[0U] = 2U;
    }
    if (__Vdlyvset__dma_top__DOT__fsm__v13) {
        vlSelf->dma_top__DOT__fsm[1U] = 2U;
    }
    if (__Vdlyvset__dma_top__DOT__fsm__v14) {
        vlSelf->dma_top__DOT__fsm[2U] = 2U;
    }
    if (__Vdlyvset__dma_top__DOT__fsm__v15) {
        vlSelf->dma_top__DOT__fsm[3U] = 2U;
    }
    if (__Vdlyvset__dma_top__DOT__fsm__v16) {
        vlSelf->dma_top__DOT__hevt[0U] = 0U;
        vlSelf->dma_top__DOT__hevt[1U] = 0U;
        vlSelf->dma_top__DOT__hevt[2U] = 0U;
        vlSelf->dma_top__DOT__hevt[3U] = 0U;
        vlSelf->dma_top__DOT__remain[0U] = 0U;
        vlSelf->dma_top__DOT__remain[1U] = 0U;
        vlSelf->dma_top__DOT__remain[2U] = 0U;
        vlSelf->dma_top__DOT__remain[3U] = 0U;
        vlSelf->dma_top__DOT__got[0U] = 0U;
        vlSelf->dma_top__DOT__got[1U] = 0U;
        vlSelf->dma_top__DOT__got[2U] = 0U;
        vlSelf->dma_top__DOT__got[3U] = 0U;
        vlSelf->dma_top__DOT__fsm[0U] = 0U;
        vlSelf->dma_top__DOT__fsm[1U] = 0U;
        vlSelf->dma_top__DOT__fsm[2U] = 0U;
        vlSelf->dma_top__DOT__fsm[3U] = 0U;
    }
    vlSelf->dma_top__DOT__u_arb__DOT__grant = vlSelf->dma_top__DOT__g;
    vlSelf->dma_top__DOT__cov_active_ch = vlSelf->cov_active_ch;
    vlSelf->dma_top__DOT__got_any = (vlSelf->dma_top__DOT__got
                                     [3U] | (vlSelf->dma_top__DOT__got
                                             [2U] | 
                                             (vlSelf->dma_top__DOT__got
                                              [1U] 
                                              | vlSelf->dma_top__DOT__got
                                              [0U])));
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
    vlSelf->dma_top__DOT__cov_ch0_state = vlSelf->cov_ch0_state;
    vlSelf->dma_top__DOT__cov_ch1_state = vlSelf->cov_ch1_state;
    vlSelf->dma_top__DOT__cov_ch2_state = vlSelf->cov_ch2_state;
    vlSelf->dma_top__DOT__cov_ch3_state = vlSelf->cov_ch3_state;
    vlSelf->dma_top__DOT__a_any_active = (0U != (IData)(vlSelf->dma_top__DOT__any_active_v));
    vlSelf->dma_top__DOT__a_any_done = (0U != (IData)(vlSelf->dma_top__DOT__any_done_v));
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
    vlSelf->dma_top__DOT__any_hevt = ((vlSelf->dma_top__DOT__hevt
                                       [3U] << 3U) 
                                      | ((vlSelf->dma_top__DOT__hevt
                                          [2U] << 2U) 
                                         | ((vlSelf->dma_top__DOT__hevt
                                             [1U] << 1U) 
                                            | vlSelf->dma_top__DOT__hevt
                                            [0U])));
    vlSelf->dma_top__DOT__hld_class = __Vdly__dma_top__DOT__hld_class;
    vlSelf->dma_top__DOT__hld_state = __Vdly__dma_top__DOT__hld_state;
    vlSelf->dma_top__DOT__hld_cnt = __Vdly__dma_top__DOT__hld_cnt;
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
    vlSelf->dma_top__DOT__u_arb__DOT__winner = vlSelf->dma_top__DOT__w;
    vlSelf->dma_top__DOT__cov_done_ok_valid = vlSelf->cov_done_ok_valid;
    vlSelf->dma_top__DOT__comp_correct = ((4U == (IData)(vlSelf->dma_top__DOT__comp_dmode)) 
                                          | ((3U == (IData)(vlSelf->dma_top__DOT__comp_dmode)) 
                                             | ((5U 
                                                 == (IData)(vlSelf->dma_top__DOT__comp_dmode)) 
                                                | (7U 
                                                   == (IData)(vlSelf->dma_top__DOT__comp_dmode)))));
    vlSelf->dma_top__DOT__cov_done_class = vlSelf->cov_done_class;
    vlSelf->dma_top__DOT__cov_hold = vlSelf->cov_hold;
    vlSelf->dma_top__DOT__cfg_write_ok = ((IData)(vlSelf->conf_wr) 
                                          & ((~ (vlSelf->dma_top__DOT__got
                                                 [vlSelf->conf_ch] 
                                                 | (IData)(vlSelf->cov_hold))) 
                                             & (0U 
                                                == 
                                                vlSelf->dma_top__DOT__fsm
                                                [vlSelf->conf_ch])));
    vlSelf->dma_top__DOT__req_nh = ((~ (- (IData)((IData)(vlSelf->cov_hold)))) 
                                    & (IData)(vlSelf->dma_top__DOT__req));
    vlSelf->dma_top__DOT__u_arb__DOT__req = vlSelf->dma_top__DOT__req_nh;
    vlSelf->dma_top__DOT__arb_valid = (0U != (IData)(vlSelf->dma_top__DOT__req_nh));
}

void Vdma_top___024root___eval_nba(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdma_top___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vdma_top___024root___eval_triggers__act(Vdma_top___024root* vlSelf);

bool Vdma_top___024root___eval_phase__act(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdma_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vdma_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdma_top___024root___eval_phase__nba(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdma_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdma_top___024root___dump_triggers__ico(Vdma_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdma_top___024root___dump_triggers__nba(Vdma_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdma_top___024root___dump_triggers__act(Vdma_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vdma_top___024root___eval(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vdma_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/Race/workspace/eda-workspace/dma_xfer_public/dma_xfer_public/verilator_harness/../dut/dma_top.v", 31, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vdma_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdma_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/Race/workspace/eda-workspace/dma_xfer_public/dma_xfer_public/verilator_harness/../dut/dma_top.v", 31, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vdma_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/Race/workspace/eda-workspace/dma_xfer_public/dma_xfer_public/verilator_harness/../dut/dma_top.v", 31, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vdma_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vdma_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdma_top___024root___eval_debug_assertions(Vdma_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->conf_ch & 0xfcU))) {
        Verilated::overWidthError("conf_ch");}
    if (VL_UNLIKELY((vlSelf->conf_wr & 0xfeU))) {
        Verilated::overWidthError("conf_wr");}
    if (VL_UNLIKELY((vlSelf->conf_field & 0xfcU))) {
        Verilated::overWidthError("conf_field");}
    if (VL_UNLIKELY((vlSelf->start & 0xf0U))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
