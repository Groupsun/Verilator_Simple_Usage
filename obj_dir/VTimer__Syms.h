// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VTimer__Syms_H_
#define _VTimer__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VTimer.h"

// SYMS CLASS
class VTimer__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VTimer*                        TOPp;
    
    // CREATORS
    VTimer__Syms(VTimer* topp, const char* namep);
    ~VTimer__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
