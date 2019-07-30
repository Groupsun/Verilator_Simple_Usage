// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDecoder__Syms.h"


//======================

void VDecoder::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VDecoder::traceInit, &VDecoder::traceFull, &VDecoder::traceChg, this);
}
void VDecoder::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VDecoder* t=(VDecoder*)userthis;
    VDecoder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VDecoder::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDecoder* t=(VDecoder*)userthis;
    VDecoder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VDecoder::traceInitThis(VDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VDecoder::traceFullThis(VDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VDecoder::traceInitThis__1(VDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+1,"reset",-1);
	vcdp->declBus(c+2,"S",-1,2,0);
	vcdp->declBus(c+3,"out",-1,7,0);
	vcdp->declBit(c+1,"Decoder reset",-1);
	vcdp->declBus(c+2,"Decoder S",-1,2,0);
	vcdp->declBus(c+3,"Decoder out",-1,7,0);
    }
}

void VDecoder::traceFullThis__1(VDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit(c+1,(vlTOPp->reset));
	vcdp->fullBus(c+2,(vlTOPp->S),3);
	vcdp->fullBus(c+3,(vlTOPp->out),8);
    }
}
