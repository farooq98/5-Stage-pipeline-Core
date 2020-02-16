;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit JalrTarget : 
  module JalrTarget : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip imm : SInt<32>, flip rs1 : SInt<32>, out : SInt<32>}
    
    node _T_11 = add(io.imm, io.rs1) @[JalrTarget.scala 9:22]
    node _T_12 = tail(_T_11, 1) @[JalrTarget.scala 9:22]
    node _T_13 = asSInt(_T_12) @[JalrTarget.scala 9:22]
    node _T_15 = and(_T_13, asSInt(UInt<33>("h0fffffffe"))) @[JalrTarget.scala 9:32]
    node _T_16 = asSInt(_T_15) @[JalrTarget.scala 9:32]
    io.out <= _T_16 @[JalrTarget.scala 9:10]
    
