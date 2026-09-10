// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VDMA_TOP_H_
#define VERILATED_VDMA_TOP_H_  // guard

#include "verilated.h"

class Vdma_top__Syms;
class Vdma_top___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vdma_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vdma_top__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_IN8(&conf_ch,1,0);
    VL_IN8(&conf_wr,0,0);
    VL_IN8(&conf_field,1,0);
    VL_IN8(&start,3,0);
    VL_OUT8(&cov_ch0_state,1,0);
    VL_OUT8(&cov_ch1_state,1,0);
    VL_OUT8(&cov_ch2_state,1,0);
    VL_OUT8(&cov_ch3_state,1,0);
    VL_OUT8(&cov_arb_winner,1,0);
    VL_OUT8(&cov_arb_valid,0,0);
    VL_OUT8(&cov_arb_conflict,0,0);
    VL_OUT8(&cov_active_ch,1,0);
    VL_OUT8(&cov_dir,3,0);
    VL_OUT8(&cov_burst,2,0);
    VL_OUT8(&cov_hold,0,0);
    VL_OUT8(&cov_done_ok_valid,0,0);
    VL_OUT8(&cov_done_class,3,0);
    VL_OUT8(&cov_seq1,0,0);
    VL_OUT8(&cov_seq2,0,0);
    VL_OUT8(&cov_seq3,0,0);
    VL_OUT8(&cov_seq4,0,0);
    VL_OUT8(&cov_seq5,0,0);
    VL_OUT8(&cov_seq6,0,0);
    VL_OUT8(&cov_seq7,0,0);
    VL_OUT8(&cov_seq8,0,0);
    VL_OUT8(&cov_seq9,0,0);
    VL_OUT8(&cov_seq10,0,0);
    VL_OUT8(&cov_seq11,0,0);
    VL_OUT8(&cov_seq12,0,0);
    VL_OUT16(&cov_len,15,0);
    VL_IN(&conf_data,31,0);
    VL_OUT(&cov_saddr,31,0);
    VL_OUT(&cov_daddr,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vdma_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vdma_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vdma_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vdma_top();
  private:
    VL_UNCOPYABLE(Vdma_top);  ///< Copying not allowed

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
