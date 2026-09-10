// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_xfer_top.h for the primary calling header

#include "Vspi_xfer_top__pch.h"
#include "Vspi_xfer_top__Syms.h"
#include "Vspi_xfer_top_spi_xfer_top.h"

// Parameter definitions for Vspi_xfer_top_spi_xfer_top
constexpr CData/*3:0*/ Vspi_xfer_top_spi_xfer_top::u_regfile__DOT__A_CTRLR0;
constexpr CData/*3:0*/ Vspi_xfer_top_spi_xfer_top::u_regfile__DOT__A_CTRLR1;
constexpr CData/*3:0*/ Vspi_xfer_top_spi_xfer_top::u_regfile__DOT__A_SSIENR;
constexpr CData/*3:0*/ Vspi_xfer_top_spi_xfer_top::u_regfile__DOT__A_SER;
constexpr CData/*3:0*/ Vspi_xfer_top_spi_xfer_top::u_regfile__DOT__A_BAUDR;
constexpr CData/*3:0*/ Vspi_xfer_top_spi_xfer_top::u_regfile__DOT__A_TXFTLR;
constexpr CData/*3:0*/ Vspi_xfer_top_spi_xfer_top::u_regfile__DOT__A_TXFLR;
constexpr CData/*3:0*/ Vspi_xfer_top_spi_xfer_top::u_regfile__DOT__A_RXFLR;
constexpr CData/*3:0*/ Vspi_xfer_top_spi_xfer_top::u_regfile__DOT__A_SR;
constexpr CData/*3:0*/ Vspi_xfer_top_spi_xfer_top::u_regfile__DOT__A_DR;
constexpr CData/*3:0*/ Vspi_xfer_top_spi_xfer_top::u_mstfsm__DOT__S_IDLE;
constexpr CData/*3:0*/ Vspi_xfer_top_spi_xfer_top::u_mstfsm__DOT__S_ASSERT_SS;
constexpr CData/*3:0*/ Vspi_xfer_top_spi_xfer_top::u_mstfsm__DOT__S_POP_TX;
constexpr CData/*3:0*/ Vspi_xfer_top_spi_xfer_top::u_mstfsm__DOT__S_SHIFT_BIT;
constexpr CData/*3:0*/ Vspi_xfer_top_spi_xfer_top::u_mstfsm__DOT__S_PUSH_RX;
constexpr CData/*3:0*/ Vspi_xfer_top_spi_xfer_top::u_mstfsm__DOT__S_TOGGLE_SS;
constexpr CData/*3:0*/ Vspi_xfer_top_spi_xfer_top::u_mstfsm__DOT__S_HOLD_MASK;
constexpr CData/*3:0*/ Vspi_xfer_top_spi_xfer_top::u_mstfsm__DOT__S_MASK_SCLK;
constexpr CData/*3:0*/ Vspi_xfer_top_spi_xfer_top::u_mstfsm__DOT__S_HOLD_SS;
constexpr CData/*3:0*/ Vspi_xfer_top_spi_xfer_top::u_mstfsm__DOT__S_CLEAR_SS;
constexpr CData/*3:0*/ Vspi_xfer_top_spi_xfer_top::u_mstfsm__DOT__S_SLEEP;
constexpr IData/*31:0*/ Vspi_xfer_top_spi_xfer_top::DFS_W;
constexpr IData/*31:0*/ Vspi_xfer_top_spi_xfer_top::NDF_W;
constexpr IData/*31:0*/ Vspi_xfer_top_spi_xfer_top::BAUDR_W;
constexpr IData/*31:0*/ Vspi_xfer_top_spi_xfer_top::NUM_SLAVES;
constexpr IData/*31:0*/ Vspi_xfer_top_spi_xfer_top::TX_DEPTH;
constexpr IData/*31:0*/ Vspi_xfer_top_spi_xfer_top::RX_DEPTH;
constexpr IData/*31:0*/ Vspi_xfer_top_spi_xfer_top::u_fifo__DOT__AW;
constexpr IData/*31:0*/ Vspi_xfer_top_spi_xfer_top::u_fifo__DOT__DEPTH;


void Vspi_xfer_top_spi_xfer_top___ctor_var_reset(Vspi_xfer_top_spi_xfer_top* vlSelf);

Vspi_xfer_top_spi_xfer_top::Vspi_xfer_top_spi_xfer_top(Vspi_xfer_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vspi_xfer_top_spi_xfer_top___ctor_var_reset(this);
}

void Vspi_xfer_top_spi_xfer_top::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vspi_xfer_top_spi_xfer_top::~Vspi_xfer_top_spi_xfer_top() {
}
