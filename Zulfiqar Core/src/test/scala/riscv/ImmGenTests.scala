package riscv
import chisel3.iotesters.PeekPokeTester
class ImmGenTests(c: immGen) extends PeekPokeTester(c) {
  poke(c.io.ins,1048576)
  poke(c.io.pc,0)
  step(1)
  expect(c.io.S,0)
  expect(c.io.sb,0)
  expect(c.io.u,1048576)
  expect(c.io.uj,2048)
  expect(c.io.i,1)
}
