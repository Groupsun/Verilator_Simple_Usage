// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDecoder__Syms.h"


//======================

void VDecoder::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDecoder* t=(VDecoder*)userthis;
    VDecoder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VDecoder::traceChgThis(VDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VDecoder::traceChgThis__2(VDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1,(vlTOPp->reset));
	vcdp->chgBus(c+2,(vlTOPp->S),3);
	vcdp->chgBus(c+3,(vlTOPp->out),8);
    }
}
