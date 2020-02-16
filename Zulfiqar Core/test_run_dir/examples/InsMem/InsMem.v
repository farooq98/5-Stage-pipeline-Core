module InsMem(
  input         clock,
  input         reset,
  input  [31:0] io_wrAddr,
  output [31:0] io_rdData
);
  reg [31:0] mem [0:1023]; // @[InsMem.scala 9:16]
  reg [31:0] _RAND_0;
  wire [31:0] mem__T_12_data; // @[InsMem.scala 9:16]
  wire [9:0] mem__T_12_addr; // @[InsMem.scala 9:16]
  assign mem__T_12_addr = io_wrAddr[9:0];
  assign mem__T_12_data = mem[mem__T_12_addr]; // @[InsMem.scala 9:16]
  assign io_rdData = mem__T_12_data; // @[InsMem.scala 10:13]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    mem[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  end
`endif // RANDOMIZE
endmodule
