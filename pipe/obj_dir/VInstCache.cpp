// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInstCache.h for the primary calling header

#include "VInstCache.h"
#include "VInstCache__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VInstCache) {
    VInstCache__Syms* __restrict vlSymsp = __VlSymsp = new VInstCache__Syms(this, name());
    VInstCache* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VInstCache::__Vconfigure(VInstCache__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VInstCache::~VInstCache() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VInstCache::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VInstCache::eval\n"); );
    VInstCache__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VInstCache* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void VInstCache::_eval_initial_loop(VInstCache__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VInstCache::_initial__TOP__1(VInstCache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstCache::_initial__TOP__1\n"); );
    VInstCache* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1,127,0,4);
    // Body
    // INITIAL at InstCache_bind.v:8
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x61636865U;
    __Vtemp1[2U] = 0x6e737463U;
    __Vtemp1[3U] = 0x69U;
    VL_READMEM_W(true,8,1024, 0,4, __Vtemp1, vlTOPp->InstCache__DOT__cache
		 ,0,~0);
}

VL_INLINE_OPT void VInstCache::_combo__TOP__2(VInstCache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstCache::_combo__TOP__2\n"); );
    VInstCache* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_inst = ((vlTOPp->InstCache__DOT__cache
			[(0x3ffU & vlTOPp->io_addr)] 
			<< 0x18U) | ((vlTOPp->InstCache__DOT__cache
				      [(0x3ffU & ((IData)(1U) 
						  + (IData)((QData)((IData)(vlTOPp->io_addr)))))] 
				      << 0x10U) | (
						   (vlTOPp->InstCache__DOT__cache
						    [
						    (0x3ffU 
						     & ((IData)(2U) 
							+ (IData)((QData)((IData)(vlTOPp->io_addr)))))] 
						    << 8U) 
						   | vlTOPp->InstCache__DOT__cache
						   [
						   (0x3ffU 
						    & ((IData)(3U) 
						       + (IData)((QData)((IData)(vlTOPp->io_addr)))))])));
}

void VInstCache::_eval(VInstCache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstCache::_eval\n"); );
    VInstCache* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VInstCache::_eval_initial(VInstCache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstCache::_eval_initial\n"); );
    VInstCache* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VInstCache::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstCache::final\n"); );
    // Variables
    VInstCache__Syms* __restrict vlSymsp = this->__VlSymsp;
    VInstCache* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VInstCache::_eval_settle(VInstCache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstCache::_eval_settle\n"); );
    VInstCache* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VInstCache::_change_request(VInstCache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstCache::_change_request\n"); );
    VInstCache* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VInstCache::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstCache::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VInstCache::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstCache::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_addr = VL_RAND_RESET_I(32);
    io_inst = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    InstCache__DOT__cache[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
