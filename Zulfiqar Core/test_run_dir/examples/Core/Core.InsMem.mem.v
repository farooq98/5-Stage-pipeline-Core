module BindsTo_0_InsMem(
  input         clock,
  input  [31:0] io_wrAddr,
  output [31:0] io_rdData
);

initial begin
  $readmemh("/home/farooq/testFile.txt", InsMem.mem);
end
                      endmodule

bind InsMem BindsTo_0_InsMem BindsTo_0_InsMem_Inst(.*);