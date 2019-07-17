// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAdder_Buffer_H_
#define _VAdder_Buffer_H_

#include "verilated.h"

class VAdder_Buffer__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VAdder_Buffer) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_flush,0,0);
    VL_IN8(io_record,0,0);
    VL_IN(io_addr_input,31,0);
    VL_OUT(io_front,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(Addr_Buffer__DOT___T_32,1,0);
    VL_SIG8(Addr_Buffer__DOT___T_38,0,0);
    VL_SIG8(Addr_Buffer__DOT___T_44,0,0);
    VL_SIG8(Addr_Buffer__DOT___T_50,0,0);
    VL_SIG8(Addr_Buffer__DOT___T_78,2,0);
    VL_SIG8(Addr_Buffer__DOT___T_89,2,0);
    VL_SIG8(Addr_Buffer__DOT___T_100,2,0);
    VL_SIG(Addr_Buffer__DOT___T_111,31,0);
    VL_SIG(Addr_Buffer__DOT___T_123,31,0);
    VL_SIG(Addr_Buffer__DOT___T_135,31,0);
    VL_SIG(Addr_Buffer__DOT__buffer[3],31,0);
    VL_SIG8(Addr_Buffer__DOT__counter[3],1,0);
    VL_SIG8(Addr_Buffer__DOT__is_used[3],0,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAdder_Buffer__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAdder_Buffer);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VAdder_Buffer(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAdder_Buffer();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VAdder_Buffer__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAdder_Buffer__Syms* symsp, bool first);
  private:
    static QData _change_request(VAdder_Buffer__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VAdder_Buffer__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VAdder_Buffer__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VAdder_Buffer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VAdder_Buffer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VAdder_Buffer__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VAdder_Buffer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VAdder_Buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VAdder_Buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VAdder_Buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VAdder_Buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VAdder_Buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VAdder_Buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VAdder_Buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
