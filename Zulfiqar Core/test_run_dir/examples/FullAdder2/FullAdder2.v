module Adder(
  input   io_a,
  input   io_b,
  input   io_cin,
  output  io_sum,
  output  io_cout
);
  wire  _T_15; // @[Adder.scala 11:20]
  wire  _T_16; // @[Adder.scala 11:38]
  wire  _T_17; // @[Adder.scala 11:28]
  wire  _T_18; // @[Adder.scala 11:54]
  wire  _T_20; // @[Adder.scala 12:14]
  wire  _T_21; // @[Adder.scala 12:24]
  wire  _T_22; // @[Adder.scala 12:22]
  wire  _T_23; // @[Adder.scala 12:30]
  wire  _T_25; // @[Adder.scala 12:49]
  wire  _T_26; // @[Adder.scala 12:58]
  wire  _T_27; // @[Adder.scala 12:56]
  wire  _T_28; // @[Adder.scala 12:38]
  wire  _T_30; // @[Adder.scala 12:75]
  wire  _T_32; // @[Adder.scala 12:83]
  wire  _T_33; // @[Adder.scala 12:65]
  wire  _T_35; // @[Adder.scala 12:109]
  assign _T_15 = io_a & io_b; // @[Adder.scala 11:20]
  assign _T_16 = io_cin & io_a; // @[Adder.scala 11:38]
  assign _T_17 = _T_15 | _T_16; // @[Adder.scala 11:28]
  assign _T_18 = io_b & io_cin; // @[Adder.scala 11:54]
  assign _T_20 = ~ io_cin; // @[Adder.scala 12:14]
  assign _T_21 = ~ io_a; // @[Adder.scala 12:24]
  assign _T_22 = _T_20 & _T_21; // @[Adder.scala 12:22]
  assign _T_23 = _T_22 & io_b; // @[Adder.scala 12:30]
  assign _T_25 = _T_20 & io_a; // @[Adder.scala 12:49]
  assign _T_26 = ~ io_b; // @[Adder.scala 12:58]
  assign _T_27 = _T_25 & _T_26; // @[Adder.scala 12:56]
  assign _T_28 = _T_23 | _T_27; // @[Adder.scala 12:38]
  assign _T_30 = io_cin & _T_21; // @[Adder.scala 12:75]
  assign _T_32 = _T_30 & _T_26; // @[Adder.scala 12:83]
  assign _T_33 = _T_28 | _T_32; // @[Adder.scala 12:65]
  assign _T_35 = _T_16 & io_b; // @[Adder.scala 12:109]
  assign io_sum = _T_33 | _T_35; // @[Adder.scala 12:10]
  assign io_cout = _T_17 | _T_18; // @[Adder.scala 11:11]
endmodule
module FullAdder2(
  input   clock,
  input   reset,
  input   io_cin,
  input   io_a1,
  input   io_b1,
  input   io_a2,
  input   io_b2,
  output  io_sum0,
  output  io_sum1,
  output  io_cout
);
  wire  add1_io_a; // @[FullAdder2.scala 15:20]
  wire  add1_io_b; // @[FullAdder2.scala 15:20]
  wire  add1_io_cin; // @[FullAdder2.scala 15:20]
  wire  add1_io_sum; // @[FullAdder2.scala 15:20]
  wire  add1_io_cout; // @[FullAdder2.scala 15:20]
  wire  add2_io_a; // @[FullAdder2.scala 16:20]
  wire  add2_io_b; // @[FullAdder2.scala 16:20]
  wire  add2_io_cin; // @[FullAdder2.scala 16:20]
  wire  add2_io_sum; // @[FullAdder2.scala 16:20]
  wire  add2_io_cout; // @[FullAdder2.scala 16:20]
  Adder add1 ( // @[FullAdder2.scala 15:20]
    .io_a(add1_io_a),
    .io_b(add1_io_b),
    .io_cin(add1_io_cin),
    .io_sum(add1_io_sum),
    .io_cout(add1_io_cout)
  );
  Adder add2 ( // @[FullAdder2.scala 16:20]
    .io_a(add2_io_a),
    .io_b(add2_io_b),
    .io_cin(add2_io_cin),
    .io_sum(add2_io_sum),
    .io_cout(add2_io_cout)
  );
  assign io_sum0 = add1_io_sum; // @[FullAdder2.scala 23:11]
  assign io_sum1 = add2_io_sum; // @[FullAdder2.scala 24:11]
  assign io_cout = add2_io_cout; // @[FullAdder2.scala 25:11]
  assign add1_io_a = io_a1; // @[FullAdder2.scala 18:13]
  assign add1_io_b = io_b1; // @[FullAdder2.scala 19:13]
  assign add1_io_cin = io_cin; // @[FullAdder2.scala 17:15]
  assign add2_io_a = io_a2; // @[FullAdder2.scala 21:13]
  assign add2_io_b = io_b2; // @[FullAdder2.scala 22:13]
  assign add2_io_cin = add1_io_cout; // @[FullAdder2.scala 20:15]
endmodule
