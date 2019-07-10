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
	vcdp->chgBit(c+2,(vlTOPp->Tile__DOT__control_io_Reg_Write));
	vcdp->chgBus(c+3,(((1U == (IData)(vlTOPp->Tile__DOT__control_io_Imm_Sel))
			    ? 0U : vlTOPp->Tile__DOT__immgen__DOT___T_181)),32);
	vcdp->chgBus(c+4,(vlTOPp->Tile__DOT__control_io_Imm_Sel),3);
	vcdp->chgBit(c+5,(((0x33U != (0xfe00707fU & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			   & ((0x40000033U != (0xfe00707fU 
					       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			      & ((0x7033U != (0xfe00707fU 
					      & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				 & ((0x6033U != (0xfe00707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				    & ((0x4033U != 
					(0xfe00707fU 
					 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				       & ((0x13U == 
					   (0x707fU 
					    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					  | ((0x7013U 
					      == (0x707fU 
						  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					     | (IData)(vlTOPp->Tile__DOT__control__DOT___T_384))))))))));
	vcdp->chgBus(c+6,(((0x33U == (0xfe00707fU & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
			    ? 0U : ((0x40000033U == 
				     (0xfe00707fU & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
				     ? 1U : ((0x7033U 
					      == (0xfe00707fU 
						  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					      ? 2U : 
					     ((0x6033U 
					       == (0xfe00707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					       ? 3U
					       : ((0x4033U 
						   == 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						   ? 4U
						   : 
						  ((0x13U 
						    == 
						    (0x707fU 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						    ? 0U
						    : 
						   ((0x7013U 
						     == 
						     (0x707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						     ? 2U
						     : (IData)(vlTOPp->Tile__DOT__control__DOT___T_422))))))))),5);
	vcdp->chgBit(c+7,(((0x33U != (0xfe00707fU & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			   & ((0x40000033U != (0xfe00707fU 
					       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			      & ((0x7033U != (0xfe00707fU 
					      & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				 & ((0x6033U != (0xfe00707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				    & ((0x4033U != 
					(0xfe00707fU 
					 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				       & ((0x13U != 
					   (0x707fU 
					    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					  & ((0x7013U 
					      != (0x707fU 
						  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					     & ((0x6013U 
						 != 
						 (0x707fU 
						  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						& ((0x4013U 
						    != 
						    (0x707fU 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						   & ((0x1033U 
						       != 
						       (0xfe00707fU 
							& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						      & ((0x5033U 
							  != 
							  (0xfe00707fU 
							   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							 & ((0x40005033U 
							     != 
							     (0xfe00707fU 
							      & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							    & ((0x1013U 
								!= 
								(0xfe00707fU 
								 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							       & ((0x5013U 
								   != 
								   (0xfe00707fU 
								    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								  & ((0x40005013U 
								      != 
								      (0xfe00707fU 
								       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								     & ((0x2033U 
									 != 
									 (0xfe00707fU 
									  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									& (IData)(vlTOPp->Tile__DOT__control__DOT___T_451)))))))))))))))))));
	vcdp->chgBit(c+8,(((0x33U != (0xfe00707fU & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			   & ((0x40000033U != (0xfe00707fU 
					       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			      & ((0x7033U != (0xfe00707fU 
					      & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				 & ((0x6033U != (0xfe00707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				    & ((0x4033U != 
					(0xfe00707fU 
					 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				       & ((0x13U != 
					   (0x707fU 
					    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					  & ((0x7013U 
					      != (0x707fU 
						  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					     & ((0x6013U 
						 != 
						 (0x707fU 
						  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						& ((0x4013U 
						    != 
						    (0x707fU 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						   & ((0x1033U 
						       != 
						       (0xfe00707fU 
							& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						      & ((0x5033U 
							  != 
							  (0xfe00707fU 
							   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							 & ((0x40005033U 
							     != 
							     (0xfe00707fU 
							      & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							    & ((0x1013U 
								!= 
								(0xfe00707fU 
								 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							       & ((0x5013U 
								   != 
								   (0xfe00707fU 
								    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								  & ((0x40005013U 
								      != 
								      (0xfe00707fU 
								       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								     & ((0x2033U 
									 != 
									 (0xfe00707fU 
									  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									& ((0x3033U 
									    != 
									    (0xfe00707fU 
									     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									   & (IData)(vlTOPp->Tile__DOT__control__DOT___T_488))))))))))))))))))));
	vcdp->chgBit(c+9,(((0x33U != (0xfe00707fU & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			   & ((0x40000033U != (0xfe00707fU 
					       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			      & ((0x7033U != (0xfe00707fU 
					      & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				 & ((0x6033U != (0xfe00707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				    & ((0x4033U != 
					(0xfe00707fU 
					 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				       & (IData)(vlTOPp->Tile__DOT__control__DOT___T_538))))))));
	vcdp->chgBit(c+10,(((0x33U != (0xfe00707fU 
				       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			    & ((0x40000033U != (0xfe00707fU 
						& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			       & ((0x7033U != (0xfe00707fU 
					       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				  & ((0x6033U != (0xfe00707fU 
						  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				     & ((0x4033U != 
					 (0xfe00707fU 
					  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					& ((0x13U != 
					    (0x707fU 
					     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					   & ((0x7013U 
					       != (0x707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					      & (IData)(vlTOPp->Tile__DOT__control__DOT___T_574))))))))));
	vcdp->chgBus(c+11,(((0x33U == (0xfe00707fU 
				       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
			     ? 0U : ((0x40000033U == 
				      (0xfe00707fU 
				       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
				      ? 0U : ((0x7033U 
					       == (0xfe00707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					       ? 0U
					       : ((0x6033U 
						   == 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						   ? 0U
						   : 
						  ((0x4033U 
						    == 
						    (0xfe00707fU 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						    ? 0U
						    : 
						   ((0x13U 
						     == 
						     (0x707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						     ? 0U
						     : 
						    ((0x7013U 
						      == 
						      (0x707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						      ? 0U
						      : 
						     ((0x6013U 
						       == 
						       (0x707fU 
							& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						       ? 0U
						       : 
						      ((0x4013U 
							== 
							(0x707fU 
							 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						        ? 0U
						        : 
						       ((0x1033U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							 ? 0U
							 : 
							((0x5033U 
							  == 
							  (0xfe00707fU 
							   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							  ? 0U
							  : 
							 ((0x40005033U 
							   == 
							   (0xfe00707fU 
							    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							   ? 0U
							   : (IData)(vlTOPp->Tile__DOT__control__DOT___T_607)))))))))))))),2);
	vcdp->chgBit(c+12,(((0x33U != (0xfe00707fU 
				       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			    & ((0x40000033U != (0xfe00707fU 
						& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			       & ((0x7033U != (0xfe00707fU 
					       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				  & ((0x6033U != (0xfe00707fU 
						  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				     & ((0x4033U != 
					 (0xfe00707fU 
					  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					& (IData)(vlTOPp->Tile__DOT__control__DOT___T_652))))))));
	vcdp->chgBus(c+13,(((0x33U == (0xfe00707fU 
				       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
			     ? 0U : ((0x40000033U == 
				      (0xfe00707fU 
				       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
				      ? 0U : ((0x7033U 
					       == (0xfe00707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					       ? 0U
					       : ((0x6033U 
						   == 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						   ? 0U
						   : 
						  ((0x4033U 
						    == 
						    (0xfe00707fU 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						    ? 0U
						    : 
						   ((0x13U 
						     == 
						     (0x707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						     ? 0U
						     : 
						    ((0x7013U 
						      == 
						      (0x707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						      ? 0U
						      : (IData)(vlTOPp->Tile__DOT__control__DOT___T_688))))))))),3);
	vcdp->chgBit(c+14,(((0x33U != (0xfe00707fU 
				       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			    & ((0x40000033U != (0xfe00707fU 
						& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			       & ((0x7033U != (0xfe00707fU 
					       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				  & ((0x6033U != (0xfe00707fU 
						  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				     & ((0x4033U != 
					 (0xfe00707fU 
					  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					& ((0x13U != 
					    (0x707fU 
					     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					   & ((0x7013U 
					       != (0x707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					      & ((0x6013U 
						  != 
						  (0x707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						 & ((0x4013U 
						     != 
						     (0x707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						    & ((0x1033U 
							!= 
							(0xfe00707fU 
							 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						       & ((0x5033U 
							   != 
							   (0xfe00707fU 
							    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							  & ((0x40005033U 
							      != 
							      (0xfe00707fU 
							       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							     & ((0x1013U 
								 != 
								 (0xfe00707fU 
								  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								& ((0x5013U 
								    != 
								    (0xfe00707fU 
								     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								   & ((0x40005013U 
								       != 
								       (0xfe00707fU 
									& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								      & ((0x2033U 
									  != 
									  (0xfe00707fU 
									   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									 & (IData)(vlTOPp->Tile__DOT__control__DOT___T_717)))))))))))))))))));
	vcdp->chgBus(c+15,(vlTOPp->Tile__DOT__instcache__DOT__cache
			   [(0x3ffU & vlTOPp->Tile__DOT__pc__DOT__pc_reg)]),8);
	vcdp->chgBus(c+16,(vlTOPp->Tile__DOT__instcache__DOT__cache
			   [(0x3ffU & ((IData)(1U) 
				       + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))]),8);
	vcdp->chgBus(c+17,(vlTOPp->Tile__DOT__instcache__DOT__cache
			   [(0x3ffU & ((IData)(2U) 
				       + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))]),8);
	vcdp->chgBus(c+18,(vlTOPp->Tile__DOT__instcache__DOT__cache
			   [(0x3ffU & ((IData)(3U) 
				       + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))]),8);
    }
}

void VTile::traceChgThis__3(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+19,(vlTOPp->Tile__DOT__pc__DOT__pc_reg),32);
	vcdp->chgBus(c+20,(((IData)(4U) + vlTOPp->Tile__DOT__pc__DOT__pc_reg)),32);
	vcdp->chgBus(c+21,(vlTOPp->Tile__DOT__if_id_register__DOT__pc),32);
	vcdp->chgBus(c+22,(vlTOPp->Tile__DOT__if_id_register__DOT__pc_4),32);
	vcdp->chgBus(c+23,((0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				     >> 0xfU))),5);
	vcdp->chgBus(c+24,((0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				     >> 0x14U))),5);
	vcdp->chgBus(c+25,(vlTOPp->Tile__DOT__if_id_register__DOT__inst),32);
	vcdp->chgBus(c+26,((0x3ffU & vlTOPp->Tile__DOT__pc__DOT__pc_reg)),10);
	vcdp->chgBus(c+27,((0x3ffU & ((IData)(1U) + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))),10);
	vcdp->chgBus(c+28,((0x3ffU & ((IData)(2U) + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))),10);
	vcdp->chgBus(c+29,((0x3ffU & ((IData)(3U) + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))),10);
	vcdp->chgBus(c+30,(vlTOPp->Tile__DOT__regfile__DOT__regfile[0]),32);
	vcdp->chgBus(c+31,(vlTOPp->Tile__DOT__regfile__DOT__regfile[1]),32);
	vcdp->chgBus(c+32,(vlTOPp->Tile__DOT__regfile__DOT__regfile[2]),32);
	vcdp->chgBus(c+33,(vlTOPp->Tile__DOT__regfile__DOT__regfile[3]),32);
	vcdp->chgBus(c+34,(vlTOPp->Tile__DOT__regfile__DOT__regfile[4]),32);
	vcdp->chgBus(c+35,(vlTOPp->Tile__DOT__regfile__DOT__regfile[5]),32);
	vcdp->chgBus(c+36,(vlTOPp->Tile__DOT__regfile__DOT__regfile[6]),32);
	vcdp->chgBus(c+37,(vlTOPp->Tile__DOT__regfile__DOT__regfile[7]),32);
	vcdp->chgBus(c+38,(vlTOPp->Tile__DOT__regfile__DOT__regfile[8]),32);
	vcdp->chgBus(c+39,(vlTOPp->Tile__DOT__regfile__DOT__regfile[9]),32);
	vcdp->chgBus(c+40,(vlTOPp->Tile__DOT__regfile__DOT__regfile[10]),32);
	vcdp->chgBus(c+41,(vlTOPp->Tile__DOT__regfile__DOT__regfile[11]),32);
	vcdp->chgBus(c+42,(vlTOPp->Tile__DOT__regfile__DOT__regfile[12]),32);
	vcdp->chgBus(c+43,(vlTOPp->Tile__DOT__regfile__DOT__regfile[13]),32);
	vcdp->chgBus(c+44,(vlTOPp->Tile__DOT__regfile__DOT__regfile[14]),32);
	vcdp->chgBus(c+45,(vlTOPp->Tile__DOT__regfile__DOT__regfile[15]),32);
	vcdp->chgBus(c+46,(vlTOPp->Tile__DOT__regfile__DOT__regfile[16]),32);
	vcdp->chgBus(c+47,(vlTOPp->Tile__DOT__regfile__DOT__regfile[17]),32);
	vcdp->chgBus(c+48,(vlTOPp->Tile__DOT__regfile__DOT__regfile[18]),32);
	vcdp->chgBus(c+49,(vlTOPp->Tile__DOT__regfile__DOT__regfile[19]),32);
	vcdp->chgBus(c+50,(vlTOPp->Tile__DOT__regfile__DOT__regfile[20]),32);
	vcdp->chgBus(c+51,(vlTOPp->Tile__DOT__regfile__DOT__regfile[21]),32);
	vcdp->chgBus(c+52,(vlTOPp->Tile__DOT__regfile__DOT__regfile[22]),32);
	vcdp->chgBus(c+53,(vlTOPp->Tile__DOT__regfile__DOT__regfile[23]),32);
	vcdp->chgBus(c+54,(vlTOPp->Tile__DOT__regfile__DOT__regfile[24]),32);
	vcdp->chgBus(c+55,(vlTOPp->Tile__DOT__regfile__DOT__regfile[25]),32);
	vcdp->chgBus(c+56,(vlTOPp->Tile__DOT__regfile__DOT__regfile[26]),32);
	vcdp->chgBus(c+57,(vlTOPp->Tile__DOT__regfile__DOT__regfile[27]),32);
	vcdp->chgBus(c+58,(vlTOPp->Tile__DOT__regfile__DOT__regfile[28]),32);
	vcdp->chgBus(c+59,(vlTOPp->Tile__DOT__regfile__DOT__regfile[29]),32);
	vcdp->chgBus(c+60,(vlTOPp->Tile__DOT__regfile__DOT__regfile[30]),32);
	vcdp->chgBus(c+61,(vlTOPp->Tile__DOT__regfile__DOT__regfile[31]),32);
	vcdp->chgBus(c+62,(vlTOPp->Tile__DOT__regfile__DOT__regfile
			   [(0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				      >> 0xfU))]),32);
	vcdp->chgBus(c+63,(vlTOPp->Tile__DOT__regfile__DOT__regfile
			   [(0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				      >> 0x14U))]),32);
    }
}

void VTile::traceChgThis__4(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+64,(vlTOPp->clock));
	vcdp->chgBit(c+65,(vlTOPp->reset));
	vcdp->chgBit(c+66,(vlTOPp->io_PC_Write));
	vcdp->chgBus(c+67,(vlTOPp->io_pc_recover),32);
	vcdp->chgBus(c+68,(vlTOPp->io_new_addr),32);
	vcdp->chgBus(c+69,(vlTOPp->io_PC_Sel),2);
	vcdp->chgBus(c+70,(vlTOPp->io_rd),32);
	vcdp->chgBus(c+71,(vlTOPp->io_wdata),32);
	vcdp->chgBit(c+72,(vlTOPp->io_Reg_Write));
	vcdp->chgBit(c+73,(vlTOPp->io_IF_ID_Write));
	vcdp->chgBit(c+74,(vlTOPp->io_IF_ID_Flush));
	vcdp->chgBus(c+75,(vlTOPp->io_Imm_Sel),3);
	vcdp->chgBus(c+76,(vlTOPp->io_id_pc),32);
	vcdp->chgBus(c+77,(vlTOPp->io_id_pc_4),32);
	vcdp->chgBus(c+78,(vlTOPp->io_id_inst),32);
	vcdp->chgBus(c+79,(vlTOPp->io_rs1_out),32);
	vcdp->chgBus(c+80,(vlTOPp->io_rs2_out),32);
	vcdp->chgBus(c+81,(vlTOPp->io_imm),32);
	vcdp->chgBit(c+82,(vlTOPp->io_ALU_Src));
	vcdp->chgBus(c+83,(vlTOPp->io_ALUOp),5);
	vcdp->chgBit(c+84,(vlTOPp->io_Branch));
	vcdp->chgBit(c+85,(vlTOPp->io_Branch_Src));
	vcdp->chgBit(c+86,(vlTOPp->io_Mem_Read));
	vcdp->chgBit(c+87,(vlTOPp->io_Mem_Write));
	vcdp->chgBus(c+88,(vlTOPp->io_Data_Size),2);
	vcdp->chgBit(c+89,(vlTOPp->io_Load_Type));
	vcdp->chgBus(c+90,(vlTOPp->io_Mem_to_Reg),3);
	vcdp->chgBit(c+91,(vlTOPp->io_Jump_Type));
	vcdp->chgBus(c+92,(((0U == (IData)(vlTOPp->io_PC_Sel))
			     ? ((IData)(4U) + vlTOPp->Tile__DOT__pc__DOT__pc_reg)
			     : ((1U == (IData)(vlTOPp->io_PC_Sel))
				 ? vlTOPp->io_pc_recover
				 : ((2U == (IData)(vlTOPp->io_PC_Sel))
				     ? vlTOPp->io_new_addr
				     : 0U)))),32);
	vcdp->chgBus(c+93,((0x1fU & vlTOPp->io_rd)),5);
	vcdp->chgBus(c+94,((((IData)(vlTOPp->Tile__DOT__control_io_Reg_Write) 
			     & ((0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
					  >> 0xfU)) 
				== (0x1fU & vlTOPp->io_rd)))
			     ? vlTOPp->io_wdata : vlTOPp->Tile__DOT__regfile__DOT__regfile
			    [(0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				       >> 0xfU))])),32);
	vcdp->chgBus(c+95,((((IData)(vlTOPp->Tile__DOT__control_io_Reg_Write) 
			     & ((0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
					  >> 0x14U)) 
				== (0x1fU & vlTOPp->io_rd)))
			     ? vlTOPp->io_wdata : vlTOPp->Tile__DOT__regfile__DOT__regfile
			    [(0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				       >> 0x14U))])),32);
	vcdp->chgBus(c+96,(vlTOPp->Tile__DOT__regfile__DOT__regfile
			   [(0x1fU & vlTOPp->io_rd)]),32);
	vcdp->chgBus(c+97,(((IData)(vlTOPp->Tile__DOT__control_io_Reg_Write)
			     ? ((0U == (0x1fU & vlTOPp->io_rd))
				 ? 0U : vlTOPp->io_wdata)
			     : vlTOPp->Tile__DOT__regfile__DOT__regfile
			    [(0x1fU & vlTOPp->io_rd)])),32);
    }
}
