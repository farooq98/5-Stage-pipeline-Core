module DataMem(
  input         clock,
  input         reset,
  input         io_load,
  input         io_store,
  input  [31:0] io_addrr,
  input  [31:0] io_storedata,
  output [31:0] io_dataOut
);
  reg [31:0] mem [0:1023]; // @[DataMem.scala 12:16]
  reg [31:0] _RAND_0;
  wire [31:0] mem__T_20_data; // @[DataMem.scala 12:16]
  wire [9:0] mem__T_20_addr; // @[DataMem.scala 12:16]
  wire [31:0] mem__T_24_data; // @[DataMem.scala 12:16]
  wire [9:0] mem__T_24_addr; // @[DataMem.scala 12:16]
  wire  mem__T_24_mask; // @[DataMem.scala 12:16]
  wire  mem__T_24_en; // @[DataMem.scala 12:16]
  assign mem__T_20_addr = io_addrr[9:0];
  assign mem__T_20_data = mem[mem__T_20_addr]; // @[DataMem.scala 12:16]
  assign mem__T_24_data = io_storedata;
  assign mem__T_24_addr = io_addrr[9:0];
  assign mem__T_24_mask = 1'h1;
  assign mem__T_24_en = io_store;
  assign io_dataOut = mem__T_20_data; // @[DataMem.scala 14:16]
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
  always @(posedge clock) begin
    if(mem__T_24_en & mem__T_24_mask) begin
      mem[mem__T_24_addr] <= mem__T_24_data; // @[DataMem.scala 12:16]
    end
  end
endmodule
