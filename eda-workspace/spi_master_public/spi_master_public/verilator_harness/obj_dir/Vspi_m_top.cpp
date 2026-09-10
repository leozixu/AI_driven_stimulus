// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vspi_m_top__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vspi_m_top::Vspi_m_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vspi_m_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , reg_we{vlSymsp->TOP.reg_we}
    , reg_addr{vlSymsp->TOP.reg_addr}
    , reg_re{vlSymsp->TOP.reg_re}
    , rxd{vlSymsp->TOP.rxd}
    , ss_in_n{vlSymsp->TOP.ss_in_n}
    , sclk_out{vlSymsp->TOP.sclk_out}
    , txd{vlSymsp->TOP.txd}
    , ss_n{vlSymsp->TOP.ss_n}
    , ssi_busy{vlSymsp->TOP.ssi_busy}
    , ssi_txe_intr{vlSymsp->TOP.ssi_txe_intr}
    , ssi_txo_intr{vlSymsp->TOP.ssi_txo_intr}
    , ssi_rxu_intr{vlSymsp->TOP.ssi_rxu_intr}
    , ssi_rxf_intr{vlSymsp->TOP.ssi_rxf_intr}
    , ssi_rxo_intr{vlSymsp->TOP.ssi_rxo_intr}
    , ssi_mst_intr{vlSymsp->TOP.ssi_mst_intr}
    , SPEC_CFS_MIN{vlSymsp->TOP.SPEC_CFS_MIN}
    , SPEC_HOLD_SS{vlSymsp->TOP.SPEC_HOLD_SS}
    , SPEC_TXFTLR_DFLT{vlSymsp->TOP.SPEC_TXFTLR_DFLT}
    , cov_fsm_state_id{vlSymsp->TOP.cov_fsm_state_id}
    , cov_sclk_re{vlSymsp->TOP.cov_sclk_re}
    , cov_sclk_fe{vlSymsp->TOP.cov_sclk_fe}
    , cov_sclk_out{vlSymsp->TOP.cov_sclk_out}
    , cov_sclk_mask{vlSymsp->TOP.cov_sclk_mask}
    , cov_bit_cnt{vlSymsp->TOP.cov_bit_cnt}
    , cov_ctrl_cnt{vlSymsp->TOP.cov_ctrl_cnt}
    , cov_f_done{vlSymsp->TOP.cov_f_done}
    , cov_c_done{vlSymsp->TOP.cov_c_done}
    , cov_x_done{vlSymsp->TOP.cov_x_done}
    , cov_last_frame{vlSymsp->TOP.cov_last_frame}
    , cov_tx_shift_en{vlSymsp->TOP.cov_tx_shift_en}
    , cov_rx_shift_en{vlSymsp->TOP.cov_rx_shift_en}
    , cov_load_tx_shift{vlSymsp->TOP.cov_load_tx_shift}
    , cov_load_tx_buffer{vlSymsp->TOP.cov_load_tx_buffer}
    , cov_load_rx_buf{vlSymsp->TOP.cov_load_rx_buf}
    , cov_s3{vlSymsp->TOP.cov_s3}
    , cov_txd{vlSymsp->TOP.cov_txd}
    , cov_ss_in_n{vlSymsp->TOP.cov_ss_in_n}
    , cov_ss_active{vlSymsp->TOP.cov_ss_active}
    , cov_dfs{vlSymsp->TOP.cov_dfs}
    , cov_eff_dfs{vlSymsp->TOP.cov_eff_dfs}
    , cov_cfs{vlSymsp->TOP.cov_cfs}
    , cov_eff_cfs{vlSymsp->TOP.cov_eff_cfs}
    , cov_baud2{vlSymsp->TOP.cov_baud2}
    , cov_tmod{vlSymsp->TOP.cov_tmod}
    , cov_frf{vlSymsp->TOP.cov_frf}
    , cov_scph{vlSymsp->TOP.cov_scph}
    , cov_scpol{vlSymsp->TOP.cov_scpol}
    , cov_srl_test{vlSymsp->TOP.cov_srl_test}
    , cov_ss_tgl_en{vlSymsp->TOP.cov_ss_tgl_en}
    , cov_slv_oe{vlSymsp->TOP.cov_slv_oe}
    , cov_ser{vlSymsp->TOP.cov_ser}
    , cov_tx_level{vlSymsp->TOP.cov_tx_level}
    , cov_rx_level{vlSymsp->TOP.cov_rx_level}
    , cov_tx_full{vlSymsp->TOP.cov_tx_full}
    , cov_tx_empty{vlSymsp->TOP.cov_tx_empty}
    , cov_rx_full{vlSymsp->TOP.cov_rx_full}
    , cov_rx_empty{vlSymsp->TOP.cov_rx_empty}
    , cov_tx_overflow{vlSymsp->TOP.cov_tx_overflow}
    , cov_rx_overflow{vlSymsp->TOP.cov_rx_overflow}
    , cov_rx_underflow{vlSymsp->TOP.cov_rx_underflow}
    , cov_risr{vlSymsp->TOP.cov_risr}
    , cov_isr{vlSymsp->TOP.cov_isr}
    , cov_imr{vlSymsp->TOP.cov_imr}
    , cov_ssi_txe_intr{vlSymsp->TOP.cov_ssi_txe_intr}
    , cov_ssi_mst_intr{vlSymsp->TOP.cov_ssi_mst_intr}
    , cov_s1{vlSymsp->TOP.cov_s1}
    , cov_multi_mst_sync{vlSymsp->TOP.cov_multi_mst_sync}
    , cov_s2{vlSymsp->TOP.cov_s2}
    , cov_hold_ss_cnt{vlSymsp->TOP.cov_hold_ss_cnt}
    , cov_start_xfer{vlSymsp->TOP.cov_start_xfer}
    , cov_fsm_busy{vlSymsp->TOP.cov_fsm_busy}
    , cov_fsm_sleep{vlSymsp->TOP.cov_fsm_sleep}
    , cov_ssi_busy{vlSymsp->TOP.cov_ssi_busy}
    , cov_ssi_sleep{vlSymsp->TOP.cov_ssi_sleep}
    , cov_rx_push{vlSymsp->TOP.cov_rx_push}
    , cov_tx_pop{vlSymsp->TOP.cov_tx_pop}
    , cov_mwcr{vlSymsp->TOP.cov_mwcr}
    , cov_spi0_control{vlSymsp->TOP.cov_spi0_control}
    , cov_spi1_control{vlSymsp->TOP.cov_spi1_control}
    , cov_txftlr{vlSymsp->TOP.cov_txftlr}
    , cov_s0{vlSymsp->TOP.cov_s0}
    , cov_fsm_state{vlSymsp->TOP.cov_fsm_state}
    , cov_baudr{vlSymsp->TOP.cov_baudr}
    , reg_wdata{vlSymsp->TOP.reg_wdata}
    , reg_rdata{vlSymsp->TOP.reg_rdata}
    , cov_frame_cnt{vlSymsp->TOP.cov_frame_cnt}
    , cov_ndf{vlSymsp->TOP.cov_ndf}
    , cov_rx_data{vlSymsp->TOP.cov_rx_data}
    , spi_m_top{vlSymsp->TOP.spi_m_top}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vspi_m_top::Vspi_m_top(const char* _vcname__)
    : Vspi_m_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vspi_m_top::~Vspi_m_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vspi_m_top___024root___eval_debug_assertions(Vspi_m_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vspi_m_top___024root___eval_static(Vspi_m_top___024root* vlSelf);
void Vspi_m_top___024root___eval_initial(Vspi_m_top___024root* vlSelf);
void Vspi_m_top___024root___eval_settle(Vspi_m_top___024root* vlSelf);
void Vspi_m_top___024root___eval(Vspi_m_top___024root* vlSelf);

void Vspi_m_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vspi_m_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vspi_m_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vspi_m_top___024root___eval_static(&(vlSymsp->TOP));
        Vspi_m_top___024root___eval_initial(&(vlSymsp->TOP));
        Vspi_m_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vspi_m_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vspi_m_top::eventsPending() { return false; }

uint64_t Vspi_m_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vspi_m_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vspi_m_top___024root___eval_final(Vspi_m_top___024root* vlSelf);

VL_ATTR_COLD void Vspi_m_top::final() {
    Vspi_m_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vspi_m_top::hierName() const { return vlSymsp->name(); }
const char* Vspi_m_top::modelName() const { return "Vspi_m_top"; }
unsigned Vspi_m_top::threads() const { return 1; }
void Vspi_m_top::prepareClone() const { contextp()->prepareClone(); }
void Vspi_m_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vspi_m_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vspi_m_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vspi_m_top___024root__trace_init_top(Vspi_m_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vspi_m_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_m_top___024root*>(voidSelf);
    Vspi_m_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_m_top___024root__trace_decl_types(tracep);
    Vspi_m_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vspi_m_top___024root__trace_register(Vspi_m_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vspi_m_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vspi_m_top::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vspi_m_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
