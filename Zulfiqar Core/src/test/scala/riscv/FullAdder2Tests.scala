package riscv
import chisel3.iotesters.PeekPokeTester
class FullAdder2Tests(c: FullAdder2) extends PeekPokeTester(c) {
  poke(c.io.cin,0)
  poke(c.io.a1,0)
  poke(c.io.b1,0)
  poke(c.io.a2,1)
  poke(c.io.b2,0)
  step(1)
  expect(c.io.cout,0)
  expect(c.io.sum1,1)
  expect(c.io.sum0,0)

}
