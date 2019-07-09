// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTile.h for the primary calling header

#include "VTile.h"
#include "VTile__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VTile) {
    VTile__Syms* __restrict vlSymsp = __VlSymsp = new VTile__Syms(this, name());
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTile::__Vconfigure(VTile__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTile::~VTile() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VTile::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTile::eval\n"); );
    VTile__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VTile::_eval_initial_loop(VTile__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VTile::_sequent__TOP__1(VTile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile::_sequent__TOP__1\n"); );
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at Tile.v:219
    if (vlTOPp->reset) {
	vlTOPp->Tile__DOT__if_id_register__DOT__pc = 0U;
    } else {
	if (vlTOPp->io_IF_ID_Flush) {
	    vlTOPp->Tile__DOT__if_id_register__DOT__pc = 0U;
	} else {
	    if (vlTOPp->io_IF_ID_Write) {
		vlTOPp->Tile__DOT__if_id_register__DOT__pc 
		    = vlTOPp->Tile__DOT__pc__DOT__pc_reg;
	    }
	}
    }
    // ALWAYS at Tile.v:219
    if (vlTOPp->reset) {
	vlTOPp->Tile__DOT__if_id_register__DOT__pc_4 = 0U;
    } else {
	if (vlTOPp->io_IF_ID_Flush) {
	    vlTOPp->Tile__DOT__if_id_register__DOT__pc_4 = 0U;
	} else {
	    if (vlTOPp->io_IF_ID_Write) {
		vlTOPp->Tile__DOT__if_id_register__DOT__pc_4 
		    = ((IData)(4U) + vlTOPp->Tile__DOT__pc__DOT__pc_reg);
	    }
	}
    }
    // ALWAYS at Tile.v:219
    if (vlTOPp->reset) {
	vlTOPp->Tile__DOT__if_id_register__DOT__inst = 0U;
    } else {
	if (vlTOPp->io_IF_ID_Flush) {
	    vlTOPp->Tile__DOT__if_id_register__DOT__inst = 0U;
	} else {
	    if (vlTOPp->io_IF_ID_Write) {
		vlTOPp->Tile__DOT__if_id_register__DOT__inst 
		    = ((vlTOPp->Tile__DOT__instcache__DOT__cache
			[(0x3ffU & vlTOPp->Tile__DOT__pc__DOT__pc_reg)] 
			<< 0x18U) | ((vlTOPp->Tile__DOT__instcache__DOT__cache
				      [(0x3ffU & ((IData)(1U) 
						  + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))] 
				      << 0x10U) | (
						   (vlTOPp->Tile__DOT__instcache__DOT__cache
						    [
						    (0x3ffU 
						     & ((IData)(2U) 
							+ (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))] 
						    << 8U) 
						   | vlTOPp->Tile__DOT__instcache__DOT__cache
						   [
						   (0x3ffU 
						    & ((IData)(3U) 
						       + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))])));
	    }
	}
    }
    vlTOPp->io_id_pc = vlTOPp->Tile__DOT__if_id_register__DOT__pc;
    vlTOPp->io_id_pc_4 = vlTOPp->Tile__DOT__if_id_register__DOT__pc_4;
    vlTOPp->io_id_rs1 = (0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				  >> 0xfU));
    vlTOPp->io_id_rs2 = (0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				  >> 0x14U));
    vlTOPp->io_id_inst = vlTOPp->Tile__DOT__if_id_register__DOT__inst;
    // ALWAYS at Tile.v:47
    if (vlTOPp->reset) {
	vlTOPp->Tile__DOT__pc__DOT__pc_reg = 0U;
    } else {
	if (vlTOPp->io_PC_Write) {
	    vlTOPp->Tile__DOT__pc__DOT__pc_reg = vlTOPp->Tile__DOT__datapath_io_if_io_next_pc;
	}
    }
}

void VTile::_initial__TOP__2(VTile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile::_initial__TOP__2\n"); );
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1,127,0,4);
    // Body
    // INITIAL at InstCache_bind.v:8
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x61636865U;
    __Vtemp1[2U] = 0x6e737463U;
    __Vtemp1[3U] = 0x69U;
    VL_READMEM_W(true,8,1024, 0,4, __Vtemp1, vlTOPp->Tile__DOT__instcache__DOT__cache
		 ,0,~0);
}

void VTile::_settle__TOP__3(VTile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile::_settle__TOP__3\n"); );
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_id_pc = vlTOPp->Tile__DOT__if_id_register__DOT__pc;
    vlTOPp->io_id_pc_4 = vlTOPp->Tile__DOT__if_id_register__DOT__pc_4;
    vlTOPp->io_id_rs1 = (0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				  >> 0xfU));
    vlTOPp->io_id_rs2 = (0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				  >> 0x14U));
    vlTOPp->io_id_inst = vlTOPp->Tile__DOT__if_id_register__DOT__inst;
    vlTOPp->Tile__DOT__datapath_io_if_io_next_pc = 
	((0U == (IData)(vlTOPp->io_PC_Sel)) ? ((IData)(4U) 
					       + vlTOPp->Tile__DOT__pc__DOT__pc_reg)
	  : ((1U == (IData)(vlTOPp->io_PC_Sel)) ? vlTOPp->io_pc_recover
	      : ((2U == (IData)(vlTOPp->io_PC_Sel))
		  ? vlTOPp->io_new_addr : 0U)));
}

VL_INLINE_OPT void VTile::_combo__TOP__4(VTile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile::_combo__TOP__4\n"); );
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Tile__DOT__datapath_io_if_io_next_pc = 
	((0U == (IData)(vlTOPp->io_PC_Sel)) ? ((IData)(4U) 
					       + vlTOPp->Tile__DOT__pc__DOT__pc_reg)
	  : ((1U == (IData)(vlTOPp->io_PC_Sel)) ? vlTOPp->io_pc_recover
	      : ((2U == (IData)(vlTOPp->io_PC_Sel))
		  ? vlTOPp->io_new_addr : 0U)));
}

void VTile::_eval(VTile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile::_eval\n"); );
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VTile::_eval_initial(VTile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile::_eval_initial\n"); );
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->_initial__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VTile::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile::final\n"); );
    // Variables
    VTile__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTile::_eval_settle(VTile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile::_eval_settle\n"); );
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

VL_INLINE_OPT QData VTile::_change_request(VTile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile::_change_request\n"); );
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTile::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_PC_Write & 0xfeU))) {
	Verilated::overWidthError("io_PC_Write");}
    if (VL_UNLIKELY((io_PC_Sel & 0xfcU))) {
	Verilated::overWidthError("io_PC_Sel");}
    if (VL_UNLIKELY((io_IF_ID_Write & 0xfeU))) {
	Verilated::overWidthError("io_IF_ID_Write");}
    if (VL_UNLIKELY((io_IF_ID_Flush & 0xfeU))) {
	Verilated::overWidthError("io_IF_ID_Flush");}
}
#endif // VL_DEBUG

void VTile::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_PC_Write = VL_RAND_RESET_I(1);
    io_pc_recover = VL_RAND_RESET_I(32);
    io_new_addr = VL_RAND_RESET_I(32);
    io_PC_Sel = VL_RAND_RESET_I(2);
    io_IF_ID_Write = VL_RAND_RESET_I(1);
    io_IF_ID_Flush = VL_RAND_RESET_I(1);
    io_id_pc = VL_RAND_RESET_I(32);
    io_id_pc_4 = VL_RAND_RESET_I(32);
    io_id_rs1 = VL_RAND_RESET_I(5);
    io_id_rs2 = VL_RAND_RESET_I(5);
    io_id_inst = VL_RAND_RESET_I(32);
    Tile__DOT__datapath_io_if_io_next_pc = VL_RAND_RESET_I(32);
    Tile__DOT__pc__DOT__pc_reg = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    Tile__DOT__instcache__DOT__cache[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Tile__DOT__if_id_register__DOT__pc = VL_RAND_RESET_I(32);
    Tile__DOT__if_id_register__DOT__pc_4 = VL_RAND_RESET_I(32);
    Tile__DOT__if_id_register__DOT__inst = VL_RAND_RESET_I(32);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
