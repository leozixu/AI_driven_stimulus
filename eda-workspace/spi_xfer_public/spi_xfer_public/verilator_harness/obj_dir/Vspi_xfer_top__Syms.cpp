// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vspi_xfer_top__pch.h"
#include "Vspi_xfer_top.h"
#include "Vspi_xfer_top___024root.h"
#include "Vspi_xfer_top_spi_xfer_top.h"

// FUNCTIONS
Vspi_xfer_top__Syms::~Vspi_xfer_top__Syms()
{
}

Vspi_xfer_top__Syms::Vspi_xfer_top__Syms(VerilatedContext* contextp, const char* namep, Vspi_xfer_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__spi_xfer_top{this, Verilated::catName(namep, "spi_xfer_top")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.spi_xfer_top = &TOP__spi_xfer_top;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__spi_xfer_top.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_spi_xfer_top.configure(this, name(), "spi_xfer_top", "spi_xfer_top", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"cov_baud2", &(TOP.cov_baud2), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_baudr", &(TOP.cov_baudr), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_bit_cnt", &(TOP.cov_bit_cnt), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,5,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_dfs", &(TOP.cov_dfs), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_eff_dfs", &(TOP.cov_eff_dfs), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,5,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_frame_cnt", &(TOP.cov_frame_cnt), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,16,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_frf", &(TOP.cov_frf), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_fsm_state", &(TOP.cov_fsm_state), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,10,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_fsm_state_id", &(TOP.cov_fsm_state_id), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_hold_ss_cnt", &(TOP.cov_hold_ss_cnt), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_last_frame", &(TOP.cov_last_frame), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_load_rx_buf", &(TOP.cov_load_rx_buf), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_load_tx_shift", &(TOP.cov_load_tx_shift), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_ndf", &(TOP.cov_ndf), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,16,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_rx_data", &(TOP.cov_rx_data), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_rx_empty", &(TOP.cov_rx_empty), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_rx_full", &(TOP.cov_rx_full), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_rx_level", &(TOP.cov_rx_level), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_rx_shift_en", &(TOP.cov_rx_shift_en), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_s0", &(TOP.cov_s0), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_s1", &(TOP.cov_s1), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_s2", &(TOP.cov_s2), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_sclk_fe", &(TOP.cov_sclk_fe), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_sclk_mask", &(TOP.cov_sclk_mask), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_sclk_out", &(TOP.cov_sclk_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_sclk_re", &(TOP.cov_sclk_re), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_scph", &(TOP.cov_scph), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_scpol", &(TOP.cov_scpol), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_ser", &(TOP.cov_ser), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_srl_test", &(TOP.cov_srl_test), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_ss_active", &(TOP.cov_ss_active), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_ss_in_n", &(TOP.cov_ss_in_n), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_ss_tgl_en", &(TOP.cov_ss_tgl_en), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_tmod", &(TOP.cov_tmod), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_tx_empty", &(TOP.cov_tx_empty), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_tx_full", &(TOP.cov_tx_full), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_tx_level", &(TOP.cov_tx_level), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_tx_shift_en", &(TOP.cov_tx_shift_en), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_txd", &(TOP.cov_txd), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_x_done", &(TOP.cov_x_done), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"cov_xfer_complete", &(TOP.cov_xfer_complete), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_baud2", &(TOP__spi_xfer_top.cov_baud2), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_baudr", &(TOP__spi_xfer_top.cov_baudr), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_bit_cnt", &(TOP__spi_xfer_top.cov_bit_cnt), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,5,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_dfs", &(TOP__spi_xfer_top.cov_dfs), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,4,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_eff_dfs", &(TOP__spi_xfer_top.cov_eff_dfs), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,5,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_frame_cnt", &(TOP__spi_xfer_top.cov_frame_cnt), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,16,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_frf", &(TOP__spi_xfer_top.cov_frf), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,1,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_fsm_state", &(TOP__spi_xfer_top.cov_fsm_state), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,10,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_fsm_state_id", &(TOP__spi_xfer_top.cov_fsm_state_id), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_hold_ss_cnt", &(TOP__spi_xfer_top.cov_hold_ss_cnt), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_last_frame", &(TOP__spi_xfer_top.cov_last_frame), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_load_rx_buf", &(TOP__spi_xfer_top.cov_load_rx_buf), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_load_tx_shift", &(TOP__spi_xfer_top.cov_load_tx_shift), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_ndf", &(TOP__spi_xfer_top.cov_ndf), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,16,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_rx_data", &(TOP__spi_xfer_top.cov_rx_data), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_rx_empty", &(TOP__spi_xfer_top.cov_rx_empty), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_rx_full", &(TOP__spi_xfer_top.cov_rx_full), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_rx_level", &(TOP__spi_xfer_top.cov_rx_level), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_rx_shift_en", &(TOP__spi_xfer_top.cov_rx_shift_en), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_s0", &(TOP__spi_xfer_top.cov_s0), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_s1", &(TOP__spi_xfer_top.cov_s1), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_s2", &(TOP__spi_xfer_top.cov_s2), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_sclk_fe", &(TOP__spi_xfer_top.cov_sclk_fe), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_sclk_mask", &(TOP__spi_xfer_top.cov_sclk_mask), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_sclk_out", &(TOP__spi_xfer_top.cov_sclk_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_sclk_re", &(TOP__spi_xfer_top.cov_sclk_re), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_scph", &(TOP__spi_xfer_top.cov_scph), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_scpol", &(TOP__spi_xfer_top.cov_scpol), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_ser", &(TOP__spi_xfer_top.cov_ser), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_srl_test", &(TOP__spi_xfer_top.cov_srl_test), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_ss_active", &(TOP__spi_xfer_top.cov_ss_active), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_ss_in_n", &(TOP__spi_xfer_top.cov_ss_in_n), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_ss_tgl_en", &(TOP__spi_xfer_top.cov_ss_tgl_en), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_tmod", &(TOP__spi_xfer_top.cov_tmod), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,1,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_tx_empty", &(TOP__spi_xfer_top.cov_tx_empty), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_tx_full", &(TOP__spi_xfer_top.cov_tx_full), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_tx_level", &(TOP__spi_xfer_top.cov_tx_level), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_tx_shift_en", &(TOP__spi_xfer_top.cov_tx_shift_en), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_txd", &(TOP__spi_xfer_top.cov_txd), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_x_done", &(TOP__spi_xfer_top.cov_x_done), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_spi_xfer_top.varInsert(__Vfinal,"cov_xfer_complete", &(TOP__spi_xfer_top.cov_xfer_complete), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
    }
}
