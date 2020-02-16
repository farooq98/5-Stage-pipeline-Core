package riscv
import chisel3._
import chisel3.util.Cat
import chisel3.util.Fill
class immGen extends Module{
  val io = IO(new Bundle{
    val ins = Input(UInt(32.W))
    val pc = Input(UInt(32.W))
    val S = Output(SInt(32.W))
    val sb = Output(SInt(32.W))
    val i = Output(SInt(32.W))
    val uj = Output(SInt(32.W))
    val u = Output(SInt(32.W))
  })
  val imm31 = io.ins(31)
  val imm30 = io.ins(30,25)
  val imm24 = io.ins(24,21)
  val imm20 = io.ins(20)
  val imm19 = io.ins(19,12)
  val imm11 = io.ins(11,8)
  val imm7 = io.ins(7)

  io.S := Cat(Fill(20,imm31),imm31,imm30,imm11,imm7).asSInt
  io.i := Cat(Fill(20,imm31),imm31,imm30,imm24,imm20).asSInt
  io.sb := (Cat(Fill(19,imm31),imm31,imm7,imm30,imm11,0.U) + io.pc).asSInt
  io.u := (Cat(imm31,imm30,imm24,imm20,imm19) << 12.U).asSInt
  io.uj := (Cat(Fill(11,imm31),imm31,imm19,imm20,imm30,imm24,0.U) + io.pc).asSInt
}
