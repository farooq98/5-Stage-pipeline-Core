package riscv
import chisel3._
class JalrTarget extends Module{
  val io = IO(new Bundle{
    val imm = Input(SInt(32.W))
    val rs1 = Input(SInt(32.W))
    val out = Output(SInt(32.W))
  })
  io.out := ((io.imm + io.rs1) & 4294967294L.S)
}
