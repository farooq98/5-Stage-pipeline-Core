package riscv
import chisel3.iotesters.PeekPokeTester
//Nor Tests
class NorTests(c: Nor) extends PeekPokeTester(c){
  poke(c.io.a,1)
  poke(c.io.b,0)
  step(1)
  expect(c.io.o,0)
}
