;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit Hello : 
  module Hello : 
    input clock : Clock
    input reset : UInt<1>
    output io : {out : UInt<8>}
    
    io.out <= UInt<6>("h02a") @[Hello.scala 11:10]
    
