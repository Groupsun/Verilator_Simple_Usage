// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTile__Syms.h"


//======================

void VTile::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VTile::traceInit, &VTile::traceFull, &VTile::traceChg, this);
}
void VTile::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VTile* t=(VTile*)userthis;
    VTile__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VTile::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTile* t=(VTile*)userthis;
    VTile__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VTile::traceInitThis(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VTile::traceFullThis(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTile::traceInitThis__1(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+17,"clock",-1);
	vcdp->declBit(c+18,"reset",-1);
	vcdp->declBit(c+19,"io_PC_Write",-1);
	vcdp->declBus(c+20,"io_pc_recover",-1,31,0);
	vcdp->declBus(c+21,"io_new_addr",-1,31,0);
	vcdp->declBus(c+22,"io_PC_Sel",-1,1,0);
	vcdp->declBit(c+23,"io_IF_ID_Write",-1);
	vcdp->declBit(c+24,"io_IF_ID_Flush",-1);
	vcdp->declBus(c+25,"io_id_pc",-1,31,0);
	vcdp->declBus(c+26,"io_id_pc_4",-1,31,0);
	vcdp->declBus(c+27,"io_id_rs1",-1,4,0);
	vcdp->declBus(c+28,"io_id_rs2",-1,4,0);
	vcdp->declBus(c+29,"io_id_inst",-1,31,0);
	vcdp->declBit(c+17,"Tile clock",-1);
	vcdp->declBit(c+18,"Tile reset",-1);
	vcdp->declBit(c+19,"Tile io_PC_Write",-1);
	vcdp->declBus(c+20,"Tile io_pc_recover",-1,31,0);
	vcdp->declBus(c+21,"Tile io_new_addr",-1,31,0);
	vcdp->declBus(c+22,"Tile io_PC_Sel",-1,1,0);
	vcdp->declBit(c+23,"Tile io_IF_ID_Write",-1);
	vcdp->declBit(c+24,"Tile io_IF_ID_Flush",-1);
	vcdp->declBus(c+25,"Tile io_id_pc",-1,31,0);
	vcdp->declBus(c+26,"Tile io_id_pc_4",-1,31,0);
	vcdp->declBus(c+27,"Tile io_id_rs1",-1,4,0);
	vcdp->declBus(c+28,"Tile io_id_rs2",-1,4,0);
	vcdp->declBus(c+29,"Tile io_id_inst",-1,31,0);
	vcdp->declBit(c+17,"Tile pc_clock",-1);
	vcdp->declBit(c+18,"Tile pc_reset",-1);
	vcdp->declBus(c+30,"Tile pc_io_next_pc",-1,31,0);
	vcdp->declBit(c+19,"Tile pc_io_PC_Write",-1);
	vcdp->declBus(c+6,"Tile pc_io_pc_out",-1,31,0);
	vcdp->declBit(c+17,"Tile instcache_clock",-1);
	vcdp->declBus(c+6,"Tile instcache_io_addr",-1,31,0);
	vcdp->declBus(c+1,"Tile instcache_io_inst",-1,31,0);
	vcdp->declBus(c+6,"Tile datapath_io_if_io_pc_out",-1,31,0);
	vcdp->declBus(c+20,"Tile datapath_io_if_io_pc_recover",-1,31,0);
	vcdp->declBus(c+21,"Tile datapath_io_if_io_new_addr",-1,31,0);
	vcdp->declBus(c+30,"Tile datapath_io_if_io_next_pc",-1,31,0);
	vcdp->declBus(c+7,"Tile datapath_io_if_io_pc_4",-1,31,0);
	vcdp->declBus(c+22,"Tile datapath_io_if_io_PC_Sel",-1,1,0);
	vcdp->declBit(c+17,"Tile if_id_register_clock",-1);
	vcdp->declBit(c+18,"Tile if_id_register_reset",-1);
	vcdp->declBus(c+6,"Tile if_id_register_io_if_pc",-1,31,0);
	vcdp->declBus(c+7,"Tile if_id_register_io_if_pc_4",-1,31,0);
	vcdp->declBus(c+1,"Tile if_id_register_io_if_inst",-1,31,0);
	vcdp->declBus(c+8,"Tile if_id_register_io_id_pc",-1,31,0);
	vcdp->declBus(c+9,"Tile if_id_register_io_id_pc_4",-1,31,0);
	vcdp->declBus(c+10,"Tile if_id_register_io_id_rs1",-1,4,0);
	vcdp->declBus(c+11,"Tile if_id_register_io_id_rs2",-1,4,0);
	vcdp->declBus(c+12,"Tile if_id_register_io_id_inst",-1,31,0);
	vcdp->declBit(c+23,"Tile if_id_register_io_IF_ID_Write",-1);
	vcdp->declBit(c+24,"Tile if_id_register_io_IF_ID_Flush",-1);
	vcdp->declBit(c+17,"Tile pc clock",-1);
	vcdp->declBit(c+18,"Tile pc reset",-1);
	vcdp->declBus(c+30,"Tile pc io_next_pc",-1,31,0);
	vcdp->declBit(c+19,"Tile pc io_PC_Write",-1);
	vcdp->declBus(c+6,"Tile pc io_pc_out",-1,31,0);
	vcdp->declBus(c+6,"Tile pc pc_reg",-1,31,0);
	// Tracing: Tile pc _RAND_0 // Ignored: Inlined leading underscore at Tile.v:9
	vcdp->declBit(c+17,"Tile instcache clock",-1);
	vcdp->declBus(c+6,"Tile instcache io_addr",-1,31,0);
	vcdp->declBus(c+1,"Tile instcache io_inst",-1,31,0);
	// Tracing: Tile instcache cache // Ignored: Wide memory > --trace-max-array ents at Tile.v:62
	// Tracing: Tile instcache _RAND_0 // Ignored: Inlined leading underscore at Tile.v:63
	vcdp->declBus(c+2,"Tile instcache cache__T_32_data",-1,7,0);
	vcdp->declBus(c+13,"Tile instcache cache__T_32_addr",-1,9,0);
	vcdp->declBus(c+3,"Tile instcache cache__T_34_data",-1,7,0);
	vcdp->declBus(c+14,"Tile instcache cache__T_34_addr",-1,9,0);
	vcdp->declBus(c+4,"Tile instcache cache__T_36_data",-1,7,0);
	vcdp->declBus(c+15,"Tile instcache cache__T_36_addr",-1,9,0);
	vcdp->declBus(c+5,"Tile instcache cache__T_38_data",-1,7,0);
	vcdp->declBus(c+16,"Tile instcache cache__T_38_addr",-1,9,0);
	// Tracing: Tile instcache _T_33 // Ignored: Inlined leading underscore at Tile.v:72
	// Tracing: Tile instcache _T_35 // Ignored: Inlined leading underscore at Tile.v:73
	// Tracing: Tile instcache _T_37 // Ignored: Inlined leading underscore at Tile.v:74
	// Tracing: Tile instcache _T_40 // Ignored: Inlined leading underscore at Tile.v:75
	vcdp->declBit(c+17,"Tile instcache BindsTo_0_InstCache_Inst clock",-1);
	vcdp->declBus(c+6,"Tile instcache BindsTo_0_InstCache_Inst io_addr",-1,31,0);
	vcdp->declBus(c+1,"Tile instcache BindsTo_0_InstCache_Inst io_inst",-1,31,0);
	vcdp->declBus(c+6,"Tile datapath io_if_io_pc_out",-1,31,0);
	vcdp->declBus(c+20,"Tile datapath io_if_io_pc_recover",-1,31,0);
	vcdp->declBus(c+21,"Tile datapath io_if_io_new_addr",-1,31,0);
	vcdp->declBus(c+30,"Tile datapath io_if_io_next_pc",-1,31,0);
	vcdp->declBus(c+7,"Tile datapath io_if_io_pc_4",-1,31,0);
	vcdp->declBus(c+22,"Tile datapath io_if_io_PC_Sel",-1,1,0);
	// Tracing: Tile datapath _T_54 // Ignored: Inlined leading underscore at Tile.v:135
	// Tracing: Tile datapath _T_55 // Ignored: Inlined leading underscore at Tile.v:136
	// Tracing: Tile datapath _T_56 // Ignored: Inlined leading underscore at Tile.v:137
	// Tracing: Tile datapath _T_57 // Ignored: Inlined leading underscore at Tile.v:138
	// Tracing: Tile datapath _T_58 // Ignored: Inlined leading underscore at Tile.v:139
	// Tracing: Tile datapath _T_59 // Ignored: Inlined leading underscore at Tile.v:140
	vcdp->declBit(c+17,"Tile if_id_register clock",-1);
	vcdp->declBit(c+18,"Tile if_id_register reset",-1);
	vcdp->declBus(c+6,"Tile if_id_register io_if_pc",-1,31,0);
	vcdp->declBus(c+7,"Tile if_id_register io_if_pc_4",-1,31,0);
	vcdp->declBus(c+1,"Tile if_id_register io_if_inst",-1,31,0);
	vcdp->declBus(c+8,"Tile if_id_register io_id_pc",-1,31,0);
	vcdp->declBus(c+9,"Tile if_id_register io_id_pc_4",-1,31,0);
	vcdp->declBus(c+10,"Tile if_id_register io_id_rs1",-1,4,0);
	vcdp->declBus(c+11,"Tile if_id_register io_id_rs2",-1,4,0);
	vcdp->declBus(c+12,"Tile if_id_register io_id_inst",-1,31,0);
	vcdp->declBit(c+23,"Tile if_id_register io_IF_ID_Write",-1);
	vcdp->declBit(c+24,"Tile if_id_register io_IF_ID_Flush",-1);
	vcdp->declBus(c+8,"Tile if_id_register pc",-1,31,0);
	// Tracing: Tile if_id_register _RAND_0 // Ignored: Inlined leading underscore at Tile.v:165
	vcdp->declBus(c+9,"Tile if_id_register pc_4",-1,31,0);
	// Tracing: Tile if_id_register _RAND_1 // Ignored: Inlined leading underscore at Tile.v:167
	vcdp->declBus(c+12,"Tile if_id_register inst",-1,31,0);
	// Tracing: Tile if_id_register _RAND_2 // Ignored: Inlined leading underscore at Tile.v:169
    }
}

void VTile::traceFullThis__1(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus(c+1,(((vlTOPp->Tile__DOT__instcache__DOT__cache
			     [(0x3ffU & vlTOPp->Tile__DOT__pc__DOT__pc_reg)] 
			     << 0x18U) | ((vlTOPp->Tile__DOT__instcache__DOT__cache
					   [(0x3ffU 
					     & ((IData)(1U) 
						+ (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))] 
					   << 0x10U) 
					  | ((vlTOPp->Tile__DOT__instcache__DOT__cache
					      [(0x3ffU 
						& ((IData)(2U) 
						   + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))] 
					      << 8U) 
					     | vlTOPp->Tile__DOT__instcache__DOT__cache
					     [(0x3ffU 
					       & ((IData)(3U) 
						  + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))])))),32);
	vcdp->fullBus(c+2,(vlTOPp->Tile__DOT__instcache__DOT__cache
			   [(0x3ffU & vlTOPp->Tile__DOT__pc__DOT__pc_reg)]),8);
	vcdp->fullBus(c+3,(vlTOPp->Tile__DOT__instcache__DOT__cache
			   [(0x3ffU & ((IData)(1U) 
				       + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))]),8);
	vcdp->fullBus(c+4,(vlTOPp->Tile__DOT__instcache__DOT__cache
			   [(0x3ffU & ((IData)(2U) 
				       + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))]),8);
	vcdp->fullBus(c+5,(vlTOPp->Tile__DOT__instcache__DOT__cache
			   [(0x3ffU & ((IData)(3U) 
				       + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))]),8);
	vcdp->fullBus(c+6,(vlTOPp->Tile__DOT__pc__DOT__pc_reg),32);
	vcdp->fullBus(c+7,(((IData)(4U) + vlTOPp->Tile__DOT__pc__DOT__pc_reg)),32);
	vcdp->fullBus(c+8,(vlTOPp->Tile__DOT__if_id_register__DOT__pc),32);
	vcdp->fullBus(c+9,(vlTOPp->Tile__DOT__if_id_register__DOT__pc_4),32);
	vcdp->fullBus(c+10,((0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				      >> 0xfU))),5);
	vcdp->fullBus(c+11,((0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				      >> 0x14U))),5);
	vcdp->fullBus(c+12,(vlTOPp->Tile__DOT__if_id_register__DOT__inst),32);
	vcdp->fullBus(c+13,((0x3ffU & vlTOPp->Tile__DOT__pc__DOT__pc_reg)),10);
	vcdp->fullBus(c+14,((0x3ffU & ((IData)(1U) 
				       + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))),10);
	vcdp->fullBus(c+15,((0x3ffU & ((IData)(2U) 
				       + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))),10);
	vcdp->fullBus(c+16,((0x3ffU & ((IData)(3U) 
				       + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))),10);
	vcdp->fullBit(c+17,(vlTOPp->clock));
	vcdp->fullBit(c+18,(vlTOPp->reset));
	vcdp->fullBit(c+19,(vlTOPp->io_PC_Write));
	vcdp->fullBus(c+20,(vlTOPp->io_pc_recover),32);
	vcdp->fullBus(c+21,(vlTOPp->io_new_addr),32);
	vcdp->fullBus(c+22,(vlTOPp->io_PC_Sel),2);
	vcdp->fullBit(c+23,(vlTOPp->io_IF_ID_Write));
	vcdp->fullBit(c+24,(vlTOPp->io_IF_ID_Flush));
	vcdp->fullBus(c+25,(vlTOPp->io_id_pc),32);
	vcdp->fullBus(c+26,(vlTOPp->io_id_pc_4),32);
	vcdp->fullBus(c+27,(vlTOPp->io_id_rs1),5);
	vcdp->fullBus(c+28,(vlTOPp->io_id_rs2),5);
	vcdp->fullBus(c+29,(vlTOPp->io_id_inst),32);
	vcdp->fullBus(c+30,(((0U == (IData)(vlTOPp->io_PC_Sel))
			      ? ((IData)(4U) + vlTOPp->Tile__DOT__pc__DOT__pc_reg)
			      : ((1U == (IData)(vlTOPp->io_PC_Sel))
				  ? vlTOPp->io_pc_recover
				  : ((2U == (IData)(vlTOPp->io_PC_Sel))
				      ? vlTOPp->io_new_addr
				      : 0U)))),32);
    }
}
