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
	vcdp->chgBus(c+1,((IData)(vlTOPp->Tile__DOT__datapath__DOT___T_156)),32);
	vcdp->chgBit(c+2,((1U & (~ (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)))));
	vcdp->chgBus(c+3,(vlTOPp->Tile__DOT__instcache_io_inst),32);
	vcdp->chgBus(c+4,(vlTOPp->Tile__DOT__branch_predictor_io_PC_Sel),2);
	vcdp->chgBus(c+5,((IData)((VL_ULL(0x1ffffffff) 
				   & ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1779)
				       ? (QData)((IData)(vlTOPp->Tile__DOT__datapath__DOT___T_142))
				       : ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1782)
					   ? (QData)((IData)(vlTOPp->Tile__DOT__datapath__DOT___T_142))
					   : ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1776)
					       ? (VL_EXTENDS_QI(33,32, vlTOPp->Tile__DOT__pc__DOT__pc_reg) 
						  + 
						  VL_EXTENDS_QI(33,32, 
								((0xffffc000U 
								  & (VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Tile__DOT__instcache_io_inst 
										>> 0x1fU)))) 
								     << 0xeU)) 
								 | ((0x2000U 
								     & (vlTOPp->Tile__DOT__instcache_io_inst 
									>> 0x12U)) 
								    | ((0x1000U 
									& (vlTOPp->Tile__DOT__instcache_io_inst 
									   << 5U)) 
								       | ((0xfc0U 
									   & (vlTOPp->Tile__DOT__instcache_io_inst 
									      >> 0x13U)) 
									  | (0x3cU 
									     & (vlTOPp->Tile__DOT__instcache_io_inst 
										>> 6U))))))))
					       : VL_ULL(0))))))),32);
	vcdp->chgBit(c+6,(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010));
	vcdp->chgBit(c+7,(((0x33U == (0xfe00707fU & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			   | ((0x40000033U == (0xfe00707fU 
					       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			      | (IData)(vlTOPp->Tile__DOT__control__DOT___T_452)))));
	vcdp->chgBus(c+8,(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel),3);
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
				       & ((0x13U == 
					   (0x707fU 
					    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					  | ((0x7013U 
					      == (0x707fU 
						  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					     | (IData)(vlTOPp->Tile__DOT__control__DOT___T_523))))))))));
	vcdp->chgBus(c+10,(((0x33U == (0xfe00707fU 
				       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
			     ? 0U : ((0x40000033U == 
				      (0xfe00707fU 
				       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
				      ? 1U : ((0x7033U 
					       == (0xfe00707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					       ? 2U
					       : ((0x6033U 
						   == 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						   ? 3U
						   : 
						  ((0x4033U 
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
						      : (IData)(vlTOPp->Tile__DOT__control__DOT___T_561))))))))),5);
	vcdp->chgBit(c+11,(((0x33U != (0xfe00707fU 
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
									 & (IData)(vlTOPp->Tile__DOT__control__DOT___T_590)))))))))))))))))));
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
									    & (IData)(vlTOPp->Tile__DOT__control__DOT___T_627))))))))))))))))))));
	vcdp->chgBit(c+13,(((0x33U != (0xfe00707fU 
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
					& (IData)(vlTOPp->Tile__DOT__control__DOT___T_677))))))));
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
					      & (IData)(vlTOPp->Tile__DOT__control__DOT___T_713))))))))));
	vcdp->chgBus(c+15,(((0x33U == (0xfe00707fU 
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
							   : (IData)(vlTOPp->Tile__DOT__control__DOT___T_746)))))))))))))),2);
	vcdp->chgBit(c+16,(((0x33U != (0xfe00707fU 
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
					& (IData)(vlTOPp->Tile__DOT__control__DOT___T_791))))))));
	vcdp->chgBus(c+17,(((0x33U == (0xfe00707fU 
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
						      : (IData)(vlTOPp->Tile__DOT__control__DOT___T_827))))))))),3);
	vcdp->chgBit(c+18,(((0x33U != (0xfe00707fU 
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
									 & (IData)(vlTOPp->Tile__DOT__control__DOT___T_856)))))))))))))))))));
	vcdp->chgBit(c+19,(((~ (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)) 
			    & ((0x33U == (0xfe00707fU 
					  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			       | ((0x40000033U == (0xfe00707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				  | (IData)(vlTOPp->Tile__DOT__control__DOT___T_452))))));
	vcdp->chgBus(c+20,(((IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)
			     ? 0U : (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel))),3);
	vcdp->chgBit(c+21,(((~ (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)) 
			    & ((0x33U != (0xfe00707fU 
					  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			       & ((0x40000033U != (0xfe00707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				  & ((0x7033U != (0xfe00707fU 
						  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				     & ((0x6033U != 
					 (0xfe00707fU 
					  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					& ((0x4033U 
					    != (0xfe00707fU 
						& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					   & ((0x13U 
					       == (0x707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					      | ((0x7013U 
						  == 
						  (0x707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						 | (IData)(vlTOPp->Tile__DOT__control__DOT___T_523)))))))))));
	vcdp->chgBus(c+22,(((IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)
			     ? 0U : ((0x33U == (0xfe00707fU 
						& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
				      ? 0U : ((0x40000033U 
					       == (0xfe00707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					       ? 1U
					       : ((0x7033U 
						   == 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						   ? 2U
						   : 
						  ((0x6033U 
						    == 
						    (0xfe00707fU 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						    ? 3U
						    : 
						   ((0x4033U 
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
						       : (IData)(vlTOPp->Tile__DOT__control__DOT___T_561)))))))))),5);
	vcdp->chgBit(c+23,(((~ (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)) 
			    & ((0x33U != (0xfe00707fU 
					  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			       & ((0x40000033U != (0xfe00707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				  & ((0x7033U != (0xfe00707fU 
						  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				     & ((0x6033U != 
					 (0xfe00707fU 
					  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					& ((0x4033U 
					    != (0xfe00707fU 
						& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					   & ((0x13U 
					       != (0x707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					      & ((0x7013U 
						  != 
						  (0x707fU 
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
									    & (IData)(vlTOPp->Tile__DOT__control__DOT___T_590))))))))))))))))))));
	vcdp->chgBit(c+24,(((~ (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)) 
			    & ((0x33U != (0xfe00707fU 
					  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			       & ((0x40000033U != (0xfe00707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				  & ((0x7033U != (0xfe00707fU 
						  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				     & ((0x6033U != 
					 (0xfe00707fU 
					  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					& ((0x4033U 
					    != (0xfe00707fU 
						& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					   & ((0x13U 
					       != (0x707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					      & ((0x7013U 
						  != 
						  (0x707fU 
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
									       & (IData)(vlTOPp->Tile__DOT__control__DOT___T_627)))))))))))))))))))));
	vcdp->chgBit(c+25,(((~ (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)) 
			    & ((0x33U != (0xfe00707fU 
					  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			       & ((0x40000033U != (0xfe00707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				  & ((0x7033U != (0xfe00707fU 
						  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				     & ((0x6033U != 
					 (0xfe00707fU 
					  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					& ((0x4033U 
					    != (0xfe00707fU 
						& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					   & (IData)(vlTOPp->Tile__DOT__control__DOT___T_677)))))))));
	vcdp->chgBit(c+26,(((~ (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)) 
			    & ((0x33U != (0xfe00707fU 
					  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			       & ((0x40000033U != (0xfe00707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				  & ((0x7033U != (0xfe00707fU 
						  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				     & ((0x6033U != 
					 (0xfe00707fU 
					  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					& ((0x4033U 
					    != (0xfe00707fU 
						& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					   & ((0x13U 
					       != (0x707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					      & ((0x7013U 
						  != 
						  (0x707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						 & (IData)(vlTOPp->Tile__DOT__control__DOT___T_713)))))))))));
	vcdp->chgBus(c+27,(((IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)
			     ? 0U : ((0x33U == (0xfe00707fU 
						& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
				      ? 0U : ((0x40000033U 
					       == (0xfe00707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					       ? 0U
					       : ((0x7033U 
						   == 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						   ? 0U
						   : 
						  ((0x6033U 
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
							    : (IData)(vlTOPp->Tile__DOT__control__DOT___T_746))))))))))))))),2);
	vcdp->chgBit(c+28,(((~ (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)) 
			    & ((0x33U != (0xfe00707fU 
					  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			       & ((0x40000033U != (0xfe00707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				  & ((0x7033U != (0xfe00707fU 
						  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				     & ((0x6033U != 
					 (0xfe00707fU 
					  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					& ((0x4033U 
					    != (0xfe00707fU 
						& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					   & (IData)(vlTOPp->Tile__DOT__control__DOT___T_791)))))))));
	vcdp->chgBus(c+29,(((IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)
			     ? 0U : ((0x33U == (0xfe00707fU 
						& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
				      ? 0U : ((0x40000033U 
					       == (0xfe00707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					       ? 0U
					       : ((0x7033U 
						   == 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						   ? 0U
						   : 
						  ((0x6033U 
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
						       : (IData)(vlTOPp->Tile__DOT__control__DOT___T_827)))))))))),3);
	vcdp->chgBit(c+30,(((~ (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)) 
			    & ((0x33U != (0xfe00707fU 
					  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
			       & ((0x40000033U != (0xfe00707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				  & ((0x7033U != (0xfe00707fU 
						  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
				     & ((0x6033U != 
					 (0xfe00707fU 
					  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					& ((0x4033U 
					    != (0xfe00707fU 
						& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					   & ((0x13U 
					       != (0x707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					      & ((0x7013U 
						  != 
						  (0x707fU 
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
									    & (IData)(vlTOPp->Tile__DOT__control__DOT___T_856))))))))))))))))))));
	vcdp->chgBit(c+31,(vlTOPp->Tile__DOT__alu_io_conflag));
	vcdp->chgBus(c+32,(vlTOPp->Tile__DOT__forward_io_Forward_A),2);
	vcdp->chgBus(c+33,(vlTOPp->Tile__DOT__forward_io_Forward_B),2);
	vcdp->chgBus(c+34,(vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src),32);
	vcdp->chgBus(c+35,(vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src),32);
	vcdp->chgBus(c+36,((vlTOPp->Tile__DOT__datapath__DOT___T_140 
			    + vlTOPp->Tile__DOT__id_ex_register__DOT__imm)),32);
	vcdp->chgBus(c+37,(((0U == (IData)(vlTOPp->Tile__DOT__forward_io_Forward_B))
			     ? vlTOPp->Tile__DOT__id_ex_register__DOT__rs2_out
			     : vlTOPp->Tile__DOT__datapath__DOT___T_198)),32);
	vcdp->chgBit(c+38,(vlTOPp->Tile__DOT__datapath_io_ex_io_PC_Src));
	vcdp->chgBus(c+39,((IData)(vlTOPp->Tile__DOT__datapath__DOT___T_142)),32);
	vcdp->chgBit(c+40,(vlTOPp->Tile__DOT__forward_io_MemWrite_Src));
	vcdp->chgBus(c+41,(vlTOPp->Tile__DOT__datapath_io_mem_io_mem_writedata),32);
	vcdp->chgBus(c+42,(vlTOPp->Tile__DOT__datapath_io_wb_io_wb_reg_writedata),32);
	vcdp->chgBit(c+43,(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush));
	vcdp->chgBus(c+44,(vlTOPp->Tile__DOT__regfile_io_rs1_out),32);
	vcdp->chgBus(c+45,(vlTOPp->Tile__DOT__regfile_io_rs2_out),32);
	vcdp->chgBus(c+46,(((1U == (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel))
			     ? 0U : vlTOPp->Tile__DOT__immgen__DOT___T_318)),32);
	vcdp->chgBus(c+47,(vlTOPp->Tile__DOT__alu__DOT___T_1057[0U]),32);
	vcdp->chgBus(c+48,((IData)(vlTOPp->Tile__DOT__datacache__DOT___T_1910)),32);
	vcdp->chgBus(c+49,(vlTOPp->Tile__DOT__instcache__DOT__cache
			   [(0x3ffU & vlTOPp->Tile__DOT__pc__DOT__pc_reg)]),8);
	vcdp->chgBus(c+50,(vlTOPp->Tile__DOT__instcache__DOT__cache
			   [(0x3ffU & ((IData)(1U) 
				       + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))]),8);
	vcdp->chgBus(c+51,(vlTOPp->Tile__DOT__instcache__DOT__cache
			   [(0x3ffU & ((IData)(2U) 
				       + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))]),8);
	vcdp->chgBus(c+52,(vlTOPp->Tile__DOT__instcache__DOT__cache
			   [(0x3ffU & ((IData)(3U) 
				       + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))]),8);
	vcdp->chgBus(c+53,(((IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__reg_write)
			     ? ((0U == (IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__rd))
				 ? 0U : vlTOPp->Tile__DOT__datapath_io_wb_io_wb_reg_writedata)
			     : vlTOPp->Tile__DOT__regfile__DOT__regfile
			    [vlTOPp->Tile__DOT__mem_wb_register__DOT__rd])),32);
	vcdp->chgBit(c+54,(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer_io_record));
	vcdp->chgBus(c+55,(((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
			     ? 0U : ((2U == vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
				      [0U]) ? 0U : 
				     ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer_io_record)
				       ? ((0U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131))
					   ? ((IData)(4U) 
					      + vlTOPp->Tile__DOT__pc__DOT__pc_reg)
					   : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
					  [0U]) : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
				      [0U])))),32);
	vcdp->chgBus(c+56,(((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
			     ? 0U : ((2U == vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
				      [1U]) ? 0U : 
				     ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer_io_record)
				       ? ((1U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131))
					   ? ((IData)(4U) 
					      + vlTOPp->Tile__DOT__pc__DOT__pc_reg)
					   : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
					  [1U]) : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
				      [1U])))),32);
	vcdp->chgBus(c+57,(((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
			     ? 0U : ((2U == vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
				      [2U]) ? 0U : 
				     ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer_io_record)
				       ? ((2U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131))
					   ? ((IData)(4U) 
					      + vlTOPp->Tile__DOT__pc__DOT__pc_reg)
					   : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
					  [2U]) : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
				      [2U])))),32);
	vcdp->chgBus(c+58,((3U & ((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
				   ? 0U : ((2U == vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
					    [0U]) ? 0U
					    : (vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
					       [0U]
					        ? ((IData)(1U) 
						   + 
						   vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
						   [0U])
					        : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
					       [0U]))))),2);
	vcdp->chgBus(c+59,((3U & ((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
				   ? 0U : ((2U == vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
					    [1U]) ? 0U
					    : (vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
					       [1U]
					        ? ((IData)(1U) 
						   + 
						   vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
						   [1U])
					        : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
					       [1U]))))),2);
	vcdp->chgBus(c+60,((3U & ((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
				   ? 0U : ((2U == vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
					    [2U]) ? 0U
					    : (vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
					       [2U]
					        ? ((IData)(1U) 
						   + 
						   vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
						   [2U])
					        : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
					       [2U]))))),2);
	vcdp->chgBit(c+61,(((~ (IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)) 
			    & ((2U != vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
				[0U]) & ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer_io_record)
					  ? ((0U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131)) 
					     | vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
					     [0U]) : 
					 vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
					 [0U])))));
	vcdp->chgBit(c+62,(((~ (IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)) 
			    & ((2U != vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
				[1U]) & ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer_io_record)
					  ? ((1U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131)) 
					     | vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
					     [1U]) : 
					 vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
					 [1U])))));
	vcdp->chgBit(c+63,(((~ (IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)) 
			    & ((2U != vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
				[2U]) & ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer_io_record)
					  ? ((2U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131)) 
					     | vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
					     [2U]) : 
					 vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
					 [2U])))));
	vcdp->chgBus(c+64,(((IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_write)
			     ? ((0U == (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__data_size))
				 ? vlTOPp->Tile__DOT__datapath_io_mem_io_mem_writedata
				 : ((1U == (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__data_size))
				     ? (0xffffU & vlTOPp->Tile__DOT__datapath_io_mem_io_mem_writedata)
				     : ((2U == (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__data_size))
					 ? (0xffU & vlTOPp->Tile__DOT__datapath_io_mem_io_mem_writedata)
					 : vlTOPp->Tile__DOT__datapath_io_mem_io_mem_writedata)))
			     : vlTOPp->Tile__DOT__datacache__DOT__cache
			    [(0x1fU & (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
				       >> 2U))])),32);
    }
}

void VTile::traceChgThis__3(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+65,(vlTOPp->Tile__DOT__pc__DOT__pc_reg),32);
	vcdp->chgBus(c+66,(((vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
			     [0U] > vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
			     [1U]) ? ((vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
				       [0U] > vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
				       [2U]) ? vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
				      [0U] : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
				      [2U]) : ((vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
						[1U] 
						> vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
						[2U])
					        ? vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
					       [1U]
					        : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
					       [2U]))),32);
	vcdp->chgBus(c+67,(((IData)(4U) + vlTOPp->Tile__DOT__pc__DOT__pc_reg)),32);
	vcdp->chgBus(c+68,(vlTOPp->Tile__DOT__id_ex_register__DOT__rs1_out),32);
	vcdp->chgBus(c+69,(vlTOPp->Tile__DOT__id_ex_register__DOT__rs2_out),32);
	vcdp->chgBus(c+70,(vlTOPp->Tile__DOT__id_ex_register__DOT__imm),32);
	vcdp->chgBus(c+71,(vlTOPp->Tile__DOT__id_ex_register__DOT__pc),32);
	vcdp->chgBit(c+72,(vlTOPp->Tile__DOT__id_ex_register__DOT__alu_src));
	vcdp->chgBit(c+73,(vlTOPp->Tile__DOT__id_ex_register__DOT__branch));
	vcdp->chgBit(c+74,(vlTOPp->Tile__DOT__id_ex_register__DOT__branch_src));
	vcdp->chgBit(c+75,(vlTOPp->Tile__DOT__id_ex_register__DOT__jump_type));
	vcdp->chgBus(c+76,(vlTOPp->Tile__DOT__id_ex_register__DOT__imm_sel),3);
	vcdp->chgBus(c+77,(vlTOPp->Tile__DOT__ex_mem_register__DOT__rs2_out),32);
	vcdp->chgBus(c+78,(vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_to_reg),3);
	vcdp->chgBus(c+79,(vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum),32);
	vcdp->chgBus(c+80,(vlTOPp->Tile__DOT__ex_mem_register__DOT__pc_4),32);
	vcdp->chgBus(c+81,(vlTOPp->Tile__DOT__ex_mem_register__DOT__imm),32);
	vcdp->chgBus(c+82,(vlTOPp->Tile__DOT__ex_mem_register__DOT__aui_pc),32);
	vcdp->chgBus(c+83,(vlTOPp->Tile__DOT__mem_wb_register__DOT__alu_sum),32);
	vcdp->chgBus(c+84,(vlTOPp->Tile__DOT__mem_wb_register__DOT__dataout),32);
	vcdp->chgBus(c+85,(vlTOPp->Tile__DOT__mem_wb_register__DOT__pc_4),32);
	vcdp->chgBus(c+86,(vlTOPp->Tile__DOT__mem_wb_register__DOT__imm),32);
	vcdp->chgBus(c+87,(vlTOPp->Tile__DOT__mem_wb_register__DOT__aui_pc),32);
	vcdp->chgBus(c+88,(vlTOPp->Tile__DOT__mem_wb_register__DOT__mem_to_reg),3);
	vcdp->chgBus(c+89,(vlTOPp->Tile__DOT__if_id_register__DOT__pc),32);
	vcdp->chgBus(c+90,(vlTOPp->Tile__DOT__if_id_register__DOT__pc_4),32);
	vcdp->chgBus(c+91,((0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				     >> 0xfU))),5);
	vcdp->chgBus(c+92,((0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				     >> 0x14U))),5);
	vcdp->chgBus(c+93,(vlTOPp->Tile__DOT__if_id_register__DOT__inst),32);
	vcdp->chgBus(c+94,(vlTOPp->Tile__DOT__mem_wb_register__DOT__rd),5);
	vcdp->chgBit(c+95,(vlTOPp->Tile__DOT__mem_wb_register__DOT__reg_write));
	vcdp->chgBus(c+96,(vlTOPp->Tile__DOT__id_ex_register__DOT__pc_4),32);
	vcdp->chgBus(c+97,((0x1fU & (vlTOPp->Tile__DOT__id_ex_register__DOT__inst 
				     >> 7U))),5);
	vcdp->chgBus(c+98,(vlTOPp->Tile__DOT__id_ex_register__DOT__rs1),5);
	vcdp->chgBus(c+99,(vlTOPp->Tile__DOT__id_ex_register__DOT__rs2),5);
	vcdp->chgBit(c+100,(vlTOPp->Tile__DOT__id_ex_register__DOT__reg_write));
	vcdp->chgBus(c+101,(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop),5);
	vcdp->chgBit(c+102,(vlTOPp->Tile__DOT__id_ex_register__DOT__mem_read));
	vcdp->chgBit(c+103,(vlTOPp->Tile__DOT__id_ex_register__DOT__mem_write));
	vcdp->chgBus(c+104,(vlTOPp->Tile__DOT__id_ex_register__DOT__data_size),2);
	vcdp->chgBit(c+105,(vlTOPp->Tile__DOT__id_ex_register__DOT__load_type));
	vcdp->chgBus(c+106,(vlTOPp->Tile__DOT__id_ex_register__DOT__mem_to_reg),3);
	vcdp->chgBit(c+107,(vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_read));
	vcdp->chgBit(c+108,(vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_write));
	vcdp->chgBus(c+109,(vlTOPp->Tile__DOT__ex_mem_register__DOT__data_size),2);
	vcdp->chgBit(c+110,(vlTOPp->Tile__DOT__ex_mem_register__DOT__load_type));
	vcdp->chgBus(c+111,(vlTOPp->Tile__DOT__id_ex_register__DOT__rs2),32);
	vcdp->chgBit(c+112,(vlTOPp->Tile__DOT__ex_mem_register__DOT__reg_write));
	vcdp->chgBus(c+113,(vlTOPp->Tile__DOT__ex_mem_register__DOT__rd),5);
	vcdp->chgBus(c+114,(vlTOPp->Tile__DOT__ex_mem_register__DOT__rs2),32);
	vcdp->chgBus(c+115,(vlTOPp->Tile__DOT__ex_mem_register__DOT__rs2),5);
	vcdp->chgBus(c+116,((0x3ffU & vlTOPp->Tile__DOT__pc__DOT__pc_reg)),10);
	vcdp->chgBus(c+117,((0x3ffU & ((IData)(1U) 
				       + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))),10);
	vcdp->chgBus(c+118,((0x3ffU & ((IData)(2U) 
				       + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))),10);
	vcdp->chgBus(c+119,((0x3ffU & ((IData)(3U) 
				       + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))),10);
	vcdp->chgBus(c+120,(vlTOPp->Tile__DOT__regfile__DOT__regfile[0]),32);
	vcdp->chgBus(c+121,(vlTOPp->Tile__DOT__regfile__DOT__regfile[1]),32);
	vcdp->chgBus(c+122,(vlTOPp->Tile__DOT__regfile__DOT__regfile[2]),32);
	vcdp->chgBus(c+123,(vlTOPp->Tile__DOT__regfile__DOT__regfile[3]),32);
	vcdp->chgBus(c+124,(vlTOPp->Tile__DOT__regfile__DOT__regfile[4]),32);
	vcdp->chgBus(c+125,(vlTOPp->Tile__DOT__regfile__DOT__regfile[5]),32);
	vcdp->chgBus(c+126,(vlTOPp->Tile__DOT__regfile__DOT__regfile[6]),32);
	vcdp->chgBus(c+127,(vlTOPp->Tile__DOT__regfile__DOT__regfile[7]),32);
	vcdp->chgBus(c+128,(vlTOPp->Tile__DOT__regfile__DOT__regfile[8]),32);
	vcdp->chgBus(c+129,(vlTOPp->Tile__DOT__regfile__DOT__regfile[9]),32);
	vcdp->chgBus(c+130,(vlTOPp->Tile__DOT__regfile__DOT__regfile[10]),32);
	vcdp->chgBus(c+131,(vlTOPp->Tile__DOT__regfile__DOT__regfile[11]),32);
	vcdp->chgBus(c+132,(vlTOPp->Tile__DOT__regfile__DOT__regfile[12]),32);
	vcdp->chgBus(c+133,(vlTOPp->Tile__DOT__regfile__DOT__regfile[13]),32);
	vcdp->chgBus(c+134,(vlTOPp->Tile__DOT__regfile__DOT__regfile[14]),32);
	vcdp->chgBus(c+135,(vlTOPp->Tile__DOT__regfile__DOT__regfile[15]),32);
	vcdp->chgBus(c+136,(vlTOPp->Tile__DOT__regfile__DOT__regfile[16]),32);
	vcdp->chgBus(c+137,(vlTOPp->Tile__DOT__regfile__DOT__regfile[17]),32);
	vcdp->chgBus(c+138,(vlTOPp->Tile__DOT__regfile__DOT__regfile[18]),32);
	vcdp->chgBus(c+139,(vlTOPp->Tile__DOT__regfile__DOT__regfile[19]),32);
	vcdp->chgBus(c+140,(vlTOPp->Tile__DOT__regfile__DOT__regfile[20]),32);
	vcdp->chgBus(c+141,(vlTOPp->Tile__DOT__regfile__DOT__regfile[21]),32);
	vcdp->chgBus(c+142,(vlTOPp->Tile__DOT__regfile__DOT__regfile[22]),32);
	vcdp->chgBus(c+143,(vlTOPp->Tile__DOT__regfile__DOT__regfile[23]),32);
	vcdp->chgBus(c+144,(vlTOPp->Tile__DOT__regfile__DOT__regfile[24]),32);
	vcdp->chgBus(c+145,(vlTOPp->Tile__DOT__regfile__DOT__regfile[25]),32);
	vcdp->chgBus(c+146,(vlTOPp->Tile__DOT__regfile__DOT__regfile[26]),32);
	vcdp->chgBus(c+147,(vlTOPp->Tile__DOT__regfile__DOT__regfile[27]),32);
	vcdp->chgBus(c+148,(vlTOPp->Tile__DOT__regfile__DOT__regfile[28]),32);
	vcdp->chgBus(c+149,(vlTOPp->Tile__DOT__regfile__DOT__regfile[29]),32);
	vcdp->chgBus(c+150,(vlTOPp->Tile__DOT__regfile__DOT__regfile[30]),32);
	vcdp->chgBus(c+151,(vlTOPp->Tile__DOT__regfile__DOT__regfile[31]),32);
	vcdp->chgBus(c+152,(vlTOPp->Tile__DOT__regfile__DOT__regfile
			    [(0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				       >> 0xfU))]),32);
	vcdp->chgBus(c+153,(vlTOPp->Tile__DOT__regfile__DOT__regfile
			    [(0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				       >> 0x14U))]),32);
	vcdp->chgBus(c+154,(vlTOPp->Tile__DOT__regfile__DOT__regfile
			    [vlTOPp->Tile__DOT__mem_wb_register__DOT__rd]),32);
	vcdp->chgBus(c+155,(vlTOPp->Tile__DOT__id_ex_register__DOT__inst),32);
	vcdp->chgBus(c+156,(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status),2);
	vcdp->chgBus(c+157,(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer[0]),32);
	vcdp->chgBus(c+158,(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer[1]),32);
	vcdp->chgBus(c+159,(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer[2]),32);
	vcdp->chgBus(c+160,(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
			    [0U]),32);
	vcdp->chgBus(c+161,(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
			    [2U]),32);
	vcdp->chgBus(c+162,(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
			    [1U]),32);
	vcdp->chgBus(c+163,(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter[0]),2);
	vcdp->chgBus(c+164,(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter[1]),2);
	vcdp->chgBus(c+165,(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter[2]),2);
	vcdp->chgBus(c+166,(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
			    [0U]),2);
	vcdp->chgBus(c+167,(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
			    [1U]),2);
	vcdp->chgBus(c+168,(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
			    [2U]),2);
	vcdp->chgBit(c+169,(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used[0]));
	vcdp->chgBit(c+170,(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used[1]));
	vcdp->chgBit(c+171,(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used[2]));
	vcdp->chgBit(c+172,(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
			    [0U]));
	vcdp->chgBit(c+173,(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
			    [1U]));
	vcdp->chgBit(c+174,(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
			    [2U]));
	vcdp->chgBus(c+175,(vlTOPp->Tile__DOT__datacache__DOT__cache[0]),32);
	vcdp->chgBus(c+176,(vlTOPp->Tile__DOT__datacache__DOT__cache[1]),32);
	vcdp->chgBus(c+177,(vlTOPp->Tile__DOT__datacache__DOT__cache[2]),32);
	vcdp->chgBus(c+178,(vlTOPp->Tile__DOT__datacache__DOT__cache[3]),32);
	vcdp->chgBus(c+179,(vlTOPp->Tile__DOT__datacache__DOT__cache[4]),32);
	vcdp->chgBus(c+180,(vlTOPp->Tile__DOT__datacache__DOT__cache[5]),32);
	vcdp->chgBus(c+181,(vlTOPp->Tile__DOT__datacache__DOT__cache[6]),32);
	vcdp->chgBus(c+182,(vlTOPp->Tile__DOT__datacache__DOT__cache[7]),32);
	vcdp->chgBus(c+183,(vlTOPp->Tile__DOT__datacache__DOT__cache[8]),32);
	vcdp->chgBus(c+184,(vlTOPp->Tile__DOT__datacache__DOT__cache[9]),32);
	vcdp->chgBus(c+185,(vlTOPp->Tile__DOT__datacache__DOT__cache[10]),32);
	vcdp->chgBus(c+186,(vlTOPp->Tile__DOT__datacache__DOT__cache[11]),32);
	vcdp->chgBus(c+187,(vlTOPp->Tile__DOT__datacache__DOT__cache[12]),32);
	vcdp->chgBus(c+188,(vlTOPp->Tile__DOT__datacache__DOT__cache[13]),32);
	vcdp->chgBus(c+189,(vlTOPp->Tile__DOT__datacache__DOT__cache[14]),32);
	vcdp->chgBus(c+190,(vlTOPp->Tile__DOT__datacache__DOT__cache[15]),32);
	vcdp->chgBus(c+191,(vlTOPp->Tile__DOT__datacache__DOT__cache[16]),32);
	vcdp->chgBus(c+192,(vlTOPp->Tile__DOT__datacache__DOT__cache[17]),32);
	vcdp->chgBus(c+193,(vlTOPp->Tile__DOT__datacache__DOT__cache[18]),32);
	vcdp->chgBus(c+194,(vlTOPp->Tile__DOT__datacache__DOT__cache[19]),32);
	vcdp->chgBus(c+195,(vlTOPp->Tile__DOT__datacache__DOT__cache[20]),32);
	vcdp->chgBus(c+196,(vlTOPp->Tile__DOT__datacache__DOT__cache[21]),32);
	vcdp->chgBus(c+197,(vlTOPp->Tile__DOT__datacache__DOT__cache[22]),32);
	vcdp->chgBus(c+198,(vlTOPp->Tile__DOT__datacache__DOT__cache[23]),32);
	vcdp->chgBus(c+199,(vlTOPp->Tile__DOT__datacache__DOT__cache[24]),32);
	vcdp->chgBus(c+200,(vlTOPp->Tile__DOT__datacache__DOT__cache[25]),32);
	vcdp->chgBus(c+201,(vlTOPp->Tile__DOT__datacache__DOT__cache[26]),32);
	vcdp->chgBus(c+202,(vlTOPp->Tile__DOT__datacache__DOT__cache[27]),32);
	vcdp->chgBus(c+203,(vlTOPp->Tile__DOT__datacache__DOT__cache[28]),32);
	vcdp->chgBus(c+204,(vlTOPp->Tile__DOT__datacache__DOT__cache[29]),32);
	vcdp->chgBus(c+205,(vlTOPp->Tile__DOT__datacache__DOT__cache[30]),32);
	vcdp->chgBus(c+206,(vlTOPp->Tile__DOT__datacache__DOT__cache[31]),32);
	vcdp->chgBus(c+207,(vlTOPp->Tile__DOT__datacache__DOT__cache
			    [(0x1fU & (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
				       >> 2U))]),32);
	vcdp->chgBus(c+208,((0x1fU & (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
				      >> 2U))),5);
    }
}

void VTile::traceChgThis__4(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+209,(vlTOPp->clock));
	vcdp->chgBit(c+210,(vlTOPp->reset));
	vcdp->chgBus(c+211,(vlTOPp->io_if_pc_out),32);
	vcdp->chgBus(c+212,(vlTOPp->io_if_next_pc),32);
	vcdp->chgBus(c+213,(vlTOPp->io_id_rs1),5);
	vcdp->chgBus(c+214,(vlTOPp->io_id_rs2),5);
	vcdp->chgBus(c+215,(vlTOPp->io_id_rs1_out),32);
	vcdp->chgBus(c+216,(vlTOPp->io_id_rs2_out),32);
	vcdp->chgBus(c+217,(vlTOPp->io_ex_rs1_out),32);
	vcdp->chgBus(c+218,(vlTOPp->io_ex_rs2_out),32);
	vcdp->chgBus(c+219,(vlTOPp->io_ex_alu_sum),32);
	vcdp->chgBit(c+220,(vlTOPp->io_ex_alu_conflag));
	vcdp->chgBus(c+221,(vlTOPp->io_ex_rd),5);
	vcdp->chgBus(c+222,(vlTOPp->io_mem_rd),5);
	vcdp->chgBus(c+223,(vlTOPp->io_mem_alu_sum),32);
	vcdp->chgBus(c+224,(vlTOPp->io_mem_writedata),32);
	vcdp->chgBus(c+225,(vlTOPp->io_mem_dataout),32);
	vcdp->chgBus(c+226,(vlTOPp->io_wb_rd),5);
	vcdp->chgBus(c+227,(vlTOPp->io_wb_registerwrite),32);
	vcdp->chgBus(c+228,(vlTOPp->io_Forward_A),2);
	vcdp->chgBus(c+229,(vlTOPp->io_Forward_B),2);
	vcdp->chgBit(c+230,(vlTOPp->io_MemWrite_Src));
    }
}
