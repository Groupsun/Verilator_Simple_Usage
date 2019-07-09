// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMuxLookup_Test.h for the primary calling header

#include "VMuxLookup_Test.h"
#include "VMuxLookup_Test__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMuxLookup_Test) {
    VMuxLookup_Test__Syms* __restrict vlSymsp = __VlSymsp = new VMuxLookup_Test__Syms(this, name());
    VMuxLookup_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VMuxLookup_Test::__Vconfigure(VMuxLookup_Test__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMuxLookup_Test::~VMuxLookup_Test() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VMuxLookup_Test::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMuxLookup_Test::eval\n"); );
    VMuxLookup_Test__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VMuxLookup_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VMuxLookup_Test::_eval_initial_loop(VMuxLookup_Test__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VMuxLookup_Test::_combo__TOP__1(VMuxLookup_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxLookup_Test::_combo__TOP__1\n"); );
    VMuxLookup_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_pc_4 = ((IData)(4U) + vlTOPp->io_pc_out);
    vlTOPp->io_next_pc = ((0U == (IData)(vlTOPp->io_PC_Sel))
			   ? vlTOPp->io_pc_4 : ((1U 
						 == (IData)(vlTOPp->io_PC_Sel))
						 ? vlTOPp->io_pc_recover
						 : 
						((2U 
						  == (IData)(vlTOPp->io_PC_Sel))
						  ? vlTOPp->io_new_addr
						  : 0U)));
}

void VMuxLookup_Test::_eval(VMuxLookup_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxLookup_Test::_eval\n"); );
    VMuxLookup_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VMuxLookup_Test::_eval_initial(VMuxLookup_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxLookup_Test::_eval_initial\n"); );
    VMuxLookup_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMuxLookup_Test::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxLookup_Test::final\n"); );
    // Variables
    VMuxLookup_Test__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMuxLookup_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMuxLookup_Test::_eval_settle(VMuxLookup_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxLookup_Test::_eval_settle\n"); );
    VMuxLookup_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VMuxLookup_Test::_change_request(VMuxLookup_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxLookup_Test::_change_request\n"); );
    VMuxLookup_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VMuxLookup_Test::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxLookup_Test::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_PC_Sel & 0xfcU))) {
	Verilated::overWidthError("io_PC_Sel");}
}
#endif // VL_DEBUG

void VMuxLookup_Test::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxLookup_Test::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_PC_Sel = VL_RAND_RESET_I(2);
    io_pc_out = VL_RAND_RESET_I(32);
    io_pc_recover = VL_RAND_RESET_I(32);
    io_new_addr = VL_RAND_RESET_I(32);
    io_next_pc = VL_RAND_RESET_I(32);
    io_pc_4 = VL_RAND_RESET_I(32);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
