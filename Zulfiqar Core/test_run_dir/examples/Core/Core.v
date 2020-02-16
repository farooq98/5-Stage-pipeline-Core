module Type_Decode(
  input  [6:0] io_opcode,
  output       io_r,
  output       io_load,
  output       io_store,
  output       io_branch,
  output       io_i,
  output       io_jal,
  output       io_jalr,
  output       io_lui
);
  wire  _T_24; // @[Type_Decode.scala 15:18]
  wire  _T_34; // @[Type_Decode.scala 24:24]
  wire  _T_44; // @[Type_Decode.scala 33:24]
  wire  _T_54; // @[Type_Decode.scala 42:24]
  wire  _T_64; // @[Type_Decode.scala 51:24]
  wire  _T_74; // @[Type_Decode.scala 60:24]
  wire  _T_84; // @[Type_Decode.scala 69:24]
  wire  _T_94; // @[Type_Decode.scala 78:24]
  wire  _GEN_4; // @[Type_Decode.scala 69:36]
  wire  _GEN_7; // @[Type_Decode.scala 60:36]
  wire  _GEN_8; // @[Type_Decode.scala 60:36]
  wire  _GEN_11; // @[Type_Decode.scala 51:36]
  wire  _GEN_12; // @[Type_Decode.scala 51:36]
  wire  _GEN_13; // @[Type_Decode.scala 51:36]
  wire  _GEN_16; // @[Type_Decode.scala 42:36]
  wire  _GEN_17; // @[Type_Decode.scala 42:36]
  wire  _GEN_18; // @[Type_Decode.scala 42:36]
  wire  _GEN_19; // @[Type_Decode.scala 42:36]
  wire  _GEN_22; // @[Type_Decode.scala 33:36]
  wire  _GEN_23; // @[Type_Decode.scala 33:36]
  wire  _GEN_24; // @[Type_Decode.scala 33:36]
  wire  _GEN_25; // @[Type_Decode.scala 33:36]
  wire  _GEN_26; // @[Type_Decode.scala 33:36]
  wire  _GEN_29; // @[Type_Decode.scala 24:35]
  wire  _GEN_30; // @[Type_Decode.scala 24:35]
  wire  _GEN_31; // @[Type_Decode.scala 24:35]
  wire  _GEN_32; // @[Type_Decode.scala 24:35]
  wire  _GEN_33; // @[Type_Decode.scala 24:35]
  wire  _GEN_34; // @[Type_Decode.scala 24:35]
  assign _T_24 = io_opcode == 7'h33; // @[Type_Decode.scala 15:18]
  assign _T_34 = io_opcode == 7'h3; // @[Type_Decode.scala 24:24]
  assign _T_44 = io_opcode == 7'h23; // @[Type_Decode.scala 33:24]
  assign _T_54 = io_opcode == 7'h63; // @[Type_Decode.scala 42:24]
  assign _T_64 = io_opcode == 7'h13; // @[Type_Decode.scala 51:24]
  assign _T_74 = io_opcode == 7'h67; // @[Type_Decode.scala 60:24]
  assign _T_84 = io_opcode == 7'h6f; // @[Type_Decode.scala 69:24]
  assign _T_94 = io_opcode == 7'h37; // @[Type_Decode.scala 78:24]
  assign _GEN_4 = _T_84 ? 1'h0 : _T_94; // @[Type_Decode.scala 69:36]
  assign _GEN_7 = _T_74 ? 1'h0 : _T_84; // @[Type_Decode.scala 60:36]
  assign _GEN_8 = _T_74 ? 1'h0 : _GEN_4; // @[Type_Decode.scala 60:36]
  assign _GEN_11 = _T_64 ? 1'h0 : _T_74; // @[Type_Decode.scala 51:36]
  assign _GEN_12 = _T_64 ? 1'h0 : _GEN_7; // @[Type_Decode.scala 51:36]
  assign _GEN_13 = _T_64 ? 1'h0 : _GEN_8; // @[Type_Decode.scala 51:36]
  assign _GEN_16 = _T_54 ? 1'h0 : _T_64; // @[Type_Decode.scala 42:36]
  assign _GEN_17 = _T_54 ? 1'h0 : _GEN_11; // @[Type_Decode.scala 42:36]
  assign _GEN_18 = _T_54 ? 1'h0 : _GEN_12; // @[Type_Decode.scala 42:36]
  assign _GEN_19 = _T_54 ? 1'h0 : _GEN_13; // @[Type_Decode.scala 42:36]
  assign _GEN_22 = _T_44 ? 1'h0 : _T_54; // @[Type_Decode.scala 33:36]
  assign _GEN_23 = _T_44 ? 1'h0 : _GEN_16; // @[Type_Decode.scala 33:36]
  assign _GEN_24 = _T_44 ? 1'h0 : _GEN_17; // @[Type_Decode.scala 33:36]
  assign _GEN_25 = _T_44 ? 1'h0 : _GEN_18; // @[Type_Decode.scala 33:36]
  assign _GEN_26 = _T_44 ? 1'h0 : _GEN_19; // @[Type_Decode.scala 33:36]
  assign _GEN_29 = _T_34 ? 1'h0 : _T_44; // @[Type_Decode.scala 24:35]
  assign _GEN_30 = _T_34 ? 1'h0 : _GEN_22; // @[Type_Decode.scala 24:35]
  assign _GEN_31 = _T_34 ? 1'h0 : _GEN_23; // @[Type_Decode.scala 24:35]
  assign _GEN_32 = _T_34 ? 1'h0 : _GEN_24; // @[Type_Decode.scala 24:35]
  assign _GEN_33 = _T_34 ? 1'h0 : _GEN_25; // @[Type_Decode.scala 24:35]
  assign _GEN_34 = _T_34 ? 1'h0 : _GEN_26; // @[Type_Decode.scala 24:35]
  assign io_r = io_opcode == 7'h33; // @[Type_Decode.scala 16:10 Type_Decode.scala 26:10 Type_Decode.scala 35:10 Type_Decode.scala 44:10 Type_Decode.scala 53:10 Type_Decode.scala 62:10 Type_Decode.scala 71:10 Type_Decode.scala 80:10 Type_Decode.scala 88:10]
  assign io_load = _T_24 ? 1'h0 : _T_34; // @[Type_Decode.scala 17:13 Type_Decode.scala 25:13 Type_Decode.scala 36:13 Type_Decode.scala 45:13 Type_Decode.scala 54:13 Type_Decode.scala 63:13 Type_Decode.scala 72:13 Type_Decode.scala 81:13 Type_Decode.scala 89:13]
  assign io_store = _T_24 ? 1'h0 : _GEN_29; // @[Type_Decode.scala 18:14 Type_Decode.scala 27:14 Type_Decode.scala 34:14 Type_Decode.scala 46:14 Type_Decode.scala 55:14 Type_Decode.scala 64:14 Type_Decode.scala 73:14 Type_Decode.scala 82:14 Type_Decode.scala 90:14]
  assign io_branch = _T_24 ? 1'h0 : _GEN_30; // @[Type_Decode.scala 19:15 Type_Decode.scala 28:15 Type_Decode.scala 37:15 Type_Decode.scala 43:15 Type_Decode.scala 56:15 Type_Decode.scala 65:15 Type_Decode.scala 74:15 Type_Decode.scala 83:15 Type_Decode.scala 91:15]
  assign io_i = _T_24 ? 1'h0 : _GEN_31; // @[Type_Decode.scala 20:10 Type_Decode.scala 29:10 Type_Decode.scala 38:10 Type_Decode.scala 47:10 Type_Decode.scala 52:10 Type_Decode.scala 66:10 Type_Decode.scala 75:10 Type_Decode.scala 84:10 Type_Decode.scala 92:10]
  assign io_jal = _T_24 ? 1'h0 : _GEN_33; // @[Type_Decode.scala 22:12 Type_Decode.scala 31:12 Type_Decode.scala 40:12 Type_Decode.scala 49:12 Type_Decode.scala 58:12 Type_Decode.scala 67:12 Type_Decode.scala 70:12 Type_Decode.scala 86:12 Type_Decode.scala 94:12]
  assign io_jalr = _T_24 ? 1'h0 : _GEN_32; // @[Type_Decode.scala 21:13 Type_Decode.scala 30:13 Type_Decode.scala 39:13 Type_Decode.scala 48:13 Type_Decode.scala 57:13 Type_Decode.scala 61:13 Type_Decode.scala 76:13 Type_Decode.scala 85:13 Type_Decode.scala 93:13]
  assign io_lui = _T_24 ? 1'h0 : _GEN_34; // @[Type_Decode.scala 23:12 Type_Decode.scala 32:12 Type_Decode.scala 41:12 Type_Decode.scala 50:12 Type_Decode.scala 59:12 Type_Decode.scala 68:12 Type_Decode.scala 77:12 Type_Decode.scala 79:12 Type_Decode.scala 95:12]
endmodule
module ControlDecode(
  input        io_r,
  input        io_load,
  input        io_store,
  input        io_br,
  input        io_i,
  input        io_jal,
  input        io_jalr,
  input        io_lui,
  output       io_memWrite,
  output       io_memRead,
  output       io_regWrite,
  output       io_memToReg,
  output [2:0] io_aluOp,
  output [1:0] io_oprA,
  output       io_oprB,
  output [1:0] io_extendSel
);
  wire [2:0] _GEN_2; // @[ControlDecode.scala 101:29]
  wire [1:0] _GEN_3; // @[ControlDecode.scala 101:29]
  wire  _GEN_5; // @[ControlDecode.scala 90:29]
  wire [2:0] _GEN_6; // @[ControlDecode.scala 90:29]
  wire [1:0] _GEN_7; // @[ControlDecode.scala 90:29]
  wire  _GEN_8; // @[ControlDecode.scala 90:29]
  wire  _GEN_11; // @[ControlDecode.scala 79:27]
  wire [2:0] _GEN_12; // @[ControlDecode.scala 79:27]
  wire [1:0] _GEN_13; // @[ControlDecode.scala 79:27]
  wire  _GEN_14; // @[ControlDecode.scala 79:27]
  wire  _GEN_15; // @[ControlDecode.scala 79:27]
  wire  _GEN_18; // @[ControlDecode.scala 68:30]
  wire [2:0] _GEN_19; // @[ControlDecode.scala 68:30]
  wire [1:0] _GEN_20; // @[ControlDecode.scala 68:30]
  wire  _GEN_21; // @[ControlDecode.scala 68:30]
  wire  _GEN_22; // @[ControlDecode.scala 68:30]
  wire  _GEN_26; // @[ControlDecode.scala 57:28]
  wire [2:0] _GEN_27; // @[ControlDecode.scala 57:28]
  wire [1:0] _GEN_28; // @[ControlDecode.scala 57:28]
  wire  _GEN_29; // @[ControlDecode.scala 57:28]
  wire  _GEN_30; // @[ControlDecode.scala 57:28]
  wire  _GEN_35; // @[ControlDecode.scala 46:31]
  wire [2:0] _GEN_36; // @[ControlDecode.scala 46:31]
  wire [1:0] _GEN_37; // @[ControlDecode.scala 46:31]
  wire  _GEN_38; // @[ControlDecode.scala 46:31]
  wire [1:0] _GEN_39; // @[ControlDecode.scala 46:31]
  wire  _GEN_41; // @[ControlDecode.scala 35:30]
  wire  _GEN_44; // @[ControlDecode.scala 35:30]
  wire [2:0] _GEN_45; // @[ControlDecode.scala 35:30]
  wire [1:0] _GEN_46; // @[ControlDecode.scala 35:30]
  wire  _GEN_47; // @[ControlDecode.scala 35:30]
  wire [1:0] _GEN_48; // @[ControlDecode.scala 35:30]
  assign _GEN_2 = io_lui ? 3'h6 : 3'h7; // @[ControlDecode.scala 101:29]
  assign _GEN_3 = io_lui ? 2'h3 : 2'h0; // @[ControlDecode.scala 101:29]
  assign _GEN_5 = io_jal ? 1'h1 : io_lui; // @[ControlDecode.scala 90:29]
  assign _GEN_6 = io_jal ? 3'h3 : _GEN_2; // @[ControlDecode.scala 90:29]
  assign _GEN_7 = io_jal ? 2'h2 : _GEN_3; // @[ControlDecode.scala 90:29]
  assign _GEN_8 = io_jal ? 1'h0 : io_lui; // @[ControlDecode.scala 90:29]
  assign _GEN_11 = io_i ? 1'h1 : _GEN_5; // @[ControlDecode.scala 79:27]
  assign _GEN_12 = io_i ? 3'h1 : _GEN_6; // @[ControlDecode.scala 79:27]
  assign _GEN_13 = io_i ? 2'h0 : _GEN_7; // @[ControlDecode.scala 79:27]
  assign _GEN_14 = io_i ? 1'h1 : _GEN_8; // @[ControlDecode.scala 79:27]
  assign _GEN_15 = io_i ? 1'h0 : _GEN_8; // @[ControlDecode.scala 79:27]
  assign _GEN_18 = io_jalr ? 1'h1 : _GEN_11; // @[ControlDecode.scala 68:30]
  assign _GEN_19 = io_jalr ? 3'h3 : _GEN_12; // @[ControlDecode.scala 68:30]
  assign _GEN_20 = io_jalr ? 2'h2 : _GEN_13; // @[ControlDecode.scala 68:30]
  assign _GEN_21 = io_jalr ? 1'h0 : _GEN_14; // @[ControlDecode.scala 68:30]
  assign _GEN_22 = io_jalr ? 1'h0 : _GEN_15; // @[ControlDecode.scala 68:30]
  assign _GEN_26 = io_br ? 1'h0 : _GEN_18; // @[ControlDecode.scala 57:28]
  assign _GEN_27 = io_br ? 3'h2 : _GEN_19; // @[ControlDecode.scala 57:28]
  assign _GEN_28 = io_br ? 2'h0 : _GEN_20; // @[ControlDecode.scala 57:28]
  assign _GEN_29 = io_br ? 1'h0 : _GEN_21; // @[ControlDecode.scala 57:28]
  assign _GEN_30 = io_br ? 1'h0 : _GEN_22; // @[ControlDecode.scala 57:28]
  assign _GEN_35 = io_store ? 1'h0 : _GEN_26; // @[ControlDecode.scala 46:31]
  assign _GEN_36 = io_store ? 3'h5 : _GEN_27; // @[ControlDecode.scala 46:31]
  assign _GEN_37 = io_store ? 2'h0 : _GEN_28; // @[ControlDecode.scala 46:31]
  assign _GEN_38 = io_store ? 1'h1 : _GEN_29; // @[ControlDecode.scala 46:31]
  assign _GEN_39 = io_store ? 2'h2 : {{1'd0}, _GEN_30}; // @[ControlDecode.scala 46:31]
  assign _GEN_41 = io_load ? 1'h0 : io_store; // @[ControlDecode.scala 35:30]
  assign _GEN_44 = io_load ? 1'h1 : _GEN_35; // @[ControlDecode.scala 35:30]
  assign _GEN_45 = io_load ? 3'h4 : _GEN_36; // @[ControlDecode.scala 35:30]
  assign _GEN_46 = io_load ? 2'h0 : _GEN_37; // @[ControlDecode.scala 35:30]
  assign _GEN_47 = io_load ? 1'h1 : _GEN_38; // @[ControlDecode.scala 35:30]
  assign _GEN_48 = io_load ? 2'h0 : _GEN_39; // @[ControlDecode.scala 35:30]
  assign io_memWrite = io_r ? 1'h0 : _GEN_41; // @[ControlDecode.scala 25:17 ControlDecode.scala 36:17 ControlDecode.scala 47:17 ControlDecode.scala 58:17 ControlDecode.scala 69:17 ControlDecode.scala 80:17 ControlDecode.scala 91:17 ControlDecode.scala 102:17 ControlDecode.scala 113:17]
  assign io_memRead = io_r ? 1'h0 : io_load; // @[ControlDecode.scala 27:16 ControlDecode.scala 38:16 ControlDecode.scala 49:16 ControlDecode.scala 60:16 ControlDecode.scala 71:16 ControlDecode.scala 82:16 ControlDecode.scala 93:16 ControlDecode.scala 104:16 ControlDecode.scala 115:16]
  assign io_regWrite = io_r ? 1'h1 : _GEN_44; // @[ControlDecode.scala 28:17 ControlDecode.scala 39:17 ControlDecode.scala 50:17 ControlDecode.scala 61:17 ControlDecode.scala 72:17 ControlDecode.scala 83:17 ControlDecode.scala 94:17 ControlDecode.scala 105:17 ControlDecode.scala 116:17]
  assign io_memToReg = io_r ? 1'h0 : io_load; // @[ControlDecode.scala 29:17 ControlDecode.scala 40:17 ControlDecode.scala 51:17 ControlDecode.scala 62:17 ControlDecode.scala 73:17 ControlDecode.scala 84:17 ControlDecode.scala 95:17 ControlDecode.scala 106:17 ControlDecode.scala 117:17]
  assign io_aluOp = io_r ? 3'h0 : _GEN_45; // @[ControlDecode.scala 30:14 ControlDecode.scala 41:14 ControlDecode.scala 52:14 ControlDecode.scala 63:14 ControlDecode.scala 74:14 ControlDecode.scala 85:14 ControlDecode.scala 96:14 ControlDecode.scala 107:14 ControlDecode.scala 118:14]
  assign io_oprA = io_r ? 2'h0 : _GEN_46; // @[ControlDecode.scala 31:13 ControlDecode.scala 42:13 ControlDecode.scala 53:13 ControlDecode.scala 64:13 ControlDecode.scala 75:13 ControlDecode.scala 86:13 ControlDecode.scala 97:13 ControlDecode.scala 108:13 ControlDecode.scala 119:13]
  assign io_oprB = io_r ? 1'h0 : _GEN_47; // @[ControlDecode.scala 32:13 ControlDecode.scala 43:13 ControlDecode.scala 54:13 ControlDecode.scala 65:13 ControlDecode.scala 76:13 ControlDecode.scala 87:13 ControlDecode.scala 98:13 ControlDecode.scala 109:13 ControlDecode.scala 120:13]
  assign io_extendSel = io_r ? 2'h0 : _GEN_48; // @[ControlDecode.scala 33:18 ControlDecode.scala 44:18 ControlDecode.scala 55:18 ControlDecode.scala 66:18 ControlDecode.scala 77:18 ControlDecode.scala 88:18 ControlDecode.scala 99:18 ControlDecode.scala 110:18 ControlDecode.scala 121:18]
endmodule
module Control(
  input  [6:0] io_opcode,
  output       io_memWrite,
  output       io_memRead,
  output       io_regWrite,
  output       io_memToReg,
  output [2:0] io_aluOp,
  output [1:0] io_oprA,
  output       io_oprB,
  output [1:0] io_extendSel
);
  wire [6:0] typeDecode_io_opcode; // @[Control.scala 17:26]
  wire  typeDecode_io_r; // @[Control.scala 17:26]
  wire  typeDecode_io_load; // @[Control.scala 17:26]
  wire  typeDecode_io_store; // @[Control.scala 17:26]
  wire  typeDecode_io_branch; // @[Control.scala 17:26]
  wire  typeDecode_io_i; // @[Control.scala 17:26]
  wire  typeDecode_io_jal; // @[Control.scala 17:26]
  wire  typeDecode_io_jalr; // @[Control.scala 17:26]
  wire  typeDecode_io_lui; // @[Control.scala 17:26]
  wire  CtrlDecode_io_r; // @[Control.scala 18:26]
  wire  CtrlDecode_io_load; // @[Control.scala 18:26]
  wire  CtrlDecode_io_store; // @[Control.scala 18:26]
  wire  CtrlDecode_io_br; // @[Control.scala 18:26]
  wire  CtrlDecode_io_i; // @[Control.scala 18:26]
  wire  CtrlDecode_io_jal; // @[Control.scala 18:26]
  wire  CtrlDecode_io_jalr; // @[Control.scala 18:26]
  wire  CtrlDecode_io_lui; // @[Control.scala 18:26]
  wire  CtrlDecode_io_memWrite; // @[Control.scala 18:26]
  wire  CtrlDecode_io_memRead; // @[Control.scala 18:26]
  wire  CtrlDecode_io_regWrite; // @[Control.scala 18:26]
  wire  CtrlDecode_io_memToReg; // @[Control.scala 18:26]
  wire [2:0] CtrlDecode_io_aluOp; // @[Control.scala 18:26]
  wire [1:0] CtrlDecode_io_oprA; // @[Control.scala 18:26]
  wire  CtrlDecode_io_oprB; // @[Control.scala 18:26]
  wire [1:0] CtrlDecode_io_extendSel; // @[Control.scala 18:26]
  Type_Decode typeDecode ( // @[Control.scala 17:26]
    .io_opcode(typeDecode_io_opcode),
    .io_r(typeDecode_io_r),
    .io_load(typeDecode_io_load),
    .io_store(typeDecode_io_store),
    .io_branch(typeDecode_io_branch),
    .io_i(typeDecode_io_i),
    .io_jal(typeDecode_io_jal),
    .io_jalr(typeDecode_io_jalr),
    .io_lui(typeDecode_io_lui)
  );
  ControlDecode CtrlDecode ( // @[Control.scala 18:26]
    .io_r(CtrlDecode_io_r),
    .io_load(CtrlDecode_io_load),
    .io_store(CtrlDecode_io_store),
    .io_br(CtrlDecode_io_br),
    .io_i(CtrlDecode_io_i),
    .io_jal(CtrlDecode_io_jal),
    .io_jalr(CtrlDecode_io_jalr),
    .io_lui(CtrlDecode_io_lui),
    .io_memWrite(CtrlDecode_io_memWrite),
    .io_memRead(CtrlDecode_io_memRead),
    .io_regWrite(CtrlDecode_io_regWrite),
    .io_memToReg(CtrlDecode_io_memToReg),
    .io_aluOp(CtrlDecode_io_aluOp),
    .io_oprA(CtrlDecode_io_oprA),
    .io_oprB(CtrlDecode_io_oprB),
    .io_extendSel(CtrlDecode_io_extendSel)
  );
  assign io_memWrite = CtrlDecode_io_memWrite; // @[Control.scala 29:15]
  assign io_memRead = CtrlDecode_io_memRead; // @[Control.scala 31:14]
  assign io_regWrite = CtrlDecode_io_regWrite; // @[Control.scala 32:15]
  assign io_memToReg = CtrlDecode_io_memToReg; // @[Control.scala 33:15]
  assign io_aluOp = CtrlDecode_io_aluOp; // @[Control.scala 34:12]
  assign io_oprA = CtrlDecode_io_oprA; // @[Control.scala 35:11]
  assign io_oprB = CtrlDecode_io_oprB; // @[Control.scala 36:11]
  assign io_extendSel = CtrlDecode_io_extendSel; // @[Control.scala 37:16]
  assign typeDecode_io_opcode = io_opcode; // @[Control.scala 20:24]
  assign CtrlDecode_io_r = typeDecode_io_r; // @[Control.scala 21:19]
  assign CtrlDecode_io_load = typeDecode_io_load; // @[Control.scala 22:22]
  assign CtrlDecode_io_store = typeDecode_io_store; // @[Control.scala 23:23]
  assign CtrlDecode_io_br = typeDecode_io_branch; // @[Control.scala 24:20]
  assign CtrlDecode_io_i = typeDecode_io_i; // @[Control.scala 25:19]
  assign CtrlDecode_io_jal = typeDecode_io_jal; // @[Control.scala 26:21]
  assign CtrlDecode_io_jalr = typeDecode_io_jalr; // @[Control.scala 27:22]
  assign CtrlDecode_io_lui = typeDecode_io_lui; // @[Control.scala 28:21]
endmodule
module immGen(
  input  [31:0] io_ins,
  output [31:0] io_S,
  output [31:0] io_i,
  output [31:0] io_u
);
  wire  imm31; // @[immGen.scala 15:21]
  wire [5:0] imm30; // @[immGen.scala 16:21]
  wire [3:0] imm24; // @[immGen.scala 17:21]
  wire  imm20; // @[immGen.scala 18:21]
  wire [7:0] imm19; // @[immGen.scala 19:21]
  wire [3:0] imm11; // @[immGen.scala 20:21]
  wire  imm7; // @[immGen.scala 21:20]
  wire [19:0] _T_22; // @[Bitwise.scala 72:12]
  wire [31:0] _T_26; // @[Cat.scala 30:58]
  wire [31:0] _T_35; // @[Cat.scala 30:58]
  wire [19:0] _T_53; // @[Cat.scala 30:58]
  wire [34:0] _GEN_0; // @[immGen.scala 26:47]
  wire [34:0] _T_55; // @[immGen.scala 26:47]
  wire [34:0] _T_56; // @[immGen.scala 26:56]
  wire [31:0] _GEN_1; // @[immGen.scala 26:8]
  assign imm31 = io_ins[31]; // @[immGen.scala 15:21]
  assign imm30 = io_ins[30:25]; // @[immGen.scala 16:21]
  assign imm24 = io_ins[24:21]; // @[immGen.scala 17:21]
  assign imm20 = io_ins[20]; // @[immGen.scala 18:21]
  assign imm19 = io_ins[19:12]; // @[immGen.scala 19:21]
  assign imm11 = io_ins[11:8]; // @[immGen.scala 20:21]
  assign imm7 = io_ins[7]; // @[immGen.scala 21:20]
  assign _T_22 = imm31 ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  assign _T_26 = {_T_22,imm31,imm30,imm11,imm7}; // @[Cat.scala 30:58]
  assign _T_35 = {_T_22,imm31,imm30,imm24,imm20}; // @[Cat.scala 30:58]
  assign _T_53 = {imm31,imm30,imm24,imm20,imm19}; // @[Cat.scala 30:58]
  assign _GEN_0 = {{15'd0}, _T_53}; // @[immGen.scala 26:47]
  assign _T_55 = _GEN_0 << 4'hc; // @[immGen.scala 26:47]
  assign _T_56 = $signed(_T_55); // @[immGen.scala 26:56]
  assign io_S = $signed(_T_26); // @[immGen.scala 23:8]
  assign io_i = $signed(_T_35); // @[immGen.scala 24:8]
  assign _GEN_1 = _T_56[31:0]; // @[immGen.scala 26:8]
  assign io_u = $signed(_GEN_1); // @[immGen.scala 26:8]
endmodule
module AluControl(
  input  [2:0] io_ALUop,
  input  [2:0] io_func3,
  input        io_func7,
  output [4:0] io_out
);
  wire  _T_14; // @[AluControl.scala 11:17]
  wire [4:0] _T_17; // @[Cat.scala 30:58]
  wire  _T_19; // @[AluControl.scala 13:23]
  wire  _T_22; // @[AluControl.scala 15:23]
  wire  _T_25; // @[AluControl.scala 17:23]
  wire  _T_27; // @[AluControl.scala 19:19]
  wire [3:0] _T_32; // @[Cat.scala 30:58]
  wire [4:0] _GEN_0; // @[AluControl.scala 19:32]
  wire  _T_34; // @[AluControl.scala 24:23]
  wire  _T_37; // @[AluControl.scala 26:23]
  wire  _T_39; // @[AluControl.scala 26:48]
  wire  _T_40; // @[AluControl.scala 26:36]
  wire [4:0] _T_42; // @[Cat.scala 30:58]
  wire [4:0] _GEN_2; // @[AluControl.scala 26:62]
  wire [4:0] _GEN_3; // @[AluControl.scala 24:36]
  wire [4:0] _GEN_4; // @[AluControl.scala 17:37]
  wire [4:0] _GEN_5; // @[AluControl.scala 15:36]
  wire [4:0] _GEN_6; // @[AluControl.scala 13:36]
  assign _T_14 = io_ALUop == 3'h0; // @[AluControl.scala 11:17]
  assign _T_17 = {1'h0,io_func7,io_func3}; // @[Cat.scala 30:58]
  assign _T_19 = io_ALUop == 3'h3; // @[AluControl.scala 13:23]
  assign _T_22 = io_ALUop == 3'h4; // @[AluControl.scala 15:23]
  assign _T_25 = io_ALUop == 3'h1; // @[AluControl.scala 17:23]
  assign _T_27 = io_func3 == 3'h5; // @[AluControl.scala 19:19]
  assign _T_32 = {1'h0,io_func3}; // @[Cat.scala 30:58]
  assign _GEN_0 = _T_27 ? _T_17 : {{1'd0}, _T_32}; // @[AluControl.scala 19:32]
  assign _T_34 = io_ALUop == 3'h5; // @[AluControl.scala 24:23]
  assign _T_37 = io_ALUop == 3'h2; // @[AluControl.scala 26:23]
  assign _T_39 = io_func3 == 3'h0; // @[AluControl.scala 26:48]
  assign _T_40 = _T_37 & _T_39; // @[AluControl.scala 26:36]
  assign _T_42 = {2'h2,io_func3}; // @[Cat.scala 30:58]
  assign _GEN_2 = _T_40 ? _T_42 : 5'h0; // @[AluControl.scala 26:62]
  assign _GEN_3 = _T_34 ? 5'h0 : _GEN_2; // @[AluControl.scala 24:36]
  assign _GEN_4 = _T_25 ? _GEN_0 : _GEN_3; // @[AluControl.scala 17:37]
  assign _GEN_5 = _T_22 ? 5'h0 : _GEN_4; // @[AluControl.scala 15:36]
  assign _GEN_6 = _T_19 ? 5'h1f : _GEN_5; // @[AluControl.scala 13:36]
  assign io_out = _T_14 ? _T_17 : _GEN_6; // @[AluControl.scala 12:12 AluControl.scala 14:12 AluControl.scala 16:12 AluControl.scala 20:14 AluControl.scala 22:14 AluControl.scala 25:12 AluControl.scala 27:12 AluControl.scala 29:12]
endmodule
module Alu(
  input  [31:0] io_a,
  input  [31:0] io_b,
  input  [4:0]  io_aluControl,
  output        io_branch,
  output [31:0] io_aluOut
);
  wire  _T_16; // @[Alu.scala 11:22]
  wire [32:0] _T_17; // @[Alu.scala 12:24]
  wire [31:0] _T_18; // @[Alu.scala 12:24]
  wire [31:0] _T_19; // @[Alu.scala 12:24]
  wire  _T_21; // @[Alu.scala 13:28]
  wire [4:0] _T_22; // @[Alu.scala 14:30]
  wire [62:0] _GEN_24; // @[Alu.scala 15:23]
  wire [62:0] _T_23; // @[Alu.scala 15:23]
  wire  _T_25; // @[Alu.scala 16:28]
  wire  _T_26; // @[Alu.scala 17:15]
  wire [1:0] _GEN_0; // @[Alu.scala 17:22]
  wire  _T_30; // @[Alu.scala 22:28]
  wire [31:0] _T_31; // @[Alu.scala 23:23]
  wire [31:0] _T_32; // @[Alu.scala 23:23]
  wire  _T_34; // @[Alu.scala 24:28]
  wire  _T_36; // @[Alu.scala 24:60]
  wire  _T_37; // @[Alu.scala 24:43]
  wire [31:0] _T_38; // @[Alu.scala 25:15]
  wire [31:0] _T_39; // @[Alu.scala 25:29]
  wire  _T_40; // @[Alu.scala 25:22]
  wire [1:0] _GEN_1; // @[Alu.scala 25:36]
  wire  _T_44; // @[Alu.scala 30:28]
  wire [31:0] _T_46; // @[Alu.scala 32:23]
  wire  _T_48; // @[Alu.scala 33:28]
  wire [31:0] _T_49; // @[Alu.scala 34:23]
  wire [31:0] _T_50; // @[Alu.scala 34:23]
  wire  _T_52; // @[Alu.scala 35:28]
  wire [31:0] _T_53; // @[Alu.scala 36:23]
  wire [31:0] _T_54; // @[Alu.scala 36:23]
  wire  _T_56; // @[Alu.scala 37:28]
  wire [32:0] _T_57; // @[Alu.scala 38:23]
  wire [31:0] _T_58; // @[Alu.scala 38:23]
  wire [31:0] _T_59; // @[Alu.scala 38:23]
  wire  _T_61; // @[Alu.scala 39:28]
  wire  _T_65; // @[Alu.scala 42:28]
  wire  _T_66; // @[Alu.scala 43:15]
  wire [1:0] _GEN_2; // @[Alu.scala 43:24]
  wire  _T_70; // @[Alu.scala 48:28]
  wire  _T_71; // @[Alu.scala 49:15]
  wire [1:0] _GEN_3; // @[Alu.scala 49:24]
  wire  _T_75; // @[Alu.scala 54:28]
  wire  _T_80; // @[Alu.scala 60:28]
  wire  _T_81; // @[Alu.scala 61:15]
  wire [1:0] _GEN_5; // @[Alu.scala 61:22]
  wire  _T_85; // @[Alu.scala 66:28]
  wire  _T_86; // @[Alu.scala 67:15]
  wire [1:0] _GEN_6; // @[Alu.scala 67:23]
  wire [31:0] _GEN_8; // @[Alu.scala 66:43]
  wire [31:0] _GEN_9; // @[Alu.scala 60:43]
  wire [31:0] _GEN_10; // @[Alu.scala 54:43]
  wire [31:0] _GEN_11; // @[Alu.scala 48:43]
  wire [31:0] _GEN_12; // @[Alu.scala 42:43]
  wire [31:0] _GEN_13; // @[Alu.scala 39:43]
  wire [31:0] _GEN_14; // @[Alu.scala 37:43]
  wire [31:0] _GEN_15; // @[Alu.scala 35:43]
  wire [31:0] _GEN_16; // @[Alu.scala 33:43]
  wire [31:0] _GEN_17; // @[Alu.scala 30:43]
  wire [31:0] _GEN_18; // @[Alu.scala 24:75]
  wire [31:0] _GEN_19; // @[Alu.scala 22:43]
  wire [31:0] _GEN_20; // @[Alu.scala 16:43]
  wire [62:0] _GEN_21; // @[Alu.scala 13:43]
  wire [62:0] _GEN_22; // @[Alu.scala 11:37]
  wire  _T_92; // @[Alu.scala 78:18]
  wire [1:0] _T_93; // @[Alu.scala 78:42]
  wire  _T_95; // @[Alu.scala 78:48]
  wire [31:0] _GEN_25; // @[Alu.scala 12:15 Alu.scala 15:15 Alu.scala 18:17 Alu.scala 20:17 Alu.scala 23:15 Alu.scala 26:17 Alu.scala 28:17 Alu.scala 32:15 Alu.scala 34:15 Alu.scala 36:15 Alu.scala 38:15 Alu.scala 41:15 Alu.scala 44:17 Alu.scala 46:17 Alu.scala 50:17 Alu.scala 52:17 Alu.scala 56:17 Alu.scala 58:17 Alu.scala 62:17 Alu.scala 64:17 Alu.scala 68:17 Alu.scala 70:17 Alu.scala 73:15]
  assign _T_16 = io_aluControl == 5'h0; // @[Alu.scala 11:22]
  assign _T_17 = $signed(io_a) + $signed(io_b); // @[Alu.scala 12:24]
  assign _T_18 = $signed(io_a) + $signed(io_b); // @[Alu.scala 12:24]
  assign _T_19 = $signed(_T_18); // @[Alu.scala 12:24]
  assign _T_21 = io_aluControl == 5'h1; // @[Alu.scala 13:28]
  assign _T_22 = io_b[4:0]; // @[Alu.scala 14:30]
  assign _GEN_24 = {{31{io_a[31]}},io_a}; // @[Alu.scala 15:23]
  assign _T_23 = $signed(_GEN_24) << _T_22; // @[Alu.scala 15:23]
  assign _T_25 = io_aluControl == 5'h2; // @[Alu.scala 16:28]
  assign _T_26 = $signed(io_a) < $signed(io_b); // @[Alu.scala 17:15]
  assign _GEN_0 = _T_26 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 17:22]
  assign _T_30 = io_aluControl == 5'h4; // @[Alu.scala 22:28]
  assign _T_31 = $signed(io_a) ^ $signed(io_b); // @[Alu.scala 23:23]
  assign _T_32 = $signed(_T_31); // @[Alu.scala 23:23]
  assign _T_34 = io_aluControl == 5'h3; // @[Alu.scala 24:28]
  assign _T_36 = io_aluControl == 5'h16; // @[Alu.scala 24:60]
  assign _T_37 = _T_34 | _T_36; // @[Alu.scala 24:43]
  assign _T_38 = $unsigned(io_a); // @[Alu.scala 25:15]
  assign _T_39 = $unsigned(io_b); // @[Alu.scala 25:29]
  assign _T_40 = _T_38 < _T_39; // @[Alu.scala 25:22]
  assign _GEN_1 = _T_40 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 25:36]
  assign _T_44 = io_aluControl == 5'h5; // @[Alu.scala 30:28]
  assign _T_46 = $signed(io_a) >>> _T_22; // @[Alu.scala 32:23]
  assign _T_48 = io_aluControl == 5'h6; // @[Alu.scala 33:28]
  assign _T_49 = $signed(io_a) | $signed(io_b); // @[Alu.scala 34:23]
  assign _T_50 = $signed(_T_49); // @[Alu.scala 34:23]
  assign _T_52 = io_aluControl == 5'h7; // @[Alu.scala 35:28]
  assign _T_53 = $signed(io_a) & $signed(io_b); // @[Alu.scala 36:23]
  assign _T_54 = $signed(_T_53); // @[Alu.scala 36:23]
  assign _T_56 = io_aluControl == 5'h8; // @[Alu.scala 37:28]
  assign _T_57 = $signed(io_a) - $signed(io_b); // @[Alu.scala 38:23]
  assign _T_58 = $signed(io_a) - $signed(io_b); // @[Alu.scala 38:23]
  assign _T_59 = $signed(_T_58); // @[Alu.scala 38:23]
  assign _T_61 = io_aluControl == 5'hd; // @[Alu.scala 39:28]
  assign _T_65 = io_aluControl == 5'h10; // @[Alu.scala 42:28]
  assign _T_66 = $signed(io_a) == $signed(io_b); // @[Alu.scala 43:15]
  assign _GEN_2 = _T_66 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 43:24]
  assign _T_70 = io_aluControl == 5'h11; // @[Alu.scala 48:28]
  assign _T_71 = $signed(io_a) != $signed(io_b); // @[Alu.scala 49:15]
  assign _GEN_3 = _T_71 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 49:24]
  assign _T_75 = io_aluControl == 5'h14; // @[Alu.scala 54:28]
  assign _T_80 = io_aluControl == 5'h15; // @[Alu.scala 60:28]
  assign _T_81 = $signed(io_a) > $signed(io_b); // @[Alu.scala 61:15]
  assign _GEN_5 = _T_81 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 61:22]
  assign _T_85 = io_aluControl == 5'h17; // @[Alu.scala 66:28]
  assign _T_86 = $signed(io_a) >= $signed(io_b); // @[Alu.scala 67:15]
  assign _GEN_6 = _T_86 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 67:23]
  assign _GEN_8 = _T_85 ? $signed({{30{_GEN_6[1]}},_GEN_6}) : $signed(io_a); // @[Alu.scala 66:43]
  assign _GEN_9 = _T_80 ? $signed({{30{_GEN_5[1]}},_GEN_5}) : $signed(_GEN_8); // @[Alu.scala 60:43]
  assign _GEN_10 = _T_75 ? $signed({{30{_GEN_0[1]}},_GEN_0}) : $signed(_GEN_9); // @[Alu.scala 54:43]
  assign _GEN_11 = _T_70 ? $signed({{30{_GEN_3[1]}},_GEN_3}) : $signed(_GEN_10); // @[Alu.scala 48:43]
  assign _GEN_12 = _T_65 ? $signed({{30{_GEN_2[1]}},_GEN_2}) : $signed(_GEN_11); // @[Alu.scala 42:43]
  assign _GEN_13 = _T_61 ? $signed(_T_46) : $signed(_GEN_12); // @[Alu.scala 39:43]
  assign _GEN_14 = _T_56 ? $signed(_T_59) : $signed(_GEN_13); // @[Alu.scala 37:43]
  assign _GEN_15 = _T_52 ? $signed(_T_54) : $signed(_GEN_14); // @[Alu.scala 35:43]
  assign _GEN_16 = _T_48 ? $signed(_T_50) : $signed(_GEN_15); // @[Alu.scala 33:43]
  assign _GEN_17 = _T_44 ? $signed(_T_46) : $signed(_GEN_16); // @[Alu.scala 30:43]
  assign _GEN_18 = _T_37 ? $signed({{30{_GEN_1[1]}},_GEN_1}) : $signed(_GEN_17); // @[Alu.scala 24:75]
  assign _GEN_19 = _T_30 ? $signed(_T_32) : $signed(_GEN_18); // @[Alu.scala 22:43]
  assign _GEN_20 = _T_25 ? $signed({{30{_GEN_0[1]}},_GEN_0}) : $signed(_GEN_19); // @[Alu.scala 16:43]
  assign _GEN_21 = _T_21 ? $signed(_T_23) : $signed({{31{_GEN_20[31]}},_GEN_20}); // @[Alu.scala 13:43]
  assign _GEN_22 = _T_16 ? $signed({{31{_T_19[31]}},_T_19}) : $signed(_GEN_21); // @[Alu.scala 11:37]
  assign _T_92 = $signed(io_aluOut) == $signed(32'sh1); // @[Alu.scala 78:18]
  assign _T_93 = io_aluControl[4:3]; // @[Alu.scala 78:42]
  assign _T_95 = _T_93 == 2'h2; // @[Alu.scala 78:48]
  assign io_branch = _T_92 & _T_95; // @[Alu.scala 79:17 Alu.scala 81:15]
  assign _GEN_25 = _GEN_22[31:0]; // @[Alu.scala 12:15 Alu.scala 15:15 Alu.scala 18:17 Alu.scala 20:17 Alu.scala 23:15 Alu.scala 26:17 Alu.scala 28:17 Alu.scala 32:15 Alu.scala 34:15 Alu.scala 36:15 Alu.scala 38:15 Alu.scala 41:15 Alu.scala 44:17 Alu.scala 46:17 Alu.scala 50:17 Alu.scala 52:17 Alu.scala 56:17 Alu.scala 58:17 Alu.scala 62:17 Alu.scala 64:17 Alu.scala 68:17 Alu.scala 70:17 Alu.scala 73:15]
  assign io_aluOut = $signed(_GEN_25); // @[Alu.scala 12:15 Alu.scala 15:15 Alu.scala 18:17 Alu.scala 20:17 Alu.scala 23:15 Alu.scala 26:17 Alu.scala 28:17 Alu.scala 32:15 Alu.scala 34:15 Alu.scala 36:15 Alu.scala 38:15 Alu.scala 41:15 Alu.scala 44:17 Alu.scala 46:17 Alu.scala 50:17 Alu.scala 52:17 Alu.scala 56:17 Alu.scala 58:17 Alu.scala 62:17 Alu.scala 64:17 Alu.scala 68:17 Alu.scala 70:17 Alu.scala 73:15]
endmodule
module registerFile(
  input         clock,
  input         io_regWrite,
  input  [4:0]  io_rs1_sel,
  input  [4:0]  io_rs2_sel,
  input  [4:0]  io_rd_sel,
  input  [31:0] io_writeData,
  output [31:0] io_rs1,
  output [31:0] io_rs2
);
  reg [31:0] registers_0; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_0;
  reg [31:0] registers_1; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_1;
  reg [31:0] registers_2; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_2;
  reg [31:0] registers_3; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_3;
  reg [31:0] registers_4; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_4;
  reg [31:0] registers_5; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_5;
  reg [31:0] registers_6; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_6;
  reg [31:0] registers_7; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_7;
  reg [31:0] registers_8; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_8;
  reg [31:0] registers_9; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_9;
  reg [31:0] registers_10; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_10;
  reg [31:0] registers_11; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_11;
  reg [31:0] registers_12; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_12;
  reg [31:0] registers_13; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_13;
  reg [31:0] registers_14; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_14;
  reg [31:0] registers_15; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_15;
  reg [31:0] registers_16; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_16;
  reg [31:0] registers_17; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_17;
  reg [31:0] registers_18; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_18;
  reg [31:0] registers_19; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_19;
  reg [31:0] registers_20; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_20;
  reg [31:0] registers_21; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_21;
  reg [31:0] registers_22; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_22;
  reg [31:0] registers_23; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_23;
  reg [31:0] registers_24; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_24;
  reg [31:0] registers_25; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_25;
  reg [31:0] registers_26; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_26;
  reg [31:0] registers_27; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_27;
  reg [31:0] registers_28; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_28;
  reg [31:0] registers_29; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_29;
  reg [31:0] registers_30; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_30;
  reg [31:0] registers_31; // @[registerFile.scala 14:22]
  reg [31:0] _RAND_31;
  wire [31:0] _GEN_1; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_2; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_3; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_4; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_5; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_6; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_7; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_8; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_9; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_10; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_11; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_12; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_13; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_14; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_15; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_16; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_17; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_18; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_19; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_20; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_21; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_22; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_23; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_24; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_25; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_26; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_27; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_28; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_29; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_30; // @[registerFile.scala 16:10]
  wire [31:0] _GEN_33; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_34; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_35; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_36; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_37; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_38; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_39; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_40; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_41; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_42; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_43; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_44; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_45; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_46; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_47; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_48; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_49; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_50; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_51; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_52; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_53; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_54; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_55; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_56; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_57; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_58; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_59; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_60; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_61; // @[registerFile.scala 17:10]
  wire [31:0] _GEN_62; // @[registerFile.scala 17:10]
  wire  _T_62; // @[registerFile.scala 19:20]
  wire [31:0] _GEN_64; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_65; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_66; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_67; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_68; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_69; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_70; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_71; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_72; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_73; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_74; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_75; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_76; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_77; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_78; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_79; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_80; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_81; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_82; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_83; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_84; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_85; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_86; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_87; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_88; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_89; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_90; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_91; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_92; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_93; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_94; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_95; // @[registerFile.scala 22:28]
  wire [31:0] _GEN_96; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_97; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_98; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_99; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_100; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_101; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_102; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_103; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_104; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_105; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_106; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_107; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_108; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_109; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_110; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_111; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_112; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_113; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_114; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_115; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_116; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_117; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_118; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_119; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_120; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_121; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_122; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_123; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_124; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_125; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_126; // @[registerFile.scala 19:35]
  wire [31:0] _GEN_127; // @[registerFile.scala 19:35]
  assign _GEN_1 = 5'h1 == io_rs1_sel ? $signed(registers_1) : $signed(registers_0); // @[registerFile.scala 16:10]
  assign _GEN_2 = 5'h2 == io_rs1_sel ? $signed(registers_2) : $signed(_GEN_1); // @[registerFile.scala 16:10]
  assign _GEN_3 = 5'h3 == io_rs1_sel ? $signed(registers_3) : $signed(_GEN_2); // @[registerFile.scala 16:10]
  assign _GEN_4 = 5'h4 == io_rs1_sel ? $signed(registers_4) : $signed(_GEN_3); // @[registerFile.scala 16:10]
  assign _GEN_5 = 5'h5 == io_rs1_sel ? $signed(registers_5) : $signed(_GEN_4); // @[registerFile.scala 16:10]
  assign _GEN_6 = 5'h6 == io_rs1_sel ? $signed(registers_6) : $signed(_GEN_5); // @[registerFile.scala 16:10]
  assign _GEN_7 = 5'h7 == io_rs1_sel ? $signed(registers_7) : $signed(_GEN_6); // @[registerFile.scala 16:10]
  assign _GEN_8 = 5'h8 == io_rs1_sel ? $signed(registers_8) : $signed(_GEN_7); // @[registerFile.scala 16:10]
  assign _GEN_9 = 5'h9 == io_rs1_sel ? $signed(registers_9) : $signed(_GEN_8); // @[registerFile.scala 16:10]
  assign _GEN_10 = 5'ha == io_rs1_sel ? $signed(registers_10) : $signed(_GEN_9); // @[registerFile.scala 16:10]
  assign _GEN_11 = 5'hb == io_rs1_sel ? $signed(registers_11) : $signed(_GEN_10); // @[registerFile.scala 16:10]
  assign _GEN_12 = 5'hc == io_rs1_sel ? $signed(registers_12) : $signed(_GEN_11); // @[registerFile.scala 16:10]
  assign _GEN_13 = 5'hd == io_rs1_sel ? $signed(registers_13) : $signed(_GEN_12); // @[registerFile.scala 16:10]
  assign _GEN_14 = 5'he == io_rs1_sel ? $signed(registers_14) : $signed(_GEN_13); // @[registerFile.scala 16:10]
  assign _GEN_15 = 5'hf == io_rs1_sel ? $signed(registers_15) : $signed(_GEN_14); // @[registerFile.scala 16:10]
  assign _GEN_16 = 5'h10 == io_rs1_sel ? $signed(registers_16) : $signed(_GEN_15); // @[registerFile.scala 16:10]
  assign _GEN_17 = 5'h11 == io_rs1_sel ? $signed(registers_17) : $signed(_GEN_16); // @[registerFile.scala 16:10]
  assign _GEN_18 = 5'h12 == io_rs1_sel ? $signed(registers_18) : $signed(_GEN_17); // @[registerFile.scala 16:10]
  assign _GEN_19 = 5'h13 == io_rs1_sel ? $signed(registers_19) : $signed(_GEN_18); // @[registerFile.scala 16:10]
  assign _GEN_20 = 5'h14 == io_rs1_sel ? $signed(registers_20) : $signed(_GEN_19); // @[registerFile.scala 16:10]
  assign _GEN_21 = 5'h15 == io_rs1_sel ? $signed(registers_21) : $signed(_GEN_20); // @[registerFile.scala 16:10]
  assign _GEN_22 = 5'h16 == io_rs1_sel ? $signed(registers_22) : $signed(_GEN_21); // @[registerFile.scala 16:10]
  assign _GEN_23 = 5'h17 == io_rs1_sel ? $signed(registers_23) : $signed(_GEN_22); // @[registerFile.scala 16:10]
  assign _GEN_24 = 5'h18 == io_rs1_sel ? $signed(registers_24) : $signed(_GEN_23); // @[registerFile.scala 16:10]
  assign _GEN_25 = 5'h19 == io_rs1_sel ? $signed(registers_25) : $signed(_GEN_24); // @[registerFile.scala 16:10]
  assign _GEN_26 = 5'h1a == io_rs1_sel ? $signed(registers_26) : $signed(_GEN_25); // @[registerFile.scala 16:10]
  assign _GEN_27 = 5'h1b == io_rs1_sel ? $signed(registers_27) : $signed(_GEN_26); // @[registerFile.scala 16:10]
  assign _GEN_28 = 5'h1c == io_rs1_sel ? $signed(registers_28) : $signed(_GEN_27); // @[registerFile.scala 16:10]
  assign _GEN_29 = 5'h1d == io_rs1_sel ? $signed(registers_29) : $signed(_GEN_28); // @[registerFile.scala 16:10]
  assign _GEN_30 = 5'h1e == io_rs1_sel ? $signed(registers_30) : $signed(_GEN_29); // @[registerFile.scala 16:10]
  assign _GEN_33 = 5'h1 == io_rs2_sel ? $signed(registers_1) : $signed(registers_0); // @[registerFile.scala 17:10]
  assign _GEN_34 = 5'h2 == io_rs2_sel ? $signed(registers_2) : $signed(_GEN_33); // @[registerFile.scala 17:10]
  assign _GEN_35 = 5'h3 == io_rs2_sel ? $signed(registers_3) : $signed(_GEN_34); // @[registerFile.scala 17:10]
  assign _GEN_36 = 5'h4 == io_rs2_sel ? $signed(registers_4) : $signed(_GEN_35); // @[registerFile.scala 17:10]
  assign _GEN_37 = 5'h5 == io_rs2_sel ? $signed(registers_5) : $signed(_GEN_36); // @[registerFile.scala 17:10]
  assign _GEN_38 = 5'h6 == io_rs2_sel ? $signed(registers_6) : $signed(_GEN_37); // @[registerFile.scala 17:10]
  assign _GEN_39 = 5'h7 == io_rs2_sel ? $signed(registers_7) : $signed(_GEN_38); // @[registerFile.scala 17:10]
  assign _GEN_40 = 5'h8 == io_rs2_sel ? $signed(registers_8) : $signed(_GEN_39); // @[registerFile.scala 17:10]
  assign _GEN_41 = 5'h9 == io_rs2_sel ? $signed(registers_9) : $signed(_GEN_40); // @[registerFile.scala 17:10]
  assign _GEN_42 = 5'ha == io_rs2_sel ? $signed(registers_10) : $signed(_GEN_41); // @[registerFile.scala 17:10]
  assign _GEN_43 = 5'hb == io_rs2_sel ? $signed(registers_11) : $signed(_GEN_42); // @[registerFile.scala 17:10]
  assign _GEN_44 = 5'hc == io_rs2_sel ? $signed(registers_12) : $signed(_GEN_43); // @[registerFile.scala 17:10]
  assign _GEN_45 = 5'hd == io_rs2_sel ? $signed(registers_13) : $signed(_GEN_44); // @[registerFile.scala 17:10]
  assign _GEN_46 = 5'he == io_rs2_sel ? $signed(registers_14) : $signed(_GEN_45); // @[registerFile.scala 17:10]
  assign _GEN_47 = 5'hf == io_rs2_sel ? $signed(registers_15) : $signed(_GEN_46); // @[registerFile.scala 17:10]
  assign _GEN_48 = 5'h10 == io_rs2_sel ? $signed(registers_16) : $signed(_GEN_47); // @[registerFile.scala 17:10]
  assign _GEN_49 = 5'h11 == io_rs2_sel ? $signed(registers_17) : $signed(_GEN_48); // @[registerFile.scala 17:10]
  assign _GEN_50 = 5'h12 == io_rs2_sel ? $signed(registers_18) : $signed(_GEN_49); // @[registerFile.scala 17:10]
  assign _GEN_51 = 5'h13 == io_rs2_sel ? $signed(registers_19) : $signed(_GEN_50); // @[registerFile.scala 17:10]
  assign _GEN_52 = 5'h14 == io_rs2_sel ? $signed(registers_20) : $signed(_GEN_51); // @[registerFile.scala 17:10]
  assign _GEN_53 = 5'h15 == io_rs2_sel ? $signed(registers_21) : $signed(_GEN_52); // @[registerFile.scala 17:10]
  assign _GEN_54 = 5'h16 == io_rs2_sel ? $signed(registers_22) : $signed(_GEN_53); // @[registerFile.scala 17:10]
  assign _GEN_55 = 5'h17 == io_rs2_sel ? $signed(registers_23) : $signed(_GEN_54); // @[registerFile.scala 17:10]
  assign _GEN_56 = 5'h18 == io_rs2_sel ? $signed(registers_24) : $signed(_GEN_55); // @[registerFile.scala 17:10]
  assign _GEN_57 = 5'h19 == io_rs2_sel ? $signed(registers_25) : $signed(_GEN_56); // @[registerFile.scala 17:10]
  assign _GEN_58 = 5'h1a == io_rs2_sel ? $signed(registers_26) : $signed(_GEN_57); // @[registerFile.scala 17:10]
  assign _GEN_59 = 5'h1b == io_rs2_sel ? $signed(registers_27) : $signed(_GEN_58); // @[registerFile.scala 17:10]
  assign _GEN_60 = 5'h1c == io_rs2_sel ? $signed(registers_28) : $signed(_GEN_59); // @[registerFile.scala 17:10]
  assign _GEN_61 = 5'h1d == io_rs2_sel ? $signed(registers_29) : $signed(_GEN_60); // @[registerFile.scala 17:10]
  assign _GEN_62 = 5'h1e == io_rs2_sel ? $signed(registers_30) : $signed(_GEN_61); // @[registerFile.scala 17:10]
  assign _T_62 = io_rd_sel == 5'h0; // @[registerFile.scala 19:20]
  assign _GEN_64 = 5'h0 == io_rd_sel ? $signed(io_writeData) : $signed(32'sh0); // @[registerFile.scala 22:28]
  assign _GEN_65 = 5'h1 == io_rd_sel ? $signed(io_writeData) : $signed(registers_1); // @[registerFile.scala 22:28]
  assign _GEN_66 = 5'h2 == io_rd_sel ? $signed(io_writeData) : $signed(registers_2); // @[registerFile.scala 22:28]
  assign _GEN_67 = 5'h3 == io_rd_sel ? $signed(io_writeData) : $signed(registers_3); // @[registerFile.scala 22:28]
  assign _GEN_68 = 5'h4 == io_rd_sel ? $signed(io_writeData) : $signed(registers_4); // @[registerFile.scala 22:28]
  assign _GEN_69 = 5'h5 == io_rd_sel ? $signed(io_writeData) : $signed(registers_5); // @[registerFile.scala 22:28]
  assign _GEN_70 = 5'h6 == io_rd_sel ? $signed(io_writeData) : $signed(registers_6); // @[registerFile.scala 22:28]
  assign _GEN_71 = 5'h7 == io_rd_sel ? $signed(io_writeData) : $signed(registers_7); // @[registerFile.scala 22:28]
  assign _GEN_72 = 5'h8 == io_rd_sel ? $signed(io_writeData) : $signed(registers_8); // @[registerFile.scala 22:28]
  assign _GEN_73 = 5'h9 == io_rd_sel ? $signed(io_writeData) : $signed(registers_9); // @[registerFile.scala 22:28]
  assign _GEN_74 = 5'ha == io_rd_sel ? $signed(io_writeData) : $signed(registers_10); // @[registerFile.scala 22:28]
  assign _GEN_75 = 5'hb == io_rd_sel ? $signed(io_writeData) : $signed(registers_11); // @[registerFile.scala 22:28]
  assign _GEN_76 = 5'hc == io_rd_sel ? $signed(io_writeData) : $signed(registers_12); // @[registerFile.scala 22:28]
  assign _GEN_77 = 5'hd == io_rd_sel ? $signed(io_writeData) : $signed(registers_13); // @[registerFile.scala 22:28]
  assign _GEN_78 = 5'he == io_rd_sel ? $signed(io_writeData) : $signed(registers_14); // @[registerFile.scala 22:28]
  assign _GEN_79 = 5'hf == io_rd_sel ? $signed(io_writeData) : $signed(registers_15); // @[registerFile.scala 22:28]
  assign _GEN_80 = 5'h10 == io_rd_sel ? $signed(io_writeData) : $signed(registers_16); // @[registerFile.scala 22:28]
  assign _GEN_81 = 5'h11 == io_rd_sel ? $signed(io_writeData) : $signed(registers_17); // @[registerFile.scala 22:28]
  assign _GEN_82 = 5'h12 == io_rd_sel ? $signed(io_writeData) : $signed(registers_18); // @[registerFile.scala 22:28]
  assign _GEN_83 = 5'h13 == io_rd_sel ? $signed(io_writeData) : $signed(registers_19); // @[registerFile.scala 22:28]
  assign _GEN_84 = 5'h14 == io_rd_sel ? $signed(io_writeData) : $signed(registers_20); // @[registerFile.scala 22:28]
  assign _GEN_85 = 5'h15 == io_rd_sel ? $signed(io_writeData) : $signed(registers_21); // @[registerFile.scala 22:28]
  assign _GEN_86 = 5'h16 == io_rd_sel ? $signed(io_writeData) : $signed(registers_22); // @[registerFile.scala 22:28]
  assign _GEN_87 = 5'h17 == io_rd_sel ? $signed(io_writeData) : $signed(registers_23); // @[registerFile.scala 22:28]
  assign _GEN_88 = 5'h18 == io_rd_sel ? $signed(io_writeData) : $signed(registers_24); // @[registerFile.scala 22:28]
  assign _GEN_89 = 5'h19 == io_rd_sel ? $signed(io_writeData) : $signed(registers_25); // @[registerFile.scala 22:28]
  assign _GEN_90 = 5'h1a == io_rd_sel ? $signed(io_writeData) : $signed(registers_26); // @[registerFile.scala 22:28]
  assign _GEN_91 = 5'h1b == io_rd_sel ? $signed(io_writeData) : $signed(registers_27); // @[registerFile.scala 22:28]
  assign _GEN_92 = 5'h1c == io_rd_sel ? $signed(io_writeData) : $signed(registers_28); // @[registerFile.scala 22:28]
  assign _GEN_93 = 5'h1d == io_rd_sel ? $signed(io_writeData) : $signed(registers_29); // @[registerFile.scala 22:28]
  assign _GEN_94 = 5'h1e == io_rd_sel ? $signed(io_writeData) : $signed(registers_30); // @[registerFile.scala 22:28]
  assign _GEN_95 = 5'h1f == io_rd_sel ? $signed(io_writeData) : $signed(registers_31); // @[registerFile.scala 22:28]
  assign _GEN_96 = _T_62 ? $signed(32'sh0) : $signed(_GEN_64); // @[registerFile.scala 19:35]
  assign _GEN_97 = _T_62 ? $signed(registers_1) : $signed(_GEN_65); // @[registerFile.scala 19:35]
  assign _GEN_98 = _T_62 ? $signed(registers_2) : $signed(_GEN_66); // @[registerFile.scala 19:35]
  assign _GEN_99 = _T_62 ? $signed(registers_3) : $signed(_GEN_67); // @[registerFile.scala 19:35]
  assign _GEN_100 = _T_62 ? $signed(registers_4) : $signed(_GEN_68); // @[registerFile.scala 19:35]
  assign _GEN_101 = _T_62 ? $signed(registers_5) : $signed(_GEN_69); // @[registerFile.scala 19:35]
  assign _GEN_102 = _T_62 ? $signed(registers_6) : $signed(_GEN_70); // @[registerFile.scala 19:35]
  assign _GEN_103 = _T_62 ? $signed(registers_7) : $signed(_GEN_71); // @[registerFile.scala 19:35]
  assign _GEN_104 = _T_62 ? $signed(registers_8) : $signed(_GEN_72); // @[registerFile.scala 19:35]
  assign _GEN_105 = _T_62 ? $signed(registers_9) : $signed(_GEN_73); // @[registerFile.scala 19:35]
  assign _GEN_106 = _T_62 ? $signed(registers_10) : $signed(_GEN_74); // @[registerFile.scala 19:35]
  assign _GEN_107 = _T_62 ? $signed(registers_11) : $signed(_GEN_75); // @[registerFile.scala 19:35]
  assign _GEN_108 = _T_62 ? $signed(registers_12) : $signed(_GEN_76); // @[registerFile.scala 19:35]
  assign _GEN_109 = _T_62 ? $signed(registers_13) : $signed(_GEN_77); // @[registerFile.scala 19:35]
  assign _GEN_110 = _T_62 ? $signed(registers_14) : $signed(_GEN_78); // @[registerFile.scala 19:35]
  assign _GEN_111 = _T_62 ? $signed(registers_15) : $signed(_GEN_79); // @[registerFile.scala 19:35]
  assign _GEN_112 = _T_62 ? $signed(registers_16) : $signed(_GEN_80); // @[registerFile.scala 19:35]
  assign _GEN_113 = _T_62 ? $signed(registers_17) : $signed(_GEN_81); // @[registerFile.scala 19:35]
  assign _GEN_114 = _T_62 ? $signed(registers_18) : $signed(_GEN_82); // @[registerFile.scala 19:35]
  assign _GEN_115 = _T_62 ? $signed(registers_19) : $signed(_GEN_83); // @[registerFile.scala 19:35]
  assign _GEN_116 = _T_62 ? $signed(registers_20) : $signed(_GEN_84); // @[registerFile.scala 19:35]
  assign _GEN_117 = _T_62 ? $signed(registers_21) : $signed(_GEN_85); // @[registerFile.scala 19:35]
  assign _GEN_118 = _T_62 ? $signed(registers_22) : $signed(_GEN_86); // @[registerFile.scala 19:35]
  assign _GEN_119 = _T_62 ? $signed(registers_23) : $signed(_GEN_87); // @[registerFile.scala 19:35]
  assign _GEN_120 = _T_62 ? $signed(registers_24) : $signed(_GEN_88); // @[registerFile.scala 19:35]
  assign _GEN_121 = _T_62 ? $signed(registers_25) : $signed(_GEN_89); // @[registerFile.scala 19:35]
  assign _GEN_122 = _T_62 ? $signed(registers_26) : $signed(_GEN_90); // @[registerFile.scala 19:35]
  assign _GEN_123 = _T_62 ? $signed(registers_27) : $signed(_GEN_91); // @[registerFile.scala 19:35]
  assign _GEN_124 = _T_62 ? $signed(registers_28) : $signed(_GEN_92); // @[registerFile.scala 19:35]
  assign _GEN_125 = _T_62 ? $signed(registers_29) : $signed(_GEN_93); // @[registerFile.scala 19:35]
  assign _GEN_126 = _T_62 ? $signed(registers_30) : $signed(_GEN_94); // @[registerFile.scala 19:35]
  assign _GEN_127 = _T_62 ? $signed(registers_31) : $signed(_GEN_95); // @[registerFile.scala 19:35]
  assign io_rs1 = 5'h1f == io_rs1_sel ? $signed(registers_31) : $signed(_GEN_30); // @[registerFile.scala 16:10]
  assign io_rs2 = 5'h1f == io_rs2_sel ? $signed(registers_31) : $signed(_GEN_62); // @[registerFile.scala 17:10]
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
  registers_0 = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  registers_1 = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  registers_2 = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  registers_3 = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  registers_4 = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  registers_5 = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  registers_6 = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  registers_7 = _RAND_7[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  registers_8 = _RAND_8[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  registers_9 = _RAND_9[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  registers_10 = _RAND_10[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  registers_11 = _RAND_11[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  registers_12 = _RAND_12[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  registers_13 = _RAND_13[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  registers_14 = _RAND_14[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  registers_15 = _RAND_15[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  registers_16 = _RAND_16[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {1{`RANDOM}};
  registers_17 = _RAND_17[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_18 = {1{`RANDOM}};
  registers_18 = _RAND_18[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_19 = {1{`RANDOM}};
  registers_19 = _RAND_19[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_20 = {1{`RANDOM}};
  registers_20 = _RAND_20[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_21 = {1{`RANDOM}};
  registers_21 = _RAND_21[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_22 = {1{`RANDOM}};
  registers_22 = _RAND_22[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_23 = {1{`RANDOM}};
  registers_23 = _RAND_23[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_24 = {1{`RANDOM}};
  registers_24 = _RAND_24[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_25 = {1{`RANDOM}};
  registers_25 = _RAND_25[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_26 = {1{`RANDOM}};
  registers_26 = _RAND_26[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_27 = {1{`RANDOM}};
  registers_27 = _RAND_27[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_28 = {1{`RANDOM}};
  registers_28 = _RAND_28[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_29 = {1{`RANDOM}};
  registers_29 = _RAND_29[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_30 = {1{`RANDOM}};
  registers_30 = _RAND_30[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_31 = {1{`RANDOM}};
  registers_31 = _RAND_31[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (io_regWrite) begin
      if (_T_62) begin
        registers_0 <= 32'sh0;
      end else begin
        if (5'h0 == io_rd_sel) begin
          registers_0 <= io_writeData;
        end else begin
          registers_0 <= 32'sh0;
        end
      end
    end else begin
      registers_0 <= 32'sh0;
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h1 == io_rd_sel) begin
          registers_1 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h2 == io_rd_sel) begin
          registers_2 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h3 == io_rd_sel) begin
          registers_3 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h4 == io_rd_sel) begin
          registers_4 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h5 == io_rd_sel) begin
          registers_5 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h6 == io_rd_sel) begin
          registers_6 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h7 == io_rd_sel) begin
          registers_7 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h8 == io_rd_sel) begin
          registers_8 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h9 == io_rd_sel) begin
          registers_9 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'ha == io_rd_sel) begin
          registers_10 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'hb == io_rd_sel) begin
          registers_11 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'hc == io_rd_sel) begin
          registers_12 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'hd == io_rd_sel) begin
          registers_13 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'he == io_rd_sel) begin
          registers_14 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'hf == io_rd_sel) begin
          registers_15 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h10 == io_rd_sel) begin
          registers_16 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h11 == io_rd_sel) begin
          registers_17 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h12 == io_rd_sel) begin
          registers_18 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h13 == io_rd_sel) begin
          registers_19 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h14 == io_rd_sel) begin
          registers_20 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h15 == io_rd_sel) begin
          registers_21 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h16 == io_rd_sel) begin
          registers_22 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h17 == io_rd_sel) begin
          registers_23 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h18 == io_rd_sel) begin
          registers_24 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h19 == io_rd_sel) begin
          registers_25 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h1a == io_rd_sel) begin
          registers_26 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h1b == io_rd_sel) begin
          registers_27 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h1c == io_rd_sel) begin
          registers_28 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h1d == io_rd_sel) begin
          registers_29 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h1e == io_rd_sel) begin
          registers_30 <= io_writeData;
        end
      end
    end
    if (io_regWrite) begin
      if (!(_T_62)) begin
        if (5'h1f == io_rd_sel) begin
          registers_31 <= io_writeData;
        end
      end
    end
  end
endmodule
module InsMem(
  input         clock,
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
module DataMem(
  input         clock,
  input         io_load,
  input         io_store,
  input  [7:0]  io_addrr,
  input  [31:0] io_storedata,
  output [31:0] io_dataOut
);
  reg [31:0] mem [0:1023]; // @[DataMem.scala 12:16]
  reg [31:0] _RAND_0;
  wire [31:0] mem__T_19_data; // @[DataMem.scala 12:16]
  wire [9:0] mem__T_19_addr; // @[DataMem.scala 12:16]
  wire [31:0] mem__T_22_data; // @[DataMem.scala 12:16]
  wire [9:0] mem__T_22_addr; // @[DataMem.scala 12:16]
  wire  mem__T_22_mask; // @[DataMem.scala 12:16]
  wire  mem__T_22_en; // @[DataMem.scala 12:16]
  assign mem__T_19_addr = {{2'd0}, io_addrr};
  assign mem__T_19_data = mem[mem__T_19_addr]; // @[DataMem.scala 12:16]
  assign mem__T_22_data = io_storedata;
  assign mem__T_22_addr = {{2'd0}, io_addrr};
  assign mem__T_22_mask = 1'h1;
  assign mem__T_22_en = io_store;
  assign io_dataOut = mem__T_19_data; // @[DataMem.scala 14:16]
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
      mem[mem__T_22_addr] <= mem__T_22_data; // @[DataMem.scala 12:16]
    end
  end
endmodule
module IF_Pipeline(
  input         clock,
  input         reset,
  input  [31:0] io_pc_in,
  input  [31:0] io_pc4_in,
  input  [31:0] io_ins_in,
  output [31:0] io_pc_out,
  output [31:0] io_ins_out,
  output [31:0] io_pc4_out
);
  reg [31:0] reg_pc; // @[IF_Pipeline.scala 20:29]
  reg [31:0] _RAND_0;
  reg [31:0] reg_pc4; // @[IF_Pipeline.scala 21:30]
  reg [31:0] _RAND_1;
  reg [31:0] reg_ins; // @[IF_Pipeline.scala 22:30]
  reg [31:0] _RAND_2;
  assign io_pc_out = reg_pc; // @[IF_Pipeline.scala 28:19]
  assign io_ins_out = reg_ins; // @[IF_Pipeline.scala 30:20]
  assign io_pc4_out = reg_pc4; // @[IF_Pipeline.scala 29:20]
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
  reg_pc = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  reg_pc4 = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  reg_ins = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      reg_pc <= 32'h0;
    end else begin
      reg_pc <= io_pc_in;
    end
    if (reset) begin
      reg_pc4 <= 32'h0;
    end else begin
      reg_pc4 <= io_pc4_in;
    end
    if (reset) begin
      reg_ins <= 32'h0;
    end else begin
      reg_ins <= io_ins_in;
    end
  end
endmodule
module ID_Pipeline(
  input         clock,
  input         reset,
  input  [4:0]  io_rs1_sel_in,
  input  [4:0]  io_rs2_sel_in,
  input         io_memWrite_in,
  input         io_memRead_in,
  input         io_memToReg_in,
  input  [31:0] io_operandA_in,
  input  [31:0] io_operandB_in,
  input  [4:0]  io_rd_in,
  input  [31:0] io_strData_in,
  input  [4:0]  io_aluCtrl_in,
  input         io_regWrite_in,
  input  [1:0]  io_opr_A_sel_in,
  input         io_opr_B_sel_in,
  output [4:0]  io_rs1_sel_Out,
  output [4:0]  io_rs2_sel_Out,
  output        io_memWrite_out,
  output        io_memRead_out,
  output        io_memToReg_out,
  output [31:0] io_operandA_out,
  output [31:0] io_operandB_out,
  output [4:0]  io_rd_out,
  output [31:0] io_strData_out,
  output [4:0]  io_aluCtrl_out,
  output        io_regWrite_out,
  output [1:0]  io_opr_A_sel_Out,
  output        io_opr_B_sel_Out
);
  reg  reg_memWrite; // @[ID_Pipeline.scala 45:35]
  reg [31:0] _RAND_0;
  reg  reg_memRead; // @[ID_Pipeline.scala 46:34]
  reg [31:0] _RAND_1;
  reg  reg_memToReg; // @[ID_Pipeline.scala 47:35]
  reg [31:0] _RAND_2;
  reg [31:0] reg_operandA; // @[ID_Pipeline.scala 48:35]
  reg [31:0] _RAND_3;
  reg [31:0] reg_operandB; // @[ID_Pipeline.scala 49:35]
  reg [31:0] _RAND_4;
  reg [4:0] reg_rd; // @[ID_Pipeline.scala 50:29]
  reg [31:0] _RAND_5;
  reg [31:0] reg_strData; // @[ID_Pipeline.scala 51:34]
  reg [31:0] _RAND_6;
  reg [4:0] reg_aluCtrl; // @[ID_Pipeline.scala 52:34]
  reg [31:0] _RAND_7;
  reg  reg_regWrite; // @[ID_Pipeline.scala 53:35]
  reg [31:0] _RAND_8;
  reg [4:0] reg_rs1_sel; // @[ID_Pipeline.scala 56:34]
  reg [31:0] _RAND_9;
  reg [4:0] reg_rs2_sel; // @[ID_Pipeline.scala 57:34]
  reg [31:0] _RAND_10;
  reg [1:0] reg_opr_A; // @[ID_Pipeline.scala 58:32]
  reg [31:0] _RAND_11;
  reg  reg_opr_B; // @[ID_Pipeline.scala 59:32]
  reg [31:0] _RAND_12;
  assign io_rs1_sel_Out = reg_rs1_sel; // @[ID_Pipeline.scala 81:24]
  assign io_rs2_sel_Out = reg_rs2_sel; // @[ID_Pipeline.scala 82:24]
  assign io_memWrite_out = reg_memWrite; // @[ID_Pipeline.scala 83:25]
  assign io_memRead_out = reg_memRead; // @[ID_Pipeline.scala 84:24]
  assign io_memToReg_out = reg_memToReg; // @[ID_Pipeline.scala 85:25]
  assign io_operandA_out = reg_operandA; // @[ID_Pipeline.scala 86:25]
  assign io_operandB_out = reg_operandB; // @[ID_Pipeline.scala 87:25]
  assign io_rd_out = reg_rd; // @[ID_Pipeline.scala 88:19]
  assign io_strData_out = reg_strData; // @[ID_Pipeline.scala 89:24]
  assign io_aluCtrl_out = reg_aluCtrl; // @[ID_Pipeline.scala 90:24]
  assign io_regWrite_out = reg_regWrite; // @[ID_Pipeline.scala 91:25]
  assign io_opr_A_sel_Out = reg_opr_A; // @[ID_Pipeline.scala 92:26]
  assign io_opr_B_sel_Out = reg_opr_B; // @[ID_Pipeline.scala 93:26]
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
  reg_memWrite = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  reg_memRead = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  reg_memToReg = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  reg_operandA = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  reg_operandB = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  reg_rd = _RAND_5[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  reg_strData = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  reg_aluCtrl = _RAND_7[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  reg_regWrite = _RAND_8[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  reg_rs1_sel = _RAND_9[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  reg_rs2_sel = _RAND_10[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  reg_opr_A = _RAND_11[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  reg_opr_B = _RAND_12[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      reg_memWrite <= 1'h0;
    end else begin
      reg_memWrite <= io_memWrite_in;
    end
    if (reset) begin
      reg_memRead <= 1'h0;
    end else begin
      reg_memRead <= io_memRead_in;
    end
    if (reset) begin
      reg_memToReg <= 1'h0;
    end else begin
      reg_memToReg <= io_memToReg_in;
    end
    if (reset) begin
      reg_operandA <= 32'sh0;
    end else begin
      reg_operandA <= io_operandA_in;
    end
    if (reset) begin
      reg_operandB <= 32'sh0;
    end else begin
      reg_operandB <= io_operandB_in;
    end
    if (reset) begin
      reg_rd <= 5'h0;
    end else begin
      reg_rd <= io_rd_in;
    end
    if (reset) begin
      reg_strData <= 32'sh0;
    end else begin
      reg_strData <= io_strData_in;
    end
    if (reset) begin
      reg_aluCtrl <= 5'h0;
    end else begin
      reg_aluCtrl <= io_aluCtrl_in;
    end
    if (reset) begin
      reg_regWrite <= 1'h0;
    end else begin
      reg_regWrite <= io_regWrite_in;
    end
    if (reset) begin
      reg_rs1_sel <= 5'h0;
    end else begin
      reg_rs1_sel <= io_rs1_sel_in;
    end
    if (reset) begin
      reg_rs2_sel <= 5'h0;
    end else begin
      reg_rs2_sel <= io_rs2_sel_in;
    end
    if (reset) begin
      reg_opr_A <= 2'h0;
    end else begin
      reg_opr_A <= io_opr_A_sel_in;
    end
    if (reset) begin
      reg_opr_B <= 1'h0;
    end else begin
      reg_opr_B <= io_opr_B_sel_in;
    end
  end
endmodule
module Ex_Pipeline(
  input         clock,
  input         reset,
  input         io_memWrite_in,
  input         io_memRead_in,
  input         io_memToReg_in,
  input  [4:0]  io_rd_in,
  input  [31:0] io_aluOutput_in,
  input  [31:0] io_strData_in,
  input         io_regWrite_in,
  input  [31:0] io_alu_Output_input,
  input         io_alu_branch_output_input,
  output        io_memWrite_out,
  output        io_memRead_out,
  output        io_memToReg_out,
  output [4:0]  io_rd_out,
  output [31:0] io_strData_out,
  output [31:0] io_aluOutput_out,
  output        io_regWrite_out,
  output [31:0] io_alu_Output_output,
  output        io_alu_branch_output_output
);
  reg  reg_memWrite; // @[Ex_Pipeline.scala 38:35]
  reg [31:0] _RAND_0;
  reg  reg_memRead; // @[Ex_Pipeline.scala 39:34]
  reg [31:0] _RAND_1;
  reg  reg_memToReg; // @[Ex_Pipeline.scala 40:35]
  reg [31:0] _RAND_2;
  reg [4:0] reg_rd; // @[Ex_Pipeline.scala 41:29]
  reg [31:0] _RAND_3;
  reg [31:0] reg_strData; // @[Ex_Pipeline.scala 42:34]
  reg [31:0] _RAND_4;
  reg [31:0] reg_aluOutput; // @[Ex_Pipeline.scala 43:36]
  reg [31:0] _RAND_5;
  reg  reg_regWrite; // @[Ex_Pipeline.scala 44:35]
  reg [31:0] _RAND_6;
  reg [31:0] alu_Output; // @[Ex_Pipeline.scala 45:27]
  reg [31:0] _RAND_7;
  reg  alu_branch_output; // @[Ex_Pipeline.scala 46:34]
  reg [31:0] _RAND_8;
  assign io_memWrite_out = reg_memWrite; // @[Ex_Pipeline.scala 68:25]
  assign io_memRead_out = reg_memRead; // @[Ex_Pipeline.scala 69:24]
  assign io_memToReg_out = reg_memToReg; // @[Ex_Pipeline.scala 70:25]
  assign io_rd_out = reg_rd; // @[Ex_Pipeline.scala 71:19]
  assign io_strData_out = reg_strData; // @[Ex_Pipeline.scala 72:24]
  assign io_aluOutput_out = reg_aluOutput; // @[Ex_Pipeline.scala 73:26]
  assign io_regWrite_out = reg_regWrite; // @[Ex_Pipeline.scala 74:25]
  assign io_alu_Output_output = alu_Output; // @[Ex_Pipeline.scala 75:24]
  assign io_alu_branch_output_output = alu_branch_output; // @[Ex_Pipeline.scala 76:31]
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
  reg_memWrite = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  reg_memRead = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  reg_memToReg = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  reg_rd = _RAND_3[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  reg_strData = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  reg_aluOutput = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  reg_regWrite = _RAND_6[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  alu_Output = _RAND_7[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  alu_branch_output = _RAND_8[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      reg_memWrite <= 1'h0;
    end else begin
      reg_memWrite <= io_memWrite_in;
    end
    if (reset) begin
      reg_memRead <= 1'h0;
    end else begin
      reg_memRead <= io_memRead_in;
    end
    if (reset) begin
      reg_memToReg <= 1'h0;
    end else begin
      reg_memToReg <= io_memToReg_in;
    end
    if (reset) begin
      reg_rd <= 5'h0;
    end else begin
      reg_rd <= io_rd_in;
    end
    if (reset) begin
      reg_strData <= 32'sh0;
    end else begin
      reg_strData <= io_strData_in;
    end
    if (reset) begin
      reg_aluOutput <= 32'sh0;
    end else begin
      reg_aluOutput <= io_aluOutput_in;
    end
    if (reset) begin
      reg_regWrite <= 1'h0;
    end else begin
      reg_regWrite <= io_regWrite_in;
    end
    if (reset) begin
      alu_Output <= 32'sh0;
    end else begin
      alu_Output <= io_alu_Output_input;
    end
    if (reset) begin
      alu_branch_output <= 1'h0;
    end else begin
      alu_branch_output <= io_alu_branch_output_input;
    end
  end
endmodule
module MEM_Piepline(
  input         clock,
  input         reset,
  input         io_memToReg_in,
  input  [4:0]  io_rd_in,
  input  [31:0] io_dataOut_in,
  input  [31:0] io_aluOutput_in,
  input         io_regWrite_in,
  output        io_memToReg_out,
  output [4:0]  io_rd_out,
  output [31:0] io_dataOut_out,
  output [31:0] io_aluOutput_out,
  output        io_regWrite_out
);
  reg  reg_memToReg; // @[MEM_Piepline.scala 27:35]
  reg [31:0] _RAND_0;
  reg [4:0] reg_rd; // @[MEM_Piepline.scala 28:29]
  reg [31:0] _RAND_1;
  reg [31:0] reg_dataOut; // @[MEM_Piepline.scala 29:34]
  reg [31:0] _RAND_2;
  reg [31:0] reg_aluOutput; // @[MEM_Piepline.scala 30:36]
  reg [31:0] _RAND_3;
  reg  reg_regWrite; // @[MEM_Piepline.scala 31:35]
  reg [31:0] _RAND_4;
  assign io_memToReg_out = reg_memToReg; // @[MEM_Piepline.scala 47:25]
  assign io_rd_out = reg_rd; // @[MEM_Piepline.scala 48:19]
  assign io_dataOut_out = reg_dataOut; // @[MEM_Piepline.scala 49:24]
  assign io_aluOutput_out = reg_aluOutput; // @[MEM_Piepline.scala 50:26]
  assign io_regWrite_out = reg_regWrite; // @[MEM_Piepline.scala 51:25]
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
  reg_memToReg = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  reg_rd = _RAND_1[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  reg_dataOut = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  reg_aluOutput = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  reg_regWrite = _RAND_4[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      reg_memToReg <= 1'h0;
    end else begin
      reg_memToReg <= io_memToReg_in;
    end
    if (reset) begin
      reg_rd <= 5'h0;
    end else begin
      reg_rd <= io_rd_in;
    end
    if (reset) begin
      reg_dataOut <= 32'sh0;
    end else begin
      reg_dataOut <= io_dataOut_in;
    end
    if (reset) begin
      reg_aluOutput <= 32'sh0;
    end else begin
      reg_aluOutput <= io_aluOutput_in;
    end
    if (reset) begin
      reg_regWrite <= 1'h0;
    end else begin
      reg_regWrite <= io_regWrite_in;
    end
  end
endmodule
module Forwarding(
  input        io_exe_pipe_regWrite_out,
  input  [4:0] io_exe_pipe_rd_out,
  input        io_mem_pipe_regWrite_out,
  input  [4:0] io_mem_pipe_rd_out,
  input  [4:0] io_id_pipe_rs1_sel_out,
  input  [4:0] io_id_pipe_rs2_sel_out,
  output [1:0] io_alu_A,
  output [1:0] io_alu_B
);
  wire  _T_26; // @[Forwarding.scala 18:66]
  wire  _T_27; // @[Forwarding.scala 18:44]
  wire  _T_28; // @[Forwarding.scala 24:29]
  wire  _T_30; // @[Forwarding.scala 27:29]
  wire  _GEN_2; // @[Forwarding.scala 19:3]
  wire  _GEN_3; // @[Forwarding.scala 19:3]
  wire  _T_35; // @[Forwarding.scala 31:66]
  wire  _T_36; // @[Forwarding.scala 31:44]
  wire  _T_43; // @[Forwarding.scala 36:89]
  wire  _T_44; // @[Forwarding.scala 36:10]
  wire  _T_45; // @[Forwarding.scala 36:164]
  wire  _T_46; // @[Forwarding.scala 36:141]
  wire [1:0] _GEN_4; // @[Forwarding.scala 36:192]
  wire  _T_54; // @[Forwarding.scala 39:89]
  wire  _T_55; // @[Forwarding.scala 39:10]
  wire  _T_56; // @[Forwarding.scala 39:164]
  wire  _T_57; // @[Forwarding.scala 39:141]
  wire [1:0] _GEN_5; // @[Forwarding.scala 39:192]
  assign _T_26 = io_exe_pipe_rd_out != 5'h0; // @[Forwarding.scala 18:66]
  assign _T_27 = io_exe_pipe_regWrite_out & _T_26; // @[Forwarding.scala 18:44]
  assign _T_28 = io_exe_pipe_rd_out == io_id_pipe_rs1_sel_out; // @[Forwarding.scala 24:29]
  assign _T_30 = io_exe_pipe_rd_out == io_id_pipe_rs2_sel_out; // @[Forwarding.scala 27:29]
  assign _GEN_2 = _T_27 ? _T_28 : 1'h0; // @[Forwarding.scala 19:3]
  assign _GEN_3 = _T_27 ? _T_30 : 1'h0; // @[Forwarding.scala 19:3]
  assign _T_35 = io_mem_pipe_rd_out != 5'h0; // @[Forwarding.scala 31:66]
  assign _T_36 = io_mem_pipe_regWrite_out & _T_35; // @[Forwarding.scala 31:44]
  assign _T_43 = _T_36 & _T_28; // @[Forwarding.scala 36:89]
  assign _T_44 = ~ _T_43; // @[Forwarding.scala 36:10]
  assign _T_45 = io_mem_pipe_rd_out == io_id_pipe_rs1_sel_out; // @[Forwarding.scala 36:164]
  assign _T_46 = _T_44 & _T_45; // @[Forwarding.scala 36:141]
  assign _GEN_4 = _T_46 ? 2'h2 : {{1'd0}, _GEN_2}; // @[Forwarding.scala 36:192]
  assign _T_54 = _T_36 & _T_30; // @[Forwarding.scala 39:89]
  assign _T_55 = ~ _T_54; // @[Forwarding.scala 39:10]
  assign _T_56 = io_mem_pipe_rd_out == io_id_pipe_rs2_sel_out; // @[Forwarding.scala 39:164]
  assign _T_57 = _T_55 & _T_56; // @[Forwarding.scala 39:141]
  assign _GEN_5 = _T_57 ? 2'h2 : {{1'd0}, _GEN_3}; // @[Forwarding.scala 39:192]
  assign io_alu_A = _T_36 ? _GEN_4 : {{1'd0}, _GEN_2}; // @[Forwarding.scala 15:12 Forwarding.scala 25:16 Forwarding.scala 37:16]
  assign io_alu_B = _T_36 ? _GEN_5 : {{1'd0}, _GEN_3}; // @[Forwarding.scala 16:12 Forwarding.scala 28:16 Forwarding.scala 40:16]
endmodule
module Core(
  input         clock,
  input         reset,
  output [31:0] io_instruction,
  output [31:0] io_AluOut,
  output        io_branchCheck
);
  wire [6:0] control_io_opcode; // @[Core.scala 11:23]
  wire  control_io_memWrite; // @[Core.scala 11:23]
  wire  control_io_memRead; // @[Core.scala 11:23]
  wire  control_io_regWrite; // @[Core.scala 11:23]
  wire  control_io_memToReg; // @[Core.scala 11:23]
  wire [2:0] control_io_aluOp; // @[Core.scala 11:23]
  wire [1:0] control_io_oprA; // @[Core.scala 11:23]
  wire  control_io_oprB; // @[Core.scala 11:23]
  wire [1:0] control_io_extendSel; // @[Core.scala 11:23]
  wire [31:0] imm_io_ins; // @[Core.scala 12:19]
  wire [31:0] imm_io_S; // @[Core.scala 12:19]
  wire [31:0] imm_io_i; // @[Core.scala 12:19]
  wire [31:0] imm_io_u; // @[Core.scala 12:19]
  wire [2:0] aluCtrl_io_ALUop; // @[Core.scala 13:23]
  wire [2:0] aluCtrl_io_func3; // @[Core.scala 13:23]
  wire  aluCtrl_io_func7; // @[Core.scala 13:23]
  wire [4:0] aluCtrl_io_out; // @[Core.scala 13:23]
  wire [31:0] alu_io_a; // @[Core.scala 14:19]
  wire [31:0] alu_io_b; // @[Core.scala 14:19]
  wire [4:0] alu_io_aluControl; // @[Core.scala 14:19]
  wire  alu_io_branch; // @[Core.scala 14:19]
  wire [31:0] alu_io_aluOut; // @[Core.scala 14:19]
  wire  reg$_clock; // @[Core.scala 15:19]
  wire  reg$_io_regWrite; // @[Core.scala 15:19]
  wire [4:0] reg$_io_rs1_sel; // @[Core.scala 15:19]
  wire [4:0] reg$_io_rs2_sel; // @[Core.scala 15:19]
  wire [4:0] reg$_io_rd_sel; // @[Core.scala 15:19]
  wire [31:0] reg$_io_writeData; // @[Core.scala 15:19]
  wire [31:0] reg$_io_rs1; // @[Core.scala 15:19]
  wire [31:0] reg$_io_rs2; // @[Core.scala 15:19]
  wire  InsMem_clock; // @[Core.scala 16:22]
  wire [31:0] InsMem_io_wrAddr; // @[Core.scala 16:22]
  wire [31:0] InsMem_io_rdData; // @[Core.scala 16:22]
  wire  PC_clock; // @[Core.scala 17:18]
  wire  PC_reset; // @[Core.scala 17:18]
  wire [31:0] PC_io_input; // @[Core.scala 17:18]
  wire [31:0] PC_io_pc4; // @[Core.scala 17:18]
  wire [31:0] PC_io_pc; // @[Core.scala 17:18]
  wire  dataMem_clock; // @[Core.scala 19:23]
  wire  dataMem_io_load; // @[Core.scala 19:23]
  wire  dataMem_io_store; // @[Core.scala 19:23]
  wire [7:0] dataMem_io_addrr; // @[Core.scala 19:23]
  wire [31:0] dataMem_io_storedata; // @[Core.scala 19:23]
  wire [31:0] dataMem_io_dataOut; // @[Core.scala 19:23]
  wire  if_pipe_clock; // @[Core.scala 20:23]
  wire  if_pipe_reset; // @[Core.scala 20:23]
  wire [31:0] if_pipe_io_pc_in; // @[Core.scala 20:23]
  wire [31:0] if_pipe_io_pc4_in; // @[Core.scala 20:23]
  wire [31:0] if_pipe_io_ins_in; // @[Core.scala 20:23]
  wire [31:0] if_pipe_io_pc_out; // @[Core.scala 20:23]
  wire [31:0] if_pipe_io_ins_out; // @[Core.scala 20:23]
  wire [31:0] if_pipe_io_pc4_out; // @[Core.scala 20:23]
  wire  id_pipe_clock; // @[Core.scala 21:23]
  wire  id_pipe_reset; // @[Core.scala 21:23]
  wire [4:0] id_pipe_io_rs1_sel_in; // @[Core.scala 21:23]
  wire [4:0] id_pipe_io_rs2_sel_in; // @[Core.scala 21:23]
  wire  id_pipe_io_memWrite_in; // @[Core.scala 21:23]
  wire  id_pipe_io_memRead_in; // @[Core.scala 21:23]
  wire  id_pipe_io_memToReg_in; // @[Core.scala 21:23]
  wire [31:0] id_pipe_io_operandA_in; // @[Core.scala 21:23]
  wire [31:0] id_pipe_io_operandB_in; // @[Core.scala 21:23]
  wire [4:0] id_pipe_io_rd_in; // @[Core.scala 21:23]
  wire [31:0] id_pipe_io_strData_in; // @[Core.scala 21:23]
  wire [4:0] id_pipe_io_aluCtrl_in; // @[Core.scala 21:23]
  wire  id_pipe_io_regWrite_in; // @[Core.scala 21:23]
  wire [1:0] id_pipe_io_opr_A_sel_in; // @[Core.scala 21:23]
  wire  id_pipe_io_opr_B_sel_in; // @[Core.scala 21:23]
  wire [4:0] id_pipe_io_rs1_sel_Out; // @[Core.scala 21:23]
  wire [4:0] id_pipe_io_rs2_sel_Out; // @[Core.scala 21:23]
  wire  id_pipe_io_memWrite_out; // @[Core.scala 21:23]
  wire  id_pipe_io_memRead_out; // @[Core.scala 21:23]
  wire  id_pipe_io_memToReg_out; // @[Core.scala 21:23]
  wire [31:0] id_pipe_io_operandA_out; // @[Core.scala 21:23]
  wire [31:0] id_pipe_io_operandB_out; // @[Core.scala 21:23]
  wire [4:0] id_pipe_io_rd_out; // @[Core.scala 21:23]
  wire [31:0] id_pipe_io_strData_out; // @[Core.scala 21:23]
  wire [4:0] id_pipe_io_aluCtrl_out; // @[Core.scala 21:23]
  wire  id_pipe_io_regWrite_out; // @[Core.scala 21:23]
  wire [1:0] id_pipe_io_opr_A_sel_Out; // @[Core.scala 21:23]
  wire  id_pipe_io_opr_B_sel_Out; // @[Core.scala 21:23]
  wire  exe_pipe_clock; // @[Core.scala 22:24]
  wire  exe_pipe_reset; // @[Core.scala 22:24]
  wire  exe_pipe_io_memWrite_in; // @[Core.scala 22:24]
  wire  exe_pipe_io_memRead_in; // @[Core.scala 22:24]
  wire  exe_pipe_io_memToReg_in; // @[Core.scala 22:24]
  wire [4:0] exe_pipe_io_rd_in; // @[Core.scala 22:24]
  wire [31:0] exe_pipe_io_aluOutput_in; // @[Core.scala 22:24]
  wire [31:0] exe_pipe_io_strData_in; // @[Core.scala 22:24]
  wire  exe_pipe_io_regWrite_in; // @[Core.scala 22:24]
  wire [31:0] exe_pipe_io_alu_Output_input; // @[Core.scala 22:24]
  wire  exe_pipe_io_alu_branch_output_input; // @[Core.scala 22:24]
  wire  exe_pipe_io_memWrite_out; // @[Core.scala 22:24]
  wire  exe_pipe_io_memRead_out; // @[Core.scala 22:24]
  wire  exe_pipe_io_memToReg_out; // @[Core.scala 22:24]
  wire [4:0] exe_pipe_io_rd_out; // @[Core.scala 22:24]
  wire [31:0] exe_pipe_io_strData_out; // @[Core.scala 22:24]
  wire [31:0] exe_pipe_io_aluOutput_out; // @[Core.scala 22:24]
  wire  exe_pipe_io_regWrite_out; // @[Core.scala 22:24]
  wire [31:0] exe_pipe_io_alu_Output_output; // @[Core.scala 22:24]
  wire  exe_pipe_io_alu_branch_output_output; // @[Core.scala 22:24]
  wire  mem_pipe_clock; // @[Core.scala 23:24]
  wire  mem_pipe_reset; // @[Core.scala 23:24]
  wire  mem_pipe_io_memToReg_in; // @[Core.scala 23:24]
  wire [4:0] mem_pipe_io_rd_in; // @[Core.scala 23:24]
  wire [31:0] mem_pipe_io_dataOut_in; // @[Core.scala 23:24]
  wire [31:0] mem_pipe_io_aluOutput_in; // @[Core.scala 23:24]
  wire  mem_pipe_io_regWrite_in; // @[Core.scala 23:24]
  wire  mem_pipe_io_memToReg_out; // @[Core.scala 23:24]
  wire [4:0] mem_pipe_io_rd_out; // @[Core.scala 23:24]
  wire [31:0] mem_pipe_io_dataOut_out; // @[Core.scala 23:24]
  wire [31:0] mem_pipe_io_aluOutput_out; // @[Core.scala 23:24]
  wire  mem_pipe_io_regWrite_out; // @[Core.scala 23:24]
  wire  forwarding_io_exe_pipe_regWrite_out; // @[Core.scala 24:26]
  wire [4:0] forwarding_io_exe_pipe_rd_out; // @[Core.scala 24:26]
  wire  forwarding_io_mem_pipe_regWrite_out; // @[Core.scala 24:26]
  wire [4:0] forwarding_io_mem_pipe_rd_out; // @[Core.scala 24:26]
  wire [4:0] forwarding_io_id_pipe_rs1_sel_out; // @[Core.scala 24:26]
  wire [4:0] forwarding_io_id_pipe_rs2_sel_out; // @[Core.scala 24:26]
  wire [1:0] forwarding_io_alu_A; // @[Core.scala 24:26]
  wire [1:0] forwarding_io_alu_B; // @[Core.scala 24:26]
  wire  _T_12; // @[Core.scala 27:29]
  wire  _T_14; // @[Core.scala 29:35]
  wire  _T_16; // @[Core.scala 31:35]
  wire [9:0] _T_17; // @[Core.scala 43:31]
  wire  _T_24; // @[Core.scala 71:24]
  wire  _T_26; // @[Core.scala 71:51]
  wire  _T_27; // @[Core.scala 71:32]
  wire  _T_29; // @[Core.scala 73:30]
  wire [31:0] _T_30; // @[Core.scala 74:50]
  wire [31:0] _T_33; // @[Core.scala 76:49]
  wire [31:0] _GEN_4; // @[Core.scala 73:38]
  wire  _T_35; // @[Core.scala 81:24]
  wire [31:0] _GEN_6; // @[Core.scala 88:45]
  wire [31:0] _GEN_7; // @[Core.scala 86:45]
  wire [31:0] _GEN_8; // @[Core.scala 84:39]
  wire  _T_47; // @[Core.scala 173:33]
  wire  _T_49; // @[Core.scala 176:26]
  wire [31:0] _GEN_10; // @[Core.scala 176:34]
  wire  _T_52; // @[Core.scala 206:33]
  wire  _T_54; // @[Core.scala 209:30]
  wire  _T_56; // @[Core.scala 211:36]
  wire  _T_58; // @[Core.scala 213:36]
  wire [31:0] _GEN_12; // @[Core.scala 213:48]
  wire [31:0] _GEN_13; // @[Core.scala 211:48]
  wire [31:0] _GEN_14; // @[Core.scala 209:42]
  wire  _T_60; // @[Core.scala 220:33]
  wire  _T_62; // @[Core.scala 222:30]
  wire  _T_64; // @[Core.scala 224:36]
  wire  _T_66; // @[Core.scala 226:36]
  wire [31:0] _GEN_16; // @[Core.scala 226:49]
  wire [31:0] _GEN_17; // @[Core.scala 224:49]
  wire [31:0] _GEN_18; // @[Core.scala 222:43]
  Control control ( // @[Core.scala 11:23]
    .io_opcode(control_io_opcode),
    .io_memWrite(control_io_memWrite),
    .io_memRead(control_io_memRead),
    .io_regWrite(control_io_regWrite),
    .io_memToReg(control_io_memToReg),
    .io_aluOp(control_io_aluOp),
    .io_oprA(control_io_oprA),
    .io_oprB(control_io_oprB),
    .io_extendSel(control_io_extendSel)
  );
  immGen imm ( // @[Core.scala 12:19]
    .io_ins(imm_io_ins),
    .io_S(imm_io_S),
    .io_i(imm_io_i),
    .io_u(imm_io_u)
  );
  AluControl aluCtrl ( // @[Core.scala 13:23]
    .io_ALUop(aluCtrl_io_ALUop),
    .io_func3(aluCtrl_io_func3),
    .io_func7(aluCtrl_io_func7),
    .io_out(aluCtrl_io_out)
  );
  Alu alu ( // @[Core.scala 14:19]
    .io_a(alu_io_a),
    .io_b(alu_io_b),
    .io_aluControl(alu_io_aluControl),
    .io_branch(alu_io_branch),
    .io_aluOut(alu_io_aluOut)
  );
  registerFile reg$ ( // @[Core.scala 15:19]
    .clock(reg$_clock),
    .io_regWrite(reg$_io_regWrite),
    .io_rs1_sel(reg$_io_rs1_sel),
    .io_rs2_sel(reg$_io_rs2_sel),
    .io_rd_sel(reg$_io_rd_sel),
    .io_writeData(reg$_io_writeData),
    .io_rs1(reg$_io_rs1),
    .io_rs2(reg$_io_rs2)
  );
  InsMem InsMem ( // @[Core.scala 16:22]
    .clock(InsMem_clock),
    .io_wrAddr(InsMem_io_wrAddr),
    .io_rdData(InsMem_io_rdData)
  );
  PC PC ( // @[Core.scala 17:18]
    .clock(PC_clock),
    .reset(PC_reset),
    .io_input(PC_io_input),
    .io_pc4(PC_io_pc4),
    .io_pc(PC_io_pc)
  );
  DataMem dataMem ( // @[Core.scala 19:23]
    .clock(dataMem_clock),
    .io_load(dataMem_io_load),
    .io_store(dataMem_io_store),
    .io_addrr(dataMem_io_addrr),
    .io_storedata(dataMem_io_storedata),
    .io_dataOut(dataMem_io_dataOut)
  );
  IF_Pipeline if_pipe ( // @[Core.scala 20:23]
    .clock(if_pipe_clock),
    .reset(if_pipe_reset),
    .io_pc_in(if_pipe_io_pc_in),
    .io_pc4_in(if_pipe_io_pc4_in),
    .io_ins_in(if_pipe_io_ins_in),
    .io_pc_out(if_pipe_io_pc_out),
    .io_ins_out(if_pipe_io_ins_out),
    .io_pc4_out(if_pipe_io_pc4_out)
  );
  ID_Pipeline id_pipe ( // @[Core.scala 21:23]
    .clock(id_pipe_clock),
    .reset(id_pipe_reset),
    .io_rs1_sel_in(id_pipe_io_rs1_sel_in),
    .io_rs2_sel_in(id_pipe_io_rs2_sel_in),
    .io_memWrite_in(id_pipe_io_memWrite_in),
    .io_memRead_in(id_pipe_io_memRead_in),
    .io_memToReg_in(id_pipe_io_memToReg_in),
    .io_operandA_in(id_pipe_io_operandA_in),
    .io_operandB_in(id_pipe_io_operandB_in),
    .io_rd_in(id_pipe_io_rd_in),
    .io_strData_in(id_pipe_io_strData_in),
    .io_aluCtrl_in(id_pipe_io_aluCtrl_in),
    .io_regWrite_in(id_pipe_io_regWrite_in),
    .io_opr_A_sel_in(id_pipe_io_opr_A_sel_in),
    .io_opr_B_sel_in(id_pipe_io_opr_B_sel_in),
    .io_rs1_sel_Out(id_pipe_io_rs1_sel_Out),
    .io_rs2_sel_Out(id_pipe_io_rs2_sel_Out),
    .io_memWrite_out(id_pipe_io_memWrite_out),
    .io_memRead_out(id_pipe_io_memRead_out),
    .io_memToReg_out(id_pipe_io_memToReg_out),
    .io_operandA_out(id_pipe_io_operandA_out),
    .io_operandB_out(id_pipe_io_operandB_out),
    .io_rd_out(id_pipe_io_rd_out),
    .io_strData_out(id_pipe_io_strData_out),
    .io_aluCtrl_out(id_pipe_io_aluCtrl_out),
    .io_regWrite_out(id_pipe_io_regWrite_out),
    .io_opr_A_sel_Out(id_pipe_io_opr_A_sel_Out),
    .io_opr_B_sel_Out(id_pipe_io_opr_B_sel_Out)
  );
  Ex_Pipeline exe_pipe ( // @[Core.scala 22:24]
    .clock(exe_pipe_clock),
    .reset(exe_pipe_reset),
    .io_memWrite_in(exe_pipe_io_memWrite_in),
    .io_memRead_in(exe_pipe_io_memRead_in),
    .io_memToReg_in(exe_pipe_io_memToReg_in),
    .io_rd_in(exe_pipe_io_rd_in),
    .io_aluOutput_in(exe_pipe_io_aluOutput_in),
    .io_strData_in(exe_pipe_io_strData_in),
    .io_regWrite_in(exe_pipe_io_regWrite_in),
    .io_alu_Output_input(exe_pipe_io_alu_Output_input),
    .io_alu_branch_output_input(exe_pipe_io_alu_branch_output_input),
    .io_memWrite_out(exe_pipe_io_memWrite_out),
    .io_memRead_out(exe_pipe_io_memRead_out),
    .io_memToReg_out(exe_pipe_io_memToReg_out),
    .io_rd_out(exe_pipe_io_rd_out),
    .io_strData_out(exe_pipe_io_strData_out),
    .io_aluOutput_out(exe_pipe_io_aluOutput_out),
    .io_regWrite_out(exe_pipe_io_regWrite_out),
    .io_alu_Output_output(exe_pipe_io_alu_Output_output),
    .io_alu_branch_output_output(exe_pipe_io_alu_branch_output_output)
  );
  MEM_Piepline mem_pipe ( // @[Core.scala 23:24]
    .clock(mem_pipe_clock),
    .reset(mem_pipe_reset),
    .io_memToReg_in(mem_pipe_io_memToReg_in),
    .io_rd_in(mem_pipe_io_rd_in),
    .io_dataOut_in(mem_pipe_io_dataOut_in),
    .io_aluOutput_in(mem_pipe_io_aluOutput_in),
    .io_regWrite_in(mem_pipe_io_regWrite_in),
    .io_memToReg_out(mem_pipe_io_memToReg_out),
    .io_rd_out(mem_pipe_io_rd_out),
    .io_dataOut_out(mem_pipe_io_dataOut_out),
    .io_aluOutput_out(mem_pipe_io_aluOutput_out),
    .io_regWrite_out(mem_pipe_io_regWrite_out)
  );
  Forwarding forwarding ( // @[Core.scala 24:26]
    .io_exe_pipe_regWrite_out(forwarding_io_exe_pipe_regWrite_out),
    .io_exe_pipe_rd_out(forwarding_io_exe_pipe_rd_out),
    .io_mem_pipe_regWrite_out(forwarding_io_mem_pipe_regWrite_out),
    .io_mem_pipe_rd_out(forwarding_io_mem_pipe_rd_out),
    .io_id_pipe_rs1_sel_out(forwarding_io_id_pipe_rs1_sel_out),
    .io_id_pipe_rs2_sel_out(forwarding_io_id_pipe_rs2_sel_out),
    .io_alu_A(forwarding_io_alu_A),
    .io_alu_B(forwarding_io_alu_B)
  );
  assign _T_12 = control_io_extendSel == 2'h0; // @[Core.scala 27:29]
  assign _T_14 = control_io_extendSel == 2'h2; // @[Core.scala 29:35]
  assign _T_16 = control_io_extendSel == 2'h1; // @[Core.scala 31:35]
  assign _T_17 = PC_io_pc[11:2]; // @[Core.scala 43:31]
  assign _T_24 = control_io_oprA == 2'h0; // @[Core.scala 71:24]
  assign _T_26 = control_io_oprA == 2'h3; // @[Core.scala 71:51]
  assign _T_27 = _T_24 | _T_26; // @[Core.scala 71:32]
  assign _T_29 = control_io_oprA == 2'h2; // @[Core.scala 73:30]
  assign _T_30 = $signed(if_pipe_io_pc4_out); // @[Core.scala 74:50]
  assign _T_33 = $signed(if_pipe_io_pc_out); // @[Core.scala 76:49]
  assign _GEN_4 = _T_29 ? $signed(_T_30) : $signed(_T_33); // @[Core.scala 73:38]
  assign _T_35 = control_io_oprB == 1'h0; // @[Core.scala 81:24]
  assign _GEN_6 = _T_14 ? $signed(imm_io_u) : $signed(reg$_io_rs2); // @[Core.scala 88:45]
  assign _GEN_7 = _T_16 ? $signed(imm_io_S) : $signed(_GEN_6); // @[Core.scala 86:45]
  assign _GEN_8 = _T_12 ? $signed(imm_io_i) : $signed(_GEN_7); // @[Core.scala 84:39]
  assign _T_47 = mem_pipe_io_memToReg_out; // @[Core.scala 173:33]
  assign _T_49 = reg$_io_regWrite; // @[Core.scala 176:26]
  assign _GEN_10 = _T_49 ? $signed(mem_pipe_io_aluOutput_out) : $signed(32'sh0); // @[Core.scala 176:34]
  assign _T_52 = id_pipe_io_opr_A_sel_Out == 2'h2; // @[Core.scala 206:33]
  assign _T_54 = forwarding_io_alu_A == 2'h0; // @[Core.scala 209:30]
  assign _T_56 = forwarding_io_alu_A == 2'h1; // @[Core.scala 211:36]
  assign _T_58 = forwarding_io_alu_A == 2'h2; // @[Core.scala 213:36]
  assign _GEN_12 = _T_58 ? $signed(reg$_io_writeData) : $signed(id_pipe_io_operandA_out); // @[Core.scala 213:48]
  assign _GEN_13 = _T_56 ? $signed(exe_pipe_io_alu_Output_output) : $signed(_GEN_12); // @[Core.scala 211:48]
  assign _GEN_14 = _T_54 ? $signed(id_pipe_io_operandA_out) : $signed(_GEN_13); // @[Core.scala 209:42]
  assign _T_60 = id_pipe_io_opr_B_sel_Out; // @[Core.scala 220:33]
  assign _T_62 = forwarding_io_alu_B == 2'h0; // @[Core.scala 222:30]
  assign _T_64 = forwarding_io_alu_B == 2'h1; // @[Core.scala 224:36]
  assign _T_66 = forwarding_io_alu_B == 2'h2; // @[Core.scala 226:36]
  assign _GEN_16 = _T_66 ? $signed(reg$_io_writeData) : $signed(id_pipe_io_operandB_out); // @[Core.scala 226:49]
  assign _GEN_17 = _T_64 ? $signed(exe_pipe_io_alu_Output_output) : $signed(_GEN_16); // @[Core.scala 224:49]
  assign _GEN_18 = _T_62 ? $signed(id_pipe_io_operandB_out) : $signed(_GEN_17); // @[Core.scala 222:43]
  assign io_instruction = InsMem_io_rdData; // @[Core.scala 44:18]
  assign io_AluOut = exe_pipe_io_alu_Output_output; // @[Core.scala 118:13]
  assign io_branchCheck = exe_pipe_io_alu_branch_output_output; // @[Core.scala 119:18]
  assign control_io_opcode = if_pipe_io_ins_out[6:0]; // @[Core.scala 53:21]
  assign imm_io_ins = if_pipe_io_ins_out; // @[Core.scala 56:14]
  assign aluCtrl_io_ALUop = control_io_aluOp; // @[Core.scala 66:20]
  assign aluCtrl_io_func3 = if_pipe_io_ins_out[14:12]; // @[Core.scala 67:20]
  assign aluCtrl_io_func7 = if_pipe_io_ins_out[30]; // @[Core.scala 68:20]
  assign alu_io_a = _T_52 ? $signed(id_pipe_io_operandA_out) : $signed(_GEN_14); // @[Core.scala 114:12 Core.scala 207:14 Core.scala 210:16 Core.scala 212:16 Core.scala 214:16 Core.scala 216:16]
  assign alu_io_b = _T_60 ? $signed(id_pipe_io_operandB_out) : $signed(_GEN_18); // @[Core.scala 115:12 Core.scala 221:14 Core.scala 233:16 Core.scala 236:16 Core.scala 239:16 Core.scala 242:16]
  assign alu_io_aluControl = id_pipe_io_aluCtrl_out; // @[Core.scala 113:21]
  assign reg$_clock = clock;
  assign reg$_io_regWrite = mem_pipe_io_regWrite_out; // @[Core.scala 168:19 Core.scala 171:19]
  assign reg$_io_rs1_sel = if_pipe_io_ins_out[19:15]; // @[Core.scala 60:18]
  assign reg$_io_rs2_sel = if_pipe_io_ins_out[24:20]; // @[Core.scala 61:18]
  assign reg$_io_rd_sel = mem_pipe_io_rd_out; // @[Core.scala 167:17 Core.scala 170:17]
  assign reg$_io_writeData = _T_47 ? $signed(mem_pipe_io_dataOut_out) : $signed(_GEN_10); // @[Core.scala 174:22 Core.scala 177:24 Core.scala 179:24]
  assign InsMem_clock = clock;
  assign InsMem_io_wrAddr = {{22'd0}, _T_17}; // @[Core.scala 43:20]
  assign PC_clock = clock;
  assign PC_reset = reset;
  assign PC_io_input = PC_io_pc4; // @[Core.scala 39:15]
  assign dataMem_clock = clock;
  assign dataMem_io_load = exe_pipe_io_memRead_out; // @[Core.scala 139:19]
  assign dataMem_io_store = exe_pipe_io_memWrite_out; // @[Core.scala 138:20]
  assign dataMem_io_addrr = exe_pipe_io_aluOutput_out[9:2]; // @[Core.scala 140:20]
  assign dataMem_io_storedata = exe_pipe_io_strData_out; // @[Core.scala 141:24]
  assign if_pipe_clock = clock;
  assign if_pipe_reset = reset;
  assign if_pipe_io_pc_in = PC_io_pc; // @[Core.scala 47:20]
  assign if_pipe_io_pc4_in = PC_io_pc4; // @[Core.scala 48:21]
  assign if_pipe_io_ins_in = io_instruction; // @[Core.scala 49:21]
  assign id_pipe_clock = clock;
  assign id_pipe_reset = reset;
  assign id_pipe_io_rs1_sel_in = if_pipe_io_ins_out[19:15]; // @[Core.scala 101:25]
  assign id_pipe_io_rs2_sel_in = if_pipe_io_ins_out[24:20]; // @[Core.scala 102:25]
  assign id_pipe_io_memWrite_in = control_io_memWrite; // @[Core.scala 103:26]
  assign id_pipe_io_memRead_in = control_io_memRead; // @[Core.scala 104:25]
  assign id_pipe_io_memToReg_in = control_io_memToReg; // @[Core.scala 105:26]
  assign id_pipe_io_operandA_in = _T_27 ? $signed(reg$_io_rs1) : $signed(_GEN_4); // @[Core.scala 72:28 Core.scala 74:28 Core.scala 76:28]
  assign id_pipe_io_operandB_in = _T_35 ? $signed(reg$_io_rs2) : $signed(_GEN_8); // @[Core.scala 82:28 Core.scala 85:30 Core.scala 87:30 Core.scala 89:30 Core.scala 91:30]
  assign id_pipe_io_rd_in = if_pipe_io_ins_out[11:7]; // @[Core.scala 106:20]
  assign id_pipe_io_strData_in = reg$_io_rs2; // @[Core.scala 107:25]
  assign id_pipe_io_aluCtrl_in = aluCtrl_io_out; // @[Core.scala 108:25]
  assign id_pipe_io_regWrite_in = control_io_regWrite; // @[Core.scala 109:26]
  assign id_pipe_io_opr_A_sel_in = control_io_oprA; // @[Core.scala 99:27]
  assign id_pipe_io_opr_B_sel_in = control_io_oprB; // @[Core.scala 100:27]
  assign exe_pipe_clock = clock;
  assign exe_pipe_reset = reset;
  assign exe_pipe_io_memWrite_in = id_pipe_io_memWrite_out; // @[Core.scala 126:27]
  assign exe_pipe_io_memRead_in = id_pipe_io_memRead_out; // @[Core.scala 127:26]
  assign exe_pipe_io_memToReg_in = id_pipe_io_memToReg_out; // @[Core.scala 128:27]
  assign exe_pipe_io_rd_in = id_pipe_io_rd_out; // @[Core.scala 129:21]
  assign exe_pipe_io_aluOutput_in = alu_io_aluOut; // @[Core.scala 131:28]
  assign exe_pipe_io_strData_in = id_pipe_io_strData_out; // @[Core.scala 130:26]
  assign exe_pipe_io_regWrite_in = id_pipe_io_regWrite_out; // @[Core.scala 132:27]
  assign exe_pipe_io_alu_Output_input = alu_io_aluOut; // @[Core.scala 116:32]
  assign exe_pipe_io_alu_branch_output_input = alu_io_branch; // @[Core.scala 117:39]
  assign mem_pipe_clock = clock;
  assign mem_pipe_reset = reset;
  assign mem_pipe_io_memToReg_in = exe_pipe_io_memToReg_out; // @[Core.scala 154:27]
  assign mem_pipe_io_rd_in = exe_pipe_io_rd_out; // @[Core.scala 155:21]
  assign mem_pipe_io_dataOut_in = dataMem_io_dataOut; // @[Core.scala 157:26]
  assign mem_pipe_io_aluOutput_in = exe_pipe_io_aluOutput_out; // @[Core.scala 156:28]
  assign mem_pipe_io_regWrite_in = exe_pipe_io_regWrite_out; // @[Core.scala 158:27]
  assign forwarding_io_exe_pipe_regWrite_out = exe_pipe_io_regWrite_out; // @[Core.scala 198:39]
  assign forwarding_io_exe_pipe_rd_out = exe_pipe_io_rd_out; // @[Core.scala 199:33]
  assign forwarding_io_mem_pipe_regWrite_out = mem_pipe_io_regWrite_out; // @[Core.scala 200:39]
  assign forwarding_io_mem_pipe_rd_out = mem_pipe_io_rd_out; // @[Core.scala 201:33]
  assign forwarding_io_id_pipe_rs1_sel_out = id_pipe_io_rs1_sel_Out; // @[Core.scala 202:37]
  assign forwarding_io_id_pipe_rs2_sel_out = id_pipe_io_rs2_sel_Out; // @[Core.scala 203:37]
endmodule
