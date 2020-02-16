package riscv
import chisel3.iotesters.PeekPokeTester
class AluTests(c: Alu) extends PeekPokeTester(c) {
  poke(c.io.a,8)
  poke(c.io.b,8)
  poke(c.io.aluControl,17)
  step(1)
  expect(c.io.branch,0)
  expect(c.io.aluOut,0)
}
