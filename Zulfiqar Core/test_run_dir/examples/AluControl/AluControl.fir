;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit AluControl : 
  module AluControl : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip ALUop : UInt<3>, flip func3 : UInt<3>, flip func7 : UInt<1>, out : UInt<5>}
    
    node _T_14 = eq(io.ALUop, UInt<1>("h00")) @[AluControl.scala 11:17]
    when _T_14 : @[AluControl.scala 11:30]
      node _T_16 = cat(UInt<1>("h00"), io.func7) @[Cat.scala 30:58]
      node _T_17 = cat(_T_16, io.func3) @[Cat.scala 30:58]
      io.out <= _T_17 @[AluControl.scala 12:12]
      skip @[AluControl.scala 11:30]
    else : @[AluControl.scala 13:36]
      node _T_19 = eq(io.ALUop, UInt<2>("h03")) @[AluControl.scala 13:23]
      when _T_19 : @[AluControl.scala 13:36]
        io.out <= UInt<5>("h01f") @[AluControl.scala 14:12]
        skip @[AluControl.scala 13:36]
      else : @[AluControl.scala 15:36]
        node _T_22 = eq(io.ALUop, UInt<3>("h04")) @[AluControl.scala 15:23]
        when _T_22 : @[AluControl.scala 15:36]
          io.out <= UInt<1>("h00") @[AluControl.scala 16:12]
          skip @[AluControl.scala 15:36]
        else : @[AluControl.scala 17:37]
          node _T_25 = eq(io.ALUop, UInt<1>("h01")) @[AluControl.scala 17:23]
          when _T_25 : @[AluControl.scala 17:37]
            node _T_27 = eq(io.func3, UInt<3>("h05")) @[AluControl.scala 19:19]
            when _T_27 : @[AluControl.scala 19:32]
              node _T_29 = cat(UInt<1>("h00"), io.func7) @[Cat.scala 30:58]
              node _T_30 = cat(_T_29, io.func3) @[Cat.scala 30:58]
              io.out <= _T_30 @[AluControl.scala 20:14]
              skip @[AluControl.scala 19:32]
            else : @[AluControl.scala 21:16]
              node _T_32 = cat(UInt<1>("h00"), io.func3) @[Cat.scala 30:58]
              io.out <= _T_32 @[AluControl.scala 22:14]
              skip @[AluControl.scala 21:16]
            skip @[AluControl.scala 17:37]
          else : @[AluControl.scala 24:36]
            node _T_34 = eq(io.ALUop, UInt<3>("h05")) @[AluControl.scala 24:23]
            when _T_34 : @[AluControl.scala 24:36]
              io.out <= UInt<1>("h00") @[AluControl.scala 25:12]
              skip @[AluControl.scala 24:36]
            else : @[AluControl.scala 26:62]
              node _T_37 = eq(io.ALUop, UInt<2>("h02")) @[AluControl.scala 26:23]
              node _T_39 = eq(io.func3, UInt<1>("h00")) @[AluControl.scala 26:48]
              node _T_40 = and(_T_37, _T_39) @[AluControl.scala 26:36]
              when _T_40 : @[AluControl.scala 26:62]
                node _T_42 = cat(UInt<2>("h02"), io.func3) @[Cat.scala 30:58]
                io.out <= _T_42 @[AluControl.scala 27:12]
                skip @[AluControl.scala 26:62]
              else : @[AluControl.scala 28:36]
                node _T_44 = eq(io.ALUop, UInt<3>("h06")) @[AluControl.scala 28:23]
                when _T_44 : @[AluControl.scala 28:36]
                  io.out <= UInt<1>("h00") @[AluControl.scala 29:12]
                  skip @[AluControl.scala 28:36]
                else : @[AluControl.scala 30:14]
                  io.out is invalid @[AluControl.scala 31:12]
                  skip @[AluControl.scala 30:14]
    
