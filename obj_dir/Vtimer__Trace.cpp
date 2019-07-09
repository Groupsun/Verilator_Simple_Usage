// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtimer__Syms.h"


//======================

void Vtimer::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtimer* t=(Vtimer*)userthis;
    Vtimer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vtimer::traceChgThis(Vtimer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtimer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vtimer::traceChgThis__2(Vtimer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtimer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1,(vlTOPp->Timer__DOT__r),32);
    }
}

void Vtimer::traceChgThis__3(Vtimer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtimer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+2,(vlTOPp->clock));
	vcdp->chgBit(c+3,(vlTOPp->reset));
	vcdp->chgBus(c+4,(vlTOPp->out),32);
    }
}
