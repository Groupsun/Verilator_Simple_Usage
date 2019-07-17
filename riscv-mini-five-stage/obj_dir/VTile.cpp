// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTile.h for the primary calling header

#include "VTile.h"
#include "VTile__Syms.h"


//--------------------
// STATIC VARIABLES

// Begin mtask footprint  all: 
VL_ST_SIG8(VTile::__Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[128],1,0);

//--------------------

VL_CTOR_IMP(VTile) {
    VTile__Syms* __restrict vlSymsp = __VlSymsp = new VTile__Syms(this, name());
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTile::__Vconfigure(VTile__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTile::~VTile() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VTile::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTile::eval\n"); );
    VTile__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void VTile::_eval_initial_loop(VTile__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VTile::_initial__TOP__1(VTile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile::_initial__TOP__1\n"); );
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1,127,0,4);
    // Body
    // INITIAL at InstCache_bind.v:8
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x61636865U;
    __Vtemp1[2U] = 0x6e737463U;
    __Vtemp1[3U] = 0x69U;
    VL_READMEM_W(true,8,1024, 0,4, __Vtemp1, vlTOPp->Tile__DOT__instcache__DOT__cache
		 ,0,~0);
}

VL_INLINE_OPT void VTile::_sequent__TOP__2(VTile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile::_sequent__TOP__2\n"); );
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vtableidx1,6,0);
    VL_SIG8(__Vdlyvdim0__Tile__DOT__regfile__DOT__regfile__v0,4,0);
    VL_SIG8(__Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter__v0,1,0);
    VL_SIG8(__Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter__v1,1,0);
    VL_SIG8(__Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter__v2,1,0);
    VL_SIG8(__Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used__v0,0,0);
    VL_SIG8(__Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used__v1,0,0);
    VL_SIG8(__Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used__v2,0,0);
    VL_SIG8(__Vdlyvdim0__Tile__DOT__datacache__DOT__cache__v0,4,0);
    VL_SIG(__Vdlyvval__Tile__DOT__regfile__DOT__regfile__v0,31,0);
    VL_SIG(__Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer__v0,31,0);
    VL_SIG(__Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer__v1,31,0);
    VL_SIG(__Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer__v2,31,0);
    VL_SIG(__Vdlyvval__Tile__DOT__datacache__DOT__cache__v0,31,0);
    VL_SIGW(__Vtemp3,95,0,3);
    VL_SIGW(__Vtemp4,95,0,3);
    VL_SIGW(__Vtemp5,95,0,3);
    VL_SIGW(__Vtemp6,95,0,3);
    VL_SIGW(__Vtemp7,95,0,3);
    VL_SIGW(__Vtemp8,95,0,3);
    VL_SIGW(__Vtemp9,95,0,3);
    VL_SIGW(__Vtemp10,95,0,3);
    // Body
    // ALWAYS at Tile.v:656
    __Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter__v0 
	= (3U & ((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
		  ? 0U : (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1177)));
    __Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter__v1 
	= (3U & ((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
		  ? 0U : (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1188)));
    __Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter__v2 
	= (3U & ((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
		  ? 0U : (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1199)));
    // ALWAYS at Tile.v:2297
    vlTOPp->Tile__DOT__id_ex_register__DOT__imm_sel 
	= ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
					   ? 0U : ((IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)
						    ? 0U
						    : (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel))));
    // ALWAYS at Tile.v:656
    __Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer__v0 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
	    ? 0U : ((2U == vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
		     [0U]) ? 0U : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1210));
    __Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer__v1 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
	    ? 0U : ((2U == vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
		     [1U]) ? 0U : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1222));
    __Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer__v2 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
	    ? 0U : ((2U == vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
		     [2U]) ? 0U : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1234));
    // ALWAYS at Tile.v:656
    __Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used__v0 
	= ((~ (IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)) 
	   & ((2U != vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
	       [0U]) & (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1137)));
    __Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used__v1 
	= ((~ (IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)) 
	   & ((2U != vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
	       [1U]) & (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1143)));
    __Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used__v2 
	= ((~ (IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)) 
	   & ((2U != vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
	       [2U]) & (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1149)));
    // ALWAYS at Tile.v:3016
    __Vtableidx1 = (((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1783) 
		     << 6U) | (((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1784) 
				<< 5U) | (((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1794) 
					   << 4U) | 
					  (((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1796) 
					    << 3U) 
					   | (((IData)(vlTOPp->Tile__DOT__datapath_io_ex_io_PC_Src) 
					       << 2U) 
					      | (((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1782) 
						  << 1U) 
						 | (IData)(vlTOPp->reset)))))));
    if (vlTOPp->__Vtablechg1[__Vtableidx1]) {
	vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status 
	    = vlTOPp->__Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status
	    [__Vtableidx1];
    }
    // ALWAYS at Tile.v:3381
    vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_read 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__mem_read));
    // ALWAYS at Tile.v:2297
    vlTOPp->Tile__DOT__id_ex_register__DOT__branch_src 
	= ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)) 
					 & ((~ (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)) 
					    & ((0x33U 
						!= 
						(0xfe00707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       & ((0x40000033U 
						   != 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  & ((0x7033U 
						      != 
						      (0xfe00707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						     & ((0x6033U 
							 != 
							 (0xfe00707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							& ((0x4033U 
							    != 
							    (0xfe00707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							   & ((0x13U 
							       != 
							       (0x707fU 
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
    // ALWAYS at Tile.v:3381
    vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_write 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__mem_write));
    // ALWAYS at Tile.v:3381
    vlTOPp->Tile__DOT__ex_mem_register__DOT__load_type 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__load_type));
    // ALWAYS at Tile.v:3381
    vlTOPp->Tile__DOT__ex_mem_register__DOT__data_size 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__data_size));
    // ALWAYS at Tile.v:2297
    vlTOPp->Tile__DOT__id_ex_register__DOT__aluop = 
	((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
					 ? 0U : ((IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)
						  ? 0U
						  : 
						 ((0x33U 
						   == 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						   ? 0U
						   : 
						  ((0x40000033U 
						    == 
						    (0xfe00707fU 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						    ? 1U
						    : 
						   ((0x7033U 
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
							 : (IData)(vlTOPp->Tile__DOT__control__DOT___T_561)))))))))));
    // ALWAYS at Tile.v:2297
    vlTOPp->Tile__DOT__id_ex_register__DOT__branch 
	= ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)) 
					 & ((~ (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)) 
					    & ((0x33U 
						!= 
						(0xfe00707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       & ((0x40000033U 
						   != 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  & ((0x7033U 
						      != 
						      (0xfe00707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						     & ((0x6033U 
							 != 
							 (0xfe00707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							& ((0x4033U 
							    != 
							    (0xfe00707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							   & ((0x13U 
							       != 
							       (0x707fU 
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
    // ALWAYS at Tile.v:2297
    vlTOPp->Tile__DOT__id_ex_register__DOT__jump_type 
	= ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)) 
					 & ((~ (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)) 
					    & ((0x33U 
						!= 
						(0xfe00707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       & ((0x40000033U 
						   != 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  & ((0x7033U 
						      != 
						      (0xfe00707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						     & ((0x6033U 
							 != 
							 (0xfe00707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							& ((0x4033U 
							    != 
							    (0xfe00707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							   & ((0x13U 
							       != 
							       (0x707fU 
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
    // ALWAYS at Tile.v:2297
    vlTOPp->Tile__DOT__id_ex_register__DOT__pc = ((IData)(vlTOPp->reset)
						   ? 0U
						   : 
						  ((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
						    ? 0U
						    : vlTOPp->Tile__DOT__if_id_register__DOT__pc));
    // ALWAYS at Tile.v:2297
    vlTOPp->Tile__DOT__id_ex_register__DOT__rs1_out 
	= ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
					   ? 0U : vlTOPp->Tile__DOT__regfile_io_rs1_out));
    // ALWAYS at Tile.v:2297
    vlTOPp->Tile__DOT__id_ex_register__DOT__alu_src 
	= ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)) 
					 & ((~ (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)) 
					    & ((0x33U 
						!= 
						(0xfe00707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       & ((0x40000033U 
						   != 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  & ((0x7033U 
						      != 
						      (0xfe00707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						     & ((0x6033U 
							 != 
							 (0xfe00707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							& ((0x4033U 
							    != 
							    (0xfe00707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							   & ((0x13U 
							       == 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							      | ((0x7013U 
								  == 
								  (0x707fU 
								   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								 | (IData)(vlTOPp->Tile__DOT__control__DOT___T_523)))))))))));
    // ALWAYS at Tile.v:3381
    vlTOPp->Tile__DOT__ex_mem_register__DOT__rs2_out 
	= ((IData)(vlTOPp->reset) ? 0U : ((0U == (IData)(vlTOPp->Tile__DOT__forward_io_Forward_B))
					   ? vlTOPp->Tile__DOT__id_ex_register__DOT__rs2_out
					   : vlTOPp->Tile__DOT__datapath__DOT___T_198));
    // ALWAYS at Tile.v:3610
    vlTOPp->Tile__DOT__mem_wb_register__DOT__dataout 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Tile__DOT__datacache__DOT___T_1910));
    // ALWAYS at Tile.v:3222
    __Vdlyvval__Tile__DOT__datacache__DOT__cache__v0 
	= vlTOPp->Tile__DOT__datacache__DOT__cache___05FT_1905_data;
    __Vdlyvdim0__Tile__DOT__datacache__DOT__cache__v0 
	= (0x1fU & (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
		    >> 2U));
    // ALWAYS at Tile.v:2297
    vlTOPp->Tile__DOT__id_ex_register__DOT__rs1 = (0x1fU 
						   & ((IData)(vlTOPp->reset)
						       ? 0U
						       : 
						      ((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
						        ? 0U
						        : 
						       (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
							>> 0xfU))));
    // ALWAYS at Tile.v:3610
    vlTOPp->Tile__DOT__mem_wb_register__DOT__alu_sum 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum);
    // ALWAYS at Tile.v:3610
    vlTOPp->Tile__DOT__mem_wb_register__DOT__mem_to_reg 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_to_reg));
    // ALWAYS at Tile.v:3610
    vlTOPp->Tile__DOT__mem_wb_register__DOT__pc_4 = 
	((IData)(vlTOPp->reset) ? 0U : vlTOPp->Tile__DOT__ex_mem_register__DOT__pc_4);
    // ALWAYS at Tile.v:3610
    vlTOPp->Tile__DOT__mem_wb_register__DOT__imm = 
	((IData)(vlTOPp->reset) ? 0U : vlTOPp->Tile__DOT__ex_mem_register__DOT__imm);
    // ALWAYS at Tile.v:3610
    vlTOPp->Tile__DOT__mem_wb_register__DOT__aui_pc 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Tile__DOT__ex_mem_register__DOT__aui_pc);
    // ALWAYS at Tile.v:3381
    vlTOPp->Tile__DOT__ex_mem_register__DOT__rs2 = 
	((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__rs2));
    // ALWAYS at Tile.v:3610
    vlTOPp->Tile__DOT__mem_wb_register__DOT__reg_write 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__reg_write));
    // ALWAYS at Tile.v:1179
    __Vdlyvval__Tile__DOT__regfile__DOT__regfile__v0 
	= vlTOPp->Tile__DOT__regfile__DOT__regfile___05FT_273_data;
    __Vdlyvdim0__Tile__DOT__regfile__DOT__regfile__v0 
	= vlTOPp->Tile__DOT__mem_wb_register__DOT__rd;
    // ALWAYSPOST at Tile.v:658
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer[0U] 
	= __Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer__v0;
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer[1U] 
	= __Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer__v1;
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer[2U] 
	= __Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer__v2;
    // ALWAYSPOST at Tile.v:667
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter[0U] 
	= __Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter__v0;
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter[1U] 
	= __Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter__v1;
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter[2U] 
	= __Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter__v2;
    // ALWAYSPOST at Tile.v:676
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used[0U] 
	= __Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used__v0;
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used[1U] 
	= __Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used__v1;
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used[2U] 
	= __Vdlyvval__Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used__v2;
    // ALWAYSPOST at Tile.v:3224
    vlTOPp->Tile__DOT__datacache__DOT__cache[__Vdlyvdim0__Tile__DOT__datacache__DOT__cache__v0] 
	= __Vdlyvval__Tile__DOT__datacache__DOT__cache__v0;
    // ALWAYSPOST at Tile.v:1181
    vlTOPp->Tile__DOT__regfile__DOT__regfile[__Vdlyvdim0__Tile__DOT__regfile__DOT__regfile__v0] 
	= __Vdlyvval__Tile__DOT__regfile__DOT__regfile__v0;
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1177 
	= (7U & ((2U == vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
		  [0U]) ? 0U : (vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
				[0U] ? ((IData)(1U) 
					+ vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
					[0U]) : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
				[0U])));
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1188 
	= (7U & ((2U == vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
		  [1U]) ? 0U : (vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
				[1U] ? ((IData)(1U) 
					+ vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
					[1U]) : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
				[1U])));
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1199 
	= (7U & ((2U == vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
		  [2U]) ? 0U : (vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
				[2U] ? ((IData)(1U) 
					+ vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
					[2U]) : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
				[2U])));
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131 
	= (vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
	   [0U] ? (vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
		   [1U] ? 2U : 1U) : 0U);
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1783 
	= (2U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status));
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1784 
	= (3U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status));
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1794 
	= (1U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status));
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1796 
	= (0U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status));
    // ALWAYS at Tile.v:2297
    vlTOPp->Tile__DOT__id_ex_register__DOT__mem_read 
	= ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)) 
					 & ((~ (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)) 
					    & ((0x33U 
						!= 
						(0xfe00707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       & ((0x40000033U 
						   != 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  & ((0x7033U 
						      != 
						      (0xfe00707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						     & ((0x6033U 
							 != 
							 (0xfe00707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							& ((0x4033U 
							    != 
							    (0xfe00707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							   & (IData)(vlTOPp->Tile__DOT__control__DOT___T_677)))))))));
    // ALWAYS at Tile.v:2297
    vlTOPp->Tile__DOT__id_ex_register__DOT__mem_write 
	= ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)) 
					 & ((~ (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)) 
					    & ((0x33U 
						!= 
						(0xfe00707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       & ((0x40000033U 
						   != 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  & ((0x7033U 
						      != 
						      (0xfe00707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						     & ((0x6033U 
							 != 
							 (0xfe00707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							& ((0x4033U 
							    != 
							    (0xfe00707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							   & ((0x13U 
							       != 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							      & ((0x7013U 
								  != 
								  (0x707fU 
								   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								 & (IData)(vlTOPp->Tile__DOT__control__DOT___T_713)))))))))));
    // ALWAYS at Tile.v:2297
    vlTOPp->Tile__DOT__id_ex_register__DOT__load_type 
	= ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)) 
					 & ((~ (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)) 
					    & ((0x33U 
						!= 
						(0xfe00707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       & ((0x40000033U 
						   != 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  & ((0x7033U 
						      != 
						      (0xfe00707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						     & ((0x6033U 
							 != 
							 (0xfe00707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							& ((0x4033U 
							    != 
							    (0xfe00707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							   & (IData)(vlTOPp->Tile__DOT__control__DOT___T_791)))))))));
    vlTOPp->Tile__DOT__datacache__DOT___T_1876 = (((IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__data_size) 
						   << 1U) 
						  | (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__load_type));
    // ALWAYS at Tile.v:2297
    vlTOPp->Tile__DOT__id_ex_register__DOT__data_size 
	= ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
					   ? 0U : ((IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)
						    ? 0U
						    : 
						   ((0x33U 
						     == 
						     (0xfe00707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						     ? 0U
						     : 
						    ((0x40000033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						      ? 0U
						      : 
						     ((0x7033U 
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
							        : (IData)(vlTOPp->Tile__DOT__control__DOT___T_746))))))))))))))));
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1779 
	= ((IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__branch) 
	   & (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__jump_type));
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1782 
	= ((IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__branch) 
	   & (~ (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__jump_type)));
    // ALWAYS at Tile.v:1060
    if (vlTOPp->reset) {
	vlTOPp->Tile__DOT__if_id_register__DOT__pc = 0U;
    } else {
	if (vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush) {
	    vlTOPp->Tile__DOT__if_id_register__DOT__pc = 0U;
	} else {
	    if ((1U & (~ (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)))) {
		vlTOPp->Tile__DOT__if_id_register__DOT__pc 
		    = vlTOPp->Tile__DOT__pc__DOT__pc_reg;
	    }
	}
    }
    vlTOPp->io_ex_rs1_out = vlTOPp->Tile__DOT__id_ex_register__DOT__rs1_out;
    // ALWAYS at Tile.v:2297
    vlTOPp->Tile__DOT__id_ex_register__DOT__rs2_out 
	= ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
					   ? 0U : vlTOPp->Tile__DOT__regfile_io_rs2_out));
    // ALWAYS at Tile.v:3381
    vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Tile__DOT__alu__DOT___T_1057[0U]);
    // ALWAYS at Tile.v:3381
    vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_to_reg 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__mem_to_reg));
    // ALWAYS at Tile.v:3381
    vlTOPp->Tile__DOT__ex_mem_register__DOT__pc_4 = 
	((IData)(vlTOPp->reset) ? 0U : vlTOPp->Tile__DOT__id_ex_register__DOT__pc_4);
    // ALWAYS at Tile.v:3381
    vlTOPp->Tile__DOT__ex_mem_register__DOT__imm = 
	((IData)(vlTOPp->reset) ? 0U : vlTOPp->Tile__DOT__id_ex_register__DOT__imm);
    vlTOPp->Tile__DOT__datapath_io_wb_io_wb_reg_writedata 
	= ((0U == (IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__mem_to_reg))
	    ? vlTOPp->Tile__DOT__mem_wb_register__DOT__alu_sum
	    : ((1U == (IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__mem_to_reg))
	        ? vlTOPp->Tile__DOT__mem_wb_register__DOT__dataout
	        : ((2U == (IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__mem_to_reg))
		    ? vlTOPp->Tile__DOT__mem_wb_register__DOT__pc_4
		    : ((3U == (IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__mem_to_reg))
		        ? vlTOPp->Tile__DOT__mem_wb_register__DOT__imm
		        : ((4U == (IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__mem_to_reg))
			    ? vlTOPp->Tile__DOT__mem_wb_register__DOT__aui_pc
			    : vlTOPp->Tile__DOT__mem_wb_register__DOT__alu_sum)))));
    // ALWAYS at Tile.v:3381
    vlTOPp->Tile__DOT__ex_mem_register__DOT__aui_pc 
	= ((IData)(vlTOPp->reset) ? 0U : (vlTOPp->Tile__DOT__datapath__DOT___T_140 
					  + vlTOPp->Tile__DOT__id_ex_register__DOT__imm));
    // ALWAYS at Tile.v:2297
    vlTOPp->Tile__DOT__id_ex_register__DOT__rs2 = (0x1fU 
						   & ((IData)(vlTOPp->reset)
						       ? 0U
						       : 
						      ((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
						        ? 0U
						        : 
						       (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
							>> 0x14U))));
    // ALWAYS at Tile.v:3381
    vlTOPp->Tile__DOT__ex_mem_register__DOT__reg_write 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__reg_write));
    // ALWAYS at Tile.v:3610
    vlTOPp->Tile__DOT__mem_wb_register__DOT__rd = ((IData)(vlTOPp->reset)
						    ? 0U
						    : (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__rd));
    vlTOPp->io_wb_registerwrite = vlTOPp->Tile__DOT__datapath_io_wb_io_wb_reg_writedata;
    vlTOPp->io_ex_rs2_out = vlTOPp->Tile__DOT__id_ex_register__DOT__rs2_out;
    vlTOPp->io_mem_alu_sum = vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum;
    vlTOPp->Tile__DOT__datacache__DOT___T_1902 = ((3U 
						   == (IData)(vlTOPp->Tile__DOT__datacache__DOT___T_1876))
						   ? (QData)((IData)(
								     (0xffffU 
								      & vlTOPp->Tile__DOT__datacache__DOT__cache
								      [
								      (0x1fU 
								       & (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
									  >> 2U))])))
						   : 
						  ((2U 
						    == (IData)(vlTOPp->Tile__DOT__datacache__DOT___T_1876))
						    ? 
						   (((QData)((IData)(
								     (0xffffU 
								      & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Tile__DOT__datacache__DOT__cache
										[
										(0x1fU 
										& (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
										>> 2U))] 
										>> 0xfU))))))) 
						     << 0x1fU) 
						    | (QData)((IData)(
								      ((0x7fff0000U 
									& (VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Tile__DOT__datacache__DOT__cache
										[
										(0x1fU 
										& (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
										>> 2U))] 
										>> 0xfU)))) 
									   << 0x10U)) 
								       | (0xffffU 
									  & vlTOPp->Tile__DOT__datacache__DOT__cache
									  [
									  (0x1fU 
									   & (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
									      >> 2U))])))))
						    : 
						   ((5U 
						     == (IData)(vlTOPp->Tile__DOT__datacache__DOT___T_1876))
						     ? (QData)((IData)(
								       (0xffU 
									& vlTOPp->Tile__DOT__datacache__DOT__cache
									[
									(0x1fU 
									 & (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
									    >> 2U))])))
						     : 
						    ((4U 
						      == (IData)(vlTOPp->Tile__DOT__datacache__DOT___T_1876))
						      ? 
						     (((QData)((IData)(
								       (0xffffffU 
									& VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Tile__DOT__datacache__DOT__cache
										[
										(0x1fU 
										& (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
										>> 2U))] 
										>> 7U))))))) 
						       << 0xfU) 
						      | (QData)((IData)(
									((0x7f00U 
									  & (VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Tile__DOT__datacache__DOT__cache
										[
										(0x1fU 
										& (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
										>> 2U))] 
										>> 7U)))) 
									     << 8U)) 
									 | (0xffU 
									    & vlTOPp->Tile__DOT__datacache__DOT__cache
									    [
									    (0x1fU 
									     & (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
										>> 2U))])))))
						      : (QData)((IData)(
									vlTOPp->Tile__DOT__datacache__DOT__cache
									[
									(0x1fU 
									 & (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
									    >> 2U))]))))));
    // ALWAYS at Tile.v:2297
    vlTOPp->Tile__DOT__id_ex_register__DOT__mem_to_reg 
	= ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
					   ? 0U : ((IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)
						    ? 0U
						    : 
						   ((0x33U 
						     == 
						     (0xfe00707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						     ? 0U
						     : 
						    ((0x40000033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						      ? 0U
						      : 
						     ((0x7033U 
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
							   : (IData)(vlTOPp->Tile__DOT__control__DOT___T_827)))))))))));
    // ALWAYS at Tile.v:2297
    vlTOPp->Tile__DOT__id_ex_register__DOT__pc_4 = 
	((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
					 ? 0U : vlTOPp->Tile__DOT__if_id_register__DOT__pc_4));
    // ALWAYS at Tile.v:2297
    vlTOPp->Tile__DOT__id_ex_register__DOT__imm = ((IData)(vlTOPp->reset)
						    ? 0U
						    : 
						   ((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
						     ? 0U
						     : 
						    ((1U 
						      == (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel))
						      ? 0U
						      : vlTOPp->Tile__DOT__immgen__DOT___T_318)));
    vlTOPp->Tile__DOT__datapath__DOT___T_188 = ((0U 
						 == (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_to_reg))
						 ? vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum
						 : 
						((2U 
						  == (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_to_reg))
						  ? vlTOPp->Tile__DOT__ex_mem_register__DOT__pc_4
						  : 
						 ((3U 
						   == (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_to_reg))
						   ? vlTOPp->Tile__DOT__ex_mem_register__DOT__imm
						   : 
						  ((4U 
						    == (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_to_reg))
						    ? vlTOPp->Tile__DOT__ex_mem_register__DOT__aui_pc
						    : 0U))));
    // ALWAYS at Tile.v:2297
    vlTOPp->Tile__DOT__id_ex_register__DOT__reg_write 
	= ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)) 
					 & ((~ (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)) 
					    & ((0x33U 
						== 
						(0xfe00707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       | ((0x40000033U 
						   == 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  | (IData)(vlTOPp->Tile__DOT__control__DOT___T_452))))));
    vlTOPp->io_wb_rd = vlTOPp->Tile__DOT__mem_wb_register__DOT__rd;
    vlTOPp->Tile__DOT__regfile__DOT__regfile___05FT_273_data 
	= ((IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__reg_write)
	    ? ((0U == (IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__rd))
	        ? 0U : vlTOPp->Tile__DOT__datapath_io_wb_io_wb_reg_writedata)
	    : vlTOPp->Tile__DOT__regfile__DOT__regfile
	   [vlTOPp->Tile__DOT__mem_wb_register__DOT__rd]);
    vlTOPp->Tile__DOT__forward_io_MemWrite_Src = (((IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__reg_write) 
						   & (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_write)) 
						  & ((IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__rs2) 
						     == (IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__rd)));
    vlTOPp->Tile__DOT__forward__DOT___T_1976 = ((IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__reg_write) 
						& (0U 
						   != (IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__rd)));
    // ALWAYS at Tile.v:3381
    vlTOPp->Tile__DOT__ex_mem_register__DOT__rd = (0x1fU 
						   & ((IData)(vlTOPp->reset)
						       ? 0U
						       : 
						      (vlTOPp->Tile__DOT__id_ex_register__DOT__inst 
						       >> 7U)));
    vlTOPp->Tile__DOT__datacache__DOT___T_1910 = ((IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_read)
						   ? 
						  ((1U 
						    == (IData)(vlTOPp->Tile__DOT__datacache__DOT___T_1876))
						    ? (QData)((IData)(
								      vlTOPp->Tile__DOT__datacache__DOT__cache
								      [
								      (0x1fU 
								       & (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
									  >> 2U))]))
						    : vlTOPp->Tile__DOT__datacache__DOT___T_1902)
						   : VL_ULL(0));
    vlTOPp->io_MemWrite_Src = vlTOPp->Tile__DOT__forward_io_MemWrite_Src;
    vlTOPp->Tile__DOT__datapath_io_mem_io_mem_writedata 
	= ((IData)(vlTOPp->Tile__DOT__forward_io_MemWrite_Src)
	    ? vlTOPp->Tile__DOT__datapath_io_wb_io_wb_reg_writedata
	    : vlTOPp->Tile__DOT__ex_mem_register__DOT__rs2_out);
    vlTOPp->io_mem_dataout = (IData)(vlTOPp->Tile__DOT__datacache__DOT___T_1910);
    // ALWAYS at Tile.v:1060
    if (vlTOPp->reset) {
	vlTOPp->Tile__DOT__if_id_register__DOT__pc_4 = 0U;
    } else {
	if (vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush) {
	    vlTOPp->Tile__DOT__if_id_register__DOT__pc_4 = 0U;
	} else {
	    if ((1U & (~ (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)))) {
		vlTOPp->Tile__DOT__if_id_register__DOT__pc_4 
		    = ((IData)(4U) + vlTOPp->Tile__DOT__pc__DOT__pc_reg);
	    }
	}
    }
    vlTOPp->io_mem_writedata = vlTOPp->Tile__DOT__datapath_io_mem_io_mem_writedata;
    vlTOPp->Tile__DOT__datacache__DOT__cache___05FT_1905_data 
	= ((IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_write)
	    ? ((0U == (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__data_size))
	        ? vlTOPp->Tile__DOT__datapath_io_mem_io_mem_writedata
	        : ((1U == (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__data_size))
		    ? (0xffffU & vlTOPp->Tile__DOT__datapath_io_mem_io_mem_writedata)
		    : ((2U == (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__data_size))
		        ? (0xffU & vlTOPp->Tile__DOT__datapath_io_mem_io_mem_writedata)
		        : vlTOPp->Tile__DOT__datapath_io_mem_io_mem_writedata)))
	    : vlTOPp->Tile__DOT__datacache__DOT__cache
	   [(0x1fU & (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
		      >> 2U))]);
    // ALWAYS at Tile.v:2297
    vlTOPp->Tile__DOT__id_ex_register__DOT__inst = 
	((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush)
					 ? 0U : vlTOPp->Tile__DOT__if_id_register__DOT__inst));
    vlTOPp->io_mem_rd = vlTOPp->Tile__DOT__ex_mem_register__DOT__rd;
    vlTOPp->Tile__DOT__forward__DOT___T_1971 = ((IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__reg_write) 
						& (0U 
						   != (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__rd)));
    vlTOPp->Tile__DOT__forward__DOT___T_1973 = ((IData)(vlTOPp->Tile__DOT__forward__DOT___T_1971) 
						& ((IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__rd) 
						   == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__rs1)));
    vlTOPp->Tile__DOT__forward__DOT___T_1985 = ((IData)(vlTOPp->Tile__DOT__forward__DOT___T_1971) 
						& ((IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__rd) 
						   == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__rs2)));
    // ALWAYS at Tile.v:732
    if (vlTOPp->reset) {
	vlTOPp->Tile__DOT__pc__DOT__pc_reg = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)))) {
	    vlTOPp->Tile__DOT__pc__DOT__pc_reg = (IData)(vlTOPp->Tile__DOT__datapath__DOT___T_156);
	}
    }
    vlTOPp->io_ex_rd = (0x1fU & (vlTOPp->Tile__DOT__id_ex_register__DOT__inst 
				 >> 7U));
    // ALWAYS at Tile.v:1060
    if (vlTOPp->reset) {
	vlTOPp->Tile__DOT__if_id_register__DOT__inst = 0U;
    } else {
	if (vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush) {
	    vlTOPp->Tile__DOT__if_id_register__DOT__inst = 0U;
	} else {
	    if ((1U & (~ (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010)))) {
		vlTOPp->Tile__DOT__if_id_register__DOT__inst 
		    = vlTOPp->Tile__DOT__instcache_io_inst;
	    }
	}
    }
    vlTOPp->Tile__DOT__forward_io_Forward_A = (((IData)(vlTOPp->Tile__DOT__forward__DOT___T_1973) 
						<< 1U) 
					       | (((IData)(vlTOPp->Tile__DOT__forward__DOT___T_1976) 
						   & (~ (IData)(vlTOPp->Tile__DOT__forward__DOT___T_1973))) 
						  & ((IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__rd) 
						     == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__rs1))));
    vlTOPp->Tile__DOT__forward_io_Forward_B = (((IData)(vlTOPp->Tile__DOT__forward__DOT___T_1985) 
						<< 1U) 
					       | (((IData)(vlTOPp->Tile__DOT__forward__DOT___T_1976) 
						   & (~ (IData)(vlTOPp->Tile__DOT__forward__DOT___T_1985))) 
						  & ((IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__rd) 
						     == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__rs2))));
    vlTOPp->io_Forward_A = vlTOPp->Tile__DOT__forward_io_Forward_A;
    vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src 
	= ((0U == (IData)(vlTOPp->Tile__DOT__forward_io_Forward_A))
	    ? vlTOPp->Tile__DOT__id_ex_register__DOT__rs1_out
	    : ((1U == (IData)(vlTOPp->Tile__DOT__forward_io_Forward_A))
	        ? vlTOPp->Tile__DOT__datapath_io_wb_io_wb_reg_writedata
	        : ((2U == (IData)(vlTOPp->Tile__DOT__forward_io_Forward_A))
		    ? vlTOPp->Tile__DOT__datapath__DOT___T_188
		    : vlTOPp->Tile__DOT__id_ex_register__DOT__rs1_out)));
    vlTOPp->io_Forward_B = vlTOPp->Tile__DOT__forward_io_Forward_B;
    vlTOPp->Tile__DOT__datapath__DOT___T_198 = ((1U 
						 == (IData)(vlTOPp->Tile__DOT__forward_io_Forward_B))
						 ? vlTOPp->Tile__DOT__datapath_io_wb_io_wb_reg_writedata
						 : 
						((2U 
						  == (IData)(vlTOPp->Tile__DOT__forward_io_Forward_B))
						  ? vlTOPp->Tile__DOT__datapath__DOT___T_188
						  : vlTOPp->Tile__DOT__id_ex_register__DOT__rs2_out));
    vlTOPp->io_if_pc_out = vlTOPp->Tile__DOT__pc__DOT__pc_reg;
    vlTOPp->Tile__DOT__instcache_io_inst = ((vlTOPp->Tile__DOT__instcache__DOT__cache
					     [(0x3ffU 
					       & vlTOPp->Tile__DOT__pc__DOT__pc_reg)] 
					     << 0x18U) 
					    | ((vlTOPp->Tile__DOT__instcache__DOT__cache
						[(0x3ffU 
						  & ((IData)(1U) 
						     + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))] 
						<< 0x10U) 
					       | ((vlTOPp->Tile__DOT__instcache__DOT__cache
						   [
						   (0x3ffU 
						    & ((IData)(2U) 
						       + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))] 
						   << 8U) 
						  | vlTOPp->Tile__DOT__instcache__DOT__cache
						  [
						  (0x3ffU 
						   & ((IData)(3U) 
						      + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))])));
    vlTOPp->io_id_rs1 = (0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				  >> 0xfU));
    vlTOPp->io_id_rs2 = (0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				  >> 0x14U));
    vlTOPp->Tile__DOT__control__DOT___T_627 = ((0x2013U 
						!= 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       & ((0x3013U 
						   != 
						   (0x707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  & ((0x2003U 
						      != 
						      (0x707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						     & ((0x1003U 
							 != 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							& ((3U 
							    != 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							   & ((0x5003U 
							       != 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							      & ((0x4003U 
								  != 
								  (0x707fU 
								   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								 & ((0x2023U 
								     != 
								     (0x707fU 
								      & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								    & ((0x1023U 
									!= 
									(0x707fU 
									 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								       & ((0x23U 
									   != 
									   (0x707fU 
									    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									  & ((0x63U 
									      != 
									      (0x707fU 
									       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									     & ((0x1063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x4063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x5063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x6063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x7063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x6fU 
										!= 
										(0x7fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& (0x67U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)))))))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_746 = ((0x1013U 
						== 
						(0xfe00707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					        ? 0U
					        : (
						   (0x5013U 
						    == 
						    (0xfe00707fU 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						    ? 0U
						    : 
						   ((0x40005013U 
						     == 
						     (0xfe00707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						     ? 0U
						     : 
						    ((0x2033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						      ? 0U
						      : 
						     ((0x3033U 
						       == 
						       (0xfe00707fU 
							& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						       ? 0U
						       : 
						      ((0x2013U 
							== 
							(0x707fU 
							 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						        ? 0U
						        : 
						       ((0x3013U 
							 == 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							 ? 0U
							 : 
							((0x2003U 
							  == 
							  (0x707fU 
							   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							  ? 0U
							  : 
							 ((0x1003U 
							   == 
							   (0x707fU 
							    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							   ? 1U
							   : 
							  ((3U 
							    == 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							    ? 2U
							    : 
							   ((0x5003U 
							     == 
							     (0x707fU 
							      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							     ? 1U
							     : 
							    ((0x4003U 
							      == 
							      (0x707fU 
							       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							      ? 2U
							      : 
							     ((0x2023U 
							       == 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							       ? 0U
							       : 
							      ((0x1023U 
								== 
								(0x707fU 
								 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							        ? 1U
							        : 
							       ((0x23U 
								 == 
								 (0x707fU 
								  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
								 ? 2U
								 : 0U)))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_435 = ((0x2003U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       | ((0x1003U 
						   == 
						   (0x707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  | ((3U 
						      == 
						      (0x707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						     | ((0x5003U 
							 == 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							| ((0x4003U 
							    == 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							   | ((0x2023U 
							       != 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							      & ((0x1023U 
								  != 
								  (0x707fU 
								   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								 & ((0x23U 
								     != 
								     (0x707fU 
								      & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								    & ((0x63U 
									!= 
									(0x707fU 
									 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								       & ((0x1063U 
									   != 
									   (0x707fU 
									    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									  & ((0x4063U 
									      != 
									      (0x707fU 
									       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									     & ((0x5063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x6063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x7063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x6fU 
										== 
										(0x7fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x67U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x37U 
										== 
										(0x7fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| (0x17U 
										== 
										(0x7fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)))))))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_546 = ((0x5003U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					        ? 0U
					        : (
						   (0x4003U 
						    == 
						    (0x707fU 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						    ? 0U
						    : 
						   ((0x2023U 
						     == 
						     (0x707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						     ? 0U
						     : 
						    ((0x1023U 
						      == 
						      (0x707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						      ? 0U
						      : 
						     ((0x23U 
						       == 
						       (0x707fU 
							& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						       ? 0U
						       : 
						      ((0x63U 
							== 
							(0x707fU 
							 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						        ? 0xaU
						        : 
						       ((0x1063U 
							 == 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							 ? 0xbU
							 : 
							((0x4063U 
							  == 
							  (0x707fU 
							   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							  ? 0xcU
							  : 
							 ((0x5063U 
							   == 
							   (0x707fU 
							    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							   ? 0xdU
							   : 
							  ((0x6063U 
							    == 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							    ? 0xeU
							    : 
							   ((0x7063U 
							     == 
							     (0x707fU 
							      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							     ? 0xfU
							     : 
							    ((0x6fU 
							      == 
							      (0x7fU 
							       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							      ? 0U
							      : 
							     ((0x67U 
							       == 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							       ? 0U
							       : 
							      ((0x37U 
								== 
								(0x7fU 
								 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							        ? 0U
							        : 
							       ((0x17U 
								 == 
								 (0x7fU 
								  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
								 ? 0U
								 : 0x10U)))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_812 = ((0x5003U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					        ? 1U
					        : (
						   (0x4003U 
						    == 
						    (0x707fU 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						    ? 1U
						    : 
						   ((0x2023U 
						     == 
						     (0x707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						     ? 0U
						     : 
						    ((0x1023U 
						      == 
						      (0x707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						      ? 0U
						      : 
						     ((0x23U 
						       == 
						       (0x707fU 
							& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						       ? 0U
						       : 
						      ((0x63U 
							== 
							(0x707fU 
							 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						        ? 0U
						        : 
						       ((0x1063U 
							 == 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							 ? 0U
							 : 
							((0x4063U 
							  == 
							  (0x707fU 
							   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							  ? 0U
							  : 
							 ((0x5063U 
							   == 
							   (0x707fU 
							    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							   ? 0U
							   : 
							  ((0x6063U 
							    == 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							    ? 0U
							    : 
							   ((0x7063U 
							     == 
							     (0x707fU 
							      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							     ? 0U
							     : 
							    ((0x6fU 
							      == 
							      (0x7fU 
							       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							      ? 2U
							      : 
							     ((0x67U 
							       == 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							       ? 2U
							       : 
							      ((0x37U 
								== 
								(0x7fU 
								 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							        ? 3U
							        : 
							       ((0x17U 
								 == 
								 (0x7fU 
								  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
								 ? 4U
								 : 0U)))))))))))))));
    vlTOPp->Tile__DOT__regfile_io_rs1_out = (((IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__reg_write) 
					      & ((0x1fU 
						  & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
						     >> 0xfU)) 
						 == (IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__rd)))
					      ? vlTOPp->Tile__DOT__datapath_io_wb_io_wb_reg_writedata
					      : vlTOPp->Tile__DOT__regfile__DOT__regfile
					     [(0x1fU 
					       & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
						  >> 0xfU))]);
    vlTOPp->Tile__DOT__regfile_io_rs2_out = (((IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__reg_write) 
					      & ((0x1fU 
						  & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
						     >> 0x14U)) 
						 == (IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__rd)))
					      ? vlTOPp->Tile__DOT__datapath_io_wb_io_wb_reg_writedata
					      : vlTOPp->Tile__DOT__regfile__DOT__regfile
					     [(0x1fU 
					       & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
						  >> 0x14U))]);
    vlTOPp->Tile__DOT__control__DOT___T_506 = ((0x2023U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       | ((0x1023U 
						   == 
						   (0x707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  | (0x23U 
						     == 
						     (0x707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))));
    vlTOPp->Tile__DOT__control__DOT___T_573 = ((0x6fU 
						== 
						(0x7fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       | (0x67U 
						  == 
						  (0x707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)));
    vlTOPp->Tile__DOT__control__DOT___T_660 = ((0x5003U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       | (0x4003U 
						  == 
						  (0x707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)));
    vlTOPp->Tile__DOT__control__DOT___T_470 = ((0x5003U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					        ? 2U
					        : (
						   (0x4003U 
						    == 
						    (0x707fU 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						    ? 2U
						    : 
						   ((0x2023U 
						     == 
						     (0x707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						     ? 3U
						     : 
						    ((0x1023U 
						      == 
						      (0x707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						      ? 3U
						      : 
						     ((0x23U 
						       == 
						       (0x707fU 
							& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						       ? 3U
						       : 
						      ((0x63U 
							== 
							(0x707fU 
							 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						        ? 4U
						        : 
						       ((0x1063U 
							 == 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							 ? 4U
							 : 
							((0x4063U 
							  == 
							  (0x707fU 
							   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							  ? 4U
							  : 
							 ((0x5063U 
							   == 
							   (0x707fU 
							    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							   ? 4U
							   : 
							  ((0x6063U 
							    == 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							    ? 4U
							    : 
							   ((0x7063U 
							     == 
							     (0x707fU 
							      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							     ? 4U
							     : 
							    ((0x6fU 
							      == 
							      (0x7fU 
							       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							      ? 6U
							      : 
							     ((0x67U 
							       == 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							       ? 2U
							       : 
							      ((0x37U 
								== 
								(0x7fU 
								 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							        ? 5U
							        : 
							       ((0x17U 
								 == 
								 (0x7fU 
								  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
								 ? 5U
								 : 0U)))))))))))))));
    vlTOPp->Tile__DOT__datapath__DOT___T_140 = ((IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__branch_src)
						 ? vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src
						 : vlTOPp->Tile__DOT__id_ex_register__DOT__pc);
    vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src 
	= ((IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__alu_src)
	    ? vlTOPp->Tile__DOT__id_ex_register__DOT__imm
	    : ((0U == (IData)(vlTOPp->Tile__DOT__forward_io_Forward_B))
	        ? vlTOPp->Tile__DOT__id_ex_register__DOT__rs2_out
	        : vlTOPp->Tile__DOT__datapath__DOT___T_198));
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1469 
	= ((0x6fU == (0x7fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
	   | (0x67U == (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)));
    vlTOPp->Tile__DOT__control__DOT___T_452 = ((0x7033U 
						== 
						(0xfe00707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       | ((0x6033U 
						   == 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  | ((0x4033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						     | ((0x13U 
							 == 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							| ((0x7013U 
							    == 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							   | ((0x6013U 
							       == 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							      | ((0x4013U 
								  == 
								  (0x707fU 
								   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								 | ((0x1033U 
								     == 
								     (0xfe00707fU 
								      & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								    | ((0x5033U 
									== 
									(0xfe00707fU 
									 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								       | ((0x40005033U 
									   == 
									   (0xfe00707fU 
									    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									  | ((0x1013U 
									      == 
									      (0xfe00707fU 
									       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									     | ((0x5013U 
										== 
										(0xfe00707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x40005013U 
										== 
										(0xfe00707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x2033U 
										== 
										(0xfe00707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x3033U 
										== 
										(0xfe00707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x2013U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x3013U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| (IData)(vlTOPp->Tile__DOT__control__DOT___T_435))))))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_561 = ((0x6013U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					        ? 3U
					        : (
						   (0x4013U 
						    == 
						    (0x707fU 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						    ? 4U
						    : 
						   ((0x1033U 
						     == 
						     (0xfe00707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						     ? 5U
						     : 
						    ((0x5033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						      ? 6U
						      : 
						     ((0x40005033U 
						       == 
						       (0xfe00707fU 
							& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						       ? 7U
						       : 
						      ((0x1013U 
							== 
							(0xfe00707fU 
							 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						        ? 5U
						        : 
						       ((0x5013U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							 ? 6U
							 : 
							((0x40005013U 
							  == 
							  (0xfe00707fU 
							   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							  ? 7U
							  : 
							 ((0x2033U 
							   == 
							   (0xfe00707fU 
							    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							   ? 8U
							   : 
							  ((0x3033U 
							    == 
							    (0xfe00707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							    ? 9U
							    : 
							   ((0x2013U 
							     == 
							     (0x707fU 
							      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							     ? 8U
							     : 
							    ((0x3013U 
							      == 
							      (0x707fU 
							       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							      ? 9U
							      : 
							     ((0x2003U 
							       == 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							       ? 0U
							       : 
							      ((0x1003U 
								== 
								(0x707fU 
								 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							        ? 0U
							        : 
							       ((3U 
								 == 
								 (0x707fU 
								  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
								 ? 0U
								 : (IData)(vlTOPp->Tile__DOT__control__DOT___T_546))))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_827 = ((0x6013U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					        ? 0U
					        : (
						   (0x4013U 
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
						       : 
						      ((0x1013U 
							== 
							(0xfe00707fU 
							 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						        ? 0U
						        : 
						       ((0x5013U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							 ? 0U
							 : 
							((0x40005013U 
							  == 
							  (0xfe00707fU 
							   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							  ? 0U
							  : 
							 ((0x2033U 
							   == 
							   (0xfe00707fU 
							    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							   ? 0U
							   : 
							  ((0x3033U 
							    == 
							    (0xfe00707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							    ? 0U
							    : 
							   ((0x2013U 
							     == 
							     (0x707fU 
							      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							     ? 0U
							     : 
							    ((0x3013U 
							      == 
							      (0x707fU 
							       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							      ? 0U
							      : 
							     ((0x2003U 
							       == 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							       ? 1U
							       : 
							      ((0x1003U 
								== 
								(0x707fU 
								 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							        ? 1U
							        : 
							       ((3U 
								 == 
								 (0x707fU 
								  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
								 ? 1U
								 : (IData)(vlTOPp->Tile__DOT__control__DOT___T_812))))))))))))))));
    vlTOPp->io_id_rs1_out = vlTOPp->Tile__DOT__regfile_io_rs1_out;
    vlTOPp->io_id_rs2_out = vlTOPp->Tile__DOT__regfile_io_rs2_out;
    vlTOPp->Tile__DOT__control__DOT___T_523 = ((0x6013U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       | ((0x4013U 
						   == 
						   (0x707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  | ((0x1033U 
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
							       == 
							       (0xfe00707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							      | ((0x5013U 
								  == 
								  (0xfe00707fU 
								   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								 | ((0x40005013U 
								     == 
								     (0xfe00707fU 
								      & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								    | ((0x2033U 
									!= 
									(0xfe00707fU 
									 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								       & ((0x3033U 
									   != 
									   (0xfe00707fU 
									    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									  & ((0x2013U 
									      == 
									      (0x707fU 
									       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									     | ((0x3013U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x2003U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x1003U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((3U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x5003U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x4003U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| (IData)(vlTOPp->Tile__DOT__control__DOT___T_506))))))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_713 = ((0x6013U 
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
									  & ((0x2013U 
									      != 
									      (0x707fU 
									       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									     & ((0x3013U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x2003U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x1003U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((3U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x5003U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x4003U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& (IData)(vlTOPp->Tile__DOT__control__DOT___T_506))))))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_590 = ((0x3033U 
						!= 
						(0xfe00707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       & ((0x2013U 
						   != 
						   (0x707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  & ((0x3013U 
						      != 
						      (0x707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						     & ((0x2003U 
							 != 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							& ((0x1003U 
							    != 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							   & ((3U 
							       != 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							      & ((0x5003U 
								  != 
								  (0x707fU 
								   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								 & ((0x4003U 
								     != 
								     (0x707fU 
								      & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								    & ((0x2023U 
									!= 
									(0x707fU 
									 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								       & ((0x1023U 
									   != 
									   (0x707fU 
									    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									  & ((0x23U 
									      != 
									      (0x707fU 
									       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									     & ((0x63U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x1063U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x4063U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x5063U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x6063U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x7063U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| (IData)(vlTOPp->Tile__DOT__control__DOT___T_573))))))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_856 = ((0x3033U 
						!= 
						(0xfe00707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       & ((0x2013U 
						   != 
						   (0x707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  & ((0x3013U 
						      != 
						      (0x707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						     & ((0x2003U 
							 != 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							& ((0x1003U 
							    != 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							   & ((3U 
							       != 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							      & ((0x5003U 
								  != 
								  (0x707fU 
								   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								 & ((0x4003U 
								     != 
								     (0x707fU 
								      & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								    & ((0x2023U 
									!= 
									(0x707fU 
									 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								       & ((0x1023U 
									   != 
									   (0x707fU 
									    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									  & ((0x23U 
									      != 
									      (0x707fU 
									       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									     & ((0x63U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x1063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x4063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x5063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x6063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x7063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& (IData)(vlTOPp->Tile__DOT__control__DOT___T_573))))))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_677 = ((0x13U 
						!= 
						(0x707fU 
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
										& ((0x2013U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x3013U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x2003U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x1003U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((3U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| (IData)(vlTOPp->Tile__DOT__control__DOT___T_660))))))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_791 = ((0x13U 
						!= 
						(0x707fU 
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
										& ((0x2013U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x3013U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x2003U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x1003U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((3U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& (IData)(vlTOPp->Tile__DOT__control__DOT___T_660))))))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_485 = ((0x6013U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					        ? 2U
					        : (
						   (0x4013U 
						    == 
						    (0x707fU 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						    ? 2U
						    : 
						   ((0x1033U 
						     == 
						     (0xfe00707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						     ? 1U
						     : 
						    ((0x5033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						      ? 1U
						      : 
						     ((0x40005033U 
						       == 
						       (0xfe00707fU 
							& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						       ? 1U
						       : 
						      ((0x1013U 
							== 
							(0xfe00707fU 
							 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						        ? 2U
						        : 
						       ((0x5013U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							 ? 2U
							 : 
							((0x40005013U 
							  == 
							  (0xfe00707fU 
							   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							  ? 2U
							  : 
							 ((0x2033U 
							   == 
							   (0xfe00707fU 
							    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							   ? 1U
							   : 
							  ((0x3033U 
							    == 
							    (0xfe00707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							    ? 1U
							    : 
							   ((0x2013U 
							     == 
							     (0x707fU 
							      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							     ? 2U
							     : 
							    ((0x3013U 
							      == 
							      (0x707fU 
							       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							      ? 2U
							      : 
							     ((0x2003U 
							       == 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							       ? 2U
							       : 
							      ((0x1003U 
								== 
								(0x707fU 
								 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							        ? 2U
							        : 
							       ((3U 
								 == 
								 (0x707fU 
								  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
								 ? 2U
								 : (IData)(vlTOPp->Tile__DOT__control__DOT___T_470))))))))))))))));
    vlTOPp->Tile__DOT__datapath__DOT___T_142 = (VL_ULL(0x3ffffffff) 
						& ((QData)((IData)(vlTOPp->Tile__DOT__datapath__DOT___T_140)) 
						   + 
						   (((2U 
						      == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__imm_sel)) 
						     & (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__jump_type))
						     ? (QData)((IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__imm))
						     : 
						    ((QData)((IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__imm)) 
						     << 1U))));
    vlTOPp->Tile__DOT__alu__DOT___T_1060 = (vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src 
					    == vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src);
    vlTOPp->Tile__DOT__alu__DOT___T_1036 = VL_LTS_III(1,32,32, vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src, vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src);
    vlTOPp->Tile__DOT__alu__DOT___T_1037 = (vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src 
					    < vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src);
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1486 
	= ((0x3033U != (0xfe00707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
	   & ((0x2013U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
	      & ((0x3013U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		 & ((0x2003U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		    & ((0x1003U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		       & ((3U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
			  & ((0x5003U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
			     & ((0x4003U != (0x707fU 
					     & vlTOPp->Tile__DOT__instcache_io_inst)) 
				& ((0x2023U != (0x707fU 
						& vlTOPp->Tile__DOT__instcache_io_inst)) 
				   & ((0x1023U != (0x707fU 
						   & vlTOPp->Tile__DOT__instcache_io_inst)) 
				      & ((0x23U != 
					  (0x707fU 
					   & vlTOPp->Tile__DOT__instcache_io_inst)) 
					 & ((0x63U 
					     == (0x707fU 
						 & vlTOPp->Tile__DOT__instcache_io_inst)) 
					    | ((0x1063U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__instcache_io_inst)) 
					       | ((0x4063U 
						   == 
						   (0x707fU 
						    & vlTOPp->Tile__DOT__instcache_io_inst)) 
						  | ((0x5063U 
						      == 
						      (0x707fU 
						       & vlTOPp->Tile__DOT__instcache_io_inst)) 
						     | ((0x6063U 
							 == 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__instcache_io_inst)) 
							| ((0x7063U 
							    == 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__instcache_io_inst)) 
							   | (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1469))))))))))))))))));
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1752 
	= ((0x3033U != (0xfe00707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
	   & ((0x2013U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
	      & ((0x3013U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		 & ((0x2003U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		    & ((0x1003U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		       & ((3U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
			  & ((0x5003U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
			     & ((0x4003U != (0x707fU 
					     & vlTOPp->Tile__DOT__instcache_io_inst)) 
				& ((0x2023U != (0x707fU 
						& vlTOPp->Tile__DOT__instcache_io_inst)) 
				   & ((0x1023U != (0x707fU 
						   & vlTOPp->Tile__DOT__instcache_io_inst)) 
				      & ((0x23U != 
					  (0x707fU 
					   & vlTOPp->Tile__DOT__instcache_io_inst)) 
					 & ((0x63U 
					     != (0x707fU 
						 & vlTOPp->Tile__DOT__instcache_io_inst)) 
					    & ((0x1063U 
						!= 
						(0x707fU 
						 & vlTOPp->Tile__DOT__instcache_io_inst)) 
					       & ((0x4063U 
						   != 
						   (0x707fU 
						    & vlTOPp->Tile__DOT__instcache_io_inst)) 
						  & ((0x5063U 
						      != 
						      (0x707fU 
						       & vlTOPp->Tile__DOT__instcache_io_inst)) 
						     & ((0x6063U 
							 != 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__instcache_io_inst)) 
							& ((0x7063U 
							    != 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__instcache_io_inst)) 
							   & (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1469))))))))))))))))));
    vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel = ((0x33U 
						   == 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						   ? 1U
						   : 
						  ((0x40000033U 
						    == 
						    (0xfe00707fU 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						    ? 1U
						    : 
						   ((0x7033U 
						     == 
						     (0xfe00707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						     ? 1U
						     : 
						    ((0x6033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						      ? 1U
						      : 
						     ((0x4033U 
						       == 
						       (0xfe00707fU 
							& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						       ? 1U
						       : 
						      ((0x13U 
							== 
							(0x707fU 
							 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						        ? 2U
						        : 
						       ((0x7013U 
							 == 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							 ? 2U
							 : (IData)(vlTOPp->Tile__DOT__control__DOT___T_485))))))));
    VL_EXTEND_WQ(95,33, __Vtemp3, (VL_ULL(0x1ffffffff) 
				   & ((QData)((IData)(vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src)) 
				      + (QData)((IData)(vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src)))));
    VL_EXTEND_WQ(95,33, __Vtemp4, (VL_ULL(0x1ffffffff) 
				   & ((QData)((IData)(vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src)) 
				      - (QData)((IData)(vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src)))));
    VL_EXTEND_WI(95,32, __Vtemp5, (vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src 
				   & vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src));
    VL_EXTEND_WI(95,32, __Vtemp6, (vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src 
				   | vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src));
    VL_EXTEND_WI(95,32, __Vtemp7, (vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src 
				   ^ vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src));
    VL_EXTEND_WI(95,32, __Vtemp8, vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src);
    VL_SHIFTL_WWI(95,95,6, __Vtemp9, __Vtemp8, (0x3fU 
						& vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src));
    VL_EXTEND_WI(95,32, __Vtemp10, ((6U == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
				     ? ((0x1fU >= (0x3fU 
						   & vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src))
					 ? (vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src 
					    >> (0x3fU 
						& vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src))
					 : 0U) : ((7U 
						   == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						   ? 
						  ((0x1fU 
						    >= 
						    (0x3fU 
						     & vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src))
						    ? 
						   VL_SHIFTRS_III(32,32,6, vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src, 
								  (0x3fU 
								   & vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src))
						    : 
						   VL_NEGATE_I(
							       (vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src 
								>> 0x1fU)))
						   : 
						  ((8U 
						    == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						    ? (IData)(vlTOPp->Tile__DOT__alu__DOT___T_1036)
						    : 
						   ((9U 
						     == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						     ? (IData)(vlTOPp->Tile__DOT__alu__DOT___T_1037)
						     : vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src)))));
    vlTOPp->Tile__DOT__alu__DOT___T_1057[0U] = ((0U 
						 == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						 ? 
						__Vtemp3[0U]
						 : 
						((1U 
						  == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						  ? 
						 __Vtemp4[0U]
						  : 
						 ((2U 
						   == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						   ? 
						  __Vtemp5[0U]
						   : 
						  ((3U 
						    == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						    ? 
						   __Vtemp6[0U]
						    : 
						   ((4U 
						     == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						     ? 
						    __Vtemp7[0U]
						     : 
						    ((5U 
						      == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						      ? 
						     __Vtemp9[0U]
						      : 
						     __Vtemp10[0U]))))));
    vlTOPp->Tile__DOT__alu__DOT___T_1057[1U] = ((0U 
						 == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						 ? 
						__Vtemp3[1U]
						 : 
						((1U 
						  == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						  ? 
						 __Vtemp4[1U]
						  : 
						 ((2U 
						   == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						   ? 
						  __Vtemp5[1U]
						   : 
						  ((3U 
						    == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						    ? 
						   __Vtemp6[1U]
						    : 
						   ((4U 
						     == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						     ? 
						    __Vtemp7[1U]
						     : 
						    ((5U 
						      == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						      ? 
						     __Vtemp9[1U]
						      : 
						     __Vtemp10[1U]))))));
    vlTOPp->Tile__DOT__alu__DOT___T_1057[2U] = (0x7fffffffU 
						& ((0U 
						    == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						    ? 
						   __Vtemp3[2U]
						    : 
						   ((1U 
						     == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						     ? 
						    __Vtemp4[2U]
						     : 
						    ((2U 
						      == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						      ? 
						     __Vtemp5[2U]
						      : 
						     ((3U 
						       == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						       ? 
						      __Vtemp6[2U]
						       : 
						      ((4U 
							== (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						        ? 
						       __Vtemp7[2U]
						        : 
						       ((5U 
							 == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
							 ? 
							__Vtemp9[2U]
							 : 
							__Vtemp10[2U])))))));
    vlTOPp->Tile__DOT__alu_io_conflag = ((0xaU == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
					  ? (IData)(vlTOPp->Tile__DOT__alu__DOT___T_1060)
					  : ((0xbU 
					      == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
					      ? (IData)(vlTOPp->Tile__DOT__alu__DOT___T_1060)
					      : ((0xcU 
						  == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						  ? (IData)(vlTOPp->Tile__DOT__alu__DOT___T_1036)
						  : 
						 ((0xdU 
						   == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						   ? 
						  VL_GTES_III(1,32,32, vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src, vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src)
						   : 
						  ((0xeU 
						    == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						    ? (IData)(vlTOPp->Tile__DOT__alu__DOT___T_1037)
						    : 
						   ((0xfU 
						     == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop)) 
						    & (vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src 
						       >= vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src)))))));
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1776 
	= (((0x33U != (0xfe00707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
	    & ((0x40000033U != (0xfe00707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
	       & ((0x7033U != (0xfe00707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		  & ((0x6033U != (0xfe00707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		     & ((0x4033U != (0xfe00707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
			& ((0x13U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
			   & ((0x7013U != (0x707fU 
					   & vlTOPp->Tile__DOT__instcache_io_inst)) 
			      & ((0x6013U != (0x707fU 
					      & vlTOPp->Tile__DOT__instcache_io_inst)) 
				 & ((0x4013U != (0x707fU 
						 & vlTOPp->Tile__DOT__instcache_io_inst)) 
				    & ((0x1033U != 
					(0xfe00707fU 
					 & vlTOPp->Tile__DOT__instcache_io_inst)) 
				       & ((0x5033U 
					   != (0xfe00707fU 
					       & vlTOPp->Tile__DOT__instcache_io_inst)) 
					  & ((0x40005033U 
					      != (0xfe00707fU 
						  & vlTOPp->Tile__DOT__instcache_io_inst)) 
					     & ((0x1013U 
						 != 
						 (0xfe00707fU 
						  & vlTOPp->Tile__DOT__instcache_io_inst)) 
						& ((0x5013U 
						    != 
						    (0xfe00707fU 
						     & vlTOPp->Tile__DOT__instcache_io_inst)) 
						   & ((0x40005013U 
						       != 
						       (0xfe00707fU 
							& vlTOPp->Tile__DOT__instcache_io_inst)) 
						      & ((0x2033U 
							  != 
							  (0xfe00707fU 
							   & vlTOPp->Tile__DOT__instcache_io_inst)) 
							 & (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1486))))))))))))))))) 
	   & (~ ((0x33U != (0xfe00707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		 & ((0x40000033U != (0xfe00707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		    & ((0x7033U != (0xfe00707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		       & ((0x6033U != (0xfe00707fU 
				       & vlTOPp->Tile__DOT__instcache_io_inst)) 
			  & ((0x4033U != (0xfe00707fU 
					  & vlTOPp->Tile__DOT__instcache_io_inst)) 
			     & ((0x13U != (0x707fU 
					   & vlTOPp->Tile__DOT__instcache_io_inst)) 
				& ((0x7013U != (0x707fU 
						& vlTOPp->Tile__DOT__instcache_io_inst)) 
				   & ((0x6013U != (0x707fU 
						   & vlTOPp->Tile__DOT__instcache_io_inst)) 
				      & ((0x4013U != 
					  (0x707fU 
					   & vlTOPp->Tile__DOT__instcache_io_inst)) 
					 & ((0x1033U 
					     != (0xfe00707fU 
						 & vlTOPp->Tile__DOT__instcache_io_inst)) 
					    & ((0x5033U 
						!= 
						(0xfe00707fU 
						 & vlTOPp->Tile__DOT__instcache_io_inst)) 
					       & ((0x40005033U 
						   != 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__instcache_io_inst)) 
						  & ((0x1013U 
						      != 
						      (0xfe00707fU 
						       & vlTOPp->Tile__DOT__instcache_io_inst)) 
						     & ((0x5013U 
							 != 
							 (0xfe00707fU 
							  & vlTOPp->Tile__DOT__instcache_io_inst)) 
							& ((0x40005013U 
							    != 
							    (0xfe00707fU 
							     & vlTOPp->Tile__DOT__instcache_io_inst)) 
							   & ((0x2033U 
							       != 
							       (0xfe00707fU 
								& vlTOPp->Tile__DOT__instcache_io_inst)) 
							      & (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1752)))))))))))))))))));
    vlTOPp->Tile__DOT__immgen__DOT___T_318 = ((2U == (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel))
					       ? ((0xfffff000U 
						   & (VL_NEGATE_I((IData)(
									  (1U 
									   & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
									      >> 0x1fU)))) 
						      << 0xcU)) 
						  | (0xfffU 
						     & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
							>> 0x14U)))
					       : ((3U 
						   == (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel))
						   ? 
						  ((0xfffff000U 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
									       >> 0x1fU)))) 
						       << 0xcU)) 
						   | ((0xfe0U 
						       & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
							  >> 0x14U)) 
						      | (0x1fU 
							 & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
							    >> 7U))))
						   : 
						  ((4U 
						    == (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel))
						    ? 
						   ((0xffffe000U 
						     & (VL_NEGATE_I((IData)(
									    (1U 
									     & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
										>> 0x1fU)))) 
							<< 0xdU)) 
						    | ((0x1000U 
							& (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
							   >> 0x13U)) 
						       | ((0x800U 
							   & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
							      << 4U)) 
							  | ((0x7e0U 
							      & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
								 >> 0x14U)) 
							     | (0x1eU 
								& (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
								   >> 7U))))))
						    : 
						   ((5U 
						     == (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel))
						     ? 
						    (0xfffff000U 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)
						     : 
						    ((6U 
						      == (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel))
						      ? 
						     ((0xffe00000U 
						       & (VL_NEGATE_I((IData)(
									      (1U 
									       & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
										>> 0x1fU)))) 
							  << 0x15U)) 
						      | ((0x100000U 
							  & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
							     >> 0xbU)) 
							 | ((0xff000U 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst) 
							    | ((0x800U 
								& (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
								   >> 9U)) 
							       | (0x7feU 
								  & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
								     >> 0x14U))))))
						      : 0U)))));
    vlTOPp->Tile__DOT__hazard_detection__DOT___T_1002 
	= ((((IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__mem_read) 
	     & (5U != (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel))) 
	    & (6U != (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel))) 
	   & ((0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
			>> 0xfU)) == (0x1fU & (vlTOPp->Tile__DOT__id_ex_register__DOT__inst 
					       >> 7U))));
    vlTOPp->Tile__DOT__hazard_detection__DOT___T_1009 
	= (((IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__mem_read) 
	    & ((1U == (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel)) 
	       | (4U == (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel)))) 
	   & ((0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
			>> 0x14U)) == (0x1fU & (vlTOPp->Tile__DOT__id_ex_register__DOT__inst 
						>> 7U))));
    vlTOPp->io_ex_alu_sum = vlTOPp->Tile__DOT__alu__DOT___T_1057[0U];
    vlTOPp->io_ex_alu_conflag = vlTOPp->Tile__DOT__alu_io_conflag;
    vlTOPp->Tile__DOT__datapath_io_ex_io_PC_Src = (
						   ((IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__jump_type) 
						    | (IData)(vlTOPp->Tile__DOT__alu_io_conflag)) 
						   & (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__branch));
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer_io_record 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1776) 
	   & ((2U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status)) 
	      | (3U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))));
    vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010 
	= ((IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1002) 
	   | (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1009));
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1807 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1782)
	    ? ((IData)(vlTOPp->Tile__DOT__datapath_io_ex_io_PC_Src)
	        ? ((0U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
		    ? 1U : ((1U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
			     ? 3U : ((3U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
				      ? 2U : ((2U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
					       ? 2U
					       : (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status)))))
	        : ((0U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
		    ? 0U : ((1U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
			     ? 0U : ((3U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
				      ? 1U : ((2U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
					       ? 3U
					       : (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))))))
	    : (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status));
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1137 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer_io_record)
	    ? ((0U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131)) 
	       | vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
	       [0U]) : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
	   [0U]);
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1143 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer_io_record)
	    ? ((1U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131)) 
	       | vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
	       [1U]) : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
	   [1U]);
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1149 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer_io_record)
	    ? ((2U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131)) 
	       | vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
	       [2U]) : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
	   [2U]);
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1210 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer_io_record)
	    ? ((0U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131))
	        ? ((IData)(4U) + vlTOPp->Tile__DOT__pc__DOT__pc_reg)
	        : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
	       [0U]) : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
	   [0U]);
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1222 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer_io_record)
	    ? ((1U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131))
	        ? ((IData)(4U) + vlTOPp->Tile__DOT__pc__DOT__pc_reg)
	        : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
	       [1U]) : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
	   [1U]);
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1234 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer_io_record)
	    ? ((2U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131))
	        ? ((IData)(4U) + vlTOPp->Tile__DOT__pc__DOT__pc_reg)
	        : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
	       [2U]) : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
	   [2U]);
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1811 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1782) 
	   & ((3U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1807)) 
	      | (1U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1807))));
    vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1779) 
	   | (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1811));
    vlTOPp->Tile__DOT__branch_predictor_io_PC_Sel = 
	((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1779)
	  ? ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1779)
	      ? 2U : 0U) : (((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1782) 
			     & (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1811))
			     ? ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1811)
				 ? (((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1811) 
				     & (((3U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1807)) 
					 & (2U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))) 
					| ((1U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1807)) 
					   & (3U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status)))))
				     ? 1U : 2U) : 0U)
			     : ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1776)
				 ? ((0U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
				     ? 0U : ((1U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
					      ? 0U : 
					     ((3U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
					       ? 2U
					       : ((2U 
						   == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
						   ? 2U
						   : 0U))))
				 : 0U)));
    vlTOPp->Tile__DOT__datapath__DOT___T_156 = (VL_ULL(0x1ffffffff) 
						& ((0U 
						    == (IData)(vlTOPp->Tile__DOT__branch_predictor_io_PC_Sel))
						    ? 
						   (VL_ULL(4) 
						    + (QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))
						    : (QData)((IData)(
								      ((2U 
									== (IData)(vlTOPp->Tile__DOT__branch_predictor_io_PC_Sel))
								        ? (IData)(
										(VL_ULL(0x1ffffffff) 
										& ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1779)
										 ? (QData)((IData)(vlTOPp->Tile__DOT__datapath__DOT___T_142))
										 : 
										((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1782)
										 ? (QData)((IData)(vlTOPp->Tile__DOT__datapath__DOT___T_142))
										 : 
										((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1776)
										 ? 
										(VL_EXTENDS_QI(33,32, vlTOPp->Tile__DOT__pc__DOT__pc_reg) 
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
										 : VL_ULL(0))))))
								        : 
								       ((1U 
									 == (IData)(vlTOPp->Tile__DOT__branch_predictor_io_PC_Sel))
									 ? 
									((vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
									  [0U] 
									  > 
									  vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
									  [1U])
									  ? 
									 ((vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
									   [0U] 
									   > 
									   vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
									   [2U])
									   ? 
									  vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
									  [0U]
									   : 
									  vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
									  [2U])
									  : 
									 ((vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
									   [1U] 
									   > 
									   vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
									   [2U])
									   ? 
									  vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
									  [1U]
									   : 
									  vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
									  [2U]))
									 : 0U))))));
    vlTOPp->io_if_next_pc = (IData)(vlTOPp->Tile__DOT__datapath__DOT___T_156);
}

void VTile::_settle__TOP__3(VTile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile::_settle__TOP__3\n"); );
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp25,95,0,3);
    VL_SIGW(__Vtemp26,95,0,3);
    VL_SIGW(__Vtemp27,95,0,3);
    VL_SIGW(__Vtemp28,95,0,3);
    VL_SIGW(__Vtemp29,95,0,3);
    VL_SIGW(__Vtemp30,95,0,3);
    VL_SIGW(__Vtemp31,95,0,3);
    VL_SIGW(__Vtemp32,95,0,3);
    // Body
    vlTOPp->io_ex_rs1_out = vlTOPp->Tile__DOT__id_ex_register__DOT__rs1_out;
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1783 
	= (2U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status));
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1784 
	= (3U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status));
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1794 
	= (1U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status));
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1796 
	= (0U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status));
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1177 
	= (7U & ((2U == vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
		  [0U]) ? 0U : (vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
				[0U] ? ((IData)(1U) 
					+ vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
					[0U]) : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
				[0U])));
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1188 
	= (7U & ((2U == vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
		  [1U]) ? 0U : (vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
				[1U] ? ((IData)(1U) 
					+ vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
					[1U]) : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
				[1U])));
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1199 
	= (7U & ((2U == vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
		  [2U]) ? 0U : (vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
				[2U] ? ((IData)(1U) 
					+ vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
					[2U]) : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
				[2U])));
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131 
	= (vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
	   [0U] ? (vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
		   [1U] ? 2U : 1U) : 0U);
    vlTOPp->Tile__DOT__datacache__DOT___T_1876 = (((IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__data_size) 
						   << 1U) 
						  | (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__load_type));
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1779 
	= ((IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__branch) 
	   & (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__jump_type));
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1782 
	= ((IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__branch) 
	   & (~ (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__jump_type)));
    vlTOPp->Tile__DOT__datapath_io_wb_io_wb_reg_writedata 
	= ((0U == (IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__mem_to_reg))
	    ? vlTOPp->Tile__DOT__mem_wb_register__DOT__alu_sum
	    : ((1U == (IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__mem_to_reg))
	        ? vlTOPp->Tile__DOT__mem_wb_register__DOT__dataout
	        : ((2U == (IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__mem_to_reg))
		    ? vlTOPp->Tile__DOT__mem_wb_register__DOT__pc_4
		    : ((3U == (IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__mem_to_reg))
		        ? vlTOPp->Tile__DOT__mem_wb_register__DOT__imm
		        : ((4U == (IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__mem_to_reg))
			    ? vlTOPp->Tile__DOT__mem_wb_register__DOT__aui_pc
			    : vlTOPp->Tile__DOT__mem_wb_register__DOT__alu_sum)))));
    vlTOPp->io_ex_rs2_out = vlTOPp->Tile__DOT__id_ex_register__DOT__rs2_out;
    vlTOPp->io_mem_alu_sum = vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum;
    vlTOPp->io_wb_rd = vlTOPp->Tile__DOT__mem_wb_register__DOT__rd;
    vlTOPp->Tile__DOT__forward_io_MemWrite_Src = (((IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__reg_write) 
						   & (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_write)) 
						  & ((IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__rs2) 
						     == (IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__rd)));
    vlTOPp->Tile__DOT__datapath__DOT___T_188 = ((0U 
						 == (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_to_reg))
						 ? vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum
						 : 
						((2U 
						  == (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_to_reg))
						  ? vlTOPp->Tile__DOT__ex_mem_register__DOT__pc_4
						  : 
						 ((3U 
						   == (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_to_reg))
						   ? vlTOPp->Tile__DOT__ex_mem_register__DOT__imm
						   : 
						  ((4U 
						    == (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_to_reg))
						    ? vlTOPp->Tile__DOT__ex_mem_register__DOT__aui_pc
						    : 0U))));
    vlTOPp->Tile__DOT__forward__DOT___T_1976 = ((IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__reg_write) 
						& (0U 
						   != (IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__rd)));
    vlTOPp->io_mem_rd = vlTOPp->Tile__DOT__ex_mem_register__DOT__rd;
    vlTOPp->Tile__DOT__forward__DOT___T_1971 = ((IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__reg_write) 
						& (0U 
						   != (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__rd)));
    vlTOPp->io_ex_rd = (0x1fU & (vlTOPp->Tile__DOT__id_ex_register__DOT__inst 
				 >> 7U));
    vlTOPp->io_if_pc_out = vlTOPp->Tile__DOT__pc__DOT__pc_reg;
    vlTOPp->io_id_rs1 = (0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				  >> 0xfU));
    vlTOPp->io_id_rs2 = (0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
				  >> 0x14U));
    vlTOPp->Tile__DOT__control__DOT___T_627 = ((0x2013U 
						!= 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       & ((0x3013U 
						   != 
						   (0x707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  & ((0x2003U 
						      != 
						      (0x707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						     & ((0x1003U 
							 != 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							& ((3U 
							    != 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							   & ((0x5003U 
							       != 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							      & ((0x4003U 
								  != 
								  (0x707fU 
								   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								 & ((0x2023U 
								     != 
								     (0x707fU 
								      & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								    & ((0x1023U 
									!= 
									(0x707fU 
									 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								       & ((0x23U 
									   != 
									   (0x707fU 
									    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									  & ((0x63U 
									      != 
									      (0x707fU 
									       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									     & ((0x1063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x4063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x5063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x6063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x7063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x6fU 
										!= 
										(0x7fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& (0x67U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)))))))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_746 = ((0x1013U 
						== 
						(0xfe00707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					        ? 0U
					        : (
						   (0x5013U 
						    == 
						    (0xfe00707fU 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						    ? 0U
						    : 
						   ((0x40005013U 
						     == 
						     (0xfe00707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						     ? 0U
						     : 
						    ((0x2033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						      ? 0U
						      : 
						     ((0x3033U 
						       == 
						       (0xfe00707fU 
							& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						       ? 0U
						       : 
						      ((0x2013U 
							== 
							(0x707fU 
							 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						        ? 0U
						        : 
						       ((0x3013U 
							 == 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							 ? 0U
							 : 
							((0x2003U 
							  == 
							  (0x707fU 
							   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							  ? 0U
							  : 
							 ((0x1003U 
							   == 
							   (0x707fU 
							    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							   ? 1U
							   : 
							  ((3U 
							    == 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							    ? 2U
							    : 
							   ((0x5003U 
							     == 
							     (0x707fU 
							      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							     ? 1U
							     : 
							    ((0x4003U 
							      == 
							      (0x707fU 
							       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							      ? 2U
							      : 
							     ((0x2023U 
							       == 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							       ? 0U
							       : 
							      ((0x1023U 
								== 
								(0x707fU 
								 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							        ? 1U
							        : 
							       ((0x23U 
								 == 
								 (0x707fU 
								  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
								 ? 2U
								 : 0U)))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_435 = ((0x2003U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       | ((0x1003U 
						   == 
						   (0x707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  | ((3U 
						      == 
						      (0x707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						     | ((0x5003U 
							 == 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							| ((0x4003U 
							    == 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							   | ((0x2023U 
							       != 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							      & ((0x1023U 
								  != 
								  (0x707fU 
								   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								 & ((0x23U 
								     != 
								     (0x707fU 
								      & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								    & ((0x63U 
									!= 
									(0x707fU 
									 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								       & ((0x1063U 
									   != 
									   (0x707fU 
									    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									  & ((0x4063U 
									      != 
									      (0x707fU 
									       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									     & ((0x5063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x6063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x7063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x6fU 
										== 
										(0x7fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x67U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x37U 
										== 
										(0x7fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| (0x17U 
										== 
										(0x7fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)))))))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_546 = ((0x5003U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					        ? 0U
					        : (
						   (0x4003U 
						    == 
						    (0x707fU 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						    ? 0U
						    : 
						   ((0x2023U 
						     == 
						     (0x707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						     ? 0U
						     : 
						    ((0x1023U 
						      == 
						      (0x707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						      ? 0U
						      : 
						     ((0x23U 
						       == 
						       (0x707fU 
							& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						       ? 0U
						       : 
						      ((0x63U 
							== 
							(0x707fU 
							 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						        ? 0xaU
						        : 
						       ((0x1063U 
							 == 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							 ? 0xbU
							 : 
							((0x4063U 
							  == 
							  (0x707fU 
							   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							  ? 0xcU
							  : 
							 ((0x5063U 
							   == 
							   (0x707fU 
							    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							   ? 0xdU
							   : 
							  ((0x6063U 
							    == 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							    ? 0xeU
							    : 
							   ((0x7063U 
							     == 
							     (0x707fU 
							      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							     ? 0xfU
							     : 
							    ((0x6fU 
							      == 
							      (0x7fU 
							       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							      ? 0U
							      : 
							     ((0x67U 
							       == 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							       ? 0U
							       : 
							      ((0x37U 
								== 
								(0x7fU 
								 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							        ? 0U
							        : 
							       ((0x17U 
								 == 
								 (0x7fU 
								  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
								 ? 0U
								 : 0x10U)))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_812 = ((0x5003U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					        ? 1U
					        : (
						   (0x4003U 
						    == 
						    (0x707fU 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						    ? 1U
						    : 
						   ((0x2023U 
						     == 
						     (0x707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						     ? 0U
						     : 
						    ((0x1023U 
						      == 
						      (0x707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						      ? 0U
						      : 
						     ((0x23U 
						       == 
						       (0x707fU 
							& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						       ? 0U
						       : 
						      ((0x63U 
							== 
							(0x707fU 
							 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						        ? 0U
						        : 
						       ((0x1063U 
							 == 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							 ? 0U
							 : 
							((0x4063U 
							  == 
							  (0x707fU 
							   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							  ? 0U
							  : 
							 ((0x5063U 
							   == 
							   (0x707fU 
							    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							   ? 0U
							   : 
							  ((0x6063U 
							    == 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							    ? 0U
							    : 
							   ((0x7063U 
							     == 
							     (0x707fU 
							      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							     ? 0U
							     : 
							    ((0x6fU 
							      == 
							      (0x7fU 
							       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							      ? 2U
							      : 
							     ((0x67U 
							       == 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							       ? 2U
							       : 
							      ((0x37U 
								== 
								(0x7fU 
								 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							        ? 3U
							        : 
							       ((0x17U 
								 == 
								 (0x7fU 
								  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
								 ? 4U
								 : 0U)))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_506 = ((0x2023U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       | ((0x1023U 
						   == 
						   (0x707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  | (0x23U 
						     == 
						     (0x707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))));
    vlTOPp->Tile__DOT__control__DOT___T_573 = ((0x6fU 
						== 
						(0x7fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       | (0x67U 
						  == 
						  (0x707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)));
    vlTOPp->Tile__DOT__control__DOT___T_660 = ((0x5003U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       | (0x4003U 
						  == 
						  (0x707fU 
						   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)));
    vlTOPp->Tile__DOT__control__DOT___T_470 = ((0x5003U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					        ? 2U
					        : (
						   (0x4003U 
						    == 
						    (0x707fU 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						    ? 2U
						    : 
						   ((0x2023U 
						     == 
						     (0x707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						     ? 3U
						     : 
						    ((0x1023U 
						      == 
						      (0x707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						      ? 3U
						      : 
						     ((0x23U 
						       == 
						       (0x707fU 
							& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						       ? 3U
						       : 
						      ((0x63U 
							== 
							(0x707fU 
							 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						        ? 4U
						        : 
						       ((0x1063U 
							 == 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							 ? 4U
							 : 
							((0x4063U 
							  == 
							  (0x707fU 
							   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							  ? 4U
							  : 
							 ((0x5063U 
							   == 
							   (0x707fU 
							    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							   ? 4U
							   : 
							  ((0x6063U 
							    == 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							    ? 4U
							    : 
							   ((0x7063U 
							     == 
							     (0x707fU 
							      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							     ? 4U
							     : 
							    ((0x6fU 
							      == 
							      (0x7fU 
							       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							      ? 6U
							      : 
							     ((0x67U 
							       == 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							       ? 2U
							       : 
							      ((0x37U 
								== 
								(0x7fU 
								 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							        ? 5U
							        : 
							       ((0x17U 
								 == 
								 (0x7fU 
								  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
								 ? 5U
								 : 0U)))))))))))))));
    vlTOPp->Tile__DOT__instcache_io_inst = ((vlTOPp->Tile__DOT__instcache__DOT__cache
					     [(0x3ffU 
					       & vlTOPp->Tile__DOT__pc__DOT__pc_reg)] 
					     << 0x18U) 
					    | ((vlTOPp->Tile__DOT__instcache__DOT__cache
						[(0x3ffU 
						  & ((IData)(1U) 
						     + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))] 
						<< 0x10U) 
					       | ((vlTOPp->Tile__DOT__instcache__DOT__cache
						   [
						   (0x3ffU 
						    & ((IData)(2U) 
						       + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))] 
						   << 8U) 
						  | vlTOPp->Tile__DOT__instcache__DOT__cache
						  [
						  (0x3ffU 
						   & ((IData)(3U) 
						      + (IData)((QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))))])));
    vlTOPp->Tile__DOT__datacache__DOT___T_1902 = ((3U 
						   == (IData)(vlTOPp->Tile__DOT__datacache__DOT___T_1876))
						   ? (QData)((IData)(
								     (0xffffU 
								      & vlTOPp->Tile__DOT__datacache__DOT__cache
								      [
								      (0x1fU 
								       & (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
									  >> 2U))])))
						   : 
						  ((2U 
						    == (IData)(vlTOPp->Tile__DOT__datacache__DOT___T_1876))
						    ? 
						   (((QData)((IData)(
								     (0xffffU 
								      & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Tile__DOT__datacache__DOT__cache
										[
										(0x1fU 
										& (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
										>> 2U))] 
										>> 0xfU))))))) 
						     << 0x1fU) 
						    | (QData)((IData)(
								      ((0x7fff0000U 
									& (VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Tile__DOT__datacache__DOT__cache
										[
										(0x1fU 
										& (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
										>> 2U))] 
										>> 0xfU)))) 
									   << 0x10U)) 
								       | (0xffffU 
									  & vlTOPp->Tile__DOT__datacache__DOT__cache
									  [
									  (0x1fU 
									   & (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
									      >> 2U))])))))
						    : 
						   ((5U 
						     == (IData)(vlTOPp->Tile__DOT__datacache__DOT___T_1876))
						     ? (QData)((IData)(
								       (0xffU 
									& vlTOPp->Tile__DOT__datacache__DOT__cache
									[
									(0x1fU 
									 & (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
									    >> 2U))])))
						     : 
						    ((4U 
						      == (IData)(vlTOPp->Tile__DOT__datacache__DOT___T_1876))
						      ? 
						     (((QData)((IData)(
								       (0xffffffU 
									& VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Tile__DOT__datacache__DOT__cache
										[
										(0x1fU 
										& (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
										>> 2U))] 
										>> 7U))))))) 
						       << 0xfU) 
						      | (QData)((IData)(
									((0x7f00U 
									  & (VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Tile__DOT__datacache__DOT__cache
										[
										(0x1fU 
										& (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
										>> 2U))] 
										>> 7U)))) 
									     << 8U)) 
									 | (0xffU 
									    & vlTOPp->Tile__DOT__datacache__DOT__cache
									    [
									    (0x1fU 
									     & (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
										>> 2U))])))))
						      : (QData)((IData)(
									vlTOPp->Tile__DOT__datacache__DOT__cache
									[
									(0x1fU 
									 & (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
									    >> 2U))]))))));
    vlTOPp->io_wb_registerwrite = vlTOPp->Tile__DOT__datapath_io_wb_io_wb_reg_writedata;
    vlTOPp->Tile__DOT__regfile__DOT__regfile___05FT_273_data 
	= ((IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__reg_write)
	    ? ((0U == (IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__rd))
	        ? 0U : vlTOPp->Tile__DOT__datapath_io_wb_io_wb_reg_writedata)
	    : vlTOPp->Tile__DOT__regfile__DOT__regfile
	   [vlTOPp->Tile__DOT__mem_wb_register__DOT__rd]);
    vlTOPp->Tile__DOT__regfile_io_rs1_out = (((IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__reg_write) 
					      & ((0x1fU 
						  & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
						     >> 0xfU)) 
						 == (IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__rd)))
					      ? vlTOPp->Tile__DOT__datapath_io_wb_io_wb_reg_writedata
					      : vlTOPp->Tile__DOT__regfile__DOT__regfile
					     [(0x1fU 
					       & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
						  >> 0xfU))]);
    vlTOPp->Tile__DOT__regfile_io_rs2_out = (((IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__reg_write) 
					      & ((0x1fU 
						  & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
						     >> 0x14U)) 
						 == (IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__rd)))
					      ? vlTOPp->Tile__DOT__datapath_io_wb_io_wb_reg_writedata
					      : vlTOPp->Tile__DOT__regfile__DOT__regfile
					     [(0x1fU 
					       & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
						  >> 0x14U))]);
    vlTOPp->io_MemWrite_Src = vlTOPp->Tile__DOT__forward_io_MemWrite_Src;
    vlTOPp->Tile__DOT__datapath_io_mem_io_mem_writedata 
	= ((IData)(vlTOPp->Tile__DOT__forward_io_MemWrite_Src)
	    ? vlTOPp->Tile__DOT__datapath_io_wb_io_wb_reg_writedata
	    : vlTOPp->Tile__DOT__ex_mem_register__DOT__rs2_out);
    vlTOPp->Tile__DOT__forward__DOT___T_1973 = ((IData)(vlTOPp->Tile__DOT__forward__DOT___T_1971) 
						& ((IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__rd) 
						   == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__rs1)));
    vlTOPp->Tile__DOT__forward__DOT___T_1985 = ((IData)(vlTOPp->Tile__DOT__forward__DOT___T_1971) 
						& ((IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__rd) 
						   == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__rs2)));
    vlTOPp->Tile__DOT__control__DOT___T_452 = ((0x7033U 
						== 
						(0xfe00707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       | ((0x6033U 
						   == 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  | ((0x4033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						     | ((0x13U 
							 == 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							| ((0x7013U 
							    == 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							   | ((0x6013U 
							       == 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							      | ((0x4013U 
								  == 
								  (0x707fU 
								   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								 | ((0x1033U 
								     == 
								     (0xfe00707fU 
								      & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								    | ((0x5033U 
									== 
									(0xfe00707fU 
									 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								       | ((0x40005033U 
									   == 
									   (0xfe00707fU 
									    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									  | ((0x1013U 
									      == 
									      (0xfe00707fU 
									       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									     | ((0x5013U 
										== 
										(0xfe00707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x40005013U 
										== 
										(0xfe00707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x2033U 
										== 
										(0xfe00707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x3033U 
										== 
										(0xfe00707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x2013U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x3013U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| (IData)(vlTOPp->Tile__DOT__control__DOT___T_435))))))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_561 = ((0x6013U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					        ? 3U
					        : (
						   (0x4013U 
						    == 
						    (0x707fU 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						    ? 4U
						    : 
						   ((0x1033U 
						     == 
						     (0xfe00707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						     ? 5U
						     : 
						    ((0x5033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						      ? 6U
						      : 
						     ((0x40005033U 
						       == 
						       (0xfe00707fU 
							& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						       ? 7U
						       : 
						      ((0x1013U 
							== 
							(0xfe00707fU 
							 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						        ? 5U
						        : 
						       ((0x5013U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							 ? 6U
							 : 
							((0x40005013U 
							  == 
							  (0xfe00707fU 
							   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							  ? 7U
							  : 
							 ((0x2033U 
							   == 
							   (0xfe00707fU 
							    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							   ? 8U
							   : 
							  ((0x3033U 
							    == 
							    (0xfe00707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							    ? 9U
							    : 
							   ((0x2013U 
							     == 
							     (0x707fU 
							      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							     ? 8U
							     : 
							    ((0x3013U 
							      == 
							      (0x707fU 
							       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							      ? 9U
							      : 
							     ((0x2003U 
							       == 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							       ? 0U
							       : 
							      ((0x1003U 
								== 
								(0x707fU 
								 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							        ? 0U
							        : 
							       ((3U 
								 == 
								 (0x707fU 
								  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
								 ? 0U
								 : (IData)(vlTOPp->Tile__DOT__control__DOT___T_546))))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_827 = ((0x6013U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					        ? 0U
					        : (
						   (0x4013U 
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
						       : 
						      ((0x1013U 
							== 
							(0xfe00707fU 
							 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						        ? 0U
						        : 
						       ((0x5013U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							 ? 0U
							 : 
							((0x40005013U 
							  == 
							  (0xfe00707fU 
							   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							  ? 0U
							  : 
							 ((0x2033U 
							   == 
							   (0xfe00707fU 
							    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							   ? 0U
							   : 
							  ((0x3033U 
							    == 
							    (0xfe00707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							    ? 0U
							    : 
							   ((0x2013U 
							     == 
							     (0x707fU 
							      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							     ? 0U
							     : 
							    ((0x3013U 
							      == 
							      (0x707fU 
							       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							      ? 0U
							      : 
							     ((0x2003U 
							       == 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							       ? 1U
							       : 
							      ((0x1003U 
								== 
								(0x707fU 
								 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							        ? 1U
							        : 
							       ((3U 
								 == 
								 (0x707fU 
								  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
								 ? 1U
								 : (IData)(vlTOPp->Tile__DOT__control__DOT___T_812))))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_523 = ((0x6013U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       | ((0x4013U 
						   == 
						   (0x707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  | ((0x1033U 
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
							       == 
							       (0xfe00707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							      | ((0x5013U 
								  == 
								  (0xfe00707fU 
								   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								 | ((0x40005013U 
								     == 
								     (0xfe00707fU 
								      & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								    | ((0x2033U 
									!= 
									(0xfe00707fU 
									 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								       & ((0x3033U 
									   != 
									   (0xfe00707fU 
									    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									  & ((0x2013U 
									      == 
									      (0x707fU 
									       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									     | ((0x3013U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x2003U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x1003U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((3U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x5003U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x4003U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| (IData)(vlTOPp->Tile__DOT__control__DOT___T_506))))))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_713 = ((0x6013U 
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
									  & ((0x2013U 
									      != 
									      (0x707fU 
									       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									     & ((0x3013U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x2003U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x1003U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((3U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x5003U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x4003U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& (IData)(vlTOPp->Tile__DOT__control__DOT___T_506))))))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_590 = ((0x3033U 
						!= 
						(0xfe00707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       & ((0x2013U 
						   != 
						   (0x707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  & ((0x3013U 
						      != 
						      (0x707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						     & ((0x2003U 
							 != 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							& ((0x1003U 
							    != 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							   & ((3U 
							       != 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							      & ((0x5003U 
								  != 
								  (0x707fU 
								   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								 & ((0x4003U 
								     != 
								     (0x707fU 
								      & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								    & ((0x2023U 
									!= 
									(0x707fU 
									 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								       & ((0x1023U 
									   != 
									   (0x707fU 
									    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									  & ((0x23U 
									      != 
									      (0x707fU 
									       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									     & ((0x63U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x1063U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x4063U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x5063U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x6063U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x7063U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| (IData)(vlTOPp->Tile__DOT__control__DOT___T_573))))))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_856 = ((0x3033U 
						!= 
						(0xfe00707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
					       & ((0x2013U 
						   != 
						   (0x707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						  & ((0x3013U 
						      != 
						      (0x707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
						     & ((0x2003U 
							 != 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							& ((0x1003U 
							    != 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							   & ((3U 
							       != 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
							      & ((0x5003U 
								  != 
								  (0x707fU 
								   & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								 & ((0x4003U 
								     != 
								     (0x707fU 
								      & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								    & ((0x2023U 
									!= 
									(0x707fU 
									 & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
								       & ((0x1023U 
									   != 
									   (0x707fU 
									    & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									  & ((0x23U 
									      != 
									      (0x707fU 
									       & vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
									     & ((0x63U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x1063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x4063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x5063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x6063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x7063U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& (IData)(vlTOPp->Tile__DOT__control__DOT___T_573))))))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_677 = ((0x13U 
						!= 
						(0x707fU 
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
										& ((0x2013U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x3013U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x2003U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((0x1003U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| ((3U 
										== 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										| (IData)(vlTOPp->Tile__DOT__control__DOT___T_660))))))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_791 = ((0x13U 
						!= 
						(0x707fU 
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
										& ((0x2013U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x3013U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x2003U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((0x1003U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& ((3U 
										!= 
										(0x707fU 
										& vlTOPp->Tile__DOT__if_id_register__DOT__inst)) 
										& (IData)(vlTOPp->Tile__DOT__control__DOT___T_660))))))))))))))))));
    vlTOPp->Tile__DOT__control__DOT___T_485 = ((0x6013U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
					        ? 2U
					        : (
						   (0x4013U 
						    == 
						    (0x707fU 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						    ? 2U
						    : 
						   ((0x1033U 
						     == 
						     (0xfe00707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						     ? 1U
						     : 
						    ((0x5033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						      ? 1U
						      : 
						     ((0x40005033U 
						       == 
						       (0xfe00707fU 
							& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						       ? 1U
						       : 
						      ((0x1013U 
							== 
							(0xfe00707fU 
							 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						        ? 2U
						        : 
						       ((0x5013U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							 ? 2U
							 : 
							((0x40005013U 
							  == 
							  (0xfe00707fU 
							   & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							  ? 2U
							  : 
							 ((0x2033U 
							   == 
							   (0xfe00707fU 
							    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							   ? 1U
							   : 
							  ((0x3033U 
							    == 
							    (0xfe00707fU 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							    ? 1U
							    : 
							   ((0x2013U 
							     == 
							     (0x707fU 
							      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							     ? 2U
							     : 
							    ((0x3013U 
							      == 
							      (0x707fU 
							       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							      ? 2U
							      : 
							     ((0x2003U 
							       == 
							       (0x707fU 
								& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							       ? 2U
							       : 
							      ((0x1003U 
								== 
								(0x707fU 
								 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							        ? 2U
							        : 
							       ((3U 
								 == 
								 (0x707fU 
								  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
								 ? 2U
								 : (IData)(vlTOPp->Tile__DOT__control__DOT___T_470))))))))))))))));
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1469 
	= ((0x6fU == (0x7fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
	   | (0x67U == (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)));
    vlTOPp->Tile__DOT__datacache__DOT___T_1910 = ((IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_read)
						   ? 
						  ((1U 
						    == (IData)(vlTOPp->Tile__DOT__datacache__DOT___T_1876))
						    ? (QData)((IData)(
								      vlTOPp->Tile__DOT__datacache__DOT__cache
								      [
								      (0x1fU 
								       & (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
									  >> 2U))]))
						    : vlTOPp->Tile__DOT__datacache__DOT___T_1902)
						   : VL_ULL(0));
    vlTOPp->io_id_rs1_out = vlTOPp->Tile__DOT__regfile_io_rs1_out;
    vlTOPp->io_id_rs2_out = vlTOPp->Tile__DOT__regfile_io_rs2_out;
    vlTOPp->io_mem_writedata = vlTOPp->Tile__DOT__datapath_io_mem_io_mem_writedata;
    vlTOPp->Tile__DOT__datacache__DOT__cache___05FT_1905_data 
	= ((IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__mem_write)
	    ? ((0U == (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__data_size))
	        ? vlTOPp->Tile__DOT__datapath_io_mem_io_mem_writedata
	        : ((1U == (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__data_size))
		    ? (0xffffU & vlTOPp->Tile__DOT__datapath_io_mem_io_mem_writedata)
		    : ((2U == (IData)(vlTOPp->Tile__DOT__ex_mem_register__DOT__data_size))
		        ? (0xffU & vlTOPp->Tile__DOT__datapath_io_mem_io_mem_writedata)
		        : vlTOPp->Tile__DOT__datapath_io_mem_io_mem_writedata)))
	    : vlTOPp->Tile__DOT__datacache__DOT__cache
	   [(0x1fU & (vlTOPp->Tile__DOT__ex_mem_register__DOT__alu_sum 
		      >> 2U))]);
    vlTOPp->Tile__DOT__forward_io_Forward_A = (((IData)(vlTOPp->Tile__DOT__forward__DOT___T_1973) 
						<< 1U) 
					       | (((IData)(vlTOPp->Tile__DOT__forward__DOT___T_1976) 
						   & (~ (IData)(vlTOPp->Tile__DOT__forward__DOT___T_1973))) 
						  & ((IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__rd) 
						     == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__rs1))));
    vlTOPp->Tile__DOT__forward_io_Forward_B = (((IData)(vlTOPp->Tile__DOT__forward__DOT___T_1985) 
						<< 1U) 
					       | (((IData)(vlTOPp->Tile__DOT__forward__DOT___T_1976) 
						   & (~ (IData)(vlTOPp->Tile__DOT__forward__DOT___T_1985))) 
						  & ((IData)(vlTOPp->Tile__DOT__mem_wb_register__DOT__rd) 
						     == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__rs2))));
    vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel = ((0x33U 
						   == 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						   ? 1U
						   : 
						  ((0x40000033U 
						    == 
						    (0xfe00707fU 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						    ? 1U
						    : 
						   ((0x7033U 
						     == 
						     (0xfe00707fU 
						      & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						     ? 1U
						     : 
						    ((0x6033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						      ? 1U
						      : 
						     ((0x4033U 
						       == 
						       (0xfe00707fU 
							& vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						       ? 1U
						       : 
						      ((0x13U 
							== 
							(0x707fU 
							 & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
						        ? 2U
						        : 
						       ((0x7013U 
							 == 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__if_id_register__DOT__inst))
							 ? 2U
							 : (IData)(vlTOPp->Tile__DOT__control__DOT___T_485))))))));
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1486 
	= ((0x3033U != (0xfe00707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
	   & ((0x2013U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
	      & ((0x3013U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		 & ((0x2003U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		    & ((0x1003U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		       & ((3U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
			  & ((0x5003U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
			     & ((0x4003U != (0x707fU 
					     & vlTOPp->Tile__DOT__instcache_io_inst)) 
				& ((0x2023U != (0x707fU 
						& vlTOPp->Tile__DOT__instcache_io_inst)) 
				   & ((0x1023U != (0x707fU 
						   & vlTOPp->Tile__DOT__instcache_io_inst)) 
				      & ((0x23U != 
					  (0x707fU 
					   & vlTOPp->Tile__DOT__instcache_io_inst)) 
					 & ((0x63U 
					     == (0x707fU 
						 & vlTOPp->Tile__DOT__instcache_io_inst)) 
					    | ((0x1063U 
						== 
						(0x707fU 
						 & vlTOPp->Tile__DOT__instcache_io_inst)) 
					       | ((0x4063U 
						   == 
						   (0x707fU 
						    & vlTOPp->Tile__DOT__instcache_io_inst)) 
						  | ((0x5063U 
						      == 
						      (0x707fU 
						       & vlTOPp->Tile__DOT__instcache_io_inst)) 
						     | ((0x6063U 
							 == 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__instcache_io_inst)) 
							| ((0x7063U 
							    == 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__instcache_io_inst)) 
							   | (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1469))))))))))))))))));
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1752 
	= ((0x3033U != (0xfe00707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
	   & ((0x2013U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
	      & ((0x3013U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		 & ((0x2003U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		    & ((0x1003U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		       & ((3U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
			  & ((0x5003U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
			     & ((0x4003U != (0x707fU 
					     & vlTOPp->Tile__DOT__instcache_io_inst)) 
				& ((0x2023U != (0x707fU 
						& vlTOPp->Tile__DOT__instcache_io_inst)) 
				   & ((0x1023U != (0x707fU 
						   & vlTOPp->Tile__DOT__instcache_io_inst)) 
				      & ((0x23U != 
					  (0x707fU 
					   & vlTOPp->Tile__DOT__instcache_io_inst)) 
					 & ((0x63U 
					     != (0x707fU 
						 & vlTOPp->Tile__DOT__instcache_io_inst)) 
					    & ((0x1063U 
						!= 
						(0x707fU 
						 & vlTOPp->Tile__DOT__instcache_io_inst)) 
					       & ((0x4063U 
						   != 
						   (0x707fU 
						    & vlTOPp->Tile__DOT__instcache_io_inst)) 
						  & ((0x5063U 
						      != 
						      (0x707fU 
						       & vlTOPp->Tile__DOT__instcache_io_inst)) 
						     & ((0x6063U 
							 != 
							 (0x707fU 
							  & vlTOPp->Tile__DOT__instcache_io_inst)) 
							& ((0x7063U 
							    != 
							    (0x707fU 
							     & vlTOPp->Tile__DOT__instcache_io_inst)) 
							   & (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1469))))))))))))))))));
    vlTOPp->io_mem_dataout = (IData)(vlTOPp->Tile__DOT__datacache__DOT___T_1910);
    vlTOPp->io_Forward_A = vlTOPp->Tile__DOT__forward_io_Forward_A;
    vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src 
	= ((0U == (IData)(vlTOPp->Tile__DOT__forward_io_Forward_A))
	    ? vlTOPp->Tile__DOT__id_ex_register__DOT__rs1_out
	    : ((1U == (IData)(vlTOPp->Tile__DOT__forward_io_Forward_A))
	        ? vlTOPp->Tile__DOT__datapath_io_wb_io_wb_reg_writedata
	        : ((2U == (IData)(vlTOPp->Tile__DOT__forward_io_Forward_A))
		    ? vlTOPp->Tile__DOT__datapath__DOT___T_188
		    : vlTOPp->Tile__DOT__id_ex_register__DOT__rs1_out)));
    vlTOPp->io_Forward_B = vlTOPp->Tile__DOT__forward_io_Forward_B;
    vlTOPp->Tile__DOT__datapath__DOT___T_198 = ((1U 
						 == (IData)(vlTOPp->Tile__DOT__forward_io_Forward_B))
						 ? vlTOPp->Tile__DOT__datapath_io_wb_io_wb_reg_writedata
						 : 
						((2U 
						  == (IData)(vlTOPp->Tile__DOT__forward_io_Forward_B))
						  ? vlTOPp->Tile__DOT__datapath__DOT___T_188
						  : vlTOPp->Tile__DOT__id_ex_register__DOT__rs2_out));
    vlTOPp->Tile__DOT__immgen__DOT___T_318 = ((2U == (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel))
					       ? ((0xfffff000U 
						   & (VL_NEGATE_I((IData)(
									  (1U 
									   & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
									      >> 0x1fU)))) 
						      << 0xcU)) 
						  | (0xfffU 
						     & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
							>> 0x14U)))
					       : ((3U 
						   == (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel))
						   ? 
						  ((0xfffff000U 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
									       >> 0x1fU)))) 
						       << 0xcU)) 
						   | ((0xfe0U 
						       & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
							  >> 0x14U)) 
						      | (0x1fU 
							 & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
							    >> 7U))))
						   : 
						  ((4U 
						    == (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel))
						    ? 
						   ((0xffffe000U 
						     & (VL_NEGATE_I((IData)(
									    (1U 
									     & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
										>> 0x1fU)))) 
							<< 0xdU)) 
						    | ((0x1000U 
							& (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
							   >> 0x13U)) 
						       | ((0x800U 
							   & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
							      << 4U)) 
							  | ((0x7e0U 
							      & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
								 >> 0x14U)) 
							     | (0x1eU 
								& (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
								   >> 7U))))))
						    : 
						   ((5U 
						     == (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel))
						     ? 
						    (0xfffff000U 
						     & vlTOPp->Tile__DOT__if_id_register__DOT__inst)
						     : 
						    ((6U 
						      == (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel))
						      ? 
						     ((0xffe00000U 
						       & (VL_NEGATE_I((IData)(
									      (1U 
									       & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
										>> 0x1fU)))) 
							  << 0x15U)) 
						      | ((0x100000U 
							  & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
							     >> 0xbU)) 
							 | ((0xff000U 
							     & vlTOPp->Tile__DOT__if_id_register__DOT__inst) 
							    | ((0x800U 
								& (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
								   >> 9U)) 
							       | (0x7feU 
								  & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
								     >> 0x14U))))))
						      : 0U)))));
    vlTOPp->Tile__DOT__hazard_detection__DOT___T_1002 
	= ((((IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__mem_read) 
	     & (5U != (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel))) 
	    & (6U != (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel))) 
	   & ((0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
			>> 0xfU)) == (0x1fU & (vlTOPp->Tile__DOT__id_ex_register__DOT__inst 
					       >> 7U))));
    vlTOPp->Tile__DOT__hazard_detection__DOT___T_1009 
	= (((IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__mem_read) 
	    & ((1U == (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel)) 
	       | (4U == (IData)(vlTOPp->Tile__DOT__control_io_ctrl_Imm_Sel)))) 
	   & ((0x1fU & (vlTOPp->Tile__DOT__if_id_register__DOT__inst 
			>> 0x14U)) == (0x1fU & (vlTOPp->Tile__DOT__id_ex_register__DOT__inst 
						>> 7U))));
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1776 
	= (((0x33U != (0xfe00707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
	    & ((0x40000033U != (0xfe00707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
	       & ((0x7033U != (0xfe00707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		  & ((0x6033U != (0xfe00707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		     & ((0x4033U != (0xfe00707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
			& ((0x13U != (0x707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
			   & ((0x7013U != (0x707fU 
					   & vlTOPp->Tile__DOT__instcache_io_inst)) 
			      & ((0x6013U != (0x707fU 
					      & vlTOPp->Tile__DOT__instcache_io_inst)) 
				 & ((0x4013U != (0x707fU 
						 & vlTOPp->Tile__DOT__instcache_io_inst)) 
				    & ((0x1033U != 
					(0xfe00707fU 
					 & vlTOPp->Tile__DOT__instcache_io_inst)) 
				       & ((0x5033U 
					   != (0xfe00707fU 
					       & vlTOPp->Tile__DOT__instcache_io_inst)) 
					  & ((0x40005033U 
					      != (0xfe00707fU 
						  & vlTOPp->Tile__DOT__instcache_io_inst)) 
					     & ((0x1013U 
						 != 
						 (0xfe00707fU 
						  & vlTOPp->Tile__DOT__instcache_io_inst)) 
						& ((0x5013U 
						    != 
						    (0xfe00707fU 
						     & vlTOPp->Tile__DOT__instcache_io_inst)) 
						   & ((0x40005013U 
						       != 
						       (0xfe00707fU 
							& vlTOPp->Tile__DOT__instcache_io_inst)) 
						      & ((0x2033U 
							  != 
							  (0xfe00707fU 
							   & vlTOPp->Tile__DOT__instcache_io_inst)) 
							 & (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1486))))))))))))))))) 
	   & (~ ((0x33U != (0xfe00707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		 & ((0x40000033U != (0xfe00707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		    & ((0x7033U != (0xfe00707fU & vlTOPp->Tile__DOT__instcache_io_inst)) 
		       & ((0x6033U != (0xfe00707fU 
				       & vlTOPp->Tile__DOT__instcache_io_inst)) 
			  & ((0x4033U != (0xfe00707fU 
					  & vlTOPp->Tile__DOT__instcache_io_inst)) 
			     & ((0x13U != (0x707fU 
					   & vlTOPp->Tile__DOT__instcache_io_inst)) 
				& ((0x7013U != (0x707fU 
						& vlTOPp->Tile__DOT__instcache_io_inst)) 
				   & ((0x6013U != (0x707fU 
						   & vlTOPp->Tile__DOT__instcache_io_inst)) 
				      & ((0x4013U != 
					  (0x707fU 
					   & vlTOPp->Tile__DOT__instcache_io_inst)) 
					 & ((0x1033U 
					     != (0xfe00707fU 
						 & vlTOPp->Tile__DOT__instcache_io_inst)) 
					    & ((0x5033U 
						!= 
						(0xfe00707fU 
						 & vlTOPp->Tile__DOT__instcache_io_inst)) 
					       & ((0x40005033U 
						   != 
						   (0xfe00707fU 
						    & vlTOPp->Tile__DOT__instcache_io_inst)) 
						  & ((0x1013U 
						      != 
						      (0xfe00707fU 
						       & vlTOPp->Tile__DOT__instcache_io_inst)) 
						     & ((0x5013U 
							 != 
							 (0xfe00707fU 
							  & vlTOPp->Tile__DOT__instcache_io_inst)) 
							& ((0x40005013U 
							    != 
							    (0xfe00707fU 
							     & vlTOPp->Tile__DOT__instcache_io_inst)) 
							   & ((0x2033U 
							       != 
							       (0xfe00707fU 
								& vlTOPp->Tile__DOT__instcache_io_inst)) 
							      & (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1752)))))))))))))))))));
    vlTOPp->Tile__DOT__datapath__DOT___T_140 = ((IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__branch_src)
						 ? vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src
						 : vlTOPp->Tile__DOT__id_ex_register__DOT__pc);
    vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src 
	= ((IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__alu_src)
	    ? vlTOPp->Tile__DOT__id_ex_register__DOT__imm
	    : ((0U == (IData)(vlTOPp->Tile__DOT__forward_io_Forward_B))
	        ? vlTOPp->Tile__DOT__id_ex_register__DOT__rs2_out
	        : vlTOPp->Tile__DOT__datapath__DOT___T_198));
    vlTOPp->Tile__DOT__hazard_detection__DOT___T_1010 
	= ((IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1002) 
	   | (IData)(vlTOPp->Tile__DOT__hazard_detection__DOT___T_1009));
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer_io_record 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1776) 
	   & ((2U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status)) 
	      | (3U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))));
    vlTOPp->Tile__DOT__datapath__DOT___T_142 = (VL_ULL(0x3ffffffff) 
						& ((QData)((IData)(vlTOPp->Tile__DOT__datapath__DOT___T_140)) 
						   + 
						   (((2U 
						      == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__imm_sel)) 
						     & (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__jump_type))
						     ? (QData)((IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__imm))
						     : 
						    ((QData)((IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__imm)) 
						     << 1U))));
    vlTOPp->Tile__DOT__alu__DOT___T_1060 = (vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src 
					    == vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src);
    vlTOPp->Tile__DOT__alu__DOT___T_1036 = VL_LTS_III(1,32,32, vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src, vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src);
    vlTOPp->Tile__DOT__alu__DOT___T_1037 = (vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src 
					    < vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src);
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1137 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer_io_record)
	    ? ((0U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131)) 
	       | vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
	       [0U]) : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
	   [0U]);
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1143 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer_io_record)
	    ? ((1U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131)) 
	       | vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
	       [1U]) : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
	   [1U]);
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1149 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer_io_record)
	    ? ((2U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131)) 
	       | vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
	       [2U]) : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used
	   [2U]);
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1210 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer_io_record)
	    ? ((0U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131))
	        ? ((IData)(4U) + vlTOPp->Tile__DOT__pc__DOT__pc_reg)
	        : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
	       [0U]) : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
	   [0U]);
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1222 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer_io_record)
	    ? ((1U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131))
	        ? ((IData)(4U) + vlTOPp->Tile__DOT__pc__DOT__pc_reg)
	        : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
	       [1U]) : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
	   [1U]);
    vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1234 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer_io_record)
	    ? ((2U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131))
	        ? ((IData)(4U) + vlTOPp->Tile__DOT__pc__DOT__pc_reg)
	        : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
	       [2U]) : vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
	   [2U]);
    VL_EXTEND_WQ(95,33, __Vtemp25, (VL_ULL(0x1ffffffff) 
				    & ((QData)((IData)(vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src)) 
				       + (QData)((IData)(vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src)))));
    VL_EXTEND_WQ(95,33, __Vtemp26, (VL_ULL(0x1ffffffff) 
				    & ((QData)((IData)(vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src)) 
				       - (QData)((IData)(vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src)))));
    VL_EXTEND_WI(95,32, __Vtemp27, (vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src 
				    & vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src));
    VL_EXTEND_WI(95,32, __Vtemp28, (vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src 
				    | vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src));
    VL_EXTEND_WI(95,32, __Vtemp29, (vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src 
				    ^ vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src));
    VL_EXTEND_WI(95,32, __Vtemp30, vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src);
    VL_SHIFTL_WWI(95,95,6, __Vtemp31, __Vtemp30, (0x3fU 
						  & vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src));
    VL_EXTEND_WI(95,32, __Vtemp32, ((6U == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
				     ? ((0x1fU >= (0x3fU 
						   & vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src))
					 ? (vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src 
					    >> (0x3fU 
						& vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src))
					 : 0U) : ((7U 
						   == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						   ? 
						  ((0x1fU 
						    >= 
						    (0x3fU 
						     & vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src))
						    ? 
						   VL_SHIFTRS_III(32,32,6, vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src, 
								  (0x3fU 
								   & vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src))
						    : 
						   VL_NEGATE_I(
							       (vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src 
								>> 0x1fU)))
						   : 
						  ((8U 
						    == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						    ? (IData)(vlTOPp->Tile__DOT__alu__DOT___T_1036)
						    : 
						   ((9U 
						     == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						     ? (IData)(vlTOPp->Tile__DOT__alu__DOT___T_1037)
						     : vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src)))));
    vlTOPp->Tile__DOT__alu__DOT___T_1057[0U] = ((0U 
						 == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						 ? 
						__Vtemp25[0U]
						 : 
						((1U 
						  == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						  ? 
						 __Vtemp26[0U]
						  : 
						 ((2U 
						   == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						   ? 
						  __Vtemp27[0U]
						   : 
						  ((3U 
						    == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						    ? 
						   __Vtemp28[0U]
						    : 
						   ((4U 
						     == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						     ? 
						    __Vtemp29[0U]
						     : 
						    ((5U 
						      == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						      ? 
						     __Vtemp31[0U]
						      : 
						     __Vtemp32[0U]))))));
    vlTOPp->Tile__DOT__alu__DOT___T_1057[1U] = ((0U 
						 == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						 ? 
						__Vtemp25[1U]
						 : 
						((1U 
						  == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						  ? 
						 __Vtemp26[1U]
						  : 
						 ((2U 
						   == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						   ? 
						  __Vtemp27[1U]
						   : 
						  ((3U 
						    == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						    ? 
						   __Vtemp28[1U]
						    : 
						   ((4U 
						     == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						     ? 
						    __Vtemp29[1U]
						     : 
						    ((5U 
						      == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						      ? 
						     __Vtemp31[1U]
						      : 
						     __Vtemp32[1U]))))));
    vlTOPp->Tile__DOT__alu__DOT___T_1057[2U] = (0x7fffffffU 
						& ((0U 
						    == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						    ? 
						   __Vtemp25[2U]
						    : 
						   ((1U 
						     == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						     ? 
						    __Vtemp26[2U]
						     : 
						    ((2U 
						      == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						      ? 
						     __Vtemp27[2U]
						      : 
						     ((3U 
						       == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						       ? 
						      __Vtemp28[2U]
						       : 
						      ((4U 
							== (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						        ? 
						       __Vtemp29[2U]
						        : 
						       ((5U 
							 == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
							 ? 
							__Vtemp31[2U]
							 : 
							__Vtemp32[2U])))))));
    vlTOPp->Tile__DOT__alu_io_conflag = ((0xaU == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
					  ? (IData)(vlTOPp->Tile__DOT__alu__DOT___T_1060)
					  : ((0xbU 
					      == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
					      ? (IData)(vlTOPp->Tile__DOT__alu__DOT___T_1060)
					      : ((0xcU 
						  == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						  ? (IData)(vlTOPp->Tile__DOT__alu__DOT___T_1036)
						  : 
						 ((0xdU 
						   == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						   ? 
						  VL_GTES_III(1,32,32, vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src, vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src)
						   : 
						  ((0xeU 
						    == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop))
						    ? (IData)(vlTOPp->Tile__DOT__alu__DOT___T_1037)
						    : 
						   ((0xfU 
						     == (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__aluop)) 
						    & (vlTOPp->Tile__DOT__datapath_io_ex_io_alu_a_src 
						       >= vlTOPp->Tile__DOT__datapath_io_ex_io_alu_b_src)))))));
    vlTOPp->io_ex_alu_sum = vlTOPp->Tile__DOT__alu__DOT___T_1057[0U];
    vlTOPp->io_ex_alu_conflag = vlTOPp->Tile__DOT__alu_io_conflag;
    vlTOPp->Tile__DOT__datapath_io_ex_io_PC_Src = (
						   ((IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__jump_type) 
						    | (IData)(vlTOPp->Tile__DOT__alu_io_conflag)) 
						   & (IData)(vlTOPp->Tile__DOT__id_ex_register__DOT__branch));
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1807 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1782)
	    ? ((IData)(vlTOPp->Tile__DOT__datapath_io_ex_io_PC_Src)
	        ? ((0U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
		    ? 1U : ((1U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
			     ? 3U : ((3U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
				      ? 2U : ((2U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
					       ? 2U
					       : (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status)))))
	        : ((0U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
		    ? 0U : ((1U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
			     ? 0U : ((3U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
				      ? 1U : ((2U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
					       ? 3U
					       : (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))))))
	    : (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status));
    vlTOPp->Tile__DOT__branch_predictor__DOT___T_1811 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1782) 
	   & ((3U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1807)) 
	      | (1U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1807))));
    vlTOPp->Tile__DOT__branch_predictor_io_IF_ID_Flush 
	= ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1779) 
	   | (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1811));
    vlTOPp->Tile__DOT__branch_predictor_io_PC_Sel = 
	((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1779)
	  ? ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1779)
	      ? 2U : 0U) : (((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1782) 
			     & (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1811))
			     ? ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1811)
				 ? (((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1811) 
				     & (((3U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1807)) 
					 & (2U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))) 
					| ((1U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1807)) 
					   & (3U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status)))))
				     ? 1U : 2U) : 0U)
			     : ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1776)
				 ? ((0U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
				     ? 0U : ((1U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
					      ? 0U : 
					     ((3U == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
					       ? 2U
					       : ((2U 
						   == (IData)(vlTOPp->Tile__DOT__branch_predictor__DOT__dynamic_counter_status))
						   ? 2U
						   : 0U))))
				 : 0U)));
    vlTOPp->Tile__DOT__datapath__DOT___T_156 = (VL_ULL(0x1ffffffff) 
						& ((0U 
						    == (IData)(vlTOPp->Tile__DOT__branch_predictor_io_PC_Sel))
						    ? 
						   (VL_ULL(4) 
						    + (QData)((IData)(vlTOPp->Tile__DOT__pc__DOT__pc_reg)))
						    : (QData)((IData)(
								      ((2U 
									== (IData)(vlTOPp->Tile__DOT__branch_predictor_io_PC_Sel))
								        ? (IData)(
										(VL_ULL(0x1ffffffff) 
										& ((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1779)
										 ? (QData)((IData)(vlTOPp->Tile__DOT__datapath__DOT___T_142))
										 : 
										((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1782)
										 ? (QData)((IData)(vlTOPp->Tile__DOT__datapath__DOT___T_142))
										 : 
										((IData)(vlTOPp->Tile__DOT__branch_predictor__DOT___T_1776)
										 ? 
										(VL_EXTENDS_QI(33,32, vlTOPp->Tile__DOT__pc__DOT__pc_reg) 
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
										 : VL_ULL(0))))))
								        : 
								       ((1U 
									 == (IData)(vlTOPp->Tile__DOT__branch_predictor_io_PC_Sel))
									 ? 
									((vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
									  [0U] 
									  > 
									  vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
									  [1U])
									  ? 
									 ((vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
									   [0U] 
									   > 
									   vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
									   [2U])
									   ? 
									  vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
									  [0U]
									   : 
									  vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
									  [2U])
									  : 
									 ((vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
									   [1U] 
									   > 
									   vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter
									   [2U])
									   ? 
									  vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
									  [1U]
									   : 
									  vlTOPp->Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer
									  [2U]))
									 : 0U))))));
    vlTOPp->io_if_next_pc = (IData)(vlTOPp->Tile__DOT__datapath__DOT___T_156);
}

void VTile::_eval(VTile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile::_eval\n"); );
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VTile::_eval_initial(VTile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile::_eval_initial\n"); );
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VTile::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile::final\n"); );
    // Variables
    VTile__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTile::_eval_settle(VTile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile::_eval_settle\n"); );
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VTile::_change_request(VTile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile::_change_request\n"); );
    VTile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTile::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VTile::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_if_pc_out = VL_RAND_RESET_I(32);
    io_if_next_pc = VL_RAND_RESET_I(32);
    io_id_rs1 = VL_RAND_RESET_I(5);
    io_id_rs2 = VL_RAND_RESET_I(5);
    io_id_rs1_out = VL_RAND_RESET_I(32);
    io_id_rs2_out = VL_RAND_RESET_I(32);
    io_ex_rs1_out = VL_RAND_RESET_I(32);
    io_ex_rs2_out = VL_RAND_RESET_I(32);
    io_ex_alu_sum = VL_RAND_RESET_I(32);
    io_ex_alu_conflag = VL_RAND_RESET_I(1);
    io_ex_rd = VL_RAND_RESET_I(5);
    io_mem_rd = VL_RAND_RESET_I(5);
    io_mem_alu_sum = VL_RAND_RESET_I(32);
    io_mem_writedata = VL_RAND_RESET_I(32);
    io_mem_dataout = VL_RAND_RESET_I(32);
    io_wb_rd = VL_RAND_RESET_I(5);
    io_wb_registerwrite = VL_RAND_RESET_I(32);
    io_Forward_A = VL_RAND_RESET_I(2);
    io_Forward_B = VL_RAND_RESET_I(2);
    io_MemWrite_Src = VL_RAND_RESET_I(1);
    Tile__DOT__instcache_io_inst = VL_RAND_RESET_I(32);
    Tile__DOT__datapath_io_ex_io_alu_a_src = VL_RAND_RESET_I(32);
    Tile__DOT__datapath_io_ex_io_alu_b_src = VL_RAND_RESET_I(32);
    Tile__DOT__datapath_io_ex_io_PC_Src = VL_RAND_RESET_I(1);
    Tile__DOT__datapath_io_mem_io_mem_writedata = VL_RAND_RESET_I(32);
    Tile__DOT__datapath_io_wb_io_wb_reg_writedata = VL_RAND_RESET_I(32);
    Tile__DOT__regfile_io_rs1_out = VL_RAND_RESET_I(32);
    Tile__DOT__regfile_io_rs2_out = VL_RAND_RESET_I(32);
    Tile__DOT__control_io_ctrl_Imm_Sel = VL_RAND_RESET_I(3);
    Tile__DOT__alu_io_conflag = VL_RAND_RESET_I(1);
    Tile__DOT__branch_predictor_io_PC_Sel = VL_RAND_RESET_I(2);
    Tile__DOT__branch_predictor_io_IF_ID_Flush = VL_RAND_RESET_I(1);
    Tile__DOT__forward_io_Forward_A = VL_RAND_RESET_I(2);
    Tile__DOT__forward_io_Forward_B = VL_RAND_RESET_I(2);
    Tile__DOT__forward_io_MemWrite_Src = VL_RAND_RESET_I(1);
    Tile__DOT__pc__DOT__pc_reg = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    Tile__DOT__instcache__DOT__cache[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Tile__DOT__datapath__DOT___T_140 = VL_RAND_RESET_I(32);
    Tile__DOT__datapath__DOT___T_142 = VL_RAND_RESET_Q(34);
    Tile__DOT__datapath__DOT___T_156 = VL_RAND_RESET_Q(33);
    Tile__DOT__datapath__DOT___T_188 = VL_RAND_RESET_I(32);
    Tile__DOT__datapath__DOT___T_198 = VL_RAND_RESET_I(32);
    Tile__DOT__if_id_register__DOT__pc = VL_RAND_RESET_I(32);
    Tile__DOT__if_id_register__DOT__pc_4 = VL_RAND_RESET_I(32);
    Tile__DOT__if_id_register__DOT__inst = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    Tile__DOT__regfile__DOT__regfile[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Tile__DOT__regfile__DOT__regfile___05FT_273_data = VL_RAND_RESET_I(32);
    Tile__DOT__immgen__DOT___T_318 = VL_RAND_RESET_I(32);
    Tile__DOT__control__DOT___T_435 = VL_RAND_RESET_I(1);
    Tile__DOT__control__DOT___T_452 = VL_RAND_RESET_I(1);
    Tile__DOT__control__DOT___T_470 = VL_RAND_RESET_I(3);
    Tile__DOT__control__DOT___T_485 = VL_RAND_RESET_I(3);
    Tile__DOT__control__DOT___T_506 = VL_RAND_RESET_I(1);
    Tile__DOT__control__DOT___T_523 = VL_RAND_RESET_I(1);
    Tile__DOT__control__DOT___T_546 = VL_RAND_RESET_I(5);
    Tile__DOT__control__DOT___T_561 = VL_RAND_RESET_I(5);
    Tile__DOT__control__DOT___T_573 = VL_RAND_RESET_I(1);
    Tile__DOT__control__DOT___T_590 = VL_RAND_RESET_I(1);
    Tile__DOT__control__DOT___T_627 = VL_RAND_RESET_I(1);
    Tile__DOT__control__DOT___T_660 = VL_RAND_RESET_I(1);
    Tile__DOT__control__DOT___T_677 = VL_RAND_RESET_I(1);
    Tile__DOT__control__DOT___T_713 = VL_RAND_RESET_I(1);
    Tile__DOT__control__DOT___T_746 = VL_RAND_RESET_I(2);
    Tile__DOT__control__DOT___T_791 = VL_RAND_RESET_I(1);
    Tile__DOT__control__DOT___T_812 = VL_RAND_RESET_I(3);
    Tile__DOT__control__DOT___T_827 = VL_RAND_RESET_I(3);
    Tile__DOT__control__DOT___T_856 = VL_RAND_RESET_I(1);
    Tile__DOT__id_ex_register__DOT__pc = VL_RAND_RESET_I(32);
    Tile__DOT__id_ex_register__DOT__pc_4 = VL_RAND_RESET_I(32);
    Tile__DOT__id_ex_register__DOT__rs1_out = VL_RAND_RESET_I(32);
    Tile__DOT__id_ex_register__DOT__rs2_out = VL_RAND_RESET_I(32);
    Tile__DOT__id_ex_register__DOT__imm = VL_RAND_RESET_I(32);
    Tile__DOT__id_ex_register__DOT__inst = VL_RAND_RESET_I(32);
    Tile__DOT__id_ex_register__DOT__rs1 = VL_RAND_RESET_I(5);
    Tile__DOT__id_ex_register__DOT__rs2 = VL_RAND_RESET_I(5);
    Tile__DOT__id_ex_register__DOT__alu_src = VL_RAND_RESET_I(1);
    Tile__DOT__id_ex_register__DOT__aluop = VL_RAND_RESET_I(5);
    Tile__DOT__id_ex_register__DOT__branch = VL_RAND_RESET_I(1);
    Tile__DOT__id_ex_register__DOT__branch_src = VL_RAND_RESET_I(1);
    Tile__DOT__id_ex_register__DOT__jump_type = VL_RAND_RESET_I(1);
    Tile__DOT__id_ex_register__DOT__mem_read = VL_RAND_RESET_I(1);
    Tile__DOT__id_ex_register__DOT__mem_write = VL_RAND_RESET_I(1);
    Tile__DOT__id_ex_register__DOT__data_size = VL_RAND_RESET_I(2);
    Tile__DOT__id_ex_register__DOT__load_type = VL_RAND_RESET_I(1);
    Tile__DOT__id_ex_register__DOT__reg_write = VL_RAND_RESET_I(1);
    Tile__DOT__id_ex_register__DOT__mem_to_reg = VL_RAND_RESET_I(3);
    Tile__DOT__id_ex_register__DOT__imm_sel = VL_RAND_RESET_I(3);
    Tile__DOT__hazard_detection__DOT___T_1002 = VL_RAND_RESET_I(1);
    Tile__DOT__hazard_detection__DOT___T_1009 = VL_RAND_RESET_I(1);
    Tile__DOT__hazard_detection__DOT___T_1010 = VL_RAND_RESET_I(1);
    Tile__DOT__alu__DOT___T_1036 = VL_RAND_RESET_I(1);
    Tile__DOT__alu__DOT___T_1037 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(95,Tile__DOT__alu__DOT___T_1057);
    Tile__DOT__alu__DOT___T_1060 = VL_RAND_RESET_I(1);
    Tile__DOT__branch_predictor__DOT__addr_buffer_io_record = VL_RAND_RESET_I(1);
    Tile__DOT__branch_predictor__DOT__dynamic_counter_status = VL_RAND_RESET_I(2);
    Tile__DOT__branch_predictor__DOT___T_1469 = VL_RAND_RESET_I(1);
    Tile__DOT__branch_predictor__DOT___T_1486 = VL_RAND_RESET_I(1);
    Tile__DOT__branch_predictor__DOT___T_1752 = VL_RAND_RESET_I(1);
    Tile__DOT__branch_predictor__DOT___T_1776 = VL_RAND_RESET_I(1);
    Tile__DOT__branch_predictor__DOT___T_1779 = VL_RAND_RESET_I(1);
    Tile__DOT__branch_predictor__DOT___T_1782 = VL_RAND_RESET_I(1);
    Tile__DOT__branch_predictor__DOT___T_1783 = VL_RAND_RESET_I(1);
    Tile__DOT__branch_predictor__DOT___T_1784 = VL_RAND_RESET_I(1);
    Tile__DOT__branch_predictor__DOT___T_1794 = VL_RAND_RESET_I(1);
    Tile__DOT__branch_predictor__DOT___T_1796 = VL_RAND_RESET_I(1);
    Tile__DOT__branch_predictor__DOT___T_1807 = VL_RAND_RESET_I(2);
    Tile__DOT__branch_predictor__DOT___T_1811 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
	    Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
	    Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
	    Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used[__Vi0] = VL_RAND_RESET_I(1);
    }}
    Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131 = VL_RAND_RESET_I(2);
    Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1137 = VL_RAND_RESET_I(1);
    Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1143 = VL_RAND_RESET_I(1);
    Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1149 = VL_RAND_RESET_I(1);
    Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1177 = VL_RAND_RESET_I(3);
    Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1188 = VL_RAND_RESET_I(3);
    Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1199 = VL_RAND_RESET_I(3);
    Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1210 = VL_RAND_RESET_I(32);
    Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1222 = VL_RAND_RESET_I(32);
    Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1234 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    Tile__DOT__datacache__DOT__cache[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Tile__DOT__datacache__DOT__cache___05FT_1905_data = VL_RAND_RESET_I(32);
    Tile__DOT__datacache__DOT___T_1876 = VL_RAND_RESET_I(3);
    Tile__DOT__datacache__DOT___T_1902 = VL_RAND_RESET_Q(47);
    Tile__DOT__datacache__DOT___T_1910 = VL_RAND_RESET_Q(47);
    Tile__DOT__ex_mem_register__DOT__alu_sum = VL_RAND_RESET_I(32);
    Tile__DOT__ex_mem_register__DOT__rs2_out = VL_RAND_RESET_I(32);
    Tile__DOT__ex_mem_register__DOT__rd = VL_RAND_RESET_I(5);
    Tile__DOT__ex_mem_register__DOT__pc_4 = VL_RAND_RESET_I(32);
    Tile__DOT__ex_mem_register__DOT__imm = VL_RAND_RESET_I(32);
    Tile__DOT__ex_mem_register__DOT__aui_pc = VL_RAND_RESET_I(32);
    Tile__DOT__ex_mem_register__DOT__rs2 = VL_RAND_RESET_I(5);
    Tile__DOT__ex_mem_register__DOT__mem_read = VL_RAND_RESET_I(1);
    Tile__DOT__ex_mem_register__DOT__mem_write = VL_RAND_RESET_I(1);
    Tile__DOT__ex_mem_register__DOT__data_size = VL_RAND_RESET_I(2);
    Tile__DOT__ex_mem_register__DOT__load_type = VL_RAND_RESET_I(1);
    Tile__DOT__ex_mem_register__DOT__reg_write = VL_RAND_RESET_I(1);
    Tile__DOT__ex_mem_register__DOT__mem_to_reg = VL_RAND_RESET_I(3);
    Tile__DOT__forward__DOT___T_1971 = VL_RAND_RESET_I(1);
    Tile__DOT__forward__DOT___T_1973 = VL_RAND_RESET_I(1);
    Tile__DOT__forward__DOT___T_1976 = VL_RAND_RESET_I(1);
    Tile__DOT__forward__DOT___T_1985 = VL_RAND_RESET_I(1);
    Tile__DOT__mem_wb_register__DOT__dataout = VL_RAND_RESET_I(32);
    Tile__DOT__mem_wb_register__DOT__alu_sum = VL_RAND_RESET_I(32);
    Tile__DOT__mem_wb_register__DOT__rd = VL_RAND_RESET_I(5);
    Tile__DOT__mem_wb_register__DOT__pc_4 = VL_RAND_RESET_I(32);
    Tile__DOT__mem_wb_register__DOT__imm = VL_RAND_RESET_I(32);
    Tile__DOT__mem_wb_register__DOT__aui_pc = VL_RAND_RESET_I(32);
    Tile__DOT__mem_wb_register__DOT__mem_to_reg = VL_RAND_RESET_I(3);
    Tile__DOT__mem_wb_register__DOT__reg_write = VL_RAND_RESET_I(1);
    __Vtablechg1[0] = 0U;
    __Vtablechg1[1] = 1U;
    __Vtablechg1[2] = 0U;
    __Vtablechg1[3] = 1U;
    __Vtablechg1[4] = 0U;
    __Vtablechg1[5] = 1U;
    __Vtablechg1[6] = 0U;
    __Vtablechg1[7] = 1U;
    __Vtablechg1[8] = 0U;
    __Vtablechg1[9] = 1U;
    __Vtablechg1[10] = 1U;
    __Vtablechg1[11] = 1U;
    __Vtablechg1[12] = 0U;
    __Vtablechg1[13] = 1U;
    __Vtablechg1[14] = 1U;
    __Vtablechg1[15] = 1U;
    __Vtablechg1[16] = 0U;
    __Vtablechg1[17] = 1U;
    __Vtablechg1[18] = 1U;
    __Vtablechg1[19] = 1U;
    __Vtablechg1[20] = 0U;
    __Vtablechg1[21] = 1U;
    __Vtablechg1[22] = 1U;
    __Vtablechg1[23] = 1U;
    __Vtablechg1[24] = 0U;
    __Vtablechg1[25] = 1U;
    __Vtablechg1[26] = 1U;
    __Vtablechg1[27] = 1U;
    __Vtablechg1[28] = 0U;
    __Vtablechg1[29] = 1U;
    __Vtablechg1[30] = 1U;
    __Vtablechg1[31] = 1U;
    __Vtablechg1[32] = 0U;
    __Vtablechg1[33] = 1U;
    __Vtablechg1[34] = 1U;
    __Vtablechg1[35] = 1U;
    __Vtablechg1[36] = 0U;
    __Vtablechg1[37] = 1U;
    __Vtablechg1[38] = 1U;
    __Vtablechg1[39] = 1U;
    __Vtablechg1[40] = 0U;
    __Vtablechg1[41] = 1U;
    __Vtablechg1[42] = 1U;
    __Vtablechg1[43] = 1U;
    __Vtablechg1[44] = 0U;
    __Vtablechg1[45] = 1U;
    __Vtablechg1[46] = 1U;
    __Vtablechg1[47] = 1U;
    __Vtablechg1[48] = 0U;
    __Vtablechg1[49] = 1U;
    __Vtablechg1[50] = 1U;
    __Vtablechg1[51] = 1U;
    __Vtablechg1[52] = 0U;
    __Vtablechg1[53] = 1U;
    __Vtablechg1[54] = 1U;
    __Vtablechg1[55] = 1U;
    __Vtablechg1[56] = 0U;
    __Vtablechg1[57] = 1U;
    __Vtablechg1[58] = 1U;
    __Vtablechg1[59] = 1U;
    __Vtablechg1[60] = 0U;
    __Vtablechg1[61] = 1U;
    __Vtablechg1[62] = 1U;
    __Vtablechg1[63] = 1U;
    __Vtablechg1[64] = 0U;
    __Vtablechg1[65] = 1U;
    __Vtablechg1[66] = 1U;
    __Vtablechg1[67] = 1U;
    __Vtablechg1[68] = 0U;
    __Vtablechg1[69] = 1U;
    __Vtablechg1[70] = 1U;
    __Vtablechg1[71] = 1U;
    __Vtablechg1[72] = 0U;
    __Vtablechg1[73] = 1U;
    __Vtablechg1[74] = 1U;
    __Vtablechg1[75] = 1U;
    __Vtablechg1[76] = 0U;
    __Vtablechg1[77] = 1U;
    __Vtablechg1[78] = 1U;
    __Vtablechg1[79] = 1U;
    __Vtablechg1[80] = 0U;
    __Vtablechg1[81] = 1U;
    __Vtablechg1[82] = 1U;
    __Vtablechg1[83] = 1U;
    __Vtablechg1[84] = 0U;
    __Vtablechg1[85] = 1U;
    __Vtablechg1[86] = 1U;
    __Vtablechg1[87] = 1U;
    __Vtablechg1[88] = 0U;
    __Vtablechg1[89] = 1U;
    __Vtablechg1[90] = 1U;
    __Vtablechg1[91] = 1U;
    __Vtablechg1[92] = 0U;
    __Vtablechg1[93] = 1U;
    __Vtablechg1[94] = 1U;
    __Vtablechg1[95] = 1U;
    __Vtablechg1[96] = 0U;
    __Vtablechg1[97] = 1U;
    __Vtablechg1[98] = 1U;
    __Vtablechg1[99] = 1U;
    __Vtablechg1[100] = 0U;
    __Vtablechg1[101] = 1U;
    __Vtablechg1[102] = 1U;
    __Vtablechg1[103] = 1U;
    __Vtablechg1[104] = 0U;
    __Vtablechg1[105] = 1U;
    __Vtablechg1[106] = 1U;
    __Vtablechg1[107] = 1U;
    __Vtablechg1[108] = 0U;
    __Vtablechg1[109] = 1U;
    __Vtablechg1[110] = 1U;
    __Vtablechg1[111] = 1U;
    __Vtablechg1[112] = 0U;
    __Vtablechg1[113] = 1U;
    __Vtablechg1[114] = 1U;
    __Vtablechg1[115] = 1U;
    __Vtablechg1[116] = 0U;
    __Vtablechg1[117] = 1U;
    __Vtablechg1[118] = 1U;
    __Vtablechg1[119] = 1U;
    __Vtablechg1[120] = 0U;
    __Vtablechg1[121] = 1U;
    __Vtablechg1[122] = 1U;
    __Vtablechg1[123] = 1U;
    __Vtablechg1[124] = 0U;
    __Vtablechg1[125] = 1U;
    __Vtablechg1[126] = 1U;
    __Vtablechg1[127] = 1U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[0] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[1] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[2] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[3] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[4] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[5] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[6] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[7] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[8] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[9] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[10] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[11] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[12] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[13] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[14] = 1U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[15] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[16] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[17] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[18] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[19] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[20] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[21] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[22] = 3U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[23] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[24] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[25] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[26] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[27] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[28] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[29] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[30] = 1U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[31] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[32] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[33] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[34] = 1U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[35] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[36] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[37] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[38] = 2U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[39] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[40] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[41] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[42] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[43] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[44] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[45] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[46] = 1U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[47] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[48] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[49] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[50] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[51] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[52] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[53] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[54] = 3U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[55] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[56] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[57] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[58] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[59] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[60] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[61] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[62] = 1U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[63] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[64] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[65] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[66] = 3U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[67] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[68] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[69] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[70] = 2U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[71] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[72] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[73] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[74] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[75] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[76] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[77] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[78] = 1U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[79] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[80] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[81] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[82] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[83] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[84] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[85] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[86] = 3U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[87] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[88] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[89] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[90] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[91] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[92] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[93] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[94] = 1U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[95] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[96] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[97] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[98] = 1U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[99] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[100] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[101] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[102] = 2U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[103] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[104] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[105] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[106] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[107] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[108] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[109] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[110] = 1U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[111] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[112] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[113] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[114] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[115] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[116] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[117] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[118] = 3U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[119] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[120] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[121] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[122] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[123] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[124] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[125] = 0U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[126] = 1U;
    __Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[127] = 0U;
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
