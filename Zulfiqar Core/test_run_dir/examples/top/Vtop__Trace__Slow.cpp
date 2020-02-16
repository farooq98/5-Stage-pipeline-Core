// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vtop::traceInit, &Vtop::traceFull, &Vtop::traceChg, this);
}
void Vtop::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vtop* t=(Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vtop::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtop* t=(Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vtop::traceInitThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vtop::traceFullThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtop::traceInitThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+83,"clock",-1);
	vcdp->declBit  (c+84,"reset",-1);
	vcdp->declBus  (c+85,"io_output",-1,31,0);
	vcdp->declBit  (c+83,"top clock",-1);
	vcdp->declBit  (c+84,"top reset",-1);
	vcdp->declBus  (c+85,"top io_output",-1,31,0);
	vcdp->declBit  (c+83,"top pc_clock",-1);
	vcdp->declBus  (c+1,"top pc_io_input",-1,31,0);
	vcdp->declBus  (c+47,"top pc_io_pc4",-1,31,0);
	vcdp->declBus  (c+48,"top pc_io_pcout",-1,31,0);
	vcdp->declBit  (c+83,"top insmem_clock",-1);
	vcdp->declBus  (c+49,"top insmem_io_address",-1,31,0);
	vcdp->declBus  (c+2,"top insmem_io_data",-1,31,0);
	vcdp->declBus  (c+3,"top control_io_opcode",-1,6,0);
	vcdp->declBit  (c+4,"top control_io_MemWrite",-1);
	vcdp->declBit  (c+5,"top control_io_Branch",-1);
	vcdp->declBit  (c+6,"top control_io_MemRead",-1);
	vcdp->declBit  (c+7,"top control_io_RegWrite",-1);
	vcdp->declBit  (c+6,"top control_io_MemtoReg",-1);
	vcdp->declBus  (c+8,"top control_io_AluOp",-1,2,0);
	vcdp->declBus  (c+9,"top control_io_OpA",-1,1,0);
	vcdp->declBit  (c+10,"top control_io_OpB",-1);
	vcdp->declBus  (c+11,"top control_io_ExtSel",-1,1,0);
	vcdp->declBus  (c+12,"top control_io_NextPc",-1,1,0);
	vcdp->declBus  (c+2,"top immediategen_io_instruction",-1,31,0);
	vcdp->declBus  (c+48,"top immediategen_io_pc",-1,31,0);
	vcdp->declBus  (c+13,"top immediategen_io_s_imm",-1,31,0);
	vcdp->declBus  (c+14,"top immediategen_io_sb_imm",-1,31,0);
	vcdp->declBus  (c+15,"top immediategen_io_uj_imm",-1,31,0);
	vcdp->declBus  (c+16,"top immediategen_io_u_imm",-1,31,0);
	vcdp->declBus  (c+17,"top immediategen_io_i_imm",-1,31,0);
	vcdp->declBit  (c+83,"top regfile_clock",-1);
	vcdp->declBit  (c+7,"top regfile_io_regwrite",-1);
	vcdp->declBus  (c+18,"top regfile_io_rd",-1,4,0);
	vcdp->declBus  (c+19,"top regfile_io_rs1s",-1,4,0);
	vcdp->declBus  (c+20,"top regfile_io_rs2s",-1,4,0);
	vcdp->declBus  (c+21,"top regfile_io_writedata",-1,31,0);
	vcdp->declBus  (c+22,"top regfile_io_rs1",-1,31,0);
	vcdp->declBus  (c+23,"top regfile_io_rs2",-1,31,0);
	vcdp->declBus  (c+8,"top alucontrol_io_ALUop",-1,2,0);
	vcdp->declBus  (c+24,"top alucontrol_io_func3",-1,2,0);
	vcdp->declBit  (c+25,"top alucontrol_io_func7",-1);
	vcdp->declBus  (c+26,"top alucontrol_io_ALUcont",-1,4,0);
	vcdp->declBus  (c+17,"top jalr_io_a",-1,31,0);
	vcdp->declBus  (c+22,"top jalr_io_b",-1,31,0);
	vcdp->declBus  (c+27,"top jalr_io_o",-1,31,0);
	vcdp->declBus  (c+26,"top alu_io_AluControl",-1,4,0);
	vcdp->declBus  (c+28,"top alu_io_in1",-1,31,0);
	vcdp->declBus  (c+29,"top alu_io_in2",-1,31,0);
	vcdp->declBit  (c+30,"top alu_io_Branch",-1);
	vcdp->declBus  (c+31,"top alu_io_out",-1,31,0);
	vcdp->declBit  (c+83,"top dataMem_clock",-1);
	vcdp->declBit  (c+6,"top dataMem_io_load",-1);
	vcdp->declBit  (c+4,"top dataMem_io_store",-1);
	vcdp->declBus  (c+32,"top dataMem_io_address",-1,7,0);
	vcdp->declBus  (c+23,"top dataMem_io_storeData",-1,31,0);
	vcdp->declBus  (c+33,"top dataMem_io_dataOut",-1,31,0);
	// Tracing: top _T_7 // Ignored: Inlined leading underscore at top.v:1506
	// Tracing: top _T_17 // Ignored: Inlined leading underscore at top.v:1507
	// Tracing: top _T_19 // Ignored: Inlined leading underscore at top.v:1508
	// Tracing: top _T_20 // Ignored: Inlined leading underscore at top.v:1509
	// Tracing: top _GEN_1 // Ignored: Inlined leading underscore at top.v:1510
	// Tracing: top _GEN_2 // Ignored: Inlined leading underscore at top.v:1511
	// Tracing: top _T_24 // Ignored: Inlined leading underscore at top.v:1512
	// Tracing: top _T_28 // Ignored: Inlined leading underscore at top.v:1513
	// Tracing: top _T_30 // Ignored: Inlined leading underscore at top.v:1514
	// Tracing: top _GEN_4 // Ignored: Inlined leading underscore at top.v:1515
	// Tracing: top _GEN_5 // Ignored: Inlined leading underscore at top.v:1516
	// Tracing: top _GEN_6 // Ignored: Inlined leading underscore at top.v:1517
	// Tracing: top _T_35 // Ignored: Inlined leading underscore at top.v:1518
	// Tracing: top _GEN_9 // Ignored: Inlined leading underscore at top.v:1519
	// Tracing: top _T_39 // Ignored: Inlined leading underscore at top.v:1520
	// Tracing: top _T_41 // Ignored: Inlined leading underscore at top.v:1521
	// Tracing: top _T_42 // Ignored: Inlined leading underscore at top.v:1522
	// Tracing: top _T_44 // Ignored: Inlined leading underscore at top.v:1523
	// Tracing: top _T_48 // Ignored: Inlined leading underscore at top.v:1524
	// Tracing: top _GEN_12 // Ignored: Inlined leading underscore at top.v:1525
	// Tracing: top _T_50 // Ignored: Inlined leading underscore at top.v:1526
	// Tracing: top _T_51 // Ignored: Inlined leading underscore at top.v:1527
	// Tracing: top _T_54 // Ignored: Inlined leading underscore at top.v:1528
	// Tracing: top _GEN_14 // Ignored: Inlined leading underscore at top.v:1529
	// Tracing: top _GEN_15 // Ignored: Inlined leading underscore at top.v:1530
	vcdp->declBit  (c+83,"top pc clock",-1);
	vcdp->declBus  (c+1,"top pc io_input",-1,31,0);
	vcdp->declBus  (c+47,"top pc io_pc4",-1,31,0);
	vcdp->declBus  (c+48,"top pc io_pcout",-1,31,0);
	vcdp->declBus  (c+48,"top pc reg$",-1,31,0);
	// Tracing: top pc _RAND_0 // Ignored: Inlined leading underscore at top.v:8
	// Tracing: top pc _T_14 // Ignored: Inlined leading underscore at top.v:9
	vcdp->declBit  (c+83,"top insmem clock",-1);
	vcdp->declBus  (c+49,"top insmem io_address",-1,31,0);
	vcdp->declBus  (c+2,"top insmem io_data",-1,31,0);
	// Tracing: top insmem mem // Ignored: Wide memory > --trace-max-array ents at top.v:52
	// Tracing: top insmem _RAND_0 // Ignored: Inlined leading underscore at top.v:53
	vcdp->declBus  (c+2,"top insmem mem__T_12_data",-1,31,0);
	vcdp->declBus  (c+50,"top insmem mem__T_12_addr",-1,9,0);
	vcdp->declBit  (c+83,"top insmem BindsTo_0_insmem_Inst clock",-1);
	vcdp->declBus  (c+49,"top insmem BindsTo_0_insmem_Inst io_address",-1,31,0);
	vcdp->declBus  (c+2,"top insmem BindsTo_0_insmem_Inst io_data",-1,31,0);
	vcdp->declBus  (c+3,"top control io_opcode",-1,6,0);
	vcdp->declBit  (c+4,"top control io_MemWrite",-1);
	vcdp->declBit  (c+5,"top control io_Branch",-1);
	vcdp->declBit  (c+6,"top control io_MemRead",-1);
	vcdp->declBit  (c+7,"top control io_RegWrite",-1);
	vcdp->declBit  (c+6,"top control io_MemtoReg",-1);
	vcdp->declBus  (c+8,"top control io_AluOp",-1,2,0);
	vcdp->declBus  (c+9,"top control io_OpA",-1,1,0);
	vcdp->declBit  (c+10,"top control io_OpB",-1);
	vcdp->declBus  (c+11,"top control io_ExtSel",-1,1,0);
	vcdp->declBus  (c+12,"top control io_NextPc",-1,1,0);
	vcdp->declBus  (c+3,"top control c1_io_opcode",-1,6,0);
	vcdp->declBit  (c+34,"top control c1_io_R",-1);
	vcdp->declBit  (c+35,"top control c1_io_Load",-1);
	vcdp->declBit  (c+36,"top control c1_io_Store",-1);
	vcdp->declBit  (c+37,"top control c1_io_Branch",-1);
	vcdp->declBit  (c+38,"top control c1_io_I",-1);
	vcdp->declBit  (c+39,"top control c1_io_Jal",-1);
	vcdp->declBit  (c+40,"top control c1_io_Jalr",-1);
	vcdp->declBit  (c+41,"top control c1_io_Lui",-1);
	vcdp->declBit  (c+34,"top control c2_io_R",-1);
	vcdp->declBit  (c+35,"top control c2_io_Load",-1);
	vcdp->declBit  (c+36,"top control c2_io_Store",-1);
	vcdp->declBit  (c+37,"top control c2_io_Branch1",-1);
	vcdp->declBit  (c+38,"top control c2_io_I",-1);
	vcdp->declBit  (c+39,"top control c2_io_Jal",-1);
	vcdp->declBit  (c+40,"top control c2_io_Jalr",-1);
	vcdp->declBit  (c+41,"top control c2_io_Lui",-1);
	vcdp->declBit  (c+4,"top control c2_io_MemWrite",-1);
	vcdp->declBit  (c+5,"top control c2_io_Branch",-1);
	vcdp->declBit  (c+6,"top control c2_io_MemRead",-1);
	vcdp->declBit  (c+7,"top control c2_io_RegWrite",-1);
	vcdp->declBit  (c+6,"top control c2_io_MemtoReg",-1);
	vcdp->declBus  (c+8,"top control c2_io_AluOp",-1,2,0);
	vcdp->declBus  (c+9,"top control c2_io_OpA",-1,1,0);
	vcdp->declBit  (c+10,"top control c2_io_OpB",-1);
	vcdp->declBus  (c+11,"top control c2_io_ExtSel",-1,1,0);
	vcdp->declBus  (c+12,"top control c2_io_NextPc",-1,1,0);
	vcdp->declBus  (c+3,"top control c1 io_opcode",-1,6,0);
	vcdp->declBit  (c+34,"top control c1 io_R",-1);
	vcdp->declBit  (c+35,"top control c1 io_Load",-1);
	vcdp->declBit  (c+36,"top control c1 io_Store",-1);
	vcdp->declBit  (c+37,"top control c1 io_Branch",-1);
	vcdp->declBit  (c+38,"top control c1 io_I",-1);
	vcdp->declBit  (c+39,"top control c1 io_Jal",-1);
	vcdp->declBit  (c+40,"top control c1 io_Jalr",-1);
	vcdp->declBit  (c+41,"top control c1 io_Lui",-1);
	// Tracing: top control c1 _T_24 // Ignored: Inlined leading underscore at top.v:102
	// Tracing: top control c1 _T_34 // Ignored: Inlined leading underscore at top.v:103
	// Tracing: top control c1 _T_44 // Ignored: Inlined leading underscore at top.v:104
	// Tracing: top control c1 _T_54 // Ignored: Inlined leading underscore at top.v:105
	// Tracing: top control c1 _T_64 // Ignored: Inlined leading underscore at top.v:106
	// Tracing: top control c1 _T_74 // Ignored: Inlined leading underscore at top.v:107
	// Tracing: top control c1 _T_84 // Ignored: Inlined leading underscore at top.v:108
	// Tracing: top control c1 _T_94 // Ignored: Inlined leading underscore at top.v:109
	// Tracing: top control c1 _GEN_4 // Ignored: Inlined leading underscore at top.v:110
	// Tracing: top control c1 _GEN_6 // Ignored: Inlined leading underscore at top.v:111
	// Tracing: top control c1 _GEN_8 // Ignored: Inlined leading underscore at top.v:112
	// Tracing: top control c1 _GEN_11 // Ignored: Inlined leading underscore at top.v:113
	// Tracing: top control c1 _GEN_12 // Ignored: Inlined leading underscore at top.v:114
	// Tracing: top control c1 _GEN_13 // Ignored: Inlined leading underscore at top.v:115
	// Tracing: top control c1 _GEN_16 // Ignored: Inlined leading underscore at top.v:116
	// Tracing: top control c1 _GEN_17 // Ignored: Inlined leading underscore at top.v:117
	// Tracing: top control c1 _GEN_18 // Ignored: Inlined leading underscore at top.v:118
	// Tracing: top control c1 _GEN_19 // Ignored: Inlined leading underscore at top.v:119
	// Tracing: top control c1 _GEN_22 // Ignored: Inlined leading underscore at top.v:120
	// Tracing: top control c1 _GEN_23 // Ignored: Inlined leading underscore at top.v:121
	// Tracing: top control c1 _GEN_24 // Ignored: Inlined leading underscore at top.v:122
	// Tracing: top control c1 _GEN_25 // Ignored: Inlined leading underscore at top.v:123
	// Tracing: top control c1 _GEN_26 // Ignored: Inlined leading underscore at top.v:124
	// Tracing: top control c1 _GEN_29 // Ignored: Inlined leading underscore at top.v:125
	// Tracing: top control c1 _GEN_30 // Ignored: Inlined leading underscore at top.v:126
	// Tracing: top control c1 _GEN_31 // Ignored: Inlined leading underscore at top.v:127
	// Tracing: top control c1 _GEN_32 // Ignored: Inlined leading underscore at top.v:128
	// Tracing: top control c1 _GEN_33 // Ignored: Inlined leading underscore at top.v:129
	// Tracing: top control c1 _GEN_34 // Ignored: Inlined leading underscore at top.v:130
	vcdp->declBit  (c+34,"top control c2 io_R",-1);
	vcdp->declBit  (c+35,"top control c2 io_Load",-1);
	vcdp->declBit  (c+36,"top control c2 io_Store",-1);
	vcdp->declBit  (c+37,"top control c2 io_Branch1",-1);
	vcdp->declBit  (c+38,"top control c2 io_I",-1);
	vcdp->declBit  (c+39,"top control c2 io_Jal",-1);
	vcdp->declBit  (c+40,"top control c2 io_Jalr",-1);
	vcdp->declBit  (c+41,"top control c2 io_Lui",-1);
	vcdp->declBit  (c+4,"top control c2 io_MemWrite",-1);
	vcdp->declBit  (c+5,"top control c2 io_Branch",-1);
	vcdp->declBit  (c+6,"top control c2 io_MemRead",-1);
	vcdp->declBit  (c+7,"top control c2 io_RegWrite",-1);
	vcdp->declBit  (c+6,"top control c2 io_MemtoReg",-1);
	vcdp->declBus  (c+8,"top control c2 io_AluOp",-1,2,0);
	vcdp->declBus  (c+9,"top control c2 io_OpA",-1,1,0);
	vcdp->declBit  (c+10,"top control c2 io_OpB",-1);
	vcdp->declBus  (c+11,"top control c2 io_ExtSel",-1,1,0);
	vcdp->declBus  (c+12,"top control c2 io_NextPc",-1,1,0);
	// Tracing: top control c2 _GEN_2 // Ignored: Inlined leading underscore at top.v:189
	// Tracing: top control c2 _GEN_3 // Ignored: Inlined leading underscore at top.v:190
	// Tracing: top control c2 _GEN_5 // Ignored: Inlined leading underscore at top.v:191
	// Tracing: top control c2 _GEN_6 // Ignored: Inlined leading underscore at top.v:192
	// Tracing: top control c2 _GEN_7 // Ignored: Inlined leading underscore at top.v:193
	// Tracing: top control c2 _GEN_8 // Ignored: Inlined leading underscore at top.v:194
	// Tracing: top control c2 _GEN_9 // Ignored: Inlined leading underscore at top.v:195
	// Tracing: top control c2 _GEN_11 // Ignored: Inlined leading underscore at top.v:196
	// Tracing: top control c2 _GEN_12 // Ignored: Inlined leading underscore at top.v:197
	// Tracing: top control c2 _GEN_13 // Ignored: Inlined leading underscore at top.v:198
	// Tracing: top control c2 _GEN_14 // Ignored: Inlined leading underscore at top.v:199
	// Tracing: top control c2 _GEN_15 // Ignored: Inlined leading underscore at top.v:200
	// Tracing: top control c2 _GEN_17 // Ignored: Inlined leading underscore at top.v:201
	// Tracing: top control c2 _GEN_18 // Ignored: Inlined leading underscore at top.v:202
	// Tracing: top control c2 _GEN_19 // Ignored: Inlined leading underscore at top.v:203
	// Tracing: top control c2 _GEN_20 // Ignored: Inlined leading underscore at top.v:204
	// Tracing: top control c2 _GEN_21 // Ignored: Inlined leading underscore at top.v:205
	// Tracing: top control c2 _GEN_22 // Ignored: Inlined leading underscore at top.v:206
	// Tracing: top control c2 _GEN_25 // Ignored: Inlined leading underscore at top.v:207
	// Tracing: top control c2 _GEN_26 // Ignored: Inlined leading underscore at top.v:208
	// Tracing: top control c2 _GEN_27 // Ignored: Inlined leading underscore at top.v:209
	// Tracing: top control c2 _GEN_28 // Ignored: Inlined leading underscore at top.v:210
	// Tracing: top control c2 _GEN_29 // Ignored: Inlined leading underscore at top.v:211
	// Tracing: top control c2 _GEN_30 // Ignored: Inlined leading underscore at top.v:212
	// Tracing: top control c2 _GEN_32 // Ignored: Inlined leading underscore at top.v:213
	// Tracing: top control c2 _GEN_34 // Ignored: Inlined leading underscore at top.v:214
	// Tracing: top control c2 _GEN_35 // Ignored: Inlined leading underscore at top.v:215
	// Tracing: top control c2 _GEN_36 // Ignored: Inlined leading underscore at top.v:216
	// Tracing: top control c2 _GEN_37 // Ignored: Inlined leading underscore at top.v:217
	// Tracing: top control c2 _GEN_38 // Ignored: Inlined leading underscore at top.v:218
	// Tracing: top control c2 _GEN_39 // Ignored: Inlined leading underscore at top.v:219
	// Tracing: top control c2 _GEN_40 // Ignored: Inlined leading underscore at top.v:220
	// Tracing: top control c2 _GEN_41 // Ignored: Inlined leading underscore at top.v:221
	// Tracing: top control c2 _GEN_43 // Ignored: Inlined leading underscore at top.v:222
	// Tracing: top control c2 _GEN_44 // Ignored: Inlined leading underscore at top.v:223
	// Tracing: top control c2 _GEN_45 // Ignored: Inlined leading underscore at top.v:224
	// Tracing: top control c2 _GEN_46 // Ignored: Inlined leading underscore at top.v:225
	// Tracing: top control c2 _GEN_47 // Ignored: Inlined leading underscore at top.v:226
	// Tracing: top control c2 _GEN_48 // Ignored: Inlined leading underscore at top.v:227
	vcdp->declBus  (c+2,"top immediategen io_instruction",-1,31,0);
	vcdp->declBus  (c+48,"top immediategen io_pc",-1,31,0);
	vcdp->declBus  (c+13,"top immediategen io_s_imm",-1,31,0);
	vcdp->declBus  (c+14,"top immediategen io_sb_imm",-1,31,0);
	vcdp->declBus  (c+15,"top immediategen io_uj_imm",-1,31,0);
	vcdp->declBus  (c+16,"top immediategen io_u_imm",-1,31,0);
	vcdp->declBus  (c+17,"top immediategen io_i_imm",-1,31,0);
	// Tracing: top immediategen _T_19 // Ignored: Inlined leading underscore at top.v:378
	// Tracing: top immediategen _T_20 // Ignored: Inlined leading underscore at top.v:379
	// Tracing: top immediategen _T_21 // Ignored: Inlined leading underscore at top.v:380
	vcdp->declBus  (c+42,"top immediategen s_imm13",-1,11,0);
	// Tracing: top immediategen _T_22 // Ignored: Inlined leading underscore at top.v:382
	// Tracing: top immediategen _T_26 // Ignored: Inlined leading underscore at top.v:383
	// Tracing: top immediategen _T_27 // Ignored: Inlined leading underscore at top.v:384
	// Tracing: top immediategen _T_28 // Ignored: Inlined leading underscore at top.v:385
	// Tracing: top immediategen _T_30 // Ignored: Inlined leading underscore at top.v:386
	// Tracing: top immediategen _T_31 // Ignored: Inlined leading underscore at top.v:387
	// Tracing: top immediategen _T_32 // Ignored: Inlined leading underscore at top.v:388
	// Tracing: top immediategen _T_33 // Ignored: Inlined leading underscore at top.v:389
	// Tracing: top immediategen _T_38 // Ignored: Inlined leading underscore at top.v:390
	vcdp->declBus  (c+43,"top immediategen sb_imm13",-1,12,0);
	// Tracing: top immediategen _T_39 // Ignored: Inlined leading underscore at top.v:392
	// Tracing: top immediategen _T_43 // Ignored: Inlined leading underscore at top.v:393
	// Tracing: top immediategen _T_44 // Ignored: Inlined leading underscore at top.v:394
	// Tracing: top immediategen _T_45 // Ignored: Inlined leading underscore at top.v:395
	// Tracing: top immediategen _T_46 // Ignored: Inlined leading underscore at top.v:396
	// Tracing: top immediategen _T_47 // Ignored: Inlined leading underscore at top.v:397
	// Tracing: top immediategen _T_48 // Ignored: Inlined leading underscore at top.v:398
	// Tracing: top immediategen _T_49 // Ignored: Inlined leading underscore at top.v:399
	// Tracing: top immediategen _T_52 // Ignored: Inlined leading underscore at top.v:400
	// Tracing: top immediategen _T_53 // Ignored: Inlined leading underscore at top.v:401
	// Tracing: top immediategen _T_54 // Ignored: Inlined leading underscore at top.v:402
	// Tracing: top immediategen _T_59 // Ignored: Inlined leading underscore at top.v:403
	vcdp->declBus  (c+44,"top immediategen uj_imm21",-1,20,0);
	// Tracing: top immediategen _T_60 // Ignored: Inlined leading underscore at top.v:405
	// Tracing: top immediategen _T_64 // Ignored: Inlined leading underscore at top.v:406
	// Tracing: top immediategen _T_65 // Ignored: Inlined leading underscore at top.v:407
	// Tracing: top immediategen _T_66 // Ignored: Inlined leading underscore at top.v:408
	// Tracing: top immediategen _T_67 // Ignored: Inlined leading underscore at top.v:409
	// Tracing: top immediategen _GEN_0 // Ignored: Inlined leading underscore at top.v:410
	// Tracing: top immediategen _T_69 // Ignored: Inlined leading underscore at top.v:411
	// Tracing: top immediategen _T_70 // Ignored: Inlined leading underscore at top.v:412
	// Tracing: top immediategen _T_71 // Ignored: Inlined leading underscore at top.v:413
	// Tracing: top immediategen _T_76 // Ignored: Inlined leading underscore at top.v:414
	// Tracing: top immediategen _T_77 // Ignored: Inlined leading underscore at top.v:415
	// Tracing: top immediategen _T_78 // Ignored: Inlined leading underscore at top.v:416
	// Tracing: top immediategen _GEN_1 // Ignored: Inlined leading underscore at top.v:417
	// Tracing: top immediategen _T_80 // Ignored: Inlined leading underscore at top.v:418
	// Tracing: top immediategen _T_81 // Ignored: Inlined leading underscore at top.v:419
	// Tracing: top immediategen _T_86 // Ignored: Inlined leading underscore at top.v:420
	// Tracing: top immediategen _T_87 // Ignored: Inlined leading underscore at top.v:421
	// Tracing: top immediategen _T_88 // Ignored: Inlined leading underscore at top.v:422
	// Tracing: top immediategen _GEN_2 // Ignored: Inlined leading underscore at top.v:423
	// Tracing: top immediategen _GEN_3 // Ignored: Inlined leading underscore at top.v:424
	vcdp->declBit  (c+83,"top regfile clock",-1);
	vcdp->declBit  (c+7,"top regfile io_regwrite",-1);
	vcdp->declBus  (c+18,"top regfile io_rd",-1,4,0);
	vcdp->declBus  (c+19,"top regfile io_rs1s",-1,4,0);
	vcdp->declBus  (c+20,"top regfile io_rs2s",-1,4,0);
	vcdp->declBus  (c+21,"top regfile io_writedata",-1,31,0);
	vcdp->declBus  (c+22,"top regfile io_rs1",-1,31,0);
	vcdp->declBus  (c+23,"top regfile io_rs2",-1,31,0);
	vcdp->declBus  (c+51,"top regfile register_0",-1,31,0);
	// Tracing: top regfile _RAND_0 // Ignored: Inlined leading underscore at top.v:489
	vcdp->declBus  (c+52,"top regfile register_1",-1,31,0);
	// Tracing: top regfile _RAND_1 // Ignored: Inlined leading underscore at top.v:491
	vcdp->declBus  (c+53,"top regfile register_2",-1,31,0);
	// Tracing: top regfile _RAND_2 // Ignored: Inlined leading underscore at top.v:493
	vcdp->declBus  (c+54,"top regfile register_3",-1,31,0);
	// Tracing: top regfile _RAND_3 // Ignored: Inlined leading underscore at top.v:495
	vcdp->declBus  (c+55,"top regfile register_4",-1,31,0);
	// Tracing: top regfile _RAND_4 // Ignored: Inlined leading underscore at top.v:497
	vcdp->declBus  (c+56,"top regfile register_5",-1,31,0);
	// Tracing: top regfile _RAND_5 // Ignored: Inlined leading underscore at top.v:499
	vcdp->declBus  (c+57,"top regfile register_6",-1,31,0);
	// Tracing: top regfile _RAND_6 // Ignored: Inlined leading underscore at top.v:501
	vcdp->declBus  (c+58,"top regfile register_7",-1,31,0);
	// Tracing: top regfile _RAND_7 // Ignored: Inlined leading underscore at top.v:503
	vcdp->declBus  (c+59,"top regfile register_8",-1,31,0);
	// Tracing: top regfile _RAND_8 // Ignored: Inlined leading underscore at top.v:505
	vcdp->declBus  (c+60,"top regfile register_9",-1,31,0);
	// Tracing: top regfile _RAND_9 // Ignored: Inlined leading underscore at top.v:507
	vcdp->declBus  (c+61,"top regfile register_10",-1,31,0);
	// Tracing: top regfile _RAND_10 // Ignored: Inlined leading underscore at top.v:509
	vcdp->declBus  (c+62,"top regfile register_11",-1,31,0);
	// Tracing: top regfile _RAND_11 // Ignored: Inlined leading underscore at top.v:511
	vcdp->declBus  (c+63,"top regfile register_12",-1,31,0);
	// Tracing: top regfile _RAND_12 // Ignored: Inlined leading underscore at top.v:513
	vcdp->declBus  (c+64,"top regfile register_13",-1,31,0);
	// Tracing: top regfile _RAND_13 // Ignored: Inlined leading underscore at top.v:515
	vcdp->declBus  (c+65,"top regfile register_14",-1,31,0);
	// Tracing: top regfile _RAND_14 // Ignored: Inlined leading underscore at top.v:517
	vcdp->declBus  (c+66,"top regfile register_15",-1,31,0);
	// Tracing: top regfile _RAND_15 // Ignored: Inlined leading underscore at top.v:519
	vcdp->declBus  (c+67,"top regfile register_16",-1,31,0);
	// Tracing: top regfile _RAND_16 // Ignored: Inlined leading underscore at top.v:521
	vcdp->declBus  (c+68,"top regfile register_17",-1,31,0);
	// Tracing: top regfile _RAND_17 // Ignored: Inlined leading underscore at top.v:523
	vcdp->declBus  (c+69,"top regfile register_18",-1,31,0);
	// Tracing: top regfile _RAND_18 // Ignored: Inlined leading underscore at top.v:525
	vcdp->declBus  (c+70,"top regfile register_19",-1,31,0);
	// Tracing: top regfile _RAND_19 // Ignored: Inlined leading underscore at top.v:527
	vcdp->declBus  (c+71,"top regfile register_20",-1,31,0);
	// Tracing: top regfile _RAND_20 // Ignored: Inlined leading underscore at top.v:529
	vcdp->declBus  (c+72,"top regfile register_21",-1,31,0);
	// Tracing: top regfile _RAND_21 // Ignored: Inlined leading underscore at top.v:531
	vcdp->declBus  (c+73,"top regfile register_22",-1,31,0);
	// Tracing: top regfile _RAND_22 // Ignored: Inlined leading underscore at top.v:533
	vcdp->declBus  (c+74,"top regfile register_23",-1,31,0);
	// Tracing: top regfile _RAND_23 // Ignored: Inlined leading underscore at top.v:535
	vcdp->declBus  (c+75,"top regfile register_24",-1,31,0);
	// Tracing: top regfile _RAND_24 // Ignored: Inlined leading underscore at top.v:537
	vcdp->declBus  (c+76,"top regfile register_25",-1,31,0);
	// Tracing: top regfile _RAND_25 // Ignored: Inlined leading underscore at top.v:539
	vcdp->declBus  (c+77,"top regfile register_26",-1,31,0);
	// Tracing: top regfile _RAND_26 // Ignored: Inlined leading underscore at top.v:541
	vcdp->declBus  (c+78,"top regfile register_27",-1,31,0);
	// Tracing: top regfile _RAND_27 // Ignored: Inlined leading underscore at top.v:543
	vcdp->declBus  (c+79,"top regfile register_28",-1,31,0);
	// Tracing: top regfile _RAND_28 // Ignored: Inlined leading underscore at top.v:545
	vcdp->declBus  (c+80,"top regfile register_29",-1,31,0);
	// Tracing: top regfile _RAND_29 // Ignored: Inlined leading underscore at top.v:547
	vcdp->declBus  (c+81,"top regfile register_30",-1,31,0);
	// Tracing: top regfile _RAND_30 // Ignored: Inlined leading underscore at top.v:549
	vcdp->declBus  (c+82,"top regfile register_31",-1,31,0);
	// Tracing: top regfile _RAND_31 // Ignored: Inlined leading underscore at top.v:551
	// Tracing: top regfile _GEN_1 // Ignored: Inlined leading underscore at top.v:552
	// Tracing: top regfile _GEN_2 // Ignored: Inlined leading underscore at top.v:553
	// Tracing: top regfile _GEN_3 // Ignored: Inlined leading underscore at top.v:554
	// Tracing: top regfile _GEN_4 // Ignored: Inlined leading underscore at top.v:555
	// Tracing: top regfile _GEN_5 // Ignored: Inlined leading underscore at top.v:556
	// Tracing: top regfile _GEN_6 // Ignored: Inlined leading underscore at top.v:557
	// Tracing: top regfile _GEN_7 // Ignored: Inlined leading underscore at top.v:558
	// Tracing: top regfile _GEN_8 // Ignored: Inlined leading underscore at top.v:559
	// Tracing: top regfile _GEN_9 // Ignored: Inlined leading underscore at top.v:560
	// Tracing: top regfile _GEN_10 // Ignored: Inlined leading underscore at top.v:561
	// Tracing: top regfile _GEN_11 // Ignored: Inlined leading underscore at top.v:562
	// Tracing: top regfile _GEN_12 // Ignored: Inlined leading underscore at top.v:563
	// Tracing: top regfile _GEN_13 // Ignored: Inlined leading underscore at top.v:564
	// Tracing: top regfile _GEN_14 // Ignored: Inlined leading underscore at top.v:565
	// Tracing: top regfile _GEN_15 // Ignored: Inlined leading underscore at top.v:566
	// Tracing: top regfile _GEN_16 // Ignored: Inlined leading underscore at top.v:567
	// Tracing: top regfile _GEN_17 // Ignored: Inlined leading underscore at top.v:568
	// Tracing: top regfile _GEN_18 // Ignored: Inlined leading underscore at top.v:569
	// Tracing: top regfile _GEN_19 // Ignored: Inlined leading underscore at top.v:570
	// Tracing: top regfile _GEN_20 // Ignored: Inlined leading underscore at top.v:571
	// Tracing: top regfile _GEN_21 // Ignored: Inlined leading underscore at top.v:572
	// Tracing: top regfile _GEN_22 // Ignored: Inlined leading underscore at top.v:573
	// Tracing: top regfile _GEN_23 // Ignored: Inlined leading underscore at top.v:574
	// Tracing: top regfile _GEN_24 // Ignored: Inlined leading underscore at top.v:575
	// Tracing: top regfile _GEN_25 // Ignored: Inlined leading underscore at top.v:576
	// Tracing: top regfile _GEN_26 // Ignored: Inlined leading underscore at top.v:577
	// Tracing: top regfile _GEN_27 // Ignored: Inlined leading underscore at top.v:578
	// Tracing: top regfile _GEN_28 // Ignored: Inlined leading underscore at top.v:579
	// Tracing: top regfile _GEN_29 // Ignored: Inlined leading underscore at top.v:580
	// Tracing: top regfile _GEN_30 // Ignored: Inlined leading underscore at top.v:581
	// Tracing: top regfile _GEN_33 // Ignored: Inlined leading underscore at top.v:582
	// Tracing: top regfile _GEN_34 // Ignored: Inlined leading underscore at top.v:583
	// Tracing: top regfile _GEN_35 // Ignored: Inlined leading underscore at top.v:584
	// Tracing: top regfile _GEN_36 // Ignored: Inlined leading underscore at top.v:585
	// Tracing: top regfile _GEN_37 // Ignored: Inlined leading underscore at top.v:586
	// Tracing: top regfile _GEN_38 // Ignored: Inlined leading underscore at top.v:587
	// Tracing: top regfile _GEN_39 // Ignored: Inlined leading underscore at top.v:588
	// Tracing: top regfile _GEN_40 // Ignored: Inlined leading underscore at top.v:589
	// Tracing: top regfile _GEN_41 // Ignored: Inlined leading underscore at top.v:590
	// Tracing: top regfile _GEN_42 // Ignored: Inlined leading underscore at top.v:591
	// Tracing: top regfile _GEN_43 // Ignored: Inlined leading underscore at top.v:592
	// Tracing: top regfile _GEN_44 // Ignored: Inlined leading underscore at top.v:593
	// Tracing: top regfile _GEN_45 // Ignored: Inlined leading underscore at top.v:594
	// Tracing: top regfile _GEN_46 // Ignored: Inlined leading underscore at top.v:595
	// Tracing: top regfile _GEN_47 // Ignored: Inlined leading underscore at top.v:596
	// Tracing: top regfile _GEN_48 // Ignored: Inlined leading underscore at top.v:597
	// Tracing: top regfile _GEN_49 // Ignored: Inlined leading underscore at top.v:598
	// Tracing: top regfile _GEN_50 // Ignored: Inlined leading underscore at top.v:599
	// Tracing: top regfile _GEN_51 // Ignored: Inlined leading underscore at top.v:600
	// Tracing: top regfile _GEN_52 // Ignored: Inlined leading underscore at top.v:601
	// Tracing: top regfile _GEN_53 // Ignored: Inlined leading underscore at top.v:602
	// Tracing: top regfile _GEN_54 // Ignored: Inlined leading underscore at top.v:603
	// Tracing: top regfile _GEN_55 // Ignored: Inlined leading underscore at top.v:604
	// Tracing: top regfile _GEN_56 // Ignored: Inlined leading underscore at top.v:605
	// Tracing: top regfile _GEN_57 // Ignored: Inlined leading underscore at top.v:606
	// Tracing: top regfile _GEN_58 // Ignored: Inlined leading underscore at top.v:607
	// Tracing: top regfile _GEN_59 // Ignored: Inlined leading underscore at top.v:608
	// Tracing: top regfile _GEN_60 // Ignored: Inlined leading underscore at top.v:609
	// Tracing: top regfile _GEN_61 // Ignored: Inlined leading underscore at top.v:610
	// Tracing: top regfile _GEN_62 // Ignored: Inlined leading underscore at top.v:611
	// Tracing: top regfile _T_62 // Ignored: Inlined leading underscore at top.v:612
	// Tracing: top regfile _GEN_64 // Ignored: Inlined leading underscore at top.v:613
	// Tracing: top regfile _GEN_65 // Ignored: Inlined leading underscore at top.v:614
	// Tracing: top regfile _GEN_66 // Ignored: Inlined leading underscore at top.v:615
	// Tracing: top regfile _GEN_67 // Ignored: Inlined leading underscore at top.v:616
	// Tracing: top regfile _GEN_68 // Ignored: Inlined leading underscore at top.v:617
	// Tracing: top regfile _GEN_69 // Ignored: Inlined leading underscore at top.v:618
	// Tracing: top regfile _GEN_70 // Ignored: Inlined leading underscore at top.v:619
	// Tracing: top regfile _GEN_71 // Ignored: Inlined leading underscore at top.v:620
	// Tracing: top regfile _GEN_72 // Ignored: Inlined leading underscore at top.v:621
	// Tracing: top regfile _GEN_73 // Ignored: Inlined leading underscore at top.v:622
	// Tracing: top regfile _GEN_74 // Ignored: Inlined leading underscore at top.v:623
	// Tracing: top regfile _GEN_75 // Ignored: Inlined leading underscore at top.v:624
	// Tracing: top regfile _GEN_76 // Ignored: Inlined leading underscore at top.v:625
	// Tracing: top regfile _GEN_77 // Ignored: Inlined leading underscore at top.v:626
	// Tracing: top regfile _GEN_78 // Ignored: Inlined leading underscore at top.v:627
	// Tracing: top regfile _GEN_79 // Ignored: Inlined leading underscore at top.v:628
	// Tracing: top regfile _GEN_80 // Ignored: Inlined leading underscore at top.v:629
	// Tracing: top regfile _GEN_81 // Ignored: Inlined leading underscore at top.v:630
	// Tracing: top regfile _GEN_82 // Ignored: Inlined leading underscore at top.v:631
	// Tracing: top regfile _GEN_83 // Ignored: Inlined leading underscore at top.v:632
	// Tracing: top regfile _GEN_84 // Ignored: Inlined leading underscore at top.v:633
	// Tracing: top regfile _GEN_85 // Ignored: Inlined leading underscore at top.v:634
	// Tracing: top regfile _GEN_86 // Ignored: Inlined leading underscore at top.v:635
	// Tracing: top regfile _GEN_87 // Ignored: Inlined leading underscore at top.v:636
	// Tracing: top regfile _GEN_88 // Ignored: Inlined leading underscore at top.v:637
	// Tracing: top regfile _GEN_89 // Ignored: Inlined leading underscore at top.v:638
	// Tracing: top regfile _GEN_90 // Ignored: Inlined leading underscore at top.v:639
	// Tracing: top regfile _GEN_91 // Ignored: Inlined leading underscore at top.v:640
	// Tracing: top regfile _GEN_92 // Ignored: Inlined leading underscore at top.v:641
	// Tracing: top regfile _GEN_93 // Ignored: Inlined leading underscore at top.v:642
	// Tracing: top regfile _GEN_94 // Ignored: Inlined leading underscore at top.v:643
	// Tracing: top regfile _GEN_95 // Ignored: Inlined leading underscore at top.v:644
	// Tracing: top regfile _GEN_96 // Ignored: Inlined leading underscore at top.v:645
	// Tracing: top regfile _GEN_97 // Ignored: Inlined leading underscore at top.v:646
	// Tracing: top regfile _GEN_98 // Ignored: Inlined leading underscore at top.v:647
	// Tracing: top regfile _GEN_99 // Ignored: Inlined leading underscore at top.v:648
	// Tracing: top regfile _GEN_100 // Ignored: Inlined leading underscore at top.v:649
	// Tracing: top regfile _GEN_101 // Ignored: Inlined leading underscore at top.v:650
	// Tracing: top regfile _GEN_102 // Ignored: Inlined leading underscore at top.v:651
	// Tracing: top regfile _GEN_103 // Ignored: Inlined leading underscore at top.v:652
	// Tracing: top regfile _GEN_104 // Ignored: Inlined leading underscore at top.v:653
	// Tracing: top regfile _GEN_105 // Ignored: Inlined leading underscore at top.v:654
	// Tracing: top regfile _GEN_106 // Ignored: Inlined leading underscore at top.v:655
	// Tracing: top regfile _GEN_107 // Ignored: Inlined leading underscore at top.v:656
	// Tracing: top regfile _GEN_108 // Ignored: Inlined leading underscore at top.v:657
	// Tracing: top regfile _GEN_109 // Ignored: Inlined leading underscore at top.v:658
	// Tracing: top regfile _GEN_110 // Ignored: Inlined leading underscore at top.v:659
	// Tracing: top regfile _GEN_111 // Ignored: Inlined leading underscore at top.v:660
	// Tracing: top regfile _GEN_112 // Ignored: Inlined leading underscore at top.v:661
	// Tracing: top regfile _GEN_113 // Ignored: Inlined leading underscore at top.v:662
	// Tracing: top regfile _GEN_114 // Ignored: Inlined leading underscore at top.v:663
	// Tracing: top regfile _GEN_115 // Ignored: Inlined leading underscore at top.v:664
	// Tracing: top regfile _GEN_116 // Ignored: Inlined leading underscore at top.v:665
	// Tracing: top regfile _GEN_117 // Ignored: Inlined leading underscore at top.v:666
	// Tracing: top regfile _GEN_118 // Ignored: Inlined leading underscore at top.v:667
	// Tracing: top regfile _GEN_119 // Ignored: Inlined leading underscore at top.v:668
	// Tracing: top regfile _GEN_120 // Ignored: Inlined leading underscore at top.v:669
	// Tracing: top regfile _GEN_121 // Ignored: Inlined leading underscore at top.v:670
	// Tracing: top regfile _GEN_122 // Ignored: Inlined leading underscore at top.v:671
	// Tracing: top regfile _GEN_123 // Ignored: Inlined leading underscore at top.v:672
	// Tracing: top regfile _GEN_124 // Ignored: Inlined leading underscore at top.v:673
	// Tracing: top regfile _GEN_125 // Ignored: Inlined leading underscore at top.v:674
	// Tracing: top regfile _GEN_126 // Ignored: Inlined leading underscore at top.v:675
	// Tracing: top regfile _GEN_127 // Ignored: Inlined leading underscore at top.v:676
	vcdp->declBus  (c+8,"top alucontrol io_ALUop",-1,2,0);
	vcdp->declBus  (c+24,"top alucontrol io_func3",-1,2,0);
	vcdp->declBit  (c+25,"top alucontrol io_func7",-1);
	vcdp->declBus  (c+26,"top alucontrol io_ALUcont",-1,4,0);
	// Tracing: top alucontrol _T_14 // Ignored: Inlined leading underscore at top.v:1197
	// Tracing: top alucontrol _T_17 // Ignored: Inlined leading underscore at top.v:1198
	// Tracing: top alucontrol _T_19 // Ignored: Inlined leading underscore at top.v:1199
	// Tracing: top alucontrol _T_21 // Ignored: Inlined leading underscore at top.v:1200
	// Tracing: top alucontrol _T_26 // Ignored: Inlined leading underscore at top.v:1201
	// Tracing: top alucontrol _GEN_0 // Ignored: Inlined leading underscore at top.v:1202
	// Tracing: top alucontrol _T_28 // Ignored: Inlined leading underscore at top.v:1203
	// Tracing: top alucontrol _T_30 // Ignored: Inlined leading underscore at top.v:1204
	// Tracing: top alucontrol _T_31 // Ignored: Inlined leading underscore at top.v:1205
	// Tracing: top alucontrol _T_34 // Ignored: Inlined leading underscore at top.v:1206
	// Tracing: top alucontrol _T_39 // Ignored: Inlined leading underscore at top.v:1207
	// Tracing: top alucontrol _GEN_2 // Ignored: Inlined leading underscore at top.v:1208
	// Tracing: top alucontrol _GEN_3 // Ignored: Inlined leading underscore at top.v:1209
	// Tracing: top alucontrol _GEN_4 // Ignored: Inlined leading underscore at top.v:1210
	vcdp->declBus  (c+17,"top jalr io_a",-1,31,0);
	vcdp->declBus  (c+22,"top jalr io_b",-1,31,0);
	vcdp->declBus  (c+27,"top jalr io_o",-1,31,0);
	// Tracing: top jalr _T_11 // Ignored: Inlined leading underscore at top.v:1232
	// Tracing: top jalr _T_12 // Ignored: Inlined leading underscore at top.v:1233
	vcdp->declBus  (c+45,"top jalr add",-1,31,0);
	// Tracing: top jalr _GEN_0 // Ignored: Inlined leading underscore at top.v:1235
	// Tracing: top jalr _T_14 // Ignored: Inlined leading underscore at top.v:1236
	// Tracing: top jalr _T_15 // Ignored: Inlined leading underscore at top.v:1237
	// Tracing: top jalr _GEN_1 // Ignored: Inlined leading underscore at top.v:1238
	vcdp->declBus  (c+26,"top alu io_AluControl",-1,4,0);
	vcdp->declBus  (c+28,"top alu io_in1",-1,31,0);
	vcdp->declBus  (c+29,"top alu io_in2",-1,31,0);
	vcdp->declBit  (c+30,"top alu io_Branch",-1);
	vcdp->declBus  (c+31,"top alu io_out",-1,31,0);
	// Tracing: top alu _T_16 // Ignored: Inlined leading underscore at top.v:1255
	// Tracing: top alu _T_17 // Ignored: Inlined leading underscore at top.v:1256
	// Tracing: top alu _T_18 // Ignored: Inlined leading underscore at top.v:1257
	// Tracing: top alu _T_19 // Ignored: Inlined leading underscore at top.v:1258
	// Tracing: top alu _T_21 // Ignored: Inlined leading underscore at top.v:1259
	// Tracing: top alu _T_22 // Ignored: Inlined leading underscore at top.v:1260
	// Tracing: top alu _GEN_21 // Ignored: Inlined leading underscore at top.v:1261
	// Tracing: top alu _T_23 // Ignored: Inlined leading underscore at top.v:1262
	// Tracing: top alu _T_25 // Ignored: Inlined leading underscore at top.v:1263
	// Tracing: top alu _T_26 // Ignored: Inlined leading underscore at top.v:1264
	// Tracing: top alu _T_27 // Ignored: Inlined leading underscore at top.v:1265
	// Tracing: top alu _T_29 // Ignored: Inlined leading underscore at top.v:1266
	// Tracing: top alu _T_31 // Ignored: Inlined leading underscore at top.v:1267
	// Tracing: top alu _T_32 // Ignored: Inlined leading underscore at top.v:1268
	// Tracing: top alu _T_34 // Ignored: Inlined leading underscore at top.v:1269
	// Tracing: top alu _T_36 // Ignored: Inlined leading underscore at top.v:1270
	// Tracing: top alu _T_37 // Ignored: Inlined leading underscore at top.v:1271
	// Tracing: top alu _T_38 // Ignored: Inlined leading underscore at top.v:1272
	// Tracing: top alu _T_40 // Ignored: Inlined leading underscore at top.v:1273
	// Tracing: top alu _T_41 // Ignored: Inlined leading underscore at top.v:1274
	// Tracing: top alu _T_42 // Ignored: Inlined leading underscore at top.v:1275
	// Tracing: top alu _T_44 // Ignored: Inlined leading underscore at top.v:1276
	// Tracing: top alu _T_45 // Ignored: Inlined leading underscore at top.v:1277
	// Tracing: top alu _T_46 // Ignored: Inlined leading underscore at top.v:1278
	// Tracing: top alu _T_47 // Ignored: Inlined leading underscore at top.v:1279
	// Tracing: top alu _T_49 // Ignored: Inlined leading underscore at top.v:1280
	// Tracing: top alu _T_51 // Ignored: Inlined leading underscore at top.v:1281
	// Tracing: top alu _T_52 // Ignored: Inlined leading underscore at top.v:1282
	// Tracing: top alu _GEN_0 // Ignored: Inlined leading underscore at top.v:1283
	// Tracing: top alu _T_56 // Ignored: Inlined leading underscore at top.v:1284
	// Tracing: top alu _T_57 // Ignored: Inlined leading underscore at top.v:1285
	// Tracing: top alu _T_58 // Ignored: Inlined leading underscore at top.v:1286
	// Tracing: top alu _T_59 // Ignored: Inlined leading underscore at top.v:1287
	// Tracing: top alu _GEN_1 // Ignored: Inlined leading underscore at top.v:1288
	// Tracing: top alu _T_63 // Ignored: Inlined leading underscore at top.v:1289
	// Tracing: top alu _T_65 // Ignored: Inlined leading underscore at top.v:1290
	// Tracing: top alu _T_66 // Ignored: Inlined leading underscore at top.v:1291
	// Tracing: top alu _T_69 // Ignored: Inlined leading underscore at top.v:1292
	// Tracing: top alu _GEN_2 // Ignored: Inlined leading underscore at top.v:1293
	// Tracing: top alu _T_73 // Ignored: Inlined leading underscore at top.v:1294
	// Tracing: top alu _T_74 // Ignored: Inlined leading underscore at top.v:1295
	// Tracing: top alu _GEN_3 // Ignored: Inlined leading underscore at top.v:1296
	// Tracing: top alu _T_78 // Ignored: Inlined leading underscore at top.v:1297
	// Tracing: top alu _T_80 // Ignored: Inlined leading underscore at top.v:1298
	// Tracing: top alu _T_81 // Ignored: Inlined leading underscore at top.v:1299
	// Tracing: top alu _T_82 // Ignored: Inlined leading underscore at top.v:1300
	// Tracing: top alu _GEN_4 // Ignored: Inlined leading underscore at top.v:1301
	// Tracing: top alu _T_87 // Ignored: Inlined leading underscore at top.v:1302
	// Tracing: top alu _GEN_5 // Ignored: Inlined leading underscore at top.v:1303
	// Tracing: top alu _GEN_7 // Ignored: Inlined leading underscore at top.v:1304
	// Tracing: top alu _GEN_8 // Ignored: Inlined leading underscore at top.v:1305
	// Tracing: top alu _GEN_9 // Ignored: Inlined leading underscore at top.v:1306
	// Tracing: top alu _GEN_10 // Ignored: Inlined leading underscore at top.v:1307
	// Tracing: top alu _GEN_11 // Ignored: Inlined leading underscore at top.v:1308
	// Tracing: top alu _GEN_12 // Ignored: Inlined leading underscore at top.v:1309
	// Tracing: top alu _GEN_13 // Ignored: Inlined leading underscore at top.v:1310
	// Tracing: top alu _GEN_14 // Ignored: Inlined leading underscore at top.v:1311
	// Tracing: top alu _GEN_15 // Ignored: Inlined leading underscore at top.v:1312
	// Tracing: top alu _GEN_16 // Ignored: Inlined leading underscore at top.v:1313
	// Tracing: top alu _GEN_17 // Ignored: Inlined leading underscore at top.v:1314
	// Tracing: top alu _GEN_18 // Ignored: Inlined leading underscore at top.v:1315
	// Tracing: top alu _GEN_19 // Ignored: Inlined leading underscore at top.v:1316
	// Tracing: top alu _T_91 // Ignored: Inlined leading underscore at top.v:1317
	// Tracing: top alu _T_92 // Ignored: Inlined leading underscore at top.v:1318
	// Tracing: top alu _T_94 // Ignored: Inlined leading underscore at top.v:1319
	// Tracing: top alu _GEN_22 // Ignored: Inlined leading underscore at top.v:1320
	vcdp->declBit  (c+83,"top dataMem clock",-1);
	vcdp->declBit  (c+6,"top dataMem io_load",-1);
	vcdp->declBit  (c+4,"top dataMem io_store",-1);
	vcdp->declBus  (c+32,"top dataMem io_address",-1,7,0);
	vcdp->declBus  (c+23,"top dataMem io_storeData",-1,31,0);
	vcdp->declBus  (c+33,"top dataMem io_dataOut",-1,31,0);
	// Tracing: top dataMem mem // Ignored: Wide memory > --trace-max-array ents at top.v:1398
	// Tracing: top dataMem _RAND_0 // Ignored: Inlined leading underscore at top.v:1399
	vcdp->declBus  (c+33,"top dataMem mem__T_19_data",-1,31,0);
	vcdp->declBus  (c+46,"top dataMem mem__T_19_addr",-1,9,0);
	vcdp->declBus  (c+23,"top dataMem mem__T_22_data",-1,31,0);
	vcdp->declBus  (c+46,"top dataMem mem__T_22_addr",-1,9,0);
	vcdp->declBit  (c+86,"top dataMem mem__T_22_mask",-1);
	vcdp->declBit  (c+4,"top dataMem mem__T_22_en",-1);
    }
}

void Vtop::traceFullThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(((0U == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_NextPc))
			       ? ((IData)(4U) + vlTOPp->top__DOT__pc__DOT__reg__024)
			       : ((1U == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_NextPc))
				   ? ((((1U == (IData)(vlTOPp->top__DOT__alu__DOT___GEN_19)) 
					& (2U == (3U 
						  & ((IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont) 
						     >> 3U)))) 
				       & ((0x33U != 
					   (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
					  & ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load)) 
					     & ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Store)) 
						& (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Branch)))))
				       ? (vlTOPp->top__DOT__immediategen__DOT___T_45 
					  + vlTOPp->top__DOT__pc__DOT__reg__024)
				       : ((IData)(4U) 
					  + vlTOPp->top__DOT__pc__DOT__reg__024))
				   : ((2U == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_NextPc))
				       ? ((IData)(vlTOPp->top__DOT__immediategen__DOT___T_66) 
					  + (IData)(vlTOPp->top__DOT__immediategen__DOT___GEN_0))
				       : (0xfffffffeU 
					  & (vlTOPp->top__DOT__immediategen__DOT___T_88 
					     + vlTOPp->top__DOT__regfile_io_rs1)))))),32);
	vcdp->fullBus  (c+2,(vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data),32);
	vcdp->fullBus  (c+3,((0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)),7);
	vcdp->fullBit  (c+4,(((0x33U != (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
			      & ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load)) 
				 & (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Store)))));
	vcdp->fullBit  (c+5,(((0x33U != (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
			      & ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load)) 
				 & ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Store)) 
				    & (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Branch))))));
	vcdp->fullBit  (c+6,(((0x33U != (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
			      & (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load))));
	vcdp->fullBit  (c+7,(vlTOPp->top__DOT__control__DOT__c2_io_RegWrite));
	vcdp->fullBus  (c+8,(vlTOPp->top__DOT__control__DOT__c2_io_AluOp),3);
	vcdp->fullBus  (c+9,(vlTOPp->top__DOT__control__DOT__c2_io_OpA),2);
	vcdp->fullBit  (c+10,(((0x33U != (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
			       & ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load) 
				  | ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Store) 
				     | ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Branch)) 
					& ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_I) 
					   | (IData)(vlTOPp->top__DOT__control__DOT__c2__DOT___GEN_14))))))));
	vcdp->fullBus  (c+11,(vlTOPp->top__DOT__control__DOT__c2_io_ExtSel),2);
	vcdp->fullBus  (c+12,(vlTOPp->top__DOT__control__DOT__c2_io_NextPc),2);
	vcdp->fullBus  (c+13,(((((0x800U & (IData)(vlTOPp->top__DOT__immediategen__DOT___T_21))
				  ? 0xfffffU : 0U) 
				<< 0xcU) | (IData)(vlTOPp->top__DOT__immediategen__DOT___T_21))),32);
	vcdp->fullBus  (c+14,((vlTOPp->top__DOT__immediategen__DOT___T_45 
			       + vlTOPp->top__DOT__pc__DOT__reg__024)),32);
	vcdp->fullBus  (c+15,(((IData)(vlTOPp->top__DOT__immediategen__DOT___T_66) 
			       + (IData)(vlTOPp->top__DOT__immediategen__DOT___GEN_0))),32);
	vcdp->fullBus  (c+16,((IData)((VL_ULL(0x7fffffffffff) 
				       & ((QData)((IData)(
							  ((((0x80000000U 
							      & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)
							      ? 0xfffU
							      : 0U) 
							    << 0x14U) 
							   | (0xfffffU 
							      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								 >> 0xcU))))) 
					  << 0xcU)))),32);
	vcdp->fullBus  (c+17,(vlTOPp->top__DOT__immediategen__DOT___T_88),32);
	vcdp->fullBus  (c+18,((0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
					>> 7U))),5);
	vcdp->fullBus  (c+19,((0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
					>> 0xfU))),5);
	vcdp->fullBus  (c+20,((0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
					>> 0x14U))),5);
	vcdp->fullBus  (c+21,(vlTOPp->top__DOT__regfile_io_writedata),32);
	vcdp->fullBus  (c+22,(vlTOPp->top__DOT__regfile_io_rs1),32);
	vcdp->fullBus  (c+23,(vlTOPp->top__DOT__regfile_io_rs2),32);
	vcdp->fullBus  (c+24,((7U & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				     >> 0xcU))),3);
	vcdp->fullBit  (c+25,((1U & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				     >> 0x1eU))));
	vcdp->fullBus  (c+26,(vlTOPp->top__DOT__alucontrol_io_ALUcont),5);
	vcdp->fullBus  (c+27,((0xfffffffeU & (vlTOPp->top__DOT__immediategen__DOT___T_88 
					      + vlTOPp->top__DOT__regfile_io_rs1))),32);
	vcdp->fullBus  (c+28,(vlTOPp->top__DOT__alu_io_in1),32);
	vcdp->fullBus  (c+29,(vlTOPp->top__DOT__alu_io_in2),32);
	vcdp->fullBit  (c+30,(((1U == (IData)(vlTOPp->top__DOT__alu__DOT___GEN_19)) 
			       & (2U == (3U & ((IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont) 
					       >> 3U))))));
	vcdp->fullBus  (c+31,((IData)(vlTOPp->top__DOT__alu__DOT___GEN_19)),32);
	vcdp->fullBus  (c+32,((0xffU & (IData)((vlTOPp->top__DOT__alu__DOT___GEN_19 
						>> 2U)))),8);
	vcdp->fullBus  (c+33,(vlTOPp->top__DOT__dataMem__DOT__mem
			      [(0xffU & (IData)((vlTOPp->top__DOT__alu__DOT___GEN_19 
						 >> 2U)))]),32);
	vcdp->fullBit  (c+34,((0x33U == (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data))));
	vcdp->fullBit  (c+35,(vlTOPp->top__DOT__control__DOT__c1_io_Load));
	vcdp->fullBit  (c+36,(vlTOPp->top__DOT__control__DOT__c1_io_Store));
	vcdp->fullBit  (c+37,(vlTOPp->top__DOT__control__DOT__c1_io_Branch));
	vcdp->fullBit  (c+38,(vlTOPp->top__DOT__control__DOT__c1_io_I));
	vcdp->fullBit  (c+39,(vlTOPp->top__DOT__control__DOT__c1_io_Jal));
	vcdp->fullBit  (c+40,(vlTOPp->top__DOT__control__DOT__c1_io_Jalr));
	vcdp->fullBit  (c+41,(vlTOPp->top__DOT__control__DOT__c1_io_Lui));
	vcdp->fullBus  (c+42,(vlTOPp->top__DOT__immediategen__DOT___T_21),12);
	vcdp->fullBus  (c+43,(vlTOPp->top__DOT__immediategen__DOT___T_38),13);
	vcdp->fullBus  (c+44,(vlTOPp->top__DOT__immediategen__DOT___T_59),21);
	vcdp->fullBus  (c+45,((vlTOPp->top__DOT__immediategen__DOT___T_88 
			       + vlTOPp->top__DOT__regfile_io_rs1)),32);
	vcdp->fullBus  (c+46,((0xffU & (IData)((vlTOPp->top__DOT__alu__DOT___GEN_19 
						>> 2U)))),10);
	vcdp->fullBus  (c+47,(((IData)(4U) + vlTOPp->top__DOT__pc__DOT__reg__024)),32);
	vcdp->fullBus  (c+48,(vlTOPp->top__DOT__pc__DOT__reg__024),32);
	vcdp->fullBus  (c+49,((0x3ffU & (vlTOPp->top__DOT__pc__DOT__reg__024 
					 >> 2U))),32);
	vcdp->fullBus  (c+50,((0x3ffU & (vlTOPp->top__DOT__pc__DOT__reg__024 
					 >> 2U))),10);
	vcdp->fullBus  (c+51,(vlTOPp->top__DOT__regfile__DOT__register_0),32);
	vcdp->fullBus  (c+52,(vlTOPp->top__DOT__regfile__DOT__register_1),32);
	vcdp->fullBus  (c+53,(vlTOPp->top__DOT__regfile__DOT__register_2),32);
	vcdp->fullBus  (c+54,(vlTOPp->top__DOT__regfile__DOT__register_3),32);
	vcdp->fullBus  (c+55,(vlTOPp->top__DOT__regfile__DOT__register_4),32);
	vcdp->fullBus  (c+56,(vlTOPp->top__DOT__regfile__DOT__register_5),32);
	vcdp->fullBus  (c+57,(vlTOPp->top__DOT__regfile__DOT__register_6),32);
	vcdp->fullBus  (c+58,(vlTOPp->top__DOT__regfile__DOT__register_7),32);
	vcdp->fullBus  (c+59,(vlTOPp->top__DOT__regfile__DOT__register_8),32);
	vcdp->fullBus  (c+60,(vlTOPp->top__DOT__regfile__DOT__register_9),32);
	vcdp->fullBus  (c+61,(vlTOPp->top__DOT__regfile__DOT__register_10),32);
	vcdp->fullBus  (c+62,(vlTOPp->top__DOT__regfile__DOT__register_11),32);
	vcdp->fullBus  (c+63,(vlTOPp->top__DOT__regfile__DOT__register_12),32);
	vcdp->fullBus  (c+64,(vlTOPp->top__DOT__regfile__DOT__register_13),32);
	vcdp->fullBus  (c+65,(vlTOPp->top__DOT__regfile__DOT__register_14),32);
	vcdp->fullBus  (c+66,(vlTOPp->top__DOT__regfile__DOT__register_15),32);
	vcdp->fullBus  (c+67,(vlTOPp->top__DOT__regfile__DOT__register_16),32);
	vcdp->fullBus  (c+68,(vlTOPp->top__DOT__regfile__DOT__register_17),32);
	vcdp->fullBus  (c+69,(vlTOPp->top__DOT__regfile__DOT__register_18),32);
	vcdp->fullBus  (c+70,(vlTOPp->top__DOT__regfile__DOT__register_19),32);
	vcdp->fullBus  (c+71,(vlTOPp->top__DOT__regfile__DOT__register_20),32);
	vcdp->fullBus  (c+72,(vlTOPp->top__DOT__regfile__DOT__register_21),32);
	vcdp->fullBus  (c+73,(vlTOPp->top__DOT__regfile__DOT__register_22),32);
	vcdp->fullBus  (c+74,(vlTOPp->top__DOT__regfile__DOT__register_23),32);
	vcdp->fullBus  (c+75,(vlTOPp->top__DOT__regfile__DOT__register_24),32);
	vcdp->fullBus  (c+76,(vlTOPp->top__DOT__regfile__DOT__register_25),32);
	vcdp->fullBus  (c+77,(vlTOPp->top__DOT__regfile__DOT__register_26),32);
	vcdp->fullBus  (c+78,(vlTOPp->top__DOT__regfile__DOT__register_27),32);
	vcdp->fullBus  (c+79,(vlTOPp->top__DOT__regfile__DOT__register_28),32);
	vcdp->fullBus  (c+80,(vlTOPp->top__DOT__regfile__DOT__register_29),32);
	vcdp->fullBus  (c+81,(vlTOPp->top__DOT__regfile__DOT__register_30),32);
	vcdp->fullBus  (c+82,(vlTOPp->top__DOT__regfile__DOT__register_31),32);
	vcdp->fullBit  (c+83,(vlTOPp->clock));
	vcdp->fullBit  (c+84,(vlTOPp->reset));
	vcdp->fullBus  (c+85,(vlTOPp->io_output),32);
	vcdp->fullBit  (c+86,(1U));
    }
}
