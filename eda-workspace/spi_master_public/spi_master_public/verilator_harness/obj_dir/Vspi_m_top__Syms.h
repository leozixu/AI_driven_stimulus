// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSPI_M_TOP__SYMS_H_
#define VERILATED_VSPI_M_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vspi_m_top.h"

// INCLUDE MODULE CLASSES
#include "Vspi_m_top___024root.h"
#include "Vspi_m_top_spi_m_top.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vspi_m_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vspi_m_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vspi_m_top___024root           TOP;
    Vspi_m_top_spi_m_top           TOP__spi_m_top;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_spi_m_top;

    // CONSTRUCTORS
    Vspi_m_top__Syms(VerilatedContext* contextp, const char* namep, Vspi_m_top* modelp);
    ~Vspi_m_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
