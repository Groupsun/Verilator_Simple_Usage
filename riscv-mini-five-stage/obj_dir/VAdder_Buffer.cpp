// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAdder_Buffer.h for the primary calling header

#include "VAdder_Buffer.h"
#include "VAdder_Buffer__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VAdder_Buffer) {
    VAdder_Buffer__Syms* __restrict vlSymsp = __VlSymsp = new VAdder_Buffer__Syms(this, name());
    VAdder_Buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAdder_Buffer::__Vconfigure(VAdder_Buffer__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAdder_Buffer::~VAdder_Buffer() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VAdder_Buffer::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAdder_Buffer::eval\n"); );
    VAdder_Buffer__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAdder_Buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VAdder_Buffer::_eval_initial_loop(VAdder_Buffer__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VAdder_Buffer::_sequent__TOP__1(VAdder_Buffer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder_Buffer::_sequent__TOP__1\n"); );
    VAdder_Buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vdlyvval__Addr_Buffer__DOT__counter__v0,1,0);
    VL_SIG8(__Vdlyvval__Addr_Buffer__DOT__counter__v1,1,0);
    VL_SIG8(__Vdlyvval__Addr_Buffer__DOT__counter__v2,1,0);
    VL_SIG8(__Vdlyvval__Addr_Buffer__DOT__is_used__v0,0,0);
    VL_SIG8(__Vdlyvval__Addr_Buffer__DOT__is_used__v1,0,0);
    VL_SIG8(__Vdlyvval__Addr_Buffer__DOT__is_used__v2,0,0);
    VL_SIG(__Vdlyvval__Addr_Buffer__DOT__buffer__v0,31,0);
    VL_SIG(__Vdlyvval__Addr_Buffer__DOT__buffer__v1,31,0);
    VL_SIG(__Vdlyvval__Addr_Buffer__DOT__buffer__v2,31,0);
    // Body
    // ALWAYS at Adder_Buffer.v:657
    __Vdlyvval__Addr_Buffer__DOT__counter__v0 = (3U 
						 & ((IData)(vlTOPp->io_flush)
						     ? 0U
						     : (IData)(vlTOPp->Addr_Buffer__DOT___T_78)));
    __Vdlyvval__Addr_Buffer__DOT__counter__v1 = (3U 
						 & ((IData)(vlTOPp->io_flush)
						     ? 0U
						     : (IData)(vlTOPp->Addr_Buffer__DOT___T_89)));
    __Vdlyvval__Addr_Buffer__DOT__counter__v2 = (3U 
						 & ((IData)(vlTOPp->io_flush)
						     ? 0U
						     : (IData)(vlTOPp->Addr_Buffer__DOT___T_100)));
    // ALWAYS at Adder_Buffer.v:657
    __Vdlyvval__Addr_Buffer__DOT__buffer__v0 = ((IData)(vlTOPp->io_flush)
						 ? 0U
						 : 
						((2U 
						  == 
						  vlTOPp->Addr_Buffer__DOT__counter
						  [0U])
						  ? 0U
						  : vlTOPp->Addr_Buffer__DOT___T_111));
    __Vdlyvval__Addr_Buffer__DOT__buffer__v1 = ((IData)(vlTOPp->io_flush)
						 ? 0U
						 : 
						((2U 
						  == 
						  vlTOPp->Addr_Buffer__DOT__counter
						  [1U])
						  ? 0U
						  : vlTOPp->Addr_Buffer__DOT___T_123));
    __Vdlyvval__Addr_Buffer__DOT__buffer__v2 = ((IData)(vlTOPp->io_flush)
						 ? 0U
						 : 
						((2U 
						  == 
						  vlTOPp->Addr_Buffer__DOT__counter
						  [2U])
						  ? 0U
						  : vlTOPp->Addr_Buffer__DOT___T_135));
    // ALWAYS at Adder_Buffer.v:657
    __Vdlyvval__Addr_Buffer__DOT__is_used__v0 = ((~ (IData)(vlTOPp->io_flush)) 
						 & ((2U 
						     != 
						     vlTOPp->Addr_Buffer__DOT__counter
						     [0U]) 
						    & (IData)(vlTOPp->Addr_Buffer__DOT___T_38)));
    __Vdlyvval__Addr_Buffer__DOT__is_used__v1 = ((~ (IData)(vlTOPp->io_flush)) 
						 & ((2U 
						     != 
						     vlTOPp->Addr_Buffer__DOT__counter
						     [1U]) 
						    & (IData)(vlTOPp->Addr_Buffer__DOT___T_44)));
    __Vdlyvval__Addr_Buffer__DOT__is_used__v2 = ((~ (IData)(vlTOPp->io_flush)) 
						 & ((2U 
						     != 
						     vlTOPp->Addr_Buffer__DOT__counter
						     [2U]) 
						    & (IData)(vlTOPp->Addr_Buffer__DOT___T_50)));
    // ALWAYSPOST at Adder_Buffer.v:659
    vlTOPp->Addr_Buffer__DOT__buffer[0U] = __Vdlyvval__Addr_Buffer__DOT__buffer__v0;
    vlTOPp->Addr_Buffer__DOT__buffer[1U] = __Vdlyvval__Addr_Buffer__DOT__buffer__v1;
    vlTOPp->Addr_Buffer__DOT__buffer[2U] = __Vdlyvval__Addr_Buffer__DOT__buffer__v2;
    // ALWAYSPOST at Adder_Buffer.v:668
    vlTOPp->Addr_Buffer__DOT__counter[0U] = __Vdlyvval__Addr_Buffer__DOT__counter__v0;
    vlTOPp->Addr_Buffer__DOT__counter[1U] = __Vdlyvval__Addr_Buffer__DOT__counter__v1;
    vlTOPp->Addr_Buffer__DOT__counter[2U] = __Vdlyvval__Addr_Buffer__DOT__counter__v2;
    // ALWAYSPOST at Adder_Buffer.v:677
    vlTOPp->Addr_Buffer__DOT__is_used[0U] = __Vdlyvval__Addr_Buffer__DOT__is_used__v0;
    vlTOPp->Addr_Buffer__DOT__is_used[1U] = __Vdlyvval__Addr_Buffer__DOT__is_used__v1;
    vlTOPp->Addr_Buffer__DOT__is_used[2U] = __Vdlyvval__Addr_Buffer__DOT__is_used__v2;
    vlTOPp->io_front = ((vlTOPp->Addr_Buffer__DOT__counter
			 [0U] > vlTOPp->Addr_Buffer__DOT__counter
			 [1U]) ? ((vlTOPp->Addr_Buffer__DOT__counter
				   [0U] > vlTOPp->Addr_Buffer__DOT__counter
				   [2U]) ? vlTOPp->Addr_Buffer__DOT__buffer
				  [0U] : vlTOPp->Addr_Buffer__DOT__buffer
				  [2U]) : ((vlTOPp->Addr_Buffer__DOT__counter
					    [1U] > 
					    vlTOPp->Addr_Buffer__DOT__counter
					    [2U]) ? 
					   vlTOPp->Addr_Buffer__DOT__buffer
					   [1U] : vlTOPp->Addr_Buffer__DOT__buffer
					   [2U]));
    vlTOPp->Addr_Buffer__DOT___T_78 = (7U & ((2U == 
					      vlTOPp->Addr_Buffer__DOT__counter
					      [0U])
					      ? 0U : 
					     (vlTOPp->Addr_Buffer__DOT__is_used
					      [0U] ? 
					      ((IData)(1U) 
					       + vlTOPp->Addr_Buffer__DOT__counter
					       [0U])
					       : vlTOPp->Addr_Buffer__DOT__counter
					      [0U])));
    vlTOPp->Addr_Buffer__DOT___T_89 = (7U & ((2U == 
					      vlTOPp->Addr_Buffer__DOT__counter
					      [1U])
					      ? 0U : 
					     (vlTOPp->Addr_Buffer__DOT__is_used
					      [1U] ? 
					      ((IData)(1U) 
					       + vlTOPp->Addr_Buffer__DOT__counter
					       [1U])
					       : vlTOPp->Addr_Buffer__DOT__counter
					      [1U])));
    vlTOPp->Addr_Buffer__DOT___T_100 = (7U & ((2U == 
					       vlTOPp->Addr_Buffer__DOT__counter
					       [2U])
					       ? 0U
					       : (vlTOPp->Addr_Buffer__DOT__is_used
						  [2U]
						   ? 
						  ((IData)(1U) 
						   + 
						   vlTOPp->Addr_Buffer__DOT__counter
						   [2U])
						   : 
						  vlTOPp->Addr_Buffer__DOT__counter
						  [2U])));
    vlTOPp->Addr_Buffer__DOT___T_32 = (vlTOPp->Addr_Buffer__DOT__is_used
				       [0U] ? (vlTOPp->Addr_Buffer__DOT__is_used
					       [1U]
					        ? 2U
					        : 1U)
				        : 0U);
}

void VAdder_Buffer::_settle__TOP__2(VAdder_Buffer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder_Buffer::_settle__TOP__2\n"); );
    VAdder_Buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Addr_Buffer__DOT___T_78 = (7U & ((2U == 
					      vlTOPp->Addr_Buffer__DOT__counter
					      [0U])
					      ? 0U : 
					     (vlTOPp->Addr_Buffer__DOT__is_used
					      [0U] ? 
					      ((IData)(1U) 
					       + vlTOPp->Addr_Buffer__DOT__counter
					       [0U])
					       : vlTOPp->Addr_Buffer__DOT__counter
					      [0U])));
    vlTOPp->Addr_Buffer__DOT___T_89 = (7U & ((2U == 
					      vlTOPp->Addr_Buffer__DOT__counter
					      [1U])
					      ? 0U : 
					     (vlTOPp->Addr_Buffer__DOT__is_used
					      [1U] ? 
					      ((IData)(1U) 
					       + vlTOPp->Addr_Buffer__DOT__counter
					       [1U])
					       : vlTOPp->Addr_Buffer__DOT__counter
					      [1U])));
    vlTOPp->Addr_Buffer__DOT___T_100 = (7U & ((2U == 
					       vlTOPp->Addr_Buffer__DOT__counter
					       [2U])
					       ? 0U
					       : (vlTOPp->Addr_Buffer__DOT__is_used
						  [2U]
						   ? 
						  ((IData)(1U) 
						   + 
						   vlTOPp->Addr_Buffer__DOT__counter
						   [2U])
						   : 
						  vlTOPp->Addr_Buffer__DOT__counter
						  [2U])));
    vlTOPp->io_front = ((vlTOPp->Addr_Buffer__DOT__counter
			 [0U] > vlTOPp->Addr_Buffer__DOT__counter
			 [1U]) ? ((vlTOPp->Addr_Buffer__DOT__counter
				   [0U] > vlTOPp->Addr_Buffer__DOT__counter
				   [2U]) ? vlTOPp->Addr_Buffer__DOT__buffer
				  [0U] : vlTOPp->Addr_Buffer__DOT__buffer
				  [2U]) : ((vlTOPp->Addr_Buffer__DOT__counter
					    [1U] > 
					    vlTOPp->Addr_Buffer__DOT__counter
					    [2U]) ? 
					   vlTOPp->Addr_Buffer__DOT__buffer
					   [1U] : vlTOPp->Addr_Buffer__DOT__buffer
					   [2U]));
    vlTOPp->Addr_Buffer__DOT___T_32 = (vlTOPp->Addr_Buffer__DOT__is_used
				       [0U] ? (vlTOPp->Addr_Buffer__DOT__is_used
					       [1U]
					        ? 2U
					        : 1U)
				        : 0U);
    vlTOPp->Addr_Buffer__DOT___T_38 = ((IData)(vlTOPp->io_record)
				        ? ((0U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32)) 
					   | vlTOPp->Addr_Buffer__DOT__is_used
					   [0U]) : 
				       vlTOPp->Addr_Buffer__DOT__is_used
				       [0U]);
    vlTOPp->Addr_Buffer__DOT___T_44 = ((IData)(vlTOPp->io_record)
				        ? ((1U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32)) 
					   | vlTOPp->Addr_Buffer__DOT__is_used
					   [1U]) : 
				       vlTOPp->Addr_Buffer__DOT__is_used
				       [1U]);
    vlTOPp->Addr_Buffer__DOT___T_50 = ((IData)(vlTOPp->io_record)
				        ? ((2U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32)) 
					   | vlTOPp->Addr_Buffer__DOT__is_used
					   [2U]) : 
				       vlTOPp->Addr_Buffer__DOT__is_used
				       [2U]);
    vlTOPp->Addr_Buffer__DOT___T_111 = ((IData)(vlTOPp->io_record)
					 ? ((0U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32))
					     ? vlTOPp->io_addr_input
					     : vlTOPp->Addr_Buffer__DOT__buffer
					    [0U]) : 
					vlTOPp->Addr_Buffer__DOT__buffer
					[0U]);
    vlTOPp->Addr_Buffer__DOT___T_123 = ((IData)(vlTOPp->io_record)
					 ? ((1U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32))
					     ? vlTOPp->io_addr_input
					     : vlTOPp->Addr_Buffer__DOT__buffer
					    [1U]) : 
					vlTOPp->Addr_Buffer__DOT__buffer
					[1U]);
    vlTOPp->Addr_Buffer__DOT___T_135 = ((IData)(vlTOPp->io_record)
					 ? ((2U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32))
					     ? vlTOPp->io_addr_input
					     : vlTOPp->Addr_Buffer__DOT__buffer
					    [2U]) : 
					vlTOPp->Addr_Buffer__DOT__buffer
					[2U]);
}

VL_INLINE_OPT void VAdder_Buffer::_combo__TOP__3(VAdder_Buffer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder_Buffer::_combo__TOP__3\n"); );
    VAdder_Buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Addr_Buffer__DOT___T_38 = ((IData)(vlTOPp->io_record)
				        ? ((0U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32)) 
					   | vlTOPp->Addr_Buffer__DOT__is_used
					   [0U]) : 
				       vlTOPp->Addr_Buffer__DOT__is_used
				       [0U]);
    vlTOPp->Addr_Buffer__DOT___T_44 = ((IData)(vlTOPp->io_record)
				        ? ((1U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32)) 
					   | vlTOPp->Addr_Buffer__DOT__is_used
					   [1U]) : 
				       vlTOPp->Addr_Buffer__DOT__is_used
				       [1U]);
    vlTOPp->Addr_Buffer__DOT___T_50 = ((IData)(vlTOPp->io_record)
				        ? ((2U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32)) 
					   | vlTOPp->Addr_Buffer__DOT__is_used
					   [2U]) : 
				       vlTOPp->Addr_Buffer__DOT__is_used
				       [2U]);
    vlTOPp->Addr_Buffer__DOT___T_111 = ((IData)(vlTOPp->io_record)
					 ? ((0U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32))
					     ? vlTOPp->io_addr_input
					     : vlTOPp->Addr_Buffer__DOT__buffer
					    [0U]) : 
					vlTOPp->Addr_Buffer__DOT__buffer
					[0U]);
    vlTOPp->Addr_Buffer__DOT___T_123 = ((IData)(vlTOPp->io_record)
					 ? ((1U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32))
					     ? vlTOPp->io_addr_input
					     : vlTOPp->Addr_Buffer__DOT__buffer
					    [1U]) : 
					vlTOPp->Addr_Buffer__DOT__buffer
					[1U]);
    vlTOPp->Addr_Buffer__DOT___T_135 = ((IData)(vlTOPp->io_record)
					 ? ((2U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32))
					     ? vlTOPp->io_addr_input
					     : vlTOPp->Addr_Buffer__DOT__buffer
					    [2U]) : 
					vlTOPp->Addr_Buffer__DOT__buffer
					[2U]);
}

void VAdder_Buffer::_eval(VAdder_Buffer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder_Buffer::_eval\n"); );
    VAdder_Buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VAdder_Buffer::_eval_initial(VAdder_Buffer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder_Buffer::_eval_initial\n"); );
    VAdder_Buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VAdder_Buffer::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder_Buffer::final\n"); );
    // Variables
    VAdder_Buffer__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAdder_Buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAdder_Buffer::_eval_settle(VAdder_Buffer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder_Buffer::_eval_settle\n"); );
    VAdder_Buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VAdder_Buffer::_change_request(VAdder_Buffer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder_Buffer::_change_request\n"); );
    VAdder_Buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAdder_Buffer::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder_Buffer::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_flush & 0xfeU))) {
	Verilated::overWidthError("io_flush");}
    if (VL_UNLIKELY((io_record & 0xfeU))) {
	Verilated::overWidthError("io_record");}
}
#endif // VL_DEBUG

void VAdder_Buffer::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder_Buffer::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_addr_input = VL_RAND_RESET_I(32);
    io_flush = VL_RAND_RESET_I(1);
    io_record = VL_RAND_RESET_I(1);
    io_front = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
	    Addr_Buffer__DOT__buffer[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
	    Addr_Buffer__DOT__counter[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
	    Addr_Buffer__DOT__is_used[__Vi0] = VL_RAND_RESET_I(1);
    }}
    Addr_Buffer__DOT___T_32 = VL_RAND_RESET_I(2);
    Addr_Buffer__DOT___T_38 = VL_RAND_RESET_I(1);
    Addr_Buffer__DOT___T_44 = VL_RAND_RESET_I(1);
    Addr_Buffer__DOT___T_50 = VL_RAND_RESET_I(1);
    Addr_Buffer__DOT___T_78 = VL_RAND_RESET_I(3);
    Addr_Buffer__DOT___T_89 = VL_RAND_RESET_I(3);
    Addr_Buffer__DOT___T_100 = VL_RAND_RESET_I(3);
    Addr_Buffer__DOT___T_111 = VL_RAND_RESET_I(32);
    Addr_Buffer__DOT___T_123 = VL_RAND_RESET_I(32);
    Addr_Buffer__DOT___T_135 = VL_RAND_RESET_I(32);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
