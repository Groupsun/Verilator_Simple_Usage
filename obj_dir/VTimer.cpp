// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTimer.h for the primary calling header

#include "VTimer.h"
#include "VTimer__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VTimer) {
    VTimer__Syms* __restrict vlSymsp = __VlSymsp = new VTimer__Syms(this, name());
    VTimer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTimer::__Vconfigure(VTimer__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTimer::~VTimer() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VTimer::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTimer::eval\n"); );
    VTimer__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTimer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VTimer::_eval_initial_loop(VTimer__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VTimer::_sequent__TOP__1(VTimer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer::_sequent__TOP__1\n"); );
    VTimer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at Timer.v:47
    vlTOPp->Timer__DOT__timer = ((IData)(vlTOPp->reset)
				  ? 0U : (IData)(vlTOPp->Timer__DOT___T_6));
    vlTOPp->Timer__DOT___T_6 = (VL_ULL(0x1ffffffff) 
				& (VL_ULL(1) + (QData)((IData)(vlTOPp->Timer__DOT__timer))));
    vlTOPp->io_out = vlTOPp->Timer__DOT__timer;
}

void VTimer::_settle__TOP__2(VTimer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer::_settle__TOP__2\n"); );
    VTimer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Timer__DOT___T_6 = (VL_ULL(0x1ffffffff) 
				& (VL_ULL(1) + (QData)((IData)(vlTOPp->Timer__DOT__timer))));
    vlTOPp->io_out = vlTOPp->Timer__DOT__timer;
}

void VTimer::_eval(VTimer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer::_eval\n"); );
    VTimer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VTimer::_eval_initial(VTimer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer::_eval_initial\n"); );
    VTimer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VTimer::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer::final\n"); );
    // Variables
    VTimer__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTimer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTimer::_eval_settle(VTimer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer::_eval_settle\n"); );
    VTimer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VTimer::_change_request(VTimer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer::_change_request\n"); );
    VTimer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTimer::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VTimer::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_out = VL_RAND_RESET_I(32);
    Timer__DOT__timer = VL_RAND_RESET_I(32);
    Timer__DOT___T_6 = VL_RAND_RESET_Q(33);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
