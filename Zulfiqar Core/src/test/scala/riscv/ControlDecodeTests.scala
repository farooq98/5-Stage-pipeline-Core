package riscv
import chisel3.iotesters.PeekPokeTester
class ControlDecodeTests(c: ControlDecode) extends PeekPokeTester(c) {
  poke(c.io.r,0)
  poke(c.io.load,0)
  poke(c.io.store,0)
  poke(c.io.br,0)
  poke(c.io.i,0)
  poke(c.io.jalr,0)
  poke(c.io.jal,0)
  poke(c.io.lui,1)
  step(1)
  expect(c.io.memWrite,0)
  expect(c.io.branch,0)
  expect(c.io.memRead,0)
  expect(c.io.regWrite,1)
  expect(c.io.memToReg,0)
  expect(c.io.aluOp,6)
  expect(c.io.oprA,3)
  expect(c.io.oprB,1)
  expect(c.io.extendSel,1)
  expect(c.io.nextPcSel,0)
}
