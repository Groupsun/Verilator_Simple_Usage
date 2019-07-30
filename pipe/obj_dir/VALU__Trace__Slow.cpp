// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


//======================

void VALU::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VALU::traceInit, &VALU::traceFull, &VALU::traceChg, this);
}
void VALU::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VALU* t=(VALU*)userthis;
    VALU__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VALU::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VALU* t=(VALU*)userthis;
    VALU__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VALU::traceInitThis(VALU__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VALU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VALU::traceFullThis(VALU__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VALU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VALU::traceInitThis__1(VALU__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VALU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+1,"clock",-1);
	vcdp->declBit(c+2,"reset",-1);
	vcdp->declBus(c+3,"io_Src_A",-1,31,0);
	vcdp->declBus(c+4,"io_Src_B",-1,31,0);
	vcdp->declBus(c+5,"io_ALUOp",-1,4,0);
	vcdp->declBus(c+6,"io_Sum",-1,31,0);
	vcdp->declBit(c+7,"io_Conflag",-1);
	vcdp->declBit(c+1,"ALU clock",-1);
	vcdp->declBit(c+2,"ALU reset",-1);
	vcdp->declBus(c+3,"ALU io_Src_A",-1,31,0);
	vcdp->declBus(c+4,"ALU io_Src_B",-1,31,0);
	vcdp->declBus(c+5,"ALU io_ALUOp",-1,4,0);
	vcdp->declBus(c+6,"ALU io_Sum",-1,31,0);
	vcdp->declBit(c+7,"ALU io_Conflag",-1);
	vcdp->declBus(c+8,"ALU shamt",-1,5,0);
	// Tracing: ALU _T_32 // Ignored: Inlined leading underscore at ALU.v:11
	// Tracing: ALU _T_33 // Ignored: Inlined leading underscore at ALU.v:12
	// Tracing: ALU _T_34 // Ignored: Inlined leading underscore at ALU.v:13
	// Tracing: ALU _T_35 // Ignored: Inlined leading underscore at ALU.v:14
	// Tracing: ALU _T_36 // Ignored: Inlined leading underscore at ALU.v:15
	// Tracing: ALU _T_37 // Ignored: Inlined leading underscore at ALU.v:16
	// Tracing: ALU _T_38 // Ignored: Inlined leading underscore at ALU.v:17
	// Tracing: ALU _GEN_0 // Ignored: Inlined leading underscore at ALU.v:18
	// Tracing: ALU _T_39 // Ignored: Inlined leading underscore at ALU.v:19
	// Tracing: ALU _GEN_1 // Ignored: Inlined leading underscore at ALU.v:20
	// Tracing: ALU _T_40 // Ignored: Inlined leading underscore at ALU.v:21
	// Tracing: ALU _T_41 // Ignored: Inlined leading underscore at ALU.v:22
	// Tracing: ALU _T_42 // Ignored: Inlined leading underscore at ALU.v:23
	// Tracing: ALU _T_43 // Ignored: Inlined leading underscore at ALU.v:24
	// Tracing: ALU _T_44 // Ignored: Inlined leading underscore at ALU.v:25
	// Tracing: ALU _T_46 // Ignored: Inlined leading underscore at ALU.v:26
	// Tracing: ALU _T_47 // Ignored: Inlined leading underscore at ALU.v:27
	// Tracing: ALU _T_48 // Ignored: Inlined leading underscore at ALU.v:28
	// Tracing: ALU _T_49 // Ignored: Inlined leading underscore at ALU.v:29
	// Tracing: ALU _T_50 // Ignored: Inlined leading underscore at ALU.v:30
	// Tracing: ALU _T_51 // Ignored: Inlined leading underscore at ALU.v:31
	// Tracing: ALU _T_52 // Ignored: Inlined leading underscore at ALU.v:32
	// Tracing: ALU _T_53 // Ignored: Inlined leading underscore at ALU.v:33
	// Tracing: ALU _T_54 // Ignored: Inlined leading underscore at ALU.v:34
	// Tracing: ALU _T_55 // Ignored: Inlined leading underscore at ALU.v:35
	// Tracing: ALU _T_56 // Ignored: Inlined leading underscore at ALU.v:36
	// Tracing: ALU _T_57 // Ignored: Inlined leading underscore at ALU.v:37
	// Tracing: ALU _T_58 // Ignored: Inlined leading underscore at ALU.v:38
	// Tracing: ALU _T_59 // Ignored: Inlined leading underscore at ALU.v:39
	// Tracing: ALU _T_60 // Ignored: Inlined leading underscore at ALU.v:40
	// Tracing: ALU _T_61 // Ignored: Inlined leading underscore at ALU.v:41
	// Tracing: ALU _T_62 // Ignored: Inlined leading underscore at ALU.v:42
	// Tracing: ALU _T_63 // Ignored: Inlined leading underscore at ALU.v:43
	// Tracing: ALU _T_64 // Ignored: Inlined leading underscore at ALU.v:44
	// Tracing: ALU _T_65 // Ignored: Inlined leading underscore at ALU.v:45
	// Tracing: ALU _T_66 // Ignored: Inlined leading underscore at ALU.v:46
	// Tracing: ALU _T_67 // Ignored: Inlined leading underscore at ALU.v:47
	// Tracing: ALU _T_68 // Ignored: Inlined leading underscore at ALU.v:48
	// Tracing: ALU _T_72 // Ignored: Inlined leading underscore at ALU.v:49
	// Tracing: ALU _T_75 // Ignored: Inlined leading underscore at ALU.v:50
	// Tracing: ALU _T_81 // Ignored: Inlined leading underscore at ALU.v:51
	// Tracing: ALU _T_83 // Ignored: Inlined leading underscore at ALU.v:52
	// Tracing: ALU _T_84 // Ignored: Inlined leading underscore at ALU.v:53
	// Tracing: ALU _T_85 // Ignored: Inlined leading underscore at ALU.v:54
	// Tracing: ALU _T_86 // Ignored: Inlined leading underscore at ALU.v:55
	// Tracing: ALU _T_87 // Ignored: Inlined leading underscore at ALU.v:56
	// Tracing: ALU _T_88 // Ignored: Inlined leading underscore at ALU.v:57
	// Tracing: ALU _T_89 // Ignored: Inlined leading underscore at ALU.v:58
	// Tracing: ALU _T_90 // Ignored: Inlined leading underscore at ALU.v:59
	// Tracing: ALU _T_91 // Ignored: Inlined leading underscore at ALU.v:60
	// Tracing: ALU _T_92 // Ignored: Inlined leading underscore at ALU.v:61
	// Tracing: ALU _T_93 // Ignored: Inlined leading underscore at ALU.v:62
	// Tracing: ALU _T_94 // Ignored: Inlined leading underscore at ALU.v:63
    }
}

void VALU::traceFullThis__1(VALU__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VALU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit(c+1,(vlTOPp->clock));
	vcdp->fullBit(c+2,(vlTOPp->reset));
	vcdp->fullBus(c+3,(vlTOPp->io_Src_A),32);
	vcdp->fullBus(c+4,(vlTOPp->io_Src_B),32);
	vcdp->fullBus(c+5,(vlTOPp->io_ALUOp),5);
	vcdp->fullBus(c+6,(vlTOPp->io_Sum),32);
	vcdp->fullBit(c+7,(vlTOPp->io_Conflag));
	vcdp->fullBus(c+8,((0x3fU & vlTOPp->io_Src_B)),6);
    }
}
