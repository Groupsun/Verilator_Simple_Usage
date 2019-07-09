// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTest__Syms.h"


//======================

void VTest::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTest* t=(VTest*)userthis;
    VTest__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VTest::traceChgThis(VTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTest::traceChgThis__2(VTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1,(vlTOPp->clock));
	vcdp->chgBit(c+2,(vlTOPp->reset));
	vcdp->chgBus(c+3,(vlTOPp->io_a),32);
	vcdp->chgBus(c+4,(vlTOPp->io_b),32);
	vcdp->chgBus(c+5,(vlTOPp->io_ctl),2);
	vcdp->chgBus(c+6,(vlTOPp->io_out),32);
    }
}
