package riscv
import chisel3._
class FullAdder2 extends Module{
  val io = IO(new Bundle{
    val cin = Input(UInt(1.W))
    val a1 = Input(UInt(1.W))
    val b1 = Input(UInt(1.W))
    //val cin2 = Input(UInt(1.W))
    val a2 = Input(UInt(1.W))
    val b2 = Input(UInt(1.W))
    val sum0 = Output(UInt(1.W))
    val sum1 = Output(UInt(1.W))
    val cout = Output(UInt(1.W))
  })
  val add1 = Module(new Adder())
  val add2 = Module(new Adder())
  add1.io.cin := io.cin
  add1.io.a := io.a1
  add1.io.b := io.b1
  add2.io.cin := add1.io.cout
  add2.io.a := io.a2
  add2.io.b := io.b2
  io.sum0 := add1.io.sum
  io.sum1 := add2.io.sum
  io.cout := add2.io.cout
}
