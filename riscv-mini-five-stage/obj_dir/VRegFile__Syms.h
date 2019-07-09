// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VRegFile__Syms_H_
#define _VRegFile__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VRegFile.h"
#include "VRegFile___024unit.h"

// SYMS CLASS
class VRegFile__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VRegFile*                      TOPp;
    
    // CREATORS
    VRegFile__Syms(VRegFile* topp, const char* namep);
    ~VRegFile__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
