package riscv
import chisel3._
class Alu extends Module{
  val io = IO(new Bundle{
    val a = Input(SInt(32.W))
    val b = Input(SInt(32.W))
    val aluControl = Input(UInt(5.W))
    val branch = Output(UInt(1.W))
    val aluOut = Output(SInt(32.W))
  })
  when(io.aluControl === "b00000".U){ //Add, Addi
    io.aluOut := (io.a + io.b).asSInt
  }.elsewhen(io.aluControl === "b00001".U){ //SSL, SSLI
    val left_shift_val = io.b(4,0)
    io.aluOut := io.a << left_shift_val
  }.elsewhen(io.aluControl === "b00010".U){ //SLT, SLTI
    when(io.a < io.b){
      io.aluOut := 1.S
    }.otherwise{
      io.aluOut := 0.S
    }
  }.elsewhen(io.aluControl === "b00100".U){ //XOR, XORI
    io.aluOut := io.a ^ io.b
  }.elsewhen(io.aluControl === "b00011".U || io.aluControl === "b10110".U){ //SLTU, SLTUI, BLTUI
    when(io.a.asUInt < io.b.asUInt){
      io.aluOut := 1.S
    }.otherwise{
      io.aluOut := 0.S
    }
  }.elsewhen(io.aluControl === "b00101".U){ //SRL, SRLI
    val right_shit_val = io.b(4,0)
    io.aluOut := io.a >> right_shit_val
  }.elsewhen(io.aluControl === "b00110".U){ //OR, ORI
    io.aluOut := io.a | io.b
  }.elsewhen(io.aluControl === "b00111".U){ //AND, ANDI
    io.aluOut := io.a & io.b
  }.elsewhen(io.aluControl === "b01000".U){ //SUB
    io.aluOut := io.a - io.b
  }.elsewhen(io.aluControl === "b01101".U){ //SRA, SRAI
    val shift_right_arithmetic = io.b(4,0)
    io.aluOut := io.a >> shift_right_arithmetic
  }.elsewhen(io.aluControl === "b10000".U){ //BEQ
    when(io.a === io.b){
      io.aluOut := 1.S
    }.otherwise{
      io.aluOut := 0.S
    }
  }.elsewhen(io.aluControl === "b10001".U){ //BNE
    when(io.a =/= io.b){
      io.aluOut := 1.S
    }.otherwise{
      io.aluOut := 0.S
    }
  }.elsewhen(io.aluControl === "b10100".U){ //BLT
    when(io.a < io.b){
      io.aluOut := 1.S
    }.otherwise{
      io.aluOut := 0.S
    }
  }.elsewhen(io.aluControl === "b10101".U){ //BGE
    when(io.a > io.b){
      io.aluOut := 1.S
    }.otherwise{
      io.aluOut := 0.S
    }
  }.elsewhen(io.aluControl === "b10111".U){ //BGEU
    when(io.a >= io.b){
      io.aluOut := 1.S
    }.otherwise{
      io.aluOut := 0.S
    }
  }.elsewhen(io.aluControl === "b11111".U){ //JAL, JALR
    io.aluOut := io.a
  }.otherwise{
    io.aluOut := DontCare
  }
  //val br = io.aluControl(4,3)
  when(io.aluOut === 1.S && io.aluControl(4,3) === "b10".U){ //Brach Check
      io.branch := 1.U
  }.otherwise{
    io.branch := 0.U
  }

}
