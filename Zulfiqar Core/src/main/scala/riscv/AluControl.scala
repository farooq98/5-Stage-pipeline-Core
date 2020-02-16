package riscv
import chisel3._
import chisel3.util.Cat
class AluControl extends Module {
  val io = IO(new Bundle{
    val ALUop = Input(UInt(3.W))
    val func3 = Input(UInt(3.W))
    val func7 = Input(UInt(1.W))
    val out = Output(UInt(5.W))
  })
  when(io.ALUop === "b000".U){ //R-type
    io.out := Cat(0.U,io.func7,io.func3)
  }.elsewhen(io.ALUop === "b011".U){ //Jal Jalr
    io.out := "b11111".U
  }.elsewhen(io.ALUop === "b100".U){ // I-type load
    io.out := "b00000".U
  }.elsewhen(io.ALUop === "b001".U ){ //I-type
    //io.out := Cat(0.U,io.func7,io.func3)
    when(io.func3 === "b101".U){
      io.out := Cat(0.U,io.func7,io.func3)
    }.otherwise{
      io.out := Cat("b00".U,io.func3)
    }
  }.elsewhen(io.ALUop === "b101".U){ // S-type
    io.out := "b00000".U
  }.elsewhen(io.ALUop === "b010".U && io.func3 === "b000".U ){ // SB-type
    io.out := Cat("b10".U,io.func3)
  }.elsewhen(io.ALUop === "b110".U){ //Lui
    io.out := "b00000".U
  }.otherwise{
    io.out := DontCare
  }
  /**when(io.ALUop === "b000".U && io.func3 === "b000".U && io.func7 === "b0".U ){ // R-type
    io.out := "b00000".U
  }.elsewhen(io.ALUop === "b000".U && io.func3 === "b000".U && io.func7 === "b1".U ){ // R-type
    io.out := "b01000".U
  }.elsewhen(io.ALUop === "b000".U && io.func3 === "b001".U && io.func7 === "b0".U ){ // R-type
    io.out := "b00001".U
  }.elsewhen(io.ALUop === "b000".U && io.func3 === "b010".U && io.func7 === "b0".U ){ // R-type
    io.out := "b00010".U
  }.elsewhen(io.ALUop === "b000".U && io.func3 === "b011".U && io.func7 === "b0".U ){ // R-type
    io.out := "b00011".U
  }.elsewhen(io.ALUop === "b000".U && io.func3 === "b100".U && io.func7 === "b0".U ){ // R-type
    io.out := "b00100".U
  }.elsewhen(io.ALUop === "b000".U && io.func3 === "b101".U && io.func7 === "b0".U ){ // R-type
    io.out := "b00101".U
  }/**.elsewhen(io.ALUop === "b000".U && io.func3 === "b110".U && io.func7 === "b1".U ){ // R-type sra same output
    io.out := "b01000".U
  }**/.elsewhen(io.ALUop === "b000".U && io.func3 === "b110".U && io.func7 === "b0".U ){ // R-type
    io.out := "b00110".U
  }.elsewhen(io.ALUop === "b000".U && io.func3 === "b111".U && io.func7 === "b0".U ){ // R-type
    io.out := "b00111".U
  }/**.elsewhen(io.ALUop === "b".U && io.func3 === "b000".U && io.func7 === "b0".U ){ // R-type-2nd OpCode
    io.out := "b01000".U
  }.elsewhen(io.ALUop === "b".U && io.func3 === "b000".U && io.func7 === "b1".U ){ // R-type-2nd OpCode
    io.out := "b01000".U
  }.elsewhen(io.ALUop === "b".U && io.func3 === "b001".U && io.func7 === "b0".U ){ // R-type-2nd OpCode
    io.out := "b01000".U
  }.elsewhen(io.ALUop === "b".U && io.func3 === "b101".U && io.func7 === "b0".U ){ // R-type-2nd OpCode
    io.out := "b01000".U
  }.elsewhen(io.ALUop === "b".U && io.func3 === "b101".U && io.func7 === "b1".U ){ // R-type-2nd OpCode
    io.out := "b01000".U
  }**/.elsewhen(io.ALUop === "b110".U){ //lui U-type
    io.out := "b00000".U
  }.elsewhen(io.ALUop === "b011".U){ //jal UJ-type
    io.out := "b11111".U
  }.elsewhen(io.ALUop === "b011".U && io.func3 === "b000".U ){ // I-type Jalr 4th
    io.out := "b11111".U
  }/**.elsewhen(io.ALUop === "b".U){ //auipc U-type
    io.out := "b01000".U
  }**/.elsewhen(io.ALUop === "b100".U && io.func3 === "b000".U ){ // I-type Load
    io.out := "b00000".U
  }.elsewhen(io.ALUop === "b100".U && io.func3 === "b001".U ){ // I-type Load
    io.out := "b00000".U
  }.elsewhen(io.ALUop === "b100".U && io.func3 === "b010".U ){ // I-type Load
    io.out := "b00000".U
  }.elsewhen(io.ALUop === "b100".U && io.func3 === "b011".U ){ // I-type Load
    io.out := "b00000".U
  }.elsewhen(io.ALUop === "b100".U && io.func3 === "b100".U ){ // I-type Load
    io.out := "b00000".U
  }.elsewhen(io.ALUop === "b100".U && io.func3 === "b101".U ){ // I-type Load
    io.out := "b00000".U
  }.elsewhen(io.ALUop === "b100".U && io.func3 === "b110".U ){ // I-type Load
    io.out := "b00000".U
  }/**.elsewhen(io.ALUop === "b100".U && io.func3 === "b000".U ){ // I-type fence
    io.out := "b01000".U
  }.elsewhen(io.ALUop === "b100".U && io.func3 === "b001".U ){ // I-type fence.i
    io.out := "b01000".U
  }**/.elsewhen(io.ALUop === "b001".U && io.func3 === "b000".U ){ // I-type Load
    io.out := "b00000".U
  }.elsewhen(io.ALUop === "b001".U && io.func3 === "b001".U && io.func7 === "b0".U){ // I-type
    io.out := "b00001".U
  }.elsewhen(io.ALUop === "b001".U && io.func3 === "b010".U ){ // I-type
    io.out := "b00010".U
  }.elsewhen(io.ALUop === "b001".U && io.func3 === "b011".U ){ // I-type
    io.out := "b00011".U
  }.elsewhen(io.ALUop === "b001".U && io.func3 === "b100".U ){ // I-type
    io.out := "b00100".U
  }.elsewhen(io.ALUop === "b001".U && io.func3 === "b101".U && io.func7 === "b0".U){ // I-type
    io.out := "b00101".U
  }/**.elsewhen(io.ALUop === "b001".U && io.func3 === "b101".U && io.func7 === "b1".U){ // I-type same output as previous function 7
    io.out := "b00101".U
  }**/.elsewhen(io.ALUop === "b001".U && io.func3 === "b110".U ){ // I-type
    io.out := "b00110".U
  }.elsewhen(io.ALUop === "b001".U && io.func3 === "b111".U ){ // I-type
    io.out := "b00111".U
  }/**.elsewhen(io.ALUop === "b".U && io.func3 === "b000".U ){ // I-type 2nd
    io.out := "b01000".U
  }.elsewhen(io.ALUop === "b".U && io.func3 === "b001".U && io.func7 === "b0".U){ // I-type 2nd
    io.out := "b01000".U
  }.elsewhen(io.ALUop === "b".U && io.func3 === "b101".U && io.func7 === "b0".U){ // I-type 2nd
    io.out := "b01000".U
  }.elsewhen(io.ALUop === "b".U && io.func3 === "b101".U && io.func7 === "b1".U){ // I-type 2nd
    io.out := "b01000".U
  }**/.elsewhen(io.ALUop === "b101".U && io.func3 === "b000".U ){ // S-type Store
    io.out := "b00000".U
  }.elsewhen(io.ALUop === "b101".U && io.func3 === "b001".U ){ // S-type Store
    io.out := "b00000".U
  }.elsewhen(io.ALUop === "b101".U && io.func3 === "b010".U ){ // S-type Store
    io.out := "b00000".U
  }.elsewhen(io.ALUop === "b101".U && io.func3 === "b011".U ){ // I-type 3rd
    io.out := "b00000".U
  }/**.elsewhen(io.ALUop === "b".U && io.func3 === "b000".U && io.func7 === "b0".U ){ // I-type 5th
    io.out := "b01000".U
  }.elsewhen(io.ALUop === "b".U && io.func3 === "b000".U && io.func7 === "b1".U ){ // I-type 5th
    io.out := "b01000".U
  }.elsewhen(io.ALUop === "b".U && io.func3 === "b001".U ){ // I-type 5th
    io.out := "b01000".U
  }.elsewhen(io.ALUop === "b".U && io.func3 === "b010".U ){ // I-type 5th
    io.out := "b01000".U
  }.elsewhen(io.ALUop === "b".U && io.func3 === "b011".U ){ // I-type 5th
    io.out := "b01000".U
  }.elsewhen(io.ALUop === "b".U && io.func3 === "b101".U ){ // I-type 5th
    io.out := "b01000".U
  }.elsewhen(io.ALUop === "b".U && io.func3 === "b110".U ){ // I-type 5th
    io.out := "b01000".U
  }.elsewhen(io.ALUop === "b".U && io.func3 === "b111".U ){ // I-type 5th
    io.out := "b01000".U
  }**/.elsewhen(io.ALUop === "b010".U && io.func3 === "b000".U ){ // SB-type
    io.out := "b10000".U
  }.elsewhen(io.ALUop === "b010".U && io.func3 === "b001".U ){ // SB-type
    io.out := "b10001".U
  }.elsewhen(io.ALUop === "b010".U && io.func3 === "b100".U ){ // SB-type
    io.out := "b10100".U
  }.elsewhen(io.ALUop === "b010".U && io.func3 === "b101".U ){ // SB-type
    io.out := "b10101".U
  }.elsewhen(io.ALUop === "b010".U && io.func3 === "b110".U ){ // SB-type
    io.out := "b10110".U
  }.elsewhen(io.ALUop === "b010".U && io.func3 === "b111".U ){ // SB-type
    io.out := "b10111".U
  }.otherwise{
    io.out := DontCare
  }**/
}
