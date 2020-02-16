package riscv
import chisel3.iotesters.PeekPokeTester
class JalrTargetTests(c: JalrTarget) extends PeekPokeTester(c) {
  poke(c.io.imm,1)
  poke(c.io.rs1,1)
  step(1)
  expect(c.io.out,2)
}
