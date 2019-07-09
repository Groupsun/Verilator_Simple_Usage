// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAdder__Syms.h"


//======================

void VAdder::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VAdder::traceInit, &VAdder::traceFull, &VAdder::traceChg, this);
}
void VAdder::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAdder* t=(VAdder*)userthis;
    VAdder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAdder::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAdder* t=(VAdder*)userthis;
    VAdder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VAdder::traceInitThis(VAdder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAdder::traceFullThis(VAdder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAdder::traceInitThis__1(VAdder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+2,"clock",-1);
	vcdp->declBit(c+3,"reset",-1);
	vcdp->declBit(c+4,"io_a",-1);
	vcdp->declBit(c+5,"io_b",-1);
	vcdp->declBit(c+6,"io_v_0",-1);
	vcdp->declBit(c+7,"io_v_1",-1);
	vcdp->declBit(c+8,"io_s",-1);
	vcdp->declBit(c+2,"Adder clock",-1);
	vcdp->declBit(c+3,"Adder reset",-1);
	vcdp->declBit(c+4,"Adder io_a",-1);
	vcdp->declBit(c+5,"Adder io_b",-1);
	vcdp->declBit(c+6,"Adder io_v_0",-1);
	vcdp->declBit(c+7,"Adder io_v_1",-1);
	vcdp->declBit(c+8,"Adder io_s",-1);
	vcdp->declBus(c+1,"Adder vec_1",-1,31,0);
	// Tracing: Adder _RAND_0 // Ignored: Inlined leading underscore at Adder.v:11
	// Tracing: Adder _T_37 // Ignored: Inlined leading underscore at Adder.v:12
	// Tracing: Adder _T_39 // Ignored: Inlined leading underscore at Adder.v:13
	// Tracing: Adder _T_40 // Ignored: Inlined leading underscore at Adder.v:14
	// Tracing: Adder _T_41 // Ignored: Inlined leading underscore at Adder.v:15
	// Tracing: Adder _T_43 // Ignored: Inlined leading underscore at Adder.v:16
	// Tracing: Adder _T_44 // Ignored: Inlined leading underscore at Adder.v:17
	// Tracing: Adder _T_45 // Ignored: Inlined leading underscore at Adder.v:18
	// Tracing: Adder _T_46 // Ignored: Inlined leading underscore at Adder.v:19
	// Tracing: Adder _T_47 // Ignored: Inlined leading underscore at Adder.v:20
    }
}

void VAdder::traceFullThis__1(VAdder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus(c+1,(vlTOPp->Adder__DOT__vec_1),32);
	vcdp->fullBit(c+2,(vlTOPp->clock));
	vcdp->fullBit(c+3,(vlTOPp->reset));
	vcdp->fullBit(c+4,(vlTOPp->io_a));
	vcdp->fullBit(c+5,(vlTOPp->io_b));
	vcdp->fullBit(c+6,(vlTOPp->io_v_0));
	vcdp->fullBit(c+7,(vlTOPp->io_v_1));
	vcdp->fullBit(c+8,(vlTOPp->io_s));
    }
}
