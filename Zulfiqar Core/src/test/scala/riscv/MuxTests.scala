package riscv
import chisel3.iotesters.PeekPokeTester
class MuxTests(c: Mux) extends PeekPokeTester(c){
  poke(c.io.i1,1)
  poke(c.io.i2,0)
  poke(c.io.s,1)
  step(1)
  expect(c.io.output,0)
}
