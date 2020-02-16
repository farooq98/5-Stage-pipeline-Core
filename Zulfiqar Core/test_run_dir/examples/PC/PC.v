module PC(
  input         clock,
  input         reset,
  input  [31:0] io_input,
  output [31:0] io_pc4,
  output [31:0] io_pc
);
  reg [31:0] reg$; // @[PC.scala 10:20]
  reg [31:0] _RAND_0;
  wire [32:0] _T_14; // @[PC.scala 12:17]
  assign _T_14 = reg$ + 32'h4; // @[PC.scala 12:17]
  assign io_pc4 = reg$ + 32'h4; // @[PC.scala 12:10]
  assign io_pc = reg$; // @[PC.scala 13:9]
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
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  reg$ = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      reg$ <= 32'h0;
    end else begin
      reg$ <= io_input;
    end
  end
endmodule
