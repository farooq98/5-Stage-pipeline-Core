package riscv
import chisel3._
class Type_Decode extends Module{
  val io = IO(new Bundle{
    val opcode = Input(UInt(7.W))
    val r = Output(UInt(1.W))
    val load = Output(UInt(1.W))
    val store = Output(UInt(1.W))
    val branch = Output(UInt(1.W))
    val i = Output(UInt(1.W))
    val jal = Output(UInt(1.W))
    val jalr = Output(UInt(1.W))
    val lui = Output(UInt(1.W))
  })
  when(io.opcode === "h33".U){
    io.r := 1.U
    io.load := 0.U
    io.store := 0.U
    io.branch := 0.U
    io.i := 0.U
    io.jalr := 0.U
    io.jal := 0.U
    io.lui := 0.U
  }.elsewhen(io.opcode === "h3".U){
    io.load := 1.U
    io.r := 0.U
    io.store := 0.U
    io.branch := 0.U
    io.i := 0.U
    io.jalr := 0.U
    io.jal := 0.U
    io.lui := 0.U
  }.elsewhen(io.opcode === "h23".U){
    io.store := 1.U
    io.r := 0.U
    io.load := 0.U
    io.branch := 0.U
    io.i := 0.U
    io.jalr := 0.U
    io.jal := 0.U
    io.lui := 0.U
  }.elsewhen(io.opcode === "h63".U){
    io.branch := 1.U
    io.r := 0.U
    io.load := 0.U
    io.store := 0.U
    io.i := 0.U
    io.jalr := 0.U
    io.jal := 0.U
    io.lui := 0.U
  }.elsewhen(io.opcode === "h13".U){
    io.i := 1.U
    io.r := 0.U
    io.load := 0.U
    io.store := 0.U
    io.branch := 0.U
    io.jalr := 0.U
    io.jal := 0.U
    io.lui := 0.U
  }.elsewhen(io.opcode === "h67".U){
    io.jalr := 1.U
    io.r := 0.U
    io.load := 0.U
    io.store := 0.U
    io.branch := 0.U
    io.i := 0.U
    io.jal := 0.U
    io.lui := 0.U
  }.elsewhen(io.opcode === "h6f".U){
    io.jal := 1.U
    io.r := 0.U
    io.load := 0.U
    io.store := 0.U
    io.branch := 0.U
    io.i := 0.U
    io.jalr := 0.U
    io.lui := 0.U
  }.elsewhen(io.opcode === "h37".U){
    io.lui := 1.U
    io.r := 0.U
    io.load := 0.U
    io.store := 0.U
    io.branch := 0.U
    io.i := 0.U
    io.jalr := 0.U
    io.jal := 0.U
  }.otherwise{
    io.r := 0.U
    io.load := 0.U
    io.store := 0.U
    io.branch := 0.U
    io.i := 0.U
    io.jalr := 0.U
    io.jal := 0.U
    io.lui := 0.U
  }

}
