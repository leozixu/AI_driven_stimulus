// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdma_top__Syms.h"


VL_ATTR_COLD void Vdma_top___024root__trace_init_sub__TOP__0(Vdma_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"conf_ch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+4,0,"conf_wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"conf_field",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+6,0,"conf_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"cov_ch0_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"cov_ch1_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"cov_ch2_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11,0,"cov_ch3_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"cov_arb_winner",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+13,0,"cov_arb_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"cov_arb_conflict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"cov_active_ch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+16,0,"cov_dir",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"cov_burst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"cov_saddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"cov_daddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"cov_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+21,0,"cov_hold",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"cov_done_ok_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"cov_done_class",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+24,0,"cov_seq1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"cov_seq2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"cov_seq3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"cov_seq4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"cov_seq5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"cov_seq6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"cov_seq7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"cov_seq8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"cov_seq9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"cov_seq10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"cov_seq11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"cov_seq12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dma_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+170,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"LEN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"N_CH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"DONE_OK_MODES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+174,0,"XFER_HOLD_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+175,0,"ARB_PRIO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+36,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"conf_ch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+39,0,"conf_wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"conf_field",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+41,0,"conf_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+43,0,"cov_ch0_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+44,0,"cov_ch1_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+45,0,"cov_ch2_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+46,0,"cov_ch3_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"cov_arb_winner",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+48,0,"cov_arb_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"cov_arb_conflict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"cov_active_ch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"cov_dir",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+52,0,"cov_burst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+53,0,"cov_saddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"cov_daddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"cov_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+56,0,"cov_hold",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"cov_done_ok_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"cov_done_class",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+59,0,"cov_seq1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"cov_seq2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"cov_seq3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"cov_seq4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"cov_seq5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"cov_seq6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"cov_seq7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"cov_seq8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"cov_seq9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"cov_seq10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"cov_seq11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"cov_seq12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("saddr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+71+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("daddr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+75+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("len", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+79+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("dmode", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+83+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("burst", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+87+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("fsm", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+91+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("remain", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+95+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("got", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+99+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("hevt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+103+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+107,0,"start_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+108,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+109,0,"bi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+110,0,"req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+111,0,"req_nh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+112,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"w_ord0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+114,0,"w_ord1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+115,0,"w_ord2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+116,0,"w_ord3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+117,0,"ord0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+118,0,"ord1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+119,0,"ord2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+120,0,"ord3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+121,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+122,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+123,0,"hld_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+124,0,"hld_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+125,0,"hld_class",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+126,0,"any_hevt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+127,0,"comp_dmode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+128,0,"comp_correct",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"arb_conflict_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"cfg_write_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"start_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+132,0,"start_rise2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+133,0,"s1_cfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"s1_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"s1_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"s3_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"s3_cfgs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"hold_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"conf_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+140,0,"arb_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+141,0,"idle_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("a2d", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+142+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("acont", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+146+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+150,0,"hold_cnt_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+151,0,"pw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+152,0,"pw_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"any_active_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+154,0,"any_done_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+155,0,"got_any",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"a_any_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"a_any_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"a_any_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+159,0,"qi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("u_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+172,0,"N_CH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"PRIO_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"ARB_PRIO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+160,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+163,0,"grant",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+164,0,"winner",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+165,0,"grant_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"ord0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+167,0,"ord1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+168,0,"ord2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+169,0,"ord3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdma_top___024root__trace_init_top(Vdma_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root__trace_init_top\n"); );
    // Body
    Vdma_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdma_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdma_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdma_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdma_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdma_top___024root__trace_register(Vdma_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vdma_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdma_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdma_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdma_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdma_top___024root__trace_const_0_sub_0(Vdma_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdma_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root__trace_const_0\n"); );
    // Init
    Vdma_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdma_top___024root*>(voidSelf);
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdma_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdma_top___024root__trace_const_0_sub_0(Vdma_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+170,(0x20U),32);
    bufp->fullIData(oldp+171,(0x10U),32);
    bufp->fullIData(oldp+172,(4U),32);
    bufp->fullSData(oldp+173,(0x7534U),16);
    bufp->fullSData(oldp+174,(0x10U),16);
    bufp->fullCData(oldp+175,(0xe4U),8);
    bufp->fullIData(oldp+176,(8U),32);
}

VL_ATTR_COLD void Vdma_top___024root__trace_full_0_sub_0(Vdma_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdma_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root__trace_full_0\n"); );
    // Init
    Vdma_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdma_top___024root*>(voidSelf);
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdma_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdma_top___024root__trace_full_0_sub_0(Vdma_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdma_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_top___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst_n));
    bufp->fullCData(oldp+3,(vlSelf->conf_ch),2);
    bufp->fullBit(oldp+4,(vlSelf->conf_wr));
    bufp->fullCData(oldp+5,(vlSelf->conf_field),2);
    bufp->fullIData(oldp+6,(vlSelf->conf_data),32);
    bufp->fullCData(oldp+7,(vlSelf->start),4);
    bufp->fullCData(oldp+8,(vlSelf->cov_ch0_state),2);
    bufp->fullCData(oldp+9,(vlSelf->cov_ch1_state),2);
    bufp->fullCData(oldp+10,(vlSelf->cov_ch2_state),2);
    bufp->fullCData(oldp+11,(vlSelf->cov_ch3_state),2);
    bufp->fullCData(oldp+12,(vlSelf->cov_arb_winner),2);
    bufp->fullBit(oldp+13,(vlSelf->cov_arb_valid));
    bufp->fullBit(oldp+14,(vlSelf->cov_arb_conflict));
    bufp->fullCData(oldp+15,(vlSelf->cov_active_ch),2);
    bufp->fullCData(oldp+16,(vlSelf->cov_dir),4);
    bufp->fullCData(oldp+17,(vlSelf->cov_burst),3);
    bufp->fullIData(oldp+18,(vlSelf->cov_saddr),32);
    bufp->fullIData(oldp+19,(vlSelf->cov_daddr),32);
    bufp->fullSData(oldp+20,(vlSelf->cov_len),16);
    bufp->fullBit(oldp+21,(vlSelf->cov_hold));
    bufp->fullBit(oldp+22,(vlSelf->cov_done_ok_valid));
    bufp->fullCData(oldp+23,(vlSelf->cov_done_class),4);
    bufp->fullBit(oldp+24,(vlSelf->cov_seq1));
    bufp->fullBit(oldp+25,(vlSelf->cov_seq2));
    bufp->fullBit(oldp+26,(vlSelf->cov_seq3));
    bufp->fullBit(oldp+27,(vlSelf->cov_seq4));
    bufp->fullBit(oldp+28,(vlSelf->cov_seq5));
    bufp->fullBit(oldp+29,(vlSelf->cov_seq6));
    bufp->fullBit(oldp+30,(vlSelf->cov_seq7));
    bufp->fullBit(oldp+31,(vlSelf->cov_seq8));
    bufp->fullBit(oldp+32,(vlSelf->cov_seq9));
    bufp->fullBit(oldp+33,(vlSelf->cov_seq10));
    bufp->fullBit(oldp+34,(vlSelf->cov_seq11));
    bufp->fullBit(oldp+35,(vlSelf->cov_seq12));
    bufp->fullBit(oldp+36,(vlSelf->dma_top__DOT__clk));
    bufp->fullBit(oldp+37,(vlSelf->dma_top__DOT__rst_n));
    bufp->fullCData(oldp+38,(vlSelf->dma_top__DOT__conf_ch),2);
    bufp->fullBit(oldp+39,(vlSelf->dma_top__DOT__conf_wr));
    bufp->fullCData(oldp+40,(vlSelf->dma_top__DOT__conf_field),2);
    bufp->fullIData(oldp+41,(vlSelf->dma_top__DOT__conf_data),32);
    bufp->fullCData(oldp+42,(vlSelf->dma_top__DOT__start),4);
    bufp->fullCData(oldp+43,(vlSelf->dma_top__DOT__cov_ch0_state),2);
    bufp->fullCData(oldp+44,(vlSelf->dma_top__DOT__cov_ch1_state),2);
    bufp->fullCData(oldp+45,(vlSelf->dma_top__DOT__cov_ch2_state),2);
    bufp->fullCData(oldp+46,(vlSelf->dma_top__DOT__cov_ch3_state),2);
    bufp->fullCData(oldp+47,(vlSelf->dma_top__DOT__cov_arb_winner),2);
    bufp->fullBit(oldp+48,(vlSelf->dma_top__DOT__cov_arb_valid));
    bufp->fullBit(oldp+49,(vlSelf->dma_top__DOT__cov_arb_conflict));
    bufp->fullCData(oldp+50,(vlSelf->dma_top__DOT__cov_active_ch),2);
    bufp->fullCData(oldp+51,(vlSelf->dma_top__DOT__cov_dir),4);
    bufp->fullCData(oldp+52,(vlSelf->dma_top__DOT__cov_burst),3);
    bufp->fullIData(oldp+53,(vlSelf->dma_top__DOT__cov_saddr),32);
    bufp->fullIData(oldp+54,(vlSelf->dma_top__DOT__cov_daddr),32);
    bufp->fullSData(oldp+55,(vlSelf->dma_top__DOT__cov_len),16);
    bufp->fullBit(oldp+56,(vlSelf->dma_top__DOT__cov_hold));
    bufp->fullBit(oldp+57,(vlSelf->dma_top__DOT__cov_done_ok_valid));
    bufp->fullCData(oldp+58,(vlSelf->dma_top__DOT__cov_done_class),4);
    bufp->fullBit(oldp+59,(vlSelf->dma_top__DOT__cov_seq1));
    bufp->fullBit(oldp+60,(vlSelf->dma_top__DOT__cov_seq2));
    bufp->fullBit(oldp+61,(vlSelf->dma_top__DOT__cov_seq3));
    bufp->fullBit(oldp+62,(vlSelf->dma_top__DOT__cov_seq4));
    bufp->fullBit(oldp+63,(vlSelf->dma_top__DOT__cov_seq5));
    bufp->fullBit(oldp+64,(vlSelf->dma_top__DOT__cov_seq6));
    bufp->fullBit(oldp+65,(vlSelf->dma_top__DOT__cov_seq7));
    bufp->fullBit(oldp+66,(vlSelf->dma_top__DOT__cov_seq8));
    bufp->fullBit(oldp+67,(vlSelf->dma_top__DOT__cov_seq9));
    bufp->fullBit(oldp+68,(vlSelf->dma_top__DOT__cov_seq10));
    bufp->fullBit(oldp+69,(vlSelf->dma_top__DOT__cov_seq11));
    bufp->fullBit(oldp+70,(vlSelf->dma_top__DOT__cov_seq12));
    bufp->fullIData(oldp+71,(vlSelf->dma_top__DOT__saddr[0]),32);
    bufp->fullIData(oldp+72,(vlSelf->dma_top__DOT__saddr[1]),32);
    bufp->fullIData(oldp+73,(vlSelf->dma_top__DOT__saddr[2]),32);
    bufp->fullIData(oldp+74,(vlSelf->dma_top__DOT__saddr[3]),32);
    bufp->fullIData(oldp+75,(vlSelf->dma_top__DOT__daddr[0]),32);
    bufp->fullIData(oldp+76,(vlSelf->dma_top__DOT__daddr[1]),32);
    bufp->fullIData(oldp+77,(vlSelf->dma_top__DOT__daddr[2]),32);
    bufp->fullIData(oldp+78,(vlSelf->dma_top__DOT__daddr[3]),32);
    bufp->fullSData(oldp+79,(vlSelf->dma_top__DOT__len[0]),16);
    bufp->fullSData(oldp+80,(vlSelf->dma_top__DOT__len[1]),16);
    bufp->fullSData(oldp+81,(vlSelf->dma_top__DOT__len[2]),16);
    bufp->fullSData(oldp+82,(vlSelf->dma_top__DOT__len[3]),16);
    bufp->fullCData(oldp+83,(vlSelf->dma_top__DOT__dmode[0]),4);
    bufp->fullCData(oldp+84,(vlSelf->dma_top__DOT__dmode[1]),4);
    bufp->fullCData(oldp+85,(vlSelf->dma_top__DOT__dmode[2]),4);
    bufp->fullCData(oldp+86,(vlSelf->dma_top__DOT__dmode[3]),4);
    bufp->fullCData(oldp+87,(vlSelf->dma_top__DOT__burst[0]),3);
    bufp->fullCData(oldp+88,(vlSelf->dma_top__DOT__burst[1]),3);
    bufp->fullCData(oldp+89,(vlSelf->dma_top__DOT__burst[2]),3);
    bufp->fullCData(oldp+90,(vlSelf->dma_top__DOT__burst[3]),3);
    bufp->fullCData(oldp+91,(vlSelf->dma_top__DOT__fsm[0]),2);
    bufp->fullCData(oldp+92,(vlSelf->dma_top__DOT__fsm[1]),2);
    bufp->fullCData(oldp+93,(vlSelf->dma_top__DOT__fsm[2]),2);
    bufp->fullCData(oldp+94,(vlSelf->dma_top__DOT__fsm[3]),2);
    bufp->fullSData(oldp+95,(vlSelf->dma_top__DOT__remain[0]),16);
    bufp->fullSData(oldp+96,(vlSelf->dma_top__DOT__remain[1]),16);
    bufp->fullSData(oldp+97,(vlSelf->dma_top__DOT__remain[2]),16);
    bufp->fullSData(oldp+98,(vlSelf->dma_top__DOT__remain[3]),16);
    bufp->fullBit(oldp+99,(vlSelf->dma_top__DOT__got[0]));
    bufp->fullBit(oldp+100,(vlSelf->dma_top__DOT__got[1]));
    bufp->fullBit(oldp+101,(vlSelf->dma_top__DOT__got[2]));
    bufp->fullBit(oldp+102,(vlSelf->dma_top__DOT__got[3]));
    bufp->fullBit(oldp+103,(vlSelf->dma_top__DOT__hevt[0]));
    bufp->fullBit(oldp+104,(vlSelf->dma_top__DOT__hevt[1]));
    bufp->fullBit(oldp+105,(vlSelf->dma_top__DOT__hevt[2]));
    bufp->fullBit(oldp+106,(vlSelf->dma_top__DOT__hevt[3]));
    bufp->fullCData(oldp+107,(vlSelf->dma_top__DOT__start_d),4);
    bufp->fullIData(oldp+108,(vlSelf->dma_top__DOT__i),32);
    bufp->fullIData(oldp+109,(vlSelf->dma_top__DOT__bi),32);
    bufp->fullCData(oldp+110,(vlSelf->dma_top__DOT__req),4);
    bufp->fullCData(oldp+111,(vlSelf->dma_top__DOT__req_nh),4);
    bufp->fullBit(oldp+112,(vlSelf->dma_top__DOT__arb_valid));
    bufp->fullCData(oldp+113,(vlSelf->dma_top__DOT__w_ord0),2);
    bufp->fullCData(oldp+114,(vlSelf->dma_top__DOT__w_ord1),2);
    bufp->fullCData(oldp+115,(vlSelf->dma_top__DOT__w_ord2),2);
    bufp->fullCData(oldp+116,(vlSelf->dma_top__DOT__w_ord3),2);
    bufp->fullCData(oldp+117,(vlSelf->dma_top__DOT__ord0),2);
    bufp->fullCData(oldp+118,(vlSelf->dma_top__DOT__ord1),2);
    bufp->fullCData(oldp+119,(vlSelf->dma_top__DOT__ord2),2);
    bufp->fullCData(oldp+120,(vlSelf->dma_top__DOT__ord3),2);
    bufp->fullCData(oldp+121,(vlSelf->dma_top__DOT__g),4);
    bufp->fullCData(oldp+122,(vlSelf->dma_top__DOT__w),2);
    bufp->fullCData(oldp+123,(vlSelf->dma_top__DOT__hld_state),2);
    bufp->fullSData(oldp+124,(vlSelf->dma_top__DOT__hld_cnt),16);
    bufp->fullCData(oldp+125,(vlSelf->dma_top__DOT__hld_class),4);
    bufp->fullCData(oldp+126,(vlSelf->dma_top__DOT__any_hevt),4);
    bufp->fullCData(oldp+127,(vlSelf->dma_top__DOT__comp_dmode),4);
    bufp->fullBit(oldp+128,(vlSelf->dma_top__DOT__comp_correct));
    bufp->fullBit(oldp+129,(vlSelf->dma_top__DOT__arb_conflict_w));
    bufp->fullBit(oldp+130,(vlSelf->dma_top__DOT__cfg_write_ok));
    bufp->fullCData(oldp+131,(vlSelf->dma_top__DOT__start_d2),4);
    bufp->fullCData(oldp+132,(vlSelf->dma_top__DOT__start_rise2),4);
    bufp->fullBit(oldp+133,(vlSelf->dma_top__DOT__s1_cfg));
    bufp->fullBit(oldp+134,(vlSelf->dma_top__DOT__s1_start));
    bufp->fullBit(oldp+135,(vlSelf->dma_top__DOT__s1_active));
    bufp->fullBit(oldp+136,(vlSelf->dma_top__DOT__s3_started));
    bufp->fullBit(oldp+137,(vlSelf->dma_top__DOT__s3_cfgs));
    bufp->fullBit(oldp+138,(vlSelf->dma_top__DOT__hold_prev));
    bufp->fullCData(oldp+139,(vlSelf->dma_top__DOT__conf_cnt),3);
    bufp->fullCData(oldp+140,(vlSelf->dma_top__DOT__arb_cnt),5);
    bufp->fullCData(oldp+141,(vlSelf->dma_top__DOT__idle_cnt),5);
    bufp->fullCData(oldp+142,(vlSelf->dma_top__DOT__a2d[0]),4);
    bufp->fullCData(oldp+143,(vlSelf->dma_top__DOT__a2d[1]),4);
    bufp->fullCData(oldp+144,(vlSelf->dma_top__DOT__a2d[2]),4);
    bufp->fullCData(oldp+145,(vlSelf->dma_top__DOT__a2d[3]),4);
    bufp->fullCData(oldp+146,(vlSelf->dma_top__DOT__acont[0]),4);
    bufp->fullCData(oldp+147,(vlSelf->dma_top__DOT__acont[1]),4);
    bufp->fullCData(oldp+148,(vlSelf->dma_top__DOT__acont[2]),4);
    bufp->fullCData(oldp+149,(vlSelf->dma_top__DOT__acont[3]),4);
    bufp->fullCData(oldp+150,(vlSelf->dma_top__DOT__hold_cnt_internal),5);
    bufp->fullCData(oldp+151,(vlSelf->dma_top__DOT__pw),2);
    bufp->fullBit(oldp+152,(vlSelf->dma_top__DOT__pw_valid));
    bufp->fullCData(oldp+153,(vlSelf->dma_top__DOT__any_active_v),4);
    bufp->fullCData(oldp+154,(vlSelf->dma_top__DOT__any_done_v),4);
    bufp->fullBit(oldp+155,(vlSelf->dma_top__DOT__got_any));
    bufp->fullBit(oldp+156,(vlSelf->dma_top__DOT__a_any_start));
    bufp->fullBit(oldp+157,(vlSelf->dma_top__DOT__a_any_active));
    bufp->fullBit(oldp+158,(vlSelf->dma_top__DOT__a_any_done));
    bufp->fullIData(oldp+159,(vlSelf->dma_top__DOT__qi),32);
    bufp->fullBit(oldp+160,(vlSelf->dma_top__DOT__u_arb__DOT__clk));
    bufp->fullBit(oldp+161,(vlSelf->dma_top__DOT__u_arb__DOT__rst_n));
    bufp->fullCData(oldp+162,(vlSelf->dma_top__DOT__u_arb__DOT__req),4);
    bufp->fullCData(oldp+163,(vlSelf->dma_top__DOT__u_arb__DOT__grant),4);
    bufp->fullCData(oldp+164,(vlSelf->dma_top__DOT__u_arb__DOT__winner),2);
    bufp->fullBit(oldp+165,(vlSelf->dma_top__DOT__u_arb__DOT__grant_valid));
    bufp->fullCData(oldp+166,(vlSelf->dma_top__DOT__u_arb__DOT__ord0),2);
    bufp->fullCData(oldp+167,(vlSelf->dma_top__DOT__u_arb__DOT__ord1),2);
    bufp->fullCData(oldp+168,(vlSelf->dma_top__DOT__u_arb__DOT__ord2),2);
    bufp->fullCData(oldp+169,(vlSelf->dma_top__DOT__u_arb__DOT__ord3),2);
}
