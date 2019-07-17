// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTile_H_
#define _VTile_H_

#include "verilated.h"

class VTile__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VTile) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_id_rs1,4,0);
    VL_OUT8(io_id_rs2,4,0);
    VL_OUT8(io_ex_alu_conflag,0,0);
    VL_OUT8(io_ex_rd,4,0);
    VL_OUT8(io_mem_rd,4,0);
    VL_OUT8(io_wb_rd,4,0);
    VL_OUT8(io_Forward_A,1,0);
    VL_OUT8(io_Forward_B,1,0);
    VL_OUT8(io_MemWrite_Src,0,0);
    VL_OUT(io_if_pc_out,31,0);
    VL_OUT(io_if_next_pc,31,0);
    VL_OUT(io_id_rs1_out,31,0);
    VL_OUT(io_id_rs2_out,31,0);
    VL_OUT(io_ex_rs1_out,31,0);
    VL_OUT(io_ex_rs2_out,31,0);
    VL_OUT(io_ex_alu_sum,31,0);
    VL_OUT(io_mem_alu_sum,31,0);
    VL_OUT(io_mem_writedata,31,0);
    VL_OUT(io_mem_dataout,31,0);
    VL_OUT(io_wb_registerwrite,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
	// Begin mtask footprint  all: 
	VL_SIG8(Tile__DOT__datapath_io_ex_io_PC_Src,0,0);
	VL_SIG8(Tile__DOT__control_io_ctrl_Imm_Sel,2,0);
	VL_SIG8(Tile__DOT__alu_io_conflag,0,0);
	VL_SIG8(Tile__DOT__branch_predictor_io_PC_Sel,1,0);
	VL_SIG8(Tile__DOT__branch_predictor_io_IF_ID_Flush,0,0);
	VL_SIG8(Tile__DOT__forward_io_Forward_A,1,0);
	VL_SIG8(Tile__DOT__forward_io_Forward_B,1,0);
	VL_SIG8(Tile__DOT__forward_io_MemWrite_Src,0,0);
	VL_SIG8(Tile__DOT__control__DOT___T_435,0,0);
	VL_SIG8(Tile__DOT__control__DOT___T_452,0,0);
	VL_SIG8(Tile__DOT__control__DOT___T_470,2,0);
	VL_SIG8(Tile__DOT__control__DOT___T_485,2,0);
	VL_SIG8(Tile__DOT__control__DOT___T_506,0,0);
	VL_SIG8(Tile__DOT__control__DOT___T_523,0,0);
	VL_SIG8(Tile__DOT__control__DOT___T_546,4,0);
	VL_SIG8(Tile__DOT__control__DOT___T_561,4,0);
	VL_SIG8(Tile__DOT__control__DOT___T_573,0,0);
	VL_SIG8(Tile__DOT__control__DOT___T_590,0,0);
	VL_SIG8(Tile__DOT__control__DOT___T_627,0,0);
	VL_SIG8(Tile__DOT__control__DOT___T_660,0,0);
	VL_SIG8(Tile__DOT__control__DOT___T_677,0,0);
	VL_SIG8(Tile__DOT__control__DOT___T_713,0,0);
	VL_SIG8(Tile__DOT__control__DOT___T_746,1,0);
	VL_SIG8(Tile__DOT__control__DOT___T_791,0,0);
	VL_SIG8(Tile__DOT__control__DOT___T_812,2,0);
	VL_SIG8(Tile__DOT__control__DOT___T_827,2,0);
	VL_SIG8(Tile__DOT__control__DOT___T_856,0,0);
	VL_SIG8(Tile__DOT__id_ex_register__DOT__rs1,4,0);
	VL_SIG8(Tile__DOT__id_ex_register__DOT__rs2,4,0);
	VL_SIG8(Tile__DOT__id_ex_register__DOT__alu_src,0,0);
	VL_SIG8(Tile__DOT__id_ex_register__DOT__aluop,4,0);
	VL_SIG8(Tile__DOT__id_ex_register__DOT__branch,0,0);
	VL_SIG8(Tile__DOT__id_ex_register__DOT__branch_src,0,0);
	VL_SIG8(Tile__DOT__id_ex_register__DOT__jump_type,0,0);
	VL_SIG8(Tile__DOT__id_ex_register__DOT__mem_read,0,0);
	VL_SIG8(Tile__DOT__id_ex_register__DOT__mem_write,0,0);
	VL_SIG8(Tile__DOT__id_ex_register__DOT__data_size,1,0);
	VL_SIG8(Tile__DOT__id_ex_register__DOT__load_type,0,0);
	VL_SIG8(Tile__DOT__id_ex_register__DOT__reg_write,0,0);
	VL_SIG8(Tile__DOT__id_ex_register__DOT__mem_to_reg,2,0);
	VL_SIG8(Tile__DOT__id_ex_register__DOT__imm_sel,2,0);
	VL_SIG8(Tile__DOT__hazard_detection__DOT___T_1002,0,0);
	VL_SIG8(Tile__DOT__hazard_detection__DOT___T_1009,0,0);
	VL_SIG8(Tile__DOT__hazard_detection__DOT___T_1010,0,0);
	VL_SIG8(Tile__DOT__alu__DOT___T_1036,0,0);
	VL_SIG8(Tile__DOT__alu__DOT___T_1037,0,0);
	VL_SIG8(Tile__DOT__alu__DOT___T_1060,0,0);
	VL_SIG8(Tile__DOT__branch_predictor__DOT__addr_buffer_io_record,0,0);
	VL_SIG8(Tile__DOT__branch_predictor__DOT__dynamic_counter_status,1,0);
	VL_SIG8(Tile__DOT__branch_predictor__DOT___T_1469,0,0);
	VL_SIG8(Tile__DOT__branch_predictor__DOT___T_1486,0,0);
	VL_SIG8(Tile__DOT__branch_predictor__DOT___T_1752,0,0);
	VL_SIG8(Tile__DOT__branch_predictor__DOT___T_1776,0,0);
	VL_SIG8(Tile__DOT__branch_predictor__DOT___T_1779,0,0);
	VL_SIG8(Tile__DOT__branch_predictor__DOT___T_1782,0,0);
	VL_SIG8(Tile__DOT__branch_predictor__DOT___T_1783,0,0);
	VL_SIG8(Tile__DOT__branch_predictor__DOT___T_1784,0,0);
	VL_SIG8(Tile__DOT__branch_predictor__DOT___T_1794,0,0);
	VL_SIG8(Tile__DOT__branch_predictor__DOT___T_1796,0,0);
	VL_SIG8(Tile__DOT__branch_predictor__DOT___T_1807,1,0);
	VL_SIG8(Tile__DOT__branch_predictor__DOT___T_1811,0,0);
	VL_SIG8(Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1131,1,0);
	VL_SIG8(Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1137,0,0);
	VL_SIG8(Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1143,0,0);
    };
    struct {
	VL_SIG8(Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1149,0,0);
	VL_SIG8(Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1177,2,0);
	VL_SIG8(Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1188,2,0);
	VL_SIG8(Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1199,2,0);
	VL_SIG8(Tile__DOT__datacache__DOT___T_1876,2,0);
	VL_SIG8(Tile__DOT__ex_mem_register__DOT__rd,4,0);
	VL_SIG8(Tile__DOT__ex_mem_register__DOT__rs2,4,0);
	VL_SIG8(Tile__DOT__ex_mem_register__DOT__mem_read,0,0);
	VL_SIG8(Tile__DOT__ex_mem_register__DOT__mem_write,0,0);
	VL_SIG8(Tile__DOT__ex_mem_register__DOT__data_size,1,0);
	VL_SIG8(Tile__DOT__ex_mem_register__DOT__load_type,0,0);
	VL_SIG8(Tile__DOT__ex_mem_register__DOT__reg_write,0,0);
	VL_SIG8(Tile__DOT__ex_mem_register__DOT__mem_to_reg,2,0);
	VL_SIG8(Tile__DOT__forward__DOT___T_1971,0,0);
	VL_SIG8(Tile__DOT__forward__DOT___T_1973,0,0);
	VL_SIG8(Tile__DOT__forward__DOT___T_1976,0,0);
	VL_SIG8(Tile__DOT__forward__DOT___T_1985,0,0);
	VL_SIG8(Tile__DOT__mem_wb_register__DOT__rd,4,0);
	VL_SIG8(Tile__DOT__mem_wb_register__DOT__mem_to_reg,2,0);
	VL_SIG8(Tile__DOT__mem_wb_register__DOT__reg_write,0,0);
	VL_SIG(Tile__DOT__instcache_io_inst,31,0);
	VL_SIG(Tile__DOT__datapath_io_ex_io_alu_a_src,31,0);
	VL_SIG(Tile__DOT__datapath_io_ex_io_alu_b_src,31,0);
	VL_SIG(Tile__DOT__datapath_io_mem_io_mem_writedata,31,0);
	VL_SIG(Tile__DOT__datapath_io_wb_io_wb_reg_writedata,31,0);
	VL_SIG(Tile__DOT__regfile_io_rs1_out,31,0);
	VL_SIG(Tile__DOT__regfile_io_rs2_out,31,0);
	VL_SIG(Tile__DOT__pc__DOT__pc_reg,31,0);
	VL_SIG(Tile__DOT__datapath__DOT___T_140,31,0);
	VL_SIG(Tile__DOT__datapath__DOT___T_188,31,0);
	VL_SIG(Tile__DOT__datapath__DOT___T_198,31,0);
	VL_SIG(Tile__DOT__if_id_register__DOT__pc,31,0);
	VL_SIG(Tile__DOT__if_id_register__DOT__pc_4,31,0);
	VL_SIG(Tile__DOT__if_id_register__DOT__inst,31,0);
	VL_SIG(Tile__DOT__regfile__DOT__regfile___05FT_273_data,31,0);
	VL_SIG(Tile__DOT__immgen__DOT___T_318,31,0);
	VL_SIG(Tile__DOT__id_ex_register__DOT__pc,31,0);
	VL_SIG(Tile__DOT__id_ex_register__DOT__pc_4,31,0);
	VL_SIG(Tile__DOT__id_ex_register__DOT__rs1_out,31,0);
	VL_SIG(Tile__DOT__id_ex_register__DOT__rs2_out,31,0);
	VL_SIG(Tile__DOT__id_ex_register__DOT__imm,31,0);
	VL_SIG(Tile__DOT__id_ex_register__DOT__inst,31,0);
	VL_SIGW(Tile__DOT__alu__DOT___T_1057,94,0,3);
	VL_SIG(Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1210,31,0);
	VL_SIG(Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1222,31,0);
	VL_SIG(Tile__DOT__branch_predictor__DOT__addr_buffer__DOT___T_1234,31,0);
	VL_SIG(Tile__DOT__datacache__DOT__cache___05FT_1905_data,31,0);
	VL_SIG(Tile__DOT__ex_mem_register__DOT__alu_sum,31,0);
	VL_SIG(Tile__DOT__ex_mem_register__DOT__rs2_out,31,0);
	VL_SIG(Tile__DOT__ex_mem_register__DOT__pc_4,31,0);
	VL_SIG(Tile__DOT__ex_mem_register__DOT__imm,31,0);
	VL_SIG(Tile__DOT__ex_mem_register__DOT__aui_pc,31,0);
	VL_SIG(Tile__DOT__mem_wb_register__DOT__dataout,31,0);
	VL_SIG(Tile__DOT__mem_wb_register__DOT__alu_sum,31,0);
	VL_SIG(Tile__DOT__mem_wb_register__DOT__pc_4,31,0);
	VL_SIG(Tile__DOT__mem_wb_register__DOT__imm,31,0);
	VL_SIG(Tile__DOT__mem_wb_register__DOT__aui_pc,31,0);
	VL_SIG64(Tile__DOT__datapath__DOT___T_142,33,0);
	VL_SIG64(Tile__DOT__datapath__DOT___T_156,32,0);
	VL_SIG64(Tile__DOT__datacache__DOT___T_1902,46,0);
	VL_SIG64(Tile__DOT__datacache__DOT___T_1910,46,0);
	VL_SIG8(Tile__DOT__instcache__DOT__cache[1024],7,0);
	VL_SIG(Tile__DOT__regfile__DOT__regfile[32],31,0);
	VL_SIG(Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__buffer[3],31,0);
    };
    struct {
	VL_SIG8(Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__counter[3],1,0);
	VL_SIG8(Tile__DOT__branch_predictor__DOT__addr_buffer__DOT__is_used[3],0,0);
	VL_SIG(Tile__DOT__datacache__DOT__cache[32],31,0);
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    VL_SIG8(__Vtablechg1[128],0,0);
    static VL_ST_SIG8(__Vtable1_Tile__DOT__branch_predictor__DOT__dynamic_counter_status[128],1,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VTile__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTile);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VTile(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VTile();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VTile__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VTile__Syms* symsp, bool first);
  private:
    static QData _change_request(VTile__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VTile__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VTile__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VTile__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VTile__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VTile__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VTile__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VTile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
