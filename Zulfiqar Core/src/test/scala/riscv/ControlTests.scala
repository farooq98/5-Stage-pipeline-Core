package riscv
import chisel3._
import chisel3.iotesters.PeekPokeTester
class ControlTests(c: Control) extends PeekPokeTester(c) {
  poke(c.io.opcode,"h33".U)
  step(1)
  expect(c.io.memWrite,0)
  expect(c.io.branch,0)
  expect(c.io.memRead,0)
  expect(c.io.regWrite,1)
  expect(c.io.memToReg,0)
  expect(c.io.aluOp,0)
  expect(c.io.oprA,0)
  expect(c.io.oprB,0)
  expect(c.io.extendSel,0)
  expect(c.io.nextPcSel,0)
}
