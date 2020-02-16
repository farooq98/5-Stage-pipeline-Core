module BindsTo_0_insmem(
  input         clock,
  input  [31:0] io_address,
  output [31:0] io_data
);

initial begin
  $readmemh("/home/farooq/testFile.txt", insmem.mem);
end
                      endmodule

bind insmem BindsTo_0_insmem BindsTo_0_insmem_Inst(.*);