package riscv
import chisel3._
class FullAdder4 extends Module{
  val io = IO(new Bundle{
    val cin = Input(UInt(1.W))
    val a1 = Input(UInt(1.W))
    val b1 = Input(UInt(1.W))
    val a2 = Input(UInt(1.W))
    val b2 = Input(UInt(1.W))
    val a3 = Input(UInt(1.W))
    val b3 = Input(UInt(1.W))
    val a4 = Input(UInt(1.W))
    val b4 = Input(UInt(1.W))
    val sum1 = Output(UInt(1.W))
    val sum2 = Output(UInt(1.W))
    val sum3 = Output(UInt(1.W))
    val sum4 = Output(UInt(1.W))
    val cout = Output(UInt(1.W))
  })
  val add1 = Module(new Adder())
  val add2 = Module(new Adder())
  val add3 = Module(new Adder())
  val add4 = Module(new Adder())
  add1.io.cin := io.cin
  add1.io.a := io.a1
  add1.io.b := io.b1
  io.sum1 := add1.io.sum
  add2.io.cin := add1.io.cout
  add2.io.a := io.a2
  add2.io.b := io.b2
  io.sum2 := add2.io.sum
  add3.io.cin := add1.io.cout
  add3.io.a := io.a3
  add3.io.b := io.b3
  io.sum3 := add3.io.sum
  add4.io.cin := add1.io.cout
  add4.io.a := io.a4
  add4.io.b := io.b4
  io.sum4 := add4.io.sum
  io.cout := add4.io.cout
}
