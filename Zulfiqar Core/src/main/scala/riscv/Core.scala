package riscv
import chisel3._
class Core extends Module{
  val io = IO(new Bundle{
    //val input = Output(UInt(32.W))
    //val pc = Output(UInt(32.W))
    val instruction = Output(UInt(32.W))
    val AluOut = Output(SInt(32.W))
    val branchCheck = Output(UInt(1.W))
  })
  val control = Module(new Control)
  val imm = Module(new immGen)
  val aluCtrl = Module(new AluControl)
  val alu = Module(new Alu)
  val reg = Module(new registerFile)
  val InsMem = Module(new InsMem)
  val PC = Module(new PC)
  val jalr = Module(new JalrTarget)
  val dataMem = Module(new DataMem)
  val if_pipe = Module(new IF_Pipeline())
  val id_pipe = Module(new ID_Pipeline())
  val exe_pipe = Module(new Ex_Pipeline())
  val mem_pipe = Module(new MEM_Piepline())
  val forwarding = Module(new Forwarding())

  //Jalr Target Connection
  when(control.io.extendSel === 0.U){
    jalr.io.imm := imm.io.i
  }.elsewhen(control.io.extendSel === 2.U){
    jalr.io.imm := imm.io.S
  }.elsewhen(control.io.extendSel === 1.U){
    jalr.io.imm := imm.io.u
  }.otherwise{
    jalr.io.imm := DontCare
  }
  jalr.io.rs1 := reg.io.rs1

  //Pc Connection
  PC.io.input := PC.io.pc4
  //io.pc := PC.io.pc(11,2)

  //Instruction Memory Connection
  InsMem.io.wrAddr := PC.io.pc(11,2)
  io.instruction := InsMem.io.rdData

  //IF_ID----in----
  if_pipe.io.pc_in := PC.io.pc
  if_pipe.io.pc4_in := PC.io.pc4
  if_pipe.io.ins_in := io.instruction

  //-----------ID------------------
  //Control Connection
  control.io.opcode := if_pipe.io.ins_out(6,0) //InsMem.io.rdData(6,0)

  //Immediate Generation Connection
  imm.io.ins := if_pipe.io.ins_out
  imm.io.pc :=  if_pipe.io.pc_out

  //RegisterFile Connection
  reg.io.rs1_sel := if_pipe.io.ins_out(19,15)
  reg.io.rs2_sel := if_pipe.io.ins_out(24,20)
  //reg.io.rd_sel := io.instruction(11,7)
  //reg.io.regWrite := control.io.regWrite

  //Alu Control Connection
  aluCtrl.io.ALUop := control.io.aluOp
  aluCtrl.io.func3 := if_pipe.io.ins_out(14,12)
  aluCtrl.io.func7 := if_pipe.io.ins_out(30)

  //ALU Connection
  when(control.io.oprA === 0.U || control.io.oprA === 3.U){
    id_pipe.io.operandA_in := reg.io.rs1
  }.elsewhen(control.io.oprA === 2.U){
    id_pipe.io.operandA_in := if_pipe.io.pc4_out.asSInt //+ 4.U).asSInt
  }.elsewhen(control.io.oprA === 1.U){ ///////////
    id_pipe.io.operandA_in := if_pipe.io.pc_out.asSInt
  }.otherwise{
    id_pipe.io.operandA_in := DontCare //alu.io.a
  }

  when(control.io.oprB === 0.U){
    id_pipe.io.operandB_in := reg.io.rs2
  }.otherwise{
    when(control.io.extendSel === 0.U){
      id_pipe.io.operandB_in := imm.io.i
    }.elsewhen(control.io.extendSel === 1.U){
      id_pipe.io.operandB_in := imm.io.S
    }.elsewhen(control.io.extendSel === 2.U){
      id_pipe.io.operandB_in := imm.io.u
    }.otherwise{
      id_pipe.io.operandB_in := reg.io.rs2 //DontCare
    }
  }

  //ID_EXE------in--------

  //id_pipe.io.pc_in := if_pipe.io.pc_out
  //id_pipe.io.pc4_in := if_pipe.io.pc4_out
  id_pipe.io.opr_A_sel_in := control.io.oprA
  id_pipe.io.opr_B_sel_in := control.io.oprB
  id_pipe.io.rs1_sel_in := if_pipe.io.ins_out(19,15)
  id_pipe.io.rs2_sel_in := if_pipe.io.ins_out(24,20)
  id_pipe.io.memWrite_in := control.io.memWrite
  id_pipe.io.memRead_in := control.io.memRead
  id_pipe.io.memToReg_in := control.io.memToReg
  id_pipe.io.rd_in := if_pipe.io.ins_out(11,7)
  id_pipe.io.strData_in := reg.io.rs2
  id_pipe.io.aluCtrl_in := aluCtrl.io.out
  id_pipe.io.regWrite_in := control.io.regWrite
  //-------------------EXE----------------


  alu.io.aluControl := id_pipe.io.aluCtrl_out
  alu.io.a := id_pipe.io.operandA_out
  alu.io.b := id_pipe.io.operandB_out
  exe_pipe.io.alu_Output_input := alu.io.aluOut
  exe_pipe.io.alu_branch_output_input := alu.io.branch
  io.AluOut := exe_pipe.io.alu_Output_output //alu.io.aluOut
  io.branchCheck := exe_pipe.io.alu_branch_output_output //alu.io.branch

  //EXE_MEM------in------
  exe_pipe.io.rs2_in := id_pipe.io.operandB_out
  exe_pipe.io.rs1_in := id_pipe.io.operandA_out
  exe_pipe.io.rs1_sel_in := id_pipe.io.rs1_sel_Out
  exe_pipe.io.rs2_sel_in := id_pipe.io.rs2_sel_Out
  exe_pipe.io.memWrite_in := id_pipe.io.memWrite_out
  exe_pipe.io.memRead_in := id_pipe.io.memRead_out
  exe_pipe.io.memToReg_in := id_pipe.io.memToReg_out
  exe_pipe.io.rd_in := id_pipe.io.rd_out
  exe_pipe.io.strData_in := id_pipe.io.strData_out
  exe_pipe.io.aluOutput_in := alu.io.aluOut
  exe_pipe.io.regWrite_in := id_pipe.io.regWrite_out




  //Data Memory Connection
  dataMem.io.store := exe_pipe.io.memWrite_out
  dataMem.io.load := exe_pipe.io.memRead_out
  dataMem.io.addrr := exe_pipe.io.aluOutput_out(9,2).asUInt
  dataMem.io.storedata := exe_pipe.io.strData_out //reg.io.rs2
  /**when(control.io.memToReg === 0.U){
    reg.io.writeData := io.AluOut
  }.elsewhen(control.io.memToReg === 1.U){
    reg.io.writeData := dataMem.io.dataOut
  }.otherwise{
    reg.io.writeData := dataMem.io.dataOut
  }**/

  //MEM_WR----------in-------

  mem_pipe.io.rs1_sel_in := exe_pipe.io.rs2_sel_Out
  mem_pipe.io.rs2_sel_in := exe_pipe.io.rs2_sel_Out
  mem_pipe.io.memToReg_in := exe_pipe.io.memToReg_out
  mem_pipe.io.rd_in := exe_pipe.io.rd_out
  mem_pipe.io.aluOutput_in := exe_pipe.io.aluOutput_out
  mem_pipe.io.dataOut_in := dataMem.io.dataOut
  mem_pipe.io.regWrite_in := exe_pipe.io.regWrite_out


  //when(control.io.memToReg === 1.U){
  //reg.io.writeData := io.AluOut
  //}.otherwise{
  //  reg.io.writeData := DontCare
  //}

  reg.io.rd_sel := mem_pipe.io.rd_out
  reg.io.regWrite := mem_pipe.io.regWrite_out

  reg.io.rd_sel := mem_pipe.io.rd_out
  reg.io.regWrite := mem_pipe.io.regWrite_out

  when(mem_pipe.io.memToReg_out === 1.U){
    reg.io.writeData :=  mem_pipe.io.dataOut_out
  }.otherwise{
    when(reg.io.regWrite === 1.U){
      reg.io.writeData := mem_pipe.io.aluOutput_out
    }.otherwise{
      reg.io.writeData := 0.S
    }
  }


  /**when((io.branchCheck  & control.io.branch) === 1.U && control.io.nextPcSel === 1.U){
    PC.io.input := imm.io.sb.asUInt
  }.elsewhen((io.branchCheck  & control.io.branch) === 0.U && control.io.nextPcSel === 1.U){
    PC.io.input := PC.io.pc4
  }.elsewhen(control.io.nextPcSel === 0.U){
    PC.io.input := PC.io.pc4
  }.elsewhen(control.io.nextPcSel === 2.U){
    PC.io.input := imm.io.uj.asUInt
  }.elsewhen(control.io.nextPcSel === 3.U){
    PC.io.input := jalr.io.out.asUInt
  }.otherwise{
    PC.io.input := DontCare
  }**/

  forwarding.io.exe_pipe_regWrite_out := exe_pipe.io.regWrite_out
  forwarding.io.exe_pipe_rd_out := exe_pipe.io.rd_out
  forwarding.io.mem_pipe_regWrite_out := mem_pipe.io.regWrite_out
  forwarding.io.mem_pipe_rd_out := mem_pipe.io.rd_out
  forwarding.io.id_pipe_rs1_sel_out := id_pipe.io.rs1_sel_Out
  forwarding.io.id_pipe_rs2_sel_out := id_pipe.io.rs2_sel_Out


  when(id_pipe.io.opr_A_sel_Out === "b10".U){
    alu.io.a := id_pipe.io.operandA_out
  }.otherwise{
    when(forwarding.io.alu_A === "b00".U){
      alu.io.a := id_pipe.io.operandA_out
    }.elsewhen(forwarding.io.alu_A === "b01".U){
      alu.io.a := exe_pipe.io.alu_Output_output
    }.elsewhen(forwarding.io.alu_A === "b10".U){
      alu.io.a := reg.io.writeData
    }.otherwise{
      alu.io.a := id_pipe.io.operandA_out
    }
  }

  when(id_pipe.io.opr_B_sel_Out === "b1".U){
    alu.io.b := id_pipe.io.operandB_out
    when(forwarding.io.alu_B === "b00".U) {
      exe_pipe.io.rs2_in := id_pipe.io.operandB_out
    }.elsewhen(forwarding.io.alu_B === "b01".U) {
      exe_pipe.io.rs2_in := exe_pipe.io.alu_Output_output
    }.elsewhen(forwarding.io.alu_B === "b10".U) {
      exe_pipe.io.rs2_in := reg.io.writeData
    }.otherwise {
      exe_pipe.io.rs2_in := id_pipe.io.operandB_out
    }
  }.otherwise{
    when(forwarding.io.alu_B === "b00".U) {
      alu.io.b := id_pipe.io.operandB_out
      exe_pipe.io.rs2_in := id_pipe.io.operandB_out
    }.elsewhen(forwarding.io.alu_B === "b01".U) {
      alu.io.b := exe_pipe.io.alu_Output_output
      exe_pipe.io.rs2_in := exe_pipe.io.alu_Output_output
    }.elsewhen(forwarding.io.alu_B === "b10".U) {
      alu.io.b := reg.io.writeData
      exe_pipe.io.rs2_in := reg.io.writeData
    }.otherwise {
      alu.io.b := id_pipe.io.operandB_out
      exe_pipe.io.rs2_in := id_pipe.io.operandB_out
    }
  }





  /**when(exe_pipe.io.regWrite_out === "b1".U && exe_pipe.io.rd_out =/= "b00000".U)
  {
    when(exe_pipe.io.rd_out === id_pipe.io.rs1_sel_Out){
      alu.io.a := exe_pipe.io.alu_Output_output
    }.elsewhen(exe_pipe.io.rd_out === id_pipe.io.rs2_sel_Out){
      alu.io.b := exe_pipe.io.alu_Output_output
    }//.otherwise{
     // alu.io.a := DontCare
    //}
  }
  when(mem_pipe.io.regWrite_out === "b1".U && mem_pipe.io.rd_out =/= "b00000".U){
    when(mem_pipe.io.rd_out === id_pipe.io.rs1_sel_Out){
      alu.io.a := mem_pipe.io.aluOutput_out
    }.elsewhen(mem_pipe.io.rd_out === id_pipe.io.rs2_sel_Out){
      alu.io.b := mem_pipe.io.aluOutput_out
    }//.otherwise{
     // alu.io.a := DontCare
    //}
  }//.otherwise{
    //DontCare
  //}**/

}