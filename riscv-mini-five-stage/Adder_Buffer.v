module Addr_Buffer( // @[addr_buffer.py:21:Adder_Buffer.fir@2.2]
  input         clock, // @[rawmodule.py:100:Adder_Buffer.fir@3.4]
  input         reset, // @[rawmodule.py:101:Adder_Buffer.fir@4.4]
  input  [31:0] io_addr_input, // @[addr_buffer.py:11:Adder_Buffer.fir@5.4]
  input         io_flush, // @[addr_buffer.py:11:Adder_Buffer.fir@5.4]
  input         io_record, // @[addr_buffer.py:11:Adder_Buffer.fir@5.4]
  output [31:0] io_front // @[addr_buffer.py:11:Adder_Buffer.fir@5.4]
);
  reg [31:0] buffer [0:2]; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  reg [31:0] _RAND_0;
  wire [31:0] buffer__T_17_data; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  wire [1:0] buffer__T_17_addr; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  reg [31:0] _RAND_1;
  wire [31:0] buffer__T_18_data; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  wire [1:0] buffer__T_18_addr; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  reg [31:0] _RAND_2;
  wire [31:0] buffer__T_23_data; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  wire [1:0] buffer__T_23_addr; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  reg [31:0] _RAND_3;
  wire [31:0] buffer__T_24_data; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  wire [1:0] buffer__T_24_addr; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  reg [31:0] _RAND_4;
  wire [31:0] buffer__T_108_data; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  wire [1:0] buffer__T_108_addr; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  reg [31:0] _RAND_5;
  wire [31:0] buffer__T_110_data; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  wire [1:0] buffer__T_110_addr; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  reg [31:0] _RAND_6;
  wire [31:0] buffer__T_120_data; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  wire [1:0] buffer__T_120_addr; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  reg [31:0] _RAND_7;
  wire [31:0] buffer__T_122_data; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  wire [1:0] buffer__T_122_addr; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  reg [31:0] _RAND_8;
  wire [31:0] buffer__T_132_data; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  wire [1:0] buffer__T_132_addr; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  reg [31:0] _RAND_9;
  wire [31:0] buffer__T_134_data; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  wire [1:0] buffer__T_134_addr; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  reg [31:0] _RAND_10;
  wire [31:0] buffer__T_102_data; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  wire [1:0] buffer__T_102_addr; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  wire  buffer__T_102_mask; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  wire  buffer__T_102_en; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  wire [31:0] buffer__T_114_data; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  wire [1:0] buffer__T_114_addr; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  wire  buffer__T_114_mask; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  wire  buffer__T_114_en; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  wire [31:0] buffer__T_126_data; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  wire [1:0] buffer__T_126_addr; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  wire  buffer__T_126_mask; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  wire  buffer__T_126_en; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  reg [1:0] counter [0:2]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_11;
  wire [1:0] counter__T_11_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_11_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_12;
  wire [1:0] counter__T_12_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_12_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_13;
  wire [1:0] counter__T_14_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_14_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_14;
  wire [1:0] counter__T_15_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_15_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_15;
  wire [1:0] counter__T_20_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_20_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_16;
  wire [1:0] counter__T_21_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_21_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_17;
  wire [1:0] counter__T_53_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_53_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_18;
  wire [1:0] counter__T_59_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_59_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_19;
  wire [1:0] counter__T_65_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_65_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_20;
  wire [1:0] counter__T_71_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_71_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_21;
  wire [1:0] counter__T_74_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_74_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_22;
  wire [1:0] counter__T_76_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_76_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_23;
  wire [1:0] counter__T_82_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_82_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_24;
  wire [1:0] counter__T_85_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_85_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_25;
  wire [1:0] counter__T_87_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_87_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_26;
  wire [1:0] counter__T_93_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_93_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_27;
  wire [1:0] counter__T_96_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_96_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_28;
  wire [1:0] counter__T_98_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_98_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_29;
  wire [1:0] counter__T_104_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_104_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_30;
  wire [1:0] counter__T_116_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_116_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_31;
  wire [1:0] counter__T_128_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_128_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg [31:0] _RAND_32;
  wire [1:0] counter__T_69_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_69_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire  counter__T_69_mask; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire  counter__T_69_en; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_80_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_80_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire  counter__T_80_mask; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire  counter__T_80_en; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_91_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire [1:0] counter__T_91_addr; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire  counter__T_91_mask; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  wire  counter__T_91_en; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  reg  is_used [0:2]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  reg [31:0] _RAND_33;
  wire  is_used__T_27_data; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire [1:0] is_used__T_27_addr; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  reg [31:0] _RAND_34;
  wire  is_used__T_29_data; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire [1:0] is_used__T_29_addr; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  reg [31:0] _RAND_35;
  wire  is_used__T_35_data; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire [1:0] is_used__T_35_addr; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  reg [31:0] _RAND_36;
  wire  is_used__T_37_data; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire [1:0] is_used__T_37_addr; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  reg [31:0] _RAND_37;
  wire  is_used__T_41_data; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire [1:0] is_used__T_41_addr; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  reg [31:0] _RAND_38;
  wire  is_used__T_43_data; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire [1:0] is_used__T_43_addr; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  reg [31:0] _RAND_39;
  wire  is_used__T_47_data; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire [1:0] is_used__T_47_addr; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  reg [31:0] _RAND_40;
  wire  is_used__T_49_data; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire [1:0] is_used__T_49_addr; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  reg [31:0] _RAND_41;
  wire  is_used__T_73_data; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire [1:0] is_used__T_73_addr; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  reg [31:0] _RAND_42;
  wire  is_used__T_84_data; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire [1:0] is_used__T_84_addr; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  reg [31:0] _RAND_43;
  wire  is_used__T_95_data; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire [1:0] is_used__T_95_addr; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  reg [31:0] _RAND_44;
  wire  is_used__T_51_data; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire [1:0] is_used__T_51_addr; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire  is_used__T_51_mask; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire  is_used__T_51_en; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire  is_used__T_57_data; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire [1:0] is_used__T_57_addr; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire  is_used__T_57_mask; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire  is_used__T_57_en; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire  is_used__T_63_data; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire [1:0] is_used__T_63_addr; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire  is_used__T_63_mask; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire  is_used__T_63_en; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  wire  _T_13; // @[addr_buffer.py:28:Adder_Buffer.fir@12.4]
  wire  _T_16; // @[addr_buffer.py:29:Adder_Buffer.fir@15.4]
  wire [31:0] _T_19; // @[addr_buffer.py:29:Adder_Buffer.fir@18.4]
  wire  _T_22; // @[addr_buffer.py:30:Adder_Buffer.fir@21.4]
  wire [31:0] _T_25; // @[addr_buffer.py:30:Adder_Buffer.fir@24.4]
  wire  _T_28; // @[addr_buffer.py:32:Adder_Buffer.fir@28.4]
  wire  _T_30; // @[addr_buffer.py:32:Adder_Buffer.fir@30.4]
  wire [1:0] _T_31; // @[addr_buffer.py:32:Adder_Buffer.fir@31.4]
  wire [1:0] _T_32; // @[addr_buffer.py:32:Adder_Buffer.fir@32.4]
  wire  _T_34; // @[addr_buffer.py:37:Adder_Buffer.fir@34.4]
  wire  _T_36; // @[addr_buffer.py:37:Adder_Buffer.fir@36.4]
  wire  _T_38; // @[addr_buffer.py:38:Adder_Buffer.fir@38.4]
  wire  _T_40; // @[addr_buffer.py:37:Adder_Buffer.fir@40.4]
  wire  _T_42; // @[addr_buffer.py:37:Adder_Buffer.fir@42.4]
  wire  _T_44; // @[addr_buffer.py:38:Adder_Buffer.fir@44.4]
  wire  _T_46; // @[addr_buffer.py:37:Adder_Buffer.fir@46.4]
  wire  _T_48; // @[addr_buffer.py:37:Adder_Buffer.fir@48.4]
  wire  _T_50; // @[addr_buffer.py:38:Adder_Buffer.fir@50.4]
  wire  _T_54; // @[addr_buffer.py:41:Adder_Buffer.fir@54.4]
  wire  _T_55; // @[addr_buffer.py:42:Adder_Buffer.fir@55.4]
  wire  _T_60; // @[addr_buffer.py:41:Adder_Buffer.fir@61.4]
  wire  _T_61; // @[addr_buffer.py:42:Adder_Buffer.fir@62.4]
  wire  _T_66; // @[addr_buffer.py:41:Adder_Buffer.fir@68.4]
  wire  _T_67; // @[addr_buffer.py:42:Adder_Buffer.fir@69.4]
  wire  _T_72; // @[addr_buffer.py:46:Adder_Buffer.fir@75.4]
  wire [2:0] _T_75; // @[addr_buffer.py:47:Adder_Buffer.fir@78.4]
  wire [2:0] _T_77; // @[addr_buffer.py:47:Adder_Buffer.fir@80.4]
  wire [2:0] _T_78; // @[addr_buffer.py:47:Adder_Buffer.fir@81.4]
  wire [2:0] _T_79; // @[addr_buffer.py:47:Adder_Buffer.fir@82.4]
  wire  _T_83; // @[addr_buffer.py:46:Adder_Buffer.fir@87.4]
  wire [2:0] _T_86; // @[addr_buffer.py:47:Adder_Buffer.fir@90.4]
  wire [2:0] _T_88; // @[addr_buffer.py:47:Adder_Buffer.fir@92.4]
  wire [2:0] _T_89; // @[addr_buffer.py:47:Adder_Buffer.fir@93.4]
  wire [2:0] _T_90; // @[addr_buffer.py:47:Adder_Buffer.fir@94.4]
  wire  _T_94; // @[addr_buffer.py:46:Adder_Buffer.fir@99.4]
  wire [2:0] _T_97; // @[addr_buffer.py:47:Adder_Buffer.fir@102.4]
  wire [2:0] _T_99; // @[addr_buffer.py:47:Adder_Buffer.fir@104.4]
  wire [2:0] _T_100; // @[addr_buffer.py:47:Adder_Buffer.fir@105.4]
  wire [2:0] _T_101; // @[addr_buffer.py:47:Adder_Buffer.fir@106.4]
  wire  _T_105; // @[addr_buffer.py:51:Adder_Buffer.fir@111.4]
  wire [31:0] _T_109; // @[addr_buffer.py:53:Adder_Buffer.fir@115.4]
  wire [31:0] _T_111; // @[addr_buffer.py:54:Adder_Buffer.fir@117.4]
  wire [31:0] _T_112; // @[addr_buffer.py:54:Adder_Buffer.fir@118.4]
  wire  _T_117; // @[addr_buffer.py:51:Adder_Buffer.fir@124.4]
  wire [31:0] _T_121; // @[addr_buffer.py:53:Adder_Buffer.fir@128.4]
  wire [31:0] _T_123; // @[addr_buffer.py:54:Adder_Buffer.fir@130.4]
  wire [31:0] _T_124; // @[addr_buffer.py:54:Adder_Buffer.fir@131.4]
  wire  _T_129; // @[addr_buffer.py:51:Adder_Buffer.fir@137.4]
  wire [31:0] _T_133; // @[addr_buffer.py:53:Adder_Buffer.fir@141.4]
  wire [31:0] _T_135; // @[addr_buffer.py:54:Adder_Buffer.fir@143.4]
  wire [31:0] _T_136; // @[addr_buffer.py:54:Adder_Buffer.fir@144.4]
  assign buffer__T_17_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_17_data = buffer[buffer__T_17_addr]; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  `else
  assign buffer__T_17_data = buffer__T_17_addr >= 2'h3 ? _RAND_1[31:0] : buffer[buffer__T_17_addr]; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_18_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_18_data = buffer[buffer__T_18_addr]; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  `else
  assign buffer__T_18_data = buffer__T_18_addr >= 2'h3 ? _RAND_2[31:0] : buffer[buffer__T_18_addr]; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_23_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_23_data = buffer[buffer__T_23_addr]; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  `else
  assign buffer__T_23_data = buffer__T_23_addr >= 2'h3 ? _RAND_3[31:0] : buffer[buffer__T_23_addr]; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_24_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_24_data = buffer[buffer__T_24_addr]; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  `else
  assign buffer__T_24_data = buffer__T_24_addr >= 2'h3 ? _RAND_4[31:0] : buffer[buffer__T_24_addr]; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_108_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_108_data = buffer[buffer__T_108_addr]; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  `else
  assign buffer__T_108_data = buffer__T_108_addr >= 2'h3 ? _RAND_5[31:0] : buffer[buffer__T_108_addr]; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_110_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_110_data = buffer[buffer__T_110_addr]; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  `else
  assign buffer__T_110_data = buffer__T_110_addr >= 2'h3 ? _RAND_6[31:0] : buffer[buffer__T_110_addr]; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_120_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_120_data = buffer[buffer__T_120_addr]; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  `else
  assign buffer__T_120_data = buffer__T_120_addr >= 2'h3 ? _RAND_7[31:0] : buffer[buffer__T_120_addr]; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_122_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_122_data = buffer[buffer__T_122_addr]; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  `else
  assign buffer__T_122_data = buffer__T_122_addr >= 2'h3 ? _RAND_8[31:0] : buffer[buffer__T_122_addr]; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_132_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_132_data = buffer[buffer__T_132_addr]; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  `else
  assign buffer__T_132_data = buffer__T_132_addr >= 2'h3 ? _RAND_9[31:0] : buffer[buffer__T_132_addr]; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_134_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_134_data = buffer[buffer__T_134_addr]; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  `else
  assign buffer__T_134_data = buffer__T_134_addr >= 2'h3 ? _RAND_10[31:0] : buffer[buffer__T_134_addr]; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_102_data = io_flush ? 32'h0 : _T_112;
  assign buffer__T_102_addr = 2'h0;
  assign buffer__T_102_mask = 1'h1;
  assign buffer__T_102_en = 1'h1;
  assign buffer__T_114_data = io_flush ? 32'h0 : _T_124;
  assign buffer__T_114_addr = 2'h1;
  assign buffer__T_114_mask = 1'h1;
  assign buffer__T_114_en = 1'h1;
  assign buffer__T_126_data = io_flush ? 32'h0 : _T_136;
  assign buffer__T_126_addr = 2'h2;
  assign buffer__T_126_mask = 1'h1;
  assign buffer__T_126_en = 1'h1;
  assign counter__T_11_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_11_data = counter[counter__T_11_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `else
  assign counter__T_11_data = counter__T_11_addr >= 2'h3 ? _RAND_12[1:0] : counter[counter__T_11_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_12_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_12_data = counter[counter__T_12_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `else
  assign counter__T_12_data = counter__T_12_addr >= 2'h3 ? _RAND_13[1:0] : counter[counter__T_12_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_14_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_14_data = counter[counter__T_14_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `else
  assign counter__T_14_data = counter__T_14_addr >= 2'h3 ? _RAND_14[1:0] : counter[counter__T_14_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_15_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_15_data = counter[counter__T_15_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `else
  assign counter__T_15_data = counter__T_15_addr >= 2'h3 ? _RAND_15[1:0] : counter[counter__T_15_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_20_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_20_data = counter[counter__T_20_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `else
  assign counter__T_20_data = counter__T_20_addr >= 2'h3 ? _RAND_16[1:0] : counter[counter__T_20_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_21_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_21_data = counter[counter__T_21_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `else
  assign counter__T_21_data = counter__T_21_addr >= 2'h3 ? _RAND_17[1:0] : counter[counter__T_21_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_53_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_53_data = counter[counter__T_53_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `else
  assign counter__T_53_data = counter__T_53_addr >= 2'h3 ? _RAND_18[1:0] : counter[counter__T_53_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_59_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_59_data = counter[counter__T_59_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `else
  assign counter__T_59_data = counter__T_59_addr >= 2'h3 ? _RAND_19[1:0] : counter[counter__T_59_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_65_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_65_data = counter[counter__T_65_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `else
  assign counter__T_65_data = counter__T_65_addr >= 2'h3 ? _RAND_20[1:0] : counter[counter__T_65_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_71_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_71_data = counter[counter__T_71_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `else
  assign counter__T_71_data = counter__T_71_addr >= 2'h3 ? _RAND_21[1:0] : counter[counter__T_71_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_74_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_74_data = counter[counter__T_74_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `else
  assign counter__T_74_data = counter__T_74_addr >= 2'h3 ? _RAND_22[1:0] : counter[counter__T_74_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_76_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_76_data = counter[counter__T_76_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `else
  assign counter__T_76_data = counter__T_76_addr >= 2'h3 ? _RAND_23[1:0] : counter[counter__T_76_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_82_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_82_data = counter[counter__T_82_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `else
  assign counter__T_82_data = counter__T_82_addr >= 2'h3 ? _RAND_24[1:0] : counter[counter__T_82_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_85_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_85_data = counter[counter__T_85_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `else
  assign counter__T_85_data = counter__T_85_addr >= 2'h3 ? _RAND_25[1:0] : counter[counter__T_85_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_87_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_87_data = counter[counter__T_87_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `else
  assign counter__T_87_data = counter__T_87_addr >= 2'h3 ? _RAND_26[1:0] : counter[counter__T_87_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_93_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_93_data = counter[counter__T_93_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `else
  assign counter__T_93_data = counter__T_93_addr >= 2'h3 ? _RAND_27[1:0] : counter[counter__T_93_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_96_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_96_data = counter[counter__T_96_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `else
  assign counter__T_96_data = counter__T_96_addr >= 2'h3 ? _RAND_28[1:0] : counter[counter__T_96_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_98_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_98_data = counter[counter__T_98_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `else
  assign counter__T_98_data = counter__T_98_addr >= 2'h3 ? _RAND_29[1:0] : counter[counter__T_98_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_104_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_104_data = counter[counter__T_104_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `else
  assign counter__T_104_data = counter__T_104_addr >= 2'h3 ? _RAND_30[1:0] : counter[counter__T_104_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_116_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_116_data = counter[counter__T_116_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `else
  assign counter__T_116_data = counter__T_116_addr >= 2'h3 ? _RAND_31[1:0] : counter[counter__T_116_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_128_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_128_data = counter[counter__T_128_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `else
  assign counter__T_128_data = counter__T_128_addr >= 2'h3 ? _RAND_32[1:0] : counter[counter__T_128_addr]; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_69_data = _T_79[1:0];
  assign counter__T_69_addr = 2'h0;
  assign counter__T_69_mask = 1'h1;
  assign counter__T_69_en = 1'h1;
  assign counter__T_80_data = _T_90[1:0];
  assign counter__T_80_addr = 2'h1;
  assign counter__T_80_mask = 1'h1;
  assign counter__T_80_en = 1'h1;
  assign counter__T_91_data = _T_101[1:0];
  assign counter__T_91_addr = 2'h2;
  assign counter__T_91_mask = 1'h1;
  assign counter__T_91_en = 1'h1;
  assign is_used__T_27_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_27_data = is_used[is_used__T_27_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `else
  assign is_used__T_27_data = is_used__T_27_addr >= 2'h3 ? _RAND_34[0:0] : is_used[is_used__T_27_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_29_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_29_data = is_used[is_used__T_29_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `else
  assign is_used__T_29_data = is_used__T_29_addr >= 2'h3 ? _RAND_35[0:0] : is_used[is_used__T_29_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_35_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_35_data = is_used[is_used__T_35_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `else
  assign is_used__T_35_data = is_used__T_35_addr >= 2'h3 ? _RAND_36[0:0] : is_used[is_used__T_35_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_37_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_37_data = is_used[is_used__T_37_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `else
  assign is_used__T_37_data = is_used__T_37_addr >= 2'h3 ? _RAND_37[0:0] : is_used[is_used__T_37_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_41_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_41_data = is_used[is_used__T_41_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `else
  assign is_used__T_41_data = is_used__T_41_addr >= 2'h3 ? _RAND_38[0:0] : is_used[is_used__T_41_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_43_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_43_data = is_used[is_used__T_43_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `else
  assign is_used__T_43_data = is_used__T_43_addr >= 2'h3 ? _RAND_39[0:0] : is_used[is_used__T_43_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_47_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_47_data = is_used[is_used__T_47_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `else
  assign is_used__T_47_data = is_used__T_47_addr >= 2'h3 ? _RAND_40[0:0] : is_used[is_used__T_47_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_49_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_49_data = is_used[is_used__T_49_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `else
  assign is_used__T_49_data = is_used__T_49_addr >= 2'h3 ? _RAND_41[0:0] : is_used[is_used__T_49_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_73_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_73_data = is_used[is_used__T_73_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `else
  assign is_used__T_73_data = is_used__T_73_addr >= 2'h3 ? _RAND_42[0:0] : is_used[is_used__T_73_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_84_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_84_data = is_used[is_used__T_84_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `else
  assign is_used__T_84_data = is_used__T_84_addr >= 2'h3 ? _RAND_43[0:0] : is_used[is_used__T_84_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_95_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_95_data = is_used[is_used__T_95_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `else
  assign is_used__T_95_data = is_used__T_95_addr >= 2'h3 ? _RAND_44[0:0] : is_used[is_used__T_95_addr]; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_51_data = io_flush ? 1'h0 : _T_55;
  assign is_used__T_51_addr = 2'h0;
  assign is_used__T_51_mask = 1'h1;
  assign is_used__T_51_en = 1'h1;
  assign is_used__T_57_data = io_flush ? 1'h0 : _T_61;
  assign is_used__T_57_addr = 2'h1;
  assign is_used__T_57_mask = 1'h1;
  assign is_used__T_57_en = 1'h1;
  assign is_used__T_63_data = io_flush ? 1'h0 : _T_67;
  assign is_used__T_63_addr = 2'h2;
  assign is_used__T_63_mask = 1'h1;
  assign is_used__T_63_en = 1'h1;
  assign _T_13 = counter__T_11_data > counter__T_12_data; // @[addr_buffer.py:28:Adder_Buffer.fir@12.4]
  assign _T_16 = counter__T_14_data > counter__T_15_data; // @[addr_buffer.py:29:Adder_Buffer.fir@15.4]
  assign _T_19 = _T_16 ? buffer__T_17_data : buffer__T_18_data; // @[addr_buffer.py:29:Adder_Buffer.fir@18.4]
  assign _T_22 = counter__T_20_data > counter__T_21_data; // @[addr_buffer.py:30:Adder_Buffer.fir@21.4]
  assign _T_25 = _T_22 ? buffer__T_23_data : buffer__T_24_data; // @[addr_buffer.py:30:Adder_Buffer.fir@24.4]
  assign _T_28 = 1'h0 == is_used__T_27_data; // @[addr_buffer.py:32:Adder_Buffer.fir@28.4]
  assign _T_30 = 1'h0 == is_used__T_29_data; // @[addr_buffer.py:32:Adder_Buffer.fir@30.4]
  assign _T_31 = _T_30 ? 2'h1 : 2'h2; // @[addr_buffer.py:32:Adder_Buffer.fir@31.4]
  assign _T_32 = _T_28 ? 2'h0 : _T_31; // @[addr_buffer.py:32:Adder_Buffer.fir@32.4]
  assign _T_34 = 2'h0 == _T_32; // @[addr_buffer.py:37:Adder_Buffer.fir@34.4]
  assign _T_36 = _T_34 ? 1'h1 : is_used__T_35_data; // @[addr_buffer.py:37:Adder_Buffer.fir@36.4]
  assign _T_38 = io_record ? _T_36 : is_used__T_37_data; // @[addr_buffer.py:38:Adder_Buffer.fir@38.4]
  assign _T_40 = 2'h1 == _T_32; // @[addr_buffer.py:37:Adder_Buffer.fir@40.4]
  assign _T_42 = _T_40 ? 1'h1 : is_used__T_41_data; // @[addr_buffer.py:37:Adder_Buffer.fir@42.4]
  assign _T_44 = io_record ? _T_42 : is_used__T_43_data; // @[addr_buffer.py:38:Adder_Buffer.fir@44.4]
  assign _T_46 = 2'h2 == _T_32; // @[addr_buffer.py:37:Adder_Buffer.fir@46.4]
  assign _T_48 = _T_46 ? 1'h1 : is_used__T_47_data; // @[addr_buffer.py:37:Adder_Buffer.fir@48.4]
  assign _T_50 = io_record ? _T_48 : is_used__T_49_data; // @[addr_buffer.py:38:Adder_Buffer.fir@50.4]
  assign _T_54 = 2'h2 == counter__T_53_data; // @[addr_buffer.py:41:Adder_Buffer.fir@54.4]
  assign _T_55 = _T_54 ? 1'h0 : _T_38; // @[addr_buffer.py:42:Adder_Buffer.fir@55.4]
  assign _T_60 = 2'h2 == counter__T_59_data; // @[addr_buffer.py:41:Adder_Buffer.fir@61.4]
  assign _T_61 = _T_60 ? 1'h0 : _T_44; // @[addr_buffer.py:42:Adder_Buffer.fir@62.4]
  assign _T_66 = 2'h2 == counter__T_65_data; // @[addr_buffer.py:41:Adder_Buffer.fir@68.4]
  assign _T_67 = _T_66 ? 1'h0 : _T_50; // @[addr_buffer.py:42:Adder_Buffer.fir@69.4]
  assign _T_72 = 2'h2 == counter__T_71_data; // @[addr_buffer.py:46:Adder_Buffer.fir@75.4]
  assign _T_75 = counter__T_74_data + 2'h1; // @[addr_buffer.py:47:Adder_Buffer.fir@78.4]
  assign _T_77 = is_used__T_73_data ? _T_75 : {{1'd0}, counter__T_76_data}; // @[addr_buffer.py:47:Adder_Buffer.fir@80.4]
  assign _T_78 = _T_72 ? 3'h0 : _T_77; // @[addr_buffer.py:47:Adder_Buffer.fir@81.4]
  assign _T_79 = io_flush ? 3'h0 : _T_78; // @[addr_buffer.py:47:Adder_Buffer.fir@82.4]
  assign _T_83 = 2'h2 == counter__T_82_data; // @[addr_buffer.py:46:Adder_Buffer.fir@87.4]
  assign _T_86 = counter__T_85_data + 2'h1; // @[addr_buffer.py:47:Adder_Buffer.fir@90.4]
  assign _T_88 = is_used__T_84_data ? _T_86 : {{1'd0}, counter__T_87_data}; // @[addr_buffer.py:47:Adder_Buffer.fir@92.4]
  assign _T_89 = _T_83 ? 3'h0 : _T_88; // @[addr_buffer.py:47:Adder_Buffer.fir@93.4]
  assign _T_90 = io_flush ? 3'h0 : _T_89; // @[addr_buffer.py:47:Adder_Buffer.fir@94.4]
  assign _T_94 = 2'h2 == counter__T_93_data; // @[addr_buffer.py:46:Adder_Buffer.fir@99.4]
  assign _T_97 = counter__T_96_data + 2'h1; // @[addr_buffer.py:47:Adder_Buffer.fir@102.4]
  assign _T_99 = is_used__T_95_data ? _T_97 : {{1'd0}, counter__T_98_data}; // @[addr_buffer.py:47:Adder_Buffer.fir@104.4]
  assign _T_100 = _T_94 ? 3'h0 : _T_99; // @[addr_buffer.py:47:Adder_Buffer.fir@105.4]
  assign _T_101 = io_flush ? 3'h0 : _T_100; // @[addr_buffer.py:47:Adder_Buffer.fir@106.4]
  assign _T_105 = 2'h2 == counter__T_104_data; // @[addr_buffer.py:51:Adder_Buffer.fir@111.4]
  assign _T_109 = _T_34 ? io_addr_input : buffer__T_108_data; // @[addr_buffer.py:53:Adder_Buffer.fir@115.4]
  assign _T_111 = io_record ? _T_109 : buffer__T_110_data; // @[addr_buffer.py:54:Adder_Buffer.fir@117.4]
  assign _T_112 = _T_105 ? 32'h0 : _T_111; // @[addr_buffer.py:54:Adder_Buffer.fir@118.4]
  assign _T_117 = 2'h2 == counter__T_116_data; // @[addr_buffer.py:51:Adder_Buffer.fir@124.4]
  assign _T_121 = _T_40 ? io_addr_input : buffer__T_120_data; // @[addr_buffer.py:53:Adder_Buffer.fir@128.4]
  assign _T_123 = io_record ? _T_121 : buffer__T_122_data; // @[addr_buffer.py:54:Adder_Buffer.fir@130.4]
  assign _T_124 = _T_117 ? 32'h0 : _T_123; // @[addr_buffer.py:54:Adder_Buffer.fir@131.4]
  assign _T_129 = 2'h2 == counter__T_128_data; // @[addr_buffer.py:51:Adder_Buffer.fir@137.4]
  assign _T_133 = _T_46 ? io_addr_input : buffer__T_132_data; // @[addr_buffer.py:53:Adder_Buffer.fir@141.4]
  assign _T_135 = io_record ? _T_133 : buffer__T_134_data; // @[addr_buffer.py:54:Adder_Buffer.fir@143.4]
  assign _T_136 = _T_129 ? 32'h0 : _T_135; // @[addr_buffer.py:54:Adder_Buffer.fir@144.4]
  assign io_front = _T_13 ? _T_19 : _T_25; // @[addr_buffer.py:30:Adder_Buffer.fir@26.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 3; initvar = initvar+1)
    buffer[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_1 = {1{`RANDOM}};
  _RAND_2 = {1{`RANDOM}};
  _RAND_3 = {1{`RANDOM}};
  _RAND_4 = {1{`RANDOM}};
  _RAND_5 = {1{`RANDOM}};
  _RAND_6 = {1{`RANDOM}};
  _RAND_7 = {1{`RANDOM}};
  _RAND_8 = {1{`RANDOM}};
  _RAND_9 = {1{`RANDOM}};
  _RAND_10 = {1{`RANDOM}};
  _RAND_11 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 3; initvar = initvar+1)
    counter[initvar] = _RAND_11[1:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_12 = {1{`RANDOM}};
  _RAND_13 = {1{`RANDOM}};
  _RAND_14 = {1{`RANDOM}};
  _RAND_15 = {1{`RANDOM}};
  _RAND_16 = {1{`RANDOM}};
  _RAND_17 = {1{`RANDOM}};
  _RAND_18 = {1{`RANDOM}};
  _RAND_19 = {1{`RANDOM}};
  _RAND_20 = {1{`RANDOM}};
  _RAND_21 = {1{`RANDOM}};
  _RAND_22 = {1{`RANDOM}};
  _RAND_23 = {1{`RANDOM}};
  _RAND_24 = {1{`RANDOM}};
  _RAND_25 = {1{`RANDOM}};
  _RAND_26 = {1{`RANDOM}};
  _RAND_27 = {1{`RANDOM}};
  _RAND_28 = {1{`RANDOM}};
  _RAND_29 = {1{`RANDOM}};
  _RAND_30 = {1{`RANDOM}};
  _RAND_31 = {1{`RANDOM}};
  _RAND_32 = {1{`RANDOM}};
  _RAND_33 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 3; initvar = initvar+1)
    is_used[initvar] = _RAND_33[0:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_34 = {1{`RANDOM}};
  _RAND_35 = {1{`RANDOM}};
  _RAND_36 = {1{`RANDOM}};
  _RAND_37 = {1{`RANDOM}};
  _RAND_38 = {1{`RANDOM}};
  _RAND_39 = {1{`RANDOM}};
  _RAND_40 = {1{`RANDOM}};
  _RAND_41 = {1{`RANDOM}};
  _RAND_42 = {1{`RANDOM}};
  _RAND_43 = {1{`RANDOM}};
  _RAND_44 = {1{`RANDOM}};
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if(buffer__T_102_en & buffer__T_102_mask) begin
      buffer[buffer__T_102_addr] <= buffer__T_102_data; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
    end
    if(buffer__T_114_en & buffer__T_114_mask) begin
      buffer[buffer__T_114_addr] <= buffer__T_114_data; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
    end
    if(buffer__T_126_en & buffer__T_126_mask) begin
      buffer[buffer__T_126_addr] <= buffer__T_126_data; // @[addr_buffer.py:24:Adder_Buffer.fir@7.4]
    end
    if(counter__T_69_en & counter__T_69_mask) begin
      counter[counter__T_69_addr] <= counter__T_69_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
    end
    if(counter__T_80_en & counter__T_80_mask) begin
      counter[counter__T_80_addr] <= counter__T_80_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
    end
    if(counter__T_91_en & counter__T_91_mask) begin
      counter[counter__T_91_addr] <= counter__T_91_data; // @[addr_buffer.py:25:Adder_Buffer.fir@8.4]
    end
    if(is_used__T_51_en & is_used__T_51_mask) begin
      is_used[is_used__T_51_addr] <= is_used__T_51_data; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
    end
    if(is_used__T_57_en & is_used__T_57_mask) begin
      is_used[is_used__T_57_addr] <= is_used__T_57_data; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
    end
    if(is_used__T_63_en & is_used__T_63_mask) begin
      is_used[is_used__T_63_addr] <= is_used__T_63_data; // @[rawdata.py:698:Adder_Buffer.fir@9.4]
    end
  end
endmodule
