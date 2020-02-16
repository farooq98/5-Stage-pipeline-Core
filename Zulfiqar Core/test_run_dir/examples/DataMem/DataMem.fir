;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit DataMem : 
  module DataMem : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip load : UInt<1>, flip store : UInt<1>, flip addrr : UInt<32>, flip storedata : UInt<32>, dataOut : UInt<32>}
    
    cmem mem : UInt<32>[1024] @[DataMem.scala 12:16]
    node _T_18 = eq(io.load, UInt<1>("h01")) @[DataMem.scala 13:16]
    when _T_18 : @[DataMem.scala 13:24]
      node _T_19 = bits(io.addrr, 9, 0) @[DataMem.scala 14:22]
      infer mport _T_20 = mem[_T_19], clock @[DataMem.scala 14:22]
      io.dataOut <= _T_20 @[DataMem.scala 14:16]
      skip @[DataMem.scala 13:24]
    else : @[DataMem.scala 15:14]
      io.dataOut is invalid @[DataMem.scala 16:16]
      skip @[DataMem.scala 15:14]
    node _T_22 = eq(io.store, UInt<1>("h01")) @[DataMem.scala 18:17]
    when _T_22 : @[DataMem.scala 18:25]
      node _T_23 = bits(io.addrr, 9, 0) @[DataMem.scala 19:8]
      infer mport _T_24 = mem[_T_23], clock @[DataMem.scala 19:8]
      _T_24 <= io.storedata @[DataMem.scala 19:19]
      skip @[DataMem.scala 18:25]
    else : @[DataMem.scala 20:14]
      io.dataOut is invalid @[DataMem.scala 21:16]
      skip @[DataMem.scala 20:14]
    
