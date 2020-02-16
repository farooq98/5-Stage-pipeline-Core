// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCore__Syms.h"


//======================

void VCore::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VCore::traceInit, &VCore::traceFull, &VCore::traceChg, this);
}
void VCore::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VCore* t=(VCore*)userthis;
    VCore__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VCore::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCore* t=(VCore*)userthis;
    VCore__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VCore::traceInitThis(VCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VCore::traceFullThis(VCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCore::traceInitThis__1(VCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+113,"clock",-1);
	vcdp->declBit  (c+114,"reset",-1);
	vcdp->declBus  (c+115,"io_instruction",-1,31,0);
	vcdp->declBus  (c+116,"io_AluOut",-1,31,0);
	vcdp->declBit  (c+117,"io_branchCheck",-1);
	vcdp->declBit  (c+113,"Core clock",-1);
	vcdp->declBit  (c+114,"Core reset",-1);
	vcdp->declBus  (c+115,"Core io_instruction",-1,31,0);
	vcdp->declBus  (c+116,"Core io_AluOut",-1,31,0);
	vcdp->declBit  (c+117,"Core io_branchCheck",-1);
	vcdp->declBus  (c+27,"Core control_io_opcode",-1,6,0);
	vcdp->declBit  (c+1,"Core control_io_memWrite",-1);
	vcdp->declBit  (c+2,"Core control_io_memRead",-1);
	vcdp->declBit  (c+3,"Core control_io_regWrite",-1);
	vcdp->declBit  (c+2,"Core control_io_memToReg",-1);
	vcdp->declBus  (c+4,"Core control_io_aluOp",-1,2,0);
	vcdp->declBus  (c+5,"Core control_io_oprA",-1,1,0);
	vcdp->declBit  (c+6,"Core control_io_oprB",-1);
	vcdp->declBus  (c+7,"Core control_io_extendSel",-1,1,0);
	vcdp->declBus  (c+28,"Core imm_io_ins",-1,31,0);
	vcdp->declBus  (c+29,"Core imm_io_S",-1,31,0);
	vcdp->declBus  (c+30,"Core imm_io_i",-1,31,0);
	vcdp->declBus  (c+31,"Core imm_io_u",-1,31,0);
	vcdp->declBus  (c+4,"Core aluCtrl_io_ALUop",-1,2,0);
	vcdp->declBus  (c+32,"Core aluCtrl_io_func3",-1,2,0);
	vcdp->declBit  (c+33,"Core aluCtrl_io_func7",-1);
	vcdp->declBus  (c+8,"Core aluCtrl_io_out",-1,4,0);
	vcdp->declBus  (c+9,"Core alu_io_a",-1,31,0);
	vcdp->declBus  (c+10,"Core alu_io_b",-1,31,0);
	vcdp->declBus  (c+34,"Core alu_io_aluControl",-1,4,0);
	vcdp->declBit  (c+11,"Core alu_io_branch",-1);
	vcdp->declBus  (c+12,"Core alu_io_aluOut",-1,31,0);
	vcdp->declBit  (c+113,"Core reg$_clock",-1);
	vcdp->declBit  (c+35,"Core reg$_io_regWrite",-1);
	vcdp->declBus  (c+36,"Core reg$_io_rs1_sel",-1,4,0);
	vcdp->declBus  (c+37,"Core reg$_io_rs2_sel",-1,4,0);
	vcdp->declBus  (c+38,"Core reg$_io_rd_sel",-1,4,0);
	vcdp->declBus  (c+13,"Core reg$_io_writeData",-1,31,0);
	vcdp->declBus  (c+39,"Core reg$_io_rs1",-1,31,0);
	vcdp->declBus  (c+14,"Core reg$_io_rs2",-1,31,0);
	vcdp->declBit  (c+113,"Core InsMem_clock",-1);
	vcdp->declBus  (c+40,"Core InsMem_io_wrAddr",-1,31,0);
	vcdp->declBus  (c+15,"Core InsMem_io_rdData",-1,31,0);
	vcdp->declBit  (c+113,"Core PC_clock",-1);
	vcdp->declBit  (c+114,"Core PC_reset",-1);
	vcdp->declBus  (c+41,"Core PC_io_input",-1,31,0);
	vcdp->declBus  (c+41,"Core PC_io_pc4",-1,31,0);
	vcdp->declBus  (c+42,"Core PC_io_pc",-1,31,0);
	vcdp->declBit  (c+113,"Core dataMem_clock",-1);
	vcdp->declBit  (c+43,"Core dataMem_io_load",-1);
	vcdp->declBit  (c+44,"Core dataMem_io_store",-1);
	vcdp->declBus  (c+45,"Core dataMem_io_addrr",-1,7,0);
	vcdp->declBus  (c+46,"Core dataMem_io_storedata",-1,31,0);
	vcdp->declBus  (c+47,"Core dataMem_io_dataOut",-1,31,0);
	vcdp->declBit  (c+113,"Core if_pipe_clock",-1);
	vcdp->declBit  (c+114,"Core if_pipe_reset",-1);
	vcdp->declBus  (c+42,"Core if_pipe_io_pc_in",-1,31,0);
	vcdp->declBus  (c+41,"Core if_pipe_io_pc4_in",-1,31,0);
	vcdp->declBus  (c+115,"Core if_pipe_io_ins_in",-1,31,0);
	vcdp->declBus  (c+48,"Core if_pipe_io_pc_out",-1,31,0);
	vcdp->declBus  (c+28,"Core if_pipe_io_ins_out",-1,31,0);
	vcdp->declBus  (c+49,"Core if_pipe_io_pc4_out",-1,31,0);
	vcdp->declBit  (c+113,"Core id_pipe_clock",-1);
	vcdp->declBit  (c+114,"Core id_pipe_reset",-1);
	vcdp->declBus  (c+36,"Core id_pipe_io_rs1_sel_in",-1,4,0);
	vcdp->declBus  (c+37,"Core id_pipe_io_rs2_sel_in",-1,4,0);
	vcdp->declBit  (c+1,"Core id_pipe_io_memWrite_in",-1);
	vcdp->declBit  (c+2,"Core id_pipe_io_memRead_in",-1);
	vcdp->declBit  (c+2,"Core id_pipe_io_memToReg_in",-1);
	vcdp->declBus  (c+16,"Core id_pipe_io_operandA_in",-1,31,0);
	vcdp->declBus  (c+17,"Core id_pipe_io_operandB_in",-1,31,0);
	vcdp->declBus  (c+50,"Core id_pipe_io_rd_in",-1,4,0);
	vcdp->declBus  (c+14,"Core id_pipe_io_strData_in",-1,31,0);
	vcdp->declBus  (c+8,"Core id_pipe_io_aluCtrl_in",-1,4,0);
	vcdp->declBit  (c+3,"Core id_pipe_io_regWrite_in",-1);
	vcdp->declBus  (c+5,"Core id_pipe_io_opr_A_sel_in",-1,1,0);
	vcdp->declBit  (c+6,"Core id_pipe_io_opr_B_sel_in",-1);
	vcdp->declBus  (c+51,"Core id_pipe_io_rs1_sel_Out",-1,4,0);
	vcdp->declBus  (c+52,"Core id_pipe_io_rs2_sel_Out",-1,4,0);
	vcdp->declBit  (c+53,"Core id_pipe_io_memWrite_out",-1);
	vcdp->declBit  (c+54,"Core id_pipe_io_memRead_out",-1);
	vcdp->declBit  (c+55,"Core id_pipe_io_memToReg_out",-1);
	vcdp->declBus  (c+56,"Core id_pipe_io_operandA_out",-1,31,0);
	vcdp->declBus  (c+57,"Core id_pipe_io_operandB_out",-1,31,0);
	vcdp->declBus  (c+58,"Core id_pipe_io_rd_out",-1,4,0);
	vcdp->declBus  (c+59,"Core id_pipe_io_strData_out",-1,31,0);
	vcdp->declBus  (c+34,"Core id_pipe_io_aluCtrl_out",-1,4,0);
	vcdp->declBit  (c+60,"Core id_pipe_io_regWrite_out",-1);
	vcdp->declBus  (c+61,"Core id_pipe_io_opr_A_sel_Out",-1,1,0);
	vcdp->declBit  (c+62,"Core id_pipe_io_opr_B_sel_Out",-1);
	vcdp->declBit  (c+113,"Core exe_pipe_clock",-1);
	vcdp->declBit  (c+114,"Core exe_pipe_reset",-1);
	vcdp->declBit  (c+53,"Core exe_pipe_io_memWrite_in",-1);
	vcdp->declBit  (c+54,"Core exe_pipe_io_memRead_in",-1);
	vcdp->declBit  (c+55,"Core exe_pipe_io_memToReg_in",-1);
	vcdp->declBus  (c+58,"Core exe_pipe_io_rd_in",-1,4,0);
	vcdp->declBus  (c+12,"Core exe_pipe_io_aluOutput_in",-1,31,0);
	vcdp->declBus  (c+59,"Core exe_pipe_io_strData_in",-1,31,0);
	vcdp->declBit  (c+60,"Core exe_pipe_io_regWrite_in",-1);
	vcdp->declBus  (c+12,"Core exe_pipe_io_alu_Output_input",-1,31,0);
	vcdp->declBit  (c+11,"Core exe_pipe_io_alu_branch_output_input",-1);
	vcdp->declBit  (c+44,"Core exe_pipe_io_memWrite_out",-1);
	vcdp->declBit  (c+43,"Core exe_pipe_io_memRead_out",-1);
	vcdp->declBit  (c+63,"Core exe_pipe_io_memToReg_out",-1);
	vcdp->declBus  (c+64,"Core exe_pipe_io_rd_out",-1,4,0);
	vcdp->declBus  (c+46,"Core exe_pipe_io_strData_out",-1,31,0);
	vcdp->declBus  (c+65,"Core exe_pipe_io_aluOutput_out",-1,31,0);
	vcdp->declBit  (c+66,"Core exe_pipe_io_regWrite_out",-1);
	vcdp->declBus  (c+65,"Core exe_pipe_io_alu_Output_output",-1,31,0);
	vcdp->declBit  (c+67,"Core exe_pipe_io_alu_branch_output_output",-1);
	vcdp->declBit  (c+113,"Core mem_pipe_clock",-1);
	vcdp->declBit  (c+114,"Core mem_pipe_reset",-1);
	vcdp->declBit  (c+63,"Core mem_pipe_io_memToReg_in",-1);
	vcdp->declBus  (c+64,"Core mem_pipe_io_rd_in",-1,4,0);
	vcdp->declBus  (c+47,"Core mem_pipe_io_dataOut_in",-1,31,0);
	vcdp->declBus  (c+65,"Core mem_pipe_io_aluOutput_in",-1,31,0);
	vcdp->declBit  (c+66,"Core mem_pipe_io_regWrite_in",-1);
	vcdp->declBit  (c+68,"Core mem_pipe_io_memToReg_out",-1);
	vcdp->declBus  (c+38,"Core mem_pipe_io_rd_out",-1,4,0);
	vcdp->declBus  (c+69,"Core mem_pipe_io_dataOut_out",-1,31,0);
	vcdp->declBus  (c+70,"Core mem_pipe_io_aluOutput_out",-1,31,0);
	vcdp->declBit  (c+35,"Core mem_pipe_io_regWrite_out",-1);
	vcdp->declBit  (c+66,"Core forwarding_io_exe_pipe_regWrite_out",-1);
	vcdp->declBus  (c+64,"Core forwarding_io_exe_pipe_rd_out",-1,4,0);
	vcdp->declBit  (c+35,"Core forwarding_io_mem_pipe_regWrite_out",-1);
	vcdp->declBus  (c+38,"Core forwarding_io_mem_pipe_rd_out",-1,4,0);
	vcdp->declBus  (c+51,"Core forwarding_io_id_pipe_rs1_sel_out",-1,4,0);
	vcdp->declBus  (c+52,"Core forwarding_io_id_pipe_rs2_sel_out",-1,4,0);
	vcdp->declBus  (c+18,"Core forwarding_io_alu_A",-1,1,0);
	vcdp->declBus  (c+19,"Core forwarding_io_alu_B",-1,1,0);
	// Tracing: Core _T_12 // Ignored: Inlined leading underscore at Core.v:2075
	// Tracing: Core _T_14 // Ignored: Inlined leading underscore at Core.v:2076
	// Tracing: Core _T_16 // Ignored: Inlined leading underscore at Core.v:2077
	// Tracing: Core _T_17 // Ignored: Inlined leading underscore at Core.v:2078
	// Tracing: Core _T_24 // Ignored: Inlined leading underscore at Core.v:2079
	// Tracing: Core _T_26 // Ignored: Inlined leading underscore at Core.v:2080
	// Tracing: Core _T_27 // Ignored: Inlined leading underscore at Core.v:2081
	// Tracing: Core _T_29 // Ignored: Inlined leading underscore at Core.v:2082
	// Tracing: Core _T_30 // Ignored: Inlined leading underscore at Core.v:2083
	// Tracing: Core _T_33 // Ignored: Inlined leading underscore at Core.v:2084
	// Tracing: Core _GEN_4 // Ignored: Inlined leading underscore at Core.v:2085
	// Tracing: Core _T_35 // Ignored: Inlined leading underscore at Core.v:2086
	// Tracing: Core _GEN_6 // Ignored: Inlined leading underscore at Core.v:2087
	// Tracing: Core _GEN_7 // Ignored: Inlined leading underscore at Core.v:2088
	// Tracing: Core _GEN_8 // Ignored: Inlined leading underscore at Core.v:2089
	// Tracing: Core _T_47 // Ignored: Inlined leading underscore at Core.v:2090
	// Tracing: Core _T_49 // Ignored: Inlined leading underscore at Core.v:2091
	// Tracing: Core _GEN_10 // Ignored: Inlined leading underscore at Core.v:2092
	// Tracing: Core _T_52 // Ignored: Inlined leading underscore at Core.v:2093
	// Tracing: Core _T_54 // Ignored: Inlined leading underscore at Core.v:2094
	// Tracing: Core _T_56 // Ignored: Inlined leading underscore at Core.v:2095
	// Tracing: Core _T_58 // Ignored: Inlined leading underscore at Core.v:2096
	// Tracing: Core _GEN_12 // Ignored: Inlined leading underscore at Core.v:2097
	// Tracing: Core _GEN_13 // Ignored: Inlined leading underscore at Core.v:2098
	// Tracing: Core _GEN_14 // Ignored: Inlined leading underscore at Core.v:2099
	// Tracing: Core _T_60 // Ignored: Inlined leading underscore at Core.v:2100
	// Tracing: Core _T_62 // Ignored: Inlined leading underscore at Core.v:2101
	// Tracing: Core _T_64 // Ignored: Inlined leading underscore at Core.v:2102
	// Tracing: Core _T_66 // Ignored: Inlined leading underscore at Core.v:2103
	// Tracing: Core _GEN_16 // Ignored: Inlined leading underscore at Core.v:2104
	// Tracing: Core _GEN_17 // Ignored: Inlined leading underscore at Core.v:2105
	// Tracing: Core _GEN_18 // Ignored: Inlined leading underscore at Core.v:2106
	vcdp->declBus  (c+27,"Core control io_opcode",-1,6,0);
	vcdp->declBit  (c+1,"Core control io_memWrite",-1);
	vcdp->declBit  (c+2,"Core control io_memRead",-1);
	vcdp->declBit  (c+3,"Core control io_regWrite",-1);
	vcdp->declBit  (c+2,"Core control io_memToReg",-1);
	vcdp->declBus  (c+4,"Core control io_aluOp",-1,2,0);
	vcdp->declBus  (c+5,"Core control io_oprA",-1,1,0);
	vcdp->declBit  (c+6,"Core control io_oprB",-1);
	vcdp->declBus  (c+7,"Core control io_extendSel",-1,1,0);
	vcdp->declBus  (c+27,"Core control typeDecode_io_opcode",-1,6,0);
	vcdp->declBit  (c+71,"Core control typeDecode_io_r",-1);
	vcdp->declBit  (c+20,"Core control typeDecode_io_load",-1);
	vcdp->declBit  (c+21,"Core control typeDecode_io_store",-1);
	vcdp->declBit  (c+22,"Core control typeDecode_io_branch",-1);
	vcdp->declBit  (c+23,"Core control typeDecode_io_i",-1);
	vcdp->declBit  (c+24,"Core control typeDecode_io_jal",-1);
	vcdp->declBit  (c+25,"Core control typeDecode_io_jalr",-1);
	vcdp->declBit  (c+26,"Core control typeDecode_io_lui",-1);
	vcdp->declBit  (c+71,"Core control CtrlDecode_io_r",-1);
	vcdp->declBit  (c+20,"Core control CtrlDecode_io_load",-1);
	vcdp->declBit  (c+21,"Core control CtrlDecode_io_store",-1);
	vcdp->declBit  (c+22,"Core control CtrlDecode_io_br",-1);
	vcdp->declBit  (c+23,"Core control CtrlDecode_io_i",-1);
	vcdp->declBit  (c+24,"Core control CtrlDecode_io_jal",-1);
	vcdp->declBit  (c+25,"Core control CtrlDecode_io_jalr",-1);
	vcdp->declBit  (c+26,"Core control CtrlDecode_io_lui",-1);
	vcdp->declBit  (c+1,"Core control CtrlDecode_io_memWrite",-1);
	vcdp->declBit  (c+2,"Core control CtrlDecode_io_memRead",-1);
	vcdp->declBit  (c+3,"Core control CtrlDecode_io_regWrite",-1);
	vcdp->declBit  (c+2,"Core control CtrlDecode_io_memToReg",-1);
	vcdp->declBus  (c+4,"Core control CtrlDecode_io_aluOp",-1,2,0);
	vcdp->declBus  (c+5,"Core control CtrlDecode_io_oprA",-1,1,0);
	vcdp->declBit  (c+6,"Core control CtrlDecode_io_oprB",-1);
	vcdp->declBus  (c+7,"Core control CtrlDecode_io_extendSel",-1,1,0);
	vcdp->declBus  (c+27,"Core control typeDecode io_opcode",-1,6,0);
	vcdp->declBit  (c+71,"Core control typeDecode io_r",-1);
	vcdp->declBit  (c+20,"Core control typeDecode io_load",-1);
	vcdp->declBit  (c+21,"Core control typeDecode io_store",-1);
	vcdp->declBit  (c+22,"Core control typeDecode io_branch",-1);
	vcdp->declBit  (c+23,"Core control typeDecode io_i",-1);
	vcdp->declBit  (c+24,"Core control typeDecode io_jal",-1);
	vcdp->declBit  (c+25,"Core control typeDecode io_jalr",-1);
	vcdp->declBit  (c+26,"Core control typeDecode io_lui",-1);
	// Tracing: Core control typeDecode _T_24 // Ignored: Inlined leading underscore at Core.v:12
	// Tracing: Core control typeDecode _T_34 // Ignored: Inlined leading underscore at Core.v:13
	// Tracing: Core control typeDecode _T_44 // Ignored: Inlined leading underscore at Core.v:14
	// Tracing: Core control typeDecode _T_54 // Ignored: Inlined leading underscore at Core.v:15
	// Tracing: Core control typeDecode _T_64 // Ignored: Inlined leading underscore at Core.v:16
	// Tracing: Core control typeDecode _T_74 // Ignored: Inlined leading underscore at Core.v:17
	// Tracing: Core control typeDecode _T_84 // Ignored: Inlined leading underscore at Core.v:18
	// Tracing: Core control typeDecode _T_94 // Ignored: Inlined leading underscore at Core.v:19
	// Tracing: Core control typeDecode _GEN_4 // Ignored: Inlined leading underscore at Core.v:20
	// Tracing: Core control typeDecode _GEN_7 // Ignored: Inlined leading underscore at Core.v:21
	// Tracing: Core control typeDecode _GEN_8 // Ignored: Inlined leading underscore at Core.v:22
	// Tracing: Core control typeDecode _GEN_11 // Ignored: Inlined leading underscore at Core.v:23
	// Tracing: Core control typeDecode _GEN_12 // Ignored: Inlined leading underscore at Core.v:24
	// Tracing: Core control typeDecode _GEN_13 // Ignored: Inlined leading underscore at Core.v:25
	// Tracing: Core control typeDecode _GEN_16 // Ignored: Inlined leading underscore at Core.v:26
	// Tracing: Core control typeDecode _GEN_17 // Ignored: Inlined leading underscore at Core.v:27
	// Tracing: Core control typeDecode _GEN_18 // Ignored: Inlined leading underscore at Core.v:28
	// Tracing: Core control typeDecode _GEN_19 // Ignored: Inlined leading underscore at Core.v:29
	// Tracing: Core control typeDecode _GEN_22 // Ignored: Inlined leading underscore at Core.v:30
	// Tracing: Core control typeDecode _GEN_23 // Ignored: Inlined leading underscore at Core.v:31
	// Tracing: Core control typeDecode _GEN_24 // Ignored: Inlined leading underscore at Core.v:32
	// Tracing: Core control typeDecode _GEN_25 // Ignored: Inlined leading underscore at Core.v:33
	// Tracing: Core control typeDecode _GEN_26 // Ignored: Inlined leading underscore at Core.v:34
	// Tracing: Core control typeDecode _GEN_29 // Ignored: Inlined leading underscore at Core.v:35
	// Tracing: Core control typeDecode _GEN_30 // Ignored: Inlined leading underscore at Core.v:36
	// Tracing: Core control typeDecode _GEN_31 // Ignored: Inlined leading underscore at Core.v:37
	// Tracing: Core control typeDecode _GEN_32 // Ignored: Inlined leading underscore at Core.v:38
	// Tracing: Core control typeDecode _GEN_33 // Ignored: Inlined leading underscore at Core.v:39
	// Tracing: Core control typeDecode _GEN_34 // Ignored: Inlined leading underscore at Core.v:40
	vcdp->declBit  (c+71,"Core control CtrlDecode io_r",-1);
	vcdp->declBit  (c+20,"Core control CtrlDecode io_load",-1);
	vcdp->declBit  (c+21,"Core control CtrlDecode io_store",-1);
	vcdp->declBit  (c+22,"Core control CtrlDecode io_br",-1);
	vcdp->declBit  (c+23,"Core control CtrlDecode io_i",-1);
	vcdp->declBit  (c+24,"Core control CtrlDecode io_jal",-1);
	vcdp->declBit  (c+25,"Core control CtrlDecode io_jalr",-1);
	vcdp->declBit  (c+26,"Core control CtrlDecode io_lui",-1);
	vcdp->declBit  (c+1,"Core control CtrlDecode io_memWrite",-1);
	vcdp->declBit  (c+2,"Core control CtrlDecode io_memRead",-1);
	vcdp->declBit  (c+3,"Core control CtrlDecode io_regWrite",-1);
	vcdp->declBit  (c+2,"Core control CtrlDecode io_memToReg",-1);
	vcdp->declBus  (c+4,"Core control CtrlDecode io_aluOp",-1,2,0);
	vcdp->declBus  (c+5,"Core control CtrlDecode io_oprA",-1,1,0);
	vcdp->declBit  (c+6,"Core control CtrlDecode io_oprB",-1);
	vcdp->declBus  (c+7,"Core control CtrlDecode io_extendSel",-1,1,0);
	// Tracing: Core control CtrlDecode _GEN_2 // Ignored: Inlined leading underscore at Core.v:97
	// Tracing: Core control CtrlDecode _GEN_3 // Ignored: Inlined leading underscore at Core.v:98
	// Tracing: Core control CtrlDecode _GEN_5 // Ignored: Inlined leading underscore at Core.v:99
	// Tracing: Core control CtrlDecode _GEN_6 // Ignored: Inlined leading underscore at Core.v:100
	// Tracing: Core control CtrlDecode _GEN_7 // Ignored: Inlined leading underscore at Core.v:101
	// Tracing: Core control CtrlDecode _GEN_8 // Ignored: Inlined leading underscore at Core.v:102
	// Tracing: Core control CtrlDecode _GEN_11 // Ignored: Inlined leading underscore at Core.v:103
	// Tracing: Core control CtrlDecode _GEN_12 // Ignored: Inlined leading underscore at Core.v:104
	// Tracing: Core control CtrlDecode _GEN_13 // Ignored: Inlined leading underscore at Core.v:105
	// Tracing: Core control CtrlDecode _GEN_14 // Ignored: Inlined leading underscore at Core.v:106
	// Tracing: Core control CtrlDecode _GEN_15 // Ignored: Inlined leading underscore at Core.v:107
	// Tracing: Core control CtrlDecode _GEN_18 // Ignored: Inlined leading underscore at Core.v:108
	// Tracing: Core control CtrlDecode _GEN_19 // Ignored: Inlined leading underscore at Core.v:109
	// Tracing: Core control CtrlDecode _GEN_20 // Ignored: Inlined leading underscore at Core.v:110
	// Tracing: Core control CtrlDecode _GEN_21 // Ignored: Inlined leading underscore at Core.v:111
	// Tracing: Core control CtrlDecode _GEN_22 // Ignored: Inlined leading underscore at Core.v:112
	// Tracing: Core control CtrlDecode _GEN_26 // Ignored: Inlined leading underscore at Core.v:113
	// Tracing: Core control CtrlDecode _GEN_27 // Ignored: Inlined leading underscore at Core.v:114
	// Tracing: Core control CtrlDecode _GEN_28 // Ignored: Inlined leading underscore at Core.v:115
	// Tracing: Core control CtrlDecode _GEN_29 // Ignored: Inlined leading underscore at Core.v:116
	// Tracing: Core control CtrlDecode _GEN_30 // Ignored: Inlined leading underscore at Core.v:117
	// Tracing: Core control CtrlDecode _GEN_35 // Ignored: Inlined leading underscore at Core.v:118
	// Tracing: Core control CtrlDecode _GEN_36 // Ignored: Inlined leading underscore at Core.v:119
	// Tracing: Core control CtrlDecode _GEN_37 // Ignored: Inlined leading underscore at Core.v:120
	// Tracing: Core control CtrlDecode _GEN_38 // Ignored: Inlined leading underscore at Core.v:121
	// Tracing: Core control CtrlDecode _GEN_39 // Ignored: Inlined leading underscore at Core.v:122
	// Tracing: Core control CtrlDecode _GEN_41 // Ignored: Inlined leading underscore at Core.v:123
	// Tracing: Core control CtrlDecode _GEN_44 // Ignored: Inlined leading underscore at Core.v:124
	// Tracing: Core control CtrlDecode _GEN_45 // Ignored: Inlined leading underscore at Core.v:125
	// Tracing: Core control CtrlDecode _GEN_46 // Ignored: Inlined leading underscore at Core.v:126
	// Tracing: Core control CtrlDecode _GEN_47 // Ignored: Inlined leading underscore at Core.v:127
	// Tracing: Core control CtrlDecode _GEN_48 // Ignored: Inlined leading underscore at Core.v:128
	vcdp->declBus  (c+28,"Core imm io_ins",-1,31,0);
	vcdp->declBus  (c+29,"Core imm io_S",-1,31,0);
	vcdp->declBus  (c+30,"Core imm io_i",-1,31,0);
	vcdp->declBus  (c+31,"Core imm io_u",-1,31,0);
	vcdp->declBit  (c+72,"Core imm imm31",-1);
	vcdp->declBus  (c+73,"Core imm imm30",-1,5,0);
	vcdp->declBus  (c+74,"Core imm imm24",-1,3,0);
	vcdp->declBit  (c+75,"Core imm imm20",-1);
	vcdp->declBus  (c+76,"Core imm imm19",-1,7,0);
	vcdp->declBus  (c+77,"Core imm imm11",-1,3,0);
	vcdp->declBit  (c+78,"Core imm imm7",-1);
	// Tracing: Core imm _T_22 // Ignored: Inlined leading underscore at Core.v:266
	// Tracing: Core imm _T_26 // Ignored: Inlined leading underscore at Core.v:267
	// Tracing: Core imm _T_35 // Ignored: Inlined leading underscore at Core.v:268
	// Tracing: Core imm _T_53 // Ignored: Inlined leading underscore at Core.v:269
	// Tracing: Core imm _GEN_0 // Ignored: Inlined leading underscore at Core.v:270
	// Tracing: Core imm _T_55 // Ignored: Inlined leading underscore at Core.v:271
	// Tracing: Core imm _T_56 // Ignored: Inlined leading underscore at Core.v:272
	// Tracing: Core imm _GEN_1 // Ignored: Inlined leading underscore at Core.v:273
	vcdp->declBus  (c+4,"Core aluCtrl io_ALUop",-1,2,0);
	vcdp->declBus  (c+32,"Core aluCtrl io_func3",-1,2,0);
	vcdp->declBit  (c+33,"Core aluCtrl io_func7",-1);
	vcdp->declBus  (c+8,"Core aluCtrl io_out",-1,4,0);
	// Tracing: Core aluCtrl _T_14 // Ignored: Inlined leading underscore at Core.v:299
	// Tracing: Core aluCtrl _T_17 // Ignored: Inlined leading underscore at Core.v:300
	// Tracing: Core aluCtrl _T_19 // Ignored: Inlined leading underscore at Core.v:301
	// Tracing: Core aluCtrl _T_22 // Ignored: Inlined leading underscore at Core.v:302
	// Tracing: Core aluCtrl _T_25 // Ignored: Inlined leading underscore at Core.v:303
	// Tracing: Core aluCtrl _T_27 // Ignored: Inlined leading underscore at Core.v:304
	// Tracing: Core aluCtrl _T_32 // Ignored: Inlined leading underscore at Core.v:305
	// Tracing: Core aluCtrl _GEN_0 // Ignored: Inlined leading underscore at Core.v:306
	// Tracing: Core aluCtrl _T_34 // Ignored: Inlined leading underscore at Core.v:307
	// Tracing: Core aluCtrl _T_37 // Ignored: Inlined leading underscore at Core.v:308
	// Tracing: Core aluCtrl _T_39 // Ignored: Inlined leading underscore at Core.v:309
	// Tracing: Core aluCtrl _T_40 // Ignored: Inlined leading underscore at Core.v:310
	// Tracing: Core aluCtrl _T_42 // Ignored: Inlined leading underscore at Core.v:311
	// Tracing: Core aluCtrl _GEN_2 // Ignored: Inlined leading underscore at Core.v:312
	// Tracing: Core aluCtrl _GEN_3 // Ignored: Inlined leading underscore at Core.v:313
	// Tracing: Core aluCtrl _GEN_4 // Ignored: Inlined leading underscore at Core.v:314
	// Tracing: Core aluCtrl _GEN_5 // Ignored: Inlined leading underscore at Core.v:315
	// Tracing: Core aluCtrl _GEN_6 // Ignored: Inlined leading underscore at Core.v:316
	vcdp->declBus  (c+9,"Core alu io_a",-1,31,0);
	vcdp->declBus  (c+10,"Core alu io_b",-1,31,0);
	vcdp->declBus  (c+34,"Core alu io_aluControl",-1,4,0);
	vcdp->declBit  (c+11,"Core alu io_branch",-1);
	vcdp->declBus  (c+12,"Core alu io_aluOut",-1,31,0);
	// Tracing: Core alu _T_16 // Ignored: Inlined leading underscore at Core.v:344
	// Tracing: Core alu _T_17 // Ignored: Inlined leading underscore at Core.v:345
	// Tracing: Core alu _T_18 // Ignored: Inlined leading underscore at Core.v:346
	// Tracing: Core alu _T_19 // Ignored: Inlined leading underscore at Core.v:347
	// Tracing: Core alu _T_21 // Ignored: Inlined leading underscore at Core.v:348
	// Tracing: Core alu _T_22 // Ignored: Inlined leading underscore at Core.v:349
	// Tracing: Core alu _GEN_24 // Ignored: Inlined leading underscore at Core.v:350
	// Tracing: Core alu _T_23 // Ignored: Inlined leading underscore at Core.v:351
	// Tracing: Core alu _T_25 // Ignored: Inlined leading underscore at Core.v:352
	// Tracing: Core alu _T_26 // Ignored: Inlined leading underscore at Core.v:353
	// Tracing: Core alu _GEN_0 // Ignored: Inlined leading underscore at Core.v:354
	// Tracing: Core alu _T_30 // Ignored: Inlined leading underscore at Core.v:355
	// Tracing: Core alu _T_31 // Ignored: Inlined leading underscore at Core.v:356
	// Tracing: Core alu _T_32 // Ignored: Inlined leading underscore at Core.v:357
	// Tracing: Core alu _T_34 // Ignored: Inlined leading underscore at Core.v:358
	// Tracing: Core alu _T_36 // Ignored: Inlined leading underscore at Core.v:359
	// Tracing: Core alu _T_37 // Ignored: Inlined leading underscore at Core.v:360
	// Tracing: Core alu _T_38 // Ignored: Inlined leading underscore at Core.v:361
	// Tracing: Core alu _T_39 // Ignored: Inlined leading underscore at Core.v:362
	// Tracing: Core alu _T_40 // Ignored: Inlined leading underscore at Core.v:363
	// Tracing: Core alu _GEN_1 // Ignored: Inlined leading underscore at Core.v:364
	// Tracing: Core alu _T_44 // Ignored: Inlined leading underscore at Core.v:365
	// Tracing: Core alu _T_46 // Ignored: Inlined leading underscore at Core.v:366
	// Tracing: Core alu _T_48 // Ignored: Inlined leading underscore at Core.v:367
	// Tracing: Core alu _T_49 // Ignored: Inlined leading underscore at Core.v:368
	// Tracing: Core alu _T_50 // Ignored: Inlined leading underscore at Core.v:369
	// Tracing: Core alu _T_52 // Ignored: Inlined leading underscore at Core.v:370
	// Tracing: Core alu _T_53 // Ignored: Inlined leading underscore at Core.v:371
	// Tracing: Core alu _T_54 // Ignored: Inlined leading underscore at Core.v:372
	// Tracing: Core alu _T_56 // Ignored: Inlined leading underscore at Core.v:373
	// Tracing: Core alu _T_57 // Ignored: Inlined leading underscore at Core.v:374
	// Tracing: Core alu _T_58 // Ignored: Inlined leading underscore at Core.v:375
	// Tracing: Core alu _T_59 // Ignored: Inlined leading underscore at Core.v:376
	// Tracing: Core alu _T_61 // Ignored: Inlined leading underscore at Core.v:377
	// Tracing: Core alu _T_65 // Ignored: Inlined leading underscore at Core.v:378
	// Tracing: Core alu _T_66 // Ignored: Inlined leading underscore at Core.v:379
	// Tracing: Core alu _GEN_2 // Ignored: Inlined leading underscore at Core.v:380
	// Tracing: Core alu _T_70 // Ignored: Inlined leading underscore at Core.v:381
	// Tracing: Core alu _T_71 // Ignored: Inlined leading underscore at Core.v:382
	// Tracing: Core alu _GEN_3 // Ignored: Inlined leading underscore at Core.v:383
	// Tracing: Core alu _T_75 // Ignored: Inlined leading underscore at Core.v:384
	// Tracing: Core alu _T_80 // Ignored: Inlined leading underscore at Core.v:385
	// Tracing: Core alu _T_81 // Ignored: Inlined leading underscore at Core.v:386
	// Tracing: Core alu _GEN_5 // Ignored: Inlined leading underscore at Core.v:387
	// Tracing: Core alu _T_85 // Ignored: Inlined leading underscore at Core.v:388
	// Tracing: Core alu _T_86 // Ignored: Inlined leading underscore at Core.v:389
	// Tracing: Core alu _GEN_6 // Ignored: Inlined leading underscore at Core.v:390
	// Tracing: Core alu _GEN_8 // Ignored: Inlined leading underscore at Core.v:391
	// Tracing: Core alu _GEN_9 // Ignored: Inlined leading underscore at Core.v:392
	// Tracing: Core alu _GEN_10 // Ignored: Inlined leading underscore at Core.v:393
	// Tracing: Core alu _GEN_11 // Ignored: Inlined leading underscore at Core.v:394
	// Tracing: Core alu _GEN_12 // Ignored: Inlined leading underscore at Core.v:395
	// Tracing: Core alu _GEN_13 // Ignored: Inlined leading underscore at Core.v:396
	// Tracing: Core alu _GEN_14 // Ignored: Inlined leading underscore at Core.v:397
	// Tracing: Core alu _GEN_15 // Ignored: Inlined leading underscore at Core.v:398
	// Tracing: Core alu _GEN_16 // Ignored: Inlined leading underscore at Core.v:399
	// Tracing: Core alu _GEN_17 // Ignored: Inlined leading underscore at Core.v:400
	// Tracing: Core alu _GEN_18 // Ignored: Inlined leading underscore at Core.v:401
	// Tracing: Core alu _GEN_19 // Ignored: Inlined leading underscore at Core.v:402
	// Tracing: Core alu _GEN_20 // Ignored: Inlined leading underscore at Core.v:403
	// Tracing: Core alu _GEN_21 // Ignored: Inlined leading underscore at Core.v:404
	// Tracing: Core alu _GEN_22 // Ignored: Inlined leading underscore at Core.v:405
	// Tracing: Core alu _T_92 // Ignored: Inlined leading underscore at Core.v:406
	// Tracing: Core alu _T_93 // Ignored: Inlined leading underscore at Core.v:407
	// Tracing: Core alu _T_95 // Ignored: Inlined leading underscore at Core.v:408
	// Tracing: Core alu _GEN_25 // Ignored: Inlined leading underscore at Core.v:409
	vcdp->declBit  (c+113,"Core reg$ clock",-1);
	vcdp->declBit  (c+35,"Core reg$ io_regWrite",-1);
	vcdp->declBus  (c+36,"Core reg$ io_rs1_sel",-1,4,0);
	vcdp->declBus  (c+37,"Core reg$ io_rs2_sel",-1,4,0);
	vcdp->declBus  (c+38,"Core reg$ io_rd_sel",-1,4,0);
	vcdp->declBus  (c+13,"Core reg$ io_writeData",-1,31,0);
	vcdp->declBus  (c+39,"Core reg$ io_rs1",-1,31,0);
	vcdp->declBus  (c+14,"Core reg$ io_rs2",-1,31,0);
	vcdp->declBus  (c+79,"Core reg$ registers_0",-1,31,0);
	// Tracing: Core reg$ _RAND_0 // Ignored: Inlined leading underscore at Core.v:490
	vcdp->declBus  (c+80,"Core reg$ registers_1",-1,31,0);
	// Tracing: Core reg$ _RAND_1 // Ignored: Inlined leading underscore at Core.v:492
	vcdp->declBus  (c+81,"Core reg$ registers_2",-1,31,0);
	// Tracing: Core reg$ _RAND_2 // Ignored: Inlined leading underscore at Core.v:494
	vcdp->declBus  (c+82,"Core reg$ registers_3",-1,31,0);
	// Tracing: Core reg$ _RAND_3 // Ignored: Inlined leading underscore at Core.v:496
	vcdp->declBus  (c+83,"Core reg$ registers_4",-1,31,0);
	// Tracing: Core reg$ _RAND_4 // Ignored: Inlined leading underscore at Core.v:498
	vcdp->declBus  (c+84,"Core reg$ registers_5",-1,31,0);
	// Tracing: Core reg$ _RAND_5 // Ignored: Inlined leading underscore at Core.v:500
	vcdp->declBus  (c+85,"Core reg$ registers_6",-1,31,0);
	// Tracing: Core reg$ _RAND_6 // Ignored: Inlined leading underscore at Core.v:502
	vcdp->declBus  (c+86,"Core reg$ registers_7",-1,31,0);
	// Tracing: Core reg$ _RAND_7 // Ignored: Inlined leading underscore at Core.v:504
	vcdp->declBus  (c+87,"Core reg$ registers_8",-1,31,0);
	// Tracing: Core reg$ _RAND_8 // Ignored: Inlined leading underscore at Core.v:506
	vcdp->declBus  (c+88,"Core reg$ registers_9",-1,31,0);
	// Tracing: Core reg$ _RAND_9 // Ignored: Inlined leading underscore at Core.v:508
	vcdp->declBus  (c+89,"Core reg$ registers_10",-1,31,0);
	// Tracing: Core reg$ _RAND_10 // Ignored: Inlined leading underscore at Core.v:510
	vcdp->declBus  (c+90,"Core reg$ registers_11",-1,31,0);
	// Tracing: Core reg$ _RAND_11 // Ignored: Inlined leading underscore at Core.v:512
	vcdp->declBus  (c+91,"Core reg$ registers_12",-1,31,0);
	// Tracing: Core reg$ _RAND_12 // Ignored: Inlined leading underscore at Core.v:514
	vcdp->declBus  (c+92,"Core reg$ registers_13",-1,31,0);
	// Tracing: Core reg$ _RAND_13 // Ignored: Inlined leading underscore at Core.v:516
	vcdp->declBus  (c+93,"Core reg$ registers_14",-1,31,0);
	// Tracing: Core reg$ _RAND_14 // Ignored: Inlined leading underscore at Core.v:518
	vcdp->declBus  (c+94,"Core reg$ registers_15",-1,31,0);
	// Tracing: Core reg$ _RAND_15 // Ignored: Inlined leading underscore at Core.v:520
	vcdp->declBus  (c+95,"Core reg$ registers_16",-1,31,0);
	// Tracing: Core reg$ _RAND_16 // Ignored: Inlined leading underscore at Core.v:522
	vcdp->declBus  (c+96,"Core reg$ registers_17",-1,31,0);
	// Tracing: Core reg$ _RAND_17 // Ignored: Inlined leading underscore at Core.v:524
	vcdp->declBus  (c+97,"Core reg$ registers_18",-1,31,0);
	// Tracing: Core reg$ _RAND_18 // Ignored: Inlined leading underscore at Core.v:526
	vcdp->declBus  (c+98,"Core reg$ registers_19",-1,31,0);
	// Tracing: Core reg$ _RAND_19 // Ignored: Inlined leading underscore at Core.v:528
	vcdp->declBus  (c+99,"Core reg$ registers_20",-1,31,0);
	// Tracing: Core reg$ _RAND_20 // Ignored: Inlined leading underscore at Core.v:530
	vcdp->declBus  (c+100,"Core reg$ registers_21",-1,31,0);
	// Tracing: Core reg$ _RAND_21 // Ignored: Inlined leading underscore at Core.v:532
	vcdp->declBus  (c+101,"Core reg$ registers_22",-1,31,0);
	// Tracing: Core reg$ _RAND_22 // Ignored: Inlined leading underscore at Core.v:534
	vcdp->declBus  (c+102,"Core reg$ registers_23",-1,31,0);
	// Tracing: Core reg$ _RAND_23 // Ignored: Inlined leading underscore at Core.v:536
	vcdp->declBus  (c+103,"Core reg$ registers_24",-1,31,0);
	// Tracing: Core reg$ _RAND_24 // Ignored: Inlined leading underscore at Core.v:538
	vcdp->declBus  (c+104,"Core reg$ registers_25",-1,31,0);
	// Tracing: Core reg$ _RAND_25 // Ignored: Inlined leading underscore at Core.v:540
	vcdp->declBus  (c+105,"Core reg$ registers_26",-1,31,0);
	// Tracing: Core reg$ _RAND_26 // Ignored: Inlined leading underscore at Core.v:542
	vcdp->declBus  (c+106,"Core reg$ registers_27",-1,31,0);
	// Tracing: Core reg$ _RAND_27 // Ignored: Inlined leading underscore at Core.v:544
	vcdp->declBus  (c+107,"Core reg$ registers_28",-1,31,0);
	// Tracing: Core reg$ _RAND_28 // Ignored: Inlined leading underscore at Core.v:546
	vcdp->declBus  (c+108,"Core reg$ registers_29",-1,31,0);
	// Tracing: Core reg$ _RAND_29 // Ignored: Inlined leading underscore at Core.v:548
	vcdp->declBus  (c+109,"Core reg$ registers_30",-1,31,0);
	// Tracing: Core reg$ _RAND_30 // Ignored: Inlined leading underscore at Core.v:550
	vcdp->declBus  (c+110,"Core reg$ registers_31",-1,31,0);
	// Tracing: Core reg$ _RAND_31 // Ignored: Inlined leading underscore at Core.v:552
	// Tracing: Core reg$ _GEN_1 // Ignored: Inlined leading underscore at Core.v:553
	// Tracing: Core reg$ _GEN_2 // Ignored: Inlined leading underscore at Core.v:554
	// Tracing: Core reg$ _GEN_3 // Ignored: Inlined leading underscore at Core.v:555
	// Tracing: Core reg$ _GEN_4 // Ignored: Inlined leading underscore at Core.v:556
	// Tracing: Core reg$ _GEN_5 // Ignored: Inlined leading underscore at Core.v:557
	// Tracing: Core reg$ _GEN_6 // Ignored: Inlined leading underscore at Core.v:558
	// Tracing: Core reg$ _GEN_7 // Ignored: Inlined leading underscore at Core.v:559
	// Tracing: Core reg$ _GEN_8 // Ignored: Inlined leading underscore at Core.v:560
	// Tracing: Core reg$ _GEN_9 // Ignored: Inlined leading underscore at Core.v:561
	// Tracing: Core reg$ _GEN_10 // Ignored: Inlined leading underscore at Core.v:562
	// Tracing: Core reg$ _GEN_11 // Ignored: Inlined leading underscore at Core.v:563
	// Tracing: Core reg$ _GEN_12 // Ignored: Inlined leading underscore at Core.v:564
	// Tracing: Core reg$ _GEN_13 // Ignored: Inlined leading underscore at Core.v:565
	// Tracing: Core reg$ _GEN_14 // Ignored: Inlined leading underscore at Core.v:566
	// Tracing: Core reg$ _GEN_15 // Ignored: Inlined leading underscore at Core.v:567
	// Tracing: Core reg$ _GEN_16 // Ignored: Inlined leading underscore at Core.v:568
	// Tracing: Core reg$ _GEN_17 // Ignored: Inlined leading underscore at Core.v:569
	// Tracing: Core reg$ _GEN_18 // Ignored: Inlined leading underscore at Core.v:570
	// Tracing: Core reg$ _GEN_19 // Ignored: Inlined leading underscore at Core.v:571
	// Tracing: Core reg$ _GEN_20 // Ignored: Inlined leading underscore at Core.v:572
	// Tracing: Core reg$ _GEN_21 // Ignored: Inlined leading underscore at Core.v:573
	// Tracing: Core reg$ _GEN_22 // Ignored: Inlined leading underscore at Core.v:574
	// Tracing: Core reg$ _GEN_23 // Ignored: Inlined leading underscore at Core.v:575
	// Tracing: Core reg$ _GEN_24 // Ignored: Inlined leading underscore at Core.v:576
	// Tracing: Core reg$ _GEN_25 // Ignored: Inlined leading underscore at Core.v:577
	// Tracing: Core reg$ _GEN_26 // Ignored: Inlined leading underscore at Core.v:578
	// Tracing: Core reg$ _GEN_27 // Ignored: Inlined leading underscore at Core.v:579
	// Tracing: Core reg$ _GEN_28 // Ignored: Inlined leading underscore at Core.v:580
	// Tracing: Core reg$ _GEN_29 // Ignored: Inlined leading underscore at Core.v:581
	// Tracing: Core reg$ _GEN_30 // Ignored: Inlined leading underscore at Core.v:582
	// Tracing: Core reg$ _GEN_33 // Ignored: Inlined leading underscore at Core.v:583
	// Tracing: Core reg$ _GEN_34 // Ignored: Inlined leading underscore at Core.v:584
	// Tracing: Core reg$ _GEN_35 // Ignored: Inlined leading underscore at Core.v:585
	// Tracing: Core reg$ _GEN_36 // Ignored: Inlined leading underscore at Core.v:586
	// Tracing: Core reg$ _GEN_37 // Ignored: Inlined leading underscore at Core.v:587
	// Tracing: Core reg$ _GEN_38 // Ignored: Inlined leading underscore at Core.v:588
	// Tracing: Core reg$ _GEN_39 // Ignored: Inlined leading underscore at Core.v:589
	// Tracing: Core reg$ _GEN_40 // Ignored: Inlined leading underscore at Core.v:590
	// Tracing: Core reg$ _GEN_41 // Ignored: Inlined leading underscore at Core.v:591
	// Tracing: Core reg$ _GEN_42 // Ignored: Inlined leading underscore at Core.v:592
	// Tracing: Core reg$ _GEN_43 // Ignored: Inlined leading underscore at Core.v:593
	// Tracing: Core reg$ _GEN_44 // Ignored: Inlined leading underscore at Core.v:594
	// Tracing: Core reg$ _GEN_45 // Ignored: Inlined leading underscore at Core.v:595
	// Tracing: Core reg$ _GEN_46 // Ignored: Inlined leading underscore at Core.v:596
	// Tracing: Core reg$ _GEN_47 // Ignored: Inlined leading underscore at Core.v:597
	// Tracing: Core reg$ _GEN_48 // Ignored: Inlined leading underscore at Core.v:598
	// Tracing: Core reg$ _GEN_49 // Ignored: Inlined leading underscore at Core.v:599
	// Tracing: Core reg$ _GEN_50 // Ignored: Inlined leading underscore at Core.v:600
	// Tracing: Core reg$ _GEN_51 // Ignored: Inlined leading underscore at Core.v:601
	// Tracing: Core reg$ _GEN_52 // Ignored: Inlined leading underscore at Core.v:602
	// Tracing: Core reg$ _GEN_53 // Ignored: Inlined leading underscore at Core.v:603
	// Tracing: Core reg$ _GEN_54 // Ignored: Inlined leading underscore at Core.v:604
	// Tracing: Core reg$ _GEN_55 // Ignored: Inlined leading underscore at Core.v:605
	// Tracing: Core reg$ _GEN_56 // Ignored: Inlined leading underscore at Core.v:606
	// Tracing: Core reg$ _GEN_57 // Ignored: Inlined leading underscore at Core.v:607
	// Tracing: Core reg$ _GEN_58 // Ignored: Inlined leading underscore at Core.v:608
	// Tracing: Core reg$ _GEN_59 // Ignored: Inlined leading underscore at Core.v:609
	// Tracing: Core reg$ _GEN_60 // Ignored: Inlined leading underscore at Core.v:610
	// Tracing: Core reg$ _GEN_61 // Ignored: Inlined leading underscore at Core.v:611
	// Tracing: Core reg$ _GEN_62 // Ignored: Inlined leading underscore at Core.v:612
	// Tracing: Core reg$ _T_62 // Ignored: Inlined leading underscore at Core.v:613
	// Tracing: Core reg$ _GEN_64 // Ignored: Inlined leading underscore at Core.v:614
	// Tracing: Core reg$ _GEN_65 // Ignored: Inlined leading underscore at Core.v:615
	// Tracing: Core reg$ _GEN_66 // Ignored: Inlined leading underscore at Core.v:616
	// Tracing: Core reg$ _GEN_67 // Ignored: Inlined leading underscore at Core.v:617
	// Tracing: Core reg$ _GEN_68 // Ignored: Inlined leading underscore at Core.v:618
	// Tracing: Core reg$ _GEN_69 // Ignored: Inlined leading underscore at Core.v:619
	// Tracing: Core reg$ _GEN_70 // Ignored: Inlined leading underscore at Core.v:620
	// Tracing: Core reg$ _GEN_71 // Ignored: Inlined leading underscore at Core.v:621
	// Tracing: Core reg$ _GEN_72 // Ignored: Inlined leading underscore at Core.v:622
	// Tracing: Core reg$ _GEN_73 // Ignored: Inlined leading underscore at Core.v:623
	// Tracing: Core reg$ _GEN_74 // Ignored: Inlined leading underscore at Core.v:624
	// Tracing: Core reg$ _GEN_75 // Ignored: Inlined leading underscore at Core.v:625
	// Tracing: Core reg$ _GEN_76 // Ignored: Inlined leading underscore at Core.v:626
	// Tracing: Core reg$ _GEN_77 // Ignored: Inlined leading underscore at Core.v:627
	// Tracing: Core reg$ _GEN_78 // Ignored: Inlined leading underscore at Core.v:628
	// Tracing: Core reg$ _GEN_79 // Ignored: Inlined leading underscore at Core.v:629
	// Tracing: Core reg$ _GEN_80 // Ignored: Inlined leading underscore at Core.v:630
	// Tracing: Core reg$ _GEN_81 // Ignored: Inlined leading underscore at Core.v:631
	// Tracing: Core reg$ _GEN_82 // Ignored: Inlined leading underscore at Core.v:632
	// Tracing: Core reg$ _GEN_83 // Ignored: Inlined leading underscore at Core.v:633
	// Tracing: Core reg$ _GEN_84 // Ignored: Inlined leading underscore at Core.v:634
	// Tracing: Core reg$ _GEN_85 // Ignored: Inlined leading underscore at Core.v:635
	// Tracing: Core reg$ _GEN_86 // Ignored: Inlined leading underscore at Core.v:636
	// Tracing: Core reg$ _GEN_87 // Ignored: Inlined leading underscore at Core.v:637
	// Tracing: Core reg$ _GEN_88 // Ignored: Inlined leading underscore at Core.v:638
	// Tracing: Core reg$ _GEN_89 // Ignored: Inlined leading underscore at Core.v:639
	// Tracing: Core reg$ _GEN_90 // Ignored: Inlined leading underscore at Core.v:640
	// Tracing: Core reg$ _GEN_91 // Ignored: Inlined leading underscore at Core.v:641
	// Tracing: Core reg$ _GEN_92 // Ignored: Inlined leading underscore at Core.v:642
	// Tracing: Core reg$ _GEN_93 // Ignored: Inlined leading underscore at Core.v:643
	// Tracing: Core reg$ _GEN_94 // Ignored: Inlined leading underscore at Core.v:644
	// Tracing: Core reg$ _GEN_95 // Ignored: Inlined leading underscore at Core.v:645
	// Tracing: Core reg$ _GEN_96 // Ignored: Inlined leading underscore at Core.v:646
	// Tracing: Core reg$ _GEN_97 // Ignored: Inlined leading underscore at Core.v:647
	// Tracing: Core reg$ _GEN_98 // Ignored: Inlined leading underscore at Core.v:648
	// Tracing: Core reg$ _GEN_99 // Ignored: Inlined leading underscore at Core.v:649
	// Tracing: Core reg$ _GEN_100 // Ignored: Inlined leading underscore at Core.v:650
	// Tracing: Core reg$ _GEN_101 // Ignored: Inlined leading underscore at Core.v:651
	// Tracing: Core reg$ _GEN_102 // Ignored: Inlined leading underscore at Core.v:652
	// Tracing: Core reg$ _GEN_103 // Ignored: Inlined leading underscore at Core.v:653
	// Tracing: Core reg$ _GEN_104 // Ignored: Inlined leading underscore at Core.v:654
	// Tracing: Core reg$ _GEN_105 // Ignored: Inlined leading underscore at Core.v:655
	// Tracing: Core reg$ _GEN_106 // Ignored: Inlined leading underscore at Core.v:656
	// Tracing: Core reg$ _GEN_107 // Ignored: Inlined leading underscore at Core.v:657
	// Tracing: Core reg$ _GEN_108 // Ignored: Inlined leading underscore at Core.v:658
	// Tracing: Core reg$ _GEN_109 // Ignored: Inlined leading underscore at Core.v:659
	// Tracing: Core reg$ _GEN_110 // Ignored: Inlined leading underscore at Core.v:660
	// Tracing: Core reg$ _GEN_111 // Ignored: Inlined leading underscore at Core.v:661
	// Tracing: Core reg$ _GEN_112 // Ignored: Inlined leading underscore at Core.v:662
	// Tracing: Core reg$ _GEN_113 // Ignored: Inlined leading underscore at Core.v:663
	// Tracing: Core reg$ _GEN_114 // Ignored: Inlined leading underscore at Core.v:664
	// Tracing: Core reg$ _GEN_115 // Ignored: Inlined leading underscore at Core.v:665
	// Tracing: Core reg$ _GEN_116 // Ignored: Inlined leading underscore at Core.v:666
	// Tracing: Core reg$ _GEN_117 // Ignored: Inlined leading underscore at Core.v:667
	// Tracing: Core reg$ _GEN_118 // Ignored: Inlined leading underscore at Core.v:668
	// Tracing: Core reg$ _GEN_119 // Ignored: Inlined leading underscore at Core.v:669
	// Tracing: Core reg$ _GEN_120 // Ignored: Inlined leading underscore at Core.v:670
	// Tracing: Core reg$ _GEN_121 // Ignored: Inlined leading underscore at Core.v:671
	// Tracing: Core reg$ _GEN_122 // Ignored: Inlined leading underscore at Core.v:672
	// Tracing: Core reg$ _GEN_123 // Ignored: Inlined leading underscore at Core.v:673
	// Tracing: Core reg$ _GEN_124 // Ignored: Inlined leading underscore at Core.v:674
	// Tracing: Core reg$ _GEN_125 // Ignored: Inlined leading underscore at Core.v:675
	// Tracing: Core reg$ _GEN_126 // Ignored: Inlined leading underscore at Core.v:676
	// Tracing: Core reg$ _GEN_127 // Ignored: Inlined leading underscore at Core.v:677
	vcdp->declBit  (c+113,"Core InsMem clock",-1);
	vcdp->declBus  (c+40,"Core InsMem io_wrAddr",-1,31,0);
	vcdp->declBus  (c+15,"Core InsMem io_rdData",-1,31,0);
	// Tracing: Core InsMem mem // Ignored: Wide memory > --trace-max-array ents at Core.v:1197
	// Tracing: Core InsMem _RAND_0 // Ignored: Inlined leading underscore at Core.v:1198
	vcdp->declBus  (c+15,"Core InsMem mem__T_12_data",-1,31,0);
	vcdp->declBus  (c+111,"Core InsMem mem__T_12_addr",-1,9,0);
	vcdp->declBit  (c+113,"Core InsMem BindsTo_0_InsMem_Inst clock",-1);
	vcdp->declBus  (c+40,"Core InsMem BindsTo_0_InsMem_Inst io_wrAddr",-1,31,0);
	vcdp->declBus  (c+15,"Core InsMem BindsTo_0_InsMem_Inst io_rdData",-1,31,0);
	vcdp->declBit  (c+113,"Core PC clock",-1);
	vcdp->declBit  (c+114,"Core PC reset",-1);
	vcdp->declBus  (c+41,"Core PC io_input",-1,31,0);
	vcdp->declBus  (c+41,"Core PC io_pc4",-1,31,0);
	vcdp->declBus  (c+42,"Core PC io_pc",-1,31,0);
	vcdp->declBus  (c+42,"Core PC reg$",-1,31,0);
	// Tracing: Core PC _RAND_0 // Ignored: Inlined leading underscore at Core.v:1244
	// Tracing: Core PC _T_14 // Ignored: Inlined leading underscore at Core.v:1245
	vcdp->declBit  (c+113,"Core dataMem clock",-1);
	vcdp->declBit  (c+43,"Core dataMem io_load",-1);
	vcdp->declBit  (c+44,"Core dataMem io_store",-1);
	vcdp->declBus  (c+45,"Core dataMem io_addrr",-1,7,0);
	vcdp->declBus  (c+46,"Core dataMem io_storedata",-1,31,0);
	vcdp->declBus  (c+47,"Core dataMem io_dataOut",-1,31,0);
	// Tracing: Core dataMem mem // Ignored: Wide memory > --trace-max-array ents at Core.v:1295
	// Tracing: Core dataMem _RAND_0 // Ignored: Inlined leading underscore at Core.v:1296
	vcdp->declBus  (c+47,"Core dataMem mem__T_19_data",-1,31,0);
	vcdp->declBus  (c+112,"Core dataMem mem__T_19_addr",-1,9,0);
	vcdp->declBus  (c+46,"Core dataMem mem__T_22_data",-1,31,0);
	vcdp->declBus  (c+112,"Core dataMem mem__T_22_addr",-1,9,0);
	vcdp->declBit  (c+118,"Core dataMem mem__T_22_mask",-1);
	vcdp->declBit  (c+44,"Core dataMem mem__T_22_en",-1);
	vcdp->declBit  (c+113,"Core if_pipe clock",-1);
	vcdp->declBit  (c+114,"Core if_pipe reset",-1);
	vcdp->declBus  (c+42,"Core if_pipe io_pc_in",-1,31,0);
	vcdp->declBus  (c+41,"Core if_pipe io_pc4_in",-1,31,0);
	vcdp->declBus  (c+115,"Core if_pipe io_ins_in",-1,31,0);
	vcdp->declBus  (c+48,"Core if_pipe io_pc_out",-1,31,0);
	vcdp->declBus  (c+28,"Core if_pipe io_ins_out",-1,31,0);
	vcdp->declBus  (c+49,"Core if_pipe io_pc4_out",-1,31,0);
	vcdp->declBus  (c+48,"Core if_pipe reg_pc",-1,31,0);
	// Tracing: Core if_pipe _RAND_0 // Ignored: Inlined leading underscore at Core.v:1358
	vcdp->declBus  (c+49,"Core if_pipe reg_pc4",-1,31,0);
	// Tracing: Core if_pipe _RAND_1 // Ignored: Inlined leading underscore at Core.v:1360
	vcdp->declBus  (c+28,"Core if_pipe reg_ins",-1,31,0);
	// Tracing: Core if_pipe _RAND_2 // Ignored: Inlined leading underscore at Core.v:1362
	vcdp->declBit  (c+113,"Core id_pipe clock",-1);
	vcdp->declBit  (c+114,"Core id_pipe reset",-1);
	vcdp->declBus  (c+36,"Core id_pipe io_rs1_sel_in",-1,4,0);
	vcdp->declBus  (c+37,"Core id_pipe io_rs2_sel_in",-1,4,0);
	vcdp->declBit  (c+1,"Core id_pipe io_memWrite_in",-1);
	vcdp->declBit  (c+2,"Core id_pipe io_memRead_in",-1);
	vcdp->declBit  (c+2,"Core id_pipe io_memToReg_in",-1);
	vcdp->declBus  (c+16,"Core id_pipe io_operandA_in",-1,31,0);
	vcdp->declBus  (c+17,"Core id_pipe io_operandB_in",-1,31,0);
	vcdp->declBus  (c+50,"Core id_pipe io_rd_in",-1,4,0);
	vcdp->declBus  (c+14,"Core id_pipe io_strData_in",-1,31,0);
	vcdp->declBus  (c+8,"Core id_pipe io_aluCtrl_in",-1,4,0);
	vcdp->declBit  (c+3,"Core id_pipe io_regWrite_in",-1);
	vcdp->declBus  (c+5,"Core id_pipe io_opr_A_sel_in",-1,1,0);
	vcdp->declBit  (c+6,"Core id_pipe io_opr_B_sel_in",-1);
	vcdp->declBus  (c+51,"Core id_pipe io_rs1_sel_Out",-1,4,0);
	vcdp->declBus  (c+52,"Core id_pipe io_rs2_sel_Out",-1,4,0);
	vcdp->declBit  (c+53,"Core id_pipe io_memWrite_out",-1);
	vcdp->declBit  (c+54,"Core id_pipe io_memRead_out",-1);
	vcdp->declBit  (c+55,"Core id_pipe io_memToReg_out",-1);
	vcdp->declBus  (c+56,"Core id_pipe io_operandA_out",-1,31,0);
	vcdp->declBus  (c+57,"Core id_pipe io_operandB_out",-1,31,0);
	vcdp->declBus  (c+58,"Core id_pipe io_rd_out",-1,4,0);
	vcdp->declBus  (c+59,"Core id_pipe io_strData_out",-1,31,0);
	vcdp->declBus  (c+34,"Core id_pipe io_aluCtrl_out",-1,4,0);
	vcdp->declBit  (c+60,"Core id_pipe io_regWrite_out",-1);
	vcdp->declBus  (c+61,"Core id_pipe io_opr_A_sel_Out",-1,1,0);
	vcdp->declBit  (c+62,"Core id_pipe io_opr_B_sel_Out",-1);
	vcdp->declBit  (c+53,"Core id_pipe reg_memWrite",-1);
	// Tracing: Core id_pipe _RAND_0 // Ignored: Inlined leading underscore at Core.v:1453
	vcdp->declBit  (c+54,"Core id_pipe reg_memRead",-1);
	// Tracing: Core id_pipe _RAND_1 // Ignored: Inlined leading underscore at Core.v:1455
	vcdp->declBit  (c+55,"Core id_pipe reg_memToReg",-1);
	// Tracing: Core id_pipe _RAND_2 // Ignored: Inlined leading underscore at Core.v:1457
	vcdp->declBus  (c+56,"Core id_pipe reg_operandA",-1,31,0);
	// Tracing: Core id_pipe _RAND_3 // Ignored: Inlined leading underscore at Core.v:1459
	vcdp->declBus  (c+57,"Core id_pipe reg_operandB",-1,31,0);
	// Tracing: Core id_pipe _RAND_4 // Ignored: Inlined leading underscore at Core.v:1461
	vcdp->declBus  (c+58,"Core id_pipe reg_rd",-1,4,0);
	// Tracing: Core id_pipe _RAND_5 // Ignored: Inlined leading underscore at Core.v:1463
	vcdp->declBus  (c+59,"Core id_pipe reg_strData",-1,31,0);
	// Tracing: Core id_pipe _RAND_6 // Ignored: Inlined leading underscore at Core.v:1465
	vcdp->declBus  (c+34,"Core id_pipe reg_aluCtrl",-1,4,0);
	// Tracing: Core id_pipe _RAND_7 // Ignored: Inlined leading underscore at Core.v:1467
	vcdp->declBit  (c+60,"Core id_pipe reg_regWrite",-1);
	// Tracing: Core id_pipe _RAND_8 // Ignored: Inlined leading underscore at Core.v:1469
	vcdp->declBus  (c+51,"Core id_pipe reg_rs1_sel",-1,4,0);
	// Tracing: Core id_pipe _RAND_9 // Ignored: Inlined leading underscore at Core.v:1471
	vcdp->declBus  (c+52,"Core id_pipe reg_rs2_sel",-1,4,0);
	// Tracing: Core id_pipe _RAND_10 // Ignored: Inlined leading underscore at Core.v:1473
	vcdp->declBus  (c+61,"Core id_pipe reg_opr_A",-1,1,0);
	// Tracing: Core id_pipe _RAND_11 // Ignored: Inlined leading underscore at Core.v:1475
	vcdp->declBit  (c+62,"Core id_pipe reg_opr_B",-1);
	// Tracing: Core id_pipe _RAND_12 // Ignored: Inlined leading underscore at Core.v:1477
	vcdp->declBit  (c+113,"Core exe_pipe clock",-1);
	vcdp->declBit  (c+114,"Core exe_pipe reset",-1);
	vcdp->declBit  (c+53,"Core exe_pipe io_memWrite_in",-1);
	vcdp->declBit  (c+54,"Core exe_pipe io_memRead_in",-1);
	vcdp->declBit  (c+55,"Core exe_pipe io_memToReg_in",-1);
	vcdp->declBus  (c+58,"Core exe_pipe io_rd_in",-1,4,0);
	vcdp->declBus  (c+12,"Core exe_pipe io_aluOutput_in",-1,31,0);
	vcdp->declBus  (c+59,"Core exe_pipe io_strData_in",-1,31,0);
	vcdp->declBit  (c+60,"Core exe_pipe io_regWrite_in",-1);
	vcdp->declBus  (c+12,"Core exe_pipe io_alu_Output_input",-1,31,0);
	vcdp->declBit  (c+11,"Core exe_pipe io_alu_branch_output_input",-1);
	vcdp->declBit  (c+44,"Core exe_pipe io_memWrite_out",-1);
	vcdp->declBit  (c+43,"Core exe_pipe io_memRead_out",-1);
	vcdp->declBit  (c+63,"Core exe_pipe io_memToReg_out",-1);
	vcdp->declBus  (c+64,"Core exe_pipe io_rd_out",-1,4,0);
	vcdp->declBus  (c+46,"Core exe_pipe io_strData_out",-1,31,0);
	vcdp->declBus  (c+65,"Core exe_pipe io_aluOutput_out",-1,31,0);
	vcdp->declBit  (c+66,"Core exe_pipe io_regWrite_out",-1);
	vcdp->declBus  (c+65,"Core exe_pipe io_alu_Output_output",-1,31,0);
	vcdp->declBit  (c+67,"Core exe_pipe io_alu_branch_output_output",-1);
	vcdp->declBit  (c+44,"Core exe_pipe reg_memWrite",-1);
	// Tracing: Core exe_pipe _RAND_0 // Ignored: Inlined leading underscore at Core.v:1660
	vcdp->declBit  (c+43,"Core exe_pipe reg_memRead",-1);
	// Tracing: Core exe_pipe _RAND_1 // Ignored: Inlined leading underscore at Core.v:1662
	vcdp->declBit  (c+63,"Core exe_pipe reg_memToReg",-1);
	// Tracing: Core exe_pipe _RAND_2 // Ignored: Inlined leading underscore at Core.v:1664
	vcdp->declBus  (c+64,"Core exe_pipe reg_rd",-1,4,0);
	// Tracing: Core exe_pipe _RAND_3 // Ignored: Inlined leading underscore at Core.v:1666
	vcdp->declBus  (c+46,"Core exe_pipe reg_strData",-1,31,0);
	// Tracing: Core exe_pipe _RAND_4 // Ignored: Inlined leading underscore at Core.v:1668
	vcdp->declBus  (c+65,"Core exe_pipe reg_aluOutput",-1,31,0);
	// Tracing: Core exe_pipe _RAND_5 // Ignored: Inlined leading underscore at Core.v:1670
	vcdp->declBit  (c+66,"Core exe_pipe reg_regWrite",-1);
	// Tracing: Core exe_pipe _RAND_6 // Ignored: Inlined leading underscore at Core.v:1672
	vcdp->declBus  (c+65,"Core exe_pipe alu_Output",-1,31,0);
	// Tracing: Core exe_pipe _RAND_7 // Ignored: Inlined leading underscore at Core.v:1674
	vcdp->declBit  (c+67,"Core exe_pipe alu_branch_output",-1);
	// Tracing: Core exe_pipe _RAND_8 // Ignored: Inlined leading underscore at Core.v:1676
	vcdp->declBit  (c+113,"Core mem_pipe clock",-1);
	vcdp->declBit  (c+114,"Core mem_pipe reset",-1);
	vcdp->declBit  (c+63,"Core mem_pipe io_memToReg_in",-1);
	vcdp->declBus  (c+64,"Core mem_pipe io_rd_in",-1,4,0);
	vcdp->declBus  (c+47,"Core mem_pipe io_dataOut_in",-1,31,0);
	vcdp->declBus  (c+65,"Core mem_pipe io_aluOutput_in",-1,31,0);
	vcdp->declBit  (c+66,"Core mem_pipe io_regWrite_in",-1);
	vcdp->declBit  (c+68,"Core mem_pipe io_memToReg_out",-1);
	vcdp->declBus  (c+38,"Core mem_pipe io_rd_out",-1,4,0);
	vcdp->declBus  (c+69,"Core mem_pipe io_dataOut_out",-1,31,0);
	vcdp->declBus  (c+70,"Core mem_pipe io_aluOutput_out",-1,31,0);
	vcdp->declBit  (c+35,"Core mem_pipe io_regWrite_out",-1);
	vcdp->declBit  (c+68,"Core mem_pipe reg_memToReg",-1);
	// Tracing: Core mem_pipe _RAND_0 // Ignored: Inlined leading underscore at Core.v:1811
	vcdp->declBus  (c+38,"Core mem_pipe reg_rd",-1,4,0);
	// Tracing: Core mem_pipe _RAND_1 // Ignored: Inlined leading underscore at Core.v:1813
	vcdp->declBus  (c+69,"Core mem_pipe reg_dataOut",-1,31,0);
	// Tracing: Core mem_pipe _RAND_2 // Ignored: Inlined leading underscore at Core.v:1815
	vcdp->declBus  (c+70,"Core mem_pipe reg_aluOutput",-1,31,0);
	// Tracing: Core mem_pipe _RAND_3 // Ignored: Inlined leading underscore at Core.v:1817
	vcdp->declBit  (c+35,"Core mem_pipe reg_regWrite",-1);
	// Tracing: Core mem_pipe _RAND_4 // Ignored: Inlined leading underscore at Core.v:1819
	vcdp->declBit  (c+66,"Core forwarding io_exe_pipe_regWrite_out",-1);
	vcdp->declBus  (c+64,"Core forwarding io_exe_pipe_rd_out",-1,4,0);
	vcdp->declBit  (c+35,"Core forwarding io_mem_pipe_regWrite_out",-1);
	vcdp->declBus  (c+38,"Core forwarding io_mem_pipe_rd_out",-1,4,0);
	vcdp->declBus  (c+51,"Core forwarding io_id_pipe_rs1_sel_out",-1,4,0);
	vcdp->declBus  (c+52,"Core forwarding io_id_pipe_rs2_sel_out",-1,4,0);
	vcdp->declBus  (c+18,"Core forwarding io_alu_A",-1,1,0);
	vcdp->declBus  (c+19,"Core forwarding io_alu_B",-1,1,0);
	// Tracing: Core forwarding _T_26 // Ignored: Inlined leading underscore at Core.v:1909
	// Tracing: Core forwarding _T_27 // Ignored: Inlined leading underscore at Core.v:1910
	// Tracing: Core forwarding _T_28 // Ignored: Inlined leading underscore at Core.v:1911
	// Tracing: Core forwarding _T_30 // Ignored: Inlined leading underscore at Core.v:1912
	// Tracing: Core forwarding _GEN_2 // Ignored: Inlined leading underscore at Core.v:1913
	// Tracing: Core forwarding _GEN_3 // Ignored: Inlined leading underscore at Core.v:1914
	// Tracing: Core forwarding _T_35 // Ignored: Inlined leading underscore at Core.v:1915
	// Tracing: Core forwarding _T_36 // Ignored: Inlined leading underscore at Core.v:1916
	// Tracing: Core forwarding _T_43 // Ignored: Inlined leading underscore at Core.v:1917
	// Tracing: Core forwarding _T_44 // Ignored: Inlined leading underscore at Core.v:1918
	// Tracing: Core forwarding _T_45 // Ignored: Inlined leading underscore at Core.v:1919
	// Tracing: Core forwarding _T_46 // Ignored: Inlined leading underscore at Core.v:1920
	// Tracing: Core forwarding _GEN_4 // Ignored: Inlined leading underscore at Core.v:1921
	// Tracing: Core forwarding _T_54 // Ignored: Inlined leading underscore at Core.v:1922
	// Tracing: Core forwarding _T_55 // Ignored: Inlined leading underscore at Core.v:1923
	// Tracing: Core forwarding _T_56 // Ignored: Inlined leading underscore at Core.v:1924
	// Tracing: Core forwarding _T_57 // Ignored: Inlined leading underscore at Core.v:1925
	// Tracing: Core forwarding _GEN_5 // Ignored: Inlined leading underscore at Core.v:1926
    }
}

void VCore::traceFullThis__1(VCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(((0x33U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
			      & ((~ (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_load)) 
				 & (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_store)))));
	vcdp->fullBit  (c+2,(((0x33U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
			      & (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_load))));
	vcdp->fullBit  (c+3,(((0x33U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
			      | ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_load) 
				 | ((~ (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_store)) 
				    & ((~ (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_branch)) 
				       & ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jalr) 
					  | ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_i) 
					     | ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jal) 
						| (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_lui))))))))));
	vcdp->fullBus  (c+4,(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_aluOp),3);
	vcdp->fullBus  (c+5,(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_oprA),2);
	vcdp->fullBit  (c+6,(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_oprB));
	vcdp->fullBus  (c+7,(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_extendSel),2);
	vcdp->fullBus  (c+8,(((0U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_aluOp))
			       ? (IData)(vlTOPp->Core__DOT__aluCtrl__DOT___T_17)
			       : ((3U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_aluOp))
				   ? 0x1fU : ((4U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_aluOp))
					       ? 0U
					       : ((1U 
						   == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_aluOp))
						   ? 
						  ((5U 
						    == 
						    (7U 
						     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							>> 0xcU)))
						    ? (IData)(vlTOPp->Core__DOT__aluCtrl__DOT___T_17)
						    : 
						   (7U 
						    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						       >> 0xcU)))
						   : 
						  ((5U 
						    == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_aluOp))
						    ? 0U
						    : 
						   (((2U 
						      == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_aluOp)) 
						     & (0U 
							== 
							(7U 
							 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							    >> 0xcU))))
						     ? 
						    (0x10U 
						     | (7U 
							& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							   >> 0xcU)))
						     : 0U))))))),5);
	vcdp->fullBus  (c+9,(vlTOPp->Core__DOT__alu_io_a),32);
	vcdp->fullBus  (c+10,(vlTOPp->Core__DOT__alu_io_b),32);
	vcdp->fullBit  (c+11,(((1U == (IData)(vlTOPp->Core__DOT__alu__DOT___GEN_22)) 
			       & (2U == (3U & ((IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl) 
					       >> 3U))))));
	vcdp->fullBus  (c+12,((IData)(vlTOPp->Core__DOT__alu__DOT___GEN_22)),32);
	vcdp->fullBus  (c+13,(vlTOPp->Core__DOT__reg__024_io_writeData),32);
	vcdp->fullBus  (c+14,(vlTOPp->Core__DOT__reg__024_io_rs2),32);
	vcdp->fullBus  (c+15,(vlTOPp->Core__DOT__InsMem__DOT__mem
			      [(0x3ffU & (vlTOPp->Core__DOT__PC__DOT__reg__024 
					  >> 2U))]),32);
	vcdp->fullBus  (c+16,((((0U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_oprA)) 
				| (3U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_oprA)))
			        ? ((0x1fU == (0x1fU 
					      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						 >> 0xfU)))
				    ? vlTOPp->Core__DOT__reg__024__DOT__registers_31
				    : ((0x1eU == (0x1fU 
						  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						     >> 0xfU)))
				        ? vlTOPp->Core__DOT__reg__024__DOT__registers_30
				        : ((0x1dU == 
					    (0x1fU 
					     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						>> 0xfU)))
					    ? vlTOPp->Core__DOT__reg__024__DOT__registers_29
					    : ((0x1cU 
						== 
						(0x1fU 
						 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						    >> 0xfU)))
					        ? vlTOPp->Core__DOT__reg__024__DOT__registers_28
					        : (
						   (0x1bU 
						    == 
						    (0x1fU 
						     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							>> 0xfU)))
						    ? vlTOPp->Core__DOT__reg__024__DOT__registers_27
						    : 
						   ((0x1aU 
						     == 
						     (0x1fU 
						      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							 >> 0xfU)))
						     ? vlTOPp->Core__DOT__reg__024__DOT__registers_26
						     : 
						    ((0x19U 
						      == 
						      (0x1fU 
						       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							  >> 0xfU)))
						      ? vlTOPp->Core__DOT__reg__024__DOT__registers_25
						      : 
						     ((0x18U 
						       == 
						       (0x1fU 
							& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							   >> 0xfU)))
						       ? vlTOPp->Core__DOT__reg__024__DOT__registers_24
						       : 
						      ((0x17U 
							== 
							(0x1fU 
							 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							    >> 0xfU)))
						        ? vlTOPp->Core__DOT__reg__024__DOT__registers_23
						        : 
						       ((0x16U 
							 == 
							 (0x1fU 
							  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							     >> 0xfU)))
							 ? vlTOPp->Core__DOT__reg__024__DOT__registers_22
							 : 
							((0x15U 
							  == 
							  (0x1fU 
							   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							      >> 0xfU)))
							  ? vlTOPp->Core__DOT__reg__024__DOT__registers_21
							  : 
							 ((0x14U 
							   == 
							   (0x1fU 
							    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							       >> 0xfU)))
							   ? vlTOPp->Core__DOT__reg__024__DOT__registers_20
							   : 
							  ((0x13U 
							    == 
							    (0x1fU 
							     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								>> 0xfU)))
							    ? vlTOPp->Core__DOT__reg__024__DOT__registers_19
							    : 
							   ((0x12U 
							     == 
							     (0x1fU 
							      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								 >> 0xfU)))
							     ? vlTOPp->Core__DOT__reg__024__DOT__registers_18
							     : 
							    ((0x11U 
							      == 
							      (0x1fU 
							       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								  >> 0xfU)))
							      ? vlTOPp->Core__DOT__reg__024__DOT__registers_17
							      : 
							     ((0x10U 
							       == 
							       (0x1fU 
								& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								   >> 0xfU)))
							       ? vlTOPp->Core__DOT__reg__024__DOT__registers_16
							       : 
							      ((0xfU 
								== 
								(0x1fU 
								 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								    >> 0xfU)))
							        ? vlTOPp->Core__DOT__reg__024__DOT__registers_15
							        : 
							       ((0xeU 
								 == 
								 (0x1fU 
								  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								     >> 0xfU)))
								 ? vlTOPp->Core__DOT__reg__024__DOT__registers_14
								 : 
								((0xdU 
								  == 
								  (0x1fU 
								   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								      >> 0xfU)))
								  ? vlTOPp->Core__DOT__reg__024__DOT__registers_13
								  : 
								 ((0xcU 
								   == 
								   (0x1fU 
								    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								       >> 0xfU)))
								   ? vlTOPp->Core__DOT__reg__024__DOT__registers_12
								   : 
								  ((0xbU 
								    == 
								    (0x1fU 
								     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									>> 0xfU)))
								    ? vlTOPp->Core__DOT__reg__024__DOT__registers_11
								    : 
								   ((0xaU 
								     == 
								     (0x1fU 
								      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									 >> 0xfU)))
								     ? vlTOPp->Core__DOT__reg__024__DOT__registers_10
								     : 
								    ((9U 
								      == 
								      (0x1fU 
								       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									  >> 0xfU)))
								      ? vlTOPp->Core__DOT__reg__024__DOT__registers_9
								      : 
								     ((8U 
								       == 
								       (0x1fU 
									& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									   >> 0xfU)))
								       ? vlTOPp->Core__DOT__reg__024__DOT__registers_8
								       : 
								      ((7U 
									== 
									(0x1fU 
									 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									    >> 0xfU)))
								        ? vlTOPp->Core__DOT__reg__024__DOT__registers_7
								        : 
								       ((6U 
									 == 
									 (0x1fU 
									  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									     >> 0xfU)))
									 ? vlTOPp->Core__DOT__reg__024__DOT__registers_6
									 : 
									((5U 
									  == 
									  (0x1fU 
									   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									      >> 0xfU)))
									  ? vlTOPp->Core__DOT__reg__024__DOT__registers_5
									  : 
									 ((4U 
									   == 
									   (0x1fU 
									    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									       >> 0xfU)))
									   ? vlTOPp->Core__DOT__reg__024__DOT__registers_4
									   : 
									  ((3U 
									    == 
									    (0x1fU 
									     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
										>> 0xfU)))
									    ? vlTOPp->Core__DOT__reg__024__DOT__registers_3
									    : 
									   ((2U 
									     == 
									     (0x1fU 
									      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
										>> 0xfU)))
									     ? vlTOPp->Core__DOT__reg__024__DOT__registers_2
									     : 
									    ((1U 
									      == 
									      (0x1fU 
									       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
										>> 0xfU)))
									      ? vlTOPp->Core__DOT__reg__024__DOT__registers_1
									      : vlTOPp->Core__DOT__reg__024__DOT__registers_0)))))))))))))))))))))))))))))))
			        : ((2U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_oprA))
				    ? vlTOPp->Core__DOT__if_pipe__DOT__reg_pc4
				    : vlTOPp->Core__DOT__if_pipe__DOT__reg_pc))),32);
	vcdp->fullBus  (c+17,(((IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_oprB)
			        ? ((0U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_extendSel))
				    ? ((((0x80000000U 
					  & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)
					  ? 0xfffffU
					  : 0U) << 0xcU) 
				       | (0xfffU & 
					  (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
					   >> 0x14U)))
				    : ((1U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_extendSel))
				        ? ((((0x80000000U 
					      & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)
					      ? 0xfffffU
					      : 0U) 
					    << 0xcU) 
					   | ((0x800U 
					       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						  >> 0x14U)) 
					      | ((0x7e0U 
						  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						     >> 0x14U)) 
						 | (0x1fU 
						    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						       >> 7U)))))
				        : ((2U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_extendSel))
					    ? (IData)(
						      (VL_ULL(0x7ffffffff) 
						       & ((QData)((IData)(
									  (0xfffffU 
									   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									      >> 0xcU)))) 
							  << 0xcU)))
					    : vlTOPp->Core__DOT__reg__024_io_rs2)))
			        : vlTOPp->Core__DOT__reg__024_io_rs2)),32);
	vcdp->fullBus  (c+18,(vlTOPp->Core__DOT__forwarding_io_alu_A),2);
	vcdp->fullBus  (c+19,(vlTOPp->Core__DOT__forwarding_io_alu_B),2);
	vcdp->fullBit  (c+20,(vlTOPp->Core__DOT__control__DOT__typeDecode_io_load));
	vcdp->fullBit  (c+21,(vlTOPp->Core__DOT__control__DOT__typeDecode_io_store));
	vcdp->fullBit  (c+22,(vlTOPp->Core__DOT__control__DOT__typeDecode_io_branch));
	vcdp->fullBit  (c+23,(vlTOPp->Core__DOT__control__DOT__typeDecode_io_i));
	vcdp->fullBit  (c+24,(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jal));
	vcdp->fullBit  (c+25,(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jalr));
	vcdp->fullBit  (c+26,(vlTOPp->Core__DOT__control__DOT__typeDecode_io_lui));
	vcdp->fullBus  (c+27,((0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)),7);
	vcdp->fullBus  (c+28,(vlTOPp->Core__DOT__if_pipe__DOT__reg_ins),32);
	vcdp->fullBus  (c+29,(((((0x80000000U & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)
				  ? 0xfffffU : 0U) 
				<< 0xcU) | ((0x800U 
					     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						>> 0x14U)) 
					    | ((0x7e0U 
						& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						   >> 0x14U)) 
					       | (0x1fU 
						  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						     >> 7U)))))),32);
	vcdp->fullBus  (c+30,(((((0x80000000U & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)
				  ? 0xfffffU : 0U) 
				<< 0xcU) | (0xfffU 
					    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
					       >> 0x14U)))),32);
	vcdp->fullBus  (c+31,((IData)((VL_ULL(0x7ffffffff) 
				       & ((QData)((IData)(
							  (0xfffffU 
							   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							      >> 0xcU)))) 
					  << 0xcU)))),32);
	vcdp->fullBus  (c+32,((7U & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
				     >> 0xcU))),3);
	vcdp->fullBit  (c+33,((1U & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
				     >> 0x1eU))));
	vcdp->fullBus  (c+34,(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl),5);
	vcdp->fullBit  (c+35,(vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite));
	vcdp->fullBus  (c+36,((0x1fU & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
					>> 0xfU))),5);
	vcdp->fullBus  (c+37,((0x1fU & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
					>> 0x14U))),5);
	vcdp->fullBus  (c+38,(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd),5);
	vcdp->fullBus  (c+39,(((0x1fU == (0x1fU & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						   >> 0xfU)))
			        ? vlTOPp->Core__DOT__reg__024__DOT__registers_31
			        : ((0x1eU == (0x1fU 
					      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						 >> 0xfU)))
				    ? vlTOPp->Core__DOT__reg__024__DOT__registers_30
				    : ((0x1dU == (0x1fU 
						  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						     >> 0xfU)))
				        ? vlTOPp->Core__DOT__reg__024__DOT__registers_29
				        : ((0x1cU == 
					    (0x1fU 
					     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						>> 0xfU)))
					    ? vlTOPp->Core__DOT__reg__024__DOT__registers_28
					    : ((0x1bU 
						== 
						(0x1fU 
						 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						    >> 0xfU)))
					        ? vlTOPp->Core__DOT__reg__024__DOT__registers_27
					        : (
						   (0x1aU 
						    == 
						    (0x1fU 
						     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							>> 0xfU)))
						    ? vlTOPp->Core__DOT__reg__024__DOT__registers_26
						    : 
						   ((0x19U 
						     == 
						     (0x1fU 
						      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							 >> 0xfU)))
						     ? vlTOPp->Core__DOT__reg__024__DOT__registers_25
						     : 
						    ((0x18U 
						      == 
						      (0x1fU 
						       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							  >> 0xfU)))
						      ? vlTOPp->Core__DOT__reg__024__DOT__registers_24
						      : 
						     ((0x17U 
						       == 
						       (0x1fU 
							& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							   >> 0xfU)))
						       ? vlTOPp->Core__DOT__reg__024__DOT__registers_23
						       : 
						      ((0x16U 
							== 
							(0x1fU 
							 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							    >> 0xfU)))
						        ? vlTOPp->Core__DOT__reg__024__DOT__registers_22
						        : 
						       ((0x15U 
							 == 
							 (0x1fU 
							  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							     >> 0xfU)))
							 ? vlTOPp->Core__DOT__reg__024__DOT__registers_21
							 : 
							((0x14U 
							  == 
							  (0x1fU 
							   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							      >> 0xfU)))
							  ? vlTOPp->Core__DOT__reg__024__DOT__registers_20
							  : 
							 ((0x13U 
							   == 
							   (0x1fU 
							    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							       >> 0xfU)))
							   ? vlTOPp->Core__DOT__reg__024__DOT__registers_19
							   : 
							  ((0x12U 
							    == 
							    (0x1fU 
							     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								>> 0xfU)))
							    ? vlTOPp->Core__DOT__reg__024__DOT__registers_18
							    : 
							   ((0x11U 
							     == 
							     (0x1fU 
							      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								 >> 0xfU)))
							     ? vlTOPp->Core__DOT__reg__024__DOT__registers_17
							     : 
							    ((0x10U 
							      == 
							      (0x1fU 
							       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								  >> 0xfU)))
							      ? vlTOPp->Core__DOT__reg__024__DOT__registers_16
							      : 
							     ((0xfU 
							       == 
							       (0x1fU 
								& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								   >> 0xfU)))
							       ? vlTOPp->Core__DOT__reg__024__DOT__registers_15
							       : 
							      ((0xeU 
								== 
								(0x1fU 
								 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								    >> 0xfU)))
							        ? vlTOPp->Core__DOT__reg__024__DOT__registers_14
							        : 
							       ((0xdU 
								 == 
								 (0x1fU 
								  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								     >> 0xfU)))
								 ? vlTOPp->Core__DOT__reg__024__DOT__registers_13
								 : 
								((0xcU 
								  == 
								  (0x1fU 
								   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								      >> 0xfU)))
								  ? vlTOPp->Core__DOT__reg__024__DOT__registers_12
								  : 
								 ((0xbU 
								   == 
								   (0x1fU 
								    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								       >> 0xfU)))
								   ? vlTOPp->Core__DOT__reg__024__DOT__registers_11
								   : 
								  ((0xaU 
								    == 
								    (0x1fU 
								     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									>> 0xfU)))
								    ? vlTOPp->Core__DOT__reg__024__DOT__registers_10
								    : 
								   ((9U 
								     == 
								     (0x1fU 
								      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									 >> 0xfU)))
								     ? vlTOPp->Core__DOT__reg__024__DOT__registers_9
								     : 
								    ((8U 
								      == 
								      (0x1fU 
								       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									  >> 0xfU)))
								      ? vlTOPp->Core__DOT__reg__024__DOT__registers_8
								      : 
								     ((7U 
								       == 
								       (0x1fU 
									& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									   >> 0xfU)))
								       ? vlTOPp->Core__DOT__reg__024__DOT__registers_7
								       : 
								      ((6U 
									== 
									(0x1fU 
									 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									    >> 0xfU)))
								        ? vlTOPp->Core__DOT__reg__024__DOT__registers_6
								        : 
								       ((5U 
									 == 
									 (0x1fU 
									  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									     >> 0xfU)))
									 ? vlTOPp->Core__DOT__reg__024__DOT__registers_5
									 : 
									((4U 
									  == 
									  (0x1fU 
									   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									      >> 0xfU)))
									  ? vlTOPp->Core__DOT__reg__024__DOT__registers_4
									  : 
									 ((3U 
									   == 
									   (0x1fU 
									    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									       >> 0xfU)))
									   ? vlTOPp->Core__DOT__reg__024__DOT__registers_3
									   : 
									  ((2U 
									    == 
									    (0x1fU 
									     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
										>> 0xfU)))
									    ? vlTOPp->Core__DOT__reg__024__DOT__registers_2
									    : 
									   ((1U 
									     == 
									     (0x1fU 
									      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
										>> 0xfU)))
									     ? vlTOPp->Core__DOT__reg__024__DOT__registers_1
									     : vlTOPp->Core__DOT__reg__024__DOT__registers_0)))))))))))))))))))))))))))))))),32);
	vcdp->fullBus  (c+40,((0x3ffU & (vlTOPp->Core__DOT__PC__DOT__reg__024 
					 >> 2U))),32);
	vcdp->fullBus  (c+41,(((IData)(4U) + vlTOPp->Core__DOT__PC__DOT__reg__024)),32);
	vcdp->fullBus  (c+42,(vlTOPp->Core__DOT__PC__DOT__reg__024),32);
	vcdp->fullBit  (c+43,(vlTOPp->Core__DOT__exe_pipe__DOT__reg_memRead));
	vcdp->fullBit  (c+44,(vlTOPp->Core__DOT__exe_pipe__DOT__reg_memWrite));
	vcdp->fullBus  (c+45,((0xffU & (vlTOPp->Core__DOT__exe_pipe__DOT__reg_aluOutput 
					>> 2U))),8);
	vcdp->fullBus  (c+46,(vlTOPp->Core__DOT__exe_pipe__DOT__reg_strData),32);
	vcdp->fullBus  (c+47,(vlTOPp->Core__DOT__dataMem__DOT__mem
			      [(0xffU & (vlTOPp->Core__DOT__exe_pipe__DOT__reg_aluOutput 
					 >> 2U))]),32);
	vcdp->fullBus  (c+48,(vlTOPp->Core__DOT__if_pipe__DOT__reg_pc),32);
	vcdp->fullBus  (c+49,(vlTOPp->Core__DOT__if_pipe__DOT__reg_pc4),32);
	vcdp->fullBus  (c+50,((0x1fU & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
					>> 7U))),5);
	vcdp->fullBus  (c+51,(vlTOPp->Core__DOT__id_pipe__DOT__reg_rs1_sel),5);
	vcdp->fullBus  (c+52,(vlTOPp->Core__DOT__id_pipe__DOT__reg_rs2_sel),5);
	vcdp->fullBit  (c+53,(vlTOPp->Core__DOT__id_pipe__DOT__reg_memWrite));
	vcdp->fullBit  (c+54,(vlTOPp->Core__DOT__id_pipe__DOT__reg_memRead));
	vcdp->fullBit  (c+55,(vlTOPp->Core__DOT__id_pipe__DOT__reg_memToReg));
	vcdp->fullBus  (c+56,(vlTOPp->Core__DOT__id_pipe__DOT__reg_operandA),32);
	vcdp->fullBus  (c+57,(vlTOPp->Core__DOT__id_pipe__DOT__reg_operandB),32);
	vcdp->fullBus  (c+58,(vlTOPp->Core__DOT__id_pipe__DOT__reg_rd),5);
	vcdp->fullBus  (c+59,(vlTOPp->Core__DOT__id_pipe__DOT__reg_strData),32);
	vcdp->fullBit  (c+60,(vlTOPp->Core__DOT__id_pipe__DOT__reg_regWrite));
	vcdp->fullBus  (c+61,(vlTOPp->Core__DOT__id_pipe__DOT__reg_opr_A),2);
	vcdp->fullBit  (c+62,(vlTOPp->Core__DOT__id_pipe__DOT__reg_opr_B));
	vcdp->fullBit  (c+63,(vlTOPp->Core__DOT__exe_pipe__DOT__reg_memToReg));
	vcdp->fullBus  (c+64,(vlTOPp->Core__DOT__exe_pipe__DOT__reg_rd),5);
	vcdp->fullBus  (c+65,(vlTOPp->Core__DOT__exe_pipe__DOT__reg_aluOutput),32);
	vcdp->fullBit  (c+66,(vlTOPp->Core__DOT__exe_pipe__DOT__reg_regWrite));
	vcdp->fullBit  (c+67,(vlTOPp->Core__DOT__exe_pipe__DOT__alu_branch_output));
	vcdp->fullBit  (c+68,(vlTOPp->Core__DOT__mem_pipe__DOT__reg_memToReg));
	vcdp->fullBus  (c+69,(vlTOPp->Core__DOT__mem_pipe__DOT__reg_dataOut),32);
	vcdp->fullBus  (c+70,(vlTOPp->Core__DOT__mem_pipe__DOT__reg_aluOutput),32);
	vcdp->fullBit  (c+71,((0x33U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins))));
	vcdp->fullBit  (c+72,((1U & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
				     >> 0x1fU))));
	vcdp->fullBus  (c+73,((0x3fU & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
					>> 0x19U))),6);
	vcdp->fullBus  (c+74,((0xfU & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
				       >> 0x15U))),4);
	vcdp->fullBit  (c+75,((1U & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
				     >> 0x14U))));
	vcdp->fullBus  (c+76,((0xffU & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
					>> 0xcU))),8);
	vcdp->fullBus  (c+77,((0xfU & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
				       >> 8U))),4);
	vcdp->fullBit  (c+78,((1U & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
				     >> 7U))));
	vcdp->fullBus  (c+79,(vlTOPp->Core__DOT__reg__024__DOT__registers_0),32);
	vcdp->fullBus  (c+80,(vlTOPp->Core__DOT__reg__024__DOT__registers_1),32);
	vcdp->fullBus  (c+81,(vlTOPp->Core__DOT__reg__024__DOT__registers_2),32);
	vcdp->fullBus  (c+82,(vlTOPp->Core__DOT__reg__024__DOT__registers_3),32);
	vcdp->fullBus  (c+83,(vlTOPp->Core__DOT__reg__024__DOT__registers_4),32);
	vcdp->fullBus  (c+84,(vlTOPp->Core__DOT__reg__024__DOT__registers_5),32);
	vcdp->fullBus  (c+85,(vlTOPp->Core__DOT__reg__024__DOT__registers_6),32);
	vcdp->fullBus  (c+86,(vlTOPp->Core__DOT__reg__024__DOT__registers_7),32);
	vcdp->fullBus  (c+87,(vlTOPp->Core__DOT__reg__024__DOT__registers_8),32);
	vcdp->fullBus  (c+88,(vlTOPp->Core__DOT__reg__024__DOT__registers_9),32);
	vcdp->fullBus  (c+89,(vlTOPp->Core__DOT__reg__024__DOT__registers_10),32);
	vcdp->fullBus  (c+90,(vlTOPp->Core__DOT__reg__024__DOT__registers_11),32);
	vcdp->fullBus  (c+91,(vlTOPp->Core__DOT__reg__024__DOT__registers_12),32);
	vcdp->fullBus  (c+92,(vlTOPp->Core__DOT__reg__024__DOT__registers_13),32);
	vcdp->fullBus  (c+93,(vlTOPp->Core__DOT__reg__024__DOT__registers_14),32);
	vcdp->fullBus  (c+94,(vlTOPp->Core__DOT__reg__024__DOT__registers_15),32);
	vcdp->fullBus  (c+95,(vlTOPp->Core__DOT__reg__024__DOT__registers_16),32);
	vcdp->fullBus  (c+96,(vlTOPp->Core__DOT__reg__024__DOT__registers_17),32);
	vcdp->fullBus  (c+97,(vlTOPp->Core__DOT__reg__024__DOT__registers_18),32);
	vcdp->fullBus  (c+98,(vlTOPp->Core__DOT__reg__024__DOT__registers_19),32);
	vcdp->fullBus  (c+99,(vlTOPp->Core__DOT__reg__024__DOT__registers_20),32);
	vcdp->fullBus  (c+100,(vlTOPp->Core__DOT__reg__024__DOT__registers_21),32);
	vcdp->fullBus  (c+101,(vlTOPp->Core__DOT__reg__024__DOT__registers_22),32);
	vcdp->fullBus  (c+102,(vlTOPp->Core__DOT__reg__024__DOT__registers_23),32);
	vcdp->fullBus  (c+103,(vlTOPp->Core__DOT__reg__024__DOT__registers_24),32);
	vcdp->fullBus  (c+104,(vlTOPp->Core__DOT__reg__024__DOT__registers_25),32);
	vcdp->fullBus  (c+105,(vlTOPp->Core__DOT__reg__024__DOT__registers_26),32);
	vcdp->fullBus  (c+106,(vlTOPp->Core__DOT__reg__024__DOT__registers_27),32);
	vcdp->fullBus  (c+107,(vlTOPp->Core__DOT__reg__024__DOT__registers_28),32);
	vcdp->fullBus  (c+108,(vlTOPp->Core__DOT__reg__024__DOT__registers_29),32);
	vcdp->fullBus  (c+109,(vlTOPp->Core__DOT__reg__024__DOT__registers_30),32);
	vcdp->fullBus  (c+110,(vlTOPp->Core__DOT__reg__024__DOT__registers_31),32);
	vcdp->fullBus  (c+111,((0x3ffU & (vlTOPp->Core__DOT__PC__DOT__reg__024 
					  >> 2U))),10);
	vcdp->fullBus  (c+112,((0xffU & (vlTOPp->Core__DOT__exe_pipe__DOT__reg_aluOutput 
					 >> 2U))),10);
	vcdp->fullBit  (c+113,(vlTOPp->clock));
	vcdp->fullBit  (c+114,(vlTOPp->reset));
	vcdp->fullBus  (c+115,(vlTOPp->io_instruction),32);
	vcdp->fullBus  (c+116,(vlTOPp->io_AluOut),32);
	vcdp->fullBit  (c+117,(vlTOPp->io_branchCheck));
	vcdp->fullBit  (c+118,(1U));
    }
}
