package riscv
import chisel3.iotesters.PeekPokeTester
//Nand Tests
class NandTests(c:Nand) extends PeekPokeTester(c){
       poke(c.io.a, 1)
       poke(c.io.b, 1)
       step(1)
	expect(c.io.output, 0)
}
