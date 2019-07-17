module Addr_Buffer( // @[addr_buffer.py:21:Tile.fir@2.2]
  input         clock, // @[rawmodule.py:100:Tile.fir@3.4]
  input  [31:0] io_addr_input, // @[addr_buffer.py:11:Tile.fir@5.4]
  input         io_flush, // @[addr_buffer.py:11:Tile.fir@5.4]
  input         io_record, // @[addr_buffer.py:11:Tile.fir@5.4]
  output [31:0] io_front // @[addr_buffer.py:11:Tile.fir@5.4]
);
  reg [31:0] buffer [0:2]; // @[addr_buffer.py:24:Tile.fir@7.4]
  reg [31:0] _RAND_0;
  wire [31:0] buffer__T_1116_data; // @[addr_buffer.py:24:Tile.fir@7.4]
  wire [1:0] buffer__T_1116_addr; // @[addr_buffer.py:24:Tile.fir@7.4]
  reg [31:0] _RAND_1;
  wire [31:0] buffer__T_1117_data; // @[addr_buffer.py:24:Tile.fir@7.4]
  wire [1:0] buffer__T_1117_addr; // @[addr_buffer.py:24:Tile.fir@7.4]
  reg [31:0] _RAND_2;
  wire [31:0] buffer__T_1122_data; // @[addr_buffer.py:24:Tile.fir@7.4]
  wire [1:0] buffer__T_1122_addr; // @[addr_buffer.py:24:Tile.fir@7.4]
  reg [31:0] _RAND_3;
  wire [31:0] buffer__T_1123_data; // @[addr_buffer.py:24:Tile.fir@7.4]
  wire [1:0] buffer__T_1123_addr; // @[addr_buffer.py:24:Tile.fir@7.4]
  reg [31:0] _RAND_4;
  wire [31:0] buffer__T_1207_data; // @[addr_buffer.py:24:Tile.fir@7.4]
  wire [1:0] buffer__T_1207_addr; // @[addr_buffer.py:24:Tile.fir@7.4]
  reg [31:0] _RAND_5;
  wire [31:0] buffer__T_1209_data; // @[addr_buffer.py:24:Tile.fir@7.4]
  wire [1:0] buffer__T_1209_addr; // @[addr_buffer.py:24:Tile.fir@7.4]
  reg [31:0] _RAND_6;
  wire [31:0] buffer__T_1219_data; // @[addr_buffer.py:24:Tile.fir@7.4]
  wire [1:0] buffer__T_1219_addr; // @[addr_buffer.py:24:Tile.fir@7.4]
  reg [31:0] _RAND_7;
  wire [31:0] buffer__T_1221_data; // @[addr_buffer.py:24:Tile.fir@7.4]
  wire [1:0] buffer__T_1221_addr; // @[addr_buffer.py:24:Tile.fir@7.4]
  reg [31:0] _RAND_8;
  wire [31:0] buffer__T_1231_data; // @[addr_buffer.py:24:Tile.fir@7.4]
  wire [1:0] buffer__T_1231_addr; // @[addr_buffer.py:24:Tile.fir@7.4]
  reg [31:0] _RAND_9;
  wire [31:0] buffer__T_1233_data; // @[addr_buffer.py:24:Tile.fir@7.4]
  wire [1:0] buffer__T_1233_addr; // @[addr_buffer.py:24:Tile.fir@7.4]
  reg [31:0] _RAND_10;
  wire [31:0] buffer__T_1201_data; // @[addr_buffer.py:24:Tile.fir@7.4]
  wire [1:0] buffer__T_1201_addr; // @[addr_buffer.py:24:Tile.fir@7.4]
  wire  buffer__T_1201_mask; // @[addr_buffer.py:24:Tile.fir@7.4]
  wire  buffer__T_1201_en; // @[addr_buffer.py:24:Tile.fir@7.4]
  wire [31:0] buffer__T_1213_data; // @[addr_buffer.py:24:Tile.fir@7.4]
  wire [1:0] buffer__T_1213_addr; // @[addr_buffer.py:24:Tile.fir@7.4]
  wire  buffer__T_1213_mask; // @[addr_buffer.py:24:Tile.fir@7.4]
  wire  buffer__T_1213_en; // @[addr_buffer.py:24:Tile.fir@7.4]
  wire [31:0] buffer__T_1225_data; // @[addr_buffer.py:24:Tile.fir@7.4]
  wire [1:0] buffer__T_1225_addr; // @[addr_buffer.py:24:Tile.fir@7.4]
  wire  buffer__T_1225_mask; // @[addr_buffer.py:24:Tile.fir@7.4]
  wire  buffer__T_1225_en; // @[addr_buffer.py:24:Tile.fir@7.4]
  reg [1:0] counter [0:2]; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_11;
  wire [1:0] counter__T_1110_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1110_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_12;
  wire [1:0] counter__T_1111_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1111_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_13;
  wire [1:0] counter__T_1113_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1113_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_14;
  wire [1:0] counter__T_1114_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1114_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_15;
  wire [1:0] counter__T_1119_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1119_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_16;
  wire [1:0] counter__T_1120_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1120_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_17;
  wire [1:0] counter__T_1152_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1152_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_18;
  wire [1:0] counter__T_1158_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1158_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_19;
  wire [1:0] counter__T_1164_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1164_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_20;
  wire [1:0] counter__T_1170_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1170_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_21;
  wire [1:0] counter__T_1173_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1173_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_22;
  wire [1:0] counter__T_1175_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1175_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_23;
  wire [1:0] counter__T_1181_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1181_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_24;
  wire [1:0] counter__T_1184_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1184_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_25;
  wire [1:0] counter__T_1186_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1186_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_26;
  wire [1:0] counter__T_1192_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1192_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_27;
  wire [1:0] counter__T_1195_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1195_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_28;
  wire [1:0] counter__T_1197_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1197_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_29;
  wire [1:0] counter__T_1203_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1203_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_30;
  wire [1:0] counter__T_1215_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1215_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_31;
  wire [1:0] counter__T_1227_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1227_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg [31:0] _RAND_32;
  wire [1:0] counter__T_1168_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1168_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire  counter__T_1168_mask; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire  counter__T_1168_en; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1179_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1179_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire  counter__T_1179_mask; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire  counter__T_1179_en; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1190_data; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire [1:0] counter__T_1190_addr; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire  counter__T_1190_mask; // @[addr_buffer.py:25:Tile.fir@8.4]
  wire  counter__T_1190_en; // @[addr_buffer.py:25:Tile.fir@8.4]
  reg  is_used [0:2]; // @[rawdata.py:698:Tile.fir@9.4]
  reg [31:0] _RAND_33;
  wire  is_used__T_1126_data; // @[rawdata.py:698:Tile.fir@9.4]
  wire [1:0] is_used__T_1126_addr; // @[rawdata.py:698:Tile.fir@9.4]
  reg [31:0] _RAND_34;
  wire  is_used__T_1128_data; // @[rawdata.py:698:Tile.fir@9.4]
  wire [1:0] is_used__T_1128_addr; // @[rawdata.py:698:Tile.fir@9.4]
  reg [31:0] _RAND_35;
  wire  is_used__T_1134_data; // @[rawdata.py:698:Tile.fir@9.4]
  wire [1:0] is_used__T_1134_addr; // @[rawdata.py:698:Tile.fir@9.4]
  reg [31:0] _RAND_36;
  wire  is_used__T_1136_data; // @[rawdata.py:698:Tile.fir@9.4]
  wire [1:0] is_used__T_1136_addr; // @[rawdata.py:698:Tile.fir@9.4]
  reg [31:0] _RAND_37;
  wire  is_used__T_1140_data; // @[rawdata.py:698:Tile.fir@9.4]
  wire [1:0] is_used__T_1140_addr; // @[rawdata.py:698:Tile.fir@9.4]
  reg [31:0] _RAND_38;
  wire  is_used__T_1142_data; // @[rawdata.py:698:Tile.fir@9.4]
  wire [1:0] is_used__T_1142_addr; // @[rawdata.py:698:Tile.fir@9.4]
  reg [31:0] _RAND_39;
  wire  is_used__T_1146_data; // @[rawdata.py:698:Tile.fir@9.4]
  wire [1:0] is_used__T_1146_addr; // @[rawdata.py:698:Tile.fir@9.4]
  reg [31:0] _RAND_40;
  wire  is_used__T_1148_data; // @[rawdata.py:698:Tile.fir@9.4]
  wire [1:0] is_used__T_1148_addr; // @[rawdata.py:698:Tile.fir@9.4]
  reg [31:0] _RAND_41;
  wire  is_used__T_1172_data; // @[rawdata.py:698:Tile.fir@9.4]
  wire [1:0] is_used__T_1172_addr; // @[rawdata.py:698:Tile.fir@9.4]
  reg [31:0] _RAND_42;
  wire  is_used__T_1183_data; // @[rawdata.py:698:Tile.fir@9.4]
  wire [1:0] is_used__T_1183_addr; // @[rawdata.py:698:Tile.fir@9.4]
  reg [31:0] _RAND_43;
  wire  is_used__T_1194_data; // @[rawdata.py:698:Tile.fir@9.4]
  wire [1:0] is_used__T_1194_addr; // @[rawdata.py:698:Tile.fir@9.4]
  reg [31:0] _RAND_44;
  wire  is_used__T_1150_data; // @[rawdata.py:698:Tile.fir@9.4]
  wire [1:0] is_used__T_1150_addr; // @[rawdata.py:698:Tile.fir@9.4]
  wire  is_used__T_1150_mask; // @[rawdata.py:698:Tile.fir@9.4]
  wire  is_used__T_1150_en; // @[rawdata.py:698:Tile.fir@9.4]
  wire  is_used__T_1156_data; // @[rawdata.py:698:Tile.fir@9.4]
  wire [1:0] is_used__T_1156_addr; // @[rawdata.py:698:Tile.fir@9.4]
  wire  is_used__T_1156_mask; // @[rawdata.py:698:Tile.fir@9.4]
  wire  is_used__T_1156_en; // @[rawdata.py:698:Tile.fir@9.4]
  wire  is_used__T_1162_data; // @[rawdata.py:698:Tile.fir@9.4]
  wire [1:0] is_used__T_1162_addr; // @[rawdata.py:698:Tile.fir@9.4]
  wire  is_used__T_1162_mask; // @[rawdata.py:698:Tile.fir@9.4]
  wire  is_used__T_1162_en; // @[rawdata.py:698:Tile.fir@9.4]
  wire  _T_1112; // @[addr_buffer.py:28:Tile.fir@12.4]
  wire  _T_1115; // @[addr_buffer.py:29:Tile.fir@15.4]
  wire [31:0] _T_1118; // @[addr_buffer.py:29:Tile.fir@18.4]
  wire  _T_1121; // @[addr_buffer.py:30:Tile.fir@21.4]
  wire [31:0] _T_1124; // @[addr_buffer.py:30:Tile.fir@24.4]
  wire  _T_1127; // @[addr_buffer.py:32:Tile.fir@28.4]
  wire  _T_1129; // @[addr_buffer.py:32:Tile.fir@30.4]
  wire [1:0] _T_1130; // @[addr_buffer.py:32:Tile.fir@31.4]
  wire [1:0] _T_1131; // @[addr_buffer.py:32:Tile.fir@32.4]
  wire  _T_1133; // @[addr_buffer.py:37:Tile.fir@34.4]
  wire  _T_1135; // @[addr_buffer.py:37:Tile.fir@36.4]
  wire  _T_1137; // @[addr_buffer.py:38:Tile.fir@38.4]
  wire  _T_1139; // @[addr_buffer.py:37:Tile.fir@40.4]
  wire  _T_1141; // @[addr_buffer.py:37:Tile.fir@42.4]
  wire  _T_1143; // @[addr_buffer.py:38:Tile.fir@44.4]
  wire  _T_1145; // @[addr_buffer.py:37:Tile.fir@46.4]
  wire  _T_1147; // @[addr_buffer.py:37:Tile.fir@48.4]
  wire  _T_1149; // @[addr_buffer.py:38:Tile.fir@50.4]
  wire  _T_1153; // @[addr_buffer.py:41:Tile.fir@54.4]
  wire  _T_1154; // @[addr_buffer.py:42:Tile.fir@55.4]
  wire  _T_1159; // @[addr_buffer.py:41:Tile.fir@61.4]
  wire  _T_1160; // @[addr_buffer.py:42:Tile.fir@62.4]
  wire  _T_1165; // @[addr_buffer.py:41:Tile.fir@68.4]
  wire  _T_1166; // @[addr_buffer.py:42:Tile.fir@69.4]
  wire  _T_1171; // @[addr_buffer.py:46:Tile.fir@75.4]
  wire [2:0] _T_1174; // @[addr_buffer.py:47:Tile.fir@78.4]
  wire [2:0] _T_1176; // @[addr_buffer.py:47:Tile.fir@80.4]
  wire [2:0] _T_1177; // @[addr_buffer.py:47:Tile.fir@81.4]
  wire [2:0] _T_1178; // @[addr_buffer.py:47:Tile.fir@82.4]
  wire  _T_1182; // @[addr_buffer.py:46:Tile.fir@87.4]
  wire [2:0] _T_1185; // @[addr_buffer.py:47:Tile.fir@90.4]
  wire [2:0] _T_1187; // @[addr_buffer.py:47:Tile.fir@92.4]
  wire [2:0] _T_1188; // @[addr_buffer.py:47:Tile.fir@93.4]
  wire [2:0] _T_1189; // @[addr_buffer.py:47:Tile.fir@94.4]
  wire  _T_1193; // @[addr_buffer.py:46:Tile.fir@99.4]
  wire [2:0] _T_1196; // @[addr_buffer.py:47:Tile.fir@102.4]
  wire [2:0] _T_1198; // @[addr_buffer.py:47:Tile.fir@104.4]
  wire [2:0] _T_1199; // @[addr_buffer.py:47:Tile.fir@105.4]
  wire [2:0] _T_1200; // @[addr_buffer.py:47:Tile.fir@106.4]
  wire  _T_1204; // @[addr_buffer.py:51:Tile.fir@111.4]
  wire [31:0] _T_1208; // @[addr_buffer.py:53:Tile.fir@115.4]
  wire [31:0] _T_1210; // @[addr_buffer.py:54:Tile.fir@117.4]
  wire [31:0] _T_1211; // @[addr_buffer.py:54:Tile.fir@118.4]
  wire  _T_1216; // @[addr_buffer.py:51:Tile.fir@124.4]
  wire [31:0] _T_1220; // @[addr_buffer.py:53:Tile.fir@128.4]
  wire [31:0] _T_1222; // @[addr_buffer.py:54:Tile.fir@130.4]
  wire [31:0] _T_1223; // @[addr_buffer.py:54:Tile.fir@131.4]
  wire  _T_1228; // @[addr_buffer.py:51:Tile.fir@137.4]
  wire [31:0] _T_1232; // @[addr_buffer.py:53:Tile.fir@141.4]
  wire [31:0] _T_1234; // @[addr_buffer.py:54:Tile.fir@143.4]
  wire [31:0] _T_1235; // @[addr_buffer.py:54:Tile.fir@144.4]
  assign buffer__T_1116_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_1116_data = buffer[buffer__T_1116_addr]; // @[addr_buffer.py:24:Tile.fir@7.4]
  `else
  assign buffer__T_1116_data = buffer__T_1116_addr >= 2'h3 ? _RAND_1[31:0] : buffer[buffer__T_1116_addr]; // @[addr_buffer.py:24:Tile.fir@7.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_1117_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_1117_data = buffer[buffer__T_1117_addr]; // @[addr_buffer.py:24:Tile.fir@7.4]
  `else
  assign buffer__T_1117_data = buffer__T_1117_addr >= 2'h3 ? _RAND_2[31:0] : buffer[buffer__T_1117_addr]; // @[addr_buffer.py:24:Tile.fir@7.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_1122_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_1122_data = buffer[buffer__T_1122_addr]; // @[addr_buffer.py:24:Tile.fir@7.4]
  `else
  assign buffer__T_1122_data = buffer__T_1122_addr >= 2'h3 ? _RAND_3[31:0] : buffer[buffer__T_1122_addr]; // @[addr_buffer.py:24:Tile.fir@7.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_1123_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_1123_data = buffer[buffer__T_1123_addr]; // @[addr_buffer.py:24:Tile.fir@7.4]
  `else
  assign buffer__T_1123_data = buffer__T_1123_addr >= 2'h3 ? _RAND_4[31:0] : buffer[buffer__T_1123_addr]; // @[addr_buffer.py:24:Tile.fir@7.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_1207_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_1207_data = buffer[buffer__T_1207_addr]; // @[addr_buffer.py:24:Tile.fir@7.4]
  `else
  assign buffer__T_1207_data = buffer__T_1207_addr >= 2'h3 ? _RAND_5[31:0] : buffer[buffer__T_1207_addr]; // @[addr_buffer.py:24:Tile.fir@7.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_1209_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_1209_data = buffer[buffer__T_1209_addr]; // @[addr_buffer.py:24:Tile.fir@7.4]
  `else
  assign buffer__T_1209_data = buffer__T_1209_addr >= 2'h3 ? _RAND_6[31:0] : buffer[buffer__T_1209_addr]; // @[addr_buffer.py:24:Tile.fir@7.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_1219_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_1219_data = buffer[buffer__T_1219_addr]; // @[addr_buffer.py:24:Tile.fir@7.4]
  `else
  assign buffer__T_1219_data = buffer__T_1219_addr >= 2'h3 ? _RAND_7[31:0] : buffer[buffer__T_1219_addr]; // @[addr_buffer.py:24:Tile.fir@7.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_1221_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_1221_data = buffer[buffer__T_1221_addr]; // @[addr_buffer.py:24:Tile.fir@7.4]
  `else
  assign buffer__T_1221_data = buffer__T_1221_addr >= 2'h3 ? _RAND_8[31:0] : buffer[buffer__T_1221_addr]; // @[addr_buffer.py:24:Tile.fir@7.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_1231_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_1231_data = buffer[buffer__T_1231_addr]; // @[addr_buffer.py:24:Tile.fir@7.4]
  `else
  assign buffer__T_1231_data = buffer__T_1231_addr >= 2'h3 ? _RAND_9[31:0] : buffer[buffer__T_1231_addr]; // @[addr_buffer.py:24:Tile.fir@7.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_1233_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_1233_data = buffer[buffer__T_1233_addr]; // @[addr_buffer.py:24:Tile.fir@7.4]
  `else
  assign buffer__T_1233_data = buffer__T_1233_addr >= 2'h3 ? _RAND_10[31:0] : buffer[buffer__T_1233_addr]; // @[addr_buffer.py:24:Tile.fir@7.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign buffer__T_1201_data = io_flush ? 32'h0 : _T_1211;
  assign buffer__T_1201_addr = 2'h0;
  assign buffer__T_1201_mask = 1'h1;
  assign buffer__T_1201_en = 1'h1;
  assign buffer__T_1213_data = io_flush ? 32'h0 : _T_1223;
  assign buffer__T_1213_addr = 2'h1;
  assign buffer__T_1213_mask = 1'h1;
  assign buffer__T_1213_en = 1'h1;
  assign buffer__T_1225_data = io_flush ? 32'h0 : _T_1235;
  assign buffer__T_1225_addr = 2'h2;
  assign buffer__T_1225_mask = 1'h1;
  assign buffer__T_1225_en = 1'h1;
  assign counter__T_1110_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1110_data = counter[counter__T_1110_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `else
  assign counter__T_1110_data = counter__T_1110_addr >= 2'h3 ? _RAND_12[1:0] : counter[counter__T_1110_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1111_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1111_data = counter[counter__T_1111_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `else
  assign counter__T_1111_data = counter__T_1111_addr >= 2'h3 ? _RAND_13[1:0] : counter[counter__T_1111_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1113_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1113_data = counter[counter__T_1113_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `else
  assign counter__T_1113_data = counter__T_1113_addr >= 2'h3 ? _RAND_14[1:0] : counter[counter__T_1113_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1114_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1114_data = counter[counter__T_1114_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `else
  assign counter__T_1114_data = counter__T_1114_addr >= 2'h3 ? _RAND_15[1:0] : counter[counter__T_1114_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1119_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1119_data = counter[counter__T_1119_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `else
  assign counter__T_1119_data = counter__T_1119_addr >= 2'h3 ? _RAND_16[1:0] : counter[counter__T_1119_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1120_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1120_data = counter[counter__T_1120_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `else
  assign counter__T_1120_data = counter__T_1120_addr >= 2'h3 ? _RAND_17[1:0] : counter[counter__T_1120_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1152_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1152_data = counter[counter__T_1152_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `else
  assign counter__T_1152_data = counter__T_1152_addr >= 2'h3 ? _RAND_18[1:0] : counter[counter__T_1152_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1158_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1158_data = counter[counter__T_1158_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `else
  assign counter__T_1158_data = counter__T_1158_addr >= 2'h3 ? _RAND_19[1:0] : counter[counter__T_1158_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1164_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1164_data = counter[counter__T_1164_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `else
  assign counter__T_1164_data = counter__T_1164_addr >= 2'h3 ? _RAND_20[1:0] : counter[counter__T_1164_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1170_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1170_data = counter[counter__T_1170_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `else
  assign counter__T_1170_data = counter__T_1170_addr >= 2'h3 ? _RAND_21[1:0] : counter[counter__T_1170_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1173_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1173_data = counter[counter__T_1173_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `else
  assign counter__T_1173_data = counter__T_1173_addr >= 2'h3 ? _RAND_22[1:0] : counter[counter__T_1173_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1175_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1175_data = counter[counter__T_1175_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `else
  assign counter__T_1175_data = counter__T_1175_addr >= 2'h3 ? _RAND_23[1:0] : counter[counter__T_1175_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1181_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1181_data = counter[counter__T_1181_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `else
  assign counter__T_1181_data = counter__T_1181_addr >= 2'h3 ? _RAND_24[1:0] : counter[counter__T_1181_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1184_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1184_data = counter[counter__T_1184_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `else
  assign counter__T_1184_data = counter__T_1184_addr >= 2'h3 ? _RAND_25[1:0] : counter[counter__T_1184_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1186_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1186_data = counter[counter__T_1186_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `else
  assign counter__T_1186_data = counter__T_1186_addr >= 2'h3 ? _RAND_26[1:0] : counter[counter__T_1186_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1192_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1192_data = counter[counter__T_1192_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `else
  assign counter__T_1192_data = counter__T_1192_addr >= 2'h3 ? _RAND_27[1:0] : counter[counter__T_1192_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1195_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1195_data = counter[counter__T_1195_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `else
  assign counter__T_1195_data = counter__T_1195_addr >= 2'h3 ? _RAND_28[1:0] : counter[counter__T_1195_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1197_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1197_data = counter[counter__T_1197_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `else
  assign counter__T_1197_data = counter__T_1197_addr >= 2'h3 ? _RAND_29[1:0] : counter[counter__T_1197_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1203_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1203_data = counter[counter__T_1203_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `else
  assign counter__T_1203_data = counter__T_1203_addr >= 2'h3 ? _RAND_30[1:0] : counter[counter__T_1203_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1215_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1215_data = counter[counter__T_1215_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `else
  assign counter__T_1215_data = counter__T_1215_addr >= 2'h3 ? _RAND_31[1:0] : counter[counter__T_1215_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1227_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1227_data = counter[counter__T_1227_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `else
  assign counter__T_1227_data = counter__T_1227_addr >= 2'h3 ? _RAND_32[1:0] : counter[counter__T_1227_addr]; // @[addr_buffer.py:25:Tile.fir@8.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign counter__T_1168_data = _T_1178[1:0];
  assign counter__T_1168_addr = 2'h0;
  assign counter__T_1168_mask = 1'h1;
  assign counter__T_1168_en = 1'h1;
  assign counter__T_1179_data = _T_1189[1:0];
  assign counter__T_1179_addr = 2'h1;
  assign counter__T_1179_mask = 1'h1;
  assign counter__T_1179_en = 1'h1;
  assign counter__T_1190_data = _T_1200[1:0];
  assign counter__T_1190_addr = 2'h2;
  assign counter__T_1190_mask = 1'h1;
  assign counter__T_1190_en = 1'h1;
  assign is_used__T_1126_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1126_data = is_used[is_used__T_1126_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `else
  assign is_used__T_1126_data = is_used__T_1126_addr >= 2'h3 ? _RAND_34[0:0] : is_used[is_used__T_1126_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1128_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1128_data = is_used[is_used__T_1128_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `else
  assign is_used__T_1128_data = is_used__T_1128_addr >= 2'h3 ? _RAND_35[0:0] : is_used[is_used__T_1128_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1134_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1134_data = is_used[is_used__T_1134_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `else
  assign is_used__T_1134_data = is_used__T_1134_addr >= 2'h3 ? _RAND_36[0:0] : is_used[is_used__T_1134_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1136_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1136_data = is_used[is_used__T_1136_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `else
  assign is_used__T_1136_data = is_used__T_1136_addr >= 2'h3 ? _RAND_37[0:0] : is_used[is_used__T_1136_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1140_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1140_data = is_used[is_used__T_1140_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `else
  assign is_used__T_1140_data = is_used__T_1140_addr >= 2'h3 ? _RAND_38[0:0] : is_used[is_used__T_1140_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1142_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1142_data = is_used[is_used__T_1142_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `else
  assign is_used__T_1142_data = is_used__T_1142_addr >= 2'h3 ? _RAND_39[0:0] : is_used[is_used__T_1142_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1146_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1146_data = is_used[is_used__T_1146_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `else
  assign is_used__T_1146_data = is_used__T_1146_addr >= 2'h3 ? _RAND_40[0:0] : is_used[is_used__T_1146_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1148_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1148_data = is_used[is_used__T_1148_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `else
  assign is_used__T_1148_data = is_used__T_1148_addr >= 2'h3 ? _RAND_41[0:0] : is_used[is_used__T_1148_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1172_addr = 2'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1172_data = is_used[is_used__T_1172_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `else
  assign is_used__T_1172_data = is_used__T_1172_addr >= 2'h3 ? _RAND_42[0:0] : is_used[is_used__T_1172_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1183_addr = 2'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1183_data = is_used[is_used__T_1183_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `else
  assign is_used__T_1183_data = is_used__T_1183_addr >= 2'h3 ? _RAND_43[0:0] : is_used[is_used__T_1183_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1194_addr = 2'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1194_data = is_used[is_used__T_1194_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `else
  assign is_used__T_1194_data = is_used__T_1194_addr >= 2'h3 ? _RAND_44[0:0] : is_used[is_used__T_1194_addr]; // @[rawdata.py:698:Tile.fir@9.4]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign is_used__T_1150_data = io_flush ? 1'h0 : _T_1154;
  assign is_used__T_1150_addr = 2'h0;
  assign is_used__T_1150_mask = 1'h1;
  assign is_used__T_1150_en = 1'h1;
  assign is_used__T_1156_data = io_flush ? 1'h0 : _T_1160;
  assign is_used__T_1156_addr = 2'h1;
  assign is_used__T_1156_mask = 1'h1;
  assign is_used__T_1156_en = 1'h1;
  assign is_used__T_1162_data = io_flush ? 1'h0 : _T_1166;
  assign is_used__T_1162_addr = 2'h2;
  assign is_used__T_1162_mask = 1'h1;
  assign is_used__T_1162_en = 1'h1;
  assign _T_1112 = counter__T_1110_data > counter__T_1111_data; // @[addr_buffer.py:28:Tile.fir@12.4]
  assign _T_1115 = counter__T_1113_data > counter__T_1114_data; // @[addr_buffer.py:29:Tile.fir@15.4]
  assign _T_1118 = _T_1115 ? buffer__T_1116_data : buffer__T_1117_data; // @[addr_buffer.py:29:Tile.fir@18.4]
  assign _T_1121 = counter__T_1119_data > counter__T_1120_data; // @[addr_buffer.py:30:Tile.fir@21.4]
  assign _T_1124 = _T_1121 ? buffer__T_1122_data : buffer__T_1123_data; // @[addr_buffer.py:30:Tile.fir@24.4]
  assign _T_1127 = 1'h0 == is_used__T_1126_data; // @[addr_buffer.py:32:Tile.fir@28.4]
  assign _T_1129 = 1'h0 == is_used__T_1128_data; // @[addr_buffer.py:32:Tile.fir@30.4]
  assign _T_1130 = _T_1129 ? 2'h1 : 2'h2; // @[addr_buffer.py:32:Tile.fir@31.4]
  assign _T_1131 = _T_1127 ? 2'h0 : _T_1130; // @[addr_buffer.py:32:Tile.fir@32.4]
  assign _T_1133 = 2'h0 == _T_1131; // @[addr_buffer.py:37:Tile.fir@34.4]
  assign _T_1135 = _T_1133 ? 1'h1 : is_used__T_1134_data; // @[addr_buffer.py:37:Tile.fir@36.4]
  assign _T_1137 = io_record ? _T_1135 : is_used__T_1136_data; // @[addr_buffer.py:38:Tile.fir@38.4]
  assign _T_1139 = 2'h1 == _T_1131; // @[addr_buffer.py:37:Tile.fir@40.4]
  assign _T_1141 = _T_1139 ? 1'h1 : is_used__T_1140_data; // @[addr_buffer.py:37:Tile.fir@42.4]
  assign _T_1143 = io_record ? _T_1141 : is_used__T_1142_data; // @[addr_buffer.py:38:Tile.fir@44.4]
  assign _T_1145 = 2'h2 == _T_1131; // @[addr_buffer.py:37:Tile.fir@46.4]
  assign _T_1147 = _T_1145 ? 1'h1 : is_used__T_1146_data; // @[addr_buffer.py:37:Tile.fir@48.4]
  assign _T_1149 = io_record ? _T_1147 : is_used__T_1148_data; // @[addr_buffer.py:38:Tile.fir@50.4]
  assign _T_1153 = 2'h2 == counter__T_1152_data; // @[addr_buffer.py:41:Tile.fir@54.4]
  assign _T_1154 = _T_1153 ? 1'h0 : _T_1137; // @[addr_buffer.py:42:Tile.fir@55.4]
  assign _T_1159 = 2'h2 == counter__T_1158_data; // @[addr_buffer.py:41:Tile.fir@61.4]
  assign _T_1160 = _T_1159 ? 1'h0 : _T_1143; // @[addr_buffer.py:42:Tile.fir@62.4]
  assign _T_1165 = 2'h2 == counter__T_1164_data; // @[addr_buffer.py:41:Tile.fir@68.4]
  assign _T_1166 = _T_1165 ? 1'h0 : _T_1149; // @[addr_buffer.py:42:Tile.fir@69.4]
  assign _T_1171 = 2'h2 == counter__T_1170_data; // @[addr_buffer.py:46:Tile.fir@75.4]
  assign _T_1174 = counter__T_1173_data + 2'h1; // @[addr_buffer.py:47:Tile.fir@78.4]
  assign _T_1176 = is_used__T_1172_data ? _T_1174 : {{1'd0}, counter__T_1175_data}; // @[addr_buffer.py:47:Tile.fir@80.4]
  assign _T_1177 = _T_1171 ? 3'h0 : _T_1176; // @[addr_buffer.py:47:Tile.fir@81.4]
  assign _T_1178 = io_flush ? 3'h0 : _T_1177; // @[addr_buffer.py:47:Tile.fir@82.4]
  assign _T_1182 = 2'h2 == counter__T_1181_data; // @[addr_buffer.py:46:Tile.fir@87.4]
  assign _T_1185 = counter__T_1184_data + 2'h1; // @[addr_buffer.py:47:Tile.fir@90.4]
  assign _T_1187 = is_used__T_1183_data ? _T_1185 : {{1'd0}, counter__T_1186_data}; // @[addr_buffer.py:47:Tile.fir@92.4]
  assign _T_1188 = _T_1182 ? 3'h0 : _T_1187; // @[addr_buffer.py:47:Tile.fir@93.4]
  assign _T_1189 = io_flush ? 3'h0 : _T_1188; // @[addr_buffer.py:47:Tile.fir@94.4]
  assign _T_1193 = 2'h2 == counter__T_1192_data; // @[addr_buffer.py:46:Tile.fir@99.4]
  assign _T_1196 = counter__T_1195_data + 2'h1; // @[addr_buffer.py:47:Tile.fir@102.4]
  assign _T_1198 = is_used__T_1194_data ? _T_1196 : {{1'd0}, counter__T_1197_data}; // @[addr_buffer.py:47:Tile.fir@104.4]
  assign _T_1199 = _T_1193 ? 3'h0 : _T_1198; // @[addr_buffer.py:47:Tile.fir@105.4]
  assign _T_1200 = io_flush ? 3'h0 : _T_1199; // @[addr_buffer.py:47:Tile.fir@106.4]
  assign _T_1204 = 2'h2 == counter__T_1203_data; // @[addr_buffer.py:51:Tile.fir@111.4]
  assign _T_1208 = _T_1133 ? io_addr_input : buffer__T_1207_data; // @[addr_buffer.py:53:Tile.fir@115.4]
  assign _T_1210 = io_record ? _T_1208 : buffer__T_1209_data; // @[addr_buffer.py:54:Tile.fir@117.4]
  assign _T_1211 = _T_1204 ? 32'h0 : _T_1210; // @[addr_buffer.py:54:Tile.fir@118.4]
  assign _T_1216 = 2'h2 == counter__T_1215_data; // @[addr_buffer.py:51:Tile.fir@124.4]
  assign _T_1220 = _T_1139 ? io_addr_input : buffer__T_1219_data; // @[addr_buffer.py:53:Tile.fir@128.4]
  assign _T_1222 = io_record ? _T_1220 : buffer__T_1221_data; // @[addr_buffer.py:54:Tile.fir@130.4]
  assign _T_1223 = _T_1216 ? 32'h0 : _T_1222; // @[addr_buffer.py:54:Tile.fir@131.4]
  assign _T_1228 = 2'h2 == counter__T_1227_data; // @[addr_buffer.py:51:Tile.fir@137.4]
  assign _T_1232 = _T_1145 ? io_addr_input : buffer__T_1231_data; // @[addr_buffer.py:53:Tile.fir@141.4]
  assign _T_1234 = io_record ? _T_1232 : buffer__T_1233_data; // @[addr_buffer.py:54:Tile.fir@143.4]
  assign _T_1235 = _T_1228 ? 32'h0 : _T_1234; // @[addr_buffer.py:54:Tile.fir@144.4]
  assign io_front = _T_1112 ? _T_1118 : _T_1124; // @[addr_buffer.py:30:Tile.fir@26.4]
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
    if(buffer__T_1201_en & buffer__T_1201_mask) begin
      buffer[buffer__T_1201_addr] <= buffer__T_1201_data; // @[addr_buffer.py:24:Tile.fir@7.4]
    end
    if(buffer__T_1213_en & buffer__T_1213_mask) begin
      buffer[buffer__T_1213_addr] <= buffer__T_1213_data; // @[addr_buffer.py:24:Tile.fir@7.4]
    end
    if(buffer__T_1225_en & buffer__T_1225_mask) begin
      buffer[buffer__T_1225_addr] <= buffer__T_1225_data; // @[addr_buffer.py:24:Tile.fir@7.4]
    end
    if(counter__T_1168_en & counter__T_1168_mask) begin
      counter[counter__T_1168_addr] <= counter__T_1168_data; // @[addr_buffer.py:25:Tile.fir@8.4]
    end
    if(counter__T_1179_en & counter__T_1179_mask) begin
      counter[counter__T_1179_addr] <= counter__T_1179_data; // @[addr_buffer.py:25:Tile.fir@8.4]
    end
    if(counter__T_1190_en & counter__T_1190_mask) begin
      counter[counter__T_1190_addr] <= counter__T_1190_data; // @[addr_buffer.py:25:Tile.fir@8.4]
    end
    if(is_used__T_1150_en & is_used__T_1150_mask) begin
      is_used[is_used__T_1150_addr] <= is_used__T_1150_data; // @[rawdata.py:698:Tile.fir@9.4]
    end
    if(is_used__T_1156_en & is_used__T_1156_mask) begin
      is_used[is_used__T_1156_addr] <= is_used__T_1156_data; // @[rawdata.py:698:Tile.fir@9.4]
    end
    if(is_used__T_1162_en & is_used__T_1162_mask) begin
      is_used[is_used__T_1162_addr] <= is_used__T_1162_data; // @[rawdata.py:698:Tile.fir@9.4]
    end
  end
endmodule
module PC( // @[pc.py:20:Tile.fir@149.2]
  input         clock, // @[rawmodule.py:100:Tile.fir@150.4]
  input         reset, // @[rawmodule.py:101:Tile.fir@151.4]
  input  [31:0] io_next_pc, // @[pc.py:12:Tile.fir@152.4]
  input         io_PC_Write, // @[pc.py:12:Tile.fir@152.4]
  output [31:0] io_pc_out // @[pc.py:12:Tile.fir@152.4]
);
  reg [31:0] pc_reg; // @[pc.py:23:Tile.fir@154.4]
  reg [31:0] _RAND_0;
  assign io_pc_out = pc_reg; // @[pc.py:25:Tile.fir@158.4]
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
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc_reg = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      pc_reg <= 32'h0;
    end else begin
      if (io_PC_Write) begin
        pc_reg <= io_next_pc;
      end
    end
  end
endmodule
module InstCache( // @[instcache.py:19:Tile.fir@161.2]
  input         clock, // @[rawmodule.py:100:Tile.fir@162.4]
  input  [31:0] io_addr, // @[instcache.py:12:Tile.fir@164.4]
  output [31:0] io_inst // @[instcache.py:12:Tile.fir@164.4]
);
  reg [7:0] cache [0:1023]; // @[instcache.py:22:Tile.fir@166.4]
  reg [31:0] _RAND_0;
  wire [7:0] cache__T_41_data; // @[instcache.py:22:Tile.fir@166.4]
  wire [9:0] cache__T_41_addr; // @[instcache.py:22:Tile.fir@166.4]
  wire [7:0] cache__T_43_data; // @[instcache.py:22:Tile.fir@166.4]
  wire [9:0] cache__T_43_addr; // @[instcache.py:22:Tile.fir@166.4]
  wire [7:0] cache__T_45_data; // @[instcache.py:22:Tile.fir@166.4]
  wire [9:0] cache__T_45_addr; // @[instcache.py:22:Tile.fir@166.4]
  wire [7:0] cache__T_47_data; // @[instcache.py:22:Tile.fir@166.4]
  wire [9:0] cache__T_47_addr; // @[instcache.py:22:Tile.fir@166.4]
  wire [32:0] _T_42; // @[instcache.py:23:Tile.fir@168.4]
  wire [32:0] _T_44; // @[instcache.py:24:Tile.fir@170.4]
  wire [32:0] _T_46; // @[instcache.py:24:Tile.fir@172.4]
  wire [23:0] _T_49; // @[instcache.py:24:Tile.fir@175.4]
  assign cache__T_41_addr = io_addr[9:0];
  assign cache__T_41_data = cache[cache__T_41_addr]; // @[instcache.py:22:Tile.fir@166.4]
  assign cache__T_43_addr = _T_42[9:0];
  assign cache__T_43_data = cache[cache__T_43_addr]; // @[instcache.py:22:Tile.fir@166.4]
  assign cache__T_45_addr = _T_44[9:0];
  assign cache__T_45_data = cache[cache__T_45_addr]; // @[instcache.py:22:Tile.fir@166.4]
  assign cache__T_47_addr = _T_46[9:0];
  assign cache__T_47_data = cache[cache__T_47_addr]; // @[instcache.py:22:Tile.fir@166.4]
  assign _T_42 = io_addr + 32'h1; // @[instcache.py:23:Tile.fir@168.4]
  assign _T_44 = io_addr + 32'h2; // @[instcache.py:24:Tile.fir@170.4]
  assign _T_46 = io_addr + 32'h3; // @[instcache.py:24:Tile.fir@172.4]
  assign _T_49 = {cache__T_41_data,cache__T_43_data,cache__T_45_data}; // @[instcache.py:24:Tile.fir@175.4]
  assign io_inst = {_T_49,cache__T_47_data}; // @[instcache.py:24:Tile.fir@177.4]
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
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    cache[initvar] = _RAND_0[7:0];
  `endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end
endmodule
module Datapath( // @[datapath.py:94:Tile.fir@180.2]
  input  [31:0] io_if_io_if_pc, // @[datapath.py:84:Tile.fir@183.4]
  input  [1:0]  io_if_io_PC_Sel, // @[datapath.py:84:Tile.fir@183.4]
  input  [31:0] io_if_io_new_addr, // @[datapath.py:84:Tile.fir@183.4]
  input  [31:0] io_if_io_pc_recover, // @[datapath.py:84:Tile.fir@183.4]
  output [31:0] io_if_io_if_new_pc, // @[datapath.py:84:Tile.fir@183.4]
  output [31:0] io_if_io_if_pc_4, // @[datapath.py:84:Tile.fir@183.4]
  input         io_id_io_Bubble, // @[datapath.py:84:Tile.fir@183.4]
  input         io_id_io_ctrl_in_Reg_Write, // @[datapath.py:84:Tile.fir@183.4]
  input  [2:0]  io_id_io_ctrl_in_Imm_Sel, // @[datapath.py:84:Tile.fir@183.4]
  input         io_id_io_ctrl_in_ALU_Src, // @[datapath.py:84:Tile.fir@183.4]
  input  [4:0]  io_id_io_ctrl_in_ALUOp, // @[datapath.py:84:Tile.fir@183.4]
  input         io_id_io_ctrl_in_Branch, // @[datapath.py:84:Tile.fir@183.4]
  input         io_id_io_ctrl_in_Branch_Src, // @[datapath.py:84:Tile.fir@183.4]
  input         io_id_io_ctrl_in_Mem_Read, // @[datapath.py:84:Tile.fir@183.4]
  input         io_id_io_ctrl_in_Mem_Write, // @[datapath.py:84:Tile.fir@183.4]
  input  [1:0]  io_id_io_ctrl_in_Data_Size, // @[datapath.py:84:Tile.fir@183.4]
  input         io_id_io_ctrl_in_Load_Type, // @[datapath.py:84:Tile.fir@183.4]
  input  [2:0]  io_id_io_ctrl_in_Mem_to_Reg, // @[datapath.py:84:Tile.fir@183.4]
  input         io_id_io_ctrl_in_Jump_Type, // @[datapath.py:84:Tile.fir@183.4]
  output        io_id_io_ctrl_out_Reg_Write, // @[datapath.py:84:Tile.fir@183.4]
  output [2:0]  io_id_io_ctrl_out_Imm_Sel, // @[datapath.py:84:Tile.fir@183.4]
  output        io_id_io_ctrl_out_ALU_Src, // @[datapath.py:84:Tile.fir@183.4]
  output [4:0]  io_id_io_ctrl_out_ALUOp, // @[datapath.py:84:Tile.fir@183.4]
  output        io_id_io_ctrl_out_Branch, // @[datapath.py:84:Tile.fir@183.4]
  output        io_id_io_ctrl_out_Branch_Src, // @[datapath.py:84:Tile.fir@183.4]
  output        io_id_io_ctrl_out_Mem_Read, // @[datapath.py:84:Tile.fir@183.4]
  output        io_id_io_ctrl_out_Mem_Write, // @[datapath.py:84:Tile.fir@183.4]
  output [1:0]  io_id_io_ctrl_out_Data_Size, // @[datapath.py:84:Tile.fir@183.4]
  output        io_id_io_ctrl_out_Load_Type, // @[datapath.py:84:Tile.fir@183.4]
  output [2:0]  io_id_io_ctrl_out_Mem_to_Reg, // @[datapath.py:84:Tile.fir@183.4]
  output        io_id_io_ctrl_out_Jump_Type, // @[datapath.py:84:Tile.fir@183.4]
  input  [31:0] io_ex_io_ex_rs1_out, // @[datapath.py:84:Tile.fir@183.4]
  input  [31:0] io_ex_io_ex_rs2_out, // @[datapath.py:84:Tile.fir@183.4]
  input  [31:0] io_ex_io_ex_imm, // @[datapath.py:84:Tile.fir@183.4]
  input  [31:0] io_ex_io_ex_pc, // @[datapath.py:84:Tile.fir@183.4]
  input         io_ex_io_ex_ALU_Src, // @[datapath.py:84:Tile.fir@183.4]
  input         io_ex_io_ex_Branch, // @[datapath.py:84:Tile.fir@183.4]
  input         io_ex_io_ex_alu_conflag, // @[datapath.py:84:Tile.fir@183.4]
  input         io_ex_io_ex_Branch_Src, // @[datapath.py:84:Tile.fir@183.4]
  input         io_ex_io_ex_Jump_Type, // @[datapath.py:84:Tile.fir@183.4]
  input  [2:0]  io_ex_io_ex_Imm_Sel, // @[datapath.py:84:Tile.fir@183.4]
  input  [1:0]  io_ex_io_Forward_A, // @[datapath.py:84:Tile.fir@183.4]
  input  [1:0]  io_ex_io_Forward_B, // @[datapath.py:84:Tile.fir@183.4]
  output [31:0] io_ex_io_alu_a_src, // @[datapath.py:84:Tile.fir@183.4]
  output [31:0] io_ex_io_alu_b_src, // @[datapath.py:84:Tile.fir@183.4]
  output [31:0] io_ex_io_ex_aui_pc, // @[datapath.py:84:Tile.fir@183.4]
  output [31:0] io_ex_io_forward_rs2_out, // @[datapath.py:84:Tile.fir@183.4]
  output        io_ex_io_PC_Src, // @[datapath.py:84:Tile.fir@183.4]
  output [31:0] io_ex_io_branch_addr, // @[datapath.py:84:Tile.fir@183.4]
  input  [31:0] io_mem_io_mem_rs2_out, // @[datapath.py:84:Tile.fir@183.4]
  input         io_mem_io_MemWrite_Src, // @[datapath.py:84:Tile.fir@183.4]
  input  [2:0]  io_mem_io_mem_Mem_to_Reg, // @[datapath.py:84:Tile.fir@183.4]
  input  [31:0] io_mem_io_mem_alu_sum, // @[datapath.py:84:Tile.fir@183.4]
  input  [31:0] io_mem_io_mem_pc_4, // @[datapath.py:84:Tile.fir@183.4]
  input  [31:0] io_mem_io_mem_imm, // @[datapath.py:84:Tile.fir@183.4]
  input  [31:0] io_mem_io_mem_aui_pc, // @[datapath.py:84:Tile.fir@183.4]
  output [31:0] io_mem_io_mem_writedata, // @[datapath.py:84:Tile.fir@183.4]
  input  [31:0] io_wb_io_wb_alu_sum, // @[datapath.py:84:Tile.fir@183.4]
  input  [31:0] io_wb_io_wb_dataout, // @[datapath.py:84:Tile.fir@183.4]
  input  [31:0] io_wb_io_wb_pc_4, // @[datapath.py:84:Tile.fir@183.4]
  input  [31:0] io_wb_io_wb_imm, // @[datapath.py:84:Tile.fir@183.4]
  input  [31:0] io_wb_io_wb_aui_pc, // @[datapath.py:84:Tile.fir@183.4]
  input  [2:0]  io_wb_io_wb_Mem_to_Reg, // @[datapath.py:84:Tile.fir@183.4]
  output [31:0] io_wb_io_wb_reg_writedata // @[datapath.py:84:Tile.fir@183.4]
);
  wire  _T_133; // @[datapath.py:103:Tile.fir@185.4]
  wire  _T_135; // @[datapath.py:103:Tile.fir@187.4]
  wire [32:0] _T_136; // @[datapath.py:105:Tile.fir@188.4]
  wire [32:0] _T_137; // @[datapath.py:108:Tile.fir@190.4]
  wire [32:0] _T_138; // @[datapath.py:108:Tile.fir@191.4]
  wire [31:0] _T_140; // @[datapath.py:109:Tile.fir@193.4]
  wire [32:0] _T_141; // @[datapath.py:110:Tile.fir@194.4]
  wire [32:0] _GEN_0; // @[datapath.py:110:Tile.fir@195.4]
  wire [33:0] _T_142; // @[datapath.py:110:Tile.fir@195.4]
  wire [32:0] _T_145; // @[datapath.py:112:Tile.fir@198.4]
  wire  _T_147; // @[datapath.py:116:Tile.fir@202.4]
  wire  _T_151; // @[mux.py:72:Tile.fir@207.4]
  wire [31:0] _T_152; // @[datapath.py:123:Tile.fir@208.4]
  wire  _T_153; // @[mux.py:72:Tile.fir@209.4]
  wire [31:0] _T_154; // @[datapath.py:123:Tile.fir@210.4]
  wire  _T_155; // @[mux.py:72:Tile.fir@211.4]
  wire [32:0] _T_156; // @[datapath.py:123:Tile.fir@212.4]
  wire  _T_181; // @[mux.py:72:Tile.fir@250.4]
  wire [31:0] _T_182; // @[datapath.py:146:Tile.fir@251.4]
  wire  _T_183; // @[mux.py:72:Tile.fir@252.4]
  wire [31:0] _T_184; // @[datapath.py:146:Tile.fir@253.4]
  wire  _T_185; // @[mux.py:72:Tile.fir@254.4]
  wire [31:0] _T_186; // @[datapath.py:146:Tile.fir@255.4]
  wire  _T_187; // @[mux.py:72:Tile.fir@256.4]
  wire [31:0] _T_188; // @[datapath.py:146:Tile.fir@257.4]
  wire  _T_189; // @[mux.py:72:Tile.fir@258.4]
  wire [31:0] _T_190; // @[datapath.py:152:Tile.fir@259.4]
  wire  _T_191; // @[mux.py:72:Tile.fir@260.4]
  wire [31:0] _T_192; // @[datapath.py:152:Tile.fir@261.4]
  wire  _T_193; // @[mux.py:72:Tile.fir@262.4]
  wire  _T_195; // @[mux.py:72:Tile.fir@265.4]
  wire [31:0] _T_196; // @[datapath.py:158:Tile.fir@266.4]
  wire  _T_197; // @[mux.py:72:Tile.fir@267.4]
  wire [31:0] _T_198; // @[datapath.py:158:Tile.fir@268.4]
  wire  _T_199; // @[mux.py:72:Tile.fir@269.4]
  wire [31:0] _T_200; // @[datapath.py:158:Tile.fir@270.4]
  wire  _T_205; // @[mux.py:72:Tile.fir@278.4]
  wire [31:0] _T_206; // @[datapath.py:180:Tile.fir@279.4]
  wire  _T_207; // @[mux.py:72:Tile.fir@280.4]
  wire [31:0] _T_208; // @[datapath.py:180:Tile.fir@281.4]
  wire  _T_209; // @[mux.py:72:Tile.fir@282.4]
  wire [31:0] _T_210; // @[datapath.py:180:Tile.fir@283.4]
  wire  _T_211; // @[mux.py:72:Tile.fir@284.4]
  wire [31:0] _T_212; // @[datapath.py:180:Tile.fir@285.4]
  wire  _T_213; // @[mux.py:72:Tile.fir@286.4]
  assign _T_133 = io_ex_io_ex_Imm_Sel == 3'h2; // @[datapath.py:103:Tile.fir@185.4]
  assign _T_135 = _T_133 & io_ex_io_ex_Jump_Type; // @[datapath.py:103:Tile.fir@187.4]
  assign _T_136 = io_if_io_if_pc + 32'h4; // @[datapath.py:105:Tile.fir@188.4]
  assign _T_137 = {io_ex_io_ex_imm, 1'h0}; // @[datapath.py:108:Tile.fir@190.4]
  assign _T_138 = _T_135 ? {{1'd0}, io_ex_io_ex_imm} : _T_137; // @[datapath.py:108:Tile.fir@191.4]
  assign _T_140 = io_ex_io_ex_Branch_Src ? io_ex_io_alu_a_src : io_ex_io_ex_pc; // @[datapath.py:109:Tile.fir@193.4]
  assign _T_141 = $unsigned(_T_138); // @[datapath.py:110:Tile.fir@194.4]
  assign _GEN_0 = {{1'd0}, _T_140}; // @[datapath.py:110:Tile.fir@195.4]
  assign _T_142 = _GEN_0 + _T_141; // @[datapath.py:110:Tile.fir@195.4]
  assign _T_145 = _T_140 + io_ex_io_ex_imm; // @[datapath.py:112:Tile.fir@198.4]
  assign _T_147 = io_ex_io_ex_Jump_Type ? 1'h1 : io_ex_io_ex_alu_conflag; // @[datapath.py:116:Tile.fir@202.4]
  assign _T_151 = io_if_io_PC_Sel == 2'h1; // @[mux.py:72:Tile.fir@207.4]
  assign _T_152 = _T_151 ? io_if_io_pc_recover : 32'h0; // @[datapath.py:123:Tile.fir@208.4]
  assign _T_153 = io_if_io_PC_Sel == 2'h2; // @[mux.py:72:Tile.fir@209.4]
  assign _T_154 = _T_153 ? io_if_io_new_addr : _T_152; // @[datapath.py:123:Tile.fir@210.4]
  assign _T_155 = io_if_io_PC_Sel == 2'h0; // @[mux.py:72:Tile.fir@211.4]
  assign _T_156 = _T_155 ? _T_136 : {{1'd0}, _T_154}; // @[datapath.py:123:Tile.fir@212.4]
  assign _T_181 = io_mem_io_mem_Mem_to_Reg == 3'h4; // @[mux.py:72:Tile.fir@250.4]
  assign _T_182 = _T_181 ? io_mem_io_mem_aui_pc : 32'h0; // @[datapath.py:146:Tile.fir@251.4]
  assign _T_183 = io_mem_io_mem_Mem_to_Reg == 3'h3; // @[mux.py:72:Tile.fir@252.4]
  assign _T_184 = _T_183 ? io_mem_io_mem_imm : _T_182; // @[datapath.py:146:Tile.fir@253.4]
  assign _T_185 = io_mem_io_mem_Mem_to_Reg == 3'h2; // @[mux.py:72:Tile.fir@254.4]
  assign _T_186 = _T_185 ? io_mem_io_mem_pc_4 : _T_184; // @[datapath.py:146:Tile.fir@255.4]
  assign _T_187 = io_mem_io_mem_Mem_to_Reg == 3'h0; // @[mux.py:72:Tile.fir@256.4]
  assign _T_188 = _T_187 ? io_mem_io_mem_alu_sum : _T_186; // @[datapath.py:146:Tile.fir@257.4]
  assign _T_189 = io_ex_io_Forward_A == 2'h2; // @[mux.py:72:Tile.fir@258.4]
  assign _T_190 = _T_189 ? _T_188 : io_ex_io_ex_rs1_out; // @[datapath.py:152:Tile.fir@259.4]
  assign _T_191 = io_ex_io_Forward_A == 2'h1; // @[mux.py:72:Tile.fir@260.4]
  assign _T_192 = _T_191 ? io_wb_io_wb_reg_writedata : _T_190; // @[datapath.py:152:Tile.fir@261.4]
  assign _T_193 = io_ex_io_Forward_A == 2'h0; // @[mux.py:72:Tile.fir@262.4]
  assign _T_195 = io_ex_io_Forward_B == 2'h2; // @[mux.py:72:Tile.fir@265.4]
  assign _T_196 = _T_195 ? _T_188 : io_ex_io_ex_rs2_out; // @[datapath.py:158:Tile.fir@266.4]
  assign _T_197 = io_ex_io_Forward_B == 2'h1; // @[mux.py:72:Tile.fir@267.4]
  assign _T_198 = _T_197 ? io_wb_io_wb_reg_writedata : _T_196; // @[datapath.py:158:Tile.fir@268.4]
  assign _T_199 = io_ex_io_Forward_B == 2'h0; // @[mux.py:72:Tile.fir@269.4]
  assign _T_200 = _T_199 ? io_ex_io_ex_rs2_out : _T_198; // @[datapath.py:158:Tile.fir@270.4]
  assign _T_205 = io_wb_io_wb_Mem_to_Reg == 3'h4; // @[mux.py:72:Tile.fir@278.4]
  assign _T_206 = _T_205 ? io_wb_io_wb_aui_pc : io_wb_io_wb_alu_sum; // @[datapath.py:180:Tile.fir@279.4]
  assign _T_207 = io_wb_io_wb_Mem_to_Reg == 3'h3; // @[mux.py:72:Tile.fir@280.4]
  assign _T_208 = _T_207 ? io_wb_io_wb_imm : _T_206; // @[datapath.py:180:Tile.fir@281.4]
  assign _T_209 = io_wb_io_wb_Mem_to_Reg == 3'h2; // @[mux.py:72:Tile.fir@282.4]
  assign _T_210 = _T_209 ? io_wb_io_wb_pc_4 : _T_208; // @[datapath.py:180:Tile.fir@283.4]
  assign _T_211 = io_wb_io_wb_Mem_to_Reg == 3'h1; // @[mux.py:72:Tile.fir@284.4]
  assign _T_212 = _T_211 ? io_wb_io_wb_dataout : _T_210; // @[datapath.py:180:Tile.fir@285.4]
  assign _T_213 = io_wb_io_wb_Mem_to_Reg == 3'h0; // @[mux.py:72:Tile.fir@286.4]
  assign io_if_io_if_new_pc = _T_156[31:0]; // @[datapath.py:123:Tile.fir@213.4]
  assign io_if_io_if_pc_4 = _T_136[31:0]; // @[datapath.py:106:Tile.fir@189.4]
  assign io_id_io_ctrl_out_Reg_Write = io_id_io_Bubble ? 1'h0 : io_id_io_ctrl_in_Reg_Write; // @[datapath.py:135:Tile.fir@216.4]
  assign io_id_io_ctrl_out_Imm_Sel = io_id_io_Bubble ? 3'h0 : io_id_io_ctrl_in_Imm_Sel; // @[datapath.py:135:Tile.fir@219.4]
  assign io_id_io_ctrl_out_ALU_Src = io_id_io_Bubble ? 1'h0 : io_id_io_ctrl_in_ALU_Src; // @[datapath.py:135:Tile.fir@222.4]
  assign io_id_io_ctrl_out_ALUOp = io_id_io_Bubble ? 5'h0 : io_id_io_ctrl_in_ALUOp; // @[datapath.py:135:Tile.fir@225.4]
  assign io_id_io_ctrl_out_Branch = io_id_io_Bubble ? 1'h0 : io_id_io_ctrl_in_Branch; // @[datapath.py:135:Tile.fir@228.4]
  assign io_id_io_ctrl_out_Branch_Src = io_id_io_Bubble ? 1'h0 : io_id_io_ctrl_in_Branch_Src; // @[datapath.py:135:Tile.fir@231.4]
  assign io_id_io_ctrl_out_Mem_Read = io_id_io_Bubble ? 1'h0 : io_id_io_ctrl_in_Mem_Read; // @[datapath.py:135:Tile.fir@234.4]
  assign io_id_io_ctrl_out_Mem_Write = io_id_io_Bubble ? 1'h0 : io_id_io_ctrl_in_Mem_Write; // @[datapath.py:135:Tile.fir@237.4]
  assign io_id_io_ctrl_out_Data_Size = io_id_io_Bubble ? 2'h0 : io_id_io_ctrl_in_Data_Size; // @[datapath.py:135:Tile.fir@240.4]
  assign io_id_io_ctrl_out_Load_Type = io_id_io_Bubble ? 1'h0 : io_id_io_ctrl_in_Load_Type; // @[datapath.py:135:Tile.fir@243.4]
  assign io_id_io_ctrl_out_Mem_to_Reg = io_id_io_Bubble ? 3'h0 : io_id_io_ctrl_in_Mem_to_Reg; // @[datapath.py:135:Tile.fir@246.4]
  assign io_id_io_ctrl_out_Jump_Type = io_id_io_Bubble ? 1'h0 : io_id_io_ctrl_in_Jump_Type; // @[datapath.py:135:Tile.fir@249.4]
  assign io_ex_io_alu_a_src = _T_193 ? io_ex_io_ex_rs1_out : _T_192; // @[datapath.py:152:Tile.fir@264.4]
  assign io_ex_io_alu_b_src = io_ex_io_ex_ALU_Src ? io_ex_io_ex_imm : _T_200; // @[datapath.py:162:Tile.fir@273.4]
  assign io_ex_io_ex_aui_pc = _T_145[31:0]; // @[datapath.py:112:Tile.fir@199.4]
  assign io_ex_io_forward_rs2_out = _T_199 ? io_ex_io_ex_rs2_out : _T_198; // @[datapath.py:163:Tile.fir@274.4]
  assign io_ex_io_PC_Src = _T_147 & io_ex_io_ex_Branch; // @[datapath.py:118:Tile.fir@206.4]
  assign io_ex_io_branch_addr = _T_142[31:0]; // @[datapath.py:113:Tile.fir@200.4]
  assign io_mem_io_mem_writedata = io_mem_io_MemWrite_Src ? io_wb_io_wb_reg_writedata : io_mem_io_mem_rs2_out; // @[datapath.py:169:Tile.fir@277.4]
  assign io_wb_io_wb_reg_writedata = _T_213 ? io_wb_io_wb_alu_sum : _T_212; // @[datapath.py:180:Tile.fir@288.4]
endmodule
module IF_ID_Register( // @[if_id_register.py:28:Tile.fir@291.2]
  input         clock, // @[rawmodule.py:100:Tile.fir@292.4]
  input         reset, // @[rawmodule.py:101:Tile.fir@293.4]
  input  [31:0] io_if_pc, // @[if_id_register.py:11:Tile.fir@294.4]
  input  [31:0] io_if_pc_4, // @[if_id_register.py:11:Tile.fir@294.4]
  input  [31:0] io_if_inst, // @[if_id_register.py:11:Tile.fir@294.4]
  output [31:0] io_id_pc, // @[if_id_register.py:11:Tile.fir@294.4]
  output [31:0] io_id_pc_4, // @[if_id_register.py:11:Tile.fir@294.4]
  output [4:0]  io_id_rs1, // @[if_id_register.py:11:Tile.fir@294.4]
  output [4:0]  io_id_rs2, // @[if_id_register.py:11:Tile.fir@294.4]
  output [31:0] io_id_inst, // @[if_id_register.py:11:Tile.fir@294.4]
  input         io_IF_ID_Write, // @[if_id_register.py:11:Tile.fir@294.4]
  input         io_IF_ID_Flush // @[if_id_register.py:11:Tile.fir@294.4]
);
  reg [31:0] pc; // @[if_id_register.py:31:Tile.fir@296.4]
  reg [31:0] _RAND_0;
  reg [31:0] pc_4; // @[if_id_register.py:32:Tile.fir@297.4]
  reg [31:0] _RAND_1;
  reg [31:0] inst; // @[if_id_register.py:33:Tile.fir@298.4]
  reg [31:0] _RAND_2;
  assign io_id_pc = pc; // @[if_id_register.py:42:Tile.fir@314.4]
  assign io_id_pc_4 = pc_4; // @[if_id_register.py:43:Tile.fir@315.4]
  assign io_id_rs1 = inst[19:15]; // @[if_id_register.py:45:Tile.fir@318.4]
  assign io_id_rs2 = inst[24:20]; // @[if_id_register.py:46:Tile.fir@320.4]
  assign io_id_inst = inst; // @[if_id_register.py:44:Tile.fir@316.4]
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
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  pc_4 = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  inst = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      pc <= 32'h0;
    end else begin
      if (io_IF_ID_Flush) begin
        pc <= 32'h0;
      end else begin
        if (io_IF_ID_Write) begin
          pc <= io_if_pc;
        end
      end
    end
    if (reset) begin
      pc_4 <= 32'h0;
    end else begin
      if (io_IF_ID_Flush) begin
        pc_4 <= 32'h0;
      end else begin
        if (io_IF_ID_Write) begin
          pc_4 <= io_if_pc_4;
        end
      end
    end
    if (reset) begin
      inst <= 32'h0;
    end else begin
      if (io_IF_ID_Flush) begin
        inst <= 32'h0;
      end else begin
        if (io_IF_ID_Write) begin
          inst <= io_if_inst;
        end
      end
    end
  end
endmodule
module RegFile( // @[regfile.py:24:Tile.fir@323.2]
  input         clock, // @[rawmodule.py:100:Tile.fir@324.4]
  input  [4:0]  io_rs1, // @[regfile.py:11:Tile.fir@326.4]
  input  [4:0]  io_rs2, // @[regfile.py:11:Tile.fir@326.4]
  input  [4:0]  io_rd, // @[regfile.py:11:Tile.fir@326.4]
  input  [31:0] io_wdata, // @[regfile.py:11:Tile.fir@326.4]
  output [31:0] io_rs1_out, // @[regfile.py:11:Tile.fir@326.4]
  output [31:0] io_rs2_out, // @[regfile.py:11:Tile.fir@326.4]
  input         io_Reg_Write // @[regfile.py:11:Tile.fir@326.4]
);
  reg [31:0] regfile [0:31]; // @[regfile.py:27:Tile.fir@328.4]
  reg [31:0] _RAND_0;
  wire [31:0] regfile__T_264_data; // @[regfile.py:27:Tile.fir@328.4]
  wire [4:0] regfile__T_264_addr; // @[regfile.py:27:Tile.fir@328.4]
  wire [31:0] regfile__T_266_data; // @[regfile.py:27:Tile.fir@328.4]
  wire [4:0] regfile__T_266_addr; // @[regfile.py:27:Tile.fir@328.4]
  wire [31:0] regfile__T_271_data; // @[regfile.py:27:Tile.fir@328.4]
  wire [4:0] regfile__T_271_addr; // @[regfile.py:27:Tile.fir@328.4]
  wire [31:0] regfile__T_273_data; // @[regfile.py:27:Tile.fir@328.4]
  wire [4:0] regfile__T_273_addr; // @[regfile.py:27:Tile.fir@328.4]
  wire  regfile__T_273_mask; // @[regfile.py:27:Tile.fir@328.4]
  wire  regfile__T_273_en; // @[regfile.py:27:Tile.fir@328.4]
  wire  _T_259; // @[regfile.py:30:Tile.fir@330.4]
  wire  _T_260; // @[regfile.py:30:Tile.fir@331.4]
  wire  _T_262; // @[regfile.py:31:Tile.fir@333.4]
  wire  _T_263; // @[regfile.py:31:Tile.fir@334.4]
  wire  _T_269; // @[regfile.py:36:Tile.fir@342.4]
  wire [31:0] _T_270; // @[regfile.py:36:Tile.fir@343.4]
  assign regfile__T_264_addr = io_rs1;
  assign regfile__T_264_data = regfile[regfile__T_264_addr]; // @[regfile.py:27:Tile.fir@328.4]
  assign regfile__T_266_addr = io_rs2;
  assign regfile__T_266_data = regfile[regfile__T_266_addr]; // @[regfile.py:27:Tile.fir@328.4]
  assign regfile__T_271_addr = io_rd;
  assign regfile__T_271_data = regfile[regfile__T_271_addr]; // @[regfile.py:27:Tile.fir@328.4]
  assign regfile__T_273_data = io_Reg_Write ? _T_270 : regfile__T_271_data;
  assign regfile__T_273_addr = io_rd;
  assign regfile__T_273_mask = 1'h1;
  assign regfile__T_273_en = 1'h1;
  assign _T_259 = io_rs1 == io_rd; // @[regfile.py:30:Tile.fir@330.4]
  assign _T_260 = io_Reg_Write & _T_259; // @[regfile.py:30:Tile.fir@331.4]
  assign _T_262 = io_rs2 == io_rd; // @[regfile.py:31:Tile.fir@333.4]
  assign _T_263 = io_Reg_Write & _T_262; // @[regfile.py:31:Tile.fir@334.4]
  assign _T_269 = io_rd == 5'h0; // @[regfile.py:36:Tile.fir@342.4]
  assign _T_270 = _T_269 ? 32'h0 : io_wdata; // @[regfile.py:36:Tile.fir@343.4]
  assign io_rs1_out = _T_260 ? io_wdata : regfile__T_264_data; // @[regfile.py:33:Tile.fir@337.4]
  assign io_rs2_out = _T_263 ? io_wdata : regfile__T_266_data; // @[regfile.py:34:Tile.fir@340.4]
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
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    regfile[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if(regfile__T_273_en & regfile__T_273_mask) begin
      regfile[regfile__T_273_addr] <= regfile__T_273_data; // @[regfile.py:27:Tile.fir@328.4]
    end
  end
endmodule
module ImmGen( // @[immgen.py:20:Tile.fir@350.2]
  input  [31:0] io_inst, // @[immgen.py:11:Tile.fir@353.4]
  output [31:0] io_imm, // @[immgen.py:11:Tile.fir@353.4]
  input  [2:0]  io_Imm_Sel // @[immgen.py:11:Tile.fir@353.4]
);
  wire [11:0] _T_282; // @[immgen.py:24:Tile.fir@356.4]
  wire [11:0] _T_283; // @[immgen.py:24:Tile.fir@357.4]
  wire [6:0] _T_284; // @[immgen.py:25:Tile.fir@358.4]
  wire [4:0] _T_285; // @[immgen.py:25:Tile.fir@359.4]
  wire [11:0] _T_286; // @[immgen.py:25:Tile.fir@360.4]
  wire [11:0] _T_287; // @[immgen.py:25:Tile.fir@361.4]
  wire  _T_288; // @[immgen.py:26:Tile.fir@362.4]
  wire  _T_289; // @[immgen.py:26:Tile.fir@363.4]
  wire [5:0] _T_290; // @[immgen.py:26:Tile.fir@364.4]
  wire [3:0] _T_291; // @[immgen.py:26:Tile.fir@365.4]
  wire [12:0] _T_295; // @[immgen.py:26:Tile.fir@369.4]
  wire [12:0] _T_296; // @[immgen.py:26:Tile.fir@370.4]
  wire [19:0] _T_297; // @[immgen.py:27:Tile.fir@371.4]
  wire [31:0] _T_298; // @[immgen.py:27:Tile.fir@372.4]
  wire [31:0] _T_299; // @[immgen.py:27:Tile.fir@373.4]
  wire [7:0] _T_301; // @[immgen.py:28:Tile.fir@375.4]
  wire  _T_302; // @[immgen.py:28:Tile.fir@376.4]
  wire [9:0] _T_303; // @[immgen.py:28:Tile.fir@377.4]
  wire [20:0] _T_307; // @[immgen.py:28:Tile.fir@381.4]
  wire [20:0] _T_308; // @[immgen.py:28:Tile.fir@382.4]
  wire  _T_309; // @[mux.py:72:Tile.fir@383.4]
  wire [31:0] _T_310; // @[immgen.py:36:Tile.fir@384.4]
  wire  _T_311; // @[mux.py:72:Tile.fir@385.4]
  wire [31:0] _T_312; // @[immgen.py:36:Tile.fir@386.4]
  wire  _T_313; // @[mux.py:72:Tile.fir@387.4]
  wire [31:0] _T_314; // @[immgen.py:36:Tile.fir@388.4]
  wire  _T_315; // @[mux.py:72:Tile.fir@389.4]
  wire [31:0] _T_316; // @[immgen.py:36:Tile.fir@390.4]
  wire  _T_317; // @[mux.py:72:Tile.fir@391.4]
  wire [31:0] _T_318; // @[immgen.py:36:Tile.fir@392.4]
  wire  _T_319; // @[mux.py:72:Tile.fir@393.4]
  wire [31:0] _T_320; // @[immgen.py:36:Tile.fir@394.4]
  assign _T_282 = io_inst[31:20]; // @[immgen.py:24:Tile.fir@356.4]
  assign _T_283 = $signed(_T_282); // @[immgen.py:24:Tile.fir@357.4]
  assign _T_284 = io_inst[31:25]; // @[immgen.py:25:Tile.fir@358.4]
  assign _T_285 = io_inst[11:7]; // @[immgen.py:25:Tile.fir@359.4]
  assign _T_286 = {_T_284,_T_285}; // @[immgen.py:25:Tile.fir@360.4]
  assign _T_287 = $signed(_T_286); // @[immgen.py:25:Tile.fir@361.4]
  assign _T_288 = io_inst[31]; // @[immgen.py:26:Tile.fir@362.4]
  assign _T_289 = io_inst[7]; // @[immgen.py:26:Tile.fir@363.4]
  assign _T_290 = io_inst[30:25]; // @[immgen.py:26:Tile.fir@364.4]
  assign _T_291 = io_inst[11:8]; // @[immgen.py:26:Tile.fir@365.4]
  assign _T_295 = {_T_288,_T_289,_T_290,_T_291,1'h0}; // @[immgen.py:26:Tile.fir@369.4]
  assign _T_296 = $signed(_T_295); // @[immgen.py:26:Tile.fir@370.4]
  assign _T_297 = io_inst[31:12]; // @[immgen.py:27:Tile.fir@371.4]
  assign _T_298 = {_T_297,12'h0}; // @[immgen.py:27:Tile.fir@372.4]
  assign _T_299 = $signed(_T_298); // @[immgen.py:27:Tile.fir@373.4]
  assign _T_301 = io_inst[19:12]; // @[immgen.py:28:Tile.fir@375.4]
  assign _T_302 = io_inst[20]; // @[immgen.py:28:Tile.fir@376.4]
  assign _T_303 = io_inst[30:21]; // @[immgen.py:28:Tile.fir@377.4]
  assign _T_307 = {_T_288,_T_301,_T_302,_T_303,1'h0}; // @[immgen.py:28:Tile.fir@381.4]
  assign _T_308 = $signed(_T_307); // @[immgen.py:28:Tile.fir@382.4]
  assign _T_309 = io_Imm_Sel == 3'h6; // @[mux.py:72:Tile.fir@383.4]
  assign _T_310 = _T_309 ? $signed({{11{_T_308[20]}},_T_308}) : $signed(32'sh0); // @[immgen.py:36:Tile.fir@384.4]
  assign _T_311 = io_Imm_Sel == 3'h5; // @[mux.py:72:Tile.fir@385.4]
  assign _T_312 = _T_311 ? $signed(_T_299) : $signed(_T_310); // @[immgen.py:36:Tile.fir@386.4]
  assign _T_313 = io_Imm_Sel == 3'h4; // @[mux.py:72:Tile.fir@387.4]
  assign _T_314 = _T_313 ? $signed({{19{_T_296[12]}},_T_296}) : $signed(_T_312); // @[immgen.py:36:Tile.fir@388.4]
  assign _T_315 = io_Imm_Sel == 3'h3; // @[mux.py:72:Tile.fir@389.4]
  assign _T_316 = _T_315 ? $signed({{20{_T_287[11]}},_T_287}) : $signed(_T_314); // @[immgen.py:36:Tile.fir@390.4]
  assign _T_317 = io_Imm_Sel == 3'h2; // @[mux.py:72:Tile.fir@391.4]
  assign _T_318 = _T_317 ? $signed({{20{_T_283[11]}},_T_283}) : $signed(_T_316); // @[immgen.py:36:Tile.fir@392.4]
  assign _T_319 = io_Imm_Sel == 3'h1; // @[mux.py:72:Tile.fir@393.4]
  assign _T_320 = _T_319 ? $signed(32'sh0) : $signed(_T_318); // @[immgen.py:36:Tile.fir@394.4]
  assign io_imm = $unsigned(_T_320); // @[immgen.py:36:Tile.fir@396.4]
endmodule
module Control( // @[control.py:92:Tile.fir@399.2]
  input  [31:0] io_inst, // @[control.py:85:Tile.fir@402.4]
  output        io_ctrl_Reg_Write, // @[control.py:85:Tile.fir@402.4]
  output [2:0]  io_ctrl_Imm_Sel, // @[control.py:85:Tile.fir@402.4]
  output        io_ctrl_ALU_Src, // @[control.py:85:Tile.fir@402.4]
  output [4:0]  io_ctrl_ALUOp, // @[control.py:85:Tile.fir@402.4]
  output        io_ctrl_Branch, // @[control.py:85:Tile.fir@402.4]
  output        io_ctrl_Branch_Src, // @[control.py:85:Tile.fir@402.4]
  output        io_ctrl_Mem_Read, // @[control.py:85:Tile.fir@402.4]
  output        io_ctrl_Mem_Write, // @[control.py:85:Tile.fir@402.4]
  output [1:0]  io_ctrl_Data_Size, // @[control.py:85:Tile.fir@402.4]
  output        io_ctrl_Load_Type, // @[control.py:85:Tile.fir@402.4]
  output [2:0]  io_ctrl_Mem_to_Reg, // @[control.py:85:Tile.fir@402.4]
  output        io_ctrl_Jump_Type // @[control.py:85:Tile.fir@402.4]
);
  wire [31:0] _T_341; // @[listlookup.py:52:Tile.fir@404.4]
  wire  _T_342; // @[listlookup.py:52:Tile.fir@405.4]
  wire  _T_344; // @[listlookup.py:52:Tile.fir@407.4]
  wire  _T_346; // @[listlookup.py:52:Tile.fir@409.4]
  wire  _T_348; // @[listlookup.py:52:Tile.fir@411.4]
  wire  _T_350; // @[listlookup.py:52:Tile.fir@413.4]
  wire [31:0] _T_351; // @[listlookup.py:52:Tile.fir@414.4]
  wire  _T_352; // @[listlookup.py:52:Tile.fir@415.4]
  wire  _T_354; // @[listlookup.py:52:Tile.fir@417.4]
  wire  _T_356; // @[listlookup.py:52:Tile.fir@419.4]
  wire  _T_358; // @[listlookup.py:52:Tile.fir@421.4]
  wire  _T_360; // @[listlookup.py:52:Tile.fir@423.4]
  wire  _T_362; // @[listlookup.py:52:Tile.fir@425.4]
  wire  _T_364; // @[listlookup.py:52:Tile.fir@427.4]
  wire  _T_366; // @[listlookup.py:52:Tile.fir@429.4]
  wire  _T_368; // @[listlookup.py:52:Tile.fir@431.4]
  wire  _T_370; // @[listlookup.py:52:Tile.fir@433.4]
  wire  _T_372; // @[listlookup.py:52:Tile.fir@435.4]
  wire  _T_374; // @[listlookup.py:52:Tile.fir@437.4]
  wire  _T_376; // @[listlookup.py:52:Tile.fir@439.4]
  wire  _T_378; // @[listlookup.py:52:Tile.fir@441.4]
  wire  _T_380; // @[listlookup.py:52:Tile.fir@443.4]
  wire  _T_382; // @[listlookup.py:52:Tile.fir@445.4]
  wire  _T_384; // @[listlookup.py:52:Tile.fir@447.4]
  wire  _T_386; // @[listlookup.py:52:Tile.fir@449.4]
  wire  _T_388; // @[listlookup.py:52:Tile.fir@451.4]
  wire  _T_390; // @[listlookup.py:52:Tile.fir@453.4]
  wire  _T_392; // @[listlookup.py:52:Tile.fir@455.4]
  wire  _T_394; // @[listlookup.py:52:Tile.fir@457.4]
  wire  _T_396; // @[listlookup.py:52:Tile.fir@459.4]
  wire  _T_398; // @[listlookup.py:52:Tile.fir@461.4]
  wire  _T_400; // @[listlookup.py:52:Tile.fir@463.4]
  wire  _T_402; // @[listlookup.py:52:Tile.fir@465.4]
  wire  _T_404; // @[listlookup.py:52:Tile.fir@467.4]
  wire  _T_406; // @[listlookup.py:52:Tile.fir@469.4]
  wire [31:0] _T_407; // @[listlookup.py:52:Tile.fir@470.4]
  wire  _T_408; // @[listlookup.py:52:Tile.fir@471.4]
  wire  _T_410; // @[listlookup.py:52:Tile.fir@473.4]
  wire  _T_412; // @[listlookup.py:52:Tile.fir@475.4]
  wire  _T_414; // @[listlookup.py:52:Tile.fir@477.4]
  wire  _T_419; // @[control.py:95:Tile.fir@482.4]
  wire  _T_420; // @[control.py:95:Tile.fir@483.4]
  wire  _T_421; // @[control.py:95:Tile.fir@484.4]
  wire  _T_422; // @[control.py:95:Tile.fir@485.4]
  wire  _T_423; // @[control.py:95:Tile.fir@486.4]
  wire  _T_424; // @[control.py:95:Tile.fir@487.4]
  wire  _T_425; // @[control.py:95:Tile.fir@488.4]
  wire  _T_426; // @[control.py:95:Tile.fir@489.4]
  wire  _T_427; // @[control.py:95:Tile.fir@490.4]
  wire  _T_428; // @[control.py:95:Tile.fir@491.4]
  wire  _T_429; // @[control.py:95:Tile.fir@492.4]
  wire  _T_430; // @[control.py:95:Tile.fir@493.4]
  wire  _T_431; // @[control.py:95:Tile.fir@494.4]
  wire  _T_432; // @[control.py:95:Tile.fir@495.4]
  wire  _T_433; // @[control.py:95:Tile.fir@496.4]
  wire  _T_434; // @[control.py:95:Tile.fir@497.4]
  wire  _T_435; // @[control.py:95:Tile.fir@498.4]
  wire  _T_436; // @[control.py:95:Tile.fir@499.4]
  wire  _T_437; // @[control.py:95:Tile.fir@500.4]
  wire  _T_438; // @[control.py:95:Tile.fir@501.4]
  wire  _T_439; // @[control.py:95:Tile.fir@502.4]
  wire  _T_440; // @[control.py:95:Tile.fir@503.4]
  wire  _T_441; // @[control.py:95:Tile.fir@504.4]
  wire  _T_442; // @[control.py:95:Tile.fir@505.4]
  wire  _T_443; // @[control.py:95:Tile.fir@506.4]
  wire  _T_444; // @[control.py:95:Tile.fir@507.4]
  wire  _T_445; // @[control.py:95:Tile.fir@508.4]
  wire  _T_446; // @[control.py:95:Tile.fir@509.4]
  wire  _T_447; // @[control.py:95:Tile.fir@510.4]
  wire  _T_448; // @[control.py:95:Tile.fir@511.4]
  wire  _T_449; // @[control.py:95:Tile.fir@512.4]
  wire  _T_450; // @[control.py:95:Tile.fir@513.4]
  wire  _T_451; // @[control.py:95:Tile.fir@514.4]
  wire  _T_452; // @[control.py:95:Tile.fir@515.4]
  wire  _T_453; // @[control.py:95:Tile.fir@516.4]
  wire [2:0] _T_456; // @[control.py:95:Tile.fir@519.4]
  wire [2:0] _T_457; // @[control.py:95:Tile.fir@520.4]
  wire [2:0] _T_458; // @[control.py:95:Tile.fir@521.4]
  wire [2:0] _T_459; // @[control.py:95:Tile.fir@522.4]
  wire [2:0] _T_460; // @[control.py:95:Tile.fir@523.4]
  wire [2:0] _T_461; // @[control.py:95:Tile.fir@524.4]
  wire [2:0] _T_462; // @[control.py:95:Tile.fir@525.4]
  wire [2:0] _T_463; // @[control.py:95:Tile.fir@526.4]
  wire [2:0] _T_464; // @[control.py:95:Tile.fir@527.4]
  wire [2:0] _T_465; // @[control.py:95:Tile.fir@528.4]
  wire [2:0] _T_466; // @[control.py:95:Tile.fir@529.4]
  wire [2:0] _T_467; // @[control.py:95:Tile.fir@530.4]
  wire [2:0] _T_468; // @[control.py:95:Tile.fir@531.4]
  wire [2:0] _T_469; // @[control.py:95:Tile.fir@532.4]
  wire [2:0] _T_470; // @[control.py:95:Tile.fir@533.4]
  wire [2:0] _T_471; // @[control.py:95:Tile.fir@534.4]
  wire [2:0] _T_472; // @[control.py:95:Tile.fir@535.4]
  wire [2:0] _T_473; // @[control.py:95:Tile.fir@536.4]
  wire [2:0] _T_474; // @[control.py:95:Tile.fir@537.4]
  wire [2:0] _T_475; // @[control.py:95:Tile.fir@538.4]
  wire [2:0] _T_476; // @[control.py:95:Tile.fir@539.4]
  wire [2:0] _T_477; // @[control.py:95:Tile.fir@540.4]
  wire [2:0] _T_478; // @[control.py:95:Tile.fir@541.4]
  wire [2:0] _T_479; // @[control.py:95:Tile.fir@542.4]
  wire [2:0] _T_480; // @[control.py:95:Tile.fir@543.4]
  wire [2:0] _T_481; // @[control.py:95:Tile.fir@544.4]
  wire [2:0] _T_482; // @[control.py:95:Tile.fir@545.4]
  wire [2:0] _T_483; // @[control.py:95:Tile.fir@546.4]
  wire [2:0] _T_484; // @[control.py:95:Tile.fir@547.4]
  wire [2:0] _T_485; // @[control.py:95:Tile.fir@548.4]
  wire [2:0] _T_486; // @[control.py:95:Tile.fir@549.4]
  wire [2:0] _T_487; // @[control.py:95:Tile.fir@550.4]
  wire [2:0] _T_488; // @[control.py:95:Tile.fir@551.4]
  wire [2:0] _T_489; // @[control.py:95:Tile.fir@552.4]
  wire [2:0] _T_490; // @[control.py:95:Tile.fir@553.4]
  wire [2:0] _T_491; // @[control.py:95:Tile.fir@554.4]
  wire  _T_505; // @[control.py:95:Tile.fir@568.4]
  wire  _T_506; // @[control.py:95:Tile.fir@569.4]
  wire  _T_507; // @[control.py:95:Tile.fir@570.4]
  wire  _T_508; // @[control.py:95:Tile.fir@571.4]
  wire  _T_509; // @[control.py:95:Tile.fir@572.4]
  wire  _T_510; // @[control.py:95:Tile.fir@573.4]
  wire  _T_511; // @[control.py:95:Tile.fir@574.4]
  wire  _T_512; // @[control.py:95:Tile.fir@575.4]
  wire  _T_513; // @[control.py:95:Tile.fir@576.4]
  wire  _T_514; // @[control.py:95:Tile.fir@577.4]
  wire  _T_515; // @[control.py:95:Tile.fir@578.4]
  wire  _T_516; // @[control.py:95:Tile.fir@579.4]
  wire  _T_517; // @[control.py:95:Tile.fir@580.4]
  wire  _T_518; // @[control.py:95:Tile.fir@581.4]
  wire  _T_519; // @[control.py:95:Tile.fir@582.4]
  wire  _T_520; // @[control.py:95:Tile.fir@583.4]
  wire  _T_521; // @[control.py:95:Tile.fir@584.4]
  wire  _T_522; // @[control.py:95:Tile.fir@585.4]
  wire  _T_523; // @[control.py:95:Tile.fir@586.4]
  wire  _T_524; // @[control.py:95:Tile.fir@587.4]
  wire  _T_525; // @[control.py:95:Tile.fir@588.4]
  wire  _T_526; // @[control.py:95:Tile.fir@589.4]
  wire  _T_527; // @[control.py:95:Tile.fir@590.4]
  wire  _T_528; // @[control.py:95:Tile.fir@591.4]
  wire  _T_529; // @[control.py:95:Tile.fir@592.4]
  wire [4:0] _T_532; // @[control.py:95:Tile.fir@595.4]
  wire [4:0] _T_533; // @[control.py:95:Tile.fir@596.4]
  wire [4:0] _T_534; // @[control.py:95:Tile.fir@597.4]
  wire [4:0] _T_535; // @[control.py:95:Tile.fir@598.4]
  wire [4:0] _T_536; // @[control.py:95:Tile.fir@599.4]
  wire [4:0] _T_537; // @[control.py:95:Tile.fir@600.4]
  wire [4:0] _T_538; // @[control.py:95:Tile.fir@601.4]
  wire [4:0] _T_539; // @[control.py:95:Tile.fir@602.4]
  wire [4:0] _T_540; // @[control.py:95:Tile.fir@603.4]
  wire [4:0] _T_541; // @[control.py:95:Tile.fir@604.4]
  wire [4:0] _T_542; // @[control.py:95:Tile.fir@605.4]
  wire [4:0] _T_543; // @[control.py:95:Tile.fir@606.4]
  wire [4:0] _T_544; // @[control.py:95:Tile.fir@607.4]
  wire [4:0] _T_545; // @[control.py:95:Tile.fir@608.4]
  wire [4:0] _T_546; // @[control.py:95:Tile.fir@609.4]
  wire [4:0] _T_547; // @[control.py:95:Tile.fir@610.4]
  wire [4:0] _T_548; // @[control.py:95:Tile.fir@611.4]
  wire [4:0] _T_549; // @[control.py:95:Tile.fir@612.4]
  wire [4:0] _T_550; // @[control.py:95:Tile.fir@613.4]
  wire [4:0] _T_551; // @[control.py:95:Tile.fir@614.4]
  wire [4:0] _T_552; // @[control.py:95:Tile.fir@615.4]
  wire [4:0] _T_553; // @[control.py:95:Tile.fir@616.4]
  wire [4:0] _T_554; // @[control.py:95:Tile.fir@617.4]
  wire [4:0] _T_555; // @[control.py:95:Tile.fir@618.4]
  wire [4:0] _T_556; // @[control.py:95:Tile.fir@619.4]
  wire [4:0] _T_557; // @[control.py:95:Tile.fir@620.4]
  wire [4:0] _T_558; // @[control.py:95:Tile.fir@621.4]
  wire [4:0] _T_559; // @[control.py:95:Tile.fir@622.4]
  wire [4:0] _T_560; // @[control.py:95:Tile.fir@623.4]
  wire [4:0] _T_561; // @[control.py:95:Tile.fir@624.4]
  wire [4:0] _T_562; // @[control.py:95:Tile.fir@625.4]
  wire [4:0] _T_563; // @[control.py:95:Tile.fir@626.4]
  wire [4:0] _T_564; // @[control.py:95:Tile.fir@627.4]
  wire [4:0] _T_565; // @[control.py:95:Tile.fir@628.4]
  wire [4:0] _T_566; // @[control.py:95:Tile.fir@629.4]
  wire [4:0] _T_567; // @[control.py:95:Tile.fir@630.4]
  wire  _T_573; // @[control.py:95:Tile.fir@636.4]
  wire  _T_574; // @[control.py:95:Tile.fir@637.4]
  wire  _T_575; // @[control.py:95:Tile.fir@638.4]
  wire  _T_576; // @[control.py:95:Tile.fir@639.4]
  wire  _T_577; // @[control.py:95:Tile.fir@640.4]
  wire  _T_578; // @[control.py:95:Tile.fir@641.4]
  wire  _T_579; // @[control.py:95:Tile.fir@642.4]
  wire  _T_580; // @[control.py:95:Tile.fir@643.4]
  wire  _T_581; // @[control.py:95:Tile.fir@644.4]
  wire  _T_582; // @[control.py:95:Tile.fir@645.4]
  wire  _T_583; // @[control.py:95:Tile.fir@646.4]
  wire  _T_584; // @[control.py:95:Tile.fir@647.4]
  wire  _T_585; // @[control.py:95:Tile.fir@648.4]
  wire  _T_586; // @[control.py:95:Tile.fir@649.4]
  wire  _T_587; // @[control.py:95:Tile.fir@650.4]
  wire  _T_588; // @[control.py:95:Tile.fir@651.4]
  wire  _T_589; // @[control.py:95:Tile.fir@652.4]
  wire  _T_590; // @[control.py:95:Tile.fir@653.4]
  wire  _T_591; // @[control.py:95:Tile.fir@654.4]
  wire  _T_592; // @[control.py:95:Tile.fir@655.4]
  wire  _T_593; // @[control.py:95:Tile.fir@656.4]
  wire  _T_594; // @[control.py:95:Tile.fir@657.4]
  wire  _T_595; // @[control.py:95:Tile.fir@658.4]
  wire  _T_596; // @[control.py:95:Tile.fir@659.4]
  wire  _T_597; // @[control.py:95:Tile.fir@660.4]
  wire  _T_598; // @[control.py:95:Tile.fir@661.4]
  wire  _T_599; // @[control.py:95:Tile.fir@662.4]
  wire  _T_600; // @[control.py:95:Tile.fir@663.4]
  wire  _T_601; // @[control.py:95:Tile.fir@664.4]
  wire  _T_602; // @[control.py:95:Tile.fir@665.4]
  wire  _T_603; // @[control.py:95:Tile.fir@666.4]
  wire  _T_604; // @[control.py:95:Tile.fir@667.4]
  wire  _T_605; // @[control.py:95:Tile.fir@668.4]
  wire  _T_611; // @[control.py:95:Tile.fir@674.4]
  wire  _T_612; // @[control.py:95:Tile.fir@675.4]
  wire  _T_613; // @[control.py:95:Tile.fir@676.4]
  wire  _T_614; // @[control.py:95:Tile.fir@677.4]
  wire  _T_615; // @[control.py:95:Tile.fir@678.4]
  wire  _T_616; // @[control.py:95:Tile.fir@679.4]
  wire  _T_617; // @[control.py:95:Tile.fir@680.4]
  wire  _T_618; // @[control.py:95:Tile.fir@681.4]
  wire  _T_619; // @[control.py:95:Tile.fir@682.4]
  wire  _T_620; // @[control.py:95:Tile.fir@683.4]
  wire  _T_621; // @[control.py:95:Tile.fir@684.4]
  wire  _T_622; // @[control.py:95:Tile.fir@685.4]
  wire  _T_623; // @[control.py:95:Tile.fir@686.4]
  wire  _T_624; // @[control.py:95:Tile.fir@687.4]
  wire  _T_625; // @[control.py:95:Tile.fir@688.4]
  wire  _T_626; // @[control.py:95:Tile.fir@689.4]
  wire  _T_627; // @[control.py:95:Tile.fir@690.4]
  wire  _T_628; // @[control.py:95:Tile.fir@691.4]
  wire  _T_629; // @[control.py:95:Tile.fir@692.4]
  wire  _T_630; // @[control.py:95:Tile.fir@693.4]
  wire  _T_631; // @[control.py:95:Tile.fir@694.4]
  wire  _T_632; // @[control.py:95:Tile.fir@695.4]
  wire  _T_633; // @[control.py:95:Tile.fir@696.4]
  wire  _T_634; // @[control.py:95:Tile.fir@697.4]
  wire  _T_635; // @[control.py:95:Tile.fir@698.4]
  wire  _T_636; // @[control.py:95:Tile.fir@699.4]
  wire  _T_637; // @[control.py:95:Tile.fir@700.4]
  wire  _T_638; // @[control.py:95:Tile.fir@701.4]
  wire  _T_639; // @[control.py:95:Tile.fir@702.4]
  wire  _T_640; // @[control.py:95:Tile.fir@703.4]
  wire  _T_641; // @[control.py:95:Tile.fir@704.4]
  wire  _T_642; // @[control.py:95:Tile.fir@705.4]
  wire  _T_643; // @[control.py:95:Tile.fir@706.4]
  wire  _T_660; // @[control.py:95:Tile.fir@723.4]
  wire  _T_661; // @[control.py:95:Tile.fir@724.4]
  wire  _T_662; // @[control.py:95:Tile.fir@725.4]
  wire  _T_663; // @[control.py:95:Tile.fir@726.4]
  wire  _T_664; // @[control.py:95:Tile.fir@727.4]
  wire  _T_665; // @[control.py:95:Tile.fir@728.4]
  wire  _T_666; // @[control.py:95:Tile.fir@729.4]
  wire  _T_667; // @[control.py:95:Tile.fir@730.4]
  wire  _T_668; // @[control.py:95:Tile.fir@731.4]
  wire  _T_669; // @[control.py:95:Tile.fir@732.4]
  wire  _T_670; // @[control.py:95:Tile.fir@733.4]
  wire  _T_671; // @[control.py:95:Tile.fir@734.4]
  wire  _T_672; // @[control.py:95:Tile.fir@735.4]
  wire  _T_673; // @[control.py:95:Tile.fir@736.4]
  wire  _T_674; // @[control.py:95:Tile.fir@737.4]
  wire  _T_675; // @[control.py:95:Tile.fir@738.4]
  wire  _T_676; // @[control.py:95:Tile.fir@739.4]
  wire  _T_677; // @[control.py:95:Tile.fir@740.4]
  wire  _T_678; // @[control.py:95:Tile.fir@741.4]
  wire  _T_679; // @[control.py:95:Tile.fir@742.4]
  wire  _T_680; // @[control.py:95:Tile.fir@743.4]
  wire  _T_681; // @[control.py:95:Tile.fir@744.4]
  wire  _T_697; // @[control.py:95:Tile.fir@760.4]
  wire  _T_698; // @[control.py:95:Tile.fir@761.4]
  wire  _T_699; // @[control.py:95:Tile.fir@762.4]
  wire  _T_700; // @[control.py:95:Tile.fir@763.4]
  wire  _T_701; // @[control.py:95:Tile.fir@764.4]
  wire  _T_702; // @[control.py:95:Tile.fir@765.4]
  wire  _T_703; // @[control.py:95:Tile.fir@766.4]
  wire  _T_704; // @[control.py:95:Tile.fir@767.4]
  wire  _T_705; // @[control.py:95:Tile.fir@768.4]
  wire  _T_706; // @[control.py:95:Tile.fir@769.4]
  wire  _T_707; // @[control.py:95:Tile.fir@770.4]
  wire  _T_708; // @[control.py:95:Tile.fir@771.4]
  wire  _T_709; // @[control.py:95:Tile.fir@772.4]
  wire  _T_710; // @[control.py:95:Tile.fir@773.4]
  wire  _T_711; // @[control.py:95:Tile.fir@774.4]
  wire  _T_712; // @[control.py:95:Tile.fir@775.4]
  wire  _T_713; // @[control.py:95:Tile.fir@776.4]
  wire  _T_714; // @[control.py:95:Tile.fir@777.4]
  wire  _T_715; // @[control.py:95:Tile.fir@778.4]
  wire  _T_716; // @[control.py:95:Tile.fir@779.4]
  wire  _T_717; // @[control.py:95:Tile.fir@780.4]
  wire  _T_718; // @[control.py:95:Tile.fir@781.4]
  wire  _T_719; // @[control.py:95:Tile.fir@782.4]
  wire [1:0] _T_732; // @[control.py:95:Tile.fir@795.4]
  wire [1:0] _T_733; // @[control.py:95:Tile.fir@796.4]
  wire [1:0] _T_734; // @[control.py:95:Tile.fir@797.4]
  wire [1:0] _T_735; // @[control.py:95:Tile.fir@798.4]
  wire [1:0] _T_736; // @[control.py:95:Tile.fir@799.4]
  wire [1:0] _T_737; // @[control.py:95:Tile.fir@800.4]
  wire [1:0] _T_738; // @[control.py:95:Tile.fir@801.4]
  wire [1:0] _T_739; // @[control.py:95:Tile.fir@802.4]
  wire [1:0] _T_740; // @[control.py:95:Tile.fir@803.4]
  wire [1:0] _T_741; // @[control.py:95:Tile.fir@804.4]
  wire [1:0] _T_742; // @[control.py:95:Tile.fir@805.4]
  wire [1:0] _T_743; // @[control.py:95:Tile.fir@806.4]
  wire [1:0] _T_744; // @[control.py:95:Tile.fir@807.4]
  wire [1:0] _T_745; // @[control.py:95:Tile.fir@808.4]
  wire [1:0] _T_746; // @[control.py:95:Tile.fir@809.4]
  wire [1:0] _T_747; // @[control.py:95:Tile.fir@810.4]
  wire [1:0] _T_748; // @[control.py:95:Tile.fir@811.4]
  wire [1:0] _T_749; // @[control.py:95:Tile.fir@812.4]
  wire [1:0] _T_750; // @[control.py:95:Tile.fir@813.4]
  wire [1:0] _T_751; // @[control.py:95:Tile.fir@814.4]
  wire [1:0] _T_752; // @[control.py:95:Tile.fir@815.4]
  wire [1:0] _T_753; // @[control.py:95:Tile.fir@816.4]
  wire [1:0] _T_754; // @[control.py:95:Tile.fir@817.4]
  wire [1:0] _T_755; // @[control.py:95:Tile.fir@818.4]
  wire [1:0] _T_756; // @[control.py:95:Tile.fir@819.4]
  wire [1:0] _T_757; // @[control.py:95:Tile.fir@820.4]
  wire  _T_775; // @[control.py:95:Tile.fir@838.4]
  wire  _T_776; // @[control.py:95:Tile.fir@839.4]
  wire  _T_777; // @[control.py:95:Tile.fir@840.4]
  wire  _T_778; // @[control.py:95:Tile.fir@841.4]
  wire  _T_779; // @[control.py:95:Tile.fir@842.4]
  wire  _T_780; // @[control.py:95:Tile.fir@843.4]
  wire  _T_781; // @[control.py:95:Tile.fir@844.4]
  wire  _T_782; // @[control.py:95:Tile.fir@845.4]
  wire  _T_783; // @[control.py:95:Tile.fir@846.4]
  wire  _T_784; // @[control.py:95:Tile.fir@847.4]
  wire  _T_785; // @[control.py:95:Tile.fir@848.4]
  wire  _T_786; // @[control.py:95:Tile.fir@849.4]
  wire  _T_787; // @[control.py:95:Tile.fir@850.4]
  wire  _T_788; // @[control.py:95:Tile.fir@851.4]
  wire  _T_789; // @[control.py:95:Tile.fir@852.4]
  wire  _T_790; // @[control.py:95:Tile.fir@853.4]
  wire  _T_791; // @[control.py:95:Tile.fir@854.4]
  wire  _T_792; // @[control.py:95:Tile.fir@855.4]
  wire  _T_793; // @[control.py:95:Tile.fir@856.4]
  wire  _T_794; // @[control.py:95:Tile.fir@857.4]
  wire  _T_795; // @[control.py:95:Tile.fir@858.4]
  wire [2:0] _T_798; // @[control.py:95:Tile.fir@861.4]
  wire [2:0] _T_799; // @[control.py:95:Tile.fir@862.4]
  wire [2:0] _T_800; // @[control.py:95:Tile.fir@863.4]
  wire [2:0] _T_801; // @[control.py:95:Tile.fir@864.4]
  wire [2:0] _T_802; // @[control.py:95:Tile.fir@865.4]
  wire [2:0] _T_803; // @[control.py:95:Tile.fir@866.4]
  wire [2:0] _T_804; // @[control.py:95:Tile.fir@867.4]
  wire [2:0] _T_805; // @[control.py:95:Tile.fir@868.4]
  wire [2:0] _T_806; // @[control.py:95:Tile.fir@869.4]
  wire [2:0] _T_807; // @[control.py:95:Tile.fir@870.4]
  wire [2:0] _T_808; // @[control.py:95:Tile.fir@871.4]
  wire [2:0] _T_809; // @[control.py:95:Tile.fir@872.4]
  wire [2:0] _T_810; // @[control.py:95:Tile.fir@873.4]
  wire [2:0] _T_811; // @[control.py:95:Tile.fir@874.4]
  wire [2:0] _T_812; // @[control.py:95:Tile.fir@875.4]
  wire [2:0] _T_813; // @[control.py:95:Tile.fir@876.4]
  wire [2:0] _T_814; // @[control.py:95:Tile.fir@877.4]
  wire [2:0] _T_815; // @[control.py:95:Tile.fir@878.4]
  wire [2:0] _T_816; // @[control.py:95:Tile.fir@879.4]
  wire [2:0] _T_817; // @[control.py:95:Tile.fir@880.4]
  wire [2:0] _T_818; // @[control.py:95:Tile.fir@881.4]
  wire [2:0] _T_819; // @[control.py:95:Tile.fir@882.4]
  wire [2:0] _T_820; // @[control.py:95:Tile.fir@883.4]
  wire [2:0] _T_821; // @[control.py:95:Tile.fir@884.4]
  wire [2:0] _T_822; // @[control.py:95:Tile.fir@885.4]
  wire [2:0] _T_823; // @[control.py:95:Tile.fir@886.4]
  wire [2:0] _T_824; // @[control.py:95:Tile.fir@887.4]
  wire [2:0] _T_825; // @[control.py:95:Tile.fir@888.4]
  wire [2:0] _T_826; // @[control.py:95:Tile.fir@889.4]
  wire [2:0] _T_827; // @[control.py:95:Tile.fir@890.4]
  wire [2:0] _T_828; // @[control.py:95:Tile.fir@891.4]
  wire [2:0] _T_829; // @[control.py:95:Tile.fir@892.4]
  wire [2:0] _T_830; // @[control.py:95:Tile.fir@893.4]
  wire [2:0] _T_831; // @[control.py:95:Tile.fir@894.4]
  wire [2:0] _T_832; // @[control.py:95:Tile.fir@895.4]
  wire [2:0] _T_833; // @[control.py:95:Tile.fir@896.4]
  wire  _T_840; // @[control.py:95:Tile.fir@903.4]
  wire  _T_841; // @[control.py:95:Tile.fir@904.4]
  wire  _T_842; // @[control.py:95:Tile.fir@905.4]
  wire  _T_843; // @[control.py:95:Tile.fir@906.4]
  wire  _T_844; // @[control.py:95:Tile.fir@907.4]
  wire  _T_845; // @[control.py:95:Tile.fir@908.4]
  wire  _T_846; // @[control.py:95:Tile.fir@909.4]
  wire  _T_847; // @[control.py:95:Tile.fir@910.4]
  wire  _T_848; // @[control.py:95:Tile.fir@911.4]
  wire  _T_849; // @[control.py:95:Tile.fir@912.4]
  wire  _T_850; // @[control.py:95:Tile.fir@913.4]
  wire  _T_851; // @[control.py:95:Tile.fir@914.4]
  wire  _T_852; // @[control.py:95:Tile.fir@915.4]
  wire  _T_853; // @[control.py:95:Tile.fir@916.4]
  wire  _T_854; // @[control.py:95:Tile.fir@917.4]
  wire  _T_855; // @[control.py:95:Tile.fir@918.4]
  wire  _T_856; // @[control.py:95:Tile.fir@919.4]
  wire  _T_857; // @[control.py:95:Tile.fir@920.4]
  wire  _T_858; // @[control.py:95:Tile.fir@921.4]
  wire  _T_859; // @[control.py:95:Tile.fir@922.4]
  wire  _T_860; // @[control.py:95:Tile.fir@923.4]
  wire  _T_861; // @[control.py:95:Tile.fir@924.4]
  wire  _T_862; // @[control.py:95:Tile.fir@925.4]
  wire  _T_863; // @[control.py:95:Tile.fir@926.4]
  wire  _T_864; // @[control.py:95:Tile.fir@927.4]
  wire  _T_865; // @[control.py:95:Tile.fir@928.4]
  wire  _T_866; // @[control.py:95:Tile.fir@929.4]
  wire  _T_867; // @[control.py:95:Tile.fir@930.4]
  wire  _T_868; // @[control.py:95:Tile.fir@931.4]
  wire  _T_869; // @[control.py:95:Tile.fir@932.4]
  wire  _T_870; // @[control.py:95:Tile.fir@933.4]
  wire  _T_871; // @[control.py:95:Tile.fir@934.4]
  assign _T_341 = io_inst & 32'hfe00707f; // @[listlookup.py:52:Tile.fir@404.4]
  assign _T_342 = _T_341 == 32'h33; // @[listlookup.py:52:Tile.fir@405.4]
  assign _T_344 = _T_341 == 32'h40000033; // @[listlookup.py:52:Tile.fir@407.4]
  assign _T_346 = _T_341 == 32'h7033; // @[listlookup.py:52:Tile.fir@409.4]
  assign _T_348 = _T_341 == 32'h6033; // @[listlookup.py:52:Tile.fir@411.4]
  assign _T_350 = _T_341 == 32'h4033; // @[listlookup.py:52:Tile.fir@413.4]
  assign _T_351 = io_inst & 32'h707f; // @[listlookup.py:52:Tile.fir@414.4]
  assign _T_352 = _T_351 == 32'h13; // @[listlookup.py:52:Tile.fir@415.4]
  assign _T_354 = _T_351 == 32'h7013; // @[listlookup.py:52:Tile.fir@417.4]
  assign _T_356 = _T_351 == 32'h6013; // @[listlookup.py:52:Tile.fir@419.4]
  assign _T_358 = _T_351 == 32'h4013; // @[listlookup.py:52:Tile.fir@421.4]
  assign _T_360 = _T_341 == 32'h1033; // @[listlookup.py:52:Tile.fir@423.4]
  assign _T_362 = _T_341 == 32'h5033; // @[listlookup.py:52:Tile.fir@425.4]
  assign _T_364 = _T_341 == 32'h40005033; // @[listlookup.py:52:Tile.fir@427.4]
  assign _T_366 = _T_341 == 32'h1013; // @[listlookup.py:52:Tile.fir@429.4]
  assign _T_368 = _T_341 == 32'h5013; // @[listlookup.py:52:Tile.fir@431.4]
  assign _T_370 = _T_341 == 32'h40005013; // @[listlookup.py:52:Tile.fir@433.4]
  assign _T_372 = _T_341 == 32'h2033; // @[listlookup.py:52:Tile.fir@435.4]
  assign _T_374 = _T_341 == 32'h3033; // @[listlookup.py:52:Tile.fir@437.4]
  assign _T_376 = _T_351 == 32'h2013; // @[listlookup.py:52:Tile.fir@439.4]
  assign _T_378 = _T_351 == 32'h3013; // @[listlookup.py:52:Tile.fir@441.4]
  assign _T_380 = _T_351 == 32'h2003; // @[listlookup.py:52:Tile.fir@443.4]
  assign _T_382 = _T_351 == 32'h1003; // @[listlookup.py:52:Tile.fir@445.4]
  assign _T_384 = _T_351 == 32'h3; // @[listlookup.py:52:Tile.fir@447.4]
  assign _T_386 = _T_351 == 32'h5003; // @[listlookup.py:52:Tile.fir@449.4]
  assign _T_388 = _T_351 == 32'h4003; // @[listlookup.py:52:Tile.fir@451.4]
  assign _T_390 = _T_351 == 32'h2023; // @[listlookup.py:52:Tile.fir@453.4]
  assign _T_392 = _T_351 == 32'h1023; // @[listlookup.py:52:Tile.fir@455.4]
  assign _T_394 = _T_351 == 32'h23; // @[listlookup.py:52:Tile.fir@457.4]
  assign _T_396 = _T_351 == 32'h63; // @[listlookup.py:52:Tile.fir@459.4]
  assign _T_398 = _T_351 == 32'h1063; // @[listlookup.py:52:Tile.fir@461.4]
  assign _T_400 = _T_351 == 32'h4063; // @[listlookup.py:52:Tile.fir@463.4]
  assign _T_402 = _T_351 == 32'h5063; // @[listlookup.py:52:Tile.fir@465.4]
  assign _T_404 = _T_351 == 32'h6063; // @[listlookup.py:52:Tile.fir@467.4]
  assign _T_406 = _T_351 == 32'h7063; // @[listlookup.py:52:Tile.fir@469.4]
  assign _T_407 = io_inst & 32'h7f; // @[listlookup.py:52:Tile.fir@470.4]
  assign _T_408 = _T_407 == 32'h6f; // @[listlookup.py:52:Tile.fir@471.4]
  assign _T_410 = _T_351 == 32'h67; // @[listlookup.py:52:Tile.fir@473.4]
  assign _T_412 = _T_407 == 32'h37; // @[listlookup.py:52:Tile.fir@475.4]
  assign _T_414 = _T_407 == 32'h17; // @[listlookup.py:52:Tile.fir@477.4]
  assign _T_419 = _T_412 ? 1'h1 : _T_414; // @[control.py:95:Tile.fir@482.4]
  assign _T_420 = _T_410 ? 1'h1 : _T_419; // @[control.py:95:Tile.fir@483.4]
  assign _T_421 = _T_408 ? 1'h1 : _T_420; // @[control.py:95:Tile.fir@484.4]
  assign _T_422 = _T_406 ? 1'h0 : _T_421; // @[control.py:95:Tile.fir@485.4]
  assign _T_423 = _T_404 ? 1'h0 : _T_422; // @[control.py:95:Tile.fir@486.4]
  assign _T_424 = _T_402 ? 1'h0 : _T_423; // @[control.py:95:Tile.fir@487.4]
  assign _T_425 = _T_400 ? 1'h0 : _T_424; // @[control.py:95:Tile.fir@488.4]
  assign _T_426 = _T_398 ? 1'h0 : _T_425; // @[control.py:95:Tile.fir@489.4]
  assign _T_427 = _T_396 ? 1'h0 : _T_426; // @[control.py:95:Tile.fir@490.4]
  assign _T_428 = _T_394 ? 1'h0 : _T_427; // @[control.py:95:Tile.fir@491.4]
  assign _T_429 = _T_392 ? 1'h0 : _T_428; // @[control.py:95:Tile.fir@492.4]
  assign _T_430 = _T_390 ? 1'h0 : _T_429; // @[control.py:95:Tile.fir@493.4]
  assign _T_431 = _T_388 ? 1'h1 : _T_430; // @[control.py:95:Tile.fir@494.4]
  assign _T_432 = _T_386 ? 1'h1 : _T_431; // @[control.py:95:Tile.fir@495.4]
  assign _T_433 = _T_384 ? 1'h1 : _T_432; // @[control.py:95:Tile.fir@496.4]
  assign _T_434 = _T_382 ? 1'h1 : _T_433; // @[control.py:95:Tile.fir@497.4]
  assign _T_435 = _T_380 ? 1'h1 : _T_434; // @[control.py:95:Tile.fir@498.4]
  assign _T_436 = _T_378 ? 1'h1 : _T_435; // @[control.py:95:Tile.fir@499.4]
  assign _T_437 = _T_376 ? 1'h1 : _T_436; // @[control.py:95:Tile.fir@500.4]
  assign _T_438 = _T_374 ? 1'h1 : _T_437; // @[control.py:95:Tile.fir@501.4]
  assign _T_439 = _T_372 ? 1'h1 : _T_438; // @[control.py:95:Tile.fir@502.4]
  assign _T_440 = _T_370 ? 1'h1 : _T_439; // @[control.py:95:Tile.fir@503.4]
  assign _T_441 = _T_368 ? 1'h1 : _T_440; // @[control.py:95:Tile.fir@504.4]
  assign _T_442 = _T_366 ? 1'h1 : _T_441; // @[control.py:95:Tile.fir@505.4]
  assign _T_443 = _T_364 ? 1'h1 : _T_442; // @[control.py:95:Tile.fir@506.4]
  assign _T_444 = _T_362 ? 1'h1 : _T_443; // @[control.py:95:Tile.fir@507.4]
  assign _T_445 = _T_360 ? 1'h1 : _T_444; // @[control.py:95:Tile.fir@508.4]
  assign _T_446 = _T_358 ? 1'h1 : _T_445; // @[control.py:95:Tile.fir@509.4]
  assign _T_447 = _T_356 ? 1'h1 : _T_446; // @[control.py:95:Tile.fir@510.4]
  assign _T_448 = _T_354 ? 1'h1 : _T_447; // @[control.py:95:Tile.fir@511.4]
  assign _T_449 = _T_352 ? 1'h1 : _T_448; // @[control.py:95:Tile.fir@512.4]
  assign _T_450 = _T_350 ? 1'h1 : _T_449; // @[control.py:95:Tile.fir@513.4]
  assign _T_451 = _T_348 ? 1'h1 : _T_450; // @[control.py:95:Tile.fir@514.4]
  assign _T_452 = _T_346 ? 1'h1 : _T_451; // @[control.py:95:Tile.fir@515.4]
  assign _T_453 = _T_344 ? 1'h1 : _T_452; // @[control.py:95:Tile.fir@516.4]
  assign _T_456 = _T_414 ? 3'h5 : 3'h0; // @[control.py:95:Tile.fir@519.4]
  assign _T_457 = _T_412 ? 3'h5 : _T_456; // @[control.py:95:Tile.fir@520.4]
  assign _T_458 = _T_410 ? 3'h2 : _T_457; // @[control.py:95:Tile.fir@521.4]
  assign _T_459 = _T_408 ? 3'h6 : _T_458; // @[control.py:95:Tile.fir@522.4]
  assign _T_460 = _T_406 ? 3'h4 : _T_459; // @[control.py:95:Tile.fir@523.4]
  assign _T_461 = _T_404 ? 3'h4 : _T_460; // @[control.py:95:Tile.fir@524.4]
  assign _T_462 = _T_402 ? 3'h4 : _T_461; // @[control.py:95:Tile.fir@525.4]
  assign _T_463 = _T_400 ? 3'h4 : _T_462; // @[control.py:95:Tile.fir@526.4]
  assign _T_464 = _T_398 ? 3'h4 : _T_463; // @[control.py:95:Tile.fir@527.4]
  assign _T_465 = _T_396 ? 3'h4 : _T_464; // @[control.py:95:Tile.fir@528.4]
  assign _T_466 = _T_394 ? 3'h3 : _T_465; // @[control.py:95:Tile.fir@529.4]
  assign _T_467 = _T_392 ? 3'h3 : _T_466; // @[control.py:95:Tile.fir@530.4]
  assign _T_468 = _T_390 ? 3'h3 : _T_467; // @[control.py:95:Tile.fir@531.4]
  assign _T_469 = _T_388 ? 3'h2 : _T_468; // @[control.py:95:Tile.fir@532.4]
  assign _T_470 = _T_386 ? 3'h2 : _T_469; // @[control.py:95:Tile.fir@533.4]
  assign _T_471 = _T_384 ? 3'h2 : _T_470; // @[control.py:95:Tile.fir@534.4]
  assign _T_472 = _T_382 ? 3'h2 : _T_471; // @[control.py:95:Tile.fir@535.4]
  assign _T_473 = _T_380 ? 3'h2 : _T_472; // @[control.py:95:Tile.fir@536.4]
  assign _T_474 = _T_378 ? 3'h2 : _T_473; // @[control.py:95:Tile.fir@537.4]
  assign _T_475 = _T_376 ? 3'h2 : _T_474; // @[control.py:95:Tile.fir@538.4]
  assign _T_476 = _T_374 ? 3'h1 : _T_475; // @[control.py:95:Tile.fir@539.4]
  assign _T_477 = _T_372 ? 3'h1 : _T_476; // @[control.py:95:Tile.fir@540.4]
  assign _T_478 = _T_370 ? 3'h2 : _T_477; // @[control.py:95:Tile.fir@541.4]
  assign _T_479 = _T_368 ? 3'h2 : _T_478; // @[control.py:95:Tile.fir@542.4]
  assign _T_480 = _T_366 ? 3'h2 : _T_479; // @[control.py:95:Tile.fir@543.4]
  assign _T_481 = _T_364 ? 3'h1 : _T_480; // @[control.py:95:Tile.fir@544.4]
  assign _T_482 = _T_362 ? 3'h1 : _T_481; // @[control.py:95:Tile.fir@545.4]
  assign _T_483 = _T_360 ? 3'h1 : _T_482; // @[control.py:95:Tile.fir@546.4]
  assign _T_484 = _T_358 ? 3'h2 : _T_483; // @[control.py:95:Tile.fir@547.4]
  assign _T_485 = _T_356 ? 3'h2 : _T_484; // @[control.py:95:Tile.fir@548.4]
  assign _T_486 = _T_354 ? 3'h2 : _T_485; // @[control.py:95:Tile.fir@549.4]
  assign _T_487 = _T_352 ? 3'h2 : _T_486; // @[control.py:95:Tile.fir@550.4]
  assign _T_488 = _T_350 ? 3'h1 : _T_487; // @[control.py:95:Tile.fir@551.4]
  assign _T_489 = _T_348 ? 3'h1 : _T_488; // @[control.py:95:Tile.fir@552.4]
  assign _T_490 = _T_346 ? 3'h1 : _T_489; // @[control.py:95:Tile.fir@553.4]
  assign _T_491 = _T_344 ? 3'h1 : _T_490; // @[control.py:95:Tile.fir@554.4]
  assign _T_505 = _T_392 ? 1'h1 : _T_394; // @[control.py:95:Tile.fir@568.4]
  assign _T_506 = _T_390 ? 1'h1 : _T_505; // @[control.py:95:Tile.fir@569.4]
  assign _T_507 = _T_388 ? 1'h1 : _T_506; // @[control.py:95:Tile.fir@570.4]
  assign _T_508 = _T_386 ? 1'h1 : _T_507; // @[control.py:95:Tile.fir@571.4]
  assign _T_509 = _T_384 ? 1'h1 : _T_508; // @[control.py:95:Tile.fir@572.4]
  assign _T_510 = _T_382 ? 1'h1 : _T_509; // @[control.py:95:Tile.fir@573.4]
  assign _T_511 = _T_380 ? 1'h1 : _T_510; // @[control.py:95:Tile.fir@574.4]
  assign _T_512 = _T_378 ? 1'h1 : _T_511; // @[control.py:95:Tile.fir@575.4]
  assign _T_513 = _T_376 ? 1'h1 : _T_512; // @[control.py:95:Tile.fir@576.4]
  assign _T_514 = _T_374 ? 1'h0 : _T_513; // @[control.py:95:Tile.fir@577.4]
  assign _T_515 = _T_372 ? 1'h0 : _T_514; // @[control.py:95:Tile.fir@578.4]
  assign _T_516 = _T_370 ? 1'h1 : _T_515; // @[control.py:95:Tile.fir@579.4]
  assign _T_517 = _T_368 ? 1'h1 : _T_516; // @[control.py:95:Tile.fir@580.4]
  assign _T_518 = _T_366 ? 1'h1 : _T_517; // @[control.py:95:Tile.fir@581.4]
  assign _T_519 = _T_364 ? 1'h0 : _T_518; // @[control.py:95:Tile.fir@582.4]
  assign _T_520 = _T_362 ? 1'h0 : _T_519; // @[control.py:95:Tile.fir@583.4]
  assign _T_521 = _T_360 ? 1'h0 : _T_520; // @[control.py:95:Tile.fir@584.4]
  assign _T_522 = _T_358 ? 1'h1 : _T_521; // @[control.py:95:Tile.fir@585.4]
  assign _T_523 = _T_356 ? 1'h1 : _T_522; // @[control.py:95:Tile.fir@586.4]
  assign _T_524 = _T_354 ? 1'h1 : _T_523; // @[control.py:95:Tile.fir@587.4]
  assign _T_525 = _T_352 ? 1'h1 : _T_524; // @[control.py:95:Tile.fir@588.4]
  assign _T_526 = _T_350 ? 1'h0 : _T_525; // @[control.py:95:Tile.fir@589.4]
  assign _T_527 = _T_348 ? 1'h0 : _T_526; // @[control.py:95:Tile.fir@590.4]
  assign _T_528 = _T_346 ? 1'h0 : _T_527; // @[control.py:95:Tile.fir@591.4]
  assign _T_529 = _T_344 ? 1'h0 : _T_528; // @[control.py:95:Tile.fir@592.4]
  assign _T_532 = _T_414 ? 5'h0 : 5'h10; // @[control.py:95:Tile.fir@595.4]
  assign _T_533 = _T_412 ? 5'h0 : _T_532; // @[control.py:95:Tile.fir@596.4]
  assign _T_534 = _T_410 ? 5'h0 : _T_533; // @[control.py:95:Tile.fir@597.4]
  assign _T_535 = _T_408 ? 5'h0 : _T_534; // @[control.py:95:Tile.fir@598.4]
  assign _T_536 = _T_406 ? 5'hf : _T_535; // @[control.py:95:Tile.fir@599.4]
  assign _T_537 = _T_404 ? 5'he : _T_536; // @[control.py:95:Tile.fir@600.4]
  assign _T_538 = _T_402 ? 5'hd : _T_537; // @[control.py:95:Tile.fir@601.4]
  assign _T_539 = _T_400 ? 5'hc : _T_538; // @[control.py:95:Tile.fir@602.4]
  assign _T_540 = _T_398 ? 5'hb : _T_539; // @[control.py:95:Tile.fir@603.4]
  assign _T_541 = _T_396 ? 5'ha : _T_540; // @[control.py:95:Tile.fir@604.4]
  assign _T_542 = _T_394 ? 5'h0 : _T_541; // @[control.py:95:Tile.fir@605.4]
  assign _T_543 = _T_392 ? 5'h0 : _T_542; // @[control.py:95:Tile.fir@606.4]
  assign _T_544 = _T_390 ? 5'h0 : _T_543; // @[control.py:95:Tile.fir@607.4]
  assign _T_545 = _T_388 ? 5'h0 : _T_544; // @[control.py:95:Tile.fir@608.4]
  assign _T_546 = _T_386 ? 5'h0 : _T_545; // @[control.py:95:Tile.fir@609.4]
  assign _T_547 = _T_384 ? 5'h0 : _T_546; // @[control.py:95:Tile.fir@610.4]
  assign _T_548 = _T_382 ? 5'h0 : _T_547; // @[control.py:95:Tile.fir@611.4]
  assign _T_549 = _T_380 ? 5'h0 : _T_548; // @[control.py:95:Tile.fir@612.4]
  assign _T_550 = _T_378 ? 5'h9 : _T_549; // @[control.py:95:Tile.fir@613.4]
  assign _T_551 = _T_376 ? 5'h8 : _T_550; // @[control.py:95:Tile.fir@614.4]
  assign _T_552 = _T_374 ? 5'h9 : _T_551; // @[control.py:95:Tile.fir@615.4]
  assign _T_553 = _T_372 ? 5'h8 : _T_552; // @[control.py:95:Tile.fir@616.4]
  assign _T_554 = _T_370 ? 5'h7 : _T_553; // @[control.py:95:Tile.fir@617.4]
  assign _T_555 = _T_368 ? 5'h6 : _T_554; // @[control.py:95:Tile.fir@618.4]
  assign _T_556 = _T_366 ? 5'h5 : _T_555; // @[control.py:95:Tile.fir@619.4]
  assign _T_557 = _T_364 ? 5'h7 : _T_556; // @[control.py:95:Tile.fir@620.4]
  assign _T_558 = _T_362 ? 5'h6 : _T_557; // @[control.py:95:Tile.fir@621.4]
  assign _T_559 = _T_360 ? 5'h5 : _T_558; // @[control.py:95:Tile.fir@622.4]
  assign _T_560 = _T_358 ? 5'h4 : _T_559; // @[control.py:95:Tile.fir@623.4]
  assign _T_561 = _T_356 ? 5'h3 : _T_560; // @[control.py:95:Tile.fir@624.4]
  assign _T_562 = _T_354 ? 5'h2 : _T_561; // @[control.py:95:Tile.fir@625.4]
  assign _T_563 = _T_352 ? 5'h0 : _T_562; // @[control.py:95:Tile.fir@626.4]
  assign _T_564 = _T_350 ? 5'h4 : _T_563; // @[control.py:95:Tile.fir@627.4]
  assign _T_565 = _T_348 ? 5'h3 : _T_564; // @[control.py:95:Tile.fir@628.4]
  assign _T_566 = _T_346 ? 5'h2 : _T_565; // @[control.py:95:Tile.fir@629.4]
  assign _T_567 = _T_344 ? 5'h1 : _T_566; // @[control.py:95:Tile.fir@630.4]
  assign _T_573 = _T_408 ? 1'h1 : _T_410; // @[control.py:95:Tile.fir@636.4]
  assign _T_574 = _T_406 ? 1'h1 : _T_573; // @[control.py:95:Tile.fir@637.4]
  assign _T_575 = _T_404 ? 1'h1 : _T_574; // @[control.py:95:Tile.fir@638.4]
  assign _T_576 = _T_402 ? 1'h1 : _T_575; // @[control.py:95:Tile.fir@639.4]
  assign _T_577 = _T_400 ? 1'h1 : _T_576; // @[control.py:95:Tile.fir@640.4]
  assign _T_578 = _T_398 ? 1'h1 : _T_577; // @[control.py:95:Tile.fir@641.4]
  assign _T_579 = _T_396 ? 1'h1 : _T_578; // @[control.py:95:Tile.fir@642.4]
  assign _T_580 = _T_394 ? 1'h0 : _T_579; // @[control.py:95:Tile.fir@643.4]
  assign _T_581 = _T_392 ? 1'h0 : _T_580; // @[control.py:95:Tile.fir@644.4]
  assign _T_582 = _T_390 ? 1'h0 : _T_581; // @[control.py:95:Tile.fir@645.4]
  assign _T_583 = _T_388 ? 1'h0 : _T_582; // @[control.py:95:Tile.fir@646.4]
  assign _T_584 = _T_386 ? 1'h0 : _T_583; // @[control.py:95:Tile.fir@647.4]
  assign _T_585 = _T_384 ? 1'h0 : _T_584; // @[control.py:95:Tile.fir@648.4]
  assign _T_586 = _T_382 ? 1'h0 : _T_585; // @[control.py:95:Tile.fir@649.4]
  assign _T_587 = _T_380 ? 1'h0 : _T_586; // @[control.py:95:Tile.fir@650.4]
  assign _T_588 = _T_378 ? 1'h0 : _T_587; // @[control.py:95:Tile.fir@651.4]
  assign _T_589 = _T_376 ? 1'h0 : _T_588; // @[control.py:95:Tile.fir@652.4]
  assign _T_590 = _T_374 ? 1'h0 : _T_589; // @[control.py:95:Tile.fir@653.4]
  assign _T_591 = _T_372 ? 1'h0 : _T_590; // @[control.py:95:Tile.fir@654.4]
  assign _T_592 = _T_370 ? 1'h0 : _T_591; // @[control.py:95:Tile.fir@655.4]
  assign _T_593 = _T_368 ? 1'h0 : _T_592; // @[control.py:95:Tile.fir@656.4]
  assign _T_594 = _T_366 ? 1'h0 : _T_593; // @[control.py:95:Tile.fir@657.4]
  assign _T_595 = _T_364 ? 1'h0 : _T_594; // @[control.py:95:Tile.fir@658.4]
  assign _T_596 = _T_362 ? 1'h0 : _T_595; // @[control.py:95:Tile.fir@659.4]
  assign _T_597 = _T_360 ? 1'h0 : _T_596; // @[control.py:95:Tile.fir@660.4]
  assign _T_598 = _T_358 ? 1'h0 : _T_597; // @[control.py:95:Tile.fir@661.4]
  assign _T_599 = _T_356 ? 1'h0 : _T_598; // @[control.py:95:Tile.fir@662.4]
  assign _T_600 = _T_354 ? 1'h0 : _T_599; // @[control.py:95:Tile.fir@663.4]
  assign _T_601 = _T_352 ? 1'h0 : _T_600; // @[control.py:95:Tile.fir@664.4]
  assign _T_602 = _T_350 ? 1'h0 : _T_601; // @[control.py:95:Tile.fir@665.4]
  assign _T_603 = _T_348 ? 1'h0 : _T_602; // @[control.py:95:Tile.fir@666.4]
  assign _T_604 = _T_346 ? 1'h0 : _T_603; // @[control.py:95:Tile.fir@667.4]
  assign _T_605 = _T_344 ? 1'h0 : _T_604; // @[control.py:95:Tile.fir@668.4]
  assign _T_611 = _T_408 ? 1'h0 : _T_410; // @[control.py:95:Tile.fir@674.4]
  assign _T_612 = _T_406 ? 1'h0 : _T_611; // @[control.py:95:Tile.fir@675.4]
  assign _T_613 = _T_404 ? 1'h0 : _T_612; // @[control.py:95:Tile.fir@676.4]
  assign _T_614 = _T_402 ? 1'h0 : _T_613; // @[control.py:95:Tile.fir@677.4]
  assign _T_615 = _T_400 ? 1'h0 : _T_614; // @[control.py:95:Tile.fir@678.4]
  assign _T_616 = _T_398 ? 1'h0 : _T_615; // @[control.py:95:Tile.fir@679.4]
  assign _T_617 = _T_396 ? 1'h0 : _T_616; // @[control.py:95:Tile.fir@680.4]
  assign _T_618 = _T_394 ? 1'h0 : _T_617; // @[control.py:95:Tile.fir@681.4]
  assign _T_619 = _T_392 ? 1'h0 : _T_618; // @[control.py:95:Tile.fir@682.4]
  assign _T_620 = _T_390 ? 1'h0 : _T_619; // @[control.py:95:Tile.fir@683.4]
  assign _T_621 = _T_388 ? 1'h0 : _T_620; // @[control.py:95:Tile.fir@684.4]
  assign _T_622 = _T_386 ? 1'h0 : _T_621; // @[control.py:95:Tile.fir@685.4]
  assign _T_623 = _T_384 ? 1'h0 : _T_622; // @[control.py:95:Tile.fir@686.4]
  assign _T_624 = _T_382 ? 1'h0 : _T_623; // @[control.py:95:Tile.fir@687.4]
  assign _T_625 = _T_380 ? 1'h0 : _T_624; // @[control.py:95:Tile.fir@688.4]
  assign _T_626 = _T_378 ? 1'h0 : _T_625; // @[control.py:95:Tile.fir@689.4]
  assign _T_627 = _T_376 ? 1'h0 : _T_626; // @[control.py:95:Tile.fir@690.4]
  assign _T_628 = _T_374 ? 1'h0 : _T_627; // @[control.py:95:Tile.fir@691.4]
  assign _T_629 = _T_372 ? 1'h0 : _T_628; // @[control.py:95:Tile.fir@692.4]
  assign _T_630 = _T_370 ? 1'h0 : _T_629; // @[control.py:95:Tile.fir@693.4]
  assign _T_631 = _T_368 ? 1'h0 : _T_630; // @[control.py:95:Tile.fir@694.4]
  assign _T_632 = _T_366 ? 1'h0 : _T_631; // @[control.py:95:Tile.fir@695.4]
  assign _T_633 = _T_364 ? 1'h0 : _T_632; // @[control.py:95:Tile.fir@696.4]
  assign _T_634 = _T_362 ? 1'h0 : _T_633; // @[control.py:95:Tile.fir@697.4]
  assign _T_635 = _T_360 ? 1'h0 : _T_634; // @[control.py:95:Tile.fir@698.4]
  assign _T_636 = _T_358 ? 1'h0 : _T_635; // @[control.py:95:Tile.fir@699.4]
  assign _T_637 = _T_356 ? 1'h0 : _T_636; // @[control.py:95:Tile.fir@700.4]
  assign _T_638 = _T_354 ? 1'h0 : _T_637; // @[control.py:95:Tile.fir@701.4]
  assign _T_639 = _T_352 ? 1'h0 : _T_638; // @[control.py:95:Tile.fir@702.4]
  assign _T_640 = _T_350 ? 1'h0 : _T_639; // @[control.py:95:Tile.fir@703.4]
  assign _T_641 = _T_348 ? 1'h0 : _T_640; // @[control.py:95:Tile.fir@704.4]
  assign _T_642 = _T_346 ? 1'h0 : _T_641; // @[control.py:95:Tile.fir@705.4]
  assign _T_643 = _T_344 ? 1'h0 : _T_642; // @[control.py:95:Tile.fir@706.4]
  assign _T_660 = _T_386 ? 1'h1 : _T_388; // @[control.py:95:Tile.fir@723.4]
  assign _T_661 = _T_384 ? 1'h1 : _T_660; // @[control.py:95:Tile.fir@724.4]
  assign _T_662 = _T_382 ? 1'h1 : _T_661; // @[control.py:95:Tile.fir@725.4]
  assign _T_663 = _T_380 ? 1'h1 : _T_662; // @[control.py:95:Tile.fir@726.4]
  assign _T_664 = _T_378 ? 1'h0 : _T_663; // @[control.py:95:Tile.fir@727.4]
  assign _T_665 = _T_376 ? 1'h0 : _T_664; // @[control.py:95:Tile.fir@728.4]
  assign _T_666 = _T_374 ? 1'h0 : _T_665; // @[control.py:95:Tile.fir@729.4]
  assign _T_667 = _T_372 ? 1'h0 : _T_666; // @[control.py:95:Tile.fir@730.4]
  assign _T_668 = _T_370 ? 1'h0 : _T_667; // @[control.py:95:Tile.fir@731.4]
  assign _T_669 = _T_368 ? 1'h0 : _T_668; // @[control.py:95:Tile.fir@732.4]
  assign _T_670 = _T_366 ? 1'h0 : _T_669; // @[control.py:95:Tile.fir@733.4]
  assign _T_671 = _T_364 ? 1'h0 : _T_670; // @[control.py:95:Tile.fir@734.4]
  assign _T_672 = _T_362 ? 1'h0 : _T_671; // @[control.py:95:Tile.fir@735.4]
  assign _T_673 = _T_360 ? 1'h0 : _T_672; // @[control.py:95:Tile.fir@736.4]
  assign _T_674 = _T_358 ? 1'h0 : _T_673; // @[control.py:95:Tile.fir@737.4]
  assign _T_675 = _T_356 ? 1'h0 : _T_674; // @[control.py:95:Tile.fir@738.4]
  assign _T_676 = _T_354 ? 1'h0 : _T_675; // @[control.py:95:Tile.fir@739.4]
  assign _T_677 = _T_352 ? 1'h0 : _T_676; // @[control.py:95:Tile.fir@740.4]
  assign _T_678 = _T_350 ? 1'h0 : _T_677; // @[control.py:95:Tile.fir@741.4]
  assign _T_679 = _T_348 ? 1'h0 : _T_678; // @[control.py:95:Tile.fir@742.4]
  assign _T_680 = _T_346 ? 1'h0 : _T_679; // @[control.py:95:Tile.fir@743.4]
  assign _T_681 = _T_344 ? 1'h0 : _T_680; // @[control.py:95:Tile.fir@744.4]
  assign _T_697 = _T_388 ? 1'h0 : _T_506; // @[control.py:95:Tile.fir@760.4]
  assign _T_698 = _T_386 ? 1'h0 : _T_697; // @[control.py:95:Tile.fir@761.4]
  assign _T_699 = _T_384 ? 1'h0 : _T_698; // @[control.py:95:Tile.fir@762.4]
  assign _T_700 = _T_382 ? 1'h0 : _T_699; // @[control.py:95:Tile.fir@763.4]
  assign _T_701 = _T_380 ? 1'h0 : _T_700; // @[control.py:95:Tile.fir@764.4]
  assign _T_702 = _T_378 ? 1'h0 : _T_701; // @[control.py:95:Tile.fir@765.4]
  assign _T_703 = _T_376 ? 1'h0 : _T_702; // @[control.py:95:Tile.fir@766.4]
  assign _T_704 = _T_374 ? 1'h0 : _T_703; // @[control.py:95:Tile.fir@767.4]
  assign _T_705 = _T_372 ? 1'h0 : _T_704; // @[control.py:95:Tile.fir@768.4]
  assign _T_706 = _T_370 ? 1'h0 : _T_705; // @[control.py:95:Tile.fir@769.4]
  assign _T_707 = _T_368 ? 1'h0 : _T_706; // @[control.py:95:Tile.fir@770.4]
  assign _T_708 = _T_366 ? 1'h0 : _T_707; // @[control.py:95:Tile.fir@771.4]
  assign _T_709 = _T_364 ? 1'h0 : _T_708; // @[control.py:95:Tile.fir@772.4]
  assign _T_710 = _T_362 ? 1'h0 : _T_709; // @[control.py:95:Tile.fir@773.4]
  assign _T_711 = _T_360 ? 1'h0 : _T_710; // @[control.py:95:Tile.fir@774.4]
  assign _T_712 = _T_358 ? 1'h0 : _T_711; // @[control.py:95:Tile.fir@775.4]
  assign _T_713 = _T_356 ? 1'h0 : _T_712; // @[control.py:95:Tile.fir@776.4]
  assign _T_714 = _T_354 ? 1'h0 : _T_713; // @[control.py:95:Tile.fir@777.4]
  assign _T_715 = _T_352 ? 1'h0 : _T_714; // @[control.py:95:Tile.fir@778.4]
  assign _T_716 = _T_350 ? 1'h0 : _T_715; // @[control.py:95:Tile.fir@779.4]
  assign _T_717 = _T_348 ? 1'h0 : _T_716; // @[control.py:95:Tile.fir@780.4]
  assign _T_718 = _T_346 ? 1'h0 : _T_717; // @[control.py:95:Tile.fir@781.4]
  assign _T_719 = _T_344 ? 1'h0 : _T_718; // @[control.py:95:Tile.fir@782.4]
  assign _T_732 = _T_394 ? 2'h2 : 2'h0; // @[control.py:95:Tile.fir@795.4]
  assign _T_733 = _T_392 ? 2'h1 : _T_732; // @[control.py:95:Tile.fir@796.4]
  assign _T_734 = _T_390 ? 2'h0 : _T_733; // @[control.py:95:Tile.fir@797.4]
  assign _T_735 = _T_388 ? 2'h2 : _T_734; // @[control.py:95:Tile.fir@798.4]
  assign _T_736 = _T_386 ? 2'h1 : _T_735; // @[control.py:95:Tile.fir@799.4]
  assign _T_737 = _T_384 ? 2'h2 : _T_736; // @[control.py:95:Tile.fir@800.4]
  assign _T_738 = _T_382 ? 2'h1 : _T_737; // @[control.py:95:Tile.fir@801.4]
  assign _T_739 = _T_380 ? 2'h0 : _T_738; // @[control.py:95:Tile.fir@802.4]
  assign _T_740 = _T_378 ? 2'h0 : _T_739; // @[control.py:95:Tile.fir@803.4]
  assign _T_741 = _T_376 ? 2'h0 : _T_740; // @[control.py:95:Tile.fir@804.4]
  assign _T_742 = _T_374 ? 2'h0 : _T_741; // @[control.py:95:Tile.fir@805.4]
  assign _T_743 = _T_372 ? 2'h0 : _T_742; // @[control.py:95:Tile.fir@806.4]
  assign _T_744 = _T_370 ? 2'h0 : _T_743; // @[control.py:95:Tile.fir@807.4]
  assign _T_745 = _T_368 ? 2'h0 : _T_744; // @[control.py:95:Tile.fir@808.4]
  assign _T_746 = _T_366 ? 2'h0 : _T_745; // @[control.py:95:Tile.fir@809.4]
  assign _T_747 = _T_364 ? 2'h0 : _T_746; // @[control.py:95:Tile.fir@810.4]
  assign _T_748 = _T_362 ? 2'h0 : _T_747; // @[control.py:95:Tile.fir@811.4]
  assign _T_749 = _T_360 ? 2'h0 : _T_748; // @[control.py:95:Tile.fir@812.4]
  assign _T_750 = _T_358 ? 2'h0 : _T_749; // @[control.py:95:Tile.fir@813.4]
  assign _T_751 = _T_356 ? 2'h0 : _T_750; // @[control.py:95:Tile.fir@814.4]
  assign _T_752 = _T_354 ? 2'h0 : _T_751; // @[control.py:95:Tile.fir@815.4]
  assign _T_753 = _T_352 ? 2'h0 : _T_752; // @[control.py:95:Tile.fir@816.4]
  assign _T_754 = _T_350 ? 2'h0 : _T_753; // @[control.py:95:Tile.fir@817.4]
  assign _T_755 = _T_348 ? 2'h0 : _T_754; // @[control.py:95:Tile.fir@818.4]
  assign _T_756 = _T_346 ? 2'h0 : _T_755; // @[control.py:95:Tile.fir@819.4]
  assign _T_757 = _T_344 ? 2'h0 : _T_756; // @[control.py:95:Tile.fir@820.4]
  assign _T_775 = _T_384 ? 1'h0 : _T_660; // @[control.py:95:Tile.fir@838.4]
  assign _T_776 = _T_382 ? 1'h0 : _T_775; // @[control.py:95:Tile.fir@839.4]
  assign _T_777 = _T_380 ? 1'h0 : _T_776; // @[control.py:95:Tile.fir@840.4]
  assign _T_778 = _T_378 ? 1'h0 : _T_777; // @[control.py:95:Tile.fir@841.4]
  assign _T_779 = _T_376 ? 1'h0 : _T_778; // @[control.py:95:Tile.fir@842.4]
  assign _T_780 = _T_374 ? 1'h0 : _T_779; // @[control.py:95:Tile.fir@843.4]
  assign _T_781 = _T_372 ? 1'h0 : _T_780; // @[control.py:95:Tile.fir@844.4]
  assign _T_782 = _T_370 ? 1'h0 : _T_781; // @[control.py:95:Tile.fir@845.4]
  assign _T_783 = _T_368 ? 1'h0 : _T_782; // @[control.py:95:Tile.fir@846.4]
  assign _T_784 = _T_366 ? 1'h0 : _T_783; // @[control.py:95:Tile.fir@847.4]
  assign _T_785 = _T_364 ? 1'h0 : _T_784; // @[control.py:95:Tile.fir@848.4]
  assign _T_786 = _T_362 ? 1'h0 : _T_785; // @[control.py:95:Tile.fir@849.4]
  assign _T_787 = _T_360 ? 1'h0 : _T_786; // @[control.py:95:Tile.fir@850.4]
  assign _T_788 = _T_358 ? 1'h0 : _T_787; // @[control.py:95:Tile.fir@851.4]
  assign _T_789 = _T_356 ? 1'h0 : _T_788; // @[control.py:95:Tile.fir@852.4]
  assign _T_790 = _T_354 ? 1'h0 : _T_789; // @[control.py:95:Tile.fir@853.4]
  assign _T_791 = _T_352 ? 1'h0 : _T_790; // @[control.py:95:Tile.fir@854.4]
  assign _T_792 = _T_350 ? 1'h0 : _T_791; // @[control.py:95:Tile.fir@855.4]
  assign _T_793 = _T_348 ? 1'h0 : _T_792; // @[control.py:95:Tile.fir@856.4]
  assign _T_794 = _T_346 ? 1'h0 : _T_793; // @[control.py:95:Tile.fir@857.4]
  assign _T_795 = _T_344 ? 1'h0 : _T_794; // @[control.py:95:Tile.fir@858.4]
  assign _T_798 = _T_414 ? 3'h4 : 3'h0; // @[control.py:95:Tile.fir@861.4]
  assign _T_799 = _T_412 ? 3'h3 : _T_798; // @[control.py:95:Tile.fir@862.4]
  assign _T_800 = _T_410 ? 3'h2 : _T_799; // @[control.py:95:Tile.fir@863.4]
  assign _T_801 = _T_408 ? 3'h2 : _T_800; // @[control.py:95:Tile.fir@864.4]
  assign _T_802 = _T_406 ? 3'h0 : _T_801; // @[control.py:95:Tile.fir@865.4]
  assign _T_803 = _T_404 ? 3'h0 : _T_802; // @[control.py:95:Tile.fir@866.4]
  assign _T_804 = _T_402 ? 3'h0 : _T_803; // @[control.py:95:Tile.fir@867.4]
  assign _T_805 = _T_400 ? 3'h0 : _T_804; // @[control.py:95:Tile.fir@868.4]
  assign _T_806 = _T_398 ? 3'h0 : _T_805; // @[control.py:95:Tile.fir@869.4]
  assign _T_807 = _T_396 ? 3'h0 : _T_806; // @[control.py:95:Tile.fir@870.4]
  assign _T_808 = _T_394 ? 3'h0 : _T_807; // @[control.py:95:Tile.fir@871.4]
  assign _T_809 = _T_392 ? 3'h0 : _T_808; // @[control.py:95:Tile.fir@872.4]
  assign _T_810 = _T_390 ? 3'h0 : _T_809; // @[control.py:95:Tile.fir@873.4]
  assign _T_811 = _T_388 ? 3'h1 : _T_810; // @[control.py:95:Tile.fir@874.4]
  assign _T_812 = _T_386 ? 3'h1 : _T_811; // @[control.py:95:Tile.fir@875.4]
  assign _T_813 = _T_384 ? 3'h1 : _T_812; // @[control.py:95:Tile.fir@876.4]
  assign _T_814 = _T_382 ? 3'h1 : _T_813; // @[control.py:95:Tile.fir@877.4]
  assign _T_815 = _T_380 ? 3'h1 : _T_814; // @[control.py:95:Tile.fir@878.4]
  assign _T_816 = _T_378 ? 3'h0 : _T_815; // @[control.py:95:Tile.fir@879.4]
  assign _T_817 = _T_376 ? 3'h0 : _T_816; // @[control.py:95:Tile.fir@880.4]
  assign _T_818 = _T_374 ? 3'h0 : _T_817; // @[control.py:95:Tile.fir@881.4]
  assign _T_819 = _T_372 ? 3'h0 : _T_818; // @[control.py:95:Tile.fir@882.4]
  assign _T_820 = _T_370 ? 3'h0 : _T_819; // @[control.py:95:Tile.fir@883.4]
  assign _T_821 = _T_368 ? 3'h0 : _T_820; // @[control.py:95:Tile.fir@884.4]
  assign _T_822 = _T_366 ? 3'h0 : _T_821; // @[control.py:95:Tile.fir@885.4]
  assign _T_823 = _T_364 ? 3'h0 : _T_822; // @[control.py:95:Tile.fir@886.4]
  assign _T_824 = _T_362 ? 3'h0 : _T_823; // @[control.py:95:Tile.fir@887.4]
  assign _T_825 = _T_360 ? 3'h0 : _T_824; // @[control.py:95:Tile.fir@888.4]
  assign _T_826 = _T_358 ? 3'h0 : _T_825; // @[control.py:95:Tile.fir@889.4]
  assign _T_827 = _T_356 ? 3'h0 : _T_826; // @[control.py:95:Tile.fir@890.4]
  assign _T_828 = _T_354 ? 3'h0 : _T_827; // @[control.py:95:Tile.fir@891.4]
  assign _T_829 = _T_352 ? 3'h0 : _T_828; // @[control.py:95:Tile.fir@892.4]
  assign _T_830 = _T_350 ? 3'h0 : _T_829; // @[control.py:95:Tile.fir@893.4]
  assign _T_831 = _T_348 ? 3'h0 : _T_830; // @[control.py:95:Tile.fir@894.4]
  assign _T_832 = _T_346 ? 3'h0 : _T_831; // @[control.py:95:Tile.fir@895.4]
  assign _T_833 = _T_344 ? 3'h0 : _T_832; // @[control.py:95:Tile.fir@896.4]
  assign _T_840 = _T_406 ? 1'h0 : _T_573; // @[control.py:95:Tile.fir@903.4]
  assign _T_841 = _T_404 ? 1'h0 : _T_840; // @[control.py:95:Tile.fir@904.4]
  assign _T_842 = _T_402 ? 1'h0 : _T_841; // @[control.py:95:Tile.fir@905.4]
  assign _T_843 = _T_400 ? 1'h0 : _T_842; // @[control.py:95:Tile.fir@906.4]
  assign _T_844 = _T_398 ? 1'h0 : _T_843; // @[control.py:95:Tile.fir@907.4]
  assign _T_845 = _T_396 ? 1'h0 : _T_844; // @[control.py:95:Tile.fir@908.4]
  assign _T_846 = _T_394 ? 1'h0 : _T_845; // @[control.py:95:Tile.fir@909.4]
  assign _T_847 = _T_392 ? 1'h0 : _T_846; // @[control.py:95:Tile.fir@910.4]
  assign _T_848 = _T_390 ? 1'h0 : _T_847; // @[control.py:95:Tile.fir@911.4]
  assign _T_849 = _T_388 ? 1'h0 : _T_848; // @[control.py:95:Tile.fir@912.4]
  assign _T_850 = _T_386 ? 1'h0 : _T_849; // @[control.py:95:Tile.fir@913.4]
  assign _T_851 = _T_384 ? 1'h0 : _T_850; // @[control.py:95:Tile.fir@914.4]
  assign _T_852 = _T_382 ? 1'h0 : _T_851; // @[control.py:95:Tile.fir@915.4]
  assign _T_853 = _T_380 ? 1'h0 : _T_852; // @[control.py:95:Tile.fir@916.4]
  assign _T_854 = _T_378 ? 1'h0 : _T_853; // @[control.py:95:Tile.fir@917.4]
  assign _T_855 = _T_376 ? 1'h0 : _T_854; // @[control.py:95:Tile.fir@918.4]
  assign _T_856 = _T_374 ? 1'h0 : _T_855; // @[control.py:95:Tile.fir@919.4]
  assign _T_857 = _T_372 ? 1'h0 : _T_856; // @[control.py:95:Tile.fir@920.4]
  assign _T_858 = _T_370 ? 1'h0 : _T_857; // @[control.py:95:Tile.fir@921.4]
  assign _T_859 = _T_368 ? 1'h0 : _T_858; // @[control.py:95:Tile.fir@922.4]
  assign _T_860 = _T_366 ? 1'h0 : _T_859; // @[control.py:95:Tile.fir@923.4]
  assign _T_861 = _T_364 ? 1'h0 : _T_860; // @[control.py:95:Tile.fir@924.4]
  assign _T_862 = _T_362 ? 1'h0 : _T_861; // @[control.py:95:Tile.fir@925.4]
  assign _T_863 = _T_360 ? 1'h0 : _T_862; // @[control.py:95:Tile.fir@926.4]
  assign _T_864 = _T_358 ? 1'h0 : _T_863; // @[control.py:95:Tile.fir@927.4]
  assign _T_865 = _T_356 ? 1'h0 : _T_864; // @[control.py:95:Tile.fir@928.4]
  assign _T_866 = _T_354 ? 1'h0 : _T_865; // @[control.py:95:Tile.fir@929.4]
  assign _T_867 = _T_352 ? 1'h0 : _T_866; // @[control.py:95:Tile.fir@930.4]
  assign _T_868 = _T_350 ? 1'h0 : _T_867; // @[control.py:95:Tile.fir@931.4]
  assign _T_869 = _T_348 ? 1'h0 : _T_868; // @[control.py:95:Tile.fir@932.4]
  assign _T_870 = _T_346 ? 1'h0 : _T_869; // @[control.py:95:Tile.fir@933.4]
  assign _T_871 = _T_344 ? 1'h0 : _T_870; // @[control.py:95:Tile.fir@934.4]
  assign io_ctrl_Reg_Write = _T_342 ? 1'h1 : _T_453; // @[control.py:114:Tile.fir@946.4]
  assign io_ctrl_Imm_Sel = _T_342 ? 3'h1 : _T_491; // @[control.py:98:Tile.fir@936.4]
  assign io_ctrl_ALU_Src = _T_342 ? 1'h0 : _T_529; // @[control.py:101:Tile.fir@937.4]
  assign io_ctrl_ALUOp = _T_342 ? 5'h0 : _T_567; // @[control.py:102:Tile.fir@938.4]
  assign io_ctrl_Branch = _T_342 ? 1'h0 : _T_605; // @[control.py:103:Tile.fir@939.4]
  assign io_ctrl_Branch_Src = _T_342 ? 1'h0 : _T_643; // @[control.py:104:Tile.fir@940.4]
  assign io_ctrl_Mem_Read = _T_342 ? 1'h0 : _T_681; // @[control.py:108:Tile.fir@942.4]
  assign io_ctrl_Mem_Write = _T_342 ? 1'h0 : _T_719; // @[control.py:109:Tile.fir@943.4]
  assign io_ctrl_Data_Size = _T_342 ? 2'h0 : _T_757; // @[control.py:110:Tile.fir@944.4]
  assign io_ctrl_Load_Type = _T_342 ? 1'h0 : _T_795; // @[control.py:111:Tile.fir@945.4]
  assign io_ctrl_Mem_to_Reg = _T_342 ? 3'h0 : _T_833; // @[control.py:115:Tile.fir@947.4]
  assign io_ctrl_Jump_Type = _T_342 ? 1'h0 : _T_871; // @[control.py:105:Tile.fir@941.4]
endmodule
module ID_EX_Register( // @[id_ex_register.py:40:Tile.fir@950.2]
  input         clock, // @[rawmodule.py:100:Tile.fir@951.4]
  input         reset, // @[rawmodule.py:101:Tile.fir@952.4]
  input  [31:0] io_id_pc, // @[id_ex_register.py:12:Tile.fir@953.4]
  input  [31:0] io_id_pc_4, // @[id_ex_register.py:12:Tile.fir@953.4]
  input  [31:0] io_id_rs1_out, // @[id_ex_register.py:12:Tile.fir@953.4]
  input  [31:0] io_id_rs2_out, // @[id_ex_register.py:12:Tile.fir@953.4]
  input  [31:0] io_id_imm, // @[id_ex_register.py:12:Tile.fir@953.4]
  input  [31:0] io_id_inst, // @[id_ex_register.py:12:Tile.fir@953.4]
  input  [4:0]  io_id_rs1, // @[id_ex_register.py:12:Tile.fir@953.4]
  input  [4:0]  io_id_rs2, // @[id_ex_register.py:12:Tile.fir@953.4]
  output [31:0] io_ex_pc, // @[id_ex_register.py:12:Tile.fir@953.4]
  output [31:0] io_ex_pc_4, // @[id_ex_register.py:12:Tile.fir@953.4]
  output [31:0] io_ex_rs1_out, // @[id_ex_register.py:12:Tile.fir@953.4]
  output [31:0] io_ex_rs2_out, // @[id_ex_register.py:12:Tile.fir@953.4]
  output [4:0]  io_ex_rd, // @[id_ex_register.py:12:Tile.fir@953.4]
  output [31:0] io_ex_imm, // @[id_ex_register.py:12:Tile.fir@953.4]
  output [4:0]  io_ex_rs1, // @[id_ex_register.py:12:Tile.fir@953.4]
  output [4:0]  io_ex_rs2, // @[id_ex_register.py:12:Tile.fir@953.4]
  input         io_ID_EX_Flush, // @[id_ex_register.py:12:Tile.fir@953.4]
  input         io_id_ctrl_in_Reg_Write, // @[id_ex_register.py:12:Tile.fir@953.4]
  input  [2:0]  io_id_ctrl_in_Imm_Sel, // @[id_ex_register.py:12:Tile.fir@953.4]
  input         io_id_ctrl_in_ALU_Src, // @[id_ex_register.py:12:Tile.fir@953.4]
  input  [4:0]  io_id_ctrl_in_ALUOp, // @[id_ex_register.py:12:Tile.fir@953.4]
  input         io_id_ctrl_in_Branch, // @[id_ex_register.py:12:Tile.fir@953.4]
  input         io_id_ctrl_in_Branch_Src, // @[id_ex_register.py:12:Tile.fir@953.4]
  input         io_id_ctrl_in_Mem_Read, // @[id_ex_register.py:12:Tile.fir@953.4]
  input         io_id_ctrl_in_Mem_Write, // @[id_ex_register.py:12:Tile.fir@953.4]
  input  [1:0]  io_id_ctrl_in_Data_Size, // @[id_ex_register.py:12:Tile.fir@953.4]
  input         io_id_ctrl_in_Load_Type, // @[id_ex_register.py:12:Tile.fir@953.4]
  input  [2:0]  io_id_ctrl_in_Mem_to_Reg, // @[id_ex_register.py:12:Tile.fir@953.4]
  input         io_id_ctrl_in_Jump_Type, // @[id_ex_register.py:12:Tile.fir@953.4]
  output        io_ex_ctrl_out_Reg_Write, // @[id_ex_register.py:12:Tile.fir@953.4]
  output [2:0]  io_ex_ctrl_out_Imm_Sel, // @[id_ex_register.py:12:Tile.fir@953.4]
  output        io_ex_ctrl_out_ALU_Src, // @[id_ex_register.py:12:Tile.fir@953.4]
  output [4:0]  io_ex_ctrl_out_ALUOp, // @[id_ex_register.py:12:Tile.fir@953.4]
  output        io_ex_ctrl_out_Branch, // @[id_ex_register.py:12:Tile.fir@953.4]
  output        io_ex_ctrl_out_Branch_Src, // @[id_ex_register.py:12:Tile.fir@953.4]
  output        io_ex_ctrl_out_Mem_Read, // @[id_ex_register.py:12:Tile.fir@953.4]
  output        io_ex_ctrl_out_Mem_Write, // @[id_ex_register.py:12:Tile.fir@953.4]
  output [1:0]  io_ex_ctrl_out_Data_Size, // @[id_ex_register.py:12:Tile.fir@953.4]
  output        io_ex_ctrl_out_Load_Type, // @[id_ex_register.py:12:Tile.fir@953.4]
  output [2:0]  io_ex_ctrl_out_Mem_to_Reg, // @[id_ex_register.py:12:Tile.fir@953.4]
  output        io_ex_ctrl_out_Jump_Type // @[id_ex_register.py:12:Tile.fir@953.4]
);
  reg [31:0] pc; // @[id_ex_register.py:44:Tile.fir@955.4]
  reg [31:0] _RAND_0;
  reg [31:0] pc_4; // @[id_ex_register.py:45:Tile.fir@956.4]
  reg [31:0] _RAND_1;
  reg [31:0] rs1_out; // @[id_ex_register.py:46:Tile.fir@957.4]
  reg [31:0] _RAND_2;
  reg [31:0] rs2_out; // @[id_ex_register.py:47:Tile.fir@958.4]
  reg [31:0] _RAND_3;
  reg [31:0] imm; // @[id_ex_register.py:48:Tile.fir@959.4]
  reg [31:0] _RAND_4;
  reg [31:0] inst; // @[id_ex_register.py:49:Tile.fir@960.4]
  reg [31:0] _RAND_5;
  reg [4:0] rs1; // @[id_ex_register.py:50:Tile.fir@961.4]
  reg [31:0] _RAND_6;
  reg [4:0] rs2; // @[id_ex_register.py:51:Tile.fir@962.4]
  reg [31:0] _RAND_7;
  reg  alu_src; // @[id_ex_register.py:52:Tile.fir@963.4]
  reg [31:0] _RAND_8;
  reg [4:0] aluop; // @[id_ex_register.py:53:Tile.fir@964.4]
  reg [31:0] _RAND_9;
  reg  branch; // @[id_ex_register.py:54:Tile.fir@965.4]
  reg [31:0] _RAND_10;
  reg  branch_src; // @[id_ex_register.py:55:Tile.fir@966.4]
  reg [31:0] _RAND_11;
  reg  jump_type; // @[id_ex_register.py:56:Tile.fir@967.4]
  reg [31:0] _RAND_12;
  reg  mem_read; // @[id_ex_register.py:57:Tile.fir@968.4]
  reg [31:0] _RAND_13;
  reg  mem_write; // @[id_ex_register.py:58:Tile.fir@969.4]
  reg [31:0] _RAND_14;
  reg [1:0] data_size; // @[id_ex_register.py:59:Tile.fir@970.4]
  reg [31:0] _RAND_15;
  reg  load_type; // @[id_ex_register.py:60:Tile.fir@971.4]
  reg [31:0] _RAND_16;
  reg  reg_write; // @[id_ex_register.py:61:Tile.fir@972.4]
  reg [31:0] _RAND_17;
  reg [2:0] mem_to_reg; // @[id_ex_register.py:62:Tile.fir@973.4]
  reg [31:0] _RAND_18;
  reg [2:0] imm_sel; // @[id_ex_register.py:63:Tile.fir@974.4]
  reg [31:0] _RAND_19;
  assign io_ex_pc = pc; // @[id_ex_register.py:87:Tile.fir@1035.4]
  assign io_ex_pc_4 = pc_4; // @[id_ex_register.py:88:Tile.fir@1036.4]
  assign io_ex_rs1_out = rs1_out; // @[id_ex_register.py:89:Tile.fir@1037.4]
  assign io_ex_rs2_out = rs2_out; // @[id_ex_register.py:90:Tile.fir@1038.4]
  assign io_ex_rd = inst[11:7]; // @[id_ex_register.py:95:Tile.fir@1044.4]
  assign io_ex_imm = imm; // @[id_ex_register.py:93:Tile.fir@1041.4]
  assign io_ex_rs1 = rs1; // @[id_ex_register.py:91:Tile.fir@1039.4]
  assign io_ex_rs2 = rs2; // @[id_ex_register.py:92:Tile.fir@1040.4]
  assign io_ex_ctrl_out_Reg_Write = reg_write; // @[id_ex_register.py:104:Tile.fir@1052.4]
  assign io_ex_ctrl_out_Imm_Sel = imm_sel; // @[id_ex_register.py:108:Tile.fir@1056.4]
  assign io_ex_ctrl_out_ALU_Src = alu_src; // @[id_ex_register.py:97:Tile.fir@1045.4]
  assign io_ex_ctrl_out_ALUOp = aluop; // @[id_ex_register.py:98:Tile.fir@1046.4]
  assign io_ex_ctrl_out_Branch = branch; // @[id_ex_register.py:99:Tile.fir@1047.4]
  assign io_ex_ctrl_out_Branch_Src = branch_src; // @[id_ex_register.py:100:Tile.fir@1048.4]
  assign io_ex_ctrl_out_Mem_Read = mem_read; // @[id_ex_register.py:102:Tile.fir@1050.4]
  assign io_ex_ctrl_out_Mem_Write = mem_write; // @[id_ex_register.py:103:Tile.fir@1051.4]
  assign io_ex_ctrl_out_Data_Size = data_size; // @[id_ex_register.py:106:Tile.fir@1054.4]
  assign io_ex_ctrl_out_Load_Type = load_type; // @[id_ex_register.py:107:Tile.fir@1055.4]
  assign io_ex_ctrl_out_Mem_to_Reg = mem_to_reg; // @[id_ex_register.py:105:Tile.fir@1053.4]
  assign io_ex_ctrl_out_Jump_Type = jump_type; // @[id_ex_register.py:101:Tile.fir@1049.4]
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
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  pc_4 = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  rs1_out = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  rs2_out = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  imm = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  inst = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  rs1 = _RAND_6[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  rs2 = _RAND_7[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  alu_src = _RAND_8[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  aluop = _RAND_9[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  branch = _RAND_10[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  branch_src = _RAND_11[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  jump_type = _RAND_12[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  mem_read = _RAND_13[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  mem_write = _RAND_14[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  data_size = _RAND_15[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  load_type = _RAND_16[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {1{`RANDOM}};
  reg_write = _RAND_17[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_18 = {1{`RANDOM}};
  mem_to_reg = _RAND_18[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_19 = {1{`RANDOM}};
  imm_sel = _RAND_19[2:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      pc <= 32'h0;
    end else begin
      if (io_ID_EX_Flush) begin
        pc <= 32'h0;
      end else begin
        pc <= io_id_pc;
      end
    end
    if (reset) begin
      pc_4 <= 32'h0;
    end else begin
      if (io_ID_EX_Flush) begin
        pc_4 <= 32'h0;
      end else begin
        pc_4 <= io_id_pc_4;
      end
    end
    if (reset) begin
      rs1_out <= 32'h0;
    end else begin
      if (io_ID_EX_Flush) begin
        rs1_out <= 32'h0;
      end else begin
        rs1_out <= io_id_rs1_out;
      end
    end
    if (reset) begin
      rs2_out <= 32'h0;
    end else begin
      if (io_ID_EX_Flush) begin
        rs2_out <= 32'h0;
      end else begin
        rs2_out <= io_id_rs2_out;
      end
    end
    if (reset) begin
      imm <= 32'h0;
    end else begin
      if (io_ID_EX_Flush) begin
        imm <= 32'h0;
      end else begin
        imm <= io_id_imm;
      end
    end
    if (reset) begin
      inst <= 32'h0;
    end else begin
      if (io_ID_EX_Flush) begin
        inst <= 32'h0;
      end else begin
        inst <= io_id_inst;
      end
    end
    if (reset) begin
      rs1 <= 5'h0;
    end else begin
      if (io_ID_EX_Flush) begin
        rs1 <= 5'h0;
      end else begin
        rs1 <= io_id_rs1;
      end
    end
    if (reset) begin
      rs2 <= 5'h0;
    end else begin
      if (io_ID_EX_Flush) begin
        rs2 <= 5'h0;
      end else begin
        rs2 <= io_id_rs2;
      end
    end
    if (reset) begin
      alu_src <= 1'h0;
    end else begin
      if (io_ID_EX_Flush) begin
        alu_src <= 1'h0;
      end else begin
        alu_src <= io_id_ctrl_in_ALU_Src;
      end
    end
    if (reset) begin
      aluop <= 5'h0;
    end else begin
      if (io_ID_EX_Flush) begin
        aluop <= 5'h0;
      end else begin
        aluop <= io_id_ctrl_in_ALUOp;
      end
    end
    if (reset) begin
      branch <= 1'h0;
    end else begin
      if (io_ID_EX_Flush) begin
        branch <= 1'h0;
      end else begin
        branch <= io_id_ctrl_in_Branch;
      end
    end
    if (reset) begin
      branch_src <= 1'h0;
    end else begin
      if (io_ID_EX_Flush) begin
        branch_src <= 1'h0;
      end else begin
        branch_src <= io_id_ctrl_in_Branch_Src;
      end
    end
    if (reset) begin
      jump_type <= 1'h0;
    end else begin
      if (io_ID_EX_Flush) begin
        jump_type <= 1'h0;
      end else begin
        jump_type <= io_id_ctrl_in_Jump_Type;
      end
    end
    if (reset) begin
      mem_read <= 1'h0;
    end else begin
      if (io_ID_EX_Flush) begin
        mem_read <= 1'h0;
      end else begin
        mem_read <= io_id_ctrl_in_Mem_Read;
      end
    end
    if (reset) begin
      mem_write <= 1'h0;
    end else begin
      if (io_ID_EX_Flush) begin
        mem_write <= 1'h0;
      end else begin
        mem_write <= io_id_ctrl_in_Mem_Write;
      end
    end
    if (reset) begin
      data_size <= 2'h0;
    end else begin
      if (io_ID_EX_Flush) begin
        data_size <= 2'h0;
      end else begin
        data_size <= io_id_ctrl_in_Data_Size;
      end
    end
    if (reset) begin
      load_type <= 1'h0;
    end else begin
      if (io_ID_EX_Flush) begin
        load_type <= 1'h0;
      end else begin
        load_type <= io_id_ctrl_in_Load_Type;
      end
    end
    if (reset) begin
      reg_write <= 1'h0;
    end else begin
      if (io_ID_EX_Flush) begin
        reg_write <= 1'h0;
      end else begin
        reg_write <= io_id_ctrl_in_Reg_Write;
      end
    end
    if (reset) begin
      mem_to_reg <= 3'h0;
    end else begin
      if (io_ID_EX_Flush) begin
        mem_to_reg <= 3'h0;
      end else begin
        mem_to_reg <= io_id_ctrl_in_Mem_to_Reg;
      end
    end
    if (reset) begin
      imm_sel <= 3'h0;
    end else begin
      if (io_ID_EX_Flush) begin
        imm_sel <= 3'h0;
      end else begin
        imm_sel <= io_id_ctrl_in_Imm_Sel;
      end
    end
  end
endmodule
module Hazard_Detection( // @[hazard_detection.py:26:Tile.fir@1059.2]
  input  [4:0] io_rs1, // @[hazard_detection.py:11:Tile.fir@1062.4]
  input  [4:0] io_rs2, // @[hazard_detection.py:11:Tile.fir@1062.4]
  input  [4:0] io_ex_rd, // @[hazard_detection.py:11:Tile.fir@1062.4]
  input  [2:0] io_Imm_Sel, // @[hazard_detection.py:11:Tile.fir@1062.4]
  input        io_ex_Mem_Read, // @[hazard_detection.py:11:Tile.fir@1062.4]
  output       io_Bubble, // @[hazard_detection.py:11:Tile.fir@1062.4]
  output       io_IF_ID_Write, // @[hazard_detection.py:11:Tile.fir@1062.4]
  output       io_PC_Write // @[hazard_detection.py:11:Tile.fir@1062.4]
);
  wire  _T_997; // @[hazard_detection.py:32:Tile.fir@1065.4]
  wire  _T_998; // @[hazard_detection.py:32:Tile.fir@1066.4]
  wire  _T_999; // @[hazard_detection.py:32:Tile.fir@1067.4]
  wire  _T_1000; // @[hazard_detection.py:32:Tile.fir@1068.4]
  wire  _T_1001; // @[hazard_detection.py:32:Tile.fir@1069.4]
  wire  _T_1002; // @[hazard_detection.py:32:Tile.fir@1070.4]
  wire  _T_1004; // @[hazard_detection.py:36:Tile.fir@1072.4]
  wire  _T_1005; // @[hazard_detection.py:36:Tile.fir@1073.4]
  wire  _T_1006; // @[hazard_detection.py:36:Tile.fir@1074.4]
  wire  _T_1007; // @[hazard_detection.py:36:Tile.fir@1075.4]
  wire  _T_1008; // @[hazard_detection.py:36:Tile.fir@1076.4]
  wire  _T_1009; // @[hazard_detection.py:36:Tile.fir@1077.4]
  wire  _T_1010; // @[hazard_detection.py:38:Tile.fir@1078.4]
  assign _T_997 = io_Imm_Sel != 3'h5; // @[hazard_detection.py:32:Tile.fir@1065.4]
  assign _T_998 = io_ex_Mem_Read & _T_997; // @[hazard_detection.py:32:Tile.fir@1066.4]
  assign _T_999 = io_Imm_Sel != 3'h6; // @[hazard_detection.py:32:Tile.fir@1067.4]
  assign _T_1000 = _T_998 & _T_999; // @[hazard_detection.py:32:Tile.fir@1068.4]
  assign _T_1001 = io_rs1 == io_ex_rd; // @[hazard_detection.py:32:Tile.fir@1069.4]
  assign _T_1002 = _T_1000 & _T_1001; // @[hazard_detection.py:32:Tile.fir@1070.4]
  assign _T_1004 = io_Imm_Sel == 3'h1; // @[hazard_detection.py:36:Tile.fir@1072.4]
  assign _T_1005 = io_Imm_Sel == 3'h4; // @[hazard_detection.py:36:Tile.fir@1073.4]
  assign _T_1006 = _T_1004 | _T_1005; // @[hazard_detection.py:36:Tile.fir@1074.4]
  assign _T_1007 = io_ex_Mem_Read & _T_1006; // @[hazard_detection.py:36:Tile.fir@1075.4]
  assign _T_1008 = io_rs2 == io_ex_rd; // @[hazard_detection.py:36:Tile.fir@1076.4]
  assign _T_1009 = _T_1007 & _T_1008; // @[hazard_detection.py:36:Tile.fir@1077.4]
  assign _T_1010 = _T_1002 | _T_1009; // @[hazard_detection.py:38:Tile.fir@1078.4]
  assign io_Bubble = _T_1002 | _T_1009; // @[hazard_detection.py:40:Tile.fir@1080.4]
  assign io_IF_ID_Write = _T_1010 ? 1'h0 : 1'h1; // @[hazard_detection.py:41:Tile.fir@1082.4]
  assign io_PC_Write = _T_1010 ? 1'h0 : 1'h1; // @[hazard_detection.py:42:Tile.fir@1084.4]
endmodule
module ALU( // @[alu.py:21:Tile.fir@1087.2]
  input  [31:0] io_src_a, // @[alu.py:11:Tile.fir@1090.4]
  input  [31:0] io_src_b, // @[alu.py:11:Tile.fir@1090.4]
  input  [4:0]  io_ALUOp, // @[alu.py:11:Tile.fir@1090.4]
  output [31:0] io_sum, // @[alu.py:11:Tile.fir@1090.4]
  output        io_conflag // @[alu.py:11:Tile.fir@1090.4]
);
  wire [5:0] _T_1023; // @[alu.py:24:Tile.fir@1092.4]
  wire [32:0] _T_1024; // @[alu.py:26:Tile.fir@1093.4]
  wire [32:0] _T_1025; // @[alu.py:27:Tile.fir@1094.4]
  wire [31:0] _T_1026; // @[alu.py:28:Tile.fir@1095.4]
  wire [31:0] _T_1027; // @[alu.py:29:Tile.fir@1096.4]
  wire [31:0] _T_1028; // @[alu.py:30:Tile.fir@1097.4]
  wire [94:0] _GEN_0; // @[alu.py:31:Tile.fir@1098.4]
  wire [94:0] _T_1029; // @[alu.py:31:Tile.fir@1098.4]
  wire [31:0] _T_1030; // @[alu.py:32:Tile.fir@1099.4]
  wire [31:0] _T_1031; // @[alu.py:33:Tile.fir@1100.4]
  wire [31:0] _T_1032; // @[alu.py:33:Tile.fir@1101.4]
  wire [31:0] _T_1033; // @[alu.py:33:Tile.fir@1102.4]
  wire [31:0] _T_1035; // @[alu.py:34:Tile.fir@1104.4]
  wire  _T_1036; // @[alu.py:34:Tile.fir@1105.4]
  wire  _T_1037; // @[alu.py:35:Tile.fir@1106.4]
  wire  _T_1038; // @[mux.py:72:Tile.fir@1107.4]
  wire [31:0] _T_1039; // @[alu.py:35:Tile.fir@1108.4]
  wire  _T_1040; // @[mux.py:72:Tile.fir@1109.4]
  wire [31:0] _T_1041; // @[alu.py:35:Tile.fir@1110.4]
  wire  _T_1042; // @[mux.py:72:Tile.fir@1111.4]
  wire [31:0] _T_1043; // @[alu.py:35:Tile.fir@1112.4]
  wire  _T_1044; // @[mux.py:72:Tile.fir@1113.4]
  wire [31:0] _T_1045; // @[alu.py:35:Tile.fir@1114.4]
  wire  _T_1046; // @[mux.py:72:Tile.fir@1115.4]
  wire [94:0] _T_1047; // @[alu.py:35:Tile.fir@1116.4]
  wire  _T_1048; // @[mux.py:72:Tile.fir@1117.4]
  wire [94:0] _T_1049; // @[alu.py:35:Tile.fir@1118.4]
  wire  _T_1050; // @[mux.py:72:Tile.fir@1119.4]
  wire [94:0] _T_1051; // @[alu.py:35:Tile.fir@1120.4]
  wire  _T_1052; // @[mux.py:72:Tile.fir@1121.4]
  wire [94:0] _T_1053; // @[alu.py:35:Tile.fir@1122.4]
  wire  _T_1054; // @[mux.py:72:Tile.fir@1123.4]
  wire [94:0] _T_1055; // @[alu.py:35:Tile.fir@1124.4]
  wire  _T_1056; // @[mux.py:72:Tile.fir@1125.4]
  wire [94:0] _T_1057; // @[alu.py:35:Tile.fir@1126.4]
  wire  _T_1060; // @[alu.py:39:Tile.fir@1130.4]
  wire  _T_1069; // @[alu.py:42:Tile.fir@1139.4]
  wire  _T_1071; // @[alu.py:44:Tile.fir@1141.4]
  wire  _T_1072; // @[mux.py:72:Tile.fir@1142.4]
  wire  _T_1073; // @[alu.py:44:Tile.fir@1143.4]
  wire  _T_1074; // @[mux.py:72:Tile.fir@1144.4]
  wire  _T_1075; // @[alu.py:44:Tile.fir@1145.4]
  wire  _T_1076; // @[mux.py:72:Tile.fir@1146.4]
  wire  _T_1077; // @[alu.py:44:Tile.fir@1147.4]
  wire  _T_1078; // @[mux.py:72:Tile.fir@1148.4]
  wire  _T_1079; // @[alu.py:44:Tile.fir@1149.4]
  wire  _T_1080; // @[mux.py:72:Tile.fir@1150.4]
  wire  _T_1081; // @[alu.py:44:Tile.fir@1151.4]
  wire  _T_1082; // @[mux.py:72:Tile.fir@1152.4]
  assign _T_1023 = io_src_b[5:0]; // @[alu.py:24:Tile.fir@1092.4]
  assign _T_1024 = io_src_a + io_src_b; // @[alu.py:26:Tile.fir@1093.4]
  assign _T_1025 = io_src_a - io_src_b; // @[alu.py:27:Tile.fir@1094.4]
  assign _T_1026 = io_src_a & io_src_b; // @[alu.py:28:Tile.fir@1095.4]
  assign _T_1027 = io_src_a | io_src_b; // @[alu.py:29:Tile.fir@1096.4]
  assign _T_1028 = io_src_a ^ io_src_b; // @[alu.py:30:Tile.fir@1097.4]
  assign _GEN_0 = {{63'd0}, io_src_a}; // @[alu.py:31:Tile.fir@1098.4]
  assign _T_1029 = _GEN_0 << _T_1023; // @[alu.py:31:Tile.fir@1098.4]
  assign _T_1030 = io_src_a >> _T_1023; // @[alu.py:32:Tile.fir@1099.4]
  assign _T_1031 = $signed(io_src_a); // @[alu.py:33:Tile.fir@1100.4]
  assign _T_1032 = $signed(_T_1031) >>> _T_1023; // @[alu.py:33:Tile.fir@1101.4]
  assign _T_1033 = $unsigned(_T_1032); // @[alu.py:33:Tile.fir@1102.4]
  assign _T_1035 = $signed(io_src_b); // @[alu.py:34:Tile.fir@1104.4]
  assign _T_1036 = $signed(_T_1031) < $signed(_T_1035); // @[alu.py:34:Tile.fir@1105.4]
  assign _T_1037 = io_src_a < io_src_b; // @[alu.py:35:Tile.fir@1106.4]
  assign _T_1038 = io_ALUOp == 5'h9; // @[mux.py:72:Tile.fir@1107.4]
  assign _T_1039 = _T_1038 ? {{31'd0}, _T_1037} : io_src_b; // @[alu.py:35:Tile.fir@1108.4]
  assign _T_1040 = io_ALUOp == 5'h8; // @[mux.py:72:Tile.fir@1109.4]
  assign _T_1041 = _T_1040 ? {{31'd0}, _T_1036} : _T_1039; // @[alu.py:35:Tile.fir@1110.4]
  assign _T_1042 = io_ALUOp == 5'h7; // @[mux.py:72:Tile.fir@1111.4]
  assign _T_1043 = _T_1042 ? _T_1033 : _T_1041; // @[alu.py:35:Tile.fir@1112.4]
  assign _T_1044 = io_ALUOp == 5'h6; // @[mux.py:72:Tile.fir@1113.4]
  assign _T_1045 = _T_1044 ? _T_1030 : _T_1043; // @[alu.py:35:Tile.fir@1114.4]
  assign _T_1046 = io_ALUOp == 5'h5; // @[mux.py:72:Tile.fir@1115.4]
  assign _T_1047 = _T_1046 ? _T_1029 : {{63'd0}, _T_1045}; // @[alu.py:35:Tile.fir@1116.4]
  assign _T_1048 = io_ALUOp == 5'h4; // @[mux.py:72:Tile.fir@1117.4]
  assign _T_1049 = _T_1048 ? {{63'd0}, _T_1028} : _T_1047; // @[alu.py:35:Tile.fir@1118.4]
  assign _T_1050 = io_ALUOp == 5'h3; // @[mux.py:72:Tile.fir@1119.4]
  assign _T_1051 = _T_1050 ? {{63'd0}, _T_1027} : _T_1049; // @[alu.py:35:Tile.fir@1120.4]
  assign _T_1052 = io_ALUOp == 5'h2; // @[mux.py:72:Tile.fir@1121.4]
  assign _T_1053 = _T_1052 ? {{63'd0}, _T_1026} : _T_1051; // @[alu.py:35:Tile.fir@1122.4]
  assign _T_1054 = io_ALUOp == 5'h1; // @[mux.py:72:Tile.fir@1123.4]
  assign _T_1055 = _T_1054 ? {{62'd0}, _T_1025} : _T_1053; // @[alu.py:35:Tile.fir@1124.4]
  assign _T_1056 = io_ALUOp == 5'h0; // @[mux.py:72:Tile.fir@1125.4]
  assign _T_1057 = _T_1056 ? {{62'd0}, _T_1024} : _T_1055; // @[alu.py:35:Tile.fir@1126.4]
  assign _T_1060 = $signed(_T_1031) == $signed(_T_1035); // @[alu.py:39:Tile.fir@1130.4]
  assign _T_1069 = $signed(_T_1031) >= $signed(_T_1035); // @[alu.py:42:Tile.fir@1139.4]
  assign _T_1071 = io_src_a >= io_src_b; // @[alu.py:44:Tile.fir@1141.4]
  assign _T_1072 = io_ALUOp == 5'hf; // @[mux.py:72:Tile.fir@1142.4]
  assign _T_1073 = _T_1072 ? _T_1071 : 1'h0; // @[alu.py:44:Tile.fir@1143.4]
  assign _T_1074 = io_ALUOp == 5'he; // @[mux.py:72:Tile.fir@1144.4]
  assign _T_1075 = _T_1074 ? _T_1037 : _T_1073; // @[alu.py:44:Tile.fir@1145.4]
  assign _T_1076 = io_ALUOp == 5'hd; // @[mux.py:72:Tile.fir@1146.4]
  assign _T_1077 = _T_1076 ? _T_1069 : _T_1075; // @[alu.py:44:Tile.fir@1147.4]
  assign _T_1078 = io_ALUOp == 5'hc; // @[mux.py:72:Tile.fir@1148.4]
  assign _T_1079 = _T_1078 ? _T_1036 : _T_1077; // @[alu.py:44:Tile.fir@1149.4]
  assign _T_1080 = io_ALUOp == 5'hb; // @[mux.py:72:Tile.fir@1150.4]
  assign _T_1081 = _T_1080 ? _T_1060 : _T_1079; // @[alu.py:44:Tile.fir@1151.4]
  assign _T_1082 = io_ALUOp == 5'ha; // @[mux.py:72:Tile.fir@1152.4]
  assign io_sum = _T_1057[31:0]; // @[alu.py:35:Tile.fir@1127.4]
  assign io_conflag = _T_1082 ? _T_1060 : _T_1081; // @[alu.py:44:Tile.fir@1154.4]
endmodule
module Branch_Predictor( // @[branch_predictor.py:30:Tile.fir@1157.2]
  input         clock, // @[rawmodule.py:100:Tile.fir@1158.4]
  input         reset, // @[rawmodule.py:101:Tile.fir@1159.4]
  input  [31:0] io_inst, // @[branch_predictor.py:13:Tile.fir@1160.4]
  input  [31:0] io_branch_addr, // @[branch_predictor.py:13:Tile.fir@1160.4]
  input         io_PC_Src, // @[branch_predictor.py:13:Tile.fir@1160.4]
  input  [31:0] io_pc, // @[branch_predictor.py:13:Tile.fir@1160.4]
  input         io_ex_Branch, // @[branch_predictor.py:13:Tile.fir@1160.4]
  input         io_ex_Jump_Type, // @[branch_predictor.py:13:Tile.fir@1160.4]
  output [1:0]  io_PC_Sel, // @[branch_predictor.py:13:Tile.fir@1160.4]
  output [31:0] io_new_addr, // @[branch_predictor.py:13:Tile.fir@1160.4]
  output [31:0] io_pc_recover, // @[branch_predictor.py:13:Tile.fir@1160.4]
  output        io_IF_ID_Flush, // @[branch_predictor.py:13:Tile.fir@1160.4]
  output        io_ID_EX_Flush // @[branch_predictor.py:13:Tile.fir@1160.4]
);
  wire  addr_buffer_clock; // @[:Tile.fir@1162.4]
  wire [31:0] addr_buffer_io_addr_input; // @[:Tile.fir@1162.4]
  wire  addr_buffer_io_flush; // @[:Tile.fir@1162.4]
  wire  addr_buffer_io_record; // @[:Tile.fir@1162.4]
  wire [31:0] addr_buffer_io_front; // @[:Tile.fir@1162.4]
  reg [1:0] dynamic_counter_status; // @[branch_predictor.py:36:Tile.fir@1165.4]
  reg [31:0] _RAND_0;
  wire [31:0] _T_1237; // @[listlookup.py:52:Tile.fir@1166.4]
  wire  _T_1238; // @[listlookup.py:52:Tile.fir@1167.4]
  wire  _T_1240; // @[listlookup.py:52:Tile.fir@1169.4]
  wire  _T_1242; // @[listlookup.py:52:Tile.fir@1171.4]
  wire  _T_1244; // @[listlookup.py:52:Tile.fir@1173.4]
  wire  _T_1246; // @[listlookup.py:52:Tile.fir@1175.4]
  wire [31:0] _T_1247; // @[listlookup.py:52:Tile.fir@1176.4]
  wire  _T_1248; // @[listlookup.py:52:Tile.fir@1177.4]
  wire  _T_1250; // @[listlookup.py:52:Tile.fir@1179.4]
  wire  _T_1252; // @[listlookup.py:52:Tile.fir@1181.4]
  wire  _T_1254; // @[listlookup.py:52:Tile.fir@1183.4]
  wire  _T_1256; // @[listlookup.py:52:Tile.fir@1185.4]
  wire  _T_1258; // @[listlookup.py:52:Tile.fir@1187.4]
  wire  _T_1260; // @[listlookup.py:52:Tile.fir@1189.4]
  wire  _T_1262; // @[listlookup.py:52:Tile.fir@1191.4]
  wire  _T_1264; // @[listlookup.py:52:Tile.fir@1193.4]
  wire  _T_1266; // @[listlookup.py:52:Tile.fir@1195.4]
  wire  _T_1268; // @[listlookup.py:52:Tile.fir@1197.4]
  wire  _T_1270; // @[listlookup.py:52:Tile.fir@1199.4]
  wire  _T_1272; // @[listlookup.py:52:Tile.fir@1201.4]
  wire  _T_1274; // @[listlookup.py:52:Tile.fir@1203.4]
  wire  _T_1276; // @[listlookup.py:52:Tile.fir@1205.4]
  wire  _T_1278; // @[listlookup.py:52:Tile.fir@1207.4]
  wire  _T_1280; // @[listlookup.py:52:Tile.fir@1209.4]
  wire  _T_1282; // @[listlookup.py:52:Tile.fir@1211.4]
  wire  _T_1284; // @[listlookup.py:52:Tile.fir@1213.4]
  wire  _T_1286; // @[listlookup.py:52:Tile.fir@1215.4]
  wire  _T_1288; // @[listlookup.py:52:Tile.fir@1217.4]
  wire  _T_1290; // @[listlookup.py:52:Tile.fir@1219.4]
  wire  _T_1292; // @[listlookup.py:52:Tile.fir@1221.4]
  wire  _T_1294; // @[listlookup.py:52:Tile.fir@1223.4]
  wire  _T_1296; // @[listlookup.py:52:Tile.fir@1225.4]
  wire  _T_1298; // @[listlookup.py:52:Tile.fir@1227.4]
  wire  _T_1300; // @[listlookup.py:52:Tile.fir@1229.4]
  wire  _T_1302; // @[listlookup.py:52:Tile.fir@1231.4]
  wire [31:0] _T_1303; // @[listlookup.py:52:Tile.fir@1232.4]
  wire  _T_1304; // @[listlookup.py:52:Tile.fir@1233.4]
  wire  _T_1306; // @[listlookup.py:52:Tile.fir@1235.4]
  wire  _T_1469; // @[branch_predictor.py:34:Tile.fir@1398.4]
  wire  _T_1470; // @[branch_predictor.py:34:Tile.fir@1399.4]
  wire  _T_1471; // @[branch_predictor.py:34:Tile.fir@1400.4]
  wire  _T_1472; // @[branch_predictor.py:34:Tile.fir@1401.4]
  wire  _T_1473; // @[branch_predictor.py:34:Tile.fir@1402.4]
  wire  _T_1474; // @[branch_predictor.py:34:Tile.fir@1403.4]
  wire  _T_1475; // @[branch_predictor.py:34:Tile.fir@1404.4]
  wire  _T_1476; // @[branch_predictor.py:34:Tile.fir@1405.4]
  wire  _T_1477; // @[branch_predictor.py:34:Tile.fir@1406.4]
  wire  _T_1478; // @[branch_predictor.py:34:Tile.fir@1407.4]
  wire  _T_1479; // @[branch_predictor.py:34:Tile.fir@1408.4]
  wire  _T_1480; // @[branch_predictor.py:34:Tile.fir@1409.4]
  wire  _T_1481; // @[branch_predictor.py:34:Tile.fir@1410.4]
  wire  _T_1482; // @[branch_predictor.py:34:Tile.fir@1411.4]
  wire  _T_1483; // @[branch_predictor.py:34:Tile.fir@1412.4]
  wire  _T_1484; // @[branch_predictor.py:34:Tile.fir@1413.4]
  wire  _T_1485; // @[branch_predictor.py:34:Tile.fir@1414.4]
  wire  _T_1486; // @[branch_predictor.py:34:Tile.fir@1415.4]
  wire  _T_1487; // @[branch_predictor.py:34:Tile.fir@1416.4]
  wire  _T_1488; // @[branch_predictor.py:34:Tile.fir@1417.4]
  wire  _T_1489; // @[branch_predictor.py:34:Tile.fir@1418.4]
  wire  _T_1490; // @[branch_predictor.py:34:Tile.fir@1419.4]
  wire  _T_1491; // @[branch_predictor.py:34:Tile.fir@1420.4]
  wire  _T_1492; // @[branch_predictor.py:34:Tile.fir@1421.4]
  wire  _T_1493; // @[branch_predictor.py:34:Tile.fir@1422.4]
  wire  _T_1494; // @[branch_predictor.py:34:Tile.fir@1423.4]
  wire  _T_1495; // @[branch_predictor.py:34:Tile.fir@1424.4]
  wire  _T_1496; // @[branch_predictor.py:34:Tile.fir@1425.4]
  wire  _T_1497; // @[branch_predictor.py:34:Tile.fir@1426.4]
  wire  _T_1498; // @[branch_predictor.py:34:Tile.fir@1427.4]
  wire  _T_1499; // @[branch_predictor.py:34:Tile.fir@1428.4]
  wire  _T_1500; // @[branch_predictor.py:34:Tile.fir@1429.4]
  wire  _T_1501; // @[branch_predictor.py:34:Tile.fir@1430.4]
  wire  _T_1502; // @[branch_predictor.py:34:Tile.fir@1431.4]
  wire  _T_1736; // @[branch_predictor.py:34:Tile.fir@1665.4]
  wire  _T_1737; // @[branch_predictor.py:34:Tile.fir@1666.4]
  wire  _T_1738; // @[branch_predictor.py:34:Tile.fir@1667.4]
  wire  _T_1739; // @[branch_predictor.py:34:Tile.fir@1668.4]
  wire  _T_1740; // @[branch_predictor.py:34:Tile.fir@1669.4]
  wire  _T_1741; // @[branch_predictor.py:34:Tile.fir@1670.4]
  wire  _T_1742; // @[branch_predictor.py:34:Tile.fir@1671.4]
  wire  _T_1743; // @[branch_predictor.py:34:Tile.fir@1672.4]
  wire  _T_1744; // @[branch_predictor.py:34:Tile.fir@1673.4]
  wire  _T_1745; // @[branch_predictor.py:34:Tile.fir@1674.4]
  wire  _T_1746; // @[branch_predictor.py:34:Tile.fir@1675.4]
  wire  _T_1747; // @[branch_predictor.py:34:Tile.fir@1676.4]
  wire  _T_1748; // @[branch_predictor.py:34:Tile.fir@1677.4]
  wire  _T_1749; // @[branch_predictor.py:34:Tile.fir@1678.4]
  wire  _T_1750; // @[branch_predictor.py:34:Tile.fir@1679.4]
  wire  _T_1751; // @[branch_predictor.py:34:Tile.fir@1680.4]
  wire  _T_1752; // @[branch_predictor.py:34:Tile.fir@1681.4]
  wire  _T_1753; // @[branch_predictor.py:34:Tile.fir@1682.4]
  wire  _T_1754; // @[branch_predictor.py:34:Tile.fir@1683.4]
  wire  _T_1755; // @[branch_predictor.py:34:Tile.fir@1684.4]
  wire  _T_1756; // @[branch_predictor.py:34:Tile.fir@1685.4]
  wire  _T_1757; // @[branch_predictor.py:34:Tile.fir@1686.4]
  wire  _T_1758; // @[branch_predictor.py:34:Tile.fir@1687.4]
  wire  _T_1759; // @[branch_predictor.py:34:Tile.fir@1688.4]
  wire  _T_1760; // @[branch_predictor.py:34:Tile.fir@1689.4]
  wire  _T_1761; // @[branch_predictor.py:34:Tile.fir@1690.4]
  wire  _T_1762; // @[branch_predictor.py:34:Tile.fir@1691.4]
  wire  _T_1763; // @[branch_predictor.py:34:Tile.fir@1692.4]
  wire  _T_1764; // @[branch_predictor.py:34:Tile.fir@1693.4]
  wire  _T_1765; // @[branch_predictor.py:34:Tile.fir@1694.4]
  wire  _T_1766; // @[branch_predictor.py:34:Tile.fir@1695.4]
  wire  _T_1767; // @[branch_predictor.py:34:Tile.fir@1696.4]
  wire  _T_1768; // @[branch_predictor.py:34:Tile.fir@1697.4]
  wire [32:0] _T_1770; // @[branch_predictor.py:37:Tile.fir@1698.4]
  wire  _T_1775; // @[branch_predictor.py:41:Tile.fir@1703.4]
  wire  _T_1776; // @[branch_predictor.py:41:Tile.fir@1704.4]
  wire  _T_1779; // @[branch_predictor.py:42:Tile.fir@1707.4]
  wire  _T_1781; // @[branch_predictor.py:43:Tile.fir@1709.4]
  wire  _T_1782; // @[branch_predictor.py:43:Tile.fir@1710.4]
  wire  _T_1783; // @[branch_predictor.py:45:Tile.fir@1711.4]
  wire  _T_1784; // @[branch_predictor.py:46:Tile.fir@1712.4]
  wire  _T_1785; // @[branch_predictor.py:46:Tile.fir@1713.4]
  wire [1:0] _T_1788; // @[branch_predictor.py:53:Tile.fir@1718.4]
  wire [1:0] _T_1791; // @[branch_predictor.py:61:Tile.fir@1721.4]
  wire [1:0] _T_1793; // @[branch_predictor.py:61:Tile.fir@1723.4]
  wire  _T_1794; // @[mux.py:72:Tile.fir@1724.4]
  wire [1:0] _T_1795; // @[branch_predictor.py:61:Tile.fir@1725.4]
  wire  _T_1796; // @[mux.py:72:Tile.fir@1726.4]
  wire [1:0] _T_1797; // @[branch_predictor.py:61:Tile.fir@1727.4]
  wire [1:0] _T_1799; // @[branch_predictor.py:66:Tile.fir@1729.4]
  wire [1:0] _T_1801; // @[branch_predictor.py:66:Tile.fir@1731.4]
  wire [1:0] _T_1803; // @[branch_predictor.py:66:Tile.fir@1733.4]
  wire [1:0] _T_1805; // @[branch_predictor.py:66:Tile.fir@1735.4]
  wire [1:0] _T_1806; // @[branch_predictor.py:66:Tile.fir@1736.4]
  wire [1:0] _T_1807; // @[branch_predictor.py:67:Tile.fir@1737.4]
  wire  _T_1808; // @[branch_predictor.py:71:Tile.fir@1739.4]
  wire  _T_1809; // @[branch_predictor.py:71:Tile.fir@1740.4]
  wire  _T_1810; // @[branch_predictor.py:71:Tile.fir@1741.4]
  wire  _T_1811; // @[branch_predictor.py:71:Tile.fir@1742.4]
  wire  _T_1814; // @[branch_predictor.py:73:Tile.fir@1745.4]
  wire  _T_1817; // @[branch_predictor.py:74:Tile.fir@1748.4]
  wire  _T_1818; // @[branch_predictor.py:74:Tile.fir@1749.4]
  wire  _T_1819; // @[branch_predictor.py:74:Tile.fir@1750.4]
  wire [1:0] _T_1822; // @[branch_predictor.py:84:Tile.fir@1754.4]
  wire [1:0] _T_1824; // @[branch_predictor.py:84:Tile.fir@1756.4]
  wire [1:0] _T_1826; // @[branch_predictor.py:84:Tile.fir@1758.4]
  wire [1:0] _T_1828; // @[branch_predictor.py:84:Tile.fir@1760.4]
  wire [31:0] _T_1829; // @[branch_predictor.py:87:Tile.fir@1761.4]
  wire  _T_1830; // @[branch_predictor.py:87:Tile.fir@1762.4]
  wire  _T_1831; // @[branch_predictor.py:87:Tile.fir@1763.4]
  wire [5:0] _T_1832; // @[branch_predictor.py:87:Tile.fir@1764.4]
  wire [3:0] _T_1833; // @[branch_predictor.py:88:Tile.fir@1765.4]
  wire [13:0] _T_1837; // @[branch_predictor.py:88:Tile.fir@1769.4]
  wire [13:0] _T_1838; // @[branch_predictor.py:88:Tile.fir@1770.4]
  wire [31:0] _GEN_0; // @[branch_predictor.py:88:Tile.fir@1771.4]
  wire [32:0] _T_1839; // @[branch_predictor.py:88:Tile.fir@1771.4]
  wire [32:0] _T_1840; // @[branch_predictor.py:88:Tile.fir@1772.4]
  wire [1:0] _T_1841; // @[branch_predictor.py:90:Tile.fir@1773.4]
  wire [1:0] _T_1842; // @[branch_predictor.py:90:Tile.fir@1774.4]
  wire  _T_1843; // @[branch_predictor.py:94:Tile.fir@1775.4]
  wire [1:0] _T_1844; // @[branch_predictor.py:95:Tile.fir@1776.4]
  wire [1:0] _T_1845; // @[branch_predictor.py:95:Tile.fir@1777.4]
  wire [32:0] _T_1847; // @[branch_predictor.py:99:Tile.fir@1780.4]
  wire [32:0] _T_1848; // @[branch_predictor.py:99:Tile.fir@1781.4]
  wire [32:0] _T_1849; // @[branch_predictor.py:99:Tile.fir@1782.4]
  Addr_Buffer addr_buffer ( // @[:Tile.fir@1162.4]
    .clock(addr_buffer_clock),
    .io_addr_input(addr_buffer_io_addr_input),
    .io_flush(addr_buffer_io_flush),
    .io_record(addr_buffer_io_record),
    .io_front(addr_buffer_io_front)
  );
  assign _T_1237 = io_inst & 32'hfe00707f; // @[listlookup.py:52:Tile.fir@1166.4]
  assign _T_1238 = _T_1237 == 32'h33; // @[listlookup.py:52:Tile.fir@1167.4]
  assign _T_1240 = _T_1237 == 32'h40000033; // @[listlookup.py:52:Tile.fir@1169.4]
  assign _T_1242 = _T_1237 == 32'h7033; // @[listlookup.py:52:Tile.fir@1171.4]
  assign _T_1244 = _T_1237 == 32'h6033; // @[listlookup.py:52:Tile.fir@1173.4]
  assign _T_1246 = _T_1237 == 32'h4033; // @[listlookup.py:52:Tile.fir@1175.4]
  assign _T_1247 = io_inst & 32'h707f; // @[listlookup.py:52:Tile.fir@1176.4]
  assign _T_1248 = _T_1247 == 32'h13; // @[listlookup.py:52:Tile.fir@1177.4]
  assign _T_1250 = _T_1247 == 32'h7013; // @[listlookup.py:52:Tile.fir@1179.4]
  assign _T_1252 = _T_1247 == 32'h6013; // @[listlookup.py:52:Tile.fir@1181.4]
  assign _T_1254 = _T_1247 == 32'h4013; // @[listlookup.py:52:Tile.fir@1183.4]
  assign _T_1256 = _T_1237 == 32'h1033; // @[listlookup.py:52:Tile.fir@1185.4]
  assign _T_1258 = _T_1237 == 32'h5033; // @[listlookup.py:52:Tile.fir@1187.4]
  assign _T_1260 = _T_1237 == 32'h40005033; // @[listlookup.py:52:Tile.fir@1189.4]
  assign _T_1262 = _T_1237 == 32'h1013; // @[listlookup.py:52:Tile.fir@1191.4]
  assign _T_1264 = _T_1237 == 32'h5013; // @[listlookup.py:52:Tile.fir@1193.4]
  assign _T_1266 = _T_1237 == 32'h40005013; // @[listlookup.py:52:Tile.fir@1195.4]
  assign _T_1268 = _T_1237 == 32'h2033; // @[listlookup.py:52:Tile.fir@1197.4]
  assign _T_1270 = _T_1237 == 32'h3033; // @[listlookup.py:52:Tile.fir@1199.4]
  assign _T_1272 = _T_1247 == 32'h2013; // @[listlookup.py:52:Tile.fir@1201.4]
  assign _T_1274 = _T_1247 == 32'h3013; // @[listlookup.py:52:Tile.fir@1203.4]
  assign _T_1276 = _T_1247 == 32'h2003; // @[listlookup.py:52:Tile.fir@1205.4]
  assign _T_1278 = _T_1247 == 32'h1003; // @[listlookup.py:52:Tile.fir@1207.4]
  assign _T_1280 = _T_1247 == 32'h3; // @[listlookup.py:52:Tile.fir@1209.4]
  assign _T_1282 = _T_1247 == 32'h5003; // @[listlookup.py:52:Tile.fir@1211.4]
  assign _T_1284 = _T_1247 == 32'h4003; // @[listlookup.py:52:Tile.fir@1213.4]
  assign _T_1286 = _T_1247 == 32'h2023; // @[listlookup.py:52:Tile.fir@1215.4]
  assign _T_1288 = _T_1247 == 32'h1023; // @[listlookup.py:52:Tile.fir@1217.4]
  assign _T_1290 = _T_1247 == 32'h23; // @[listlookup.py:52:Tile.fir@1219.4]
  assign _T_1292 = _T_1247 == 32'h63; // @[listlookup.py:52:Tile.fir@1221.4]
  assign _T_1294 = _T_1247 == 32'h1063; // @[listlookup.py:52:Tile.fir@1223.4]
  assign _T_1296 = _T_1247 == 32'h4063; // @[listlookup.py:52:Tile.fir@1225.4]
  assign _T_1298 = _T_1247 == 32'h5063; // @[listlookup.py:52:Tile.fir@1227.4]
  assign _T_1300 = _T_1247 == 32'h6063; // @[listlookup.py:52:Tile.fir@1229.4]
  assign _T_1302 = _T_1247 == 32'h7063; // @[listlookup.py:52:Tile.fir@1231.4]
  assign _T_1303 = io_inst & 32'h7f; // @[listlookup.py:52:Tile.fir@1232.4]
  assign _T_1304 = _T_1303 == 32'h6f; // @[listlookup.py:52:Tile.fir@1233.4]
  assign _T_1306 = _T_1247 == 32'h67; // @[listlookup.py:52:Tile.fir@1235.4]
  assign _T_1469 = _T_1304 ? 1'h1 : _T_1306; // @[branch_predictor.py:34:Tile.fir@1398.4]
  assign _T_1470 = _T_1302 ? 1'h1 : _T_1469; // @[branch_predictor.py:34:Tile.fir@1399.4]
  assign _T_1471 = _T_1300 ? 1'h1 : _T_1470; // @[branch_predictor.py:34:Tile.fir@1400.4]
  assign _T_1472 = _T_1298 ? 1'h1 : _T_1471; // @[branch_predictor.py:34:Tile.fir@1401.4]
  assign _T_1473 = _T_1296 ? 1'h1 : _T_1472; // @[branch_predictor.py:34:Tile.fir@1402.4]
  assign _T_1474 = _T_1294 ? 1'h1 : _T_1473; // @[branch_predictor.py:34:Tile.fir@1403.4]
  assign _T_1475 = _T_1292 ? 1'h1 : _T_1474; // @[branch_predictor.py:34:Tile.fir@1404.4]
  assign _T_1476 = _T_1290 ? 1'h0 : _T_1475; // @[branch_predictor.py:34:Tile.fir@1405.4]
  assign _T_1477 = _T_1288 ? 1'h0 : _T_1476; // @[branch_predictor.py:34:Tile.fir@1406.4]
  assign _T_1478 = _T_1286 ? 1'h0 : _T_1477; // @[branch_predictor.py:34:Tile.fir@1407.4]
  assign _T_1479 = _T_1284 ? 1'h0 : _T_1478; // @[branch_predictor.py:34:Tile.fir@1408.4]
  assign _T_1480 = _T_1282 ? 1'h0 : _T_1479; // @[branch_predictor.py:34:Tile.fir@1409.4]
  assign _T_1481 = _T_1280 ? 1'h0 : _T_1480; // @[branch_predictor.py:34:Tile.fir@1410.4]
  assign _T_1482 = _T_1278 ? 1'h0 : _T_1481; // @[branch_predictor.py:34:Tile.fir@1411.4]
  assign _T_1483 = _T_1276 ? 1'h0 : _T_1482; // @[branch_predictor.py:34:Tile.fir@1412.4]
  assign _T_1484 = _T_1274 ? 1'h0 : _T_1483; // @[branch_predictor.py:34:Tile.fir@1413.4]
  assign _T_1485 = _T_1272 ? 1'h0 : _T_1484; // @[branch_predictor.py:34:Tile.fir@1414.4]
  assign _T_1486 = _T_1270 ? 1'h0 : _T_1485; // @[branch_predictor.py:34:Tile.fir@1415.4]
  assign _T_1487 = _T_1268 ? 1'h0 : _T_1486; // @[branch_predictor.py:34:Tile.fir@1416.4]
  assign _T_1488 = _T_1266 ? 1'h0 : _T_1487; // @[branch_predictor.py:34:Tile.fir@1417.4]
  assign _T_1489 = _T_1264 ? 1'h0 : _T_1488; // @[branch_predictor.py:34:Tile.fir@1418.4]
  assign _T_1490 = _T_1262 ? 1'h0 : _T_1489; // @[branch_predictor.py:34:Tile.fir@1419.4]
  assign _T_1491 = _T_1260 ? 1'h0 : _T_1490; // @[branch_predictor.py:34:Tile.fir@1420.4]
  assign _T_1492 = _T_1258 ? 1'h0 : _T_1491; // @[branch_predictor.py:34:Tile.fir@1421.4]
  assign _T_1493 = _T_1256 ? 1'h0 : _T_1492; // @[branch_predictor.py:34:Tile.fir@1422.4]
  assign _T_1494 = _T_1254 ? 1'h0 : _T_1493; // @[branch_predictor.py:34:Tile.fir@1423.4]
  assign _T_1495 = _T_1252 ? 1'h0 : _T_1494; // @[branch_predictor.py:34:Tile.fir@1424.4]
  assign _T_1496 = _T_1250 ? 1'h0 : _T_1495; // @[branch_predictor.py:34:Tile.fir@1425.4]
  assign _T_1497 = _T_1248 ? 1'h0 : _T_1496; // @[branch_predictor.py:34:Tile.fir@1426.4]
  assign _T_1498 = _T_1246 ? 1'h0 : _T_1497; // @[branch_predictor.py:34:Tile.fir@1427.4]
  assign _T_1499 = _T_1244 ? 1'h0 : _T_1498; // @[branch_predictor.py:34:Tile.fir@1428.4]
  assign _T_1500 = _T_1242 ? 1'h0 : _T_1499; // @[branch_predictor.py:34:Tile.fir@1429.4]
  assign _T_1501 = _T_1240 ? 1'h0 : _T_1500; // @[branch_predictor.py:34:Tile.fir@1430.4]
  assign _T_1502 = _T_1238 ? 1'h0 : _T_1501; // @[branch_predictor.py:34:Tile.fir@1431.4]
  assign _T_1736 = _T_1302 ? 1'h0 : _T_1469; // @[branch_predictor.py:34:Tile.fir@1665.4]
  assign _T_1737 = _T_1300 ? 1'h0 : _T_1736; // @[branch_predictor.py:34:Tile.fir@1666.4]
  assign _T_1738 = _T_1298 ? 1'h0 : _T_1737; // @[branch_predictor.py:34:Tile.fir@1667.4]
  assign _T_1739 = _T_1296 ? 1'h0 : _T_1738; // @[branch_predictor.py:34:Tile.fir@1668.4]
  assign _T_1740 = _T_1294 ? 1'h0 : _T_1739; // @[branch_predictor.py:34:Tile.fir@1669.4]
  assign _T_1741 = _T_1292 ? 1'h0 : _T_1740; // @[branch_predictor.py:34:Tile.fir@1670.4]
  assign _T_1742 = _T_1290 ? 1'h0 : _T_1741; // @[branch_predictor.py:34:Tile.fir@1671.4]
  assign _T_1743 = _T_1288 ? 1'h0 : _T_1742; // @[branch_predictor.py:34:Tile.fir@1672.4]
  assign _T_1744 = _T_1286 ? 1'h0 : _T_1743; // @[branch_predictor.py:34:Tile.fir@1673.4]
  assign _T_1745 = _T_1284 ? 1'h0 : _T_1744; // @[branch_predictor.py:34:Tile.fir@1674.4]
  assign _T_1746 = _T_1282 ? 1'h0 : _T_1745; // @[branch_predictor.py:34:Tile.fir@1675.4]
  assign _T_1747 = _T_1280 ? 1'h0 : _T_1746; // @[branch_predictor.py:34:Tile.fir@1676.4]
  assign _T_1748 = _T_1278 ? 1'h0 : _T_1747; // @[branch_predictor.py:34:Tile.fir@1677.4]
  assign _T_1749 = _T_1276 ? 1'h0 : _T_1748; // @[branch_predictor.py:34:Tile.fir@1678.4]
  assign _T_1750 = _T_1274 ? 1'h0 : _T_1749; // @[branch_predictor.py:34:Tile.fir@1679.4]
  assign _T_1751 = _T_1272 ? 1'h0 : _T_1750; // @[branch_predictor.py:34:Tile.fir@1680.4]
  assign _T_1752 = _T_1270 ? 1'h0 : _T_1751; // @[branch_predictor.py:34:Tile.fir@1681.4]
  assign _T_1753 = _T_1268 ? 1'h0 : _T_1752; // @[branch_predictor.py:34:Tile.fir@1682.4]
  assign _T_1754 = _T_1266 ? 1'h0 : _T_1753; // @[branch_predictor.py:34:Tile.fir@1683.4]
  assign _T_1755 = _T_1264 ? 1'h0 : _T_1754; // @[branch_predictor.py:34:Tile.fir@1684.4]
  assign _T_1756 = _T_1262 ? 1'h0 : _T_1755; // @[branch_predictor.py:34:Tile.fir@1685.4]
  assign _T_1757 = _T_1260 ? 1'h0 : _T_1756; // @[branch_predictor.py:34:Tile.fir@1686.4]
  assign _T_1758 = _T_1258 ? 1'h0 : _T_1757; // @[branch_predictor.py:34:Tile.fir@1687.4]
  assign _T_1759 = _T_1256 ? 1'h0 : _T_1758; // @[branch_predictor.py:34:Tile.fir@1688.4]
  assign _T_1760 = _T_1254 ? 1'h0 : _T_1759; // @[branch_predictor.py:34:Tile.fir@1689.4]
  assign _T_1761 = _T_1252 ? 1'h0 : _T_1760; // @[branch_predictor.py:34:Tile.fir@1690.4]
  assign _T_1762 = _T_1250 ? 1'h0 : _T_1761; // @[branch_predictor.py:34:Tile.fir@1691.4]
  assign _T_1763 = _T_1248 ? 1'h0 : _T_1762; // @[branch_predictor.py:34:Tile.fir@1692.4]
  assign _T_1764 = _T_1246 ? 1'h0 : _T_1763; // @[branch_predictor.py:34:Tile.fir@1693.4]
  assign _T_1765 = _T_1244 ? 1'h0 : _T_1764; // @[branch_predictor.py:34:Tile.fir@1694.4]
  assign _T_1766 = _T_1242 ? 1'h0 : _T_1765; // @[branch_predictor.py:34:Tile.fir@1695.4]
  assign _T_1767 = _T_1240 ? 1'h0 : _T_1766; // @[branch_predictor.py:34:Tile.fir@1696.4]
  assign _T_1768 = _T_1238 ? 1'h0 : _T_1767; // @[branch_predictor.py:34:Tile.fir@1697.4]
  assign _T_1770 = io_pc + 32'h4; // @[branch_predictor.py:37:Tile.fir@1698.4]
  assign _T_1775 = 1'h0 == _T_1768; // @[branch_predictor.py:41:Tile.fir@1703.4]
  assign _T_1776 = _T_1502 & _T_1775; // @[branch_predictor.py:41:Tile.fir@1704.4]
  assign _T_1779 = io_ex_Branch & io_ex_Jump_Type; // @[branch_predictor.py:42:Tile.fir@1707.4]
  assign _T_1781 = io_ex_Jump_Type == 1'h0; // @[branch_predictor.py:43:Tile.fir@1709.4]
  assign _T_1782 = io_ex_Branch & _T_1781; // @[branch_predictor.py:43:Tile.fir@1710.4]
  assign _T_1783 = dynamic_counter_status == 2'h2; // @[branch_predictor.py:45:Tile.fir@1711.4]
  assign _T_1784 = dynamic_counter_status == 2'h3; // @[branch_predictor.py:46:Tile.fir@1712.4]
  assign _T_1785 = _T_1783 | _T_1784; // @[branch_predictor.py:46:Tile.fir@1713.4]
  assign _T_1788 = _T_1779 ? 2'h2 : 2'h0; // @[branch_predictor.py:53:Tile.fir@1718.4]
  assign _T_1791 = _T_1783 ? 2'h2 : dynamic_counter_status; // @[branch_predictor.py:61:Tile.fir@1721.4]
  assign _T_1793 = _T_1784 ? 2'h2 : _T_1791; // @[branch_predictor.py:61:Tile.fir@1723.4]
  assign _T_1794 = dynamic_counter_status == 2'h1; // @[mux.py:72:Tile.fir@1724.4]
  assign _T_1795 = _T_1794 ? 2'h3 : _T_1793; // @[branch_predictor.py:61:Tile.fir@1725.4]
  assign _T_1796 = dynamic_counter_status == 2'h0; // @[mux.py:72:Tile.fir@1726.4]
  assign _T_1797 = _T_1796 ? 2'h1 : _T_1795; // @[branch_predictor.py:61:Tile.fir@1727.4]
  assign _T_1799 = _T_1783 ? 2'h3 : dynamic_counter_status; // @[branch_predictor.py:66:Tile.fir@1729.4]
  assign _T_1801 = _T_1784 ? 2'h1 : _T_1799; // @[branch_predictor.py:66:Tile.fir@1731.4]
  assign _T_1803 = _T_1794 ? 2'h0 : _T_1801; // @[branch_predictor.py:66:Tile.fir@1733.4]
  assign _T_1805 = _T_1796 ? 2'h0 : _T_1803; // @[branch_predictor.py:66:Tile.fir@1735.4]
  assign _T_1806 = io_PC_Src ? _T_1797 : _T_1805; // @[branch_predictor.py:66:Tile.fir@1736.4]
  assign _T_1807 = _T_1782 ? _T_1806 : dynamic_counter_status; // @[branch_predictor.py:67:Tile.fir@1737.4]
  assign _T_1808 = 2'h3 == _T_1807; // @[branch_predictor.py:71:Tile.fir@1739.4]
  assign _T_1809 = 2'h1 == _T_1807; // @[branch_predictor.py:71:Tile.fir@1740.4]
  assign _T_1810 = _T_1808 | _T_1809; // @[branch_predictor.py:71:Tile.fir@1741.4]
  assign _T_1811 = _T_1782 & _T_1810; // @[branch_predictor.py:71:Tile.fir@1742.4]
  assign _T_1814 = _T_1808 & _T_1783; // @[branch_predictor.py:73:Tile.fir@1745.4]
  assign _T_1817 = _T_1809 & _T_1784; // @[branch_predictor.py:74:Tile.fir@1748.4]
  assign _T_1818 = _T_1814 | _T_1817; // @[branch_predictor.py:74:Tile.fir@1749.4]
  assign _T_1819 = _T_1811 & _T_1818; // @[branch_predictor.py:74:Tile.fir@1750.4]
  assign _T_1822 = _T_1783 ? 2'h2 : 2'h0; // @[branch_predictor.py:84:Tile.fir@1754.4]
  assign _T_1824 = _T_1784 ? 2'h2 : _T_1822; // @[branch_predictor.py:84:Tile.fir@1756.4]
  assign _T_1826 = _T_1794 ? 2'h0 : _T_1824; // @[branch_predictor.py:84:Tile.fir@1758.4]
  assign _T_1828 = _T_1796 ? 2'h0 : _T_1826; // @[branch_predictor.py:84:Tile.fir@1760.4]
  assign _T_1829 = $signed(io_pc); // @[branch_predictor.py:87:Tile.fir@1761.4]
  assign _T_1830 = io_inst[31]; // @[branch_predictor.py:87:Tile.fir@1762.4]
  assign _T_1831 = io_inst[7]; // @[branch_predictor.py:87:Tile.fir@1763.4]
  assign _T_1832 = io_inst[30:25]; // @[branch_predictor.py:87:Tile.fir@1764.4]
  assign _T_1833 = io_inst[11:8]; // @[branch_predictor.py:88:Tile.fir@1765.4]
  assign _T_1837 = {_T_1830,_T_1831,_T_1832,_T_1833,2'h0}; // @[branch_predictor.py:88:Tile.fir@1769.4]
  assign _T_1838 = $signed(_T_1837); // @[branch_predictor.py:88:Tile.fir@1770.4]
  assign _GEN_0 = {{18{_T_1838[13]}},_T_1838}; // @[branch_predictor.py:88:Tile.fir@1771.4]
  assign _T_1839 = $signed(_T_1829) + $signed(_GEN_0); // @[branch_predictor.py:88:Tile.fir@1771.4]
  assign _T_1840 = $unsigned(_T_1839); // @[branch_predictor.py:88:Tile.fir@1772.4]
  assign _T_1841 = _T_1819 ? 2'h1 : 2'h2; // @[branch_predictor.py:90:Tile.fir@1773.4]
  assign _T_1842 = _T_1811 ? _T_1841 : 2'h0; // @[branch_predictor.py:90:Tile.fir@1774.4]
  assign _T_1843 = _T_1782 & _T_1811; // @[branch_predictor.py:94:Tile.fir@1775.4]
  assign _T_1844 = _T_1776 ? _T_1828 : 2'h0; // @[branch_predictor.py:95:Tile.fir@1776.4]
  assign _T_1845 = _T_1843 ? _T_1842 : _T_1844; // @[branch_predictor.py:95:Tile.fir@1777.4]
  assign _T_1847 = _T_1776 ? _T_1840 : 33'h0; // @[branch_predictor.py:99:Tile.fir@1780.4]
  assign _T_1848 = _T_1782 ? {{1'd0}, io_branch_addr} : _T_1847; // @[branch_predictor.py:99:Tile.fir@1781.4]
  assign _T_1849 = _T_1779 ? {{1'd0}, io_branch_addr} : _T_1848; // @[branch_predictor.py:99:Tile.fir@1782.4]
  assign io_PC_Sel = _T_1779 ? _T_1788 : _T_1845; // @[branch_predictor.py:95:Tile.fir@1779.4]
  assign io_new_addr = _T_1849[31:0]; // @[branch_predictor.py:99:Tile.fir@1783.4]
  assign io_pc_recover = addr_buffer_io_front; // @[branch_predictor.py:101:Tile.fir@1784.4]
  assign io_IF_ID_Flush = _T_1779 | _T_1811; // @[branch_predictor.py:104:Tile.fir@1786.4]
  assign io_ID_EX_Flush = _T_1779 | _T_1811; // @[branch_predictor.py:105:Tile.fir@1788.4]
  assign addr_buffer_clock = clock; // @[rawmodule.py:110:Tile.fir@1163.4]
  assign addr_buffer_io_addr_input = _T_1770[31:0]; // @[branch_predictor.py:49:Tile.fir@1716.4]
  assign addr_buffer_io_flush = _T_1779 | _T_1811; // @[branch_predictor.py:78:Tile.fir@1752.4]
  assign addr_buffer_io_record = _T_1776 & _T_1785; // @[branch_predictor.py:48:Tile.fir@1715.4]
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
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  dynamic_counter_status = _RAND_0[1:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      dynamic_counter_status <= 2'h0;
    end else begin
      if (_T_1782) begin
        if (io_PC_Src) begin
          if (_T_1796) begin
            dynamic_counter_status <= 2'h1;
          end else begin
            if (_T_1794) begin
              dynamic_counter_status <= 2'h3;
            end else begin
              if (_T_1784) begin
                dynamic_counter_status <= 2'h2;
              end else begin
                if (_T_1783) begin
                  dynamic_counter_status <= 2'h2;
                end
              end
            end
          end
        end else begin
          if (_T_1796) begin
            dynamic_counter_status <= 2'h0;
          end else begin
            if (_T_1794) begin
              dynamic_counter_status <= 2'h0;
            end else begin
              if (_T_1784) begin
                dynamic_counter_status <= 2'h1;
              end else begin
                if (_T_1783) begin
                  dynamic_counter_status <= 2'h3;
                end
              end
            end
          end
        end
      end
    end
  end
endmodule
module DataCache( // @[datacache.py:24:Tile.fir@1791.2]
  input         clock, // @[rawmodule.py:100:Tile.fir@1792.4]
  input  [31:0] io_addr, // @[datacache.py:11:Tile.fir@1794.4]
  input  [31:0] io_write_data, // @[datacache.py:11:Tile.fir@1794.4]
  input         io_Mem_Read, // @[datacache.py:11:Tile.fir@1794.4]
  input         io_Mem_Write, // @[datacache.py:11:Tile.fir@1794.4]
  input  [1:0]  io_Data_Size, // @[datacache.py:11:Tile.fir@1794.4]
  input         io_Load_Type, // @[datacache.py:11:Tile.fir@1794.4]
  output [31:0] io_data_out // @[datacache.py:11:Tile.fir@1794.4]
);
  reg [31:0] cache [0:31]; // @[datacache.py:27:Tile.fir@1796.4]
  reg [31:0] _RAND_0;
  wire [31:0] cache__T_1877_data; // @[datacache.py:27:Tile.fir@1796.4]
  wire [4:0] cache__T_1877_addr; // @[datacache.py:27:Tile.fir@1796.4]
  wire [31:0] cache__T_1878_data; // @[datacache.py:27:Tile.fir@1796.4]
  wire [4:0] cache__T_1878_addr; // @[datacache.py:27:Tile.fir@1796.4]
  wire [31:0] cache__T_1879_data; // @[datacache.py:27:Tile.fir@1796.4]
  wire [4:0] cache__T_1879_addr; // @[datacache.py:27:Tile.fir@1796.4]
  wire [31:0] cache__T_1881_data; // @[datacache.py:27:Tile.fir@1796.4]
  wire [4:0] cache__T_1881_addr; // @[datacache.py:27:Tile.fir@1796.4]
  wire [31:0] cache__T_1887_data; // @[datacache.py:27:Tile.fir@1796.4]
  wire [4:0] cache__T_1887_addr; // @[datacache.py:27:Tile.fir@1796.4]
  wire [31:0] cache__T_1889_data; // @[datacache.py:27:Tile.fir@1796.4]
  wire [4:0] cache__T_1889_addr; // @[datacache.py:27:Tile.fir@1796.4]
  wire [31:0] cache__T_1907_data; // @[datacache.py:27:Tile.fir@1796.4]
  wire [4:0] cache__T_1907_addr; // @[datacache.py:27:Tile.fir@1796.4]
  wire [31:0] cache__T_1905_data; // @[datacache.py:27:Tile.fir@1796.4]
  wire [4:0] cache__T_1905_addr; // @[datacache.py:27:Tile.fir@1796.4]
  wire  cache__T_1905_mask; // @[datacache.py:27:Tile.fir@1796.4]
  wire  cache__T_1905_en; // @[datacache.py:27:Tile.fir@1796.4]
  wire [31:0] _T_1865; // @[datacache.py:28:Tile.fir@1797.4]
  wire [15:0] _T_1866; // @[datacache.py:32:Tile.fir@1798.4]
  wire [31:0] _T_1867; // @[datacache.py:32:Tile.fir@1799.4]
  wire [7:0] _T_1868; // @[datacache.py:33:Tile.fir@1800.4]
  wire [31:0] _T_1869; // @[datacache.py:33:Tile.fir@1801.4]
  wire  _T_1870; // @[mux.py:72:Tile.fir@1802.4]
  wire [31:0] _T_1871; // @[datacache.py:33:Tile.fir@1803.4]
  wire  _T_1872; // @[mux.py:72:Tile.fir@1804.4]
  wire [31:0] _T_1873; // @[datacache.py:33:Tile.fir@1805.4]
  wire  _T_1874; // @[mux.py:72:Tile.fir@1806.4]
  wire [31:0] _T_1875; // @[datacache.py:33:Tile.fir@1807.4]
  wire [2:0] _T_1876; // @[datacache.py:36:Tile.fir@1808.4]
  wire [15:0] _T_1880; // @[datacache.py:38:Tile.fir@1812.4]
  wire [15:0] _T_1882; // @[datacache.py:39:Tile.fir@1814.4]
  wire [15:0] _T_1883; // @[datacache.py:39:Tile.fir@1815.4]
  wire [31:0] _GEN_18; // @[datacache.py:39:Tile.fir@1816.4]
  wire [46:0] _T_1884; // @[datacache.py:39:Tile.fir@1816.4]
  wire [30:0] _GEN_19; // @[datacache.py:39:Tile.fir@1817.4]
  wire [46:0] _T_1885; // @[datacache.py:39:Tile.fir@1817.4]
  wire [46:0] _T_1886; // @[datacache.py:39:Tile.fir@1818.4]
  wire [7:0] _T_1888; // @[datacache.py:40:Tile.fir@1820.4]
  wire [7:0] _T_1890; // @[datacache.py:41:Tile.fir@1822.4]
  wire [7:0] _T_1891; // @[datacache.py:41:Tile.fir@1823.4]
  wire [31:0] _GEN_20; // @[datacache.py:41:Tile.fir@1824.4]
  wire [38:0] _T_1892; // @[datacache.py:41:Tile.fir@1824.4]
  wire [14:0] _GEN_21; // @[datacache.py:41:Tile.fir@1825.4]
  wire [38:0] _T_1893; // @[datacache.py:41:Tile.fir@1825.4]
  wire [38:0] _T_1894; // @[datacache.py:41:Tile.fir@1826.4]
  wire  _T_1895; // @[mux.py:72:Tile.fir@1827.4]
  wire [38:0] _T_1896; // @[datacache.py:41:Tile.fir@1828.4]
  wire  _T_1897; // @[mux.py:72:Tile.fir@1829.4]
  wire [38:0] _T_1898; // @[datacache.py:41:Tile.fir@1830.4]
  wire  _T_1899; // @[mux.py:72:Tile.fir@1831.4]
  wire [46:0] _T_1900; // @[datacache.py:41:Tile.fir@1832.4]
  wire  _T_1901; // @[mux.py:72:Tile.fir@1833.4]
  wire [46:0] _T_1902; // @[datacache.py:41:Tile.fir@1834.4]
  wire  _T_1903; // @[mux.py:72:Tile.fir@1835.4]
  wire [46:0] _T_1904; // @[datacache.py:41:Tile.fir@1836.4]
  wire [46:0] _T_1910; // @[datacache.py:45:Tile.fir@1843.4]
  assign cache__T_1877_addr = _T_1865[4:0];
  assign cache__T_1877_data = cache[cache__T_1877_addr]; // @[datacache.py:27:Tile.fir@1796.4]
  assign cache__T_1878_addr = _T_1865[4:0];
  assign cache__T_1878_data = cache[cache__T_1878_addr]; // @[datacache.py:27:Tile.fir@1796.4]
  assign cache__T_1879_addr = _T_1865[4:0];
  assign cache__T_1879_data = cache[cache__T_1879_addr]; // @[datacache.py:27:Tile.fir@1796.4]
  assign cache__T_1881_addr = _T_1865[4:0];
  assign cache__T_1881_data = cache[cache__T_1881_addr]; // @[datacache.py:27:Tile.fir@1796.4]
  assign cache__T_1887_addr = _T_1865[4:0];
  assign cache__T_1887_data = cache[cache__T_1887_addr]; // @[datacache.py:27:Tile.fir@1796.4]
  assign cache__T_1889_addr = _T_1865[4:0];
  assign cache__T_1889_data = cache[cache__T_1889_addr]; // @[datacache.py:27:Tile.fir@1796.4]
  assign cache__T_1907_addr = _T_1865[4:0];
  assign cache__T_1907_data = cache[cache__T_1907_addr]; // @[datacache.py:27:Tile.fir@1796.4]
  assign cache__T_1905_data = io_Mem_Write ? _T_1875 : cache__T_1907_data;
  assign cache__T_1905_addr = _T_1865[4:0];
  assign cache__T_1905_mask = 1'h1;
  assign cache__T_1905_en = 1'h1;
  assign _T_1865 = io_addr / 32'h4; // @[datacache.py:28:Tile.fir@1797.4]
  assign _T_1866 = io_write_data[15:0]; // @[datacache.py:32:Tile.fir@1798.4]
  assign _T_1867 = {16'h0,_T_1866}; // @[datacache.py:32:Tile.fir@1799.4]
  assign _T_1868 = io_write_data[7:0]; // @[datacache.py:33:Tile.fir@1800.4]
  assign _T_1869 = {24'h0,_T_1868}; // @[datacache.py:33:Tile.fir@1801.4]
  assign _T_1870 = io_Data_Size == 2'h2; // @[mux.py:72:Tile.fir@1802.4]
  assign _T_1871 = _T_1870 ? _T_1869 : io_write_data; // @[datacache.py:33:Tile.fir@1803.4]
  assign _T_1872 = io_Data_Size == 2'h1; // @[mux.py:72:Tile.fir@1804.4]
  assign _T_1873 = _T_1872 ? _T_1867 : _T_1871; // @[datacache.py:33:Tile.fir@1805.4]
  assign _T_1874 = io_Data_Size == 2'h0; // @[mux.py:72:Tile.fir@1806.4]
  assign _T_1875 = _T_1874 ? io_write_data : _T_1873; // @[datacache.py:33:Tile.fir@1807.4]
  assign _T_1876 = {io_Data_Size,io_Load_Type}; // @[datacache.py:36:Tile.fir@1808.4]
  assign _T_1880 = cache__T_1879_data[15:0]; // @[datacache.py:38:Tile.fir@1812.4]
  assign _T_1882 = cache__T_1881_data[15:0]; // @[datacache.py:39:Tile.fir@1814.4]
  assign _T_1883 = $signed(_T_1882); // @[datacache.py:39:Tile.fir@1815.4]
  assign _GEN_18 = {$signed(_T_1883), 16'h0}; // @[datacache.py:39:Tile.fir@1816.4]
  assign _T_1884 = {{15{_GEN_18[31]}},_GEN_18}; // @[datacache.py:39:Tile.fir@1816.4]
  assign _GEN_19 = _T_1884[46:16]; // @[datacache.py:39:Tile.fir@1817.4]
  assign _T_1885 = {{16{_GEN_19[30]}},_GEN_19}; // @[datacache.py:39:Tile.fir@1817.4]
  assign _T_1886 = $unsigned(_T_1885); // @[datacache.py:39:Tile.fir@1818.4]
  assign _T_1888 = cache__T_1887_data[7:0]; // @[datacache.py:40:Tile.fir@1820.4]
  assign _T_1890 = cache__T_1889_data[7:0]; // @[datacache.py:41:Tile.fir@1822.4]
  assign _T_1891 = $signed(_T_1890); // @[datacache.py:41:Tile.fir@1823.4]
  assign _GEN_20 = {$signed(_T_1891), 24'h0}; // @[datacache.py:41:Tile.fir@1824.4]
  assign _T_1892 = {{7{_GEN_20[31]}},_GEN_20}; // @[datacache.py:41:Tile.fir@1824.4]
  assign _GEN_21 = _T_1892[38:24]; // @[datacache.py:41:Tile.fir@1825.4]
  assign _T_1893 = {{24{_GEN_21[14]}},_GEN_21}; // @[datacache.py:41:Tile.fir@1825.4]
  assign _T_1894 = $unsigned(_T_1893); // @[datacache.py:41:Tile.fir@1826.4]
  assign _T_1895 = 3'h4 == _T_1876; // @[mux.py:72:Tile.fir@1827.4]
  assign _T_1896 = _T_1895 ? _T_1894 : {{7'd0}, cache__T_1877_data}; // @[datacache.py:41:Tile.fir@1828.4]
  assign _T_1897 = 3'h5 == _T_1876; // @[mux.py:72:Tile.fir@1829.4]
  assign _T_1898 = _T_1897 ? {{31'd0}, _T_1888} : _T_1896; // @[datacache.py:41:Tile.fir@1830.4]
  assign _T_1899 = 3'h2 == _T_1876; // @[mux.py:72:Tile.fir@1831.4]
  assign _T_1900 = _T_1899 ? _T_1886 : {{8'd0}, _T_1898}; // @[datacache.py:41:Tile.fir@1832.4]
  assign _T_1901 = 3'h3 == _T_1876; // @[mux.py:72:Tile.fir@1833.4]
  assign _T_1902 = _T_1901 ? {{31'd0}, _T_1880} : _T_1900; // @[datacache.py:41:Tile.fir@1834.4]
  assign _T_1903 = 3'h1 == _T_1876; // @[mux.py:72:Tile.fir@1835.4]
  assign _T_1904 = _T_1903 ? {{15'd0}, cache__T_1878_data} : _T_1902; // @[datacache.py:41:Tile.fir@1836.4]
  assign _T_1910 = io_Mem_Read ? _T_1904 : 47'h0; // @[datacache.py:45:Tile.fir@1843.4]
  assign io_data_out = _T_1910[31:0]; // @[datacache.py:45:Tile.fir@1844.4]
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
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    cache[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if(cache__T_1905_en & cache__T_1905_mask) begin
      cache[cache__T_1905_addr] <= cache__T_1905_data; // @[datacache.py:27:Tile.fir@1796.4]
    end
  end
endmodule
module EX_MEM_Register( // @[ex_mem_register.py:46:Tile.fir@1847.2]
  input         clock, // @[rawmodule.py:100:Tile.fir@1848.4]
  input         reset, // @[rawmodule.py:101:Tile.fir@1849.4]
  input  [31:0] io_ex_alu_sum, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  input  [31:0] io_ex_rs2_out, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  input  [4:0]  io_ex_rd, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  input  [31:0] io_ex_pc_4, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  input  [31:0] io_ex_imm, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  input  [31:0] io_ex_aui_pc, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  input  [31:0] io_ex_rs2, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  input         io_ex_Mem_Read, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  input         io_ex_Mem_Write, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  input  [1:0]  io_ex_Data_Size, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  input         io_ex_Load_Type, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  input         io_ex_Reg_Write, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  input  [2:0]  io_ex_Mem_to_Reg, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  output        io_mem_Mem_Read, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  output        io_mem_Mem_Write, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  output [1:0]  io_mem_Data_Size, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  output        io_mem_Load_Type, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  output        io_mem_Reg_Write, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  output [2:0]  io_mem_Mem_to_Reg, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  output [31:0] io_mem_alu_sum, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  output [31:0] io_mem_rs2_out, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  output [4:0]  io_mem_rd, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  output [31:0] io_mem_pc_4, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  output [31:0] io_mem_imm, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  output [31:0] io_mem_aui_pc, // @[ex_mem_register.py:11:Tile.fir@1850.4]
  output [31:0] io_mem_rs2 // @[ex_mem_register.py:11:Tile.fir@1850.4]
);
  reg [31:0] alu_sum; // @[ex_mem_register.py:49:Tile.fir@1852.4]
  reg [31:0] _RAND_0;
  reg [31:0] rs2_out; // @[ex_mem_register.py:50:Tile.fir@1853.4]
  reg [31:0] _RAND_1;
  reg [4:0] rd; // @[ex_mem_register.py:51:Tile.fir@1854.4]
  reg [31:0] _RAND_2;
  reg [31:0] pc_4; // @[ex_mem_register.py:52:Tile.fir@1855.4]
  reg [31:0] _RAND_3;
  reg [31:0] imm; // @[ex_mem_register.py:53:Tile.fir@1856.4]
  reg [31:0] _RAND_4;
  reg [31:0] aui_pc; // @[ex_mem_register.py:54:Tile.fir@1857.4]
  reg [31:0] _RAND_5;
  reg [4:0] rs2; // @[ex_mem_register.py:55:Tile.fir@1858.4]
  reg [31:0] _RAND_6;
  reg  mem_read; // @[ex_mem_register.py:57:Tile.fir@1859.4]
  reg [31:0] _RAND_7;
  reg  mem_write; // @[ex_mem_register.py:58:Tile.fir@1860.4]
  reg [31:0] _RAND_8;
  reg [1:0] data_size; // @[ex_mem_register.py:59:Tile.fir@1861.4]
  reg [31:0] _RAND_9;
  reg  load_type; // @[ex_mem_register.py:60:Tile.fir@1862.4]
  reg [31:0] _RAND_10;
  reg  reg_write; // @[ex_mem_register.py:61:Tile.fir@1863.4]
  reg [31:0] _RAND_11;
  reg [2:0] mem_to_reg; // @[ex_mem_register.py:62:Tile.fir@1864.4]
  reg [31:0] _RAND_12;
  assign io_mem_Mem_Read = mem_read; // @[ex_mem_register.py:85:Tile.fir@1885.4]
  assign io_mem_Mem_Write = mem_write; // @[ex_mem_register.py:86:Tile.fir@1886.4]
  assign io_mem_Data_Size = data_size; // @[ex_mem_register.py:87:Tile.fir@1887.4]
  assign io_mem_Load_Type = load_type; // @[ex_mem_register.py:88:Tile.fir@1888.4]
  assign io_mem_Reg_Write = reg_write; // @[ex_mem_register.py:89:Tile.fir@1889.4]
  assign io_mem_Mem_to_Reg = mem_to_reg; // @[ex_mem_register.py:90:Tile.fir@1890.4]
  assign io_mem_alu_sum = alu_sum; // @[ex_mem_register.py:78:Tile.fir@1878.4]
  assign io_mem_rs2_out = rs2_out; // @[ex_mem_register.py:79:Tile.fir@1879.4]
  assign io_mem_rd = rd; // @[ex_mem_register.py:80:Tile.fir@1880.4]
  assign io_mem_pc_4 = pc_4; // @[ex_mem_register.py:81:Tile.fir@1881.4]
  assign io_mem_imm = imm; // @[ex_mem_register.py:82:Tile.fir@1882.4]
  assign io_mem_aui_pc = aui_pc; // @[ex_mem_register.py:83:Tile.fir@1883.4]
  assign io_mem_rs2 = {{27'd0}, rs2}; // @[ex_mem_register.py:84:Tile.fir@1884.4]
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
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  alu_sum = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  rs2_out = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  rd = _RAND_2[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  pc_4 = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  imm = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  aui_pc = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  rs2 = _RAND_6[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  mem_read = _RAND_7[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  mem_write = _RAND_8[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  data_size = _RAND_9[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  load_type = _RAND_10[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  reg_write = _RAND_11[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  mem_to_reg = _RAND_12[2:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      alu_sum <= 32'h0;
    end else begin
      alu_sum <= io_ex_alu_sum;
    end
    if (reset) begin
      rs2_out <= 32'h0;
    end else begin
      rs2_out <= io_ex_rs2_out;
    end
    if (reset) begin
      rd <= 5'h0;
    end else begin
      rd <= io_ex_rd;
    end
    if (reset) begin
      pc_4 <= 32'h0;
    end else begin
      pc_4 <= io_ex_pc_4;
    end
    if (reset) begin
      imm <= 32'h0;
    end else begin
      imm <= io_ex_imm;
    end
    if (reset) begin
      aui_pc <= 32'h0;
    end else begin
      aui_pc <= io_ex_aui_pc;
    end
    if (reset) begin
      rs2 <= 5'h0;
    end else begin
      rs2 <= io_ex_rs2[4:0];
    end
    if (reset) begin
      mem_read <= 1'h0;
    end else begin
      mem_read <= io_ex_Mem_Read;
    end
    if (reset) begin
      mem_write <= 1'h0;
    end else begin
      mem_write <= io_ex_Mem_Write;
    end
    if (reset) begin
      data_size <= 2'h0;
    end else begin
      data_size <= io_ex_Data_Size;
    end
    if (reset) begin
      load_type <= 1'h0;
    end else begin
      load_type <= io_ex_Load_Type;
    end
    if (reset) begin
      reg_write <= 1'h0;
    end else begin
      reg_write <= io_ex_Reg_Write;
    end
    if (reset) begin
      mem_to_reg <= 3'h0;
    end else begin
      mem_to_reg <= io_ex_Mem_to_Reg;
    end
  end
endmodule
module Forward( // @[forward.py:28:Tile.fir@1893.2]
  input        io_ex_mem_Reg_Write, // @[forward.py:11:Tile.fir@1896.4]
  input  [4:0] io_ex_mem_rd, // @[forward.py:11:Tile.fir@1896.4]
  input        io_ex_mem_Mem_Write, // @[forward.py:11:Tile.fir@1896.4]
  input  [4:0] io_ex_mem_rs2, // @[forward.py:11:Tile.fir@1896.4]
  input        io_mem_wb_Reg_Write, // @[forward.py:11:Tile.fir@1896.4]
  input  [4:0] io_mem_wb_rd, // @[forward.py:11:Tile.fir@1896.4]
  input  [4:0] io_id_ex_rs1, // @[forward.py:11:Tile.fir@1896.4]
  input  [4:0] io_id_ex_rs2, // @[forward.py:11:Tile.fir@1896.4]
  output [1:0] io_Forward_A, // @[forward.py:11:Tile.fir@1896.4]
  output [1:0] io_Forward_B, // @[forward.py:11:Tile.fir@1896.4]
  output       io_MemWrite_Src // @[forward.py:11:Tile.fir@1896.4]
);
  wire  _T_1970; // @[forward.py:31:Tile.fir@1899.4]
  wire  _T_1971; // @[forward.py:31:Tile.fir@1900.4]
  wire  _T_1972; // @[forward.py:32:Tile.fir@1901.4]
  wire  _T_1973; // @[forward.py:32:Tile.fir@1902.4]
  wire  _T_1975; // @[forward.py:34:Tile.fir@1904.4]
  wire  _T_1976; // @[forward.py:34:Tile.fir@1905.4]
  wire  _T_1977; // @[forward.py:34:Tile.fir@1906.4]
  wire  _T_1978; // @[forward.py:34:Tile.fir@1907.4]
  wire  _T_1979; // @[forward.py:34:Tile.fir@1908.4]
  wire  _T_1980; // @[forward.py:34:Tile.fir@1909.4]
  wire  _T_1984; // @[forward.py:37:Tile.fir@1913.4]
  wire  _T_1985; // @[forward.py:37:Tile.fir@1914.4]
  wire  _T_1989; // @[forward.py:39:Tile.fir@1918.4]
  wire  _T_1990; // @[forward.py:39:Tile.fir@1919.4]
  wire  _T_1991; // @[forward.py:39:Tile.fir@1920.4]
  wire  _T_1992; // @[forward.py:39:Tile.fir@1921.4]
  wire  _T_1997; // @[forward.py:45:Tile.fir@1928.4]
  wire  _T_1998; // @[forward.py:46:Tile.fir@1929.4]
  assign _T_1970 = io_ex_mem_rd != 5'h0; // @[forward.py:31:Tile.fir@1899.4]
  assign _T_1971 = io_ex_mem_Reg_Write & _T_1970; // @[forward.py:31:Tile.fir@1900.4]
  assign _T_1972 = io_ex_mem_rd == io_id_ex_rs1; // @[forward.py:32:Tile.fir@1901.4]
  assign _T_1973 = _T_1971 & _T_1972; // @[forward.py:32:Tile.fir@1902.4]
  assign _T_1975 = io_mem_wb_rd != 5'h0; // @[forward.py:34:Tile.fir@1904.4]
  assign _T_1976 = io_mem_wb_Reg_Write & _T_1975; // @[forward.py:34:Tile.fir@1905.4]
  assign _T_1977 = ~ _T_1973; // @[forward.py:34:Tile.fir@1906.4]
  assign _T_1978 = _T_1976 & _T_1977; // @[forward.py:34:Tile.fir@1907.4]
  assign _T_1979 = io_mem_wb_rd == io_id_ex_rs1; // @[forward.py:34:Tile.fir@1908.4]
  assign _T_1980 = _T_1978 & _T_1979; // @[forward.py:34:Tile.fir@1909.4]
  assign _T_1984 = io_ex_mem_rd == io_id_ex_rs2; // @[forward.py:37:Tile.fir@1913.4]
  assign _T_1985 = _T_1971 & _T_1984; // @[forward.py:37:Tile.fir@1914.4]
  assign _T_1989 = ~ _T_1985; // @[forward.py:39:Tile.fir@1918.4]
  assign _T_1990 = _T_1976 & _T_1989; // @[forward.py:39:Tile.fir@1919.4]
  assign _T_1991 = io_mem_wb_rd == io_id_ex_rs2; // @[forward.py:39:Tile.fir@1920.4]
  assign _T_1992 = _T_1990 & _T_1991; // @[forward.py:39:Tile.fir@1921.4]
  assign _T_1997 = io_mem_wb_Reg_Write & io_ex_mem_Mem_Write; // @[forward.py:45:Tile.fir@1928.4]
  assign _T_1998 = io_ex_mem_rs2 == io_mem_wb_rd; // @[forward.py:46:Tile.fir@1929.4]
  assign io_Forward_A = {_T_1973,_T_1980}; // @[forward.py:41:Tile.fir@1923.4]
  assign io_Forward_B = {_T_1985,_T_1992}; // @[forward.py:42:Tile.fir@1925.4]
  assign io_MemWrite_Src = _T_1997 & _T_1998; // @[forward.py:48:Tile.fir@1932.4]
endmodule
module MEM_WB_Register( // @[mem_wb_register.py:35:Tile.fir@1935.2]
  input         clock, // @[rawmodule.py:100:Tile.fir@1936.4]
  input         reset, // @[rawmodule.py:101:Tile.fir@1937.4]
  input  [31:0] io_mem_dataout, // @[mem_wb_register.py:11:Tile.fir@1938.4]
  input  [31:0] io_mem_alu_sum, // @[mem_wb_register.py:11:Tile.fir@1938.4]
  input  [4:0]  io_mem_rd, // @[mem_wb_register.py:11:Tile.fir@1938.4]
  input  [31:0] io_mem_pc_4, // @[mem_wb_register.py:11:Tile.fir@1938.4]
  input  [31:0] io_mem_imm, // @[mem_wb_register.py:11:Tile.fir@1938.4]
  input  [31:0] io_mem_aui_pc, // @[mem_wb_register.py:11:Tile.fir@1938.4]
  input  [2:0]  io_mem_Mem_to_Reg, // @[mem_wb_register.py:11:Tile.fir@1938.4]
  input         io_mem_Reg_Write, // @[mem_wb_register.py:11:Tile.fir@1938.4]
  output [2:0]  io_wb_Mem_to_Reg, // @[mem_wb_register.py:11:Tile.fir@1938.4]
  output        io_wb_Reg_Write, // @[mem_wb_register.py:11:Tile.fir@1938.4]
  output [31:0] io_wb_dataout, // @[mem_wb_register.py:11:Tile.fir@1938.4]
  output [31:0] io_wb_alu_sum, // @[mem_wb_register.py:11:Tile.fir@1938.4]
  output [4:0]  io_wb_rd, // @[mem_wb_register.py:11:Tile.fir@1938.4]
  output [31:0] io_wb_pc_4, // @[mem_wb_register.py:11:Tile.fir@1938.4]
  output [31:0] io_wb_imm, // @[mem_wb_register.py:11:Tile.fir@1938.4]
  output [31:0] io_wb_aui_pc // @[mem_wb_register.py:11:Tile.fir@1938.4]
);
  reg [31:0] dataout; // @[mem_wb_register.py:38:Tile.fir@1940.4]
  reg [31:0] _RAND_0;
  reg [31:0] alu_sum; // @[mem_wb_register.py:39:Tile.fir@1941.4]
  reg [31:0] _RAND_1;
  reg [4:0] rd; // @[mem_wb_register.py:40:Tile.fir@1942.4]
  reg [31:0] _RAND_2;
  reg [31:0] pc_4; // @[mem_wb_register.py:41:Tile.fir@1943.4]
  reg [31:0] _RAND_3;
  reg [31:0] imm; // @[mem_wb_register.py:42:Tile.fir@1944.4]
  reg [31:0] _RAND_4;
  reg [31:0] aui_pc; // @[mem_wb_register.py:43:Tile.fir@1945.4]
  reg [31:0] _RAND_5;
  reg [2:0] mem_to_reg; // @[mem_wb_register.py:44:Tile.fir@1946.4]
  reg [31:0] _RAND_6;
  reg  reg_write; // @[mem_wb_register.py:45:Tile.fir@1947.4]
  reg [31:0] _RAND_7;
  assign io_wb_Mem_to_Reg = mem_to_reg; // @[mem_wb_register.py:56:Tile.fir@1956.4]
  assign io_wb_Reg_Write = reg_write; // @[mem_wb_register.py:57:Tile.fir@1957.4]
  assign io_wb_dataout = dataout; // @[mem_wb_register.py:58:Tile.fir@1958.4]
  assign io_wb_alu_sum = alu_sum; // @[mem_wb_register.py:59:Tile.fir@1959.4]
  assign io_wb_rd = rd; // @[mem_wb_register.py:60:Tile.fir@1960.4]
  assign io_wb_pc_4 = pc_4; // @[mem_wb_register.py:61:Tile.fir@1961.4]
  assign io_wb_imm = imm; // @[mem_wb_register.py:62:Tile.fir@1962.4]
  assign io_wb_aui_pc = aui_pc; // @[mem_wb_register.py:63:Tile.fir@1963.4]
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
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  dataout = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  alu_sum = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  rd = _RAND_2[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  pc_4 = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  imm = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  aui_pc = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  mem_to_reg = _RAND_6[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  reg_write = _RAND_7[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      dataout <= 32'h0;
    end else begin
      dataout <= io_mem_dataout;
    end
    if (reset) begin
      alu_sum <= 32'h0;
    end else begin
      alu_sum <= io_mem_alu_sum;
    end
    if (reset) begin
      rd <= 5'h0;
    end else begin
      rd <= io_mem_rd;
    end
    if (reset) begin
      pc_4 <= 32'h0;
    end else begin
      pc_4 <= io_mem_pc_4;
    end
    if (reset) begin
      imm <= 32'h0;
    end else begin
      imm <= io_mem_imm;
    end
    if (reset) begin
      aui_pc <= 32'h0;
    end else begin
      aui_pc <= io_mem_aui_pc;
    end
    if (reset) begin
      mem_to_reg <= 3'h0;
    end else begin
      mem_to_reg <= io_mem_Mem_to_Reg;
    end
    if (reset) begin
      reg_write <= 1'h0;
    end else begin
      reg_write <= io_mem_Reg_Write;
    end
  end
endmodule
module Tile( // @[tile.py:52:Tile.fir@1966.2]
  input         clock, // @[rawmodule.py:100:Tile.fir@1967.4]
  input         reset, // @[rawmodule.py:101:Tile.fir@1968.4]
  output [31:0] io_if_pc_out, // @[tile.py:26:Tile.fir@1969.4]
  output [31:0] io_if_next_pc, // @[tile.py:26:Tile.fir@1969.4]
  output [4:0]  io_id_rs1, // @[tile.py:26:Tile.fir@1969.4]
  output [4:0]  io_id_rs2, // @[tile.py:26:Tile.fir@1969.4]
  output [31:0] io_id_rs1_out, // @[tile.py:26:Tile.fir@1969.4]
  output [31:0] io_id_rs2_out, // @[tile.py:26:Tile.fir@1969.4]
  output [31:0] io_ex_rs1_out, // @[tile.py:26:Tile.fir@1969.4]
  output [31:0] io_ex_rs2_out, // @[tile.py:26:Tile.fir@1969.4]
  output [31:0] io_ex_alu_sum, // @[tile.py:26:Tile.fir@1969.4]
  output        io_ex_alu_conflag, // @[tile.py:26:Tile.fir@1969.4]
  output [4:0]  io_ex_rd, // @[tile.py:26:Tile.fir@1969.4]
  output [4:0]  io_mem_rd, // @[tile.py:26:Tile.fir@1969.4]
  output [31:0] io_mem_alu_sum, // @[tile.py:26:Tile.fir@1969.4]
  output [31:0] io_mem_writedata, // @[tile.py:26:Tile.fir@1969.4]
  output [31:0] io_mem_dataout, // @[tile.py:26:Tile.fir@1969.4]
  output [4:0]  io_wb_rd, // @[tile.py:26:Tile.fir@1969.4]
  output [31:0] io_wb_registerwrite, // @[tile.py:26:Tile.fir@1969.4]
  output [1:0]  io_Forward_A, // @[tile.py:26:Tile.fir@1969.4]
  output [1:0]  io_Forward_B, // @[tile.py:26:Tile.fir@1969.4]
  output        io_MemWrite_Src // @[tile.py:26:Tile.fir@1969.4]
);
  wire  pc_clock; // @[:Tile.fir@1971.4]
  wire  pc_reset; // @[:Tile.fir@1971.4]
  wire [31:0] pc_io_next_pc; // @[:Tile.fir@1971.4]
  wire  pc_io_PC_Write; // @[:Tile.fir@1971.4]
  wire [31:0] pc_io_pc_out; // @[:Tile.fir@1971.4]
  wire  instcache_clock; // @[:Tile.fir@1974.4]
  wire [31:0] instcache_io_addr; // @[:Tile.fir@1974.4]
  wire [31:0] instcache_io_inst; // @[:Tile.fir@1974.4]
  wire [31:0] datapath_io_if_io_if_pc; // @[:Tile.fir@1977.4]
  wire [1:0] datapath_io_if_io_PC_Sel; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_if_io_new_addr; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_if_io_pc_recover; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_if_io_if_new_pc; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_if_io_if_pc_4; // @[:Tile.fir@1977.4]
  wire  datapath_io_id_io_Bubble; // @[:Tile.fir@1977.4]
  wire  datapath_io_id_io_ctrl_in_Reg_Write; // @[:Tile.fir@1977.4]
  wire [2:0] datapath_io_id_io_ctrl_in_Imm_Sel; // @[:Tile.fir@1977.4]
  wire  datapath_io_id_io_ctrl_in_ALU_Src; // @[:Tile.fir@1977.4]
  wire [4:0] datapath_io_id_io_ctrl_in_ALUOp; // @[:Tile.fir@1977.4]
  wire  datapath_io_id_io_ctrl_in_Branch; // @[:Tile.fir@1977.4]
  wire  datapath_io_id_io_ctrl_in_Branch_Src; // @[:Tile.fir@1977.4]
  wire  datapath_io_id_io_ctrl_in_Mem_Read; // @[:Tile.fir@1977.4]
  wire  datapath_io_id_io_ctrl_in_Mem_Write; // @[:Tile.fir@1977.4]
  wire [1:0] datapath_io_id_io_ctrl_in_Data_Size; // @[:Tile.fir@1977.4]
  wire  datapath_io_id_io_ctrl_in_Load_Type; // @[:Tile.fir@1977.4]
  wire [2:0] datapath_io_id_io_ctrl_in_Mem_to_Reg; // @[:Tile.fir@1977.4]
  wire  datapath_io_id_io_ctrl_in_Jump_Type; // @[:Tile.fir@1977.4]
  wire  datapath_io_id_io_ctrl_out_Reg_Write; // @[:Tile.fir@1977.4]
  wire [2:0] datapath_io_id_io_ctrl_out_Imm_Sel; // @[:Tile.fir@1977.4]
  wire  datapath_io_id_io_ctrl_out_ALU_Src; // @[:Tile.fir@1977.4]
  wire [4:0] datapath_io_id_io_ctrl_out_ALUOp; // @[:Tile.fir@1977.4]
  wire  datapath_io_id_io_ctrl_out_Branch; // @[:Tile.fir@1977.4]
  wire  datapath_io_id_io_ctrl_out_Branch_Src; // @[:Tile.fir@1977.4]
  wire  datapath_io_id_io_ctrl_out_Mem_Read; // @[:Tile.fir@1977.4]
  wire  datapath_io_id_io_ctrl_out_Mem_Write; // @[:Tile.fir@1977.4]
  wire [1:0] datapath_io_id_io_ctrl_out_Data_Size; // @[:Tile.fir@1977.4]
  wire  datapath_io_id_io_ctrl_out_Load_Type; // @[:Tile.fir@1977.4]
  wire [2:0] datapath_io_id_io_ctrl_out_Mem_to_Reg; // @[:Tile.fir@1977.4]
  wire  datapath_io_id_io_ctrl_out_Jump_Type; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_ex_io_ex_rs1_out; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_ex_io_ex_rs2_out; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_ex_io_ex_imm; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_ex_io_ex_pc; // @[:Tile.fir@1977.4]
  wire  datapath_io_ex_io_ex_ALU_Src; // @[:Tile.fir@1977.4]
  wire  datapath_io_ex_io_ex_Branch; // @[:Tile.fir@1977.4]
  wire  datapath_io_ex_io_ex_alu_conflag; // @[:Tile.fir@1977.4]
  wire  datapath_io_ex_io_ex_Branch_Src; // @[:Tile.fir@1977.4]
  wire  datapath_io_ex_io_ex_Jump_Type; // @[:Tile.fir@1977.4]
  wire [2:0] datapath_io_ex_io_ex_Imm_Sel; // @[:Tile.fir@1977.4]
  wire [1:0] datapath_io_ex_io_Forward_A; // @[:Tile.fir@1977.4]
  wire [1:0] datapath_io_ex_io_Forward_B; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_ex_io_alu_a_src; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_ex_io_alu_b_src; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_ex_io_ex_aui_pc; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_ex_io_forward_rs2_out; // @[:Tile.fir@1977.4]
  wire  datapath_io_ex_io_PC_Src; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_ex_io_branch_addr; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_mem_io_mem_rs2_out; // @[:Tile.fir@1977.4]
  wire  datapath_io_mem_io_MemWrite_Src; // @[:Tile.fir@1977.4]
  wire [2:0] datapath_io_mem_io_mem_Mem_to_Reg; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_mem_io_mem_alu_sum; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_mem_io_mem_pc_4; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_mem_io_mem_imm; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_mem_io_mem_aui_pc; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_mem_io_mem_writedata; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_wb_io_wb_alu_sum; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_wb_io_wb_dataout; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_wb_io_wb_pc_4; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_wb_io_wb_imm; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_wb_io_wb_aui_pc; // @[:Tile.fir@1977.4]
  wire [2:0] datapath_io_wb_io_wb_Mem_to_Reg; // @[:Tile.fir@1977.4]
  wire [31:0] datapath_io_wb_io_wb_reg_writedata; // @[:Tile.fir@1977.4]
  wire  if_id_register_clock; // @[:Tile.fir@1980.4]
  wire  if_id_register_reset; // @[:Tile.fir@1980.4]
  wire [31:0] if_id_register_io_if_pc; // @[:Tile.fir@1980.4]
  wire [31:0] if_id_register_io_if_pc_4; // @[:Tile.fir@1980.4]
  wire [31:0] if_id_register_io_if_inst; // @[:Tile.fir@1980.4]
  wire [31:0] if_id_register_io_id_pc; // @[:Tile.fir@1980.4]
  wire [31:0] if_id_register_io_id_pc_4; // @[:Tile.fir@1980.4]
  wire [4:0] if_id_register_io_id_rs1; // @[:Tile.fir@1980.4]
  wire [4:0] if_id_register_io_id_rs2; // @[:Tile.fir@1980.4]
  wire [31:0] if_id_register_io_id_inst; // @[:Tile.fir@1980.4]
  wire  if_id_register_io_IF_ID_Write; // @[:Tile.fir@1980.4]
  wire  if_id_register_io_IF_ID_Flush; // @[:Tile.fir@1980.4]
  wire  regfile_clock; // @[:Tile.fir@1983.4]
  wire [4:0] regfile_io_rs1; // @[:Tile.fir@1983.4]
  wire [4:0] regfile_io_rs2; // @[:Tile.fir@1983.4]
  wire [4:0] regfile_io_rd; // @[:Tile.fir@1983.4]
  wire [31:0] regfile_io_wdata; // @[:Tile.fir@1983.4]
  wire [31:0] regfile_io_rs1_out; // @[:Tile.fir@1983.4]
  wire [31:0] regfile_io_rs2_out; // @[:Tile.fir@1983.4]
  wire  regfile_io_Reg_Write; // @[:Tile.fir@1983.4]
  wire [31:0] immgen_io_inst; // @[:Tile.fir@1986.4]
  wire [31:0] immgen_io_imm; // @[:Tile.fir@1986.4]
  wire [2:0] immgen_io_Imm_Sel; // @[:Tile.fir@1986.4]
  wire [31:0] control_io_inst; // @[:Tile.fir@1989.4]
  wire  control_io_ctrl_Reg_Write; // @[:Tile.fir@1989.4]
  wire [2:0] control_io_ctrl_Imm_Sel; // @[:Tile.fir@1989.4]
  wire  control_io_ctrl_ALU_Src; // @[:Tile.fir@1989.4]
  wire [4:0] control_io_ctrl_ALUOp; // @[:Tile.fir@1989.4]
  wire  control_io_ctrl_Branch; // @[:Tile.fir@1989.4]
  wire  control_io_ctrl_Branch_Src; // @[:Tile.fir@1989.4]
  wire  control_io_ctrl_Mem_Read; // @[:Tile.fir@1989.4]
  wire  control_io_ctrl_Mem_Write; // @[:Tile.fir@1989.4]
  wire [1:0] control_io_ctrl_Data_Size; // @[:Tile.fir@1989.4]
  wire  control_io_ctrl_Load_Type; // @[:Tile.fir@1989.4]
  wire [2:0] control_io_ctrl_Mem_to_Reg; // @[:Tile.fir@1989.4]
  wire  control_io_ctrl_Jump_Type; // @[:Tile.fir@1989.4]
  wire  id_ex_register_clock; // @[:Tile.fir@1992.4]
  wire  id_ex_register_reset; // @[:Tile.fir@1992.4]
  wire [31:0] id_ex_register_io_id_pc; // @[:Tile.fir@1992.4]
  wire [31:0] id_ex_register_io_id_pc_4; // @[:Tile.fir@1992.4]
  wire [31:0] id_ex_register_io_id_rs1_out; // @[:Tile.fir@1992.4]
  wire [31:0] id_ex_register_io_id_rs2_out; // @[:Tile.fir@1992.4]
  wire [31:0] id_ex_register_io_id_imm; // @[:Tile.fir@1992.4]
  wire [31:0] id_ex_register_io_id_inst; // @[:Tile.fir@1992.4]
  wire [4:0] id_ex_register_io_id_rs1; // @[:Tile.fir@1992.4]
  wire [4:0] id_ex_register_io_id_rs2; // @[:Tile.fir@1992.4]
  wire [31:0] id_ex_register_io_ex_pc; // @[:Tile.fir@1992.4]
  wire [31:0] id_ex_register_io_ex_pc_4; // @[:Tile.fir@1992.4]
  wire [31:0] id_ex_register_io_ex_rs1_out; // @[:Tile.fir@1992.4]
  wire [31:0] id_ex_register_io_ex_rs2_out; // @[:Tile.fir@1992.4]
  wire [4:0] id_ex_register_io_ex_rd; // @[:Tile.fir@1992.4]
  wire [31:0] id_ex_register_io_ex_imm; // @[:Tile.fir@1992.4]
  wire [4:0] id_ex_register_io_ex_rs1; // @[:Tile.fir@1992.4]
  wire [4:0] id_ex_register_io_ex_rs2; // @[:Tile.fir@1992.4]
  wire  id_ex_register_io_ID_EX_Flush; // @[:Tile.fir@1992.4]
  wire  id_ex_register_io_id_ctrl_in_Reg_Write; // @[:Tile.fir@1992.4]
  wire [2:0] id_ex_register_io_id_ctrl_in_Imm_Sel; // @[:Tile.fir@1992.4]
  wire  id_ex_register_io_id_ctrl_in_ALU_Src; // @[:Tile.fir@1992.4]
  wire [4:0] id_ex_register_io_id_ctrl_in_ALUOp; // @[:Tile.fir@1992.4]
  wire  id_ex_register_io_id_ctrl_in_Branch; // @[:Tile.fir@1992.4]
  wire  id_ex_register_io_id_ctrl_in_Branch_Src; // @[:Tile.fir@1992.4]
  wire  id_ex_register_io_id_ctrl_in_Mem_Read; // @[:Tile.fir@1992.4]
  wire  id_ex_register_io_id_ctrl_in_Mem_Write; // @[:Tile.fir@1992.4]
  wire [1:0] id_ex_register_io_id_ctrl_in_Data_Size; // @[:Tile.fir@1992.4]
  wire  id_ex_register_io_id_ctrl_in_Load_Type; // @[:Tile.fir@1992.4]
  wire [2:0] id_ex_register_io_id_ctrl_in_Mem_to_Reg; // @[:Tile.fir@1992.4]
  wire  id_ex_register_io_id_ctrl_in_Jump_Type; // @[:Tile.fir@1992.4]
  wire  id_ex_register_io_ex_ctrl_out_Reg_Write; // @[:Tile.fir@1992.4]
  wire [2:0] id_ex_register_io_ex_ctrl_out_Imm_Sel; // @[:Tile.fir@1992.4]
  wire  id_ex_register_io_ex_ctrl_out_ALU_Src; // @[:Tile.fir@1992.4]
  wire [4:0] id_ex_register_io_ex_ctrl_out_ALUOp; // @[:Tile.fir@1992.4]
  wire  id_ex_register_io_ex_ctrl_out_Branch; // @[:Tile.fir@1992.4]
  wire  id_ex_register_io_ex_ctrl_out_Branch_Src; // @[:Tile.fir@1992.4]
  wire  id_ex_register_io_ex_ctrl_out_Mem_Read; // @[:Tile.fir@1992.4]
  wire  id_ex_register_io_ex_ctrl_out_Mem_Write; // @[:Tile.fir@1992.4]
  wire [1:0] id_ex_register_io_ex_ctrl_out_Data_Size; // @[:Tile.fir@1992.4]
  wire  id_ex_register_io_ex_ctrl_out_Load_Type; // @[:Tile.fir@1992.4]
  wire [2:0] id_ex_register_io_ex_ctrl_out_Mem_to_Reg; // @[:Tile.fir@1992.4]
  wire  id_ex_register_io_ex_ctrl_out_Jump_Type; // @[:Tile.fir@1992.4]
  wire [4:0] hazard_detection_io_rs1; // @[:Tile.fir@1995.4]
  wire [4:0] hazard_detection_io_rs2; // @[:Tile.fir@1995.4]
  wire [4:0] hazard_detection_io_ex_rd; // @[:Tile.fir@1995.4]
  wire [2:0] hazard_detection_io_Imm_Sel; // @[:Tile.fir@1995.4]
  wire  hazard_detection_io_ex_Mem_Read; // @[:Tile.fir@1995.4]
  wire  hazard_detection_io_Bubble; // @[:Tile.fir@1995.4]
  wire  hazard_detection_io_IF_ID_Write; // @[:Tile.fir@1995.4]
  wire  hazard_detection_io_PC_Write; // @[:Tile.fir@1995.4]
  wire [31:0] alu_io_src_a; // @[:Tile.fir@1998.4]
  wire [31:0] alu_io_src_b; // @[:Tile.fir@1998.4]
  wire [4:0] alu_io_ALUOp; // @[:Tile.fir@1998.4]
  wire [31:0] alu_io_sum; // @[:Tile.fir@1998.4]
  wire  alu_io_conflag; // @[:Tile.fir@1998.4]
  wire  branch_predictor_clock; // @[:Tile.fir@2001.4]
  wire  branch_predictor_reset; // @[:Tile.fir@2001.4]
  wire [31:0] branch_predictor_io_inst; // @[:Tile.fir@2001.4]
  wire [31:0] branch_predictor_io_branch_addr; // @[:Tile.fir@2001.4]
  wire  branch_predictor_io_PC_Src; // @[:Tile.fir@2001.4]
  wire [31:0] branch_predictor_io_pc; // @[:Tile.fir@2001.4]
  wire  branch_predictor_io_ex_Branch; // @[:Tile.fir@2001.4]
  wire  branch_predictor_io_ex_Jump_Type; // @[:Tile.fir@2001.4]
  wire [1:0] branch_predictor_io_PC_Sel; // @[:Tile.fir@2001.4]
  wire [31:0] branch_predictor_io_new_addr; // @[:Tile.fir@2001.4]
  wire [31:0] branch_predictor_io_pc_recover; // @[:Tile.fir@2001.4]
  wire  branch_predictor_io_IF_ID_Flush; // @[:Tile.fir@2001.4]
  wire  branch_predictor_io_ID_EX_Flush; // @[:Tile.fir@2001.4]
  wire  datacache_clock; // @[:Tile.fir@2004.4]
  wire [31:0] datacache_io_addr; // @[:Tile.fir@2004.4]
  wire [31:0] datacache_io_write_data; // @[:Tile.fir@2004.4]
  wire  datacache_io_Mem_Read; // @[:Tile.fir@2004.4]
  wire  datacache_io_Mem_Write; // @[:Tile.fir@2004.4]
  wire [1:0] datacache_io_Data_Size; // @[:Tile.fir@2004.4]
  wire  datacache_io_Load_Type; // @[:Tile.fir@2004.4]
  wire [31:0] datacache_io_data_out; // @[:Tile.fir@2004.4]
  wire  ex_mem_register_clock; // @[:Tile.fir@2007.4]
  wire  ex_mem_register_reset; // @[:Tile.fir@2007.4]
  wire [31:0] ex_mem_register_io_ex_alu_sum; // @[:Tile.fir@2007.4]
  wire [31:0] ex_mem_register_io_ex_rs2_out; // @[:Tile.fir@2007.4]
  wire [4:0] ex_mem_register_io_ex_rd; // @[:Tile.fir@2007.4]
  wire [31:0] ex_mem_register_io_ex_pc_4; // @[:Tile.fir@2007.4]
  wire [31:0] ex_mem_register_io_ex_imm; // @[:Tile.fir@2007.4]
  wire [31:0] ex_mem_register_io_ex_aui_pc; // @[:Tile.fir@2007.4]
  wire [31:0] ex_mem_register_io_ex_rs2; // @[:Tile.fir@2007.4]
  wire  ex_mem_register_io_ex_Mem_Read; // @[:Tile.fir@2007.4]
  wire  ex_mem_register_io_ex_Mem_Write; // @[:Tile.fir@2007.4]
  wire [1:0] ex_mem_register_io_ex_Data_Size; // @[:Tile.fir@2007.4]
  wire  ex_mem_register_io_ex_Load_Type; // @[:Tile.fir@2007.4]
  wire  ex_mem_register_io_ex_Reg_Write; // @[:Tile.fir@2007.4]
  wire [2:0] ex_mem_register_io_ex_Mem_to_Reg; // @[:Tile.fir@2007.4]
  wire  ex_mem_register_io_mem_Mem_Read; // @[:Tile.fir@2007.4]
  wire  ex_mem_register_io_mem_Mem_Write; // @[:Tile.fir@2007.4]
  wire [1:0] ex_mem_register_io_mem_Data_Size; // @[:Tile.fir@2007.4]
  wire  ex_mem_register_io_mem_Load_Type; // @[:Tile.fir@2007.4]
  wire  ex_mem_register_io_mem_Reg_Write; // @[:Tile.fir@2007.4]
  wire [2:0] ex_mem_register_io_mem_Mem_to_Reg; // @[:Tile.fir@2007.4]
  wire [31:0] ex_mem_register_io_mem_alu_sum; // @[:Tile.fir@2007.4]
  wire [31:0] ex_mem_register_io_mem_rs2_out; // @[:Tile.fir@2007.4]
  wire [4:0] ex_mem_register_io_mem_rd; // @[:Tile.fir@2007.4]
  wire [31:0] ex_mem_register_io_mem_pc_4; // @[:Tile.fir@2007.4]
  wire [31:0] ex_mem_register_io_mem_imm; // @[:Tile.fir@2007.4]
  wire [31:0] ex_mem_register_io_mem_aui_pc; // @[:Tile.fir@2007.4]
  wire [31:0] ex_mem_register_io_mem_rs2; // @[:Tile.fir@2007.4]
  wire  forward_io_ex_mem_Reg_Write; // @[:Tile.fir@2010.4]
  wire [4:0] forward_io_ex_mem_rd; // @[:Tile.fir@2010.4]
  wire  forward_io_ex_mem_Mem_Write; // @[:Tile.fir@2010.4]
  wire [4:0] forward_io_ex_mem_rs2; // @[:Tile.fir@2010.4]
  wire  forward_io_mem_wb_Reg_Write; // @[:Tile.fir@2010.4]
  wire [4:0] forward_io_mem_wb_rd; // @[:Tile.fir@2010.4]
  wire [4:0] forward_io_id_ex_rs1; // @[:Tile.fir@2010.4]
  wire [4:0] forward_io_id_ex_rs2; // @[:Tile.fir@2010.4]
  wire [1:0] forward_io_Forward_A; // @[:Tile.fir@2010.4]
  wire [1:0] forward_io_Forward_B; // @[:Tile.fir@2010.4]
  wire  forward_io_MemWrite_Src; // @[:Tile.fir@2010.4]
  wire  mem_wb_register_clock; // @[:Tile.fir@2013.4]
  wire  mem_wb_register_reset; // @[:Tile.fir@2013.4]
  wire [31:0] mem_wb_register_io_mem_dataout; // @[:Tile.fir@2013.4]
  wire [31:0] mem_wb_register_io_mem_alu_sum; // @[:Tile.fir@2013.4]
  wire [4:0] mem_wb_register_io_mem_rd; // @[:Tile.fir@2013.4]
  wire [31:0] mem_wb_register_io_mem_pc_4; // @[:Tile.fir@2013.4]
  wire [31:0] mem_wb_register_io_mem_imm; // @[:Tile.fir@2013.4]
  wire [31:0] mem_wb_register_io_mem_aui_pc; // @[:Tile.fir@2013.4]
  wire [2:0] mem_wb_register_io_mem_Mem_to_Reg; // @[:Tile.fir@2013.4]
  wire  mem_wb_register_io_mem_Reg_Write; // @[:Tile.fir@2013.4]
  wire [2:0] mem_wb_register_io_wb_Mem_to_Reg; // @[:Tile.fir@2013.4]
  wire  mem_wb_register_io_wb_Reg_Write; // @[:Tile.fir@2013.4]
  wire [31:0] mem_wb_register_io_wb_dataout; // @[:Tile.fir@2013.4]
  wire [31:0] mem_wb_register_io_wb_alu_sum; // @[:Tile.fir@2013.4]
  wire [4:0] mem_wb_register_io_wb_rd; // @[:Tile.fir@2013.4]
  wire [31:0] mem_wb_register_io_wb_pc_4; // @[:Tile.fir@2013.4]
  wire [31:0] mem_wb_register_io_wb_imm; // @[:Tile.fir@2013.4]
  wire [31:0] mem_wb_register_io_wb_aui_pc; // @[:Tile.fir@2013.4]
  PC pc ( // @[:Tile.fir@1971.4]
    .clock(pc_clock),
    .reset(pc_reset),
    .io_next_pc(pc_io_next_pc),
    .io_PC_Write(pc_io_PC_Write),
    .io_pc_out(pc_io_pc_out)
  );
  InstCache instcache ( // @[:Tile.fir@1974.4]
    .clock(instcache_clock),
    .io_addr(instcache_io_addr),
    .io_inst(instcache_io_inst)
  );
  Datapath datapath ( // @[:Tile.fir@1977.4]
    .io_if_io_if_pc(datapath_io_if_io_if_pc),
    .io_if_io_PC_Sel(datapath_io_if_io_PC_Sel),
    .io_if_io_new_addr(datapath_io_if_io_new_addr),
    .io_if_io_pc_recover(datapath_io_if_io_pc_recover),
    .io_if_io_if_new_pc(datapath_io_if_io_if_new_pc),
    .io_if_io_if_pc_4(datapath_io_if_io_if_pc_4),
    .io_id_io_Bubble(datapath_io_id_io_Bubble),
    .io_id_io_ctrl_in_Reg_Write(datapath_io_id_io_ctrl_in_Reg_Write),
    .io_id_io_ctrl_in_Imm_Sel(datapath_io_id_io_ctrl_in_Imm_Sel),
    .io_id_io_ctrl_in_ALU_Src(datapath_io_id_io_ctrl_in_ALU_Src),
    .io_id_io_ctrl_in_ALUOp(datapath_io_id_io_ctrl_in_ALUOp),
    .io_id_io_ctrl_in_Branch(datapath_io_id_io_ctrl_in_Branch),
    .io_id_io_ctrl_in_Branch_Src(datapath_io_id_io_ctrl_in_Branch_Src),
    .io_id_io_ctrl_in_Mem_Read(datapath_io_id_io_ctrl_in_Mem_Read),
    .io_id_io_ctrl_in_Mem_Write(datapath_io_id_io_ctrl_in_Mem_Write),
    .io_id_io_ctrl_in_Data_Size(datapath_io_id_io_ctrl_in_Data_Size),
    .io_id_io_ctrl_in_Load_Type(datapath_io_id_io_ctrl_in_Load_Type),
    .io_id_io_ctrl_in_Mem_to_Reg(datapath_io_id_io_ctrl_in_Mem_to_Reg),
    .io_id_io_ctrl_in_Jump_Type(datapath_io_id_io_ctrl_in_Jump_Type),
    .io_id_io_ctrl_out_Reg_Write(datapath_io_id_io_ctrl_out_Reg_Write),
    .io_id_io_ctrl_out_Imm_Sel(datapath_io_id_io_ctrl_out_Imm_Sel),
    .io_id_io_ctrl_out_ALU_Src(datapath_io_id_io_ctrl_out_ALU_Src),
    .io_id_io_ctrl_out_ALUOp(datapath_io_id_io_ctrl_out_ALUOp),
    .io_id_io_ctrl_out_Branch(datapath_io_id_io_ctrl_out_Branch),
    .io_id_io_ctrl_out_Branch_Src(datapath_io_id_io_ctrl_out_Branch_Src),
    .io_id_io_ctrl_out_Mem_Read(datapath_io_id_io_ctrl_out_Mem_Read),
    .io_id_io_ctrl_out_Mem_Write(datapath_io_id_io_ctrl_out_Mem_Write),
    .io_id_io_ctrl_out_Data_Size(datapath_io_id_io_ctrl_out_Data_Size),
    .io_id_io_ctrl_out_Load_Type(datapath_io_id_io_ctrl_out_Load_Type),
    .io_id_io_ctrl_out_Mem_to_Reg(datapath_io_id_io_ctrl_out_Mem_to_Reg),
    .io_id_io_ctrl_out_Jump_Type(datapath_io_id_io_ctrl_out_Jump_Type),
    .io_ex_io_ex_rs1_out(datapath_io_ex_io_ex_rs1_out),
    .io_ex_io_ex_rs2_out(datapath_io_ex_io_ex_rs2_out),
    .io_ex_io_ex_imm(datapath_io_ex_io_ex_imm),
    .io_ex_io_ex_pc(datapath_io_ex_io_ex_pc),
    .io_ex_io_ex_ALU_Src(datapath_io_ex_io_ex_ALU_Src),
    .io_ex_io_ex_Branch(datapath_io_ex_io_ex_Branch),
    .io_ex_io_ex_alu_conflag(datapath_io_ex_io_ex_alu_conflag),
    .io_ex_io_ex_Branch_Src(datapath_io_ex_io_ex_Branch_Src),
    .io_ex_io_ex_Jump_Type(datapath_io_ex_io_ex_Jump_Type),
    .io_ex_io_ex_Imm_Sel(datapath_io_ex_io_ex_Imm_Sel),
    .io_ex_io_Forward_A(datapath_io_ex_io_Forward_A),
    .io_ex_io_Forward_B(datapath_io_ex_io_Forward_B),
    .io_ex_io_alu_a_src(datapath_io_ex_io_alu_a_src),
    .io_ex_io_alu_b_src(datapath_io_ex_io_alu_b_src),
    .io_ex_io_ex_aui_pc(datapath_io_ex_io_ex_aui_pc),
    .io_ex_io_forward_rs2_out(datapath_io_ex_io_forward_rs2_out),
    .io_ex_io_PC_Src(datapath_io_ex_io_PC_Src),
    .io_ex_io_branch_addr(datapath_io_ex_io_branch_addr),
    .io_mem_io_mem_rs2_out(datapath_io_mem_io_mem_rs2_out),
    .io_mem_io_MemWrite_Src(datapath_io_mem_io_MemWrite_Src),
    .io_mem_io_mem_Mem_to_Reg(datapath_io_mem_io_mem_Mem_to_Reg),
    .io_mem_io_mem_alu_sum(datapath_io_mem_io_mem_alu_sum),
    .io_mem_io_mem_pc_4(datapath_io_mem_io_mem_pc_4),
    .io_mem_io_mem_imm(datapath_io_mem_io_mem_imm),
    .io_mem_io_mem_aui_pc(datapath_io_mem_io_mem_aui_pc),
    .io_mem_io_mem_writedata(datapath_io_mem_io_mem_writedata),
    .io_wb_io_wb_alu_sum(datapath_io_wb_io_wb_alu_sum),
    .io_wb_io_wb_dataout(datapath_io_wb_io_wb_dataout),
    .io_wb_io_wb_pc_4(datapath_io_wb_io_wb_pc_4),
    .io_wb_io_wb_imm(datapath_io_wb_io_wb_imm),
    .io_wb_io_wb_aui_pc(datapath_io_wb_io_wb_aui_pc),
    .io_wb_io_wb_Mem_to_Reg(datapath_io_wb_io_wb_Mem_to_Reg),
    .io_wb_io_wb_reg_writedata(datapath_io_wb_io_wb_reg_writedata)
  );
  IF_ID_Register if_id_register ( // @[:Tile.fir@1980.4]
    .clock(if_id_register_clock),
    .reset(if_id_register_reset),
    .io_if_pc(if_id_register_io_if_pc),
    .io_if_pc_4(if_id_register_io_if_pc_4),
    .io_if_inst(if_id_register_io_if_inst),
    .io_id_pc(if_id_register_io_id_pc),
    .io_id_pc_4(if_id_register_io_id_pc_4),
    .io_id_rs1(if_id_register_io_id_rs1),
    .io_id_rs2(if_id_register_io_id_rs2),
    .io_id_inst(if_id_register_io_id_inst),
    .io_IF_ID_Write(if_id_register_io_IF_ID_Write),
    .io_IF_ID_Flush(if_id_register_io_IF_ID_Flush)
  );
  RegFile regfile ( // @[:Tile.fir@1983.4]
    .clock(regfile_clock),
    .io_rs1(regfile_io_rs1),
    .io_rs2(regfile_io_rs2),
    .io_rd(regfile_io_rd),
    .io_wdata(regfile_io_wdata),
    .io_rs1_out(regfile_io_rs1_out),
    .io_rs2_out(regfile_io_rs2_out),
    .io_Reg_Write(regfile_io_Reg_Write)
  );
  ImmGen immgen ( // @[:Tile.fir@1986.4]
    .io_inst(immgen_io_inst),
    .io_imm(immgen_io_imm),
    .io_Imm_Sel(immgen_io_Imm_Sel)
  );
  Control control ( // @[:Tile.fir@1989.4]
    .io_inst(control_io_inst),
    .io_ctrl_Reg_Write(control_io_ctrl_Reg_Write),
    .io_ctrl_Imm_Sel(control_io_ctrl_Imm_Sel),
    .io_ctrl_ALU_Src(control_io_ctrl_ALU_Src),
    .io_ctrl_ALUOp(control_io_ctrl_ALUOp),
    .io_ctrl_Branch(control_io_ctrl_Branch),
    .io_ctrl_Branch_Src(control_io_ctrl_Branch_Src),
    .io_ctrl_Mem_Read(control_io_ctrl_Mem_Read),
    .io_ctrl_Mem_Write(control_io_ctrl_Mem_Write),
    .io_ctrl_Data_Size(control_io_ctrl_Data_Size),
    .io_ctrl_Load_Type(control_io_ctrl_Load_Type),
    .io_ctrl_Mem_to_Reg(control_io_ctrl_Mem_to_Reg),
    .io_ctrl_Jump_Type(control_io_ctrl_Jump_Type)
  );
  ID_EX_Register id_ex_register ( // @[:Tile.fir@1992.4]
    .clock(id_ex_register_clock),
    .reset(id_ex_register_reset),
    .io_id_pc(id_ex_register_io_id_pc),
    .io_id_pc_4(id_ex_register_io_id_pc_4),
    .io_id_rs1_out(id_ex_register_io_id_rs1_out),
    .io_id_rs2_out(id_ex_register_io_id_rs2_out),
    .io_id_imm(id_ex_register_io_id_imm),
    .io_id_inst(id_ex_register_io_id_inst),
    .io_id_rs1(id_ex_register_io_id_rs1),
    .io_id_rs2(id_ex_register_io_id_rs2),
    .io_ex_pc(id_ex_register_io_ex_pc),
    .io_ex_pc_4(id_ex_register_io_ex_pc_4),
    .io_ex_rs1_out(id_ex_register_io_ex_rs1_out),
    .io_ex_rs2_out(id_ex_register_io_ex_rs2_out),
    .io_ex_rd(id_ex_register_io_ex_rd),
    .io_ex_imm(id_ex_register_io_ex_imm),
    .io_ex_rs1(id_ex_register_io_ex_rs1),
    .io_ex_rs2(id_ex_register_io_ex_rs2),
    .io_ID_EX_Flush(id_ex_register_io_ID_EX_Flush),
    .io_id_ctrl_in_Reg_Write(id_ex_register_io_id_ctrl_in_Reg_Write),
    .io_id_ctrl_in_Imm_Sel(id_ex_register_io_id_ctrl_in_Imm_Sel),
    .io_id_ctrl_in_ALU_Src(id_ex_register_io_id_ctrl_in_ALU_Src),
    .io_id_ctrl_in_ALUOp(id_ex_register_io_id_ctrl_in_ALUOp),
    .io_id_ctrl_in_Branch(id_ex_register_io_id_ctrl_in_Branch),
    .io_id_ctrl_in_Branch_Src(id_ex_register_io_id_ctrl_in_Branch_Src),
    .io_id_ctrl_in_Mem_Read(id_ex_register_io_id_ctrl_in_Mem_Read),
    .io_id_ctrl_in_Mem_Write(id_ex_register_io_id_ctrl_in_Mem_Write),
    .io_id_ctrl_in_Data_Size(id_ex_register_io_id_ctrl_in_Data_Size),
    .io_id_ctrl_in_Load_Type(id_ex_register_io_id_ctrl_in_Load_Type),
    .io_id_ctrl_in_Mem_to_Reg(id_ex_register_io_id_ctrl_in_Mem_to_Reg),
    .io_id_ctrl_in_Jump_Type(id_ex_register_io_id_ctrl_in_Jump_Type),
    .io_ex_ctrl_out_Reg_Write(id_ex_register_io_ex_ctrl_out_Reg_Write),
    .io_ex_ctrl_out_Imm_Sel(id_ex_register_io_ex_ctrl_out_Imm_Sel),
    .io_ex_ctrl_out_ALU_Src(id_ex_register_io_ex_ctrl_out_ALU_Src),
    .io_ex_ctrl_out_ALUOp(id_ex_register_io_ex_ctrl_out_ALUOp),
    .io_ex_ctrl_out_Branch(id_ex_register_io_ex_ctrl_out_Branch),
    .io_ex_ctrl_out_Branch_Src(id_ex_register_io_ex_ctrl_out_Branch_Src),
    .io_ex_ctrl_out_Mem_Read(id_ex_register_io_ex_ctrl_out_Mem_Read),
    .io_ex_ctrl_out_Mem_Write(id_ex_register_io_ex_ctrl_out_Mem_Write),
    .io_ex_ctrl_out_Data_Size(id_ex_register_io_ex_ctrl_out_Data_Size),
    .io_ex_ctrl_out_Load_Type(id_ex_register_io_ex_ctrl_out_Load_Type),
    .io_ex_ctrl_out_Mem_to_Reg(id_ex_register_io_ex_ctrl_out_Mem_to_Reg),
    .io_ex_ctrl_out_Jump_Type(id_ex_register_io_ex_ctrl_out_Jump_Type)
  );
  Hazard_Detection hazard_detection ( // @[:Tile.fir@1995.4]
    .io_rs1(hazard_detection_io_rs1),
    .io_rs2(hazard_detection_io_rs2),
    .io_ex_rd(hazard_detection_io_ex_rd),
    .io_Imm_Sel(hazard_detection_io_Imm_Sel),
    .io_ex_Mem_Read(hazard_detection_io_ex_Mem_Read),
    .io_Bubble(hazard_detection_io_Bubble),
    .io_IF_ID_Write(hazard_detection_io_IF_ID_Write),
    .io_PC_Write(hazard_detection_io_PC_Write)
  );
  ALU alu ( // @[:Tile.fir@1998.4]
    .io_src_a(alu_io_src_a),
    .io_src_b(alu_io_src_b),
    .io_ALUOp(alu_io_ALUOp),
    .io_sum(alu_io_sum),
    .io_conflag(alu_io_conflag)
  );
  Branch_Predictor branch_predictor ( // @[:Tile.fir@2001.4]
    .clock(branch_predictor_clock),
    .reset(branch_predictor_reset),
    .io_inst(branch_predictor_io_inst),
    .io_branch_addr(branch_predictor_io_branch_addr),
    .io_PC_Src(branch_predictor_io_PC_Src),
    .io_pc(branch_predictor_io_pc),
    .io_ex_Branch(branch_predictor_io_ex_Branch),
    .io_ex_Jump_Type(branch_predictor_io_ex_Jump_Type),
    .io_PC_Sel(branch_predictor_io_PC_Sel),
    .io_new_addr(branch_predictor_io_new_addr),
    .io_pc_recover(branch_predictor_io_pc_recover),
    .io_IF_ID_Flush(branch_predictor_io_IF_ID_Flush),
    .io_ID_EX_Flush(branch_predictor_io_ID_EX_Flush)
  );
  DataCache datacache ( // @[:Tile.fir@2004.4]
    .clock(datacache_clock),
    .io_addr(datacache_io_addr),
    .io_write_data(datacache_io_write_data),
    .io_Mem_Read(datacache_io_Mem_Read),
    .io_Mem_Write(datacache_io_Mem_Write),
    .io_Data_Size(datacache_io_Data_Size),
    .io_Load_Type(datacache_io_Load_Type),
    .io_data_out(datacache_io_data_out)
  );
  EX_MEM_Register ex_mem_register ( // @[:Tile.fir@2007.4]
    .clock(ex_mem_register_clock),
    .reset(ex_mem_register_reset),
    .io_ex_alu_sum(ex_mem_register_io_ex_alu_sum),
    .io_ex_rs2_out(ex_mem_register_io_ex_rs2_out),
    .io_ex_rd(ex_mem_register_io_ex_rd),
    .io_ex_pc_4(ex_mem_register_io_ex_pc_4),
    .io_ex_imm(ex_mem_register_io_ex_imm),
    .io_ex_aui_pc(ex_mem_register_io_ex_aui_pc),
    .io_ex_rs2(ex_mem_register_io_ex_rs2),
    .io_ex_Mem_Read(ex_mem_register_io_ex_Mem_Read),
    .io_ex_Mem_Write(ex_mem_register_io_ex_Mem_Write),
    .io_ex_Data_Size(ex_mem_register_io_ex_Data_Size),
    .io_ex_Load_Type(ex_mem_register_io_ex_Load_Type),
    .io_ex_Reg_Write(ex_mem_register_io_ex_Reg_Write),
    .io_ex_Mem_to_Reg(ex_mem_register_io_ex_Mem_to_Reg),
    .io_mem_Mem_Read(ex_mem_register_io_mem_Mem_Read),
    .io_mem_Mem_Write(ex_mem_register_io_mem_Mem_Write),
    .io_mem_Data_Size(ex_mem_register_io_mem_Data_Size),
    .io_mem_Load_Type(ex_mem_register_io_mem_Load_Type),
    .io_mem_Reg_Write(ex_mem_register_io_mem_Reg_Write),
    .io_mem_Mem_to_Reg(ex_mem_register_io_mem_Mem_to_Reg),
    .io_mem_alu_sum(ex_mem_register_io_mem_alu_sum),
    .io_mem_rs2_out(ex_mem_register_io_mem_rs2_out),
    .io_mem_rd(ex_mem_register_io_mem_rd),
    .io_mem_pc_4(ex_mem_register_io_mem_pc_4),
    .io_mem_imm(ex_mem_register_io_mem_imm),
    .io_mem_aui_pc(ex_mem_register_io_mem_aui_pc),
    .io_mem_rs2(ex_mem_register_io_mem_rs2)
  );
  Forward forward ( // @[:Tile.fir@2010.4]
    .io_ex_mem_Reg_Write(forward_io_ex_mem_Reg_Write),
    .io_ex_mem_rd(forward_io_ex_mem_rd),
    .io_ex_mem_Mem_Write(forward_io_ex_mem_Mem_Write),
    .io_ex_mem_rs2(forward_io_ex_mem_rs2),
    .io_mem_wb_Reg_Write(forward_io_mem_wb_Reg_Write),
    .io_mem_wb_rd(forward_io_mem_wb_rd),
    .io_id_ex_rs1(forward_io_id_ex_rs1),
    .io_id_ex_rs2(forward_io_id_ex_rs2),
    .io_Forward_A(forward_io_Forward_A),
    .io_Forward_B(forward_io_Forward_B),
    .io_MemWrite_Src(forward_io_MemWrite_Src)
  );
  MEM_WB_Register mem_wb_register ( // @[:Tile.fir@2013.4]
    .clock(mem_wb_register_clock),
    .reset(mem_wb_register_reset),
    .io_mem_dataout(mem_wb_register_io_mem_dataout),
    .io_mem_alu_sum(mem_wb_register_io_mem_alu_sum),
    .io_mem_rd(mem_wb_register_io_mem_rd),
    .io_mem_pc_4(mem_wb_register_io_mem_pc_4),
    .io_mem_imm(mem_wb_register_io_mem_imm),
    .io_mem_aui_pc(mem_wb_register_io_mem_aui_pc),
    .io_mem_Mem_to_Reg(mem_wb_register_io_mem_Mem_to_Reg),
    .io_mem_Reg_Write(mem_wb_register_io_mem_Reg_Write),
    .io_wb_Mem_to_Reg(mem_wb_register_io_wb_Mem_to_Reg),
    .io_wb_Reg_Write(mem_wb_register_io_wb_Reg_Write),
    .io_wb_dataout(mem_wb_register_io_wb_dataout),
    .io_wb_alu_sum(mem_wb_register_io_wb_alu_sum),
    .io_wb_rd(mem_wb_register_io_wb_rd),
    .io_wb_pc_4(mem_wb_register_io_wb_pc_4),
    .io_wb_imm(mem_wb_register_io_wb_imm),
    .io_wb_aui_pc(mem_wb_register_io_wb_aui_pc)
  );
  assign io_if_pc_out = pc_io_pc_out; // @[tile.py:94:Tile.fir@2024.4]
  assign io_if_next_pc = datapath_io_if_io_if_new_pc; // @[tile.py:95:Tile.fir@2025.4]
  assign io_id_rs1 = if_id_register_io_id_rs1; // @[tile.py:166:Tile.fir@2078.4]
  assign io_id_rs2 = if_id_register_io_id_rs2; // @[tile.py:167:Tile.fir@2079.4]
  assign io_id_rs1_out = regfile_io_rs1_out; // @[tile.py:168:Tile.fir@2080.4]
  assign io_id_rs2_out = regfile_io_rs2_out; // @[tile.py:169:Tile.fir@2081.4]
  assign io_ex_rs1_out = id_ex_register_io_ex_rs1_out; // @[tile.py:205:Tile.fir@2102.4]
  assign io_ex_rs2_out = id_ex_register_io_ex_rs2_out; // @[tile.py:206:Tile.fir@2103.4]
  assign io_ex_alu_sum = alu_io_sum; // @[tile.py:207:Tile.fir@2104.4]
  assign io_ex_alu_conflag = alu_io_conflag; // @[tile.py:208:Tile.fir@2105.4]
  assign io_ex_rd = id_ex_register_io_ex_rd; // @[tile.py:209:Tile.fir@2106.4]
  assign io_mem_rd = ex_mem_register_io_mem_rd; // @[tile.py:246:Tile.fir@2128.4]
  assign io_mem_alu_sum = ex_mem_register_io_mem_alu_sum; // @[tile.py:247:Tile.fir@2129.4]
  assign io_mem_writedata = datapath_io_mem_io_mem_writedata; // @[tile.py:248:Tile.fir@2130.4]
  assign io_mem_dataout = datacache_io_data_out; // @[tile.py:249:Tile.fir@2131.4]
  assign io_wb_rd = mem_wb_register_io_wb_rd; // @[tile.py:275:Tile.fir@2146.4]
  assign io_wb_registerwrite = datapath_io_wb_io_wb_reg_writedata; // @[tile.py:276:Tile.fir@2147.4]
  assign io_Forward_A = forward_io_Forward_A; // @[tile.py:302:Tile.fir@2162.4]
  assign io_Forward_B = forward_io_Forward_B; // @[tile.py:303:Tile.fir@2163.4]
  assign io_MemWrite_Src = forward_io_MemWrite_Src; // @[tile.py:304:Tile.fir@2164.4]
  assign pc_clock = clock; // @[rawmodule.py:110:Tile.fir@1972.4]
  assign pc_reset = reset; // @[rawmodule.py:110:Tile.fir@1973.4]
  assign pc_io_next_pc = datapath_io_if_io_if_new_pc; // @[tile.py:85:Tile.fir@2020.4]
  assign pc_io_PC_Write = hazard_detection_io_PC_Write; // @[tile.py:86:Tile.fir@2022.4]
  assign instcache_clock = clock; // @[rawmodule.py:110:Tile.fir@1975.4]
  assign instcache_io_addr = pc_io_pc_out; // @[tile.py:91:Tile.fir@2023.4]
  assign datapath_io_if_io_if_pc = pc_io_pc_out; // @[tile.py:77:Tile.fir@2016.4]
  assign datapath_io_if_io_PC_Sel = branch_predictor_io_PC_Sel; // @[tile.py:79:Tile.fir@2018.4]
  assign datapath_io_if_io_new_addr = branch_predictor_io_new_addr; // @[tile.py:78:Tile.fir@2017.4]
  assign datapath_io_if_io_pc_recover = branch_predictor_io_pc_recover; // @[tile.py:80:Tile.fir@2019.4]
  assign datapath_io_id_io_Bubble = hazard_detection_io_Bubble; // @[tile.py:145:Tile.fir@2056.4]
  assign datapath_io_id_io_ctrl_in_Reg_Write = control_io_ctrl_Reg_Write; // @[tile.py:144:Tile.fir@2044.4]
  assign datapath_io_id_io_ctrl_in_Imm_Sel = control_io_ctrl_Imm_Sel; // @[tile.py:144:Tile.fir@2045.4]
  assign datapath_io_id_io_ctrl_in_ALU_Src = control_io_ctrl_ALU_Src; // @[tile.py:144:Tile.fir@2046.4]
  assign datapath_io_id_io_ctrl_in_ALUOp = control_io_ctrl_ALUOp; // @[tile.py:144:Tile.fir@2047.4]
  assign datapath_io_id_io_ctrl_in_Branch = control_io_ctrl_Branch; // @[tile.py:144:Tile.fir@2048.4]
  assign datapath_io_id_io_ctrl_in_Branch_Src = control_io_ctrl_Branch_Src; // @[tile.py:144:Tile.fir@2049.4]
  assign datapath_io_id_io_ctrl_in_Mem_Read = control_io_ctrl_Mem_Read; // @[tile.py:144:Tile.fir@2050.4]
  assign datapath_io_id_io_ctrl_in_Mem_Write = control_io_ctrl_Mem_Write; // @[tile.py:144:Tile.fir@2051.4]
  assign datapath_io_id_io_ctrl_in_Data_Size = control_io_ctrl_Data_Size; // @[tile.py:144:Tile.fir@2052.4]
  assign datapath_io_id_io_ctrl_in_Load_Type = control_io_ctrl_Load_Type; // @[tile.py:144:Tile.fir@2053.4]
  assign datapath_io_id_io_ctrl_in_Mem_to_Reg = control_io_ctrl_Mem_to_Reg; // @[tile.py:144:Tile.fir@2054.4]
  assign datapath_io_id_io_ctrl_in_Jump_Type = control_io_ctrl_Jump_Type; // @[tile.py:144:Tile.fir@2055.4]
  assign datapath_io_ex_io_ex_rs1_out = id_ex_register_io_ex_rs1_out; // @[tile.py:177:Tile.fir@2084.4]
  assign datapath_io_ex_io_ex_rs2_out = id_ex_register_io_ex_rs2_out; // @[tile.py:194:Tile.fir@2097.4]
  assign datapath_io_ex_io_ex_imm = id_ex_register_io_ex_imm; // @[tile.py:176:Tile.fir@2083.4]
  assign datapath_io_ex_io_ex_pc = id_ex_register_io_ex_pc; // @[tile.py:175:Tile.fir@2082.4]
  assign datapath_io_ex_io_ex_ALU_Src = id_ex_register_io_ex_ctrl_out_ALU_Src; // @[tile.py:195:Tile.fir@2098.4]
  assign datapath_io_ex_io_ex_Branch = id_ex_register_io_ex_ctrl_out_Branch; // @[tile.py:180:Tile.fir@2086.4]
  assign datapath_io_ex_io_ex_alu_conflag = alu_io_conflag; // @[tile.py:181:Tile.fir@2087.4]
  assign datapath_io_ex_io_ex_Branch_Src = id_ex_register_io_ex_ctrl_out_Branch_Src; // @[tile.py:178:Tile.fir@2085.4]
  assign datapath_io_ex_io_ex_Jump_Type = id_ex_register_io_ex_ctrl_out_Jump_Type; // @[tile.py:182:Tile.fir@2088.4]
  assign datapath_io_ex_io_ex_Imm_Sel = id_ex_register_io_ex_ctrl_out_Imm_Sel; // @[tile.py:183:Tile.fir@2089.4]
  assign datapath_io_ex_io_Forward_A = forward_io_Forward_A; // @[tile.py:191:Tile.fir@2095.4]
  assign datapath_io_ex_io_Forward_B = forward_io_Forward_B; // @[tile.py:192:Tile.fir@2096.4]
  assign datapath_io_mem_io_mem_rs2_out = ex_mem_register_io_mem_rs2_out; // @[tile.py:232:Tile.fir@2120.4]
  assign datapath_io_mem_io_MemWrite_Src = forward_io_MemWrite_Src; // @[tile.py:233:Tile.fir@2121.4]
  assign datapath_io_mem_io_mem_Mem_to_Reg = ex_mem_register_io_mem_Mem_to_Reg; // @[tile.py:189:Tile.fir@2094.4]
  assign datapath_io_mem_io_mem_alu_sum = ex_mem_register_io_mem_alu_sum; // @[tile.py:185:Tile.fir@2090.4]
  assign datapath_io_mem_io_mem_pc_4 = ex_mem_register_io_mem_pc_4; // @[tile.py:186:Tile.fir@2091.4]
  assign datapath_io_mem_io_mem_imm = ex_mem_register_io_mem_imm; // @[tile.py:187:Tile.fir@2092.4]
  assign datapath_io_mem_io_mem_aui_pc = ex_mem_register_io_mem_aui_pc; // @[tile.py:188:Tile.fir@2093.4]
  assign datapath_io_wb_io_wb_alu_sum = mem_wb_register_io_wb_alu_sum; // @[tile.py:267:Tile.fir@2140.4]
  assign datapath_io_wb_io_wb_dataout = mem_wb_register_io_wb_dataout; // @[tile.py:268:Tile.fir@2141.4]
  assign datapath_io_wb_io_wb_pc_4 = mem_wb_register_io_wb_pc_4; // @[tile.py:269:Tile.fir@2142.4]
  assign datapath_io_wb_io_wb_imm = mem_wb_register_io_wb_imm; // @[tile.py:270:Tile.fir@2143.4]
  assign datapath_io_wb_io_wb_aui_pc = mem_wb_register_io_wb_aui_pc; // @[tile.py:271:Tile.fir@2144.4]
  assign datapath_io_wb_io_wb_Mem_to_Reg = mem_wb_register_io_wb_Mem_to_Reg; // @[tile.py:272:Tile.fir@2145.4]
  assign if_id_register_clock = clock; // @[rawmodule.py:110:Tile.fir@1981.4]
  assign if_id_register_reset = reset; // @[rawmodule.py:110:Tile.fir@1982.4]
  assign if_id_register_io_if_pc = pc_io_pc_out; // @[tile.py:101:Tile.fir@2026.4]
  assign if_id_register_io_if_pc_4 = datapath_io_if_io_if_pc_4; // @[tile.py:102:Tile.fir@2027.4]
  assign if_id_register_io_if_inst = instcache_io_inst; // @[tile.py:103:Tile.fir@2028.4]
  assign if_id_register_io_IF_ID_Write = hazard_detection_io_IF_ID_Write; // @[tile.py:105:Tile.fir@2030.4]
  assign if_id_register_io_IF_ID_Flush = branch_predictor_io_IF_ID_Flush; // @[tile.py:104:Tile.fir@2029.4]
  assign regfile_clock = clock; // @[rawmodule.py:110:Tile.fir@1984.4]
  assign regfile_io_rs1 = if_id_register_io_id_rs1; // @[tile.py:110:Tile.fir@2031.4]
  assign regfile_io_rs2 = if_id_register_io_id_rs2; // @[tile.py:111:Tile.fir@2032.4]
  assign regfile_io_rd = mem_wb_register_io_wb_rd; // @[tile.py:112:Tile.fir@2033.4]
  assign regfile_io_wdata = datapath_io_wb_io_wb_reg_writedata; // @[tile.py:113:Tile.fir@2034.4]
  assign regfile_io_Reg_Write = mem_wb_register_io_wb_Reg_Write; // @[tile.py:114:Tile.fir@2035.4]
  assign immgen_io_inst = if_id_register_io_id_inst; // @[tile.py:119:Tile.fir@2036.4]
  assign immgen_io_Imm_Sel = control_io_ctrl_Imm_Sel; // @[tile.py:120:Tile.fir@2037.4]
  assign control_io_inst = if_id_register_io_id_inst; // @[tile.py:125:Tile.fir@2038.4]
  assign id_ex_register_clock = clock; // @[rawmodule.py:110:Tile.fir@1993.4]
  assign id_ex_register_reset = reset; // @[rawmodule.py:110:Tile.fir@1994.4]
  assign id_ex_register_io_id_pc = if_id_register_io_id_pc; // @[tile.py:150:Tile.fir@2057.4]
  assign id_ex_register_io_id_pc_4 = if_id_register_io_id_pc_4; // @[tile.py:151:Tile.fir@2058.4]
  assign id_ex_register_io_id_rs1_out = regfile_io_rs1_out; // @[tile.py:152:Tile.fir@2059.4]
  assign id_ex_register_io_id_rs2_out = regfile_io_rs2_out; // @[tile.py:153:Tile.fir@2060.4]
  assign id_ex_register_io_id_imm = immgen_io_imm; // @[tile.py:154:Tile.fir@2061.4]
  assign id_ex_register_io_id_inst = if_id_register_io_id_inst; // @[tile.py:155:Tile.fir@2062.4]
  assign id_ex_register_io_id_rs1 = if_id_register_io_id_rs1; // @[tile.py:156:Tile.fir@2063.4]
  assign id_ex_register_io_id_rs2 = if_id_register_io_id_rs2; // @[tile.py:157:Tile.fir@2064.4]
  assign id_ex_register_io_ID_EX_Flush = branch_predictor_io_ID_EX_Flush; // @[tile.py:158:Tile.fir@2065.4]
  assign id_ex_register_io_id_ctrl_in_Reg_Write = datapath_io_id_io_ctrl_out_Reg_Write; // @[tile.py:163:Tile.fir@2066.4]
  assign id_ex_register_io_id_ctrl_in_Imm_Sel = datapath_io_id_io_ctrl_out_Imm_Sel; // @[tile.py:163:Tile.fir@2067.4]
  assign id_ex_register_io_id_ctrl_in_ALU_Src = datapath_io_id_io_ctrl_out_ALU_Src; // @[tile.py:163:Tile.fir@2068.4]
  assign id_ex_register_io_id_ctrl_in_ALUOp = datapath_io_id_io_ctrl_out_ALUOp; // @[tile.py:163:Tile.fir@2069.4]
  assign id_ex_register_io_id_ctrl_in_Branch = datapath_io_id_io_ctrl_out_Branch; // @[tile.py:163:Tile.fir@2070.4]
  assign id_ex_register_io_id_ctrl_in_Branch_Src = datapath_io_id_io_ctrl_out_Branch_Src; // @[tile.py:163:Tile.fir@2071.4]
  assign id_ex_register_io_id_ctrl_in_Mem_Read = datapath_io_id_io_ctrl_out_Mem_Read; // @[tile.py:163:Tile.fir@2072.4]
  assign id_ex_register_io_id_ctrl_in_Mem_Write = datapath_io_id_io_ctrl_out_Mem_Write; // @[tile.py:163:Tile.fir@2073.4]
  assign id_ex_register_io_id_ctrl_in_Data_Size = datapath_io_id_io_ctrl_out_Data_Size; // @[tile.py:163:Tile.fir@2074.4]
  assign id_ex_register_io_id_ctrl_in_Load_Type = datapath_io_id_io_ctrl_out_Load_Type; // @[tile.py:163:Tile.fir@2075.4]
  assign id_ex_register_io_id_ctrl_in_Mem_to_Reg = datapath_io_id_io_ctrl_out_Mem_to_Reg; // @[tile.py:163:Tile.fir@2076.4]
  assign id_ex_register_io_id_ctrl_in_Jump_Type = datapath_io_id_io_ctrl_out_Jump_Type; // @[tile.py:163:Tile.fir@2077.4]
  assign hazard_detection_io_rs1 = if_id_register_io_id_rs1; // @[tile.py:130:Tile.fir@2039.4]
  assign hazard_detection_io_rs2 = if_id_register_io_id_rs2; // @[tile.py:131:Tile.fir@2040.4]
  assign hazard_detection_io_ex_rd = id_ex_register_io_ex_rd; // @[tile.py:132:Tile.fir@2041.4]
  assign hazard_detection_io_Imm_Sel = control_io_ctrl_Imm_Sel; // @[tile.py:133:Tile.fir@2042.4]
  assign hazard_detection_io_ex_Mem_Read = id_ex_register_io_ex_ctrl_out_Mem_Read; // @[tile.py:134:Tile.fir@2043.4]
  assign alu_io_src_a = datapath_io_ex_io_alu_a_src; // @[tile.py:200:Tile.fir@2099.4]
  assign alu_io_src_b = datapath_io_ex_io_alu_b_src; // @[tile.py:201:Tile.fir@2100.4]
  assign alu_io_ALUOp = id_ex_register_io_ex_ctrl_out_ALUOp; // @[tile.py:202:Tile.fir@2101.4]
  assign branch_predictor_clock = clock; // @[rawmodule.py:110:Tile.fir@2002.4]
  assign branch_predictor_reset = reset; // @[rawmodule.py:110:Tile.fir@2003.4]
  assign branch_predictor_io_inst = instcache_io_inst; // @[tile.py:294:Tile.fir@2156.4]
  assign branch_predictor_io_branch_addr = datapath_io_ex_io_branch_addr; // @[tile.py:295:Tile.fir@2157.4]
  assign branch_predictor_io_PC_Src = datapath_io_ex_io_PC_Src; // @[tile.py:296:Tile.fir@2158.4]
  assign branch_predictor_io_pc = pc_io_pc_out; // @[tile.py:297:Tile.fir@2159.4]
  assign branch_predictor_io_ex_Branch = id_ex_register_io_ex_ctrl_out_Branch; // @[tile.py:298:Tile.fir@2160.4]
  assign branch_predictor_io_ex_Jump_Type = id_ex_register_io_ex_ctrl_out_Jump_Type; // @[tile.py:299:Tile.fir@2161.4]
  assign datacache_clock = clock; // @[rawmodule.py:110:Tile.fir@2005.4]
  assign datacache_io_addr = ex_mem_register_io_mem_alu_sum; // @[tile.py:238:Tile.fir@2122.4]
  assign datacache_io_write_data = datapath_io_mem_io_mem_writedata; // @[tile.py:239:Tile.fir@2123.4]
  assign datacache_io_Mem_Read = ex_mem_register_io_mem_Mem_Read; // @[tile.py:240:Tile.fir@2124.4]
  assign datacache_io_Mem_Write = ex_mem_register_io_mem_Mem_Write; // @[tile.py:241:Tile.fir@2125.4]
  assign datacache_io_Data_Size = ex_mem_register_io_mem_Data_Size; // @[tile.py:242:Tile.fir@2126.4]
  assign datacache_io_Load_Type = ex_mem_register_io_mem_Load_Type; // @[tile.py:243:Tile.fir@2127.4]
  assign ex_mem_register_clock = clock; // @[rawmodule.py:110:Tile.fir@2008.4]
  assign ex_mem_register_reset = reset; // @[rawmodule.py:110:Tile.fir@2009.4]
  assign ex_mem_register_io_ex_alu_sum = alu_io_sum; // @[tile.py:215:Tile.fir@2107.4]
  assign ex_mem_register_io_ex_rs2_out = datapath_io_ex_io_forward_rs2_out; // @[tile.py:216:Tile.fir@2108.4]
  assign ex_mem_register_io_ex_rd = id_ex_register_io_ex_rd; // @[tile.py:217:Tile.fir@2109.4]
  assign ex_mem_register_io_ex_pc_4 = id_ex_register_io_ex_pc_4; // @[tile.py:218:Tile.fir@2110.4]
  assign ex_mem_register_io_ex_imm = id_ex_register_io_ex_imm; // @[tile.py:219:Tile.fir@2111.4]
  assign ex_mem_register_io_ex_aui_pc = datapath_io_ex_io_ex_aui_pc; // @[tile.py:220:Tile.fir@2112.4]
  assign ex_mem_register_io_ex_rs2 = {{27'd0}, id_ex_register_io_ex_rs2}; // @[tile.py:221:Tile.fir@2113.4]
  assign ex_mem_register_io_ex_Mem_Read = id_ex_register_io_ex_ctrl_out_Mem_Read; // @[tile.py:222:Tile.fir@2114.4]
  assign ex_mem_register_io_ex_Mem_Write = id_ex_register_io_ex_ctrl_out_Mem_Write; // @[tile.py:223:Tile.fir@2115.4]
  assign ex_mem_register_io_ex_Data_Size = id_ex_register_io_ex_ctrl_out_Data_Size; // @[tile.py:224:Tile.fir@2116.4]
  assign ex_mem_register_io_ex_Load_Type = id_ex_register_io_ex_ctrl_out_Load_Type; // @[tile.py:225:Tile.fir@2117.4]
  assign ex_mem_register_io_ex_Reg_Write = id_ex_register_io_ex_ctrl_out_Reg_Write; // @[tile.py:226:Tile.fir@2118.4]
  assign ex_mem_register_io_ex_Mem_to_Reg = id_ex_register_io_ex_ctrl_out_Mem_to_Reg; // @[tile.py:227:Tile.fir@2119.4]
  assign forward_io_ex_mem_Reg_Write = ex_mem_register_io_mem_Reg_Write; // @[tile.py:282:Tile.fir@2148.4]
  assign forward_io_ex_mem_rd = ex_mem_register_io_mem_rd; // @[tile.py:283:Tile.fir@2149.4]
  assign forward_io_ex_mem_Mem_Write = ex_mem_register_io_mem_Mem_Write; // @[tile.py:289:Tile.fir@2155.4]
  assign forward_io_ex_mem_rs2 = ex_mem_register_io_mem_rs2[4:0]; // @[tile.py:288:Tile.fir@2154.4]
  assign forward_io_mem_wb_Reg_Write = mem_wb_register_io_wb_Reg_Write; // @[tile.py:284:Tile.fir@2150.4]
  assign forward_io_mem_wb_rd = mem_wb_register_io_wb_rd; // @[tile.py:285:Tile.fir@2151.4]
  assign forward_io_id_ex_rs1 = id_ex_register_io_ex_rs1; // @[tile.py:286:Tile.fir@2152.4]
  assign forward_io_id_ex_rs2 = id_ex_register_io_ex_rs2; // @[tile.py:287:Tile.fir@2153.4]
  assign mem_wb_register_clock = clock; // @[rawmodule.py:110:Tile.fir@2014.4]
  assign mem_wb_register_reset = reset; // @[rawmodule.py:110:Tile.fir@2015.4]
  assign mem_wb_register_io_mem_dataout = datacache_io_data_out; // @[tile.py:257:Tile.fir@2134.4]
  assign mem_wb_register_io_mem_alu_sum = ex_mem_register_io_mem_alu_sum; // @[tile.py:258:Tile.fir@2135.4]
  assign mem_wb_register_io_mem_rd = ex_mem_register_io_mem_rd; // @[tile.py:259:Tile.fir@2136.4]
  assign mem_wb_register_io_mem_pc_4 = ex_mem_register_io_mem_pc_4; // @[tile.py:260:Tile.fir@2137.4]
  assign mem_wb_register_io_mem_imm = ex_mem_register_io_mem_imm; // @[tile.py:261:Tile.fir@2138.4]
  assign mem_wb_register_io_mem_aui_pc = ex_mem_register_io_mem_aui_pc; // @[tile.py:262:Tile.fir@2139.4]
  assign mem_wb_register_io_mem_Mem_to_Reg = ex_mem_register_io_mem_Mem_to_Reg; // @[tile.py:256:Tile.fir@2133.4]
  assign mem_wb_register_io_mem_Reg_Write = ex_mem_register_io_mem_Reg_Write; // @[tile.py:255:Tile.fir@2132.4]
endmodule
