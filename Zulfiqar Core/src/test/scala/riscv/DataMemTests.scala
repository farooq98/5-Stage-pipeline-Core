package riscv
import chisel3._
import chisel3.iotesters.PeekPokeTester
class DataMemTests(c: DataMem) extends PeekPokeTester(c) {
  poke(c.io.store,1)
  poke(c.io.addrr,0)
  poke(c.io.load,0)
  poke(c.io.storedata,10)
  step(1)
  /**poke(c.io.store,0)
  poke(c.io.addrr,0)
  poke(c.io.load,1)
  poke(c.io.storedata,0)
  step(1)
  step(1)**/
}
