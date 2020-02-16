;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit Adder : 
  module Adder : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip a : UInt<1>, flip b : UInt<1>, flip cin : UInt<1>, sum : UInt<1>, cout : UInt<1>}
    
    node _T_15 = and(io.a, io.b) @[Adder.scala 11:20]
    node _T_16 = and(io.cin, io.a) @[Adder.scala 11:38]
    node _T_17 = or(_T_15, _T_16) @[Adder.scala 11:28]
    node _T_18 = and(io.b, io.cin) @[Adder.scala 11:54]
    node _T_19 = or(_T_17, _T_18) @[Adder.scala 11:46]
    io.cout <= _T_19 @[Adder.scala 11:11]
    node _T_20 = not(io.cin) @[Adder.scala 12:14]
    node _T_21 = not(io.a) @[Adder.scala 12:24]
    node _T_22 = and(_T_20, _T_21) @[Adder.scala 12:22]
    node _T_23 = and(_T_22, io.b) @[Adder.scala 12:30]
    node _T_24 = not(io.cin) @[Adder.scala 12:41]
    node _T_25 = and(_T_24, io.a) @[Adder.scala 12:49]
    node _T_26 = not(io.b) @[Adder.scala 12:58]
    node _T_27 = and(_T_25, _T_26) @[Adder.scala 12:56]
    node _T_28 = or(_T_23, _T_27) @[Adder.scala 12:38]
    node _T_29 = not(io.a) @[Adder.scala 12:77]
    node _T_30 = and(io.cin, _T_29) @[Adder.scala 12:75]
    node _T_31 = not(io.b) @[Adder.scala 12:85]
    node _T_32 = and(_T_30, _T_31) @[Adder.scala 12:83]
    node _T_33 = or(_T_28, _T_32) @[Adder.scala 12:65]
    node _T_34 = and(io.cin, io.a) @[Adder.scala 12:102]
    node _T_35 = and(_T_34, io.b) @[Adder.scala 12:109]
    node _T_36 = or(_T_33, _T_35) @[Adder.scala 12:92]
    io.sum <= _T_36 @[Adder.scala 12:10]
    
