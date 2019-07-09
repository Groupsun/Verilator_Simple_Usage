// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTest__Syms.h"


//======================

void VTest::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VTest::traceInit, &VTest::traceFull, &VTest::traceChg, this);
}
void VTest::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VTest* t=(VTest*)userthis;
    VTest__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VTest::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTest* t=(VTest*)userthis;
    VTest__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VTest::traceInitThis(VTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VTest::traceFullThis(VTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTest::traceInitThis__1(VTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+1,"clock",-1);
	vcdp->declBit(c+2,"reset",-1);
	vcdp->declBus(c+3,"io_a",-1,31,0);
	vcdp->declBus(c+4,"io_b",-1,31,0);
	vcdp->declBus(c+5,"io_ctl",-1,1,0);
	vcdp->declBus(c+6,"io_out",-1,31,0);
	vcdp->declBit(c+1,"Test clock",-1);
	vcdp->declBit(c+2,"Test reset",-1);
	vcdp->declBus(c+3,"Test io_a",-1,31,0);
	vcdp->declBus(c+4,"Test io_b",-1,31,0);
	vcdp->declBus(c+5,"Test io_ctl",-1,1,0);
	vcdp->declBus(c+6,"Test io_out",-1,31,0);
	// Tracing: Test _T_8 // Ignored: Inlined leading underscore at Test.v:9
	// Tracing: Test _T_9 // Ignored: Inlined leading underscore at Test.v:10
	// Tracing: Test _T_10 // Ignored: Inlined leading underscore at Test.v:11
	// Tracing: Test _T_11 // Ignored: Inlined leading underscore at Test.v:12
	// Tracing: Test _T_12 // Ignored: Inlined leading underscore at Test.v:13
	// Tracing: Test _T_13 // Ignored: Inlined leading underscore at Test.v:14
	// Tracing: Test _T_14 // Ignored: Inlined leading underscore at Test.v:15
	// Tracing: Test _T_15 // Ignored: Inlined leading underscore at Test.v:16
	// Tracing: Test _T_16 // Ignored: Inlined leading underscore at Test.v:17
	// Tracing: Test _T_17 // Ignored: Inlined leading underscore at Test.v:18
	// Tracing: Test _T_18 // Ignored: Inlined leading underscore at Test.v:19
	// Tracing: Test _T_19 // Ignored: Inlined leading underscore at Test.v:20
    }
}

void VTest::traceFullThis__1(VTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit(c+1,(vlTOPp->clock));
	vcdp->fullBit(c+2,(vlTOPp->reset));
	vcdp->fullBus(c+3,(vlTOPp->io_a),32);
	vcdp->fullBus(c+4,(vlTOPp->io_b),32);
	vcdp->fullBus(c+5,(vlTOPp->io_ctl),2);
	vcdp->fullBus(c+6,(vlTOPp->io_out),32);
    }
}
