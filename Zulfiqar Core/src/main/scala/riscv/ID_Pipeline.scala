package riscv

import chisel3._

class ID_Pipeline extends Module{
	val io = IO(new Bundle{

		val rs1_sel_in = Input(UInt(5.W))
		val rs2_sel_in = Input(UInt(5.W))
		val memWrite_in = Input(UInt(1.W))
		val memRead_in = Input(UInt(1.W))
		val memToReg_in = Input(UInt(1.W))
		val operandA_in = Input(SInt(32.W))
		val operandB_in = Input(SInt(32.W))
		val rd_in = Input(UInt(5.W))
		val strData_in = Input(SInt(32.W))
		val aluCtrl_in = Input(UInt(5.W))
		val regWrite_in = Input(UInt(1.W))
		val opr_A_sel_in = Input(UInt(2.W))
		val opr_B_sel_in = Input(UInt(1.W))
		//val pc4_in = Input(UInt(32.W))
		//val pc_in = Input(UInt(32.W))
		//val imm_in = Input(SInt(32.W))

		val rs1_sel_Out = Output(UInt(5.W))
		val rs2_sel_Out = Output(UInt(5.W))
		val memWrite_out = Output(UInt(1.W))
		val memRead_out = Output(UInt(1.W))
		val memToReg_out = Output(UInt(1.W))
		val operandA_out = Output(SInt(32.W))
		val operandB_out = Output(SInt(32.W))
		val rd_out = Output(UInt(5.W))
		val strData_out = Output(SInt(32.W))
		val aluCtrl_out = Output(UInt(5.W))
		val regWrite_out = Output(UInt(1.W))
		val opr_A_sel_Out = Output(UInt(2.W))
		val opr_B_sel_Out = Output(UInt(1.W))
		//val pc4_out = Output(UInt(32.W))
		//val pc_out = Output(UInt(32.W))
		//val imm_out = Output(SInt(32.W))

	})


	val reg_memWrite = RegInit(0.U(1.W))
	val reg_memRead = RegInit(0.U(1.W))
	val reg_memToReg = RegInit(0.U(1.W))
	val reg_operandA = RegInit(0.S(32.W))
	val reg_operandB = RegInit(0.S(32.W))
	val reg_rd = RegInit(0.U(5.W))
	val reg_strData = RegInit(0.S(32.W))
	val reg_aluCtrl = RegInit(0.U(5.W))
	val reg_regWrite = RegInit(0.U(1.W))
	val reg_rs1 = RegInit(0.S(32.W))
	val reg_rs2 = RegInit(0.S(32.W))
	val reg_rs1_sel = RegInit(0.U(5.W))
	val reg_rs2_sel = RegInit(0.U(5.W))
	val reg_opr_A = RegInit(0.U(2.W))
	val reg_opr_B = RegInit(0.U(1.W))
	//val reg_pc4 = RegInit(0.U(32.W))
	//val reg_pc = RegInit(0.U(32.W))
	//val reg_imm = RegInit(0.S(32.W))

	reg_memWrite := io.memWrite_in
	reg_memRead := io.memRead_in
	reg_memToReg := io.memToReg_in
	reg_operandA := io.operandA_in
	reg_operandB := io.operandB_in
	reg_rd := io.rd_in
	reg_strData := io.strData_in
	reg_aluCtrl := io.aluCtrl_in
	reg_regWrite := io.regWrite_in
	reg_rs1_sel := io.rs1_sel_in
	reg_rs2_sel := io.rs2_sel_in
	reg_opr_A := io.opr_A_sel_in
	reg_opr_B := io.opr_B_sel_in
	//reg_pc4 := io.pc4_in
	//reg_pc := io.pc_in
	//reg_imm := io.imm_in

	io.rs1_sel_Out := reg_rs1_sel
	io.rs2_sel_Out := reg_rs2_sel
	io.memWrite_out := reg_memWrite
	io.memRead_out := reg_memRead
	io.memToReg_out := reg_memToReg
	io.operandA_out := reg_operandA
	io.operandB_out := reg_operandB
	io.rd_out := reg_rd
	io.strData_out := reg_strData
	io.aluCtrl_out := reg_aluCtrl
	io.regWrite_out := reg_regWrite
	io.opr_A_sel_Out := reg_opr_A
	io.opr_B_sel_Out := reg_opr_B
	//io.pc4_out := reg_pc4
	//io.pc_out := reg_pc
	//io.imm_out := reg_imm


}
