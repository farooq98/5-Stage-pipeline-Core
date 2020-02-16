package riscv
import chisel3.iotesters.PeekPokeTester
class AdderTests(c: Adder) extends PeekPokeTester(c) {
  poke(c.io.a,1)
  poke(c.io.b,0)
  poke(c.io.cin,1)
  step(1)
  expect(c.io.sum,0)
  expect(c.io.cout,1)
}
