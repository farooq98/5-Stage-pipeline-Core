package riscv
import chisel3._
class ControlDecode extends Module{
  val io = IO(new Bundle{
    val r = Input(UInt(1.W))
    val load = Input(UInt(1.W))
    val store = Input(UInt(1.W))
    val br = Input(UInt(1.W))
    val i = Input(UInt(1.W))
    val jal = Input(UInt(1.W))
    val jalr = Input(UInt(1.W))
    val lui = Input(UInt(1.W))
    val memWrite = Output(UInt(1.W))
    val branch = Output(UInt(1.W))
    val memRead = Output(UInt(1.W))
    val regWrite = Output(UInt(1.W))
    val memToReg = Output(UInt(1.W))
    val aluOp = Output(UInt(3.W))
    val oprA = Output(UInt(2.W))
    val oprB = Output(UInt(1.W))
    val extendSel = Output(UInt(2.W))
    val nextPcSel = Output(UInt(2.W))
  })
  when(io.r === 1.U){
    io.memWrite := 0.U
    io.branch := 0.U
    io.memRead := 0.U
    io.regWrite := 1.U
    io.memToReg := 0.U
    io.aluOp := "b000".U
    io.oprA := "b00".U
    io.oprB := 0.U
    io.extendSel := "b00".U
    io.nextPcSel := "b00".U
  }.elsewhen(io.load === 1.U){
    io.memWrite := 0.U
    io.branch := 0.U
    io.memRead := 1.U
    io.regWrite := 1.U
    io.memToReg := 1.U
    io.aluOp := "b100".U
    io.oprA := "b00".U
    io.oprB := 1.U
    io.extendSel := "b00".U
    io.nextPcSel := "b00".U
  }.elsewhen(io.store === 1.U){
    io.memWrite := 1.U
    io.branch := 0.U
    io.memRead := 0.U
    io.regWrite := 0.U
    io.memToReg := 0.U
    io.aluOp := "b101".U
    io.oprA := "b00".U
    io.oprB := 1.U
    io.extendSel := "b10".U
    io.nextPcSel := "b00".U
  }.elsewhen(io.br === 1.U){
    io.memWrite := 0.U
    io.branch := 1.U
    io.memRead := 0.U
    io.regWrite := 0.U
    io.memToReg := 0.U
    io.aluOp := "b010".U
    io.oprA := "b00".U
    io.oprB := 0.U
    io.extendSel := "b00".U
    io.nextPcSel := "b01".U
  }.elsewhen(io.jalr === 1.U){
    io.memWrite := 0.U
    io.branch := 0.U
    io.memRead := 0.U
    io.regWrite := 1.U
    io.memToReg := 0.U
    io.aluOp := "b011".U
    io.oprA := "b10".U
    io.oprB := 0.U
    io.extendSel := "b00".U
    io.nextPcSel := "b11".U
  }.elsewhen(io.i === 1.U){
    io.memWrite := 0.U
    io.branch := 0.U
    io.memRead := 0.U
    io.regWrite := 1.U
    io.memToReg := 0.U
    io.aluOp := "b001".U
    io.oprA := "b00".U
    io.oprB := 1.U
    io.extendSel := "b00".U
    io.nextPcSel := "b00".U
  }.elsewhen(io.jal === 1.U){
    io.memWrite := 0.U
    io.branch := 0.U
    io.memRead := 0.U
    io.regWrite := 1.U
    io.memToReg := 0.U
    io.aluOp := "b011".U
    io.oprA := "b10".U
    io.oprB := 0.U
    io.extendSel := "b00".U
    io.nextPcSel := "b10".U
  }.elsewhen(io.lui === 1.U){
    io.memWrite := 0.U
    io.branch := 0.U
    io.memRead := 0.U
    io.regWrite := 1.U
    io.memToReg := 0.U
    io.aluOp := "b110".U
    io.oprA := "b11".U
    io.oprB := 1.U
    io.extendSel := "b01".U
    io.nextPcSel := "b00".U
  }.otherwise{
    io.memWrite := 0.U
    io.branch := 0.U
    io.memRead := 0.U
    io.regWrite := 0.U
    io.memToReg := 0.U
    io.aluOp := "b111".U
    io.oprA := "b00".U
    io.oprB := 0.U
    io.extendSel := "b00".U
    io.nextPcSel := "b00".U
  }
}
