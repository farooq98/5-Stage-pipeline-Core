package riscv
import chisel3.iotesters.PeekPokeTester
class PCTests(c: PC) extends PeekPokeTester(c) {
  poke(c.io.input,4)
  step(1)
  step(1)
  expect(c.io.pc,4)
  expect(c.io.pc4,8)

}
