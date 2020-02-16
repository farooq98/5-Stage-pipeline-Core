package riscv
import chisel3.iotesters.PeekPokeTester
class TypeDecodeTests(c: Type_Decode) extends PeekPokeTester(c) {
  poke(c.io.opcode,55)
  step(1)
  expect(c.io.r,0)
  expect(c.io.load,0)
  expect(c.io.store,0)
  expect(c.io.branch,0)
  expect(c.io.i,0)
  expect(c.io.jal,0)
  expect(c.io.jalr,0)
  expect(c.io.lui,1)

}
