// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMuxLookup_Test__Syms.h"


//======================

void VMuxLookup_Test::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VMuxLookup_Test::traceInit, &VMuxLookup_Test::traceFull, &VMuxLookup_Test::traceChg, this);
}
void VMuxLookup_Test::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VMuxLookup_Test* t=(VMuxLookup_Test*)userthis;
    VMuxLookup_Test__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VMuxLookup_Test::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VMuxLookup_Test* t=(VMuxLookup_Test*)userthis;
    VMuxLookup_Test__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VMuxLookup_Test::traceInitThis(VMuxLookup_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMuxLookup_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VMuxLookup_Test::traceFullThis(VMuxLookup_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMuxLookup_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VMuxLookup_Test::traceInitThis__1(VMuxLookup_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMuxLookup_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+1,"clock",-1);
	vcdp->declBit(c+2,"reset",-1);
	vcdp->declBus(c+3,"io_PC_Sel",-1,1,0);
	vcdp->declBus(c+4,"io_pc_out",-1,31,0);
	vcdp->declBus(c+5,"io_pc_recover",-1,31,0);
	vcdp->declBus(c+6,"io_new_addr",-1,31,0);
	vcdp->declBus(c+7,"io_next_pc",-1,31,0);
	vcdp->declBus(c+8,"io_pc_4",-1,31,0);
	vcdp->declBit(c+1,"MuxLookup_Test clock",-1);
	vcdp->declBit(c+2,"MuxLookup_Test reset",-1);
	vcdp->declBus(c+3,"MuxLookup_Test io_PC_Sel",-1,1,0);
	vcdp->declBus(c+4,"MuxLookup_Test io_pc_out",-1,31,0);
	vcdp->declBus(c+5,"MuxLookup_Test io_pc_recover",-1,31,0);
	vcdp->declBus(c+6,"MuxLookup_Test io_new_addr",-1,31,0);
	vcdp->declBus(c+7,"MuxLookup_Test io_next_pc",-1,31,0);
	vcdp->declBus(c+8,"MuxLookup_Test io_pc_4",-1,31,0);
	// Tracing: MuxLookup_Test _T_18 // Ignored: Inlined leading underscore at MuxLookup_Test.v:11
	// Tracing: MuxLookup_Test _T_24 // Ignored: Inlined leading underscore at MuxLookup_Test.v:12
	// Tracing: MuxLookup_Test _T_25 // Ignored: Inlined leading underscore at MuxLookup_Test.v:13
	// Tracing: MuxLookup_Test _T_26 // Ignored: Inlined leading underscore at MuxLookup_Test.v:14
	// Tracing: MuxLookup_Test _T_27 // Ignored: Inlined leading underscore at MuxLookup_Test.v:15
	// Tracing: MuxLookup_Test _T_28 // Ignored: Inlined leading underscore at MuxLookup_Test.v:16
    }
}

void VMuxLookup_Test::traceFullThis__1(VMuxLookup_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMuxLookup_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit(c+1,(vlTOPp->clock));
	vcdp->fullBit(c+2,(vlTOPp->reset));
	vcdp->fullBus(c+3,(vlTOPp->io_PC_Sel),2);
	vcdp->fullBus(c+4,(vlTOPp->io_pc_out),32);
	vcdp->fullBus(c+5,(vlTOPp->io_pc_recover),32);
	vcdp->fullBus(c+6,(vlTOPp->io_new_addr),32);
	vcdp->fullBus(c+7,(vlTOPp->io_next_pc),32);
	vcdp->fullBus(c+8,(vlTOPp->io_pc_4),32);
    }
}
