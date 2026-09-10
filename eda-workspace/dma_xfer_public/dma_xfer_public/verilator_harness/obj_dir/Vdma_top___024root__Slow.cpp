// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma_top.h for the primary calling header

#include "Vdma_top__pch.h"
#include "Vdma_top__Syms.h"
#include "Vdma_top___024root.h"

// Parameter definitions for Vdma_top___024root
constexpr CData/*7:0*/ Vdma_top___024root::dma_top__DOT__ARB_PRIO;
constexpr CData/*7:0*/ Vdma_top___024root::dma_top__DOT__u_arb__DOT__ARB_PRIO;
constexpr SData/*15:0*/ Vdma_top___024root::dma_top__DOT__DONE_OK_MODES;
constexpr SData/*15:0*/ Vdma_top___024root::dma_top__DOT__XFER_HOLD_N;
constexpr IData/*31:0*/ Vdma_top___024root::dma_top__DOT__ADDR_W;
constexpr IData/*31:0*/ Vdma_top___024root::dma_top__DOT__LEN_W;
constexpr IData/*31:0*/ Vdma_top___024root::dma_top__DOT__N_CH;
constexpr IData/*31:0*/ Vdma_top___024root::dma_top__DOT__u_arb__DOT__N_CH;
constexpr IData/*31:0*/ Vdma_top___024root::dma_top__DOT__u_arb__DOT__PRIO_BITS;


void Vdma_top___024root___ctor_var_reset(Vdma_top___024root* vlSelf);

Vdma_top___024root::Vdma_top___024root(Vdma_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdma_top___024root___ctor_var_reset(this);
}

void Vdma_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdma_top___024root::~Vdma_top___024root() {
}
