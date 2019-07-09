// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTile_H_
#define _VTile_H_

#include "verilated.h"

class VTile__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VTile) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_PC_Write,0,0);
    VL_IN8(io_PC_Sel,1,0);
    VL_IN8(io_IF_ID_Write,0,0);
    VL_IN8(io_IF_ID_Flush,0,0);
    VL_OUT8(io_id_rs1,4,0);
    VL_OUT8(io_id_rs2,4,0);
    VL_IN(io_pc_recover,31,0);
    VL_IN(io_new_addr,31,0);
    VL_OUT(io_id_pc,31,0);
    VL_OUT(io_id_pc_4,31,0);
    VL_OUT(io_id_inst,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG(Tile__DOT__datapath_io_if_io_next_pc,31,0);
    VL_SIG(Tile__DOT__pc__DOT__pc_reg,31,0);
    VL_SIG(Tile__DOT__if_id_register__DOT__pc,31,0);
    VL_SIG(Tile__DOT__if_id_register__DOT__pc_4,31,0);
    VL_SIG(Tile__DOT__if_id_register__DOT__inst,31,0);
    VL_SIG8(Tile__DOT__instcache__DOT__cache[1024],7,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VTile__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTile);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VTile(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VTile();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VTile__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VTile__Syms* symsp, bool first);
  private:
    static QData _change_request(VTile__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(VTile__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VTile__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VTile__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VTile__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__2(VTile__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VTile__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VTile__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
