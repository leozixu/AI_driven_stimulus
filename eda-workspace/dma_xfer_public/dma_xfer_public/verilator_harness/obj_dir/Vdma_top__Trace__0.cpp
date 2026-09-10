// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdma_top__Syms.h"


void Vdma_top___024root__trace_chg_0_sub_0(Vdma_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdma_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root__trace_chg_0\n"); );
    // Init
    Vdma_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdma_top___024root*>(voidSelf);
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdma_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdma_top___024root__trace_chg_0_sub_0(Vdma_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst_n));
    bufp->chgCData(oldp+2,(vlSelf->conf_ch),2);
    bufp->chgBit(oldp+3,(vlSelf->conf_wr));
    bufp->chgCData(oldp+4,(vlSelf->conf_field),2);
    bufp->chgIData(oldp+5,(vlSelf->conf_data),32);
    bufp->chgCData(oldp+6,(vlSelf->start),4);
    bufp->chgCData(oldp+7,(vlSelf->cov_ch0_state),2);
    bufp->chgCData(oldp+8,(vlSelf->cov_ch1_state),2);
    bufp->chgCData(oldp+9,(vlSelf->cov_ch2_state),2);
    bufp->chgCData(oldp+10,(vlSelf->cov_ch3_state),2);
    bufp->chgCData(oldp+11,(vlSelf->cov_arb_winner),2);
    bufp->chgBit(oldp+12,(vlSelf->cov_arb_valid));
    bufp->chgBit(oldp+13,(vlSelf->cov_arb_conflict));
    bufp->chgCData(oldp+14,(vlSelf->cov_active_ch),2);
    bufp->chgCData(oldp+15,(vlSelf->cov_dir),4);
    bufp->chgCData(oldp+16,(vlSelf->cov_burst),3);
    bufp->chgIData(oldp+17,(vlSelf->cov_saddr),32);
    bufp->chgIData(oldp+18,(vlSelf->cov_daddr),32);
    bufp->chgSData(oldp+19,(vlSelf->cov_len),16);
    bufp->chgBit(oldp+20,(vlSelf->cov_hold));
    bufp->chgBit(oldp+21,(vlSelf->cov_done_ok_valid));
    bufp->chgCData(oldp+22,(vlSelf->cov_done_class),4);
    bufp->chgBit(oldp+23,(vlSelf->cov_seq1));
    bufp->chgBit(oldp+24,(vlSelf->cov_seq2));
    bufp->chgBit(oldp+25,(vlSelf->cov_seq3));
    bufp->chgBit(oldp+26,(vlSelf->cov_seq4));
    bufp->chgBit(oldp+27,(vlSelf->cov_seq5));
    bufp->chgBit(oldp+28,(vlSelf->cov_seq6));
    bufp->chgBit(oldp+29,(vlSelf->cov_seq7));
    bufp->chgBit(oldp+30,(vlSelf->cov_seq8));
    bufp->chgBit(oldp+31,(vlSelf->cov_seq9));
    bufp->chgBit(oldp+32,(vlSelf->cov_seq10));
    bufp->chgBit(oldp+33,(vlSelf->cov_seq11));
    bufp->chgBit(oldp+34,(vlSelf->cov_seq12));
    bufp->chgBit(oldp+35,(vlSelf->dma_top__DOT__clk));
    bufp->chgBit(oldp+36,(vlSelf->dma_top__DOT__rst_n));
    bufp->chgCData(oldp+37,(vlSelf->dma_top__DOT__conf_ch),2);
    bufp->chgBit(oldp+38,(vlSelf->dma_top__DOT__conf_wr));
    bufp->chgCData(oldp+39,(vlSelf->dma_top__DOT__conf_field),2);
    bufp->chgIData(oldp+40,(vlSelf->dma_top__DOT__conf_data),32);
    bufp->chgCData(oldp+41,(vlSelf->dma_top__DOT__start),4);
    bufp->chgCData(oldp+42,(vlSelf->dma_top__DOT__cov_ch0_state),2);
    bufp->chgCData(oldp+43,(vlSelf->dma_top__DOT__cov_ch1_state),2);
    bufp->chgCData(oldp+44,(vlSelf->dma_top__DOT__cov_ch2_state),2);
    bufp->chgCData(oldp+45,(vlSelf->dma_top__DOT__cov_ch3_state),2);
    bufp->chgCData(oldp+46,(vlSelf->dma_top__DOT__cov_arb_winner),2);
    bufp->chgBit(oldp+47,(vlSelf->dma_top__DOT__cov_arb_valid));
    bufp->chgBit(oldp+48,(vlSelf->dma_top__DOT__cov_arb_conflict));
    bufp->chgCData(oldp+49,(vlSelf->dma_top__DOT__cov_active_ch),2);
    bufp->chgCData(oldp+50,(vlSelf->dma_top__DOT__cov_dir),4);
    bufp->chgCData(oldp+51,(vlSelf->dma_top__DOT__cov_burst),3);
    bufp->chgIData(oldp+52,(vlSelf->dma_top__DOT__cov_saddr),32);
    bufp->chgIData(oldp+53,(vlSelf->dma_top__DOT__cov_daddr),32);
    bufp->chgSData(oldp+54,(vlSelf->dma_top__DOT__cov_len),16);
    bufp->chgBit(oldp+55,(vlSelf->dma_top__DOT__cov_hold));
    bufp->chgBit(oldp+56,(vlSelf->dma_top__DOT__cov_done_ok_valid));
    bufp->chgCData(oldp+57,(vlSelf->dma_top__DOT__cov_done_class),4);
    bufp->chgBit(oldp+58,(vlSelf->dma_top__DOT__cov_seq1));
    bufp->chgBit(oldp+59,(vlSelf->dma_top__DOT__cov_seq2));
    bufp->chgBit(oldp+60,(vlSelf->dma_top__DOT__cov_seq3));
    bufp->chgBit(oldp+61,(vlSelf->dma_top__DOT__cov_seq4));
    bufp->chgBit(oldp+62,(vlSelf->dma_top__DOT__cov_seq5));
    bufp->chgBit(oldp+63,(vlSelf->dma_top__DOT__cov_seq6));
    bufp->chgBit(oldp+64,(vlSelf->dma_top__DOT__cov_seq7));
    bufp->chgBit(oldp+65,(vlSelf->dma_top__DOT__cov_seq8));
    bufp->chgBit(oldp+66,(vlSelf->dma_top__DOT__cov_seq9));
    bufp->chgBit(oldp+67,(vlSelf->dma_top__DOT__cov_seq10));
    bufp->chgBit(oldp+68,(vlSelf->dma_top__DOT__cov_seq11));
    bufp->chgBit(oldp+69,(vlSelf->dma_top__DOT__cov_seq12));
    bufp->chgIData(oldp+70,(vlSelf->dma_top__DOT__saddr[0]),32);
    bufp->chgIData(oldp+71,(vlSelf->dma_top__DOT__saddr[1]),32);
    bufp->chgIData(oldp+72,(vlSelf->dma_top__DOT__saddr[2]),32);
    bufp->chgIData(oldp+73,(vlSelf->dma_top__DOT__saddr[3]),32);
    bufp->chgIData(oldp+74,(vlSelf->dma_top__DOT__daddr[0]),32);
    bufp->chgIData(oldp+75,(vlSelf->dma_top__DOT__daddr[1]),32);
    bufp->chgIData(oldp+76,(vlSelf->dma_top__DOT__daddr[2]),32);
    bufp->chgIData(oldp+77,(vlSelf->dma_top__DOT__daddr[3]),32);
    bufp->chgSData(oldp+78,(vlSelf->dma_top__DOT__len[0]),16);
    bufp->chgSData(oldp+79,(vlSelf->dma_top__DOT__len[1]),16);
    bufp->chgSData(oldp+80,(vlSelf->dma_top__DOT__len[2]),16);
    bufp->chgSData(oldp+81,(vlSelf->dma_top__DOT__len[3]),16);
    bufp->chgCData(oldp+82,(vlSelf->dma_top__DOT__dmode[0]),4);
    bufp->chgCData(oldp+83,(vlSelf->dma_top__DOT__dmode[1]),4);
    bufp->chgCData(oldp+84,(vlSelf->dma_top__DOT__dmode[2]),4);
    bufp->chgCData(oldp+85,(vlSelf->dma_top__DOT__dmode[3]),4);
    bufp->chgCData(oldp+86,(vlSelf->dma_top__DOT__burst[0]),3);
    bufp->chgCData(oldp+87,(vlSelf->dma_top__DOT__burst[1]),3);
    bufp->chgCData(oldp+88,(vlSelf->dma_top__DOT__burst[2]),3);
    bufp->chgCData(oldp+89,(vlSelf->dma_top__DOT__burst[3]),3);
    bufp->chgCData(oldp+90,(vlSelf->dma_top__DOT__fsm[0]),2);
    bufp->chgCData(oldp+91,(vlSelf->dma_top__DOT__fsm[1]),2);
    bufp->chgCData(oldp+92,(vlSelf->dma_top__DOT__fsm[2]),2);
    bufp->chgCData(oldp+93,(vlSelf->dma_top__DOT__fsm[3]),2);
    bufp->chgSData(oldp+94,(vlSelf->dma_top__DOT__remain[0]),16);
    bufp->chgSData(oldp+95,(vlSelf->dma_top__DOT__remain[1]),16);
    bufp->chgSData(oldp+96,(vlSelf->dma_top__DOT__remain[2]),16);
    bufp->chgSData(oldp+97,(vlSelf->dma_top__DOT__remain[3]),16);
    bufp->chgBit(oldp+98,(vlSelf->dma_top__DOT__got[0]));
    bufp->chgBit(oldp+99,(vlSelf->dma_top__DOT__got[1]));
    bufp->chgBit(oldp+100,(vlSelf->dma_top__DOT__got[2]));
    bufp->chgBit(oldp+101,(vlSelf->dma_top__DOT__got[3]));
    bufp->chgBit(oldp+102,(vlSelf->dma_top__DOT__hevt[0]));
    bufp->chgBit(oldp+103,(vlSelf->dma_top__DOT__hevt[1]));
    bufp->chgBit(oldp+104,(vlSelf->dma_top__DOT__hevt[2]));
    bufp->chgBit(oldp+105,(vlSelf->dma_top__DOT__hevt[3]));
    bufp->chgCData(oldp+106,(vlSelf->dma_top__DOT__start_d),4);
    bufp->chgIData(oldp+107,(vlSelf->dma_top__DOT__i),32);
    bufp->chgIData(oldp+108,(vlSelf->dma_top__DOT__bi),32);
    bufp->chgCData(oldp+109,(vlSelf->dma_top__DOT__req),4);
    bufp->chgCData(oldp+110,(vlSelf->dma_top__DOT__req_nh),4);
    bufp->chgBit(oldp+111,(vlSelf->dma_top__DOT__arb_valid));
    bufp->chgCData(oldp+112,(vlSelf->dma_top__DOT__w_ord0),2);
    bufp->chgCData(oldp+113,(vlSelf->dma_top__DOT__w_ord1),2);
    bufp->chgCData(oldp+114,(vlSelf->dma_top__DOT__w_ord2),2);
    bufp->chgCData(oldp+115,(vlSelf->dma_top__DOT__w_ord3),2);
    bufp->chgCData(oldp+116,(vlSelf->dma_top__DOT__ord0),2);
    bufp->chgCData(oldp+117,(vlSelf->dma_top__DOT__ord1),2);
    bufp->chgCData(oldp+118,(vlSelf->dma_top__DOT__ord2),2);
    bufp->chgCData(oldp+119,(vlSelf->dma_top__DOT__ord3),2);
    bufp->chgCData(oldp+120,(vlSelf->dma_top__DOT__g),4);
    bufp->chgCData(oldp+121,(vlSelf->dma_top__DOT__w),2);
    bufp->chgCData(oldp+122,(vlSelf->dma_top__DOT__hld_state),2);
    bufp->chgSData(oldp+123,(vlSelf->dma_top__DOT__hld_cnt),16);
    bufp->chgCData(oldp+124,(vlSelf->dma_top__DOT__hld_class),4);
    bufp->chgCData(oldp+125,(vlSelf->dma_top__DOT__any_hevt),4);
    bufp->chgCData(oldp+126,(vlSelf->dma_top__DOT__comp_dmode),4);
    bufp->chgBit(oldp+127,(vlSelf->dma_top__DOT__comp_correct));
    bufp->chgBit(oldp+128,(vlSelf->dma_top__DOT__arb_conflict_w));
    bufp->chgBit(oldp+129,(vlSelf->dma_top__DOT__cfg_write_ok));
    bufp->chgCData(oldp+130,(vlSelf->dma_top__DOT__start_d2),4);
    bufp->chgCData(oldp+131,(vlSelf->dma_top__DOT__start_rise2),4);
    bufp->chgBit(oldp+132,(vlSelf->dma_top__DOT__s1_cfg));
    bufp->chgBit(oldp+133,(vlSelf->dma_top__DOT__s1_start));
    bufp->chgBit(oldp+134,(vlSelf->dma_top__DOT__s1_active));
    bufp->chgBit(oldp+135,(vlSelf->dma_top__DOT__s3_started));
    bufp->chgBit(oldp+136,(vlSelf->dma_top__DOT__s3_cfgs));
    bufp->chgBit(oldp+137,(vlSelf->dma_top__DOT__hold_prev));
    bufp->chgCData(oldp+138,(vlSelf->dma_top__DOT__conf_cnt),3);
    bufp->chgCData(oldp+139,(vlSelf->dma_top__DOT__arb_cnt),5);
    bufp->chgCData(oldp+140,(vlSelf->dma_top__DOT__idle_cnt),5);
    bufp->chgCData(oldp+141,(vlSelf->dma_top__DOT__a2d[0]),4);
    bufp->chgCData(oldp+142,(vlSelf->dma_top__DOT__a2d[1]),4);
    bufp->chgCData(oldp+143,(vlSelf->dma_top__DOT__a2d[2]),4);
    bufp->chgCData(oldp+144,(vlSelf->dma_top__DOT__a2d[3]),4);
    bufp->chgCData(oldp+145,(vlSelf->dma_top__DOT__acont[0]),4);
    bufp->chgCData(oldp+146,(vlSelf->dma_top__DOT__acont[1]),4);
    bufp->chgCData(oldp+147,(vlSelf->dma_top__DOT__acont[2]),4);
    bufp->chgCData(oldp+148,(vlSelf->dma_top__DOT__acont[3]),4);
    bufp->chgCData(oldp+149,(vlSelf->dma_top__DOT__hold_cnt_internal),5);
    bufp->chgCData(oldp+150,(vlSelf->dma_top__DOT__pw),2);
    bufp->chgBit(oldp+151,(vlSelf->dma_top__DOT__pw_valid));
    bufp->chgCData(oldp+152,(vlSelf->dma_top__DOT__any_active_v),4);
    bufp->chgCData(oldp+153,(vlSelf->dma_top__DOT__any_done_v),4);
    bufp->chgBit(oldp+154,(vlSelf->dma_top__DOT__got_any));
    bufp->chgBit(oldp+155,(vlSelf->dma_top__DOT__a_any_start));
    bufp->chgBit(oldp+156,(vlSelf->dma_top__DOT__a_any_active));
    bufp->chgBit(oldp+157,(vlSelf->dma_top__DOT__a_any_done));
    bufp->chgIData(oldp+158,(vlSelf->dma_top__DOT__qi),32);
    bufp->chgBit(oldp+159,(vlSelf->dma_top__DOT__u_arb__DOT__clk));
    bufp->chgBit(oldp+160,(vlSelf->dma_top__DOT__u_arb__DOT__rst_n));
    bufp->chgCData(oldp+161,(vlSelf->dma_top__DOT__u_arb__DOT__req),4);
    bufp->chgCData(oldp+162,(vlSelf->dma_top__DOT__u_arb__DOT__grant),4);
    bufp->chgCData(oldp+163,(vlSelf->dma_top__DOT__u_arb__DOT__winner),2);
    bufp->chgBit(oldp+164,(vlSelf->dma_top__DOT__u_arb__DOT__grant_valid));
    bufp->chgCData(oldp+165,(vlSelf->dma_top__DOT__u_arb__DOT__ord0),2);
    bufp->chgCData(oldp+166,(vlSelf->dma_top__DOT__u_arb__DOT__ord1),2);
    bufp->chgCData(oldp+167,(vlSelf->dma_top__DOT__u_arb__DOT__ord2),2);
    bufp->chgCData(oldp+168,(vlSelf->dma_top__DOT__u_arb__DOT__ord3),2);
}

void Vdma_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root__trace_cleanup\n"); );
    // Init
    Vdma_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdma_top___024root*>(voidSelf);
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
