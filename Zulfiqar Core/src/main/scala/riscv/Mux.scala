package riscv
import chisel3._
class Mux extends Module{
  val io = IO(new Bundle{
    val i1 = Input(UInt(1.W))
    val i2 = Input(UInt(1.W))
    val s = Input(UInt(1.W))
    val output = Output(UInt(1.W))
  })
  io.output := (io.i2 & io.s) | (io.i1 & ~io.s)
}
