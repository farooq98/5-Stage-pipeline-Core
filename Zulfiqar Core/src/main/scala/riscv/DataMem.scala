package riscv
import chisel3._
class DataMem extends Module{
  val io = IO(new Bundle{
    val load = Input(UInt(1.W))
    val store = Input(UInt(1.W))
    val addrr = Input(UInt(8.W))
    val storedata = Input(SInt(32.W))
    val dataOut = Output(SInt(32.W))
  })

  val mem = Mem(1024,SInt(32.W))
  when(io.load === 1.U){
    io.dataOut := mem(io.addrr)
  }.otherwise{
    io.dataOut := DontCare
  }
  when(io.store === 1.U){
    mem(io.addrr) := io.storedata
  }.otherwise{
    io.dataOut := DontCare
  }

}
