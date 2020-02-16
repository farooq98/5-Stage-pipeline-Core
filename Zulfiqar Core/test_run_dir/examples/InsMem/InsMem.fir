;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit InsMem : 
  module InsMem : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip wrAddr : UInt<32>, rdData : UInt<32>}
    
    cmem mem : UInt<32>[1024] @[InsMem.scala 9:16]
    node _T_11 = bits(io.wrAddr, 9, 0) @[InsMem.scala 10:19]
    infer mport _T_12 = mem[_T_11], clock @[InsMem.scala 10:19]
    io.rdData <= _T_12 @[InsMem.scala 10:13]
    
