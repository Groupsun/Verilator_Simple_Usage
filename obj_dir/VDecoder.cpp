// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecoder.h for the primary calling header

#include "VDecoder.h"
#include "VDecoder__Syms.h"


//--------------------
// STATIC VARIABLES

// Begin mtask footprint  all: 
VL_ST_SIG8(VDecoder::__Vtable1_out[16],7,0);

//--------------------

VL_CTOR_IMP(VDecoder) {
    VDecoder__Syms* __restrict vlSymsp = __VlSymsp = new VDecoder__Syms(this, name());
    VDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VDecoder::__Vconfigure(VDecoder__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VDecoder::~VDecoder() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VDecoder::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDecoder::eval\n"); );
    VDecoder__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VDecoder::_eval_initial_loop(VDecoder__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VDecoder::_combo__TOP__1(VDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder::_combo__TOP__1\n"); );
    VDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at Decoder.v:6
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->S) << 1U) 
			    | (IData)(vlTOPp->reset));
    vlTOPp->out = vlTOPp->__Vtable1_out[vlTOPp->__Vtableidx1];
}

void VDecoder::_eval(VDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder::_eval\n"); );
    VDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VDecoder::_eval_initial(VDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder::_eval_initial\n"); );
    VDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDecoder::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder::final\n"); );
    // Variables
    VDecoder__Syms* __restrict vlSymsp = this->__VlSymsp;
    VDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDecoder::_eval_settle(VDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder::_eval_settle\n"); );
    VDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VDecoder::_change_request(VDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder::_change_request\n"); );
    VDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VDecoder::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((S & 0xf8U))) {
	Verilated::overWidthError("S");}
}
#endif // VL_DEBUG

void VDecoder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder::_ctor_var_reset\n"); );
    // Body
    reset = VL_RAND_RESET_I(1);
    S = VL_RAND_RESET_I(3);
    out = VL_RAND_RESET_I(8);
    __Vtableidx1 = VL_RAND_RESET_I(4);
    __Vtable1_out[0] = 1U;
    __Vtable1_out[1] = 0U;
    __Vtable1_out[2] = 2U;
    __Vtable1_out[3] = 0U;
    __Vtable1_out[4] = 4U;
    __Vtable1_out[5] = 0U;
    __Vtable1_out[6] = 8U;
    __Vtable1_out[7] = 0U;
    __Vtable1_out[8] = 0x10U;
    __Vtable1_out[9] = 0U;
    __Vtable1_out[10] = 0x20U;
    __Vtable1_out[11] = 0U;
    __Vtable1_out[12] = 0x40U;
    __Vtable1_out[13] = 0U;
    __Vtable1_out[14] = 0x80U;
    __Vtable1_out[15] = 0U;
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
