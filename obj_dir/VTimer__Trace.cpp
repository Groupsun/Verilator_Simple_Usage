// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTimer__Syms.h"


//======================

void VTimer::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTimer* t=(VTimer*)userthis;
    VTimer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VTimer::traceChgThis(VTimer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTimer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VTimer::traceChgThis__2(VTimer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTimer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1,(vlTOPp->Timer__DOT__timer),32);
    }
}

void VTimer::traceChgThis__3(VTimer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTimer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+2,(vlTOPp->clock));
	vcdp->chgBit(c+3,(vlTOPp->reset));
	vcdp->chgBus(c+4,(vlTOPp->io_out),32);
    }
}
