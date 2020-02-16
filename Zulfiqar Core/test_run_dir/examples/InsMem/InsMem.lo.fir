circuit InsMem : @[:@2.0]
  module InsMem : @[:@3.2]
    input clock : Clock @[:@4.4]
    input reset : UInt<1> @[:@5.4]
    input io_wrAddr : UInt<32> @[:@6.4]
    output io_rdData : UInt<32> @[:@6.4]
  
    mem mem : @[InsMem.scala 9:16:@8.4]
      data-type => UInt<32>
      depth => 1024
      read-latency => 0
      write-latency => 1
      reader => _T_12
      read-under-write => undefined
    node _T_11 = bits(io_wrAddr, 9, 0) @[InsMem.scala 10:19:@9.4]
    io_rdData <= mem._T_12.data @[InsMem.scala 10:13:@11.4]
    mem._T_12.addr <= _T_11 @[InsMem.scala 10:19:@10.4]
    mem._T_12.en <= UInt<1>("h1") @[InsMem.scala 9:16:@8.4 InsMem.scala 10:19:@10.4]
    mem._T_12.clk <= clock @[InsMem.scala 10:19:@10.4]
