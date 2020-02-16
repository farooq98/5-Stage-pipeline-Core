package riscv
import chisel3._
class Forwarding extends Module{
  val io = IO(new Bundle{
    val exe_pipe_regWrite_out = Input(UInt(1.W))
    val exe_pipe_rd_out = Input(UInt(5.W))
    val mem_pipe_regWrite_out = Input(UInt(1.W))
    val mem_pipe_rd_out = Input(UInt(5.W))
    val id_pipe_rs1_sel_out = Input(UInt(5.W))
    val id_pipe_rs2_sel_out = Input(UInt(5.W))
    val alu_A = Output(UInt(2.W))
    val alu_B = Output(UInt(2.W))
  })

  io.alu_A := "b00".U
  io.alu_B := "b00".U

  when(io.exe_pipe_regWrite_out === "b1".U && io.exe_pipe_rd_out =/= "b00000".U)
  {
    when(io.exe_pipe_rd_out === io.id_pipe_rs1_sel_out){
      io.alu_A := "b01".U
    }
    when(io.exe_pipe_rd_out === io.id_pipe_rs2_sel_out){
      io.alu_B := "b01".U
    }
  }
  when(io.mem_pipe_regWrite_out === "b1".U && io.mem_pipe_rd_out =/= "b00000".U){
    when(~((io.mem_pipe_regWrite_out === "b1".U) && (io.mem_pipe_rd_out =/= "b00000".U) && (io.exe_pipe_rd_out === io.id_pipe_rs1_sel_out)) && (io.mem_pipe_rd_out === io.id_pipe_rs1_sel_out)){
      io.alu_A := "b10".U
    }
    when(~((io.mem_pipe_regWrite_out === "b1".U) && (io.mem_pipe_rd_out =/= "b00000".U) && (io.exe_pipe_rd_out === io.id_pipe_rs2_sel_out)) && (io.mem_pipe_rd_out === io.id_pipe_rs2_sel_out)){
      io.alu_B := "b10".U
    }
  }
}