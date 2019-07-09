// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTile__Syms.h"


//======================

void VTile::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTile* t=(VTile*)userthis;
    VTile__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VTile::traceChgThis(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTile::traceChgThis__2(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1,(((vlTOPp->Tile__DOT__instcache__DOT__cache
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
	vcdp->chgBus(c+2,(vlTOPp->Tile__DOT__instcache__DOT__cache
			  [(0x3ffU & vlTOPp->Tile__DOT__pc__DOT__pc_reg)]),8);
	vcdp->chgBus(c+3,(vlTOPp->Tile__DOT__instcache__DOT__cache
			  [(0x3ffU & ((IData)(1U) + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))]),8);
	vcdp->chgBus(c+4,(vlTOPp->Tile__DOT__instcache__DOT__cache
			  [(0x3ffU & ((IData)(2U) + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))]),8);
	vcdp->chgBus(c+5,(vlTOPp->Tile__DOT__instcache__DOT__cache
			  [(0x3ffU & ((IData)(3U) + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))]),8);
    }
}

void VTile::traceChgThis__3(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+6,(vlTOPp->Tile__DOT__pc__DOT__pc_reg),32);
	vcdp->chgBus(c+7,(((IData)(4U) + vlTOPp->Tile__DOT__pc__DOT__pc_reg)),32);
	vcdp->chgBus(c+8,(vlTOPp->Tile__DOT__if_id_register__DOT__pc),32);
	vcdp->chgBus(c+9,(vlTOPp->Tile__DOT__if_id_register__DOT__pc_4),32);
	vcdp->chgBus(c+10,((0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				     >> 0xfU))),5);
	vcdp->chgBus(c+11,((0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				     >> 0x14U))),5);
	vcdp->chgBus(c+12,(vlTOPp->Tile__DOT__if_id_register__DOT__inst),32);
	vcdp->chgBus(c+13,((0x3ffU & vlTOPp->Tile__DOT__pc__DOT__pc_reg)),10);
	vcdp->chgBus(c+14,((0x3ffU & ((IData)(1U) + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))),10);
	vcdp->chgBus(c+15,((0x3ffU & ((IData)(2U) + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))),10);
	vcdp->chgBus(c+16,((0x3ffU & ((IData)(3U) + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))),10);
    }
}

void VTile::traceChgThis__4(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+17,(vlTOPp->clock));
	vcdp->chgBit(c+18,(vlTOPp->reset));
	vcdp->chgBit(c+19,(vlTOPp->io_PC_Write));
	vcdp->chgBus(c+20,(vlTOPp->io_pc_recover),32);
	vcdp->chgBus(c+21,(vlTOPp->io_new_addr),32);
	vcdp->chgBus(c+22,(vlTOPp->io_PC_Sel),2);
	vcdp->chgBit(c+23,(vlTOPp->io_IF_ID_Write));
	vcdp->chgBit(c+24,(vlTOPp->io_IF_ID_Flush));
	vcdp->chgBus(c+25,(vlTOPp->io_id_pc),32);
	vcdp->chgBus(c+26,(vlTOPp->io_id_pc_4),32);
	vcdp->chgBus(c+27,(vlTOPp->io_id_rs1),5);
	vcdp->chgBus(c+28,(vlTOPp->io_id_rs2),5);
	vcdp->chgBus(c+29,(vlTOPp->io_id_inst),32);
	vcdp->chgBus(c+30,(((0U == (IData)(vlTOPp->io_PC_Sel))
			     ? ((IData)(4U) + vlTOPp->Tile__DOT__pc__DOT__pc_reg)
			     : ((1U == (IData)(vlTOPp->io_PC_Sel))
				 ? vlTOPp->io_pc_recover
				 : ((2U == (IData)(vlTOPp->io_PC_Sel))
				     ? vlTOPp->io_new_addr
				     : 0U)))),32);
    }
}
