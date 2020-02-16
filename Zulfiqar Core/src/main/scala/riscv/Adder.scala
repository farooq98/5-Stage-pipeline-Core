package riscv
import chisel3._
class Adder extends Module{
  val  io = IO(new Bundle{
    val a = Input(UInt(1.W))
    val b = Input(UInt(1.W))
    val cin = Input(UInt(1.W))
    val sum = Output(UInt(1.W))
    val cout = Output(UInt(1.W))
  })
  io.cout := (io.a & io.b) | (io.cin & io.a) | (io.b & io.cin)
  io.sum := (~io.cin & ~io.a & io.b) | (~io.cin & io.a & ~io.b) | (io.cin & ~io.a & ~io.b) | (io.cin & io.a & io.b)
}
