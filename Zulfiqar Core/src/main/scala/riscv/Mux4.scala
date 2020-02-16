package riscv
import chisel3._
class Mux4 extends Module{
  val io = IO(new Bundle{
    val i0 = Input(UInt(1.W))
    val i1 = Input(UInt(1.W))
    val i2 = Input(UInt(1.W))
    val i3 = Input(UInt(1.W))
    val s0 = Input(UInt(1.W))
    val s1 = Input(UInt(1.W))
    val out = Output(UInt(1.W))
  })
  val m1 = Module(new Mux())
  val m2 = Module(new Mux())
  val m3 = Module(new Mux())
  m1.io.i1 := io.i0
  m1.io.i2 := io.i1
  m2.io.i1 := io.i2
  m2.io.i2 := io.i3
  m1.io.s := io.s0
  m2.io.s := io.s0
  m3.io.i1 := m1.io.output
  m3.io.i2 := m2.io.output
  m3.io.s := io.s1
  io.out := m3.io.output
}
