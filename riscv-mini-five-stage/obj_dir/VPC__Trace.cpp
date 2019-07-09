// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPC__Syms.h"


//======================

void VPC::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPC* t=(VPC*)userthis;
    VPC__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VPC::traceChgThis(VPC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VPC::traceChgThis__2(VPC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1,(vlTOPp->PC__DOT__pc_reg),32);
    }
}

void VPC::traceChgThis__3(VPC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+2,(vlTOPp->clock));
	vcdp->chgBit(c+3,(vlTOPp->reset));
	vcdp->chgBus(c+4,(vlTOPp->io_next_pc),32);
	vcdp->chgBit(c+5,(vlTOPp->io_pc_write));
	vcdp->chgBus(c+6,(vlTOPp->io_pc_out),32);
    }
}
