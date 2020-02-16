package riscv

import chisel3._

class IF_Pipeline extends Module{
	val io = IO(new Bundle{


		val pc_in = Input(UInt(32.W))
		val pc4_in = Input(UInt(32.W))
		val ins_in = Input(UInt(32.W))
		val pc_out = Output(UInt(32.W))
		val ins_out = Output(UInt(32.W))
		val pc4_out = Output(UInt(32.W))


	})


	val reg_pc = RegInit(0.U(32.W))
	val reg_pc4 = RegInit(0.U(32.W))
	val reg_ins = RegInit(0.U(32.W))

	reg_pc := io.pc_in
	reg_pc4 := io.pc4_in
	reg_ins := io.ins_in

	io.pc_out := reg_pc
	io.pc4_out := reg_pc4
	io.ins_out := reg_ins

}
