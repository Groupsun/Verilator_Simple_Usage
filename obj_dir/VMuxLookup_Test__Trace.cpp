// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMuxLookup_Test__Syms.h"


//======================

void VMuxLookup_Test::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VMuxLookup_Test* t=(VMuxLookup_Test*)userthis;
    VMuxLookup_Test__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VMuxLookup_Test::traceChgThis(VMuxLookup_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMuxLookup_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VMuxLookup_Test::traceChgThis__2(VMuxLookup_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMuxLookup_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1,(vlTOPp->clock));
	vcdp->chgBit(c+2,(vlTOPp->reset));
	vcdp->chgBus(c+3,(vlTOPp->io_PC_Sel),2);
	vcdp->chgBus(c+4,(vlTOPp->io_pc_out),32);
	vcdp->chgBus(c+5,(vlTOPp->io_pc_recover),32);
	vcdp->chgBus(c+6,(vlTOPp->io_new_addr),32);
	vcdp->chgBus(c+7,(vlTOPp->io_next_pc),32);
	vcdp->chgBus(c+8,(vlTOPp->io_pc_4),32);
    }
}
