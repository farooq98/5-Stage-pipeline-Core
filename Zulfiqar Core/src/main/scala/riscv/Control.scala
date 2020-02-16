package riscv
import chisel3._
class Control extends Module{
  val io = IO(new Bundle{
    val opcode = Input(UInt(7.W))
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
  val typeDecode = Module(new Type_Decode)
  val CtrlDecode = Module(new ControlDecode)

  typeDecode.io.opcode := io.opcode
  CtrlDecode.io.r := typeDecode.io.r
  CtrlDecode.io.load := typeDecode.io.load
  CtrlDecode.io.store := typeDecode.io.store
  CtrlDecode.io.br := typeDecode.io.branch
  CtrlDecode.io.i := typeDecode.io.i
  CtrlDecode.io.jal := typeDecode.io.jal
  CtrlDecode.io.jalr := typeDecode.io.jalr
  CtrlDecode.io.lui := typeDecode.io.lui
  io.memWrite := CtrlDecode.io.memWrite
  io.branch := CtrlDecode.io.branch
  io.memRead := CtrlDecode.io.memRead
  io.regWrite := CtrlDecode.io.regWrite
  io.memToReg := CtrlDecode.io.memToReg
  io.aluOp := CtrlDecode.io.aluOp
  io.oprA := CtrlDecode.io.oprA
  io.oprB := CtrlDecode.io.oprB
  io.extendSel := CtrlDecode.io.extendSel
  io.nextPcSel := CtrlDecode.io.nextPcSel

}
