// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInstCache__Syms.h"


//======================

void VInstCache::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VInstCache::traceInit, &VInstCache::traceFull, &VInstCache::traceChg, this);
}
void VInstCache::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VInstCache* t=(VInstCache*)userthis;
    VInstCache__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VInstCache::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VInstCache* t=(VInstCache*)userthis;
    VInstCache__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VInstCache::traceInitThis(VInstCache__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstCache* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VInstCache::traceFullThis(VInstCache__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstCache* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VInstCache::traceInitThis__1(VInstCache__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstCache* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+1,"clock",-1);
	vcdp->declBit(c+2,"reset",-1);
	vcdp->declBus(c+3,"io_addr",-1,31,0);
	vcdp->declBus(c+4,"io_inst",-1,31,0);
	vcdp->declBit(c+1,"InstCache clock",-1);
	vcdp->declBit(c+2,"InstCache reset",-1);
	vcdp->declBus(c+3,"InstCache io_addr",-1,31,0);
	vcdp->declBus(c+4,"InstCache io_inst",-1,31,0);
	// Tracing: InstCache cache // Ignored: Wide memory > --trace-max-array ents at InstCache.v:7
	// Tracing: InstCache _RAND_0 // Ignored: Inlined leading underscore at InstCache.v:8
	vcdp->declBus(c+5,"InstCache cache__T_7_data",-1,7,0);
	vcdp->declBus(c+6,"InstCache cache__T_7_addr",-1,9,0);
	vcdp->declBus(c+7,"InstCache cache__T_9_data",-1,7,0);
	vcdp->declBus(c+8,"InstCache cache__T_9_addr",-1,9,0);
	vcdp->declBus(c+9,"InstCache cache__T_11_data",-1,7,0);
	vcdp->declBus(c+10,"InstCache cache__T_11_addr",-1,9,0);
	vcdp->declBus(c+11,"InstCache cache__T_13_data",-1,7,0);
	vcdp->declBus(c+12,"InstCache cache__T_13_addr",-1,9,0);
	// Tracing: InstCache _T_8 // Ignored: Inlined leading underscore at InstCache.v:17
	// Tracing: InstCache _T_10 // Ignored: Inlined leading underscore at InstCache.v:18
	// Tracing: InstCache _T_12 // Ignored: Inlined leading underscore at InstCache.v:19
	// Tracing: InstCache _T_15 // Ignored: Inlined leading underscore at InstCache.v:20
	vcdp->declBit(c+1,"InstCache BindsTo_0_InstCache_Inst clock",-1);
	vcdp->declBus(c+3,"InstCache BindsTo_0_InstCache_Inst io_addr",-1,31,0);
	vcdp->declBus(c+4,"InstCache BindsTo_0_InstCache_Inst io_inst",-1,31,0);
    }
}

void VInstCache::traceFullThis__1(VInstCache__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstCache* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit(c+1,(vlTOPp->clock));
	vcdp->fullBit(c+2,(vlTOPp->reset));
	vcdp->fullBus(c+3,(vlTOPp->io_addr),32);
	vcdp->fullBus(c+4,(vlTOPp->io_inst),32);
	vcdp->fullBus(c+5,(vlTOPp->InstCache__DOT__cache
			   [(0x3ffU & vlTOPp->io_addr)]),8);
	vcdp->fullBus(c+6,((0x3ffU & vlTOPp->io_addr)),10);
	vcdp->fullBus(c+7,(vlTOPp->InstCache__DOT__cache
			   [(0x3ffU & ((IData)(1U) 
				       + (IData)((QData)((IData)(vlTOPp->io_addr)))))]),8);
	vcdp->fullBus(c+8,((0x3ffU & ((IData)(1U) + (IData)((QData)((IData)(vlTOPp->io_addr)))))),10);
	vcdp->fullBus(c+9,(vlTOPp->InstCache__DOT__cache
			   [(0x3ffU & ((IData)(2U) 
				       + (IData)((QData)((IData)(vlTOPp->io_addr)))))]),8);
	vcdp->fullBus(c+10,((0x3ffU & ((IData)(2U) 
				       + (IData)((QData)((IData)(vlTOPp->io_addr)))))),10);
	vcdp->fullBus(c+11,(vlTOPp->InstCache__DOT__cache
			    [(0x3ffU & ((IData)(3U) 
					+ (IData)((QData)((IData)(vlTOPp->io_addr)))))]),8);
	vcdp->fullBus(c+12,((0x3ffU & ((IData)(3U) 
				       + (IData)((QData)((IData)(vlTOPp->io_addr)))))),10);
    }
}
