// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTimer__Syms.h"


//======================

void VTimer::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VTimer::traceInit, &VTimer::traceFull, &VTimer::traceChg, this);
}
void VTimer::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VTimer* t=(VTimer*)userthis;
    VTimer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VTimer::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTimer* t=(VTimer*)userthis;
    VTimer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VTimer::traceInitThis(VTimer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTimer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VTimer::traceFullThis(VTimer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTimer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTimer::traceInitThis__1(VTimer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTimer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+2,"clock",-1);
	vcdp->declBit(c+3,"reset",-1);
	vcdp->declBus(c+4,"io_out",-1,31,0);
	vcdp->declBit(c+2,"Timer clock",-1);
	vcdp->declBit(c+3,"Timer reset",-1);
	vcdp->declBus(c+4,"Timer io_out",-1,31,0);
	vcdp->declBus(c+1,"Timer timer",-1,31,0);
	// Tracing: Timer _RAND_0 // Ignored: Inlined leading underscore at Timer.v:7
	// Tracing: Timer _T_6 // Ignored: Inlined leading underscore at Timer.v:8
    }
}

void VTimer::traceFullThis__1(VTimer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTimer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus(c+1,(vlTOPp->Timer__DOT__timer),32);
	vcdp->fullBit(c+2,(vlTOPp->clock));
	vcdp->fullBit(c+3,(vlTOPp->reset));
	vcdp->fullBus(c+4,(vlTOPp->io_out),32);
    }
}
