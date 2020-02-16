circuit Hello : @[:@2.0]
  module Hello : @[:@3.2]
    input clock : Clock @[:@4.4]
    input reset : UInt<1> @[:@5.4]
    output io_out : UInt<8> @[:@6.4]
  
    io_out <= UInt<6>("h2a") @[Hello.scala 11:10:@8.4]
