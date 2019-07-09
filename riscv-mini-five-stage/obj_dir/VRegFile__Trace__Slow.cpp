// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRegFile__Syms.h"


//======================

void VRegFile::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VRegFile::traceInit, &VRegFile::traceFull, &VRegFile::traceChg, this);
}
void VRegFile::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VRegFile* t=(VRegFile*)userthis;
    VRegFile__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VRegFile::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VRegFile* t=(VRegFile*)userthis;
    VRegFile__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VRegFile::traceInitThis(VRegFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VRegFile::traceFullThis(VRegFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VRegFile::traceInitThis__1(VRegFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+33,"clock",-1);
	vcdp->declBit(c+34,"reset",-1);
	vcdp->declBus(c+35,"io_rs1",-1,4,0);
	vcdp->declBus(c+36,"io_rs2",-1,4,0);
	vcdp->declBus(c+37,"io_rd",-1,4,0);
	vcdp->declBus(c+38,"io_wdata",-1,31,0);
	vcdp->declBus(c+39,"io_rs1_out",-1,31,0);
	vcdp->declBus(c+40,"io_rs2_out",-1,31,0);
	vcdp->declBit(c+41,"io_Reg_Write",-1);
	vcdp->declBit(c+33,"RegFile clock",-1);
	vcdp->declBit(c+34,"RegFile reset",-1);
	vcdp->declBus(c+35,"RegFile io_rs1",-1,4,0);
	vcdp->declBus(c+36,"RegFile io_rs2",-1,4,0);
	vcdp->declBus(c+37,"RegFile io_rd",-1,4,0);
	vcdp->declBus(c+38,"RegFile io_wdata",-1,31,0);
	vcdp->declBus(c+39,"RegFile io_rs1_out",-1,31,0);
	vcdp->declBus(c+40,"RegFile io_rs2_out",-1,31,0);
	vcdp->declBit(c+41,"RegFile io_Reg_Write",-1);
	{int i; for (i=0; i<32; i++) {
		vcdp->declBus(c+1+i*1,"RegFile regfile",(i+0),31,0);}}
	// Tracing: RegFile _RAND_0 // Ignored: Inlined leading underscore at RegFile.v:13
	vcdp->declBus(c+42,"RegFile regfile__T_18_data",-1,31,0);
	vcdp->declBus(c+35,"RegFile regfile__T_18_addr",-1,4,0);
	vcdp->declBus(c+43,"RegFile regfile__T_20_data",-1,31,0);
	vcdp->declBus(c+36,"RegFile regfile__T_20_addr",-1,4,0);
	vcdp->declBus(c+44,"RegFile regfile__T_25_data",-1,31,0);
	vcdp->declBus(c+37,"RegFile regfile__T_25_addr",-1,4,0);
	vcdp->declBus(c+45,"RegFile regfile__T_27_data",-1,31,0);
	vcdp->declBus(c+37,"RegFile regfile__T_27_addr",-1,4,0);
	vcdp->declBit(c+46,"RegFile regfile__T_27_mask",-1);
	vcdp->declBit(c+46,"RegFile regfile__T_27_en",-1);
	// Tracing: RegFile _T_13 // Ignored: Inlined leading underscore at RegFile.v:24
	// Tracing: RegFile _T_14 // Ignored: Inlined leading underscore at RegFile.v:25
	// Tracing: RegFile _T_16 // Ignored: Inlined leading underscore at RegFile.v:26
	// Tracing: RegFile _T_17 // Ignored: Inlined leading underscore at RegFile.v:27
	// Tracing: RegFile _T_23 // Ignored: Inlined leading underscore at RegFile.v:28
	// Tracing: RegFile _T_24 // Ignored: Inlined leading underscore at RegFile.v:29
	vcdp->declBit(c+33,"RegFile RegFile_Bind_0 clock",-1);
	vcdp->declBit(c+34,"RegFile RegFile_Bind_0 reset",-1);
	vcdp->declBus(c+35,"RegFile RegFile_Bind_0 io_rs1",-1,4,0);
	vcdp->declBus(c+36,"RegFile RegFile_Bind_0 io_rs2",-1,4,0);
	vcdp->declBus(c+37,"RegFile RegFile_Bind_0 io_rd",-1,4,0);
	vcdp->declBus(c+38,"RegFile RegFile_Bind_0 io_wdata",-1,31,0);
	vcdp->declBus(c+39,"RegFile RegFile_Bind_0 io_rs1_out",-1,31,0);
	vcdp->declBus(c+40,"RegFile RegFile_Bind_0 io_rs2_out",-1,31,0);
	vcdp->declBit(c+41,"RegFile RegFile_Bind_0 io_Reg_Write",-1);
    }
}

void VRegFile::traceFullThis__1(VRegFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus(c+1,(vlTOPp->RegFile__DOT__regfile[0]),32);
	vcdp->fullBus(c+2,(vlTOPp->RegFile__DOT__regfile[1]),32);
	vcdp->fullBus(c+3,(vlTOPp->RegFile__DOT__regfile[2]),32);
	vcdp->fullBus(c+4,(vlTOPp->RegFile__DOT__regfile[3]),32);
	vcdp->fullBus(c+5,(vlTOPp->RegFile__DOT__regfile[4]),32);
	vcdp->fullBus(c+6,(vlTOPp->RegFile__DOT__regfile[5]),32);
	vcdp->fullBus(c+7,(vlTOPp->RegFile__DOT__regfile[6]),32);
	vcdp->fullBus(c+8,(vlTOPp->RegFile__DOT__regfile[7]),32);
	vcdp->fullBus(c+9,(vlTOPp->RegFile__DOT__regfile[8]),32);
	vcdp->fullBus(c+10,(vlTOPp->RegFile__DOT__regfile[9]),32);
	vcdp->fullBus(c+11,(vlTOPp->RegFile__DOT__regfile[10]),32);
	vcdp->fullBus(c+12,(vlTOPp->RegFile__DOT__regfile[11]),32);
	vcdp->fullBus(c+13,(vlTOPp->RegFile__DOT__regfile[12]),32);
	vcdp->fullBus(c+14,(vlTOPp->RegFile__DOT__regfile[13]),32);
	vcdp->fullBus(c+15,(vlTOPp->RegFile__DOT__regfile[14]),32);
	vcdp->fullBus(c+16,(vlTOPp->RegFile__DOT__regfile[15]),32);
	vcdp->fullBus(c+17,(vlTOPp->RegFile__DOT__regfile[16]),32);
	vcdp->fullBus(c+18,(vlTOPp->RegFile__DOT__regfile[17]),32);
	vcdp->fullBus(c+19,(vlTOPp->RegFile__DOT__regfile[18]),32);
	vcdp->fullBus(c+20,(vlTOPp->RegFile__DOT__regfile[19]),32);
	vcdp->fullBus(c+21,(vlTOPp->RegFile__DOT__regfile[20]),32);
	vcdp->fullBus(c+22,(vlTOPp->RegFile__DOT__regfile[21]),32);
	vcdp->fullBus(c+23,(vlTOPp->RegFile__DOT__regfile[22]),32);
	vcdp->fullBus(c+24,(vlTOPp->RegFile__DOT__regfile[23]),32);
	vcdp->fullBus(c+25,(vlTOPp->RegFile__DOT__regfile[24]),32);
	vcdp->fullBus(c+26,(vlTOPp->RegFile__DOT__regfile[25]),32);
	vcdp->fullBus(c+27,(vlTOPp->RegFile__DOT__regfile[26]),32);
	vcdp->fullBus(c+28,(vlTOPp->RegFile__DOT__regfile[27]),32);
	vcdp->fullBus(c+29,(vlTOPp->RegFile__DOT__regfile[28]),32);
	vcdp->fullBus(c+30,(vlTOPp->RegFile__DOT__regfile[29]),32);
	vcdp->fullBus(c+31,(vlTOPp->RegFile__DOT__regfile[30]),32);
	vcdp->fullBus(c+32,(vlTOPp->RegFile__DOT__regfile[31]),32);
	vcdp->fullBit(c+33,(vlTOPp->clock));
	vcdp->fullBit(c+34,(vlTOPp->reset));
	vcdp->fullBus(c+35,(vlTOPp->io_rs1),5);
	vcdp->fullBus(c+36,(vlTOPp->io_rs2),5);
	vcdp->fullBus(c+37,(vlTOPp->io_rd),5);
	vcdp->fullBus(c+38,(vlTOPp->io_wdata),32);
	vcdp->fullBus(c+39,(vlTOPp->io_rs1_out),32);
	vcdp->fullBus(c+40,(vlTOPp->io_rs2_out),32);
	vcdp->fullBit(c+41,(vlTOPp->io_Reg_Write));
	vcdp->fullBus(c+42,(vlTOPp->RegFile__DOT__regfile
			    [vlTOPp->io_rs1]),32);
	vcdp->fullBus(c+43,(vlTOPp->RegFile__DOT__regfile
			    [vlTOPp->io_rs2]),32);
	vcdp->fullBus(c+44,(vlTOPp->RegFile__DOT__regfile
			    [vlTOPp->io_rd]),32);
	vcdp->fullBus(c+45,(((IData)(vlTOPp->io_Reg_Write)
			      ? ((0U == (IData)(vlTOPp->io_rd))
				  ? 0U : vlTOPp->io_wdata)
			      : vlTOPp->RegFile__DOT__regfile
			     [vlTOPp->io_rd])),32);
	vcdp->fullBit(c+46,(1U));
    }
}
