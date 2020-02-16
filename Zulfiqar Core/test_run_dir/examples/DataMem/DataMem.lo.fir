circuit DataMem : @[:@2.0]
  module DataMem : @[:@3.2]
    input clock : Clock @[:@4.4]
    input reset : UInt<1> @[:@5.4]
    input io_load : UInt<1> @[:@6.4]
    input io_store : UInt<1> @[:@6.4]
    input io_addrr : UInt<32> @[:@6.4]
    input io_storedata : UInt<32> @[:@6.4]
    output io_dataOut : UInt<32> @[:@6.4]
  
    mem mem : @[DataMem.scala 12:16:@8.4]
      data-type => UInt<32>
      depth => 1024
      read-latency => 0
      write-latency => 1
      reader => _T_20
      writer => _T_24
      read-under-write => undefined
    node _T_18 = eq(io_load, UInt<1>("h1")) @[DataMem.scala 13:16:@9.4]
    node _T_19 = bits(io_addrr, 9, 0) @[DataMem.scala 14:22:@11.6]
    node _GEN_0 = validif(_T_18, _T_19) @[DataMem.scala 13:24:@10.4]
    node _GEN_1 = validif(_T_18, clock) @[DataMem.scala 13:24:@10.4]
    node _GEN_2 = mux(_T_18, UInt<1>("h1"), UInt<1>("h0")) @[DataMem.scala 13:24:@10.4]
    node _GEN_3 = validif(_T_18, mem._T_20.data) @[DataMem.scala 13:24:@10.4]
    node _T_22 = eq(io_store, UInt<1>("h1")) @[DataMem.scala 18:17:@18.4]
    node _T_23 = bits(io_addrr, 9, 0) @[DataMem.scala 19:8:@20.6]
    node _GEN_4 = validif(_T_22, _T_23) @[DataMem.scala 18:25:@19.4]
    node _GEN_5 = validif(_T_22, clock) @[DataMem.scala 18:25:@19.4]
    node _GEN_6 = mux(_T_22, UInt<1>("h1"), UInt<1>("h0")) @[DataMem.scala 18:25:@19.4]
    node _GEN_7 = validif(_T_22, UInt<1>("h1")) @[DataMem.scala 18:25:@19.4]
    node _GEN_8 = validif(_T_22, io_storedata) @[DataMem.scala 18:25:@19.4]
    node _GEN_9 = validif(_T_22, _GEN_3) @[DataMem.scala 18:25:@19.4]
    io_dataOut <= _GEN_9 @[DataMem.scala 14:16:@13.6]
    mem._T_20.addr <= _GEN_0 @[DataMem.scala 14:22:@12.6]
    mem._T_20.en <= _GEN_2 @[DataMem.scala 12:16:@8.4 DataMem.scala 14:22:@12.6]
    mem._T_20.clk <= _GEN_1 @[DataMem.scala 14:22:@12.6]
    mem._T_24.addr <= _GEN_4 @[DataMem.scala 19:8:@21.6]
    mem._T_24.en <= _GEN_6 @[DataMem.scala 12:16:@8.4 DataMem.scala 19:8:@21.6]
    mem._T_24.clk <= _GEN_5 @[DataMem.scala 19:8:@21.6]
    mem._T_24.data <= _GEN_8 @[DataMem.scala 19:19:@22.6]
    mem._T_24.mask <= _GEN_7 @[DataMem.scala 19:8:@21.6 DataMem.scala 19:19:@22.6]
