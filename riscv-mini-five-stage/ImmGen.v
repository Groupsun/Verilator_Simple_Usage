module ImmGen( // @[immgen.py:20:ImmGen.fir@2.2]
  input         clock, // @[rawmodule.py:100:ImmGen.fir@3.4]
  input         reset, // @[rawmodule.py:101:ImmGen.fir@4.4]
  input  [31:0] io_inst, // @[immgen.py:11:ImmGen.fir@5.4]
  output [31:0] io_imm, // @[immgen.py:11:ImmGen.fir@5.4]
  input  [2:0]  io_Imm_Sel // @[immgen.py:11:ImmGen.fir@5.4]
);
  wire [11:0] _T_8; // @[immgen.py:24:ImmGen.fir@8.4]
  wire [11:0] _T_9; // @[immgen.py:24:ImmGen.fir@9.4]
  wire [6:0] _T_10; // @[immgen.py:25:ImmGen.fir@10.4]
  wire [4:0] _T_11; // @[immgen.py:25:ImmGen.fir@11.4]
  wire [11:0] _T_12; // @[immgen.py:25:ImmGen.fir@12.4]
  wire [11:0] _T_13; // @[immgen.py:25:ImmGen.fir@13.4]
  wire  _T_14; // @[immgen.py:26:ImmGen.fir@14.4]
  wire  _T_15; // @[immgen.py:26:ImmGen.fir@15.4]
  wire [5:0] _T_16; // @[immgen.py:26:ImmGen.fir@17.4]
  wire [3:0] _T_17; // @[immgen.py:26:ImmGen.fir@19.4]
  wire [12:0] _T_21; // @[immgen.py:26:ImmGen.fir@21.4]
  wire [12:0] _T_22; // @[immgen.py:26:ImmGen.fir@22.4]
  wire [19:0] _T_23; // @[immgen.py:27:ImmGen.fir@23.4]
  wire [31:0] _T_24; // @[immgen.py:27:ImmGen.fir@24.4]
  wire [31:0] _T_25; // @[immgen.py:27:ImmGen.fir@25.4]
  wire [7:0] _T_27; // @[immgen.py:28:ImmGen.fir@27.4]
  wire  _T_28; // @[immgen.py:28:ImmGen.fir@29.4]
  wire [9:0] _T_29; // @[immgen.py:28:ImmGen.fir@31.4]
  wire [20:0] _T_33; // @[immgen.py:28:ImmGen.fir@33.4]
  wire [20:0] _T_34; // @[immgen.py:28:ImmGen.fir@34.4]
  wire  _T_35; // @[mux.py:72:ImmGen.fir@35.4]
  wire [31:0] _T_36; // @[immgen.py:36:ImmGen.fir@36.4]
  wire  _T_37; // @[mux.py:72:ImmGen.fir@37.4]
  wire [31:0] _T_38; // @[immgen.py:36:ImmGen.fir@38.4]
  wire  _T_39; // @[mux.py:72:ImmGen.fir@39.4]
  wire [31:0] _T_40; // @[immgen.py:36:ImmGen.fir@40.4]
  wire  _T_41; // @[mux.py:72:ImmGen.fir@41.4]
  wire [31:0] _T_42; // @[immgen.py:36:ImmGen.fir@42.4]
  wire  _T_43; // @[mux.py:72:ImmGen.fir@43.4]
  wire [31:0] _T_44; // @[immgen.py:36:ImmGen.fir@44.4]
  wire  _T_45; // @[mux.py:72:ImmGen.fir@45.4]
  wire [31:0] _T_46; // @[immgen.py:36:ImmGen.fir@46.4]
  assign _T_8 = io_inst[31:20]; // @[immgen.py:24:ImmGen.fir@8.4]
  assign _T_9 = $signed(_T_8); // @[immgen.py:24:ImmGen.fir@9.4]
  assign _T_10 = io_inst[31:25]; // @[immgen.py:25:ImmGen.fir@10.4]
  assign _T_11 = io_inst[11:7]; // @[immgen.py:25:ImmGen.fir@11.4]
  assign _T_12 = {_T_10,_T_11}; // @[immgen.py:25:ImmGen.fir@12.4]
  assign _T_13 = $signed(_T_12); // @[immgen.py:25:ImmGen.fir@13.4]
  assign _T_14 = io_inst[31]; // @[immgen.py:26:ImmGen.fir@14.4]
  assign _T_15 = io_inst[7]; // @[immgen.py:26:ImmGen.fir@15.4]
  assign _T_16 = io_inst[30:25]; // @[immgen.py:26:ImmGen.fir@17.4]
  assign _T_17 = io_inst[11:8]; // @[immgen.py:26:ImmGen.fir@19.4]
  assign _T_21 = {_T_14,_T_15,_T_16,_T_17,1'h0}; // @[immgen.py:26:ImmGen.fir@21.4]
  assign _T_22 = $signed(_T_21); // @[immgen.py:26:ImmGen.fir@22.4]
  assign _T_23 = io_inst[31:12]; // @[immgen.py:27:ImmGen.fir@23.4]
  assign _T_24 = {_T_23,12'h0}; // @[immgen.py:27:ImmGen.fir@24.4]
  assign _T_25 = $signed(_T_24); // @[immgen.py:27:ImmGen.fir@25.4]
  assign _T_27 = io_inst[19:12]; // @[immgen.py:28:ImmGen.fir@27.4]
  assign _T_28 = io_inst[20]; // @[immgen.py:28:ImmGen.fir@29.4]
  assign _T_29 = io_inst[30:21]; // @[immgen.py:28:ImmGen.fir@31.4]
  assign _T_33 = {_T_14,_T_27,_T_28,_T_29,1'h0}; // @[immgen.py:28:ImmGen.fir@33.4]
  assign _T_34 = $signed(_T_33); // @[immgen.py:28:ImmGen.fir@34.4]
  assign _T_35 = io_Imm_Sel == 3'h6; // @[mux.py:72:ImmGen.fir@35.4]
  assign _T_36 = _T_35 ? $signed({{11{_T_34[20]}},_T_34}) : $signed(32'sh0); // @[immgen.py:36:ImmGen.fir@36.4]
  assign _T_37 = io_Imm_Sel == 3'h5; // @[mux.py:72:ImmGen.fir@37.4]
  assign _T_38 = _T_37 ? $signed(_T_25) : $signed(_T_36); // @[immgen.py:36:ImmGen.fir@38.4]
  assign _T_39 = io_Imm_Sel == 3'h4; // @[mux.py:72:ImmGen.fir@39.4]
  assign _T_40 = _T_39 ? $signed({{19{_T_22[12]}},_T_22}) : $signed(_T_38); // @[immgen.py:36:ImmGen.fir@40.4]
  assign _T_41 = io_Imm_Sel == 3'h3; // @[mux.py:72:ImmGen.fir@41.4]
  assign _T_42 = _T_41 ? $signed({{20{_T_13[11]}},_T_13}) : $signed(_T_40); // @[immgen.py:36:ImmGen.fir@42.4]
  assign _T_43 = io_Imm_Sel == 3'h2; // @[mux.py:72:ImmGen.fir@43.4]
  assign _T_44 = _T_43 ? $signed({{20{_T_9[11]}},_T_9}) : $signed(_T_42); // @[immgen.py:36:ImmGen.fir@44.4]
  assign _T_45 = io_Imm_Sel == 3'h1; // @[mux.py:72:ImmGen.fir@45.4]
  assign _T_46 = _T_45 ? $signed(32'sh0) : $signed(_T_44); // @[immgen.py:36:ImmGen.fir@46.4]
  assign io_imm = $unsigned(_T_46); // @[immgen.py:36:ImmGen.fir@48.4]
endmodule
