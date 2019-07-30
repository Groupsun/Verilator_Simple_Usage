// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VInstCache.h for the primary calling header

#ifndef _VInstCache___024unit_H_
#define _VInstCache___024unit_H_

#include "verilated.h"

class VInstCache__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VInstCache___024unit) {
  public:
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    VInstCache__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VInstCache___024unit);  ///< Copying not allowed
  public:
    VInstCache___024unit(const char* name="TOP");
    ~VInstCache___024unit();
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VInstCache__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
