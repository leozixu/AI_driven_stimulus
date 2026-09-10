// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_m_top.h for the primary calling header

#include "Vspi_m_top__pch.h"
#include "Vspi_m_top__Syms.h"
#include "Vspi_m_top_spi_m_top.h"

// Parameter definitions for Vspi_m_top_spi_m_top
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_CTRLR0;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_CTRLR1;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_SSIENR;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_MWCR;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_SER;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_BAUDR;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_TXFTLR;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_RXFTLR;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_TXFLR;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_RXFLR;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_SR;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_IMR;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_ISR;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_RISR;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_TXOICR;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_RXOICR;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_RXUICR;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_MSTICR;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_ICR;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_IDR;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_VIDR;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_DR_LO;
constexpr CData/*5:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__A_DR_HI;
constexpr CData/*3:0*/ Vspi_m_top_spi_m_top::u_fifo__DOT__DEPTH;
constexpr SData/*14:0*/ Vspi_m_top_spi_m_top::u_mstfsm__DOT__P_IDLE;
constexpr SData/*14:0*/ Vspi_m_top_spi_m_top::u_mstfsm__DOT__P_ASSERT_SS;
constexpr SData/*14:0*/ Vspi_m_top_spi_m_top::u_mstfsm__DOT__P_POP_TX;
constexpr SData/*14:0*/ Vspi_m_top_spi_m_top::u_mstfsm__DOT__P_SHIFT_CTRL;
constexpr SData/*14:0*/ Vspi_m_top_spi_m_top::u_mstfsm__DOT__P_SHIFT_BIT;
constexpr SData/*14:0*/ Vspi_m_top_spi_m_top::u_mstfsm__DOT__P_PUSH_RX;
constexpr SData/*14:0*/ Vspi_m_top_spi_m_top::u_mstfsm__DOT__P_TOGGLE_SS;
constexpr SData/*14:0*/ Vspi_m_top_spi_m_top::u_mstfsm__DOT__P_HOLD_MASK;
constexpr SData/*14:0*/ Vspi_m_top_spi_m_top::u_mstfsm__DOT__P_MASK_SCLK;
constexpr SData/*14:0*/ Vspi_m_top_spi_m_top::u_mstfsm__DOT__P_HOLD_SS;
constexpr SData/*14:0*/ Vspi_m_top_spi_m_top::u_mstfsm__DOT__P_CLEAR_SS;
constexpr SData/*14:0*/ Vspi_m_top_spi_m_top::u_mstfsm__DOT__P_SLEEP;
constexpr SData/*14:0*/ Vspi_m_top_spi_m_top::u_mstfsm__DOT__P_MWPOP;
constexpr SData/*14:0*/ Vspi_m_top_spi_m_top::u_mstfsm__DOT__P_WAIT_READY;
constexpr SData/*14:0*/ Vspi_m_top_spi_m_top::u_mstfsm__DOT__P_CLEAR_READY;
constexpr IData/*31:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__IDR_VAL;
constexpr IData/*31:0*/ Vspi_m_top_spi_m_top::u_regfile__DOT__VIDR_VAL;


void Vspi_m_top_spi_m_top___ctor_var_reset(Vspi_m_top_spi_m_top* vlSelf);

Vspi_m_top_spi_m_top::Vspi_m_top_spi_m_top(Vspi_m_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vspi_m_top_spi_m_top___ctor_var_reset(this);
}

void Vspi_m_top_spi_m_top::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vspi_m_top_spi_m_top::~Vspi_m_top_spi_m_top() {
}
