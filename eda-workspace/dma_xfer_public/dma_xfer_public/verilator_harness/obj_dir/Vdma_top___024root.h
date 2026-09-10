// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma_top.h for the primary calling header

#ifndef VERILATED_VDMA_TOP___024ROOT_H_
#define VERILATED_VDMA_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vdma_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(conf_ch,1,0);
        VL_IN8(conf_wr,0,0);
        VL_IN8(conf_field,1,0);
        VL_IN8(start,3,0);
        VL_OUT8(cov_ch0_state,1,0);
        VL_OUT8(cov_ch1_state,1,0);
        VL_OUT8(cov_ch2_state,1,0);
        VL_OUT8(cov_ch3_state,1,0);
        VL_OUT8(cov_arb_winner,1,0);
        VL_OUT8(cov_arb_valid,0,0);
        VL_OUT8(cov_arb_conflict,0,0);
        VL_OUT8(cov_active_ch,1,0);
        VL_OUT8(cov_dir,3,0);
        VL_OUT8(cov_burst,2,0);
        VL_OUT8(cov_hold,0,0);
        VL_OUT8(cov_done_ok_valid,0,0);
        VL_OUT8(cov_done_class,3,0);
        VL_OUT8(cov_seq1,0,0);
        VL_OUT8(cov_seq2,0,0);
        VL_OUT8(cov_seq3,0,0);
        VL_OUT8(cov_seq4,0,0);
        VL_OUT8(cov_seq5,0,0);
        VL_OUT8(cov_seq6,0,0);
        VL_OUT8(cov_seq7,0,0);
        VL_OUT8(cov_seq8,0,0);
        VL_OUT8(cov_seq9,0,0);
        VL_OUT8(cov_seq10,0,0);
        VL_OUT8(cov_seq11,0,0);
        VL_OUT8(cov_seq12,0,0);
        CData/*0:0*/ dma_top__DOT__clk;
        CData/*0:0*/ dma_top__DOT__rst_n;
        CData/*1:0*/ dma_top__DOT__conf_ch;
        CData/*0:0*/ dma_top__DOT__conf_wr;
        CData/*1:0*/ dma_top__DOT__conf_field;
        CData/*3:0*/ dma_top__DOT__start;
        CData/*1:0*/ dma_top__DOT__cov_ch0_state;
        CData/*1:0*/ dma_top__DOT__cov_ch1_state;
        CData/*1:0*/ dma_top__DOT__cov_ch2_state;
        CData/*1:0*/ dma_top__DOT__cov_ch3_state;
        CData/*1:0*/ dma_top__DOT__cov_arb_winner;
        CData/*0:0*/ dma_top__DOT__cov_arb_valid;
        CData/*0:0*/ dma_top__DOT__cov_arb_conflict;
        CData/*1:0*/ dma_top__DOT__cov_active_ch;
        CData/*3:0*/ dma_top__DOT__cov_dir;
        CData/*2:0*/ dma_top__DOT__cov_burst;
        CData/*0:0*/ dma_top__DOT__cov_hold;
        CData/*0:0*/ dma_top__DOT__cov_done_ok_valid;
        CData/*3:0*/ dma_top__DOT__cov_done_class;
        CData/*0:0*/ dma_top__DOT__cov_seq1;
        CData/*0:0*/ dma_top__DOT__cov_seq2;
        CData/*0:0*/ dma_top__DOT__cov_seq3;
        CData/*0:0*/ dma_top__DOT__cov_seq4;
        CData/*0:0*/ dma_top__DOT__cov_seq5;
        CData/*0:0*/ dma_top__DOT__cov_seq6;
        CData/*0:0*/ dma_top__DOT__cov_seq7;
        CData/*0:0*/ dma_top__DOT__cov_seq8;
        CData/*0:0*/ dma_top__DOT__cov_seq9;
        CData/*0:0*/ dma_top__DOT__cov_seq10;
        CData/*0:0*/ dma_top__DOT__cov_seq11;
        CData/*0:0*/ dma_top__DOT__cov_seq12;
        CData/*3:0*/ dma_top__DOT__start_d;
        CData/*3:0*/ dma_top__DOT__req;
    };
    struct {
        CData/*3:0*/ dma_top__DOT__req_nh;
        CData/*0:0*/ dma_top__DOT__arb_valid;
        CData/*1:0*/ dma_top__DOT__w_ord0;
        CData/*1:0*/ dma_top__DOT__w_ord1;
        CData/*1:0*/ dma_top__DOT__w_ord2;
        CData/*1:0*/ dma_top__DOT__w_ord3;
        CData/*1:0*/ dma_top__DOT__ord0;
        CData/*1:0*/ dma_top__DOT__ord1;
        CData/*1:0*/ dma_top__DOT__ord2;
        CData/*1:0*/ dma_top__DOT__ord3;
        CData/*3:0*/ dma_top__DOT__g;
        CData/*1:0*/ dma_top__DOT__w;
        CData/*1:0*/ dma_top__DOT__hld_state;
        CData/*3:0*/ dma_top__DOT__hld_class;
        CData/*3:0*/ dma_top__DOT__any_hevt;
        CData/*3:0*/ dma_top__DOT__comp_dmode;
        CData/*0:0*/ dma_top__DOT__comp_correct;
        CData/*0:0*/ dma_top__DOT__arb_conflict_w;
        CData/*0:0*/ dma_top__DOT__cfg_write_ok;
        CData/*3:0*/ dma_top__DOT__start_d2;
        CData/*3:0*/ dma_top__DOT__start_rise2;
        CData/*0:0*/ dma_top__DOT__s1_cfg;
        CData/*0:0*/ dma_top__DOT__s1_start;
        CData/*0:0*/ dma_top__DOT__s1_active;
        CData/*0:0*/ dma_top__DOT__s3_started;
        CData/*0:0*/ dma_top__DOT__s3_cfgs;
        CData/*0:0*/ dma_top__DOT__hold_prev;
        CData/*2:0*/ dma_top__DOT__conf_cnt;
        CData/*4:0*/ dma_top__DOT__arb_cnt;
        CData/*4:0*/ dma_top__DOT__idle_cnt;
        CData/*4:0*/ dma_top__DOT__hold_cnt_internal;
        CData/*1:0*/ dma_top__DOT__pw;
        CData/*0:0*/ dma_top__DOT__pw_valid;
        CData/*3:0*/ dma_top__DOT__any_active_v;
        CData/*3:0*/ dma_top__DOT__any_done_v;
        CData/*0:0*/ dma_top__DOT__got_any;
        CData/*0:0*/ dma_top__DOT__a_any_start;
        CData/*0:0*/ dma_top__DOT__a_any_active;
        CData/*0:0*/ dma_top__DOT__a_any_done;
        CData/*0:0*/ dma_top__DOT__u_arb__DOT__clk;
        CData/*0:0*/ dma_top__DOT__u_arb__DOT__rst_n;
        CData/*3:0*/ dma_top__DOT__u_arb__DOT__req;
        CData/*3:0*/ dma_top__DOT__u_arb__DOT__grant;
        CData/*1:0*/ dma_top__DOT__u_arb__DOT__winner;
        CData/*0:0*/ dma_top__DOT__u_arb__DOT__grant_valid;
        CData/*1:0*/ dma_top__DOT__u_arb__DOT__ord0;
        CData/*1:0*/ dma_top__DOT__u_arb__DOT__ord1;
        CData/*1:0*/ dma_top__DOT__u_arb__DOT__ord2;
        CData/*1:0*/ dma_top__DOT__u_arb__DOT__ord3;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(cov_len,15,0);
        SData/*15:0*/ dma_top__DOT__cov_len;
        SData/*15:0*/ dma_top__DOT__hld_cnt;
        VL_IN(conf_data,31,0);
        VL_OUT(cov_saddr,31,0);
        VL_OUT(cov_daddr,31,0);
        IData/*31:0*/ dma_top__DOT__conf_data;
        IData/*31:0*/ dma_top__DOT__cov_saddr;
        IData/*31:0*/ dma_top__DOT__cov_daddr;
        IData/*31:0*/ dma_top__DOT__i;
    };
    struct {
        IData/*31:0*/ dma_top__DOT__bi;
        IData/*31:0*/ dma_top__DOT__qi;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 4> dma_top__DOT__saddr;
        VlUnpacked<IData/*31:0*/, 4> dma_top__DOT__daddr;
        VlUnpacked<SData/*15:0*/, 4> dma_top__DOT__len;
        VlUnpacked<CData/*3:0*/, 4> dma_top__DOT__dmode;
        VlUnpacked<CData/*2:0*/, 4> dma_top__DOT__burst;
        VlUnpacked<CData/*1:0*/, 4> dma_top__DOT__fsm;
        VlUnpacked<SData/*15:0*/, 4> dma_top__DOT__remain;
        VlUnpacked<CData/*0:0*/, 4> dma_top__DOT__got;
        VlUnpacked<CData/*0:0*/, 4> dma_top__DOT__hevt;
        VlUnpacked<CData/*3:0*/, 4> dma_top__DOT__a2d;
        VlUnpacked<CData/*3:0*/, 4> dma_top__DOT__acont;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdma_top__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*7:0*/ dma_top__DOT__ARB_PRIO = 0xe4U;
    static constexpr CData/*7:0*/ dma_top__DOT__u_arb__DOT__ARB_PRIO = 0xe4U;
    static constexpr SData/*15:0*/ dma_top__DOT__DONE_OK_MODES = 0x7534U;
    static constexpr SData/*15:0*/ dma_top__DOT__XFER_HOLD_N = 0x0010U;
    static constexpr IData/*31:0*/ dma_top__DOT__ADDR_W = 0x00000020U;
    static constexpr IData/*31:0*/ dma_top__DOT__LEN_W = 0x00000010U;
    static constexpr IData/*31:0*/ dma_top__DOT__N_CH = 4U;
    static constexpr IData/*31:0*/ dma_top__DOT__u_arb__DOT__N_CH = 4U;
    static constexpr IData/*31:0*/ dma_top__DOT__u_arb__DOT__PRIO_BITS = 8U;

    // CONSTRUCTORS
    Vdma_top___024root(Vdma_top__Syms* symsp, const char* v__name);
    ~Vdma_top___024root();
    VL_UNCOPYABLE(Vdma_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
