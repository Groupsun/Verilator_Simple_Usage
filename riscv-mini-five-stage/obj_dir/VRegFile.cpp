// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegFile.h for the primary calling header

#include "VRegFile.h"
#include "VRegFile__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VRegFile) {
    VRegFile__Syms* __restrict vlSymsp = __VlSymsp = new VRegFile__Syms(this, name());
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VRegFile::__Vconfigure(VRegFile__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VRegFile::~VRegFile() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VRegFile::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRegFile::eval\n"); );
    VRegFile__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VRegFile::_eval_initial_loop(VRegFile__Syms* __restrict vlSymsp) {
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

void VRegFile::_initial__TOP__1(VRegFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegFile::_initial__TOP__1\n"); );
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1,95,0,3);
    // Body
    // INITIAL at RegFile_bind.v:13
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x66696c65U;
    __Vtemp1[2U] = 0x726567U;
    VL_READMEM_W(true,32,32, 0,3, __Vtemp1, vlTOPp->RegFile__DOT__regfile
		 ,0,~0);
}

VL_INLINE_OPT void VRegFile::_sequent__TOP__2(VRegFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegFile::_sequent__TOP__2\n"); );
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vdlyvdim0__RegFile__DOT__regfile__v0,4,0);
    VL_SIG(__Vdlyvval__RegFile__DOT__regfile__v0,31,0);
    // Body
    // ALWAYS at RegFile.v:85
    __Vdlyvval__RegFile__DOT__regfile__v0 = vlTOPp->RegFile__DOT__regfile___05FT_27_data;
    __Vdlyvdim0__RegFile__DOT__regfile__v0 = vlTOPp->io_rd;
    // ALWAYSPOST at RegFile.v:87
    vlTOPp->RegFile__DOT__regfile[__Vdlyvdim0__RegFile__DOT__regfile__v0] 
	= __Vdlyvval__RegFile__DOT__regfile__v0;
}

VL_INLINE_OPT void VRegFile::_settle__TOP__3(VRegFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegFile::_settle__TOP__3\n"); );
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->RegFile__DOT__regfile___05FT_27_data = 
	((IData)(vlTOPp->io_Reg_Write) ? ((0U == (IData)(vlTOPp->io_rd))
					   ? 0U : vlTOPp->io_wdata)
	  : vlTOPp->RegFile__DOT__regfile[vlTOPp->io_rd]);
    vlTOPp->io_rs1_out = (((IData)(vlTOPp->io_Reg_Write) 
			   & ((IData)(vlTOPp->io_rs1) 
			      == (IData)(vlTOPp->io_rd)))
			   ? vlTOPp->io_wdata : vlTOPp->RegFile__DOT__regfile
			  [vlTOPp->io_rs1]);
    vlTOPp->io_rs2_out = (((IData)(vlTOPp->io_Reg_Write) 
			   & ((IData)(vlTOPp->io_rs2) 
			      == (IData)(vlTOPp->io_rd)))
			   ? vlTOPp->io_wdata : vlTOPp->RegFile__DOT__regfile
			  [vlTOPp->io_rs2]);
}

void VRegFile::_eval(VRegFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegFile::_eval\n"); );
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_settle__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VRegFile::_eval_initial(VRegFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegFile::_eval_initial\n"); );
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VRegFile::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegFile::final\n"); );
    // Variables
    VRegFile__Syms* __restrict vlSymsp = this->__VlSymsp;
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRegFile::_eval_settle(VRegFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegFile::_eval_settle\n"); );
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

VL_INLINE_OPT QData VRegFile::_change_request(VRegFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegFile::_change_request\n"); );
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VRegFile::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegFile::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_rs1 & 0xe0U))) {
	Verilated::overWidthError("io_rs1");}
    if (VL_UNLIKELY((io_rs2 & 0xe0U))) {
	Verilated::overWidthError("io_rs2");}
    if (VL_UNLIKELY((io_rd & 0xe0U))) {
	Verilated::overWidthError("io_rd");}
    if (VL_UNLIKELY((io_Reg_Write & 0xfeU))) {
	Verilated::overWidthError("io_Reg_Write");}
}
#endif // VL_DEBUG

void VRegFile::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegFile::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_rs1 = VL_RAND_RESET_I(5);
    io_rs2 = VL_RAND_RESET_I(5);
    io_rd = VL_RAND_RESET_I(5);
    io_wdata = VL_RAND_RESET_I(32);
    io_rs1_out = VL_RAND_RESET_I(32);
    io_rs2_out = VL_RAND_RESET_I(32);
    io_Reg_Write = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    RegFile__DOT__regfile[__Vi0] = VL_RAND_RESET_I(32);
    }}
    RegFile__DOT__regfile___05FT_27_data = VL_RAND_RESET_I(32);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
