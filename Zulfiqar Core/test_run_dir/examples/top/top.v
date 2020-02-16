module pc(
  input         clock,
  input  [31:0] io_input,
  output [31:0] io_pc4,
  output [31:0] io_pcout
);
  reg [31:0] reg$; // @[pc.scala 11:26]
  reg [31:0] _RAND_0;
  wire [32:0] _T_14; // @[pc.scala 13:23]
  assign _T_14 = reg$ + 32'h4; // @[pc.scala 13:23]
  assign io_pc4 = reg$ + 32'h4; // @[pc.scala 13:16]
  assign io_pcout = reg$; // @[pc.scala 14:18]
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
    reg$ <= io_input;
  end
endmodule
module insmem(
  input         clock,
  input  [31:0] io_address,
  output [31:0] io_data
);
  reg [31:0] mem [0:1023]; // @[insmem.scala 10:22]
  reg [31:0] _RAND_0;
  wire [31:0] mem__T_12_data; // @[insmem.scala 10:22]
  wire [9:0] mem__T_12_addr; // @[insmem.scala 10:22]
  assign mem__T_12_addr = io_address[9:0];
  assign mem__T_12_data = mem[mem__T_12_addr]; // @[insmem.scala 10:22]
  assign io_data = mem__T_12_data; // @[insmem.scala 11:17]
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
module InstTypeDeco(
  input  [6:0] io_opcode,
  output       io_R,
  output       io_Load,
  output       io_Store,
  output       io_Branch,
  output       io_I,
  output       io_Jal,
  output       io_Jalr,
  output       io_Lui
);
  wire  _T_24; // @[InstTypeDeco.scala 18:25]
  wire  _T_34; // @[InstTypeDeco.scala 28:30]
  wire  _T_44; // @[InstTypeDeco.scala 38:30]
  wire  _T_54; // @[InstTypeDeco.scala 48:30]
  wire  _T_64; // @[InstTypeDeco.scala 58:30]
  wire  _T_74; // @[InstTypeDeco.scala 68:30]
  wire  _T_84; // @[InstTypeDeco.scala 78:30]
  wire  _T_94; // @[InstTypeDeco.scala 88:30]
  wire  _GEN_4; // @[InstTypeDeco.scala 78:42]
  wire  _GEN_6; // @[InstTypeDeco.scala 68:42]
  wire  _GEN_8; // @[InstTypeDeco.scala 68:42]
  wire  _GEN_11; // @[InstTypeDeco.scala 58:42]
  wire  _GEN_12; // @[InstTypeDeco.scala 58:42]
  wire  _GEN_13; // @[InstTypeDeco.scala 58:42]
  wire  _GEN_16; // @[InstTypeDeco.scala 48:42]
  wire  _GEN_17; // @[InstTypeDeco.scala 48:42]
  wire  _GEN_18; // @[InstTypeDeco.scala 48:42]
  wire  _GEN_19; // @[InstTypeDeco.scala 48:42]
  wire  _GEN_22; // @[InstTypeDeco.scala 38:42]
  wire  _GEN_23; // @[InstTypeDeco.scala 38:42]
  wire  _GEN_24; // @[InstTypeDeco.scala 38:42]
  wire  _GEN_25; // @[InstTypeDeco.scala 38:42]
  wire  _GEN_26; // @[InstTypeDeco.scala 38:42]
  wire  _GEN_29; // @[InstTypeDeco.scala 28:41]
  wire  _GEN_30; // @[InstTypeDeco.scala 28:41]
  wire  _GEN_31; // @[InstTypeDeco.scala 28:41]
  wire  _GEN_32; // @[InstTypeDeco.scala 28:41]
  wire  _GEN_33; // @[InstTypeDeco.scala 28:41]
  wire  _GEN_34; // @[InstTypeDeco.scala 28:41]
  assign _T_24 = io_opcode == 7'h33; // @[InstTypeDeco.scala 18:25]
  assign _T_34 = io_opcode == 7'h3; // @[InstTypeDeco.scala 28:30]
  assign _T_44 = io_opcode == 7'h23; // @[InstTypeDeco.scala 38:30]
  assign _T_54 = io_opcode == 7'h63; // @[InstTypeDeco.scala 48:30]
  assign _T_64 = io_opcode == 7'h13; // @[InstTypeDeco.scala 58:30]
  assign _T_74 = io_opcode == 7'h67; // @[InstTypeDeco.scala 68:30]
  assign _T_84 = io_opcode == 7'h6f; // @[InstTypeDeco.scala 78:30]
  assign _T_94 = io_opcode == 7'h37; // @[InstTypeDeco.scala 88:30]
  assign _GEN_4 = _T_84 ? 1'h0 : _T_94; // @[InstTypeDeco.scala 78:42]
  assign _GEN_6 = _T_74 ? 1'h0 : _T_84; // @[InstTypeDeco.scala 68:42]
  assign _GEN_8 = _T_74 ? 1'h0 : _GEN_4; // @[InstTypeDeco.scala 68:42]
  assign _GEN_11 = _T_64 ? 1'h0 : _GEN_6; // @[InstTypeDeco.scala 58:42]
  assign _GEN_12 = _T_64 ? 1'h0 : _T_74; // @[InstTypeDeco.scala 58:42]
  assign _GEN_13 = _T_64 ? 1'h0 : _GEN_8; // @[InstTypeDeco.scala 58:42]
  assign _GEN_16 = _T_54 ? 1'h0 : _T_64; // @[InstTypeDeco.scala 48:42]
  assign _GEN_17 = _T_54 ? 1'h0 : _GEN_11; // @[InstTypeDeco.scala 48:42]
  assign _GEN_18 = _T_54 ? 1'h0 : _GEN_12; // @[InstTypeDeco.scala 48:42]
  assign _GEN_19 = _T_54 ? 1'h0 : _GEN_13; // @[InstTypeDeco.scala 48:42]
  assign _GEN_22 = _T_44 ? 1'h0 : _T_54; // @[InstTypeDeco.scala 38:42]
  assign _GEN_23 = _T_44 ? 1'h0 : _GEN_16; // @[InstTypeDeco.scala 38:42]
  assign _GEN_24 = _T_44 ? 1'h0 : _GEN_17; // @[InstTypeDeco.scala 38:42]
  assign _GEN_25 = _T_44 ? 1'h0 : _GEN_18; // @[InstTypeDeco.scala 38:42]
  assign _GEN_26 = _T_44 ? 1'h0 : _GEN_19; // @[InstTypeDeco.scala 38:42]
  assign _GEN_29 = _T_34 ? 1'h0 : _T_44; // @[InstTypeDeco.scala 28:41]
  assign _GEN_30 = _T_34 ? 1'h0 : _GEN_22; // @[InstTypeDeco.scala 28:41]
  assign _GEN_31 = _T_34 ? 1'h0 : _GEN_23; // @[InstTypeDeco.scala 28:41]
  assign _GEN_32 = _T_34 ? 1'h0 : _GEN_24; // @[InstTypeDeco.scala 28:41]
  assign _GEN_33 = _T_34 ? 1'h0 : _GEN_25; // @[InstTypeDeco.scala 28:41]
  assign _GEN_34 = _T_34 ? 1'h0 : _GEN_26; // @[InstTypeDeco.scala 28:41]
  assign io_R = io_opcode == 7'h33; // @[InstTypeDeco.scala 19:22 InstTypeDeco.scala 29:22 InstTypeDeco.scala 39:22 InstTypeDeco.scala 49:22 InstTypeDeco.scala 59:22 InstTypeDeco.scala 69:22 InstTypeDeco.scala 79:22 InstTypeDeco.scala 89:22 InstTypeDeco.scala 99:22]
  assign io_Load = _T_24 ? 1'h0 : _T_34; // @[InstTypeDeco.scala 20:25 InstTypeDeco.scala 30:25 InstTypeDeco.scala 40:25 InstTypeDeco.scala 50:25 InstTypeDeco.scala 60:25 InstTypeDeco.scala 70:25 InstTypeDeco.scala 80:25 InstTypeDeco.scala 90:25 InstTypeDeco.scala 100:25]
  assign io_Store = _T_24 ? 1'h0 : _GEN_29; // @[InstTypeDeco.scala 21:26 InstTypeDeco.scala 31:26 InstTypeDeco.scala 41:26 InstTypeDeco.scala 51:26 InstTypeDeco.scala 61:26 InstTypeDeco.scala 71:26 InstTypeDeco.scala 81:26 InstTypeDeco.scala 91:26 InstTypeDeco.scala 101:26]
  assign io_Branch = _T_24 ? 1'h0 : _GEN_30; // @[InstTypeDeco.scala 22:27 InstTypeDeco.scala 32:27 InstTypeDeco.scala 42:27 InstTypeDeco.scala 52:27 InstTypeDeco.scala 62:27 InstTypeDeco.scala 72:27 InstTypeDeco.scala 82:27 InstTypeDeco.scala 92:27 InstTypeDeco.scala 102:27]
  assign io_I = _T_24 ? 1'h0 : _GEN_31; // @[InstTypeDeco.scala 23:22 InstTypeDeco.scala 33:22 InstTypeDeco.scala 43:22 InstTypeDeco.scala 53:22 InstTypeDeco.scala 63:22 InstTypeDeco.scala 73:22 InstTypeDeco.scala 83:22 InstTypeDeco.scala 93:22 InstTypeDeco.scala 103:22]
  assign io_Jal = _T_24 ? 1'h0 : _GEN_32; // @[InstTypeDeco.scala 24:24 InstTypeDeco.scala 34:24 InstTypeDeco.scala 44:24 InstTypeDeco.scala 54:24 InstTypeDeco.scala 64:24 InstTypeDeco.scala 74:24 InstTypeDeco.scala 84:24 InstTypeDeco.scala 94:24 InstTypeDeco.scala 104:24]
  assign io_Jalr = _T_24 ? 1'h0 : _GEN_33; // @[InstTypeDeco.scala 25:25 InstTypeDeco.scala 35:25 InstTypeDeco.scala 45:25 InstTypeDeco.scala 55:25 InstTypeDeco.scala 65:25 InstTypeDeco.scala 75:25 InstTypeDeco.scala 85:25 InstTypeDeco.scala 95:25 InstTypeDeco.scala 105:25]
  assign io_Lui = _T_24 ? 1'h0 : _GEN_34; // @[InstTypeDeco.scala 26:24 InstTypeDeco.scala 36:24 InstTypeDeco.scala 46:24 InstTypeDeco.scala 56:24 InstTypeDeco.scala 66:24 InstTypeDeco.scala 76:24 InstTypeDeco.scala 86:24 InstTypeDeco.scala 96:24 InstTypeDeco.scala 106:24]
endmodule
module CntrlDecode(
  input        io_R,
  input        io_Load,
  input        io_Store,
  input        io_Branch1,
  input        io_I,
  input        io_Jal,
  input        io_Jalr,
  input        io_Lui,
  output       io_MemWrite,
  output       io_Branch,
  output       io_MemRead,
  output       io_RegWrite,
  output       io_MemtoReg,
  output [2:0] io_AluOp,
  output [1:0] io_OpA,
  output       io_OpB,
  output [1:0] io_ExtSel,
  output [1:0] io_NextPc
);
  wire [2:0] _GEN_2; // @[CntrlDecode.scala 111:38]
  wire [1:0] _GEN_3; // @[CntrlDecode.scala 111:38]
  wire  _GEN_5; // @[CntrlDecode.scala 99:39]
  wire [2:0] _GEN_6; // @[CntrlDecode.scala 99:39]
  wire [1:0] _GEN_7; // @[CntrlDecode.scala 99:39]
  wire  _GEN_8; // @[CntrlDecode.scala 99:39]
  wire [1:0] _GEN_9; // @[CntrlDecode.scala 99:39]
  wire  _GEN_11; // @[CntrlDecode.scala 87:38]
  wire [2:0] _GEN_12; // @[CntrlDecode.scala 87:38]
  wire [1:0] _GEN_13; // @[CntrlDecode.scala 87:38]
  wire  _GEN_14; // @[CntrlDecode.scala 87:38]
  wire [1:0] _GEN_15; // @[CntrlDecode.scala 87:38]
  wire  _GEN_17; // @[CntrlDecode.scala 75:36]
  wire [2:0] _GEN_18; // @[CntrlDecode.scala 75:36]
  wire [1:0] _GEN_19; // @[CntrlDecode.scala 75:36]
  wire  _GEN_20; // @[CntrlDecode.scala 75:36]
  wire  _GEN_21; // @[CntrlDecode.scala 75:36]
  wire [1:0] _GEN_22; // @[CntrlDecode.scala 75:36]
  wire  _GEN_25; // @[CntrlDecode.scala 63:42]
  wire [2:0] _GEN_26; // @[CntrlDecode.scala 63:42]
  wire [1:0] _GEN_27; // @[CntrlDecode.scala 63:42]
  wire  _GEN_28; // @[CntrlDecode.scala 63:42]
  wire  _GEN_29; // @[CntrlDecode.scala 63:42]
  wire [1:0] _GEN_30; // @[CntrlDecode.scala 63:42]
  wire  _GEN_32; // @[CntrlDecode.scala 51:40]
  wire  _GEN_34; // @[CntrlDecode.scala 51:40]
  wire [2:0] _GEN_35; // @[CntrlDecode.scala 51:40]
  wire [1:0] _GEN_36; // @[CntrlDecode.scala 51:40]
  wire  _GEN_37; // @[CntrlDecode.scala 51:40]
  wire [1:0] _GEN_38; // @[CntrlDecode.scala 51:40]
  wire [1:0] _GEN_39; // @[CntrlDecode.scala 51:40]
  wire  _GEN_40; // @[CntrlDecode.scala 39:39]
  wire  _GEN_41; // @[CntrlDecode.scala 39:39]
  wire  _GEN_43; // @[CntrlDecode.scala 39:39]
  wire [2:0] _GEN_44; // @[CntrlDecode.scala 39:39]
  wire [1:0] _GEN_45; // @[CntrlDecode.scala 39:39]
  wire  _GEN_46; // @[CntrlDecode.scala 39:39]
  wire [1:0] _GEN_47; // @[CntrlDecode.scala 39:39]
  wire [1:0] _GEN_48; // @[CntrlDecode.scala 39:39]
  assign _GEN_2 = io_Lui ? 3'h6 : 3'h7; // @[CntrlDecode.scala 111:38]
  assign _GEN_3 = io_Lui ? 2'h3 : 2'h0; // @[CntrlDecode.scala 111:38]
  assign _GEN_5 = io_Jalr ? 1'h1 : io_Lui; // @[CntrlDecode.scala 99:39]
  assign _GEN_6 = io_Jalr ? 3'h3 : _GEN_2; // @[CntrlDecode.scala 99:39]
  assign _GEN_7 = io_Jalr ? 2'h2 : _GEN_3; // @[CntrlDecode.scala 99:39]
  assign _GEN_8 = io_Jalr ? 1'h0 : io_Lui; // @[CntrlDecode.scala 99:39]
  assign _GEN_9 = io_Jalr ? 2'h3 : 2'h0; // @[CntrlDecode.scala 99:39]
  assign _GEN_11 = io_Jal ? 1'h1 : _GEN_5; // @[CntrlDecode.scala 87:38]
  assign _GEN_12 = io_Jal ? 3'h3 : _GEN_6; // @[CntrlDecode.scala 87:38]
  assign _GEN_13 = io_Jal ? 2'h2 : _GEN_7; // @[CntrlDecode.scala 87:38]
  assign _GEN_14 = io_Jal ? 1'h0 : _GEN_8; // @[CntrlDecode.scala 87:38]
  assign _GEN_15 = io_Jal ? 2'h2 : _GEN_9; // @[CntrlDecode.scala 87:38]
  assign _GEN_17 = io_I ? 1'h1 : _GEN_11; // @[CntrlDecode.scala 75:36]
  assign _GEN_18 = io_I ? 3'h1 : _GEN_12; // @[CntrlDecode.scala 75:36]
  assign _GEN_19 = io_I ? 2'h0 : _GEN_13; // @[CntrlDecode.scala 75:36]
  assign _GEN_20 = io_I ? 1'h1 : _GEN_14; // @[CntrlDecode.scala 75:36]
  assign _GEN_21 = io_I ? 1'h0 : _GEN_14; // @[CntrlDecode.scala 75:36]
  assign _GEN_22 = io_I ? 2'h0 : _GEN_15; // @[CntrlDecode.scala 75:36]
  assign _GEN_25 = io_Branch1 ? 1'h0 : _GEN_17; // @[CntrlDecode.scala 63:42]
  assign _GEN_26 = io_Branch1 ? 3'h2 : _GEN_18; // @[CntrlDecode.scala 63:42]
  assign _GEN_27 = io_Branch1 ? 2'h0 : _GEN_19; // @[CntrlDecode.scala 63:42]
  assign _GEN_28 = io_Branch1 ? 1'h0 : _GEN_20; // @[CntrlDecode.scala 63:42]
  assign _GEN_29 = io_Branch1 ? 1'h0 : _GEN_21; // @[CntrlDecode.scala 63:42]
  assign _GEN_30 = io_Branch1 ? 2'h1 : _GEN_22; // @[CntrlDecode.scala 63:42]
  assign _GEN_32 = io_Store ? 1'h0 : io_Branch1; // @[CntrlDecode.scala 51:40]
  assign _GEN_34 = io_Store ? 1'h0 : _GEN_25; // @[CntrlDecode.scala 51:40]
  assign _GEN_35 = io_Store ? 3'h5 : _GEN_26; // @[CntrlDecode.scala 51:40]
  assign _GEN_36 = io_Store ? 2'h0 : _GEN_27; // @[CntrlDecode.scala 51:40]
  assign _GEN_37 = io_Store ? 1'h1 : _GEN_28; // @[CntrlDecode.scala 51:40]
  assign _GEN_38 = io_Store ? 2'h2 : {{1'd0}, _GEN_29}; // @[CntrlDecode.scala 51:40]
  assign _GEN_39 = io_Store ? 2'h0 : _GEN_30; // @[CntrlDecode.scala 51:40]
  assign _GEN_40 = io_Load ? 1'h0 : io_Store; // @[CntrlDecode.scala 39:39]
  assign _GEN_41 = io_Load ? 1'h0 : _GEN_32; // @[CntrlDecode.scala 39:39]
  assign _GEN_43 = io_Load ? 1'h1 : _GEN_34; // @[CntrlDecode.scala 39:39]
  assign _GEN_44 = io_Load ? 3'h4 : _GEN_35; // @[CntrlDecode.scala 39:39]
  assign _GEN_45 = io_Load ? 2'h0 : _GEN_36; // @[CntrlDecode.scala 39:39]
  assign _GEN_46 = io_Load ? 1'h1 : _GEN_37; // @[CntrlDecode.scala 39:39]
  assign _GEN_47 = io_Load ? 2'h0 : _GEN_38; // @[CntrlDecode.scala 39:39]
  assign _GEN_48 = io_Load ? 2'h0 : _GEN_39; // @[CntrlDecode.scala 39:39]
  assign io_MemWrite = io_R ? 1'h0 : _GEN_40; // @[CntrlDecode.scala 28:29 CntrlDecode.scala 40:29 CntrlDecode.scala 52:29 CntrlDecode.scala 64:29 CntrlDecode.scala 76:29 CntrlDecode.scala 88:29 CntrlDecode.scala 100:29 CntrlDecode.scala 112:29 CntrlDecode.scala 124:29]
  assign io_Branch = io_R ? 1'h0 : _GEN_41; // @[CntrlDecode.scala 29:27 CntrlDecode.scala 41:27 CntrlDecode.scala 53:27 CntrlDecode.scala 65:27 CntrlDecode.scala 77:27 CntrlDecode.scala 89:27 CntrlDecode.scala 101:27 CntrlDecode.scala 113:27 CntrlDecode.scala 125:27]
  assign io_MemRead = io_R ? 1'h0 : io_Load; // @[CntrlDecode.scala 30:28 CntrlDecode.scala 42:28 CntrlDecode.scala 54:28 CntrlDecode.scala 66:28 CntrlDecode.scala 78:28 CntrlDecode.scala 90:28 CntrlDecode.scala 102:28 CntrlDecode.scala 114:28 CntrlDecode.scala 126:28]
  assign io_RegWrite = io_R ? 1'h1 : _GEN_43; // @[CntrlDecode.scala 31:29 CntrlDecode.scala 43:29 CntrlDecode.scala 55:29 CntrlDecode.scala 67:29 CntrlDecode.scala 79:29 CntrlDecode.scala 91:29 CntrlDecode.scala 103:29 CntrlDecode.scala 115:29 CntrlDecode.scala 127:29]
  assign io_MemtoReg = io_R ? 1'h0 : io_Load; // @[CntrlDecode.scala 32:29 CntrlDecode.scala 44:29 CntrlDecode.scala 56:29 CntrlDecode.scala 68:29 CntrlDecode.scala 80:29 CntrlDecode.scala 92:29 CntrlDecode.scala 104:29 CntrlDecode.scala 116:29 CntrlDecode.scala 128:29]
  assign io_AluOp = io_R ? 3'h0 : _GEN_44; // @[CntrlDecode.scala 33:26 CntrlDecode.scala 45:26 CntrlDecode.scala 57:26 CntrlDecode.scala 69:26 CntrlDecode.scala 81:26 CntrlDecode.scala 93:26 CntrlDecode.scala 105:26 CntrlDecode.scala 117:26 CntrlDecode.scala 129:26]
  assign io_OpA = io_R ? 2'h0 : _GEN_45; // @[CntrlDecode.scala 34:24 CntrlDecode.scala 46:24 CntrlDecode.scala 58:24 CntrlDecode.scala 70:24 CntrlDecode.scala 82:24 CntrlDecode.scala 94:24 CntrlDecode.scala 106:24 CntrlDecode.scala 118:24 CntrlDecode.scala 130:24]
  assign io_OpB = io_R ? 1'h0 : _GEN_46; // @[CntrlDecode.scala 35:24 CntrlDecode.scala 47:24 CntrlDecode.scala 59:24 CntrlDecode.scala 71:24 CntrlDecode.scala 83:24 CntrlDecode.scala 95:24 CntrlDecode.scala 107:24 CntrlDecode.scala 119:24 CntrlDecode.scala 131:24]
  assign io_ExtSel = io_R ? 2'h0 : _GEN_47; // @[CntrlDecode.scala 36:27 CntrlDecode.scala 48:27 CntrlDecode.scala 60:27 CntrlDecode.scala 72:27 CntrlDecode.scala 84:27 CntrlDecode.scala 96:27 CntrlDecode.scala 108:27 CntrlDecode.scala 120:27 CntrlDecode.scala 132:27]
  assign io_NextPc = io_R ? 2'h0 : _GEN_48; // @[CntrlDecode.scala 37:27 CntrlDecode.scala 49:27 CntrlDecode.scala 61:27 CntrlDecode.scala 73:27 CntrlDecode.scala 85:27 CntrlDecode.scala 97:27 CntrlDecode.scala 109:27 CntrlDecode.scala 121:27 CntrlDecode.scala 133:27]
endmodule
module Control(
  input  [6:0] io_opcode,
  output       io_MemWrite,
  output       io_Branch,
  output       io_MemRead,
  output       io_RegWrite,
  output       io_MemtoReg,
  output [2:0] io_AluOp,
  output [1:0] io_OpA,
  output       io_OpB,
  output [1:0] io_ExtSel,
  output [1:0] io_NextPc
);
  wire [6:0] c1_io_opcode; // @[Control.scala 20:24]
  wire  c1_io_R; // @[Control.scala 20:24]
  wire  c1_io_Load; // @[Control.scala 20:24]
  wire  c1_io_Store; // @[Control.scala 20:24]
  wire  c1_io_Branch; // @[Control.scala 20:24]
  wire  c1_io_I; // @[Control.scala 20:24]
  wire  c1_io_Jal; // @[Control.scala 20:24]
  wire  c1_io_Jalr; // @[Control.scala 20:24]
  wire  c1_io_Lui; // @[Control.scala 20:24]
  wire  c2_io_R; // @[Control.scala 21:24]
  wire  c2_io_Load; // @[Control.scala 21:24]
  wire  c2_io_Store; // @[Control.scala 21:24]
  wire  c2_io_Branch1; // @[Control.scala 21:24]
  wire  c2_io_I; // @[Control.scala 21:24]
  wire  c2_io_Jal; // @[Control.scala 21:24]
  wire  c2_io_Jalr; // @[Control.scala 21:24]
  wire  c2_io_Lui; // @[Control.scala 21:24]
  wire  c2_io_MemWrite; // @[Control.scala 21:24]
  wire  c2_io_Branch; // @[Control.scala 21:24]
  wire  c2_io_MemRead; // @[Control.scala 21:24]
  wire  c2_io_RegWrite; // @[Control.scala 21:24]
  wire  c2_io_MemtoReg; // @[Control.scala 21:24]
  wire [2:0] c2_io_AluOp; // @[Control.scala 21:24]
  wire [1:0] c2_io_OpA; // @[Control.scala 21:24]
  wire  c2_io_OpB; // @[Control.scala 21:24]
  wire [1:0] c2_io_ExtSel; // @[Control.scala 21:24]
  wire [1:0] c2_io_NextPc; // @[Control.scala 21:24]
  InstTypeDeco c1 ( // @[Control.scala 20:24]
    .io_opcode(c1_io_opcode),
    .io_R(c1_io_R),
    .io_Load(c1_io_Load),
    .io_Store(c1_io_Store),
    .io_Branch(c1_io_Branch),
    .io_I(c1_io_I),
    .io_Jal(c1_io_Jal),
    .io_Jalr(c1_io_Jalr),
    .io_Lui(c1_io_Lui)
  );
  CntrlDecode c2 ( // @[Control.scala 21:24]
    .io_R(c2_io_R),
    .io_Load(c2_io_Load),
    .io_Store(c2_io_Store),
    .io_Branch1(c2_io_Branch1),
    .io_I(c2_io_I),
    .io_Jal(c2_io_Jal),
    .io_Jalr(c2_io_Jalr),
    .io_Lui(c2_io_Lui),
    .io_MemWrite(c2_io_MemWrite),
    .io_Branch(c2_io_Branch),
    .io_MemRead(c2_io_MemRead),
    .io_RegWrite(c2_io_RegWrite),
    .io_MemtoReg(c2_io_MemtoReg),
    .io_AluOp(c2_io_AluOp),
    .io_OpA(c2_io_OpA),
    .io_OpB(c2_io_OpB),
    .io_ExtSel(c2_io_ExtSel),
    .io_NextPc(c2_io_NextPc)
  );
  assign io_MemWrite = c2_io_MemWrite; // @[Control.scala 34:21]
  assign io_Branch = c2_io_Branch; // @[Control.scala 35:19]
  assign io_MemRead = c2_io_MemRead; // @[Control.scala 36:20]
  assign io_RegWrite = c2_io_RegWrite; // @[Control.scala 37:21]
  assign io_MemtoReg = c2_io_MemtoReg; // @[Control.scala 38:21]
  assign io_AluOp = c2_io_AluOp; // @[Control.scala 39:18]
  assign io_OpA = c2_io_OpA; // @[Control.scala 40:16]
  assign io_OpB = c2_io_OpB; // @[Control.scala 41:16]
  assign io_ExtSel = c2_io_ExtSel; // @[Control.scala 42:19]
  assign io_NextPc = c2_io_NextPc; // @[Control.scala 43:19]
  assign c1_io_opcode = io_opcode; // @[Control.scala 23:22]
  assign c2_io_R = c1_io_R; // @[Control.scala 25:17]
  assign c2_io_Load = c1_io_Load; // @[Control.scala 26:20]
  assign c2_io_Store = c1_io_Store; // @[Control.scala 27:21]
  assign c2_io_Branch1 = c1_io_Branch; // @[Control.scala 28:23]
  assign c2_io_I = c1_io_I; // @[Control.scala 29:17]
  assign c2_io_Jal = c1_io_Jal; // @[Control.scala 30:19]
  assign c2_io_Jalr = c1_io_Jalr; // @[Control.scala 31:20]
  assign c2_io_Lui = c1_io_Lui; // @[Control.scala 32:19]
endmodule
module ImmGen(
  input  [31:0] io_instruction,
  input  [31:0] io_pc,
  output [31:0] io_s_imm,
  output [31:0] io_sb_imm,
  output [31:0] io_uj_imm,
  output [31:0] io_u_imm,
  output [31:0] io_i_imm
);
  wire [6:0] _T_19; // @[ImmGen.scala 17:42]
  wire [4:0] _T_20; // @[ImmGen.scala 17:64]
  wire [11:0] _T_21; // @[Cat.scala 30:58]
  wire [11:0] s_imm13; // @[ImmGen.scala 17:72]
  wire  _T_22; // @[ImmGen.scala 18:40]
  wire [19:0] _T_26; // @[Bitwise.scala 72:12]
  wire [11:0] _T_27; // @[Cat.scala 30:58]
  wire [31:0] _T_28; // @[Cat.scala 30:58]
  wire  _T_30; // @[ImmGen.scala 20:43]
  wire  _T_31; // @[ImmGen.scala 20:62]
  wire [5:0] _T_32; // @[ImmGen.scala 20:80]
  wire [3:0] _T_33; // @[ImmGen.scala 20:102]
  wire [12:0] _T_38; // @[Cat.scala 30:58]
  wire [12:0] sb_imm13; // @[ImmGen.scala 20:117]
  wire  _T_39; // @[ImmGen.scala 21:43]
  wire [18:0] _T_43; // @[Bitwise.scala 72:12]
  wire [12:0] _T_44; // @[Cat.scala 30:58]
  wire [31:0] _T_45; // @[Cat.scala 30:58]
  wire [31:0] _T_46; // @[ImmGen.scala 21:60]
  wire [31:0] _T_47; // @[ImmGen.scala 21:75]
  wire [32:0] _T_48; // @[ImmGen.scala 21:67]
  wire [31:0] _T_49; // @[ImmGen.scala 21:67]
  wire [7:0] _T_52; // @[ImmGen.scala 23:62]
  wire  _T_53; // @[ImmGen.scala 23:84]
  wire [9:0] _T_54; // @[ImmGen.scala 23:103]
  wire [20:0] _T_59; // @[Cat.scala 30:58]
  wire [20:0] uj_imm21; // @[ImmGen.scala 23:119]
  wire  _T_60; // @[ImmGen.scala 24:43]
  wire [11:0] _T_64; // @[Bitwise.scala 72:12]
  wire [20:0] _T_65; // @[Cat.scala 30:58]
  wire [32:0] _T_66; // @[Cat.scala 30:58]
  wire [32:0] _T_67; // @[ImmGen.scala 24:60]
  wire [32:0] _GEN_0; // @[ImmGen.scala 24:67]
  wire [33:0] _T_69; // @[ImmGen.scala 24:67]
  wire [32:0] _T_70; // @[ImmGen.scala 24:67]
  wire [32:0] _T_71; // @[ImmGen.scala 24:67]
  wire [11:0] _T_76; // @[Bitwise.scala 72:12]
  wire [19:0] _T_77; // @[ImmGen.scala 26:68]
  wire [31:0] _T_78; // @[Cat.scala 30:58]
  wire [46:0] _GEN_1; // @[ImmGen.scala 26:77]
  wire [46:0] _T_80; // @[ImmGen.scala 26:77]
  wire [46:0] _T_81; // @[ImmGen.scala 26:86]
  wire [19:0] _T_86; // @[Bitwise.scala 72:12]
  wire [11:0] _T_87; // @[ImmGen.scala 28:67]
  wire [31:0] _T_88; // @[Cat.scala 30:58]
  wire [31:0] _GEN_2; // @[ImmGen.scala 24:19]
  wire [31:0] _GEN_3; // @[ImmGen.scala 26:18]
  assign _T_19 = io_instruction[31:25]; // @[ImmGen.scala 17:42]
  assign _T_20 = io_instruction[11:7]; // @[ImmGen.scala 17:64]
  assign _T_21 = {_T_19,_T_20}; // @[Cat.scala 30:58]
  assign s_imm13 = $signed(_T_21); // @[ImmGen.scala 17:72]
  assign _T_22 = s_imm13[11]; // @[ImmGen.scala 18:40]
  assign _T_26 = _T_22 ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  assign _T_27 = $unsigned(s_imm13); // @[Cat.scala 30:58]
  assign _T_28 = {_T_26,_T_27}; // @[Cat.scala 30:58]
  assign _T_30 = io_instruction[31]; // @[ImmGen.scala 20:43]
  assign _T_31 = io_instruction[7]; // @[ImmGen.scala 20:62]
  assign _T_32 = io_instruction[30:25]; // @[ImmGen.scala 20:80]
  assign _T_33 = io_instruction[11:8]; // @[ImmGen.scala 20:102]
  assign _T_38 = {_T_30,_T_31,_T_32,_T_33,1'h0}; // @[Cat.scala 30:58]
  assign sb_imm13 = $signed(_T_38); // @[ImmGen.scala 20:117]
  assign _T_39 = sb_imm13[12]; // @[ImmGen.scala 21:43]
  assign _T_43 = _T_39 ? 19'h7ffff : 19'h0; // @[Bitwise.scala 72:12]
  assign _T_44 = $unsigned(sb_imm13); // @[Cat.scala 30:58]
  assign _T_45 = {_T_43,_T_44}; // @[Cat.scala 30:58]
  assign _T_46 = $signed(_T_45); // @[ImmGen.scala 21:60]
  assign _T_47 = $signed(io_pc); // @[ImmGen.scala 21:75]
  assign _T_48 = $signed(_T_46) + $signed(_T_47); // @[ImmGen.scala 21:67]
  assign _T_49 = $signed(_T_46) + $signed(_T_47); // @[ImmGen.scala 21:67]
  assign _T_52 = io_instruction[19:12]; // @[ImmGen.scala 23:62]
  assign _T_53 = io_instruction[20]; // @[ImmGen.scala 23:84]
  assign _T_54 = io_instruction[30:21]; // @[ImmGen.scala 23:103]
  assign _T_59 = {_T_30,_T_52,_T_53,_T_54,1'h0}; // @[Cat.scala 30:58]
  assign uj_imm21 = $signed(_T_59); // @[ImmGen.scala 23:119]
  assign _T_60 = uj_imm21[20]; // @[ImmGen.scala 24:43]
  assign _T_64 = _T_60 ? 12'hfff : 12'h0; // @[Bitwise.scala 72:12]
  assign _T_65 = $unsigned(uj_imm21); // @[Cat.scala 30:58]
  assign _T_66 = {_T_64,_T_65}; // @[Cat.scala 30:58]
  assign _T_67 = $signed(_T_66); // @[ImmGen.scala 24:60]
  assign _GEN_0 = {{1{_T_47[31]}},_T_47}; // @[ImmGen.scala 24:67]
  assign _T_69 = $signed(_T_67) + $signed(_GEN_0); // @[ImmGen.scala 24:67]
  assign _T_70 = $signed(_T_67) + $signed(_GEN_0); // @[ImmGen.scala 24:67]
  assign _T_71 = $signed(_T_70); // @[ImmGen.scala 24:67]
  assign _T_76 = _T_30 ? 12'hfff : 12'h0; // @[Bitwise.scala 72:12]
  assign _T_77 = io_instruction[31:12]; // @[ImmGen.scala 26:68]
  assign _T_78 = {_T_76,_T_77}; // @[Cat.scala 30:58]
  assign _GEN_1 = {{15'd0}, _T_78}; // @[ImmGen.scala 26:77]
  assign _T_80 = _GEN_1 << 4'hc; // @[ImmGen.scala 26:77]
  assign _T_81 = $signed(_T_80); // @[ImmGen.scala 26:86]
  assign _T_86 = _T_30 ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  assign _T_87 = io_instruction[31:20]; // @[ImmGen.scala 28:67]
  assign _T_88 = {_T_86,_T_87}; // @[Cat.scala 30:58]
  assign io_s_imm = $signed(_T_28); // @[ImmGen.scala 18:18]
  assign io_sb_imm = $signed(_T_49); // @[ImmGen.scala 21:19]
  assign _GEN_2 = _T_71[31:0]; // @[ImmGen.scala 24:19]
  assign io_uj_imm = $signed(_GEN_2); // @[ImmGen.scala 24:19]
  assign _GEN_3 = _T_81[31:0]; // @[ImmGen.scala 26:18]
  assign io_u_imm = $signed(_GEN_3); // @[ImmGen.scala 26:18]
  assign io_i_imm = $signed(_T_88); // @[ImmGen.scala 28:18]
endmodule
module registerfile(
  input         clock,
  input         io_regwrite,
  input  [4:0]  io_rd,
  input  [4:0]  io_rs1s,
  input  [4:0]  io_rs2s,
  input  [31:0] io_writedata,
  output [31:0] io_rs1,
  output [31:0] io_rs2
);
  reg [31:0] register_0; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_0;
  reg [31:0] register_1; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_1;
  reg [31:0] register_2; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_2;
  reg [31:0] register_3; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_3;
  reg [31:0] register_4; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_4;
  reg [31:0] register_5; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_5;
  reg [31:0] register_6; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_6;
  reg [31:0] register_7; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_7;
  reg [31:0] register_8; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_8;
  reg [31:0] register_9; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_9;
  reg [31:0] register_10; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_10;
  reg [31:0] register_11; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_11;
  reg [31:0] register_12; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_12;
  reg [31:0] register_13; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_13;
  reg [31:0] register_14; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_14;
  reg [31:0] register_15; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_15;
  reg [31:0] register_16; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_16;
  reg [31:0] register_17; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_17;
  reg [31:0] register_18; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_18;
  reg [31:0] register_19; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_19;
  reg [31:0] register_20; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_20;
  reg [31:0] register_21; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_21;
  reg [31:0] register_22; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_22;
  reg [31:0] register_23; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_23;
  reg [31:0] register_24; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_24;
  reg [31:0] register_25; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_25;
  reg [31:0] register_26; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_26;
  reg [31:0] register_27; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_27;
  reg [31:0] register_28; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_28;
  reg [31:0] register_29; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_29;
  reg [31:0] register_30; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_30;
  reg [31:0] register_31; // @[registerfile.scala 13:27]
  reg [31:0] _RAND_31;
  wire [31:0] _GEN_1; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_2; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_3; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_4; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_5; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_6; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_7; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_8; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_9; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_10; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_11; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_12; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_13; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_14; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_15; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_16; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_17; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_18; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_19; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_20; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_21; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_22; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_23; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_24; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_25; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_26; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_27; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_28; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_29; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_30; // @[registerfile.scala 15:16]
  wire [31:0] _GEN_33; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_34; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_35; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_36; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_37; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_38; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_39; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_40; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_41; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_42; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_43; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_44; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_45; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_46; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_47; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_48; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_49; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_50; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_51; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_52; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_53; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_54; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_55; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_56; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_57; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_58; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_59; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_60; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_61; // @[registerfile.scala 16:16]
  wire [31:0] _GEN_62; // @[registerfile.scala 16:16]
  wire  _T_62; // @[registerfile.scala 18:44]
  wire [31:0] _GEN_64; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_65; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_66; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_67; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_68; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_69; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_70; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_71; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_72; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_73; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_74; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_75; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_76; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_77; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_78; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_79; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_80; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_81; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_82; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_83; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_84; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_85; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_86; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_87; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_88; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_89; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_90; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_91; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_92; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_93; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_94; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_95; // @[registerfile.scala 21:57]
  wire [31:0] _GEN_96; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_97; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_98; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_99; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_100; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_101; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_102; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_103; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_104; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_105; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_106; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_107; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_108; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_109; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_110; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_111; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_112; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_113; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_114; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_115; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_116; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_117; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_118; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_119; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_120; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_121; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_122; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_123; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_124; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_125; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_126; // @[registerfile.scala 18:59]
  wire [31:0] _GEN_127; // @[registerfile.scala 18:59]
  assign _GEN_1 = 5'h1 == io_rs1s ? $signed(register_1) : $signed(register_0); // @[registerfile.scala 15:16]
  assign _GEN_2 = 5'h2 == io_rs1s ? $signed(register_2) : $signed(_GEN_1); // @[registerfile.scala 15:16]
  assign _GEN_3 = 5'h3 == io_rs1s ? $signed(register_3) : $signed(_GEN_2); // @[registerfile.scala 15:16]
  assign _GEN_4 = 5'h4 == io_rs1s ? $signed(register_4) : $signed(_GEN_3); // @[registerfile.scala 15:16]
  assign _GEN_5 = 5'h5 == io_rs1s ? $signed(register_5) : $signed(_GEN_4); // @[registerfile.scala 15:16]
  assign _GEN_6 = 5'h6 == io_rs1s ? $signed(register_6) : $signed(_GEN_5); // @[registerfile.scala 15:16]
  assign _GEN_7 = 5'h7 == io_rs1s ? $signed(register_7) : $signed(_GEN_6); // @[registerfile.scala 15:16]
  assign _GEN_8 = 5'h8 == io_rs1s ? $signed(register_8) : $signed(_GEN_7); // @[registerfile.scala 15:16]
  assign _GEN_9 = 5'h9 == io_rs1s ? $signed(register_9) : $signed(_GEN_8); // @[registerfile.scala 15:16]
  assign _GEN_10 = 5'ha == io_rs1s ? $signed(register_10) : $signed(_GEN_9); // @[registerfile.scala 15:16]
  assign _GEN_11 = 5'hb == io_rs1s ? $signed(register_11) : $signed(_GEN_10); // @[registerfile.scala 15:16]
  assign _GEN_12 = 5'hc == io_rs1s ? $signed(register_12) : $signed(_GEN_11); // @[registerfile.scala 15:16]
  assign _GEN_13 = 5'hd == io_rs1s ? $signed(register_13) : $signed(_GEN_12); // @[registerfile.scala 15:16]
  assign _GEN_14 = 5'he == io_rs1s ? $signed(register_14) : $signed(_GEN_13); // @[registerfile.scala 15:16]
  assign _GEN_15 = 5'hf == io_rs1s ? $signed(register_15) : $signed(_GEN_14); // @[registerfile.scala 15:16]
  assign _GEN_16 = 5'h10 == io_rs1s ? $signed(register_16) : $signed(_GEN_15); // @[registerfile.scala 15:16]
  assign _GEN_17 = 5'h11 == io_rs1s ? $signed(register_17) : $signed(_GEN_16); // @[registerfile.scala 15:16]
  assign _GEN_18 = 5'h12 == io_rs1s ? $signed(register_18) : $signed(_GEN_17); // @[registerfile.scala 15:16]
  assign _GEN_19 = 5'h13 == io_rs1s ? $signed(register_19) : $signed(_GEN_18); // @[registerfile.scala 15:16]
  assign _GEN_20 = 5'h14 == io_rs1s ? $signed(register_20) : $signed(_GEN_19); // @[registerfile.scala 15:16]
  assign _GEN_21 = 5'h15 == io_rs1s ? $signed(register_21) : $signed(_GEN_20); // @[registerfile.scala 15:16]
  assign _GEN_22 = 5'h16 == io_rs1s ? $signed(register_22) : $signed(_GEN_21); // @[registerfile.scala 15:16]
  assign _GEN_23 = 5'h17 == io_rs1s ? $signed(register_23) : $signed(_GEN_22); // @[registerfile.scala 15:16]
  assign _GEN_24 = 5'h18 == io_rs1s ? $signed(register_24) : $signed(_GEN_23); // @[registerfile.scala 15:16]
  assign _GEN_25 = 5'h19 == io_rs1s ? $signed(register_25) : $signed(_GEN_24); // @[registerfile.scala 15:16]
  assign _GEN_26 = 5'h1a == io_rs1s ? $signed(register_26) : $signed(_GEN_25); // @[registerfile.scala 15:16]
  assign _GEN_27 = 5'h1b == io_rs1s ? $signed(register_27) : $signed(_GEN_26); // @[registerfile.scala 15:16]
  assign _GEN_28 = 5'h1c == io_rs1s ? $signed(register_28) : $signed(_GEN_27); // @[registerfile.scala 15:16]
  assign _GEN_29 = 5'h1d == io_rs1s ? $signed(register_29) : $signed(_GEN_28); // @[registerfile.scala 15:16]
  assign _GEN_30 = 5'h1e == io_rs1s ? $signed(register_30) : $signed(_GEN_29); // @[registerfile.scala 15:16]
  assign _GEN_33 = 5'h1 == io_rs2s ? $signed(register_1) : $signed(register_0); // @[registerfile.scala 16:16]
  assign _GEN_34 = 5'h2 == io_rs2s ? $signed(register_2) : $signed(_GEN_33); // @[registerfile.scala 16:16]
  assign _GEN_35 = 5'h3 == io_rs2s ? $signed(register_3) : $signed(_GEN_34); // @[registerfile.scala 16:16]
  assign _GEN_36 = 5'h4 == io_rs2s ? $signed(register_4) : $signed(_GEN_35); // @[registerfile.scala 16:16]
  assign _GEN_37 = 5'h5 == io_rs2s ? $signed(register_5) : $signed(_GEN_36); // @[registerfile.scala 16:16]
  assign _GEN_38 = 5'h6 == io_rs2s ? $signed(register_6) : $signed(_GEN_37); // @[registerfile.scala 16:16]
  assign _GEN_39 = 5'h7 == io_rs2s ? $signed(register_7) : $signed(_GEN_38); // @[registerfile.scala 16:16]
  assign _GEN_40 = 5'h8 == io_rs2s ? $signed(register_8) : $signed(_GEN_39); // @[registerfile.scala 16:16]
  assign _GEN_41 = 5'h9 == io_rs2s ? $signed(register_9) : $signed(_GEN_40); // @[registerfile.scala 16:16]
  assign _GEN_42 = 5'ha == io_rs2s ? $signed(register_10) : $signed(_GEN_41); // @[registerfile.scala 16:16]
  assign _GEN_43 = 5'hb == io_rs2s ? $signed(register_11) : $signed(_GEN_42); // @[registerfile.scala 16:16]
  assign _GEN_44 = 5'hc == io_rs2s ? $signed(register_12) : $signed(_GEN_43); // @[registerfile.scala 16:16]
  assign _GEN_45 = 5'hd == io_rs2s ? $signed(register_13) : $signed(_GEN_44); // @[registerfile.scala 16:16]
  assign _GEN_46 = 5'he == io_rs2s ? $signed(register_14) : $signed(_GEN_45); // @[registerfile.scala 16:16]
  assign _GEN_47 = 5'hf == io_rs2s ? $signed(register_15) : $signed(_GEN_46); // @[registerfile.scala 16:16]
  assign _GEN_48 = 5'h10 == io_rs2s ? $signed(register_16) : $signed(_GEN_47); // @[registerfile.scala 16:16]
  assign _GEN_49 = 5'h11 == io_rs2s ? $signed(register_17) : $signed(_GEN_48); // @[registerfile.scala 16:16]
  assign _GEN_50 = 5'h12 == io_rs2s ? $signed(register_18) : $signed(_GEN_49); // @[registerfile.scala 16:16]
  assign _GEN_51 = 5'h13 == io_rs2s ? $signed(register_19) : $signed(_GEN_50); // @[registerfile.scala 16:16]
  assign _GEN_52 = 5'h14 == io_rs2s ? $signed(register_20) : $signed(_GEN_51); // @[registerfile.scala 16:16]
  assign _GEN_53 = 5'h15 == io_rs2s ? $signed(register_21) : $signed(_GEN_52); // @[registerfile.scala 16:16]
  assign _GEN_54 = 5'h16 == io_rs2s ? $signed(register_22) : $signed(_GEN_53); // @[registerfile.scala 16:16]
  assign _GEN_55 = 5'h17 == io_rs2s ? $signed(register_23) : $signed(_GEN_54); // @[registerfile.scala 16:16]
  assign _GEN_56 = 5'h18 == io_rs2s ? $signed(register_24) : $signed(_GEN_55); // @[registerfile.scala 16:16]
  assign _GEN_57 = 5'h19 == io_rs2s ? $signed(register_25) : $signed(_GEN_56); // @[registerfile.scala 16:16]
  assign _GEN_58 = 5'h1a == io_rs2s ? $signed(register_26) : $signed(_GEN_57); // @[registerfile.scala 16:16]
  assign _GEN_59 = 5'h1b == io_rs2s ? $signed(register_27) : $signed(_GEN_58); // @[registerfile.scala 16:16]
  assign _GEN_60 = 5'h1c == io_rs2s ? $signed(register_28) : $signed(_GEN_59); // @[registerfile.scala 16:16]
  assign _GEN_61 = 5'h1d == io_rs2s ? $signed(register_29) : $signed(_GEN_60); // @[registerfile.scala 16:16]
  assign _GEN_62 = 5'h1e == io_rs2s ? $signed(register_30) : $signed(_GEN_61); // @[registerfile.scala 16:16]
  assign _T_62 = io_rd == 5'h0; // @[registerfile.scala 18:44]
  assign _GEN_64 = 5'h0 == io_rd ? $signed(io_writedata) : $signed(32'sh0); // @[registerfile.scala 21:57]
  assign _GEN_65 = 5'h1 == io_rd ? $signed(io_writedata) : $signed(register_1); // @[registerfile.scala 21:57]
  assign _GEN_66 = 5'h2 == io_rd ? $signed(io_writedata) : $signed(register_2); // @[registerfile.scala 21:57]
  assign _GEN_67 = 5'h3 == io_rd ? $signed(io_writedata) : $signed(register_3); // @[registerfile.scala 21:57]
  assign _GEN_68 = 5'h4 == io_rd ? $signed(io_writedata) : $signed(register_4); // @[registerfile.scala 21:57]
  assign _GEN_69 = 5'h5 == io_rd ? $signed(io_writedata) : $signed(register_5); // @[registerfile.scala 21:57]
  assign _GEN_70 = 5'h6 == io_rd ? $signed(io_writedata) : $signed(register_6); // @[registerfile.scala 21:57]
  assign _GEN_71 = 5'h7 == io_rd ? $signed(io_writedata) : $signed(register_7); // @[registerfile.scala 21:57]
  assign _GEN_72 = 5'h8 == io_rd ? $signed(io_writedata) : $signed(register_8); // @[registerfile.scala 21:57]
  assign _GEN_73 = 5'h9 == io_rd ? $signed(io_writedata) : $signed(register_9); // @[registerfile.scala 21:57]
  assign _GEN_74 = 5'ha == io_rd ? $signed(io_writedata) : $signed(register_10); // @[registerfile.scala 21:57]
  assign _GEN_75 = 5'hb == io_rd ? $signed(io_writedata) : $signed(register_11); // @[registerfile.scala 21:57]
  assign _GEN_76 = 5'hc == io_rd ? $signed(io_writedata) : $signed(register_12); // @[registerfile.scala 21:57]
  assign _GEN_77 = 5'hd == io_rd ? $signed(io_writedata) : $signed(register_13); // @[registerfile.scala 21:57]
  assign _GEN_78 = 5'he == io_rd ? $signed(io_writedata) : $signed(register_14); // @[registerfile.scala 21:57]
  assign _GEN_79 = 5'hf == io_rd ? $signed(io_writedata) : $signed(register_15); // @[registerfile.scala 21:57]
  assign _GEN_80 = 5'h10 == io_rd ? $signed(io_writedata) : $signed(register_16); // @[registerfile.scala 21:57]
  assign _GEN_81 = 5'h11 == io_rd ? $signed(io_writedata) : $signed(register_17); // @[registerfile.scala 21:57]
  assign _GEN_82 = 5'h12 == io_rd ? $signed(io_writedata) : $signed(register_18); // @[registerfile.scala 21:57]
  assign _GEN_83 = 5'h13 == io_rd ? $signed(io_writedata) : $signed(register_19); // @[registerfile.scala 21:57]
  assign _GEN_84 = 5'h14 == io_rd ? $signed(io_writedata) : $signed(register_20); // @[registerfile.scala 21:57]
  assign _GEN_85 = 5'h15 == io_rd ? $signed(io_writedata) : $signed(register_21); // @[registerfile.scala 21:57]
  assign _GEN_86 = 5'h16 == io_rd ? $signed(io_writedata) : $signed(register_22); // @[registerfile.scala 21:57]
  assign _GEN_87 = 5'h17 == io_rd ? $signed(io_writedata) : $signed(register_23); // @[registerfile.scala 21:57]
  assign _GEN_88 = 5'h18 == io_rd ? $signed(io_writedata) : $signed(register_24); // @[registerfile.scala 21:57]
  assign _GEN_89 = 5'h19 == io_rd ? $signed(io_writedata) : $signed(register_25); // @[registerfile.scala 21:57]
  assign _GEN_90 = 5'h1a == io_rd ? $signed(io_writedata) : $signed(register_26); // @[registerfile.scala 21:57]
  assign _GEN_91 = 5'h1b == io_rd ? $signed(io_writedata) : $signed(register_27); // @[registerfile.scala 21:57]
  assign _GEN_92 = 5'h1c == io_rd ? $signed(io_writedata) : $signed(register_28); // @[registerfile.scala 21:57]
  assign _GEN_93 = 5'h1d == io_rd ? $signed(io_writedata) : $signed(register_29); // @[registerfile.scala 21:57]
  assign _GEN_94 = 5'h1e == io_rd ? $signed(io_writedata) : $signed(register_30); // @[registerfile.scala 21:57]
  assign _GEN_95 = 5'h1f == io_rd ? $signed(io_writedata) : $signed(register_31); // @[registerfile.scala 21:57]
  assign _GEN_96 = _T_62 ? $signed(32'sh0) : $signed(_GEN_64); // @[registerfile.scala 18:59]
  assign _GEN_97 = _T_62 ? $signed(register_1) : $signed(_GEN_65); // @[registerfile.scala 18:59]
  assign _GEN_98 = _T_62 ? $signed(register_2) : $signed(_GEN_66); // @[registerfile.scala 18:59]
  assign _GEN_99 = _T_62 ? $signed(register_3) : $signed(_GEN_67); // @[registerfile.scala 18:59]
  assign _GEN_100 = _T_62 ? $signed(register_4) : $signed(_GEN_68); // @[registerfile.scala 18:59]
  assign _GEN_101 = _T_62 ? $signed(register_5) : $signed(_GEN_69); // @[registerfile.scala 18:59]
  assign _GEN_102 = _T_62 ? $signed(register_6) : $signed(_GEN_70); // @[registerfile.scala 18:59]
  assign _GEN_103 = _T_62 ? $signed(register_7) : $signed(_GEN_71); // @[registerfile.scala 18:59]
  assign _GEN_104 = _T_62 ? $signed(register_8) : $signed(_GEN_72); // @[registerfile.scala 18:59]
  assign _GEN_105 = _T_62 ? $signed(register_9) : $signed(_GEN_73); // @[registerfile.scala 18:59]
  assign _GEN_106 = _T_62 ? $signed(register_10) : $signed(_GEN_74); // @[registerfile.scala 18:59]
  assign _GEN_107 = _T_62 ? $signed(register_11) : $signed(_GEN_75); // @[registerfile.scala 18:59]
  assign _GEN_108 = _T_62 ? $signed(register_12) : $signed(_GEN_76); // @[registerfile.scala 18:59]
  assign _GEN_109 = _T_62 ? $signed(register_13) : $signed(_GEN_77); // @[registerfile.scala 18:59]
  assign _GEN_110 = _T_62 ? $signed(register_14) : $signed(_GEN_78); // @[registerfile.scala 18:59]
  assign _GEN_111 = _T_62 ? $signed(register_15) : $signed(_GEN_79); // @[registerfile.scala 18:59]
  assign _GEN_112 = _T_62 ? $signed(register_16) : $signed(_GEN_80); // @[registerfile.scala 18:59]
  assign _GEN_113 = _T_62 ? $signed(register_17) : $signed(_GEN_81); // @[registerfile.scala 18:59]
  assign _GEN_114 = _T_62 ? $signed(register_18) : $signed(_GEN_82); // @[registerfile.scala 18:59]
  assign _GEN_115 = _T_62 ? $signed(register_19) : $signed(_GEN_83); // @[registerfile.scala 18:59]
  assign _GEN_116 = _T_62 ? $signed(register_20) : $signed(_GEN_84); // @[registerfile.scala 18:59]
  assign _GEN_117 = _T_62 ? $signed(register_21) : $signed(_GEN_85); // @[registerfile.scala 18:59]
  assign _GEN_118 = _T_62 ? $signed(register_22) : $signed(_GEN_86); // @[registerfile.scala 18:59]
  assign _GEN_119 = _T_62 ? $signed(register_23) : $signed(_GEN_87); // @[registerfile.scala 18:59]
  assign _GEN_120 = _T_62 ? $signed(register_24) : $signed(_GEN_88); // @[registerfile.scala 18:59]
  assign _GEN_121 = _T_62 ? $signed(register_25) : $signed(_GEN_89); // @[registerfile.scala 18:59]
  assign _GEN_122 = _T_62 ? $signed(register_26) : $signed(_GEN_90); // @[registerfile.scala 18:59]
  assign _GEN_123 = _T_62 ? $signed(register_27) : $signed(_GEN_91); // @[registerfile.scala 18:59]
  assign _GEN_124 = _T_62 ? $signed(register_28) : $signed(_GEN_92); // @[registerfile.scala 18:59]
  assign _GEN_125 = _T_62 ? $signed(register_29) : $signed(_GEN_93); // @[registerfile.scala 18:59]
  assign _GEN_126 = _T_62 ? $signed(register_30) : $signed(_GEN_94); // @[registerfile.scala 18:59]
  assign _GEN_127 = _T_62 ? $signed(register_31) : $signed(_GEN_95); // @[registerfile.scala 18:59]
  assign io_rs1 = 5'h1f == io_rs1s ? $signed(register_31) : $signed(_GEN_30); // @[registerfile.scala 15:16]
  assign io_rs2 = 5'h1f == io_rs2s ? $signed(register_31) : $signed(_GEN_62); // @[registerfile.scala 16:16]
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
  register_0 = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  register_1 = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  register_2 = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  register_3 = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  register_4 = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  register_5 = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  register_6 = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  register_7 = _RAND_7[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  register_8 = _RAND_8[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  register_9 = _RAND_9[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  register_10 = _RAND_10[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  register_11 = _RAND_11[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  register_12 = _RAND_12[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  register_13 = _RAND_13[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  register_14 = _RAND_14[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  register_15 = _RAND_15[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  register_16 = _RAND_16[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {1{`RANDOM}};
  register_17 = _RAND_17[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_18 = {1{`RANDOM}};
  register_18 = _RAND_18[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_19 = {1{`RANDOM}};
  register_19 = _RAND_19[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_20 = {1{`RANDOM}};
  register_20 = _RAND_20[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_21 = {1{`RANDOM}};
  register_21 = _RAND_21[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_22 = {1{`RANDOM}};
  register_22 = _RAND_22[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_23 = {1{`RANDOM}};
  register_23 = _RAND_23[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_24 = {1{`RANDOM}};
  register_24 = _RAND_24[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_25 = {1{`RANDOM}};
  register_25 = _RAND_25[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_26 = {1{`RANDOM}};
  register_26 = _RAND_26[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_27 = {1{`RANDOM}};
  register_27 = _RAND_27[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_28 = {1{`RANDOM}};
  register_28 = _RAND_28[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_29 = {1{`RANDOM}};
  register_29 = _RAND_29[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_30 = {1{`RANDOM}};
  register_30 = _RAND_30[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_31 = {1{`RANDOM}};
  register_31 = _RAND_31[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (io_regwrite) begin
      if (_T_62) begin
        register_0 <= 32'sh0;
      end else begin
        if (5'h0 == io_rd) begin
          register_0 <= io_writedata;
        end else begin
          register_0 <= 32'sh0;
        end
      end
    end else begin
      register_0 <= 32'sh0;
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h1 == io_rd) begin
          register_1 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h2 == io_rd) begin
          register_2 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h3 == io_rd) begin
          register_3 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h4 == io_rd) begin
          register_4 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h5 == io_rd) begin
          register_5 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h6 == io_rd) begin
          register_6 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h7 == io_rd) begin
          register_7 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h8 == io_rd) begin
          register_8 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h9 == io_rd) begin
          register_9 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'ha == io_rd) begin
          register_10 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'hb == io_rd) begin
          register_11 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'hc == io_rd) begin
          register_12 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'hd == io_rd) begin
          register_13 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'he == io_rd) begin
          register_14 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'hf == io_rd) begin
          register_15 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h10 == io_rd) begin
          register_16 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h11 == io_rd) begin
          register_17 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h12 == io_rd) begin
          register_18 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h13 == io_rd) begin
          register_19 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h14 == io_rd) begin
          register_20 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h15 == io_rd) begin
          register_21 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h16 == io_rd) begin
          register_22 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h17 == io_rd) begin
          register_23 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h18 == io_rd) begin
          register_24 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h19 == io_rd) begin
          register_25 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h1a == io_rd) begin
          register_26 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h1b == io_rd) begin
          register_27 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h1c == io_rd) begin
          register_28 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h1d == io_rd) begin
          register_29 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h1e == io_rd) begin
          register_30 <= io_writedata;
        end
      end
    end
    if (io_regwrite) begin
      if (!(_T_62)) begin
        if (5'h1f == io_rd) begin
          register_31 <= io_writedata;
        end
      end
    end
  end
endmodule
module ALUcont(
  input  [2:0] io_ALUop,
  input  [2:0] io_func3,
  input        io_func7,
  output [4:0] io_ALUcont
);
  wire  _T_14; // @[ALUcont.scala 13:23]
  wire [4:0] _T_17; // @[Cat.scala 30:58]
  wire  _T_19; // @[ALUcont.scala 15:29]
  wire  _T_21; // @[ALUcont.scala 16:31]
  wire [3:0] _T_26; // @[Cat.scala 30:58]
  wire [4:0] _GEN_0; // @[ALUcont.scala 16:44]
  wire  _T_28; // @[ALUcont.scala 22:29]
  wire  _T_30; // @[ALUcont.scala 22:53]
  wire  _T_31; // @[ALUcont.scala 22:41]
  wire  _T_34; // @[ALUcont.scala 24:29]
  wire [4:0] _T_39; // @[Cat.scala 30:58]
  wire [4:0] _GEN_2; // @[ALUcont.scala 24:42]
  wire [4:0] _GEN_3; // @[ALUcont.scala 22:65]
  wire [4:0] _GEN_4; // @[ALUcont.scala 15:43]
  assign _T_14 = io_ALUop == 3'h0; // @[ALUcont.scala 13:23]
  assign _T_17 = {1'h0,io_func7,io_func3}; // @[Cat.scala 30:58]
  assign _T_19 = io_ALUop == 3'h1; // @[ALUcont.scala 15:29]
  assign _T_21 = io_func3 == 3'h5; // @[ALUcont.scala 16:31]
  assign _T_26 = {1'h0,io_func3}; // @[Cat.scala 30:58]
  assign _GEN_0 = _T_21 ? _T_17 : {{1'd0}, _T_26}; // @[ALUcont.scala 16:44]
  assign _T_28 = io_ALUop == 3'h5; // @[ALUcont.scala 22:29]
  assign _T_30 = io_ALUop == 3'h4; // @[ALUcont.scala 22:53]
  assign _T_31 = _T_28 | _T_30; // @[ALUcont.scala 22:41]
  assign _T_34 = io_ALUop == 3'h3; // @[ALUcont.scala 24:29]
  assign _T_39 = {2'h2,io_func3}; // @[Cat.scala 30:58]
  assign _GEN_2 = _T_34 ? 5'h1f : _T_39; // @[ALUcont.scala 24:42]
  assign _GEN_3 = _T_31 ? 5'h0 : _GEN_2; // @[ALUcont.scala 22:65]
  assign _GEN_4 = _T_19 ? _GEN_0 : _GEN_3; // @[ALUcont.scala 15:43]
  assign io_ALUcont = _T_14 ? _T_17 : _GEN_4; // @[ALUcont.scala 14:28 ALUcont.scala 17:36 ALUcont.scala 19:36 ALUcont.scala 23:28 ALUcont.scala 25:28 ALUcont.scala 27:28]
endmodule
module jalr(
  input  [31:0] io_a,
  input  [31:0] io_b,
  output [31:0] io_o
);
  wire [32:0] _T_11; // @[jalr.scala 10:24]
  wire [31:0] _T_12; // @[jalr.scala 10:24]
  wire [31:0] add; // @[jalr.scala 10:24]
  wire [32:0] _GEN_0; // @[jalr.scala 11:21]
  wire [32:0] _T_14; // @[jalr.scala 11:21]
  wire [32:0] _T_15; // @[jalr.scala 11:21]
  wire [31:0] _GEN_1; // @[jalr.scala 11:14]
  assign _T_11 = $signed(io_a) + $signed(io_b); // @[jalr.scala 10:24]
  assign _T_12 = $signed(io_a) + $signed(io_b); // @[jalr.scala 10:24]
  assign add = $signed(_T_12); // @[jalr.scala 10:24]
  assign _GEN_0 = {{1{add[31]}},add}; // @[jalr.scala 11:21]
  assign _T_14 = $signed(_GEN_0) & $signed(33'shfffffffe); // @[jalr.scala 11:21]
  assign _T_15 = $signed(_T_14); // @[jalr.scala 11:21]
  assign _GEN_1 = _T_15[31:0]; // @[jalr.scala 11:14]
  assign io_o = $signed(_GEN_1); // @[jalr.scala 11:14]
endmodule
module Alu(
  input  [4:0]  io_AluControl,
  input  [31:0] io_in1,
  input  [31:0] io_in2,
  output        io_Branch,
  output [31:0] io_out
);
  wire  _T_16; // @[Alu.scala 15:29]
  wire [32:0] _T_17; // @[Alu.scala 15:62]
  wire [31:0] _T_18; // @[Alu.scala 15:62]
  wire [31:0] _T_19; // @[Alu.scala 15:62]
  wire  _T_21; // @[Alu.scala 17:34]
  wire [4:0] _T_22; // @[Alu.scala 17:76]
  wire [62:0] _GEN_21; // @[Alu.scala 17:67]
  wire [62:0] _T_23; // @[Alu.scala 17:67]
  wire  _T_25; // @[Alu.scala 19:34]
  wire [31:0] _T_26; // @[Alu.scala 19:67]
  wire [31:0] _T_27; // @[Alu.scala 19:67]
  wire  _T_29; // @[Alu.scala 21:34]
  wire  _T_31; // @[Alu.scala 21:66]
  wire  _T_32; // @[Alu.scala 21:49]
  wire [31:0] _T_34; // @[Alu.scala 21:99]
  wire  _T_36; // @[Alu.scala 23:34]
  wire [31:0] _T_37; // @[Alu.scala 23:67]
  wire [31:0] _T_38; // @[Alu.scala 23:67]
  wire  _T_40; // @[Alu.scala 25:34]
  wire [31:0] _T_41; // @[Alu.scala 25:67]
  wire [31:0] _T_42; // @[Alu.scala 25:67]
  wire  _T_44; // @[Alu.scala 27:34]
  wire [32:0] _T_45; // @[Alu.scala 27:67]
  wire [31:0] _T_46; // @[Alu.scala 27:67]
  wire [31:0] _T_47; // @[Alu.scala 27:67]
  wire  _T_49; // @[Alu.scala 29:34]
  wire  _T_51; // @[Alu.scala 31:34]
  wire  _T_52; // @[Alu.scala 32:30]
  wire [1:0] _GEN_0; // @[Alu.scala 32:40]
  wire  _T_56; // @[Alu.scala 35:34]
  wire [31:0] _T_57; // @[Alu.scala 36:30]
  wire [31:0] _T_58; // @[Alu.scala 36:47]
  wire  _T_59; // @[Alu.scala 36:37]
  wire [1:0] _GEN_1; // @[Alu.scala 36:54]
  wire  _T_63; // @[Alu.scala 39:34]
  wire  _T_65; // @[Alu.scala 39:66]
  wire  _T_66; // @[Alu.scala 39:49]
  wire  _T_69; // @[Alu.scala 40:37]
  wire [1:0] _GEN_2; // @[Alu.scala 40:53]
  wire  _T_73; // @[Alu.scala 43:34]
  wire  _T_74; // @[Alu.scala 44:30]
  wire [1:0] _GEN_3; // @[Alu.scala 44:41]
  wire  _T_78; // @[Alu.scala 47:34]
  wire  _T_80; // @[Alu.scala 47:66]
  wire  _T_81; // @[Alu.scala 47:49]
  wire  _T_82; // @[Alu.scala 48:30]
  wire [1:0] _GEN_4; // @[Alu.scala 48:39]
  wire  _T_87; // @[Alu.scala 52:30]
  wire [1:0] _GEN_5; // @[Alu.scala 52:40]
  wire [1:0] _GEN_7; // @[Alu.scala 47:81]
  wire [1:0] _GEN_8; // @[Alu.scala 43:49]
  wire [1:0] _GEN_9; // @[Alu.scala 39:81]
  wire [1:0] _GEN_10; // @[Alu.scala 35:49]
  wire [1:0] _GEN_11; // @[Alu.scala 31:49]
  wire [31:0] _GEN_12; // @[Alu.scala 29:49]
  wire [31:0] _GEN_13; // @[Alu.scala 27:49]
  wire [31:0] _GEN_14; // @[Alu.scala 25:49]
  wire [31:0] _GEN_15; // @[Alu.scala 23:49]
  wire [31:0] _GEN_16; // @[Alu.scala 21:81]
  wire [31:0] _GEN_17; // @[Alu.scala 19:49]
  wire [62:0] _GEN_18; // @[Alu.scala 17:49]
  wire [62:0] _GEN_19; // @[Alu.scala 15:44]
  wire  _T_91; // @[Alu.scala 57:22]
  wire [1:0] _T_92; // @[Alu.scala 57:46]
  wire  _T_94; // @[Alu.scala 57:52]
  wire [31:0] _GEN_22; // @[Alu.scala 15:52 Alu.scala 17:57 Alu.scala 19:57 Alu.scala 21:89 Alu.scala 23:57 Alu.scala 25:57 Alu.scala 27:57 Alu.scala 29:57 Alu.scala 32:48 Alu.scala 33:36 Alu.scala 36:62 Alu.scala 37:36 Alu.scala 40:61 Alu.scala 41:36 Alu.scala 44:49 Alu.scala 45:36 Alu.scala 48:47 Alu.scala 49:36 Alu.scala 52:48 Alu.scala 53:36]
  assign _T_16 = io_AluControl == 5'h0; // @[Alu.scala 15:29]
  assign _T_17 = $signed(io_in1) + $signed(io_in2); // @[Alu.scala 15:62]
  assign _T_18 = $signed(io_in1) + $signed(io_in2); // @[Alu.scala 15:62]
  assign _T_19 = $signed(_T_18); // @[Alu.scala 15:62]
  assign _T_21 = io_AluControl == 5'h1; // @[Alu.scala 17:34]
  assign _T_22 = io_in2[4:0]; // @[Alu.scala 17:76]
  assign _GEN_21 = {{31{io_in1[31]}},io_in1}; // @[Alu.scala 17:67]
  assign _T_23 = $signed(_GEN_21) << _T_22; // @[Alu.scala 17:67]
  assign _T_25 = io_AluControl == 5'h4; // @[Alu.scala 19:34]
  assign _T_26 = $signed(io_in1) ^ $signed(io_in2); // @[Alu.scala 19:67]
  assign _T_27 = $signed(_T_26); // @[Alu.scala 19:67]
  assign _T_29 = io_AluControl == 5'h5; // @[Alu.scala 21:34]
  assign _T_31 = io_AluControl == 5'hd; // @[Alu.scala 21:66]
  assign _T_32 = _T_29 | _T_31; // @[Alu.scala 21:49]
  assign _T_34 = $signed(io_in1) >>> _T_22; // @[Alu.scala 21:99]
  assign _T_36 = io_AluControl == 5'h6; // @[Alu.scala 23:34]
  assign _T_37 = $signed(io_in1) | $signed(io_in2); // @[Alu.scala 23:67]
  assign _T_38 = $signed(_T_37); // @[Alu.scala 23:67]
  assign _T_40 = io_AluControl == 5'h7; // @[Alu.scala 25:34]
  assign _T_41 = $signed(io_in1) & $signed(io_in2); // @[Alu.scala 25:67]
  assign _T_42 = $signed(_T_41); // @[Alu.scala 25:67]
  assign _T_44 = io_AluControl == 5'h8; // @[Alu.scala 27:34]
  assign _T_45 = $signed(io_in1) - $signed(io_in2); // @[Alu.scala 27:67]
  assign _T_46 = $signed(io_in1) - $signed(io_in2); // @[Alu.scala 27:67]
  assign _T_47 = $signed(_T_46); // @[Alu.scala 27:67]
  assign _T_49 = io_AluControl == 5'h1f; // @[Alu.scala 29:34]
  assign _T_51 = io_AluControl == 5'h15; // @[Alu.scala 31:34]
  assign _T_52 = $signed(io_in1) >= $signed(io_in2); // @[Alu.scala 32:30]
  assign _GEN_0 = _T_52 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 32:40]
  assign _T_56 = io_AluControl == 5'h17; // @[Alu.scala 35:34]
  assign _T_57 = $unsigned(io_in1); // @[Alu.scala 36:30]
  assign _T_58 = $unsigned(io_in2); // @[Alu.scala 36:47]
  assign _T_59 = _T_57 >= _T_58; // @[Alu.scala 36:37]
  assign _GEN_1 = _T_59 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 36:54]
  assign _T_63 = io_AluControl == 5'h3; // @[Alu.scala 39:34]
  assign _T_65 = io_AluControl == 5'h16; // @[Alu.scala 39:66]
  assign _T_66 = _T_63 | _T_65; // @[Alu.scala 39:49]
  assign _T_69 = _T_57 < _T_58; // @[Alu.scala 40:37]
  assign _GEN_2 = _T_69 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 40:53]
  assign _T_73 = io_AluControl == 5'h10; // @[Alu.scala 43:34]
  assign _T_74 = $signed(io_in1) == $signed(io_in2); // @[Alu.scala 44:30]
  assign _GEN_3 = _T_74 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 44:41]
  assign _T_78 = io_AluControl == 5'h2; // @[Alu.scala 47:34]
  assign _T_80 = io_AluControl == 5'h14; // @[Alu.scala 47:66]
  assign _T_81 = _T_78 | _T_80; // @[Alu.scala 47:49]
  assign _T_82 = $signed(io_in1) < $signed(io_in2); // @[Alu.scala 48:30]
  assign _GEN_4 = _T_82 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 48:39]
  assign _T_87 = $signed(io_in1) != $signed(io_in2); // @[Alu.scala 52:30]
  assign _GEN_5 = _T_87 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 52:40]
  assign _GEN_7 = _T_81 ? $signed(_GEN_4) : $signed(_GEN_5); // @[Alu.scala 47:81]
  assign _GEN_8 = _T_73 ? $signed(_GEN_3) : $signed(_GEN_7); // @[Alu.scala 43:49]
  assign _GEN_9 = _T_66 ? $signed(_GEN_2) : $signed(_GEN_8); // @[Alu.scala 39:81]
  assign _GEN_10 = _T_56 ? $signed(_GEN_1) : $signed(_GEN_9); // @[Alu.scala 35:49]
  assign _GEN_11 = _T_51 ? $signed(_GEN_0) : $signed(_GEN_10); // @[Alu.scala 31:49]
  assign _GEN_12 = _T_49 ? $signed(io_in1) : $signed({{30{_GEN_11[1]}},_GEN_11}); // @[Alu.scala 29:49]
  assign _GEN_13 = _T_44 ? $signed(_T_47) : $signed(_GEN_12); // @[Alu.scala 27:49]
  assign _GEN_14 = _T_40 ? $signed(_T_42) : $signed(_GEN_13); // @[Alu.scala 25:49]
  assign _GEN_15 = _T_36 ? $signed(_T_38) : $signed(_GEN_14); // @[Alu.scala 23:49]
  assign _GEN_16 = _T_32 ? $signed(_T_34) : $signed(_GEN_15); // @[Alu.scala 21:81]
  assign _GEN_17 = _T_25 ? $signed(_T_27) : $signed(_GEN_16); // @[Alu.scala 19:49]
  assign _GEN_18 = _T_21 ? $signed(_T_23) : $signed({{31{_GEN_17[31]}},_GEN_17}); // @[Alu.scala 17:49]
  assign _GEN_19 = _T_16 ? $signed({{31{_T_19[31]}},_T_19}) : $signed(_GEN_18); // @[Alu.scala 15:44]
  assign _T_91 = $signed(io_out) == $signed(32'sh1); // @[Alu.scala 57:22]
  assign _T_92 = io_AluControl[4:3]; // @[Alu.scala 57:46]
  assign _T_94 = _T_92 == 2'h2; // @[Alu.scala 57:52]
  assign io_Branch = _T_91 & _T_94; // @[Alu.scala 57:75 Alu.scala 58:31]
  assign _GEN_22 = _GEN_19[31:0]; // @[Alu.scala 15:52 Alu.scala 17:57 Alu.scala 19:57 Alu.scala 21:89 Alu.scala 23:57 Alu.scala 25:57 Alu.scala 27:57 Alu.scala 29:57 Alu.scala 32:48 Alu.scala 33:36 Alu.scala 36:62 Alu.scala 37:36 Alu.scala 40:61 Alu.scala 41:36 Alu.scala 44:49 Alu.scala 45:36 Alu.scala 48:47 Alu.scala 49:36 Alu.scala 52:48 Alu.scala 53:36]
  assign io_out = $signed(_GEN_22); // @[Alu.scala 15:52 Alu.scala 17:57 Alu.scala 19:57 Alu.scala 21:89 Alu.scala 23:57 Alu.scala 25:57 Alu.scala 27:57 Alu.scala 29:57 Alu.scala 32:48 Alu.scala 33:36 Alu.scala 36:62 Alu.scala 37:36 Alu.scala 40:61 Alu.scala 41:36 Alu.scala 44:49 Alu.scala 45:36 Alu.scala 48:47 Alu.scala 49:36 Alu.scala 52:48 Alu.scala 53:36]
endmodule
module datamem(
  input         clock,
  input         io_load,
  input         io_store,
  input  [7:0]  io_address,
  input  [31:0] io_storeData,
  output [31:0] io_dataOut
);
  reg [31:0] mem [0:1023]; // @[datamem.scala 13:22]
  reg [31:0] _RAND_0;
  wire [31:0] mem__T_19_data; // @[datamem.scala 13:22]
  wire [9:0] mem__T_19_addr; // @[datamem.scala 13:22]
  wire [31:0] mem__T_22_data; // @[datamem.scala 13:22]
  wire [9:0] mem__T_22_addr; // @[datamem.scala 13:22]
  wire  mem__T_22_mask; // @[datamem.scala 13:22]
  wire  mem__T_22_en; // @[datamem.scala 13:22]
  assign mem__T_19_addr = {{2'd0}, io_address};
  assign mem__T_19_data = mem[mem__T_19_addr]; // @[datamem.scala 13:22]
  assign mem__T_22_data = io_storeData;
  assign mem__T_22_addr = {{2'd0}, io_address};
  assign mem__T_22_mask = 1'h1;
  assign mem__T_22_en = io_store;
  assign io_dataOut = mem__T_19_data; // @[datamem.scala 15:28]
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
    if(mem__T_22_en & mem__T_22_mask) begin
      mem[mem__T_22_addr] <= mem__T_22_data; // @[datamem.scala 13:22]
    end
  end
endmodule
module top(
  input         clock,
  input         reset,
  output [31:0] io_output
);
  wire  pc_clock; // @[top.scala 9:25]
  wire [31:0] pc_io_input; // @[top.scala 9:25]
  wire [31:0] pc_io_pc4; // @[top.scala 9:25]
  wire [31:0] pc_io_pcout; // @[top.scala 9:25]
  wire  insmem_clock; // @[top.scala 10:29]
  wire [31:0] insmem_io_address; // @[top.scala 10:29]
  wire [31:0] insmem_io_data; // @[top.scala 10:29]
  wire [6:0] control_io_opcode; // @[top.scala 11:30]
  wire  control_io_MemWrite; // @[top.scala 11:30]
  wire  control_io_Branch; // @[top.scala 11:30]
  wire  control_io_MemRead; // @[top.scala 11:30]
  wire  control_io_RegWrite; // @[top.scala 11:30]
  wire  control_io_MemtoReg; // @[top.scala 11:30]
  wire [2:0] control_io_AluOp; // @[top.scala 11:30]
  wire [1:0] control_io_OpA; // @[top.scala 11:30]
  wire  control_io_OpB; // @[top.scala 11:30]
  wire [1:0] control_io_ExtSel; // @[top.scala 11:30]
  wire [1:0] control_io_NextPc; // @[top.scala 11:30]
  wire [31:0] immediategen_io_instruction; // @[top.scala 12:35]
  wire [31:0] immediategen_io_pc; // @[top.scala 12:35]
  wire [31:0] immediategen_io_s_imm; // @[top.scala 12:35]
  wire [31:0] immediategen_io_sb_imm; // @[top.scala 12:35]
  wire [31:0] immediategen_io_uj_imm; // @[top.scala 12:35]
  wire [31:0] immediategen_io_u_imm; // @[top.scala 12:35]
  wire [31:0] immediategen_io_i_imm; // @[top.scala 12:35]
  wire  regfile_clock; // @[top.scala 13:30]
  wire  regfile_io_regwrite; // @[top.scala 13:30]
  wire [4:0] regfile_io_rd; // @[top.scala 13:30]
  wire [4:0] regfile_io_rs1s; // @[top.scala 13:30]
  wire [4:0] regfile_io_rs2s; // @[top.scala 13:30]
  wire [31:0] regfile_io_writedata; // @[top.scala 13:30]
  wire [31:0] regfile_io_rs1; // @[top.scala 13:30]
  wire [31:0] regfile_io_rs2; // @[top.scala 13:30]
  wire [2:0] alucontrol_io_ALUop; // @[top.scala 14:33]
  wire [2:0] alucontrol_io_func3; // @[top.scala 14:33]
  wire  alucontrol_io_func7; // @[top.scala 14:33]
  wire [4:0] alucontrol_io_ALUcont; // @[top.scala 14:33]
  wire [31:0] jalr_io_a; // @[top.scala 15:27]
  wire [31:0] jalr_io_b; // @[top.scala 15:27]
  wire [31:0] jalr_io_o; // @[top.scala 15:27]
  wire [4:0] alu_io_AluControl; // @[top.scala 16:26]
  wire [31:0] alu_io_in1; // @[top.scala 16:26]
  wire [31:0] alu_io_in2; // @[top.scala 16:26]
  wire  alu_io_Branch; // @[top.scala 16:26]
  wire [31:0] alu_io_out; // @[top.scala 16:26]
  wire  dataMem_clock; // @[top.scala 17:29]
  wire  dataMem_io_load; // @[top.scala 17:29]
  wire  dataMem_io_store; // @[top.scala 17:29]
  wire [7:0] dataMem_io_address; // @[top.scala 17:29]
  wire [31:0] dataMem_io_storeData; // @[top.scala 17:29]
  wire [31:0] dataMem_io_dataOut; // @[top.scala 17:29]
  wire [9:0] _T_7; // @[top.scala 21:41]
  wire  _T_17; // @[top.scala 49:30]
  wire  _T_19; // @[top.scala 51:35]
  wire [31:0] _T_20; // @[top.scala 52:47]
  wire [31:0] _GEN_1; // @[top.scala 53:43]
  wire [31:0] _GEN_2; // @[top.scala 51:43]
  wire  _T_24; // @[top.scala 60:29]
  wire  _T_28; // @[top.scala 64:41]
  wire  _T_30; // @[top.scala 66:47]
  wire [31:0] _GEN_4; // @[top.scala 68:55]
  wire [31:0] _GEN_5; // @[top.scala 66:55]
  wire [31:0] _GEN_6; // @[top.scala 64:49]
  wire  _T_35; // @[top.scala 83:34]
  wire [31:0] _GEN_9; // @[top.scala 85:43]
  wire  _T_39; // @[top.scala 93:33]
  wire  _T_41; // @[top.scala 95:38]
  wire  _T_42; // @[top.scala 96:39]
  wire  _T_44; // @[top.scala 96:60]
  wire [31:0] _T_48; // @[top.scala 99:63]
  wire [31:0] _GEN_12; // @[top.scala 96:69]
  wire  _T_50; // @[top.scala 103:39]
  wire [31:0] _T_51; // @[top.scala 104:55]
  wire [31:0] _T_54; // @[top.scala 106:47]
  wire [31:0] _GEN_14; // @[top.scala 103:47]
  wire [31:0] _GEN_15; // @[top.scala 95:46]
  pc pc ( // @[top.scala 9:25]
    .clock(pc_clock),
    .io_input(pc_io_input),
    .io_pc4(pc_io_pc4),
    .io_pcout(pc_io_pcout)
  );
  insmem insmem ( // @[top.scala 10:29]
    .clock(insmem_clock),
    .io_address(insmem_io_address),
    .io_data(insmem_io_data)
  );
  Control control ( // @[top.scala 11:30]
    .io_opcode(control_io_opcode),
    .io_MemWrite(control_io_MemWrite),
    .io_Branch(control_io_Branch),
    .io_MemRead(control_io_MemRead),
    .io_RegWrite(control_io_RegWrite),
    .io_MemtoReg(control_io_MemtoReg),
    .io_AluOp(control_io_AluOp),
    .io_OpA(control_io_OpA),
    .io_OpB(control_io_OpB),
    .io_ExtSel(control_io_ExtSel),
    .io_NextPc(control_io_NextPc)
  );
  ImmGen immediategen ( // @[top.scala 12:35]
    .io_instruction(immediategen_io_instruction),
    .io_pc(immediategen_io_pc),
    .io_s_imm(immediategen_io_s_imm),
    .io_sb_imm(immediategen_io_sb_imm),
    .io_uj_imm(immediategen_io_uj_imm),
    .io_u_imm(immediategen_io_u_imm),
    .io_i_imm(immediategen_io_i_imm)
  );
  registerfile regfile ( // @[top.scala 13:30]
    .clock(regfile_clock),
    .io_regwrite(regfile_io_regwrite),
    .io_rd(regfile_io_rd),
    .io_rs1s(regfile_io_rs1s),
    .io_rs2s(regfile_io_rs2s),
    .io_writedata(regfile_io_writedata),
    .io_rs1(regfile_io_rs1),
    .io_rs2(regfile_io_rs2)
  );
  ALUcont alucontrol ( // @[top.scala 14:33]
    .io_ALUop(alucontrol_io_ALUop),
    .io_func3(alucontrol_io_func3),
    .io_func7(alucontrol_io_func7),
    .io_ALUcont(alucontrol_io_ALUcont)
  );
  jalr jalr ( // @[top.scala 15:27]
    .io_a(jalr_io_a),
    .io_b(jalr_io_b),
    .io_o(jalr_io_o)
  );
  Alu alu ( // @[top.scala 16:26]
    .io_AluControl(alu_io_AluControl),
    .io_in1(alu_io_in1),
    .io_in2(alu_io_in2),
    .io_Branch(alu_io_Branch),
    .io_out(alu_io_out)
  );
  datamem dataMem ( // @[top.scala 17:29]
    .clock(dataMem_clock),
    .io_load(dataMem_io_load),
    .io_store(dataMem_io_store),
    .io_address(dataMem_io_address),
    .io_storeData(dataMem_io_storeData),
    .io_dataOut(dataMem_io_dataOut)
  );
  assign _T_7 = pc_io_pcout[11:2]; // @[top.scala 21:41]
  assign _T_17 = control_io_OpA == 2'h0; // @[top.scala 49:30]
  assign _T_19 = control_io_OpA == 2'h2; // @[top.scala 51:35]
  assign _T_20 = $signed(pc_io_pc4); // @[top.scala 52:47]
  assign _GEN_1 = regfile_io_rs1; // @[top.scala 53:43]
  assign _GEN_2 = _T_19 ? $signed(_T_20) : $signed(_GEN_1); // @[top.scala 51:43]
  assign _T_24 = control_io_OpB == 1'h0; // @[top.scala 60:29]
  assign _T_28 = control_io_ExtSel == 2'h0; // @[top.scala 64:41]
  assign _T_30 = control_io_ExtSel == 2'h1; // @[top.scala 66:47]
  assign _GEN_4 = immediategen_io_s_imm; // @[top.scala 68:55]
  assign _GEN_5 = _T_30 ? $signed(immediategen_io_u_imm) : $signed(_GEN_4); // @[top.scala 66:55]
  assign _GEN_6 = _T_28 ? $signed(immediategen_io_i_imm) : $signed(_GEN_5); // @[top.scala 64:49]
  assign _T_35 = control_io_MemtoReg == 1'h0; // @[top.scala 83:34]
  assign _GEN_9 = dataMem_io_dataOut; // @[top.scala 85:43]
  assign _T_39 = control_io_NextPc == 2'h0; // @[top.scala 93:33]
  assign _T_41 = control_io_NextPc == 2'h1; // @[top.scala 95:38]
  assign _T_42 = alu_io_Branch & control_io_Branch; // @[top.scala 96:39]
  assign _T_44 = _T_42 == 1'h0; // @[top.scala 96:60]
  assign _T_48 = $unsigned(immediategen_io_sb_imm); // @[top.scala 99:63]
  assign _GEN_12 = _T_44 ? pc_io_pc4 : _T_48; // @[top.scala 96:69]
  assign _T_50 = control_io_NextPc == 2'h2; // @[top.scala 103:39]
  assign _T_51 = $unsigned(immediategen_io_uj_imm); // @[top.scala 104:55]
  assign _T_54 = $unsigned(jalr_io_o); // @[top.scala 106:47]
  assign _GEN_14 = _T_50 ? _T_51 : _T_54; // @[top.scala 103:47]
  assign _GEN_15 = _T_41 ? _GEN_12 : _GEN_14; // @[top.scala 95:46]
  assign io_output = alu_io_out; // @[top.scala 111:19]
  assign pc_clock = clock;
  assign pc_io_input = _T_39 ? pc_io_pc4 : _GEN_15; // @[top.scala 19:21 top.scala 94:29 top.scala 97:37 top.scala 99:37 top.scala 104:29 top.scala 106:28]
  assign insmem_clock = clock;
  assign insmem_io_address = {{22'd0}, _T_7}; // @[top.scala 21:27]
  assign control_io_opcode = insmem_io_data[6:0]; // @[top.scala 23:27]
  assign immediategen_io_instruction = insmem_io_data; // @[top.scala 26:37]
  assign immediategen_io_pc = pc_io_pcout; // @[top.scala 25:28]
  assign regfile_clock = clock;
  assign regfile_io_regwrite = control_io_RegWrite; // @[top.scala 28:29]
  assign regfile_io_rd = insmem_io_data[11:7]; // @[top.scala 29:23]
  assign regfile_io_rs1s = insmem_io_data[19:15]; // @[top.scala 30:25]
  assign regfile_io_rs2s = insmem_io_data[24:20]; // @[top.scala 31:25]
  assign regfile_io_writedata = _T_35 ? $signed(alu_io_out) : $signed(_GEN_9); // @[top.scala 84:38 top.scala 86:38]
  assign alucontrol_io_ALUop = control_io_AluOp; // @[top.scala 33:29]
  assign alucontrol_io_func3 = insmem_io_data[14:12]; // @[top.scala 34:29]
  assign alucontrol_io_func7 = insmem_io_data[30]; // @[top.scala 35:29]
  assign jalr_io_a = immediategen_io_i_imm; // @[top.scala 39:28]
  assign jalr_io_b = regfile_io_rs1; // @[top.scala 43:19]
  assign alu_io_AluControl = alucontrol_io_ALUcont; // @[top.scala 46:27]
  assign alu_io_in1 = _T_17 ? $signed(regfile_io_rs1) : $signed(_GEN_2); // @[top.scala 50:28 top.scala 52:28 top.scala 54:28]
  assign alu_io_in2 = _T_24 ? $signed(regfile_io_rs2) : $signed(_GEN_6); // @[top.scala 61:28 top.scala 65:36 top.scala 67:44 top.scala 69:36]
  assign dataMem_clock = clock;
  assign dataMem_io_load = control_io_MemRead; // @[top.scala 81:25]
  assign dataMem_io_store = control_io_MemWrite; // @[top.scala 80:26]
  assign dataMem_io_address = alu_io_out[9:2]; // @[top.scala 78:28]
  assign dataMem_io_storeData = regfile_io_rs2; // @[top.scala 79:30]
endmodule
