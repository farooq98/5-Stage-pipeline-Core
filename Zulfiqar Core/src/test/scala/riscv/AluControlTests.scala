package riscv
import chisel3.iotesters.PeekPokeTester
class AluControlTests(c: AluControl) extends PeekPokeTester(c) {
  poke(c.io.ALUop,1)
  poke(c.io.func3,6)
  poke(c.io.func7,0)
  step(1)
  expect(c.io.out,6)

}
