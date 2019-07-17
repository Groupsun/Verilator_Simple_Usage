// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAdder_Buffer__Syms.h"


//======================

void VAdder_Buffer::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VAdder_Buffer::traceInit, &VAdder_Buffer::traceFull, &VAdder_Buffer::traceChg, this);
}
void VAdder_Buffer::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAdder_Buffer* t=(VAdder_Buffer*)userthis;
    VAdder_Buffer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAdder_Buffer::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAdder_Buffer* t=(VAdder_Buffer*)userthis;
    VAdder_Buffer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VAdder_Buffer::traceInitThis(VAdder_Buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAdder_Buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAdder_Buffer::traceFullThis(VAdder_Buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAdder_Buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAdder_Buffer::traceInitThis__1(VAdder_Buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAdder_Buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+19,"clock",-1);
	vcdp->declBit(c+20,"reset",-1);
	vcdp->declBus(c+21,"io_addr_input",-1,31,0);
	vcdp->declBit(c+22,"io_flush",-1);
	vcdp->declBit(c+23,"io_record",-1);
	vcdp->declBus(c+24,"io_front",-1,31,0);
	vcdp->declBit(c+19,"Addr_Buffer clock",-1);
	vcdp->declBit(c+20,"Addr_Buffer reset",-1);
	vcdp->declBus(c+21,"Addr_Buffer io_addr_input",-1,31,0);
	vcdp->declBit(c+22,"Addr_Buffer io_flush",-1);
	vcdp->declBit(c+23,"Addr_Buffer io_record",-1);
	vcdp->declBus(c+24,"Addr_Buffer io_front",-1,31,0);
	{int i; for (i=0; i<3; i++) {
		vcdp->declBus(c+1+i*1,"Addr_Buffer buffer",(i+0),31,0);}}
	// Tracing: Addr_Buffer _RAND_0 // Ignored: Inlined leading underscore at Adder_Buffer.v:10
	vcdp->declBus(c+4,"Addr_Buffer buffer__T_17_data",-1,31,0);
	vcdp->declBus(c+34,"Addr_Buffer buffer__T_17_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_1 // Ignored: Inlined leading underscore at Adder_Buffer.v:13
	vcdp->declBus(c+5,"Addr_Buffer buffer__T_18_data",-1,31,0);
	vcdp->declBus(c+35,"Addr_Buffer buffer__T_18_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_2 // Ignored: Inlined leading underscore at Adder_Buffer.v:16
	vcdp->declBus(c+6,"Addr_Buffer buffer__T_23_data",-1,31,0);
	vcdp->declBus(c+36,"Addr_Buffer buffer__T_23_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_3 // Ignored: Inlined leading underscore at Adder_Buffer.v:19
	vcdp->declBus(c+5,"Addr_Buffer buffer__T_24_data",-1,31,0);
	vcdp->declBus(c+35,"Addr_Buffer buffer__T_24_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_4 // Ignored: Inlined leading underscore at Adder_Buffer.v:22
	vcdp->declBus(c+4,"Addr_Buffer buffer__T_108_data",-1,31,0);
	vcdp->declBus(c+34,"Addr_Buffer buffer__T_108_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_5 // Ignored: Inlined leading underscore at Adder_Buffer.v:25
	vcdp->declBus(c+4,"Addr_Buffer buffer__T_110_data",-1,31,0);
	vcdp->declBus(c+34,"Addr_Buffer buffer__T_110_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_6 // Ignored: Inlined leading underscore at Adder_Buffer.v:28
	vcdp->declBus(c+6,"Addr_Buffer buffer__T_120_data",-1,31,0);
	vcdp->declBus(c+36,"Addr_Buffer buffer__T_120_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_7 // Ignored: Inlined leading underscore at Adder_Buffer.v:31
	vcdp->declBus(c+6,"Addr_Buffer buffer__T_122_data",-1,31,0);
	vcdp->declBus(c+36,"Addr_Buffer buffer__T_122_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_8 // Ignored: Inlined leading underscore at Adder_Buffer.v:34
	vcdp->declBus(c+5,"Addr_Buffer buffer__T_132_data",-1,31,0);
	vcdp->declBus(c+35,"Addr_Buffer buffer__T_132_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_9 // Ignored: Inlined leading underscore at Adder_Buffer.v:37
	vcdp->declBus(c+5,"Addr_Buffer buffer__T_134_data",-1,31,0);
	vcdp->declBus(c+35,"Addr_Buffer buffer__T_134_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_10 // Ignored: Inlined leading underscore at Adder_Buffer.v:40
	vcdp->declBus(c+25,"Addr_Buffer buffer__T_102_data",-1,31,0);
	vcdp->declBus(c+34,"Addr_Buffer buffer__T_102_addr",-1,1,0);
	vcdp->declBit(c+37,"Addr_Buffer buffer__T_102_mask",-1);
	vcdp->declBit(c+37,"Addr_Buffer buffer__T_102_en",-1);
	vcdp->declBus(c+26,"Addr_Buffer buffer__T_114_data",-1,31,0);
	vcdp->declBus(c+36,"Addr_Buffer buffer__T_114_addr",-1,1,0);
	vcdp->declBit(c+37,"Addr_Buffer buffer__T_114_mask",-1);
	vcdp->declBit(c+37,"Addr_Buffer buffer__T_114_en",-1);
	vcdp->declBus(c+27,"Addr_Buffer buffer__T_126_data",-1,31,0);
	vcdp->declBus(c+35,"Addr_Buffer buffer__T_126_addr",-1,1,0);
	vcdp->declBit(c+37,"Addr_Buffer buffer__T_126_mask",-1);
	vcdp->declBit(c+37,"Addr_Buffer buffer__T_126_en",-1);
	{int i; for (i=0; i<3; i++) {
		vcdp->declBus(c+7+i*1,"Addr_Buffer counter",(i+0),1,0);}}
	// Tracing: Addr_Buffer _RAND_11 // Ignored: Inlined leading underscore at Adder_Buffer.v:54
	vcdp->declBus(c+10,"Addr_Buffer counter__T_11_data",-1,1,0);
	vcdp->declBus(c+34,"Addr_Buffer counter__T_11_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_12 // Ignored: Inlined leading underscore at Adder_Buffer.v:57
	vcdp->declBus(c+11,"Addr_Buffer counter__T_12_data",-1,1,0);
	vcdp->declBus(c+36,"Addr_Buffer counter__T_12_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_13 // Ignored: Inlined leading underscore at Adder_Buffer.v:60
	vcdp->declBus(c+10,"Addr_Buffer counter__T_14_data",-1,1,0);
	vcdp->declBus(c+34,"Addr_Buffer counter__T_14_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_14 // Ignored: Inlined leading underscore at Adder_Buffer.v:63
	vcdp->declBus(c+12,"Addr_Buffer counter__T_15_data",-1,1,0);
	vcdp->declBus(c+35,"Addr_Buffer counter__T_15_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_15 // Ignored: Inlined leading underscore at Adder_Buffer.v:66
	vcdp->declBus(c+11,"Addr_Buffer counter__T_20_data",-1,1,0);
	vcdp->declBus(c+36,"Addr_Buffer counter__T_20_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_16 // Ignored: Inlined leading underscore at Adder_Buffer.v:69
	vcdp->declBus(c+12,"Addr_Buffer counter__T_21_data",-1,1,0);
	vcdp->declBus(c+35,"Addr_Buffer counter__T_21_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_17 // Ignored: Inlined leading underscore at Adder_Buffer.v:72
	vcdp->declBus(c+10,"Addr_Buffer counter__T_53_data",-1,1,0);
	vcdp->declBus(c+34,"Addr_Buffer counter__T_53_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_18 // Ignored: Inlined leading underscore at Adder_Buffer.v:75
	vcdp->declBus(c+11,"Addr_Buffer counter__T_59_data",-1,1,0);
	vcdp->declBus(c+36,"Addr_Buffer counter__T_59_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_19 // Ignored: Inlined leading underscore at Adder_Buffer.v:78
	vcdp->declBus(c+12,"Addr_Buffer counter__T_65_data",-1,1,0);
	vcdp->declBus(c+35,"Addr_Buffer counter__T_65_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_20 // Ignored: Inlined leading underscore at Adder_Buffer.v:81
	vcdp->declBus(c+10,"Addr_Buffer counter__T_71_data",-1,1,0);
	vcdp->declBus(c+34,"Addr_Buffer counter__T_71_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_21 // Ignored: Inlined leading underscore at Adder_Buffer.v:84
	vcdp->declBus(c+10,"Addr_Buffer counter__T_74_data",-1,1,0);
	vcdp->declBus(c+34,"Addr_Buffer counter__T_74_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_22 // Ignored: Inlined leading underscore at Adder_Buffer.v:87
	vcdp->declBus(c+10,"Addr_Buffer counter__T_76_data",-1,1,0);
	vcdp->declBus(c+34,"Addr_Buffer counter__T_76_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_23 // Ignored: Inlined leading underscore at Adder_Buffer.v:90
	vcdp->declBus(c+11,"Addr_Buffer counter__T_82_data",-1,1,0);
	vcdp->declBus(c+36,"Addr_Buffer counter__T_82_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_24 // Ignored: Inlined leading underscore at Adder_Buffer.v:93
	vcdp->declBus(c+11,"Addr_Buffer counter__T_85_data",-1,1,0);
	vcdp->declBus(c+36,"Addr_Buffer counter__T_85_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_25 // Ignored: Inlined leading underscore at Adder_Buffer.v:96
	vcdp->declBus(c+11,"Addr_Buffer counter__T_87_data",-1,1,0);
	vcdp->declBus(c+36,"Addr_Buffer counter__T_87_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_26 // Ignored: Inlined leading underscore at Adder_Buffer.v:99
	vcdp->declBus(c+12,"Addr_Buffer counter__T_93_data",-1,1,0);
	vcdp->declBus(c+35,"Addr_Buffer counter__T_93_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_27 // Ignored: Inlined leading underscore at Adder_Buffer.v:102
	vcdp->declBus(c+12,"Addr_Buffer counter__T_96_data",-1,1,0);
	vcdp->declBus(c+35,"Addr_Buffer counter__T_96_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_28 // Ignored: Inlined leading underscore at Adder_Buffer.v:105
	vcdp->declBus(c+12,"Addr_Buffer counter__T_98_data",-1,1,0);
	vcdp->declBus(c+35,"Addr_Buffer counter__T_98_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_29 // Ignored: Inlined leading underscore at Adder_Buffer.v:108
	vcdp->declBus(c+10,"Addr_Buffer counter__T_104_data",-1,1,0);
	vcdp->declBus(c+34,"Addr_Buffer counter__T_104_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_30 // Ignored: Inlined leading underscore at Adder_Buffer.v:111
	vcdp->declBus(c+11,"Addr_Buffer counter__T_116_data",-1,1,0);
	vcdp->declBus(c+36,"Addr_Buffer counter__T_116_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_31 // Ignored: Inlined leading underscore at Adder_Buffer.v:114
	vcdp->declBus(c+12,"Addr_Buffer counter__T_128_data",-1,1,0);
	vcdp->declBus(c+35,"Addr_Buffer counter__T_128_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_32 // Ignored: Inlined leading underscore at Adder_Buffer.v:117
	vcdp->declBus(c+28,"Addr_Buffer counter__T_69_data",-1,1,0);
	vcdp->declBus(c+34,"Addr_Buffer counter__T_69_addr",-1,1,0);
	vcdp->declBit(c+37,"Addr_Buffer counter__T_69_mask",-1);
	vcdp->declBit(c+37,"Addr_Buffer counter__T_69_en",-1);
	vcdp->declBus(c+29,"Addr_Buffer counter__T_80_data",-1,1,0);
	vcdp->declBus(c+36,"Addr_Buffer counter__T_80_addr",-1,1,0);
	vcdp->declBit(c+37,"Addr_Buffer counter__T_80_mask",-1);
	vcdp->declBit(c+37,"Addr_Buffer counter__T_80_en",-1);
	vcdp->declBus(c+30,"Addr_Buffer counter__T_91_data",-1,1,0);
	vcdp->declBus(c+35,"Addr_Buffer counter__T_91_addr",-1,1,0);
	vcdp->declBit(c+37,"Addr_Buffer counter__T_91_mask",-1);
	vcdp->declBit(c+37,"Addr_Buffer counter__T_91_en",-1);
	{int i; for (i=0; i<3; i++) {
		vcdp->declBit(c+13+i*1,"Addr_Buffer is_used",(i+0));}}
	// Tracing: Addr_Buffer _RAND_33 // Ignored: Inlined leading underscore at Adder_Buffer.v:131
	vcdp->declBit(c+16,"Addr_Buffer is_used__T_27_data",-1);
	vcdp->declBus(c+34,"Addr_Buffer is_used__T_27_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_34 // Ignored: Inlined leading underscore at Adder_Buffer.v:134
	vcdp->declBit(c+17,"Addr_Buffer is_used__T_29_data",-1);
	vcdp->declBus(c+36,"Addr_Buffer is_used__T_29_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_35 // Ignored: Inlined leading underscore at Adder_Buffer.v:137
	vcdp->declBit(c+16,"Addr_Buffer is_used__T_35_data",-1);
	vcdp->declBus(c+34,"Addr_Buffer is_used__T_35_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_36 // Ignored: Inlined leading underscore at Adder_Buffer.v:140
	vcdp->declBit(c+16,"Addr_Buffer is_used__T_37_data",-1);
	vcdp->declBus(c+34,"Addr_Buffer is_used__T_37_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_37 // Ignored: Inlined leading underscore at Adder_Buffer.v:143
	vcdp->declBit(c+17,"Addr_Buffer is_used__T_41_data",-1);
	vcdp->declBus(c+36,"Addr_Buffer is_used__T_41_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_38 // Ignored: Inlined leading underscore at Adder_Buffer.v:146
	vcdp->declBit(c+17,"Addr_Buffer is_used__T_43_data",-1);
	vcdp->declBus(c+36,"Addr_Buffer is_used__T_43_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_39 // Ignored: Inlined leading underscore at Adder_Buffer.v:149
	vcdp->declBit(c+18,"Addr_Buffer is_used__T_47_data",-1);
	vcdp->declBus(c+35,"Addr_Buffer is_used__T_47_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_40 // Ignored: Inlined leading underscore at Adder_Buffer.v:152
	vcdp->declBit(c+18,"Addr_Buffer is_used__T_49_data",-1);
	vcdp->declBus(c+35,"Addr_Buffer is_used__T_49_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_41 // Ignored: Inlined leading underscore at Adder_Buffer.v:155
	vcdp->declBit(c+16,"Addr_Buffer is_used__T_73_data",-1);
	vcdp->declBus(c+34,"Addr_Buffer is_used__T_73_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_42 // Ignored: Inlined leading underscore at Adder_Buffer.v:158
	vcdp->declBit(c+17,"Addr_Buffer is_used__T_84_data",-1);
	vcdp->declBus(c+36,"Addr_Buffer is_used__T_84_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_43 // Ignored: Inlined leading underscore at Adder_Buffer.v:161
	vcdp->declBit(c+18,"Addr_Buffer is_used__T_95_data",-1);
	vcdp->declBus(c+35,"Addr_Buffer is_used__T_95_addr",-1,1,0);
	// Tracing: Addr_Buffer _RAND_44 // Ignored: Inlined leading underscore at Adder_Buffer.v:164
	vcdp->declBit(c+31,"Addr_Buffer is_used__T_51_data",-1);
	vcdp->declBus(c+34,"Addr_Buffer is_used__T_51_addr",-1,1,0);
	vcdp->declBit(c+37,"Addr_Buffer is_used__T_51_mask",-1);
	vcdp->declBit(c+37,"Addr_Buffer is_used__T_51_en",-1);
	vcdp->declBit(c+32,"Addr_Buffer is_used__T_57_data",-1);
	vcdp->declBus(c+36,"Addr_Buffer is_used__T_57_addr",-1,1,0);
	vcdp->declBit(c+37,"Addr_Buffer is_used__T_57_mask",-1);
	vcdp->declBit(c+37,"Addr_Buffer is_used__T_57_en",-1);
	vcdp->declBit(c+33,"Addr_Buffer is_used__T_63_data",-1);
	vcdp->declBus(c+35,"Addr_Buffer is_used__T_63_addr",-1,1,0);
	vcdp->declBit(c+37,"Addr_Buffer is_used__T_63_mask",-1);
	vcdp->declBit(c+37,"Addr_Buffer is_used__T_63_en",-1);
	// Tracing: Addr_Buffer _T_13 // Ignored: Inlined leading underscore at Adder_Buffer.v:177
	// Tracing: Addr_Buffer _T_16 // Ignored: Inlined leading underscore at Adder_Buffer.v:178
	// Tracing: Addr_Buffer _T_19 // Ignored: Inlined leading underscore at Adder_Buffer.v:179
	// Tracing: Addr_Buffer _T_22 // Ignored: Inlined leading underscore at Adder_Buffer.v:180
	// Tracing: Addr_Buffer _T_25 // Ignored: Inlined leading underscore at Adder_Buffer.v:181
	// Tracing: Addr_Buffer _T_28 // Ignored: Inlined leading underscore at Adder_Buffer.v:182
	// Tracing: Addr_Buffer _T_30 // Ignored: Inlined leading underscore at Adder_Buffer.v:183
	// Tracing: Addr_Buffer _T_31 // Ignored: Inlined leading underscore at Adder_Buffer.v:184
	// Tracing: Addr_Buffer _T_32 // Ignored: Inlined leading underscore at Adder_Buffer.v:185
	// Tracing: Addr_Buffer _T_34 // Ignored: Inlined leading underscore at Adder_Buffer.v:186
	// Tracing: Addr_Buffer _T_36 // Ignored: Inlined leading underscore at Adder_Buffer.v:187
	// Tracing: Addr_Buffer _T_38 // Ignored: Inlined leading underscore at Adder_Buffer.v:188
	// Tracing: Addr_Buffer _T_40 // Ignored: Inlined leading underscore at Adder_Buffer.v:189
	// Tracing: Addr_Buffer _T_42 // Ignored: Inlined leading underscore at Adder_Buffer.v:190
	// Tracing: Addr_Buffer _T_44 // Ignored: Inlined leading underscore at Adder_Buffer.v:191
	// Tracing: Addr_Buffer _T_46 // Ignored: Inlined leading underscore at Adder_Buffer.v:192
	// Tracing: Addr_Buffer _T_48 // Ignored: Inlined leading underscore at Adder_Buffer.v:193
	// Tracing: Addr_Buffer _T_50 // Ignored: Inlined leading underscore at Adder_Buffer.v:194
	// Tracing: Addr_Buffer _T_54 // Ignored: Inlined leading underscore at Adder_Buffer.v:195
	// Tracing: Addr_Buffer _T_55 // Ignored: Inlined leading underscore at Adder_Buffer.v:196
	// Tracing: Addr_Buffer _T_60 // Ignored: Inlined leading underscore at Adder_Buffer.v:197
	// Tracing: Addr_Buffer _T_61 // Ignored: Inlined leading underscore at Adder_Buffer.v:198
	// Tracing: Addr_Buffer _T_66 // Ignored: Inlined leading underscore at Adder_Buffer.v:199
	// Tracing: Addr_Buffer _T_67 // Ignored: Inlined leading underscore at Adder_Buffer.v:200
	// Tracing: Addr_Buffer _T_72 // Ignored: Inlined leading underscore at Adder_Buffer.v:201
	// Tracing: Addr_Buffer _T_75 // Ignored: Inlined leading underscore at Adder_Buffer.v:202
	// Tracing: Addr_Buffer _T_77 // Ignored: Inlined leading underscore at Adder_Buffer.v:203
	// Tracing: Addr_Buffer _T_78 // Ignored: Inlined leading underscore at Adder_Buffer.v:204
	// Tracing: Addr_Buffer _T_79 // Ignored: Inlined leading underscore at Adder_Buffer.v:205
	// Tracing: Addr_Buffer _T_83 // Ignored: Inlined leading underscore at Adder_Buffer.v:206
	// Tracing: Addr_Buffer _T_86 // Ignored: Inlined leading underscore at Adder_Buffer.v:207
	// Tracing: Addr_Buffer _T_88 // Ignored: Inlined leading underscore at Adder_Buffer.v:208
	// Tracing: Addr_Buffer _T_89 // Ignored: Inlined leading underscore at Adder_Buffer.v:209
	// Tracing: Addr_Buffer _T_90 // Ignored: Inlined leading underscore at Adder_Buffer.v:210
	// Tracing: Addr_Buffer _T_94 // Ignored: Inlined leading underscore at Adder_Buffer.v:211
	// Tracing: Addr_Buffer _T_97 // Ignored: Inlined leading underscore at Adder_Buffer.v:212
	// Tracing: Addr_Buffer _T_99 // Ignored: Inlined leading underscore at Adder_Buffer.v:213
	// Tracing: Addr_Buffer _T_100 // Ignored: Inlined leading underscore at Adder_Buffer.v:214
	// Tracing: Addr_Buffer _T_101 // Ignored: Inlined leading underscore at Adder_Buffer.v:215
	// Tracing: Addr_Buffer _T_105 // Ignored: Inlined leading underscore at Adder_Buffer.v:216
	// Tracing: Addr_Buffer _T_109 // Ignored: Inlined leading underscore at Adder_Buffer.v:217
	// Tracing: Addr_Buffer _T_111 // Ignored: Inlined leading underscore at Adder_Buffer.v:218
	// Tracing: Addr_Buffer _T_112 // Ignored: Inlined leading underscore at Adder_Buffer.v:219
	// Tracing: Addr_Buffer _T_117 // Ignored: Inlined leading underscore at Adder_Buffer.v:220
	// Tracing: Addr_Buffer _T_121 // Ignored: Inlined leading underscore at Adder_Buffer.v:221
	// Tracing: Addr_Buffer _T_123 // Ignored: Inlined leading underscore at Adder_Buffer.v:222
	// Tracing: Addr_Buffer _T_124 // Ignored: Inlined leading underscore at Adder_Buffer.v:223
	// Tracing: Addr_Buffer _T_129 // Ignored: Inlined leading underscore at Adder_Buffer.v:224
	// Tracing: Addr_Buffer _T_133 // Ignored: Inlined leading underscore at Adder_Buffer.v:225
	// Tracing: Addr_Buffer _T_135 // Ignored: Inlined leading underscore at Adder_Buffer.v:226
	// Tracing: Addr_Buffer _T_136 // Ignored: Inlined leading underscore at Adder_Buffer.v:227
    }
}

void VAdder_Buffer::traceFullThis__1(VAdder_Buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAdder_Buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus(c+1,(vlTOPp->Addr_Buffer__DOT__buffer[0]),32);
	vcdp->fullBus(c+2,(vlTOPp->Addr_Buffer__DOT__buffer[1]),32);
	vcdp->fullBus(c+3,(vlTOPp->Addr_Buffer__DOT__buffer[2]),32);
	vcdp->fullBus(c+4,(vlTOPp->Addr_Buffer__DOT__buffer
			   [0U]),32);
	vcdp->fullBus(c+5,(vlTOPp->Addr_Buffer__DOT__buffer
			   [2U]),32);
	vcdp->fullBus(c+6,(vlTOPp->Addr_Buffer__DOT__buffer
			   [1U]),32);
	vcdp->fullBus(c+7,(vlTOPp->Addr_Buffer__DOT__counter[0]),2);
	vcdp->fullBus(c+8,(vlTOPp->Addr_Buffer__DOT__counter[1]),2);
	vcdp->fullBus(c+9,(vlTOPp->Addr_Buffer__DOT__counter[2]),2);
	vcdp->fullBus(c+10,(vlTOPp->Addr_Buffer__DOT__counter
			    [0U]),2);
	vcdp->fullBus(c+11,(vlTOPp->Addr_Buffer__DOT__counter
			    [1U]),2);
	vcdp->fullBus(c+12,(vlTOPp->Addr_Buffer__DOT__counter
			    [2U]),2);
	vcdp->fullBit(c+13,(vlTOPp->Addr_Buffer__DOT__is_used[0]));
	vcdp->fullBit(c+14,(vlTOPp->Addr_Buffer__DOT__is_used[1]));
	vcdp->fullBit(c+15,(vlTOPp->Addr_Buffer__DOT__is_used[2]));
	vcdp->fullBit(c+16,(vlTOPp->Addr_Buffer__DOT__is_used
			    [0U]));
	vcdp->fullBit(c+17,(vlTOPp->Addr_Buffer__DOT__is_used
			    [1U]));
	vcdp->fullBit(c+18,(vlTOPp->Addr_Buffer__DOT__is_used
			    [2U]));
	vcdp->fullBit(c+19,(vlTOPp->clock));
	vcdp->fullBit(c+20,(vlTOPp->reset));
	vcdp->fullBus(c+21,(vlTOPp->io_addr_input),32);
	vcdp->fullBit(c+22,(vlTOPp->io_flush));
	vcdp->fullBit(c+23,(vlTOPp->io_record));
	vcdp->fullBus(c+24,(vlTOPp->io_front),32);
	vcdp->fullBus(c+25,(((IData)(vlTOPp->io_flush)
			      ? 0U : ((2U == vlTOPp->Addr_Buffer__DOT__counter
				       [0U]) ? 0U : 
				      ((IData)(vlTOPp->io_record)
				        ? ((0U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32))
					    ? vlTOPp->io_addr_input
					    : vlTOPp->Addr_Buffer__DOT__buffer
					   [0U]) : 
				       vlTOPp->Addr_Buffer__DOT__buffer
				       [0U])))),32);
	vcdp->fullBus(c+26,(((IData)(vlTOPp->io_flush)
			      ? 0U : ((2U == vlTOPp->Addr_Buffer__DOT__counter
				       [1U]) ? 0U : 
				      ((IData)(vlTOPp->io_record)
				        ? ((1U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32))
					    ? vlTOPp->io_addr_input
					    : vlTOPp->Addr_Buffer__DOT__buffer
					   [1U]) : 
				       vlTOPp->Addr_Buffer__DOT__buffer
				       [1U])))),32);
	vcdp->fullBus(c+27,(((IData)(vlTOPp->io_flush)
			      ? 0U : ((2U == vlTOPp->Addr_Buffer__DOT__counter
				       [2U]) ? 0U : 
				      ((IData)(vlTOPp->io_record)
				        ? ((2U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32))
					    ? vlTOPp->io_addr_input
					    : vlTOPp->Addr_Buffer__DOT__buffer
					   [2U]) : 
				       vlTOPp->Addr_Buffer__DOT__buffer
				       [2U])))),32);
	vcdp->fullBus(c+28,((3U & ((IData)(vlTOPp->io_flush)
				    ? 0U : ((2U == 
					     vlTOPp->Addr_Buffer__DOT__counter
					     [0U]) ? 0U
					     : (vlTOPp->Addr_Buffer__DOT__is_used
						[0U]
						 ? 
						((IData)(1U) 
						 + 
						 vlTOPp->Addr_Buffer__DOT__counter
						 [0U])
						 : 
						vlTOPp->Addr_Buffer__DOT__counter
						[0U]))))),2);
	vcdp->fullBus(c+29,((3U & ((IData)(vlTOPp->io_flush)
				    ? 0U : ((2U == 
					     vlTOPp->Addr_Buffer__DOT__counter
					     [1U]) ? 0U
					     : (vlTOPp->Addr_Buffer__DOT__is_used
						[1U]
						 ? 
						((IData)(1U) 
						 + 
						 vlTOPp->Addr_Buffer__DOT__counter
						 [1U])
						 : 
						vlTOPp->Addr_Buffer__DOT__counter
						[1U]))))),2);
	vcdp->fullBus(c+30,((3U & ((IData)(vlTOPp->io_flush)
				    ? 0U : ((2U == 
					     vlTOPp->Addr_Buffer__DOT__counter
					     [2U]) ? 0U
					     : (vlTOPp->Addr_Buffer__DOT__is_used
						[2U]
						 ? 
						((IData)(1U) 
						 + 
						 vlTOPp->Addr_Buffer__DOT__counter
						 [2U])
						 : 
						vlTOPp->Addr_Buffer__DOT__counter
						[2U]))))),2);
	vcdp->fullBit(c+31,(((~ (IData)(vlTOPp->io_flush)) 
			     & ((2U != vlTOPp->Addr_Buffer__DOT__counter
				 [0U]) & ((IData)(vlTOPp->io_record)
					   ? ((0U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32)) 
					      | vlTOPp->Addr_Buffer__DOT__is_used
					      [0U])
					   : vlTOPp->Addr_Buffer__DOT__is_used
					  [0U])))));
	vcdp->fullBit(c+32,(((~ (IData)(vlTOPp->io_flush)) 
			     & ((2U != vlTOPp->Addr_Buffer__DOT__counter
				 [1U]) & ((IData)(vlTOPp->io_record)
					   ? ((1U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32)) 
					      | vlTOPp->Addr_Buffer__DOT__is_used
					      [1U])
					   : vlTOPp->Addr_Buffer__DOT__is_used
					  [1U])))));
	vcdp->fullBit(c+33,(((~ (IData)(vlTOPp->io_flush)) 
			     & ((2U != vlTOPp->Addr_Buffer__DOT__counter
				 [2U]) & ((IData)(vlTOPp->io_record)
					   ? ((2U == (IData)(vlTOPp->Addr_Buffer__DOT___T_32)) 
					      | vlTOPp->Addr_Buffer__DOT__is_used
					      [2U])
					   : vlTOPp->Addr_Buffer__DOT__is_used
					  [2U])))));
	vcdp->fullBus(c+34,(0U),2);
	vcdp->fullBus(c+35,(2U),2);
	vcdp->fullBus(c+36,(1U),2);
	vcdp->fullBit(c+37,(1U));
    }
}
