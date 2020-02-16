package riscv

import chisel3._

class Ex_Pipeline extends Module{
	val io = IO(new Bundle{

		val rs1_sel_in = Input(UInt(5.W))
		val rs2_sel_in = Input(UInt(5.W))
		val memWrite_in = Input(UInt(1.W))
		val memRead_in = Input(UInt(1.W))
		val memToReg_in = Input(UInt(1.W))
		val rd_in = Input(UInt(5.W))
		val aluOutput_in = Input(SInt(32.W))
		val strData_in = Input(SInt(32.W))
		val regWrite_in = Input(UInt(1.W))
    val alu_Output_input = Input(SInt(32.W))
    val alu_branch_output_input = Input(UInt(1.W))
		val rs1_in = Input(SInt(32.W))
		val rs2_in = Input(SInt(32.W))

		val rs1_sel_Out = Output(UInt(5.W))
		val rs2_sel_Out = Output(UInt(5.W))
		val memWrite_out = Output(UInt(1.W))
		val memRead_out = Output(UInt(1.W))
		val memToReg_out = Output(UInt(1.W))
		val rd_out = Output(UInt(5.W))
		val strData_out = Output(SInt(32.W))
		val aluOutput_out = Output(SInt(32.W))
		val regWrite_out = Output(UInt(1.W))
    val alu_Output_output = Output(SInt(32.W))
    val alu_branch_output_output = Output(UInt(1.W))
		val rs1_out = Output(SInt(32.W))
		val rs2_out = Output(SInt(32.W))
	})


	val reg_memWrite = RegInit(0.U(1.W))
	val reg_memRead = RegInit(0.U(1.W))
	val reg_memToReg = RegInit(0.U(1.W))
	val reg_rd = RegInit(0.U(5.W))
	val reg_strData = RegInit(0.S(32.W))
	val reg_aluOutput = RegInit(0.S(32.W))
	val reg_regWrite = RegInit(0.U(1.W))
  val alu_Output = RegInit(0.S(32.W))
  val alu_branch_output = RegInit(0.U(1.W))
	val reg_rs1_sel = RegInit(0.U(5.W))
	val reg_rs2_sel = RegInit(0.U(5.W))
	val reg_rs1 = RegInit(0.S(32.W))
	val reg_rs2 = RegInit(0.S(32.W))

	reg_memWrite := io.memWrite_in
	reg_memRead := io.memRead_in
	reg_memToReg := io.memToReg_in
	reg_rd := io.rd_in
	reg_strData := io.strData_in
	reg_aluOutput := io.aluOutput_in
	reg_regWrite := io.regWrite_in
  alu_Output := io.alu_Output_input
  alu_branch_output := io.alu_branch_output_input
	reg_rs1_sel := io.rs1_sel_in
	reg_rs2_sel := io.rs2_sel_in
	reg_rs1 := io.rs1_in
	reg_rs2 := io.rs2_in

	io.rs1_sel_Out := reg_rs1_sel
	io.rs2_sel_Out := reg_rs2_sel
	io.memWrite_out := reg_memWrite
	io.memRead_out := reg_memRead
	io.memToReg_out := reg_memToReg
	io.rd_out := reg_rd
	io.strData_out := reg_strData
	io.aluOutput_out := reg_aluOutput
	io.regWrite_out := reg_regWrite
  io.alu_Output_output := alu_Output
  io.alu_branch_output_output := alu_branch_output
	io.rs2_out := reg_rs2
	io.rs1_out := reg_rs1

}
