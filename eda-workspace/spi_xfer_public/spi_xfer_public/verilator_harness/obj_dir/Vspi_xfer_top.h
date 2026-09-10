// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSPI_XFER_TOP_H_
#define VERILATED_VSPI_XFER_TOP_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vspi_xfer_top__Syms;
class Vspi_xfer_top___024root;
class VerilatedVcdC;
class Vspi_xfer_top_spi_xfer_top;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vspi_xfer_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vspi_xfer_top__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_IN8(&reg_we,0,0);
    VL_IN8(&reg_addr,3,0);
    VL_IN8(&reg_re,0,0);
    VL_IN8(&rxd,0,0);
    VL_IN8(&ss_in_n,0,0);
    VL_OUT8(&sclk_out,0,0);
    VL_OUT8(&txd,0,0);
    VL_OUT8(&ss_n,3,0);
    VL_OUT8(&ssi_busy,0,0);
    VL_IN8(&SPEC_DFS_MIN,3,0);
    VL_IN8(&SPEC_HOLD_SS,3,0);
    VL_OUT8(&cov_fsm_state_id,3,0);
    VL_OUT8(&cov_sclk_re,0,0);
    VL_OUT8(&cov_sclk_fe,0,0);
    VL_OUT8(&cov_sclk_out,0,0);
    VL_OUT8(&cov_sclk_mask,0,0);
    VL_OUT8(&cov_bit_cnt,5,0);
    VL_OUT8(&cov_x_done,0,0);
    VL_OUT8(&cov_last_frame,0,0);
    VL_OUT8(&cov_tx_shift_en,0,0);
    VL_OUT8(&cov_rx_shift_en,0,0);
    VL_OUT8(&cov_load_tx_shift,0,0);
    VL_OUT8(&cov_load_rx_buf,0,0);
    VL_OUT8(&cov_ss_active,0,0);
    VL_OUT8(&cov_xfer_complete,0,0);
    VL_OUT8(&cov_txd,0,0);
    VL_OUT8(&cov_dfs,4,0);
    VL_OUT8(&cov_eff_dfs,5,0);
    VL_OUT8(&cov_baud2,0,0);
    VL_OUT8(&cov_tmod,1,0);
    VL_OUT8(&cov_frf,1,0);
    VL_OUT8(&cov_scph,0,0);
    VL_OUT8(&cov_scpol,0,0);
    VL_OUT8(&cov_srl_test,0,0);
    VL_OUT8(&cov_ss_tgl_en,0,0);
    VL_OUT8(&cov_ser,3,0);
    VL_OUT8(&cov_tx_level,3,0);
    VL_OUT8(&cov_rx_level,3,0);
    VL_OUT8(&cov_tx_empty,0,0);
    VL_OUT8(&cov_tx_full,0,0);
    VL_OUT8(&cov_rx_empty,0,0);
    VL_OUT8(&cov_rx_full,0,0);
    VL_OUT8(&cov_hold_ss_cnt,3,0);
    VL_OUT8(&cov_s0,0,0);
    VL_OUT8(&cov_s1,0,0);
    VL_OUT8(&cov_s2,0,0);
    VL_OUT8(&cov_ss_in_n,0,0);
    VL_OUT8(&cov_start_xfer,0,0);
    VL_OUT16(&cov_fsm_state,10,0);
    VL_OUT16(&cov_baudr,15,0);
    VL_IN(&reg_wdata,31,0);
    VL_OUT(&reg_rdata,31,0);
    VL_OUT(&cov_frame_cnt,16,0);
    VL_OUT(&cov_ndf,16,0);
    VL_OUT(&cov_rx_data,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vspi_xfer_top_spi_xfer_top* const spi_xfer_top;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vspi_xfer_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vspi_xfer_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vspi_xfer_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vspi_xfer_top();
  private:
    VL_UNCOPYABLE(Vspi_xfer_top);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
