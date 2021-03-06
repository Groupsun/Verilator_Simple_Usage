module Test( // @[components.py:319:Test.fir@2.2]
  input         clock, // @[rawmodule.py:100:Test.fir@3.4]
  input         reset, // @[rawmodule.py:101:Test.fir@4.4]
  input  [31:0] io_a, // @[components.py:310:Test.fir@5.4]
  input  [31:0] io_b, // @[components.py:310:Test.fir@5.4]
  input  [1:0]  io_ctl, // @[components.py:310:Test.fir@5.4]
  output [31:0] io_out // @[components.py:310:Test.fir@5.4]
);
  wire [32:0] _T_8; // @[components.py:323:Test.fir@7.4]
  wire [32:0] _T_9; // @[components.py:324:Test.fir@8.4]
  wire [31:0] _T_10; // @[components.py:325:Test.fir@9.4]
  wire [31:0] _T_11; // @[components.py:326:Test.fir@10.4]
  wire  _T_12; // @[components.py:326:Test.fir@11.4]
  wire [32:0] _T_13; // @[components.py:326:Test.fir@12.4]
  wire  _T_14; // @[components.py:326:Test.fir@13.4]
  wire [32:0] _T_15; // @[components.py:326:Test.fir@14.4]
  wire  _T_16; // @[components.py:326:Test.fir@15.4]
  wire [32:0] _T_17; // @[components.py:326:Test.fir@16.4]
  wire  _T_18; // @[components.py:326:Test.fir@17.4]
  wire [32:0] _T_19; // @[components.py:326:Test.fir@18.4]
  assign _T_8 = io_a + io_b; // @[components.py:323:Test.fir@7.4]
  assign _T_9 = io_a - io_b; // @[components.py:324:Test.fir@8.4]
  assign _T_10 = io_a & io_b; // @[components.py:325:Test.fir@9.4]
  assign _T_11 = io_a | io_b; // @[components.py:326:Test.fir@10.4]
  assign _T_12 = io_ctl == 2'h0; // @[components.py:326:Test.fir@11.4]
  assign _T_13 = _T_12 ? _T_8 : 33'h0; // @[components.py:326:Test.fir@12.4]
  assign _T_14 = io_ctl == 2'h1; // @[components.py:326:Test.fir@13.4]
  assign _T_15 = _T_14 ? _T_9 : _T_13; // @[components.py:326:Test.fir@14.4]
  assign _T_16 = io_ctl == 2'h2; // @[components.py:326:Test.fir@15.4]
  assign _T_17 = _T_16 ? {{1'd0}, _T_10} : _T_15; // @[components.py:326:Test.fir@16.4]
  assign _T_18 = io_ctl == 2'h3; // @[components.py:326:Test.fir@17.4]
  assign _T_19 = _T_18 ? {{1'd0}, _T_11} : _T_17; // @[components.py:326:Test.fir@18.4]
  assign io_out = _T_19[31:0]; // @[components.py:326:Test.fir@19.4]
endmodule
