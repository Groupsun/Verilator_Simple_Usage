// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInstCache__Syms.h"


//======================

void VInstCache::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VInstCache* t=(VInstCache*)userthis;
    VInstCache__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VInstCache::traceChgThis(VInstCache__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstCache* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VInstCache::traceChgThis__2(VInstCache__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstCache* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1,(vlTOPp->clock));
	vcdp->chgBit(c+2,(vlTOPp->reset));
	vcdp->chgBus(c+3,(vlTOPp->io_addr),32);
	vcdp->chgBus(c+4,(vlTOPp->io_inst),32);
	vcdp->chgBus(c+5,(vlTOPp->InstCache__DOT__cache
			  [(0x3ffU & vlTOPp->io_addr)]),8);
	vcdp->chgBus(c+6,((0x3ffU & vlTOPp->io_addr)),10);
	vcdp->chgBus(c+7,(vlTOPp->InstCache__DOT__cache
			  [(0x3ffU & ((IData)(1U) + (IData)((QData)((IData)(vlTOPp->io_addr)))))]),8);
	vcdp->chgBus(c+8,((0x3ffU & ((IData)(1U) + (IData)((QData)((IData)(vlTOPp->io_addr)))))),10);
	vcdp->chgBus(c+9,(vlTOPp->InstCache__DOT__cache
			  [(0x3ffU & ((IData)(2U) + (IData)((QData)((IData)(vlTOPp->io_addr)))))]),8);
	vcdp->chgBus(c+10,((0x3ffU & ((IData)(2U) + (IData)((QData)((IData)(vlTOPp->io_addr)))))),10);
	vcdp->chgBus(c+11,(vlTOPp->InstCache__DOT__cache
			   [(0x3ffU & ((IData)(3U) 
				       + (IData)((QData)((IData)(vlTOPp->io_addr)))))]),8);
	vcdp->chgBus(c+12,((0x3ffU & ((IData)(3U) + (IData)((QData)((IData)(vlTOPp->io_addr)))))),10);
    }
}
