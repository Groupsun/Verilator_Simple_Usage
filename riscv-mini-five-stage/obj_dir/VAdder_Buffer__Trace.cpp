// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAdder_Buffer__Syms.h"


//======================

void VAdder_Buffer::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAdder_Buffer* t=(VAdder_Buffer*)userthis;
    VAdder_Buffer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VAdder_Buffer::traceChgThis(VAdder_Buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAdder_Buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAdder_Buffer::traceChgThis__2(VAdder_Buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAdder_Buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1,(vlTOPp->Addr_Buffer__DOT__buffer[0]),32);
	vcdp->chgBus(c+2,(vlTOPp->Addr_Buffer__DOT__buffer[1]),32);
	vcdp->chgBus(c+3,(vlTOPp->Addr_Buffer__DOT__buffer[2]),32);
	vcdp->chgBus(c+4,(vlTOPp->Addr_Buffer__DOT__buffer
			  [0U]),32);
	vcdp->chgBus(c+5,(vlTOPp->Addr_Buffer__DOT__buffer
			  [2U]),32);
	vcdp->chgBus(c+6,(vlTOPp->Addr_Buffer__DOT__buffer
			  [1U]),32);
	vcdp->chgBus(c+7,(vlTOPp->Addr_Buffer__DOT__counter[0]),2);
	vcdp->chgBus(c+8,(vlTOPp->Addr_Buffer__DOT__counter[1]),2);
	vcdp->chgBus(c+9,(vlTOPp->Addr_Buffer__DOT__counter[2]),2);
	vcdp->chgBus(c+10,(vlTOPp->Addr_Buffer__DOT__counter
			   [0U]),2);
	vcdp->chgBus(c+11,(vlTOPp->Addr_Buffer__DOT__counter
			   [1U]),2);
	vcdp->chgBus(c+12,(vlTOPp->Addr_Buffer__DOT__counter
			   [2U]),2);
	vcdp->chgBit(c+13,(vlTOPp->Addr_Buffer__DOT__is_used[0]));
	vcdp->chgBit(c+14,(vlTOPp->Addr_Buffer__DOT__is_used[1]));
	vcdp->chgBit(c+15,(vlTOPp->Addr_Buffer__DOT__is_used[2]));
	vcdp->chgBit(c+16,(vlTOPp->Addr_Buffer__DOT__is_used
			   [0U]));
	vcdp->chgBit(c+17,(vlTOPp->Addr_Buffer__DOT__is_used
			   [1U]));
	vcdp->chgBit(c+18,(vlTOPp->Addr_Buffer__DOT__is_used
			   [2U]));
    }
}

void VAdder_Buffer::traceChgThis__3(VAdder_Buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAdder_Buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+19,(vlTOPp->clock));
	vcdp->chgBit(c+20,(vlTOPp->reset));
	vcdp->chgBus(c+21,(vlTOPp->io_addr_input),32);
	vcdp->chgBit(c+22,(vlTOPp->io_flush));
	vcdp->chgBit(c+23,(vlTOPp->io_record));
	vcdp->chgBus(c+24,(vlTOPp->io_front),32);
	vcdp->chgBus(c+25,(((IData)(vlTOPp->io_flush)
			     ? 0U : ((2U == vlTOPp->Addr_Buffer__DOT__counter
				      [0U]) ? 0U : 
				     ((IData)(vlTOPp->io_record)
				       ? ((0U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32))
					   ? vlTOPp->io_addr_input
					   : vlTOPp->Addr_Buffer__DOT__buffer
					  [0U]) : vlTOPp->Addr_Buffer__DOT__buffer
				      [0U])))),32);
	vcdp->chgBus(c+26,(((IData)(vlTOPp->io_flush)
			     ? 0U : ((2U == vlTOPp->Addr_Buffer__DOT__counter
				      [1U]) ? 0U : 
				     ((IData)(vlTOPp->io_record)
				       ? ((1U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32))
					   ? vlTOPp->io_addr_input
					   : vlTOPp->Addr_Buffer__DOT__buffer
					  [1U]) : vlTOPp->Addr_Buffer__DOT__buffer
				      [1U])))),32);
	vcdp->chgBus(c+27,(((IData)(vlTOPp->io_flush)
			     ? 0U : ((2U == vlTOPp->Addr_Buffer__DOT__counter
				      [2U]) ? 0U : 
				     ((IData)(vlTOPp->io_record)
				       ? ((2U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32))
					   ? vlTOPp->io_addr_input
					   : vlTOPp->Addr_Buffer__DOT__buffer
					  [2U]) : vlTOPp->Addr_Buffer__DOT__buffer
				      [2U])))),32);
	vcdp->chgBus(c+28,((3U & ((IData)(vlTOPp->io_flush)
				   ? 0U : ((2U == vlTOPp->Addr_Buffer__DOT__counter
					    [0U]) ? 0U
					    : (vlTOPp->Addr_Buffer__DOT__is_used
					       [0U]
					        ? ((IData)(1U) 
						   + 
						   vlTOPp->Addr_Buffer__DOT__counter
						   [0U])
					        : vlTOPp->Addr_Buffer__DOT__counter
					       [0U]))))),2);
	vcdp->chgBus(c+29,((3U & ((IData)(vlTOPp->io_flush)
				   ? 0U : ((2U == vlTOPp->Addr_Buffer__DOT__counter
					    [1U]) ? 0U
					    : (vlTOPp->Addr_Buffer__DOT__is_used
					       [1U]
					        ? ((IData)(1U) 
						   + 
						   vlTOPp->Addr_Buffer__DOT__counter
						   [1U])
					        : vlTOPp->Addr_Buffer__DOT__counter
					       [1U]))))),2);
	vcdp->chgBus(c+30,((3U & ((IData)(vlTOPp->io_flush)
				   ? 0U : ((2U == vlTOPp->Addr_Buffer__DOT__counter
					    [2U]) ? 0U
					    : (vlTOPp->Addr_Buffer__DOT__is_used
					       [2U]
					        ? ((IData)(1U) 
						   + 
						   vlTOPp->Addr_Buffer__DOT__counter
						   [2U])
					        : vlTOPp->Addr_Buffer__DOT__counter
					       [2U]))))),2);
	vcdp->chgBit(c+31,(((~ (IData)(vlTOPp->io_flush)) 
			    & ((2U != vlTOPp->Addr_Buffer__DOT__counter
				[0U]) & ((IData)(vlTOPp->io_record)
					  ? ((0U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32)) 
					     | vlTOPp->Addr_Buffer__DOT__is_used
					     [0U]) : 
					 vlTOPp->Addr_Buffer__DOT__is_used
					 [0U])))));
	vcdp->chgBit(c+32,(((~ (IData)(vlTOPp->io_flush)) 
			    & ((2U != vlTOPp->Addr_Buffer__DOT__counter
				[1U]) & ((IData)(vlTOPp->io_record)
					  ? ((1U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32)) 
					     | vlTOPp->Addr_Buffer__DOT__is_used
					     [1U]) : 
					 vlTOPp->Addr_Buffer__DOT__is_used
					 [1U])))));
	vcdp->chgBit(c+33,(((~ (IData)(vlTOPp->io_flush)) 
			    & ((2U != vlTOPp->Addr_Buffer__DOT__counter
				[2U]) & ((IData)(vlTOPp->io_record)
					  ? ((2U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32)) 
					     | vlTOPp->Addr_Buffer__DOT__is_used
					     [2U]) : 
					 vlTOPp->Addr_Buffer__DOT__is_used
					 [2U])))));
    }
}
