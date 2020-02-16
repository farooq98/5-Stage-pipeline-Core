package riscv
import chisel3.iotesters.PeekPokeTester
class FullAdder4Tests(c: FullAdder4) extends PeekPokeTester(c) {
  poke(c.io.b4,0)
  poke(c.io.a4,0)
  poke(c.io.b3,0)
  poke(c.io.a3,0)
  poke(c.io.b2,0)
  poke(c.io.a2,0)
  poke(c.io.b1,0)
  poke(c.io.a1,1)
  poke(c.io.cin,0)
  step(1)
  expect(c.io.cout,0)
  expect(c.io.sum4,0)
  expect(c.io.sum3,0)
  expect(c.io.sum2,0)
  expect(c.io.sum1,1)
}
