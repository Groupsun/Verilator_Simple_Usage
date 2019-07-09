// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTile.h for the primary calling header

#ifndef _VTile___024unit_H_
#define _VTile___024unit_H_

#include "verilated.h"

class VTile__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VTile___024unit) {
  public:
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    VTile__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTile___024unit);  ///< Copying not allowed
  public:
    VTile___024unit(const char* name="TOP");
    ~VTile___024unit();
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VTile__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
