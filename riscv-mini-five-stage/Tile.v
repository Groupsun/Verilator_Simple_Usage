module PC( // @[pc.py:20:Tile.fir@2.2]
  input         clock, // @[rawmodule.py:100:Tile.fir@3.4]
  input         reset, // @[rawmodule.py:101:Tile.fir@4.4]
  input  [31:0] io_next_pc, // @[pc.py:12:Tile.fir@5.4]
  input         io_PC_Write, // @[pc.py:12:Tile.fir@5.4]
  output [31:0] io_pc_out // @[pc.py:12:Tile.fir@5.4]
);
  reg [31:0] pc_reg; // @[pc.py:23:Tile.fir@7.4]
  reg [31:0] _RAND_0;
  assign io_pc_out = pc_reg; // @[pc.py:25:Tile.fir@11.4]
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
module InstCache( // @[instcache.py:19:Tile.fir@14.2]
  input         clock, // @[rawmodule.py:100:Tile.fir@15.4]
  input  [31:0] io_addr, // @[instcache.py:12:Tile.fir@17.4]
  output [31:0] io_inst // @[instcache.py:12:Tile.fir@17.4]
);
  reg [7:0] cache [0:1023]; // @[instcache.py:22:Tile.fir@19.4]
  reg [31:0] _RAND_0;
  wire [7:0] cache__T_32_data; // @[instcache.py:22:Tile.fir@19.4]
  wire [9:0] cache__T_32_addr; // @[instcache.py:22:Tile.fir@19.4]
  wire [7:0] cache__T_34_data; // @[instcache.py:22:Tile.fir@19.4]
  wire [9:0] cache__T_34_addr; // @[instcache.py:22:Tile.fir@19.4]
  wire [7:0] cache__T_36_data; // @[instcache.py:22:Tile.fir@19.4]
  wire [9:0] cache__T_36_addr; // @[instcache.py:22:Tile.fir@19.4]
  wire [7:0] cache__T_38_data; // @[instcache.py:22:Tile.fir@19.4]
  wire [9:0] cache__T_38_addr; // @[instcache.py:22:Tile.fir@19.4]
  wire [32:0] _T_33; // @[instcache.py:23:Tile.fir@21.4]
  wire [32:0] _T_35; // @[instcache.py:24:Tile.fir@23.4]
  wire [32:0] _T_37; // @[instcache.py:24:Tile.fir@25.4]
  wire [23:0] _T_40; // @[instcache.py:24:Tile.fir@28.4]
  assign cache__T_32_addr = io_addr[9:0];
  assign cache__T_32_data = cache[cache__T_32_addr]; // @[instcache.py:22:Tile.fir@19.4]
  assign cache__T_34_addr = _T_33[9:0];
  assign cache__T_34_data = cache[cache__T_34_addr]; // @[instcache.py:22:Tile.fir@19.4]
  assign cache__T_36_addr = _T_35[9:0];
  assign cache__T_36_data = cache[cache__T_36_addr]; // @[instcache.py:22:Tile.fir@19.4]
  assign cache__T_38_addr = _T_37[9:0];
  assign cache__T_38_data = cache[cache__T_38_addr]; // @[instcache.py:22:Tile.fir@19.4]
  assign _T_33 = io_addr + 32'h1; // @[instcache.py:23:Tile.fir@21.4]
  assign _T_35 = io_addr + 32'h2; // @[instcache.py:24:Tile.fir@23.4]
  assign _T_37 = io_addr + 32'h3; // @[instcache.py:24:Tile.fir@25.4]
  assign _T_40 = {cache__T_32_data,cache__T_34_data,cache__T_36_data}; // @[instcache.py:24:Tile.fir@28.4]
  assign io_inst = {_T_40,cache__T_38_data}; // @[instcache.py:24:Tile.fir@30.4]
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
module Datapath( // @[datapath.py:30:Tile.fir@33.2]
  input  [31:0] io_if_io_pc_out, // @[datapath.py:24:Tile.fir@36.4]
  input  [31:0] io_if_io_pc_recover, // @[datapath.py:24:Tile.fir@36.4]
  input  [31:0] io_if_io_new_addr, // @[datapath.py:24:Tile.fir@36.4]
  output [31:0] io_if_io_next_pc, // @[datapath.py:24:Tile.fir@36.4]
  output [31:0] io_if_io_pc_4, // @[datapath.py:24:Tile.fir@36.4]
  input  [1:0]  io_if_io_PC_Sel // @[datapath.py:24:Tile.fir@36.4]
);
  wire [32:0] _T_54; // @[datapath.py:33:Tile.fir@38.4]
  wire  _T_55; // @[mux.py:72:Tile.fir@40.4]
  wire [31:0] _T_56; // @[datapath.py:38:Tile.fir@41.4]
  wire  _T_57; // @[mux.py:72:Tile.fir@42.4]
  wire [31:0] _T_58; // @[datapath.py:38:Tile.fir@43.4]
  wire  _T_59; // @[mux.py:72:Tile.fir@44.4]
  assign _T_54 = io_if_io_pc_out + 32'h4; // @[datapath.py:33:Tile.fir@38.4]
  assign _T_55 = io_if_io_PC_Sel == 2'h2; // @[mux.py:72:Tile.fir@40.4]
  assign _T_56 = _T_55 ? io_if_io_new_addr : 32'h0; // @[datapath.py:38:Tile.fir@41.4]
  assign _T_57 = io_if_io_PC_Sel == 2'h1; // @[mux.py:72:Tile.fir@42.4]
  assign _T_58 = _T_57 ? io_if_io_pc_recover : _T_56; // @[datapath.py:38:Tile.fir@43.4]
  assign _T_59 = io_if_io_PC_Sel == 2'h0; // @[mux.py:72:Tile.fir@44.4]
  assign io_if_io_next_pc = _T_59 ? io_if_io_pc_4 : _T_58; // @[datapath.py:38:Tile.fir@46.4]
  assign io_if_io_pc_4 = _T_54[31:0]; // @[datapath.py:33:Tile.fir@39.4]
endmodule
module IF_ID_Register( // @[if_id_register.py:28:Tile.fir@49.2]
  input         clock, // @[rawmodule.py:100:Tile.fir@50.4]
  input         reset, // @[rawmodule.py:101:Tile.fir@51.4]
  input  [31:0] io_if_pc, // @[if_id_register.py:11:Tile.fir@52.4]
  input  [31:0] io_if_pc_4, // @[if_id_register.py:11:Tile.fir@52.4]
  input  [31:0] io_if_inst, // @[if_id_register.py:11:Tile.fir@52.4]
  output [31:0] io_id_pc, // @[if_id_register.py:11:Tile.fir@52.4]
  output [31:0] io_id_pc_4, // @[if_id_register.py:11:Tile.fir@52.4]
  output [4:0]  io_id_rs1, // @[if_id_register.py:11:Tile.fir@52.4]
  output [4:0]  io_id_rs2, // @[if_id_register.py:11:Tile.fir@52.4]
  output [31:0] io_id_inst, // @[if_id_register.py:11:Tile.fir@52.4]
  input         io_IF_ID_Write, // @[if_id_register.py:11:Tile.fir@52.4]
  input         io_IF_ID_Flush // @[if_id_register.py:11:Tile.fir@52.4]
);
  reg [31:0] pc; // @[if_id_register.py:31:Tile.fir@54.4]
  reg [31:0] _RAND_0;
  reg [31:0] pc_4; // @[if_id_register.py:32:Tile.fir@55.4]
  reg [31:0] _RAND_1;
  reg [31:0] inst; // @[if_id_register.py:33:Tile.fir@56.4]
  reg [31:0] _RAND_2;
  assign io_id_pc = pc; // @[if_id_register.py:42:Tile.fir@72.4]
  assign io_id_pc_4 = pc_4; // @[if_id_register.py:43:Tile.fir@73.4]
  assign io_id_rs1 = inst[19:15]; // @[if_id_register.py:45:Tile.fir@76.4]
  assign io_id_rs2 = inst[24:20]; // @[if_id_register.py:46:Tile.fir@78.4]
  assign io_id_inst = inst; // @[if_id_register.py:44:Tile.fir@74.4]
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
module Tile( // @[tile.py:33:Tile.fir@81.2]
  input         clock, // @[rawmodule.py:100:Tile.fir@82.4]
  input         reset, // @[rawmodule.py:101:Tile.fir@83.4]
  input         io_PC_Write, // @[tile.py:15:Tile.fir@84.4]
  input  [31:0] io_pc_recover, // @[tile.py:15:Tile.fir@84.4]
  input  [31:0] io_new_addr, // @[tile.py:15:Tile.fir@84.4]
  input  [1:0]  io_PC_Sel, // @[tile.py:15:Tile.fir@84.4]
  input         io_IF_ID_Write, // @[tile.py:15:Tile.fir@84.4]
  input         io_IF_ID_Flush, // @[tile.py:15:Tile.fir@84.4]
  output [31:0] io_id_pc, // @[tile.py:15:Tile.fir@84.4]
  output [31:0] io_id_pc_4, // @[tile.py:15:Tile.fir@84.4]
  output [4:0]  io_id_rs1, // @[tile.py:15:Tile.fir@84.4]
  output [4:0]  io_id_rs2, // @[tile.py:15:Tile.fir@84.4]
  output [31:0] io_id_inst // @[tile.py:15:Tile.fir@84.4]
);
  wire  pc_clock; // @[:Tile.fir@86.4]
  wire  pc_reset; // @[:Tile.fir@86.4]
  wire [31:0] pc_io_next_pc; // @[:Tile.fir@86.4]
  wire  pc_io_PC_Write; // @[:Tile.fir@86.4]
  wire [31:0] pc_io_pc_out; // @[:Tile.fir@86.4]
  wire  instcache_clock; // @[:Tile.fir@89.4]
  wire [31:0] instcache_io_addr; // @[:Tile.fir@89.4]
  wire [31:0] instcache_io_inst; // @[:Tile.fir@89.4]
  wire [31:0] datapath_io_if_io_pc_out; // @[:Tile.fir@92.4]
  wire [31:0] datapath_io_if_io_pc_recover; // @[:Tile.fir@92.4]
  wire [31:0] datapath_io_if_io_new_addr; // @[:Tile.fir@92.4]
  wire [31:0] datapath_io_if_io_next_pc; // @[:Tile.fir@92.4]
  wire [31:0] datapath_io_if_io_pc_4; // @[:Tile.fir@92.4]
  wire [1:0] datapath_io_if_io_PC_Sel; // @[:Tile.fir@92.4]
  wire  if_id_register_clock; // @[:Tile.fir@95.4]
  wire  if_id_register_reset; // @[:Tile.fir@95.4]
  wire [31:0] if_id_register_io_if_pc; // @[:Tile.fir@95.4]
  wire [31:0] if_id_register_io_if_pc_4; // @[:Tile.fir@95.4]
  wire [31:0] if_id_register_io_if_inst; // @[:Tile.fir@95.4]
  wire [31:0] if_id_register_io_id_pc; // @[:Tile.fir@95.4]
  wire [31:0] if_id_register_io_id_pc_4; // @[:Tile.fir@95.4]
  wire [4:0] if_id_register_io_id_rs1; // @[:Tile.fir@95.4]
  wire [4:0] if_id_register_io_id_rs2; // @[:Tile.fir@95.4]
  wire [31:0] if_id_register_io_id_inst; // @[:Tile.fir@95.4]
  wire  if_id_register_io_IF_ID_Write; // @[:Tile.fir@95.4]
  wire  if_id_register_io_IF_ID_Flush; // @[:Tile.fir@95.4]
  PC pc ( // @[:Tile.fir@86.4]
    .clock(pc_clock),
    .reset(pc_reset),
    .io_next_pc(pc_io_next_pc),
    .io_PC_Write(pc_io_PC_Write),
    .io_pc_out(pc_io_pc_out)
  );
  InstCache instcache ( // @[:Tile.fir@89.4]
    .clock(instcache_clock),
    .io_addr(instcache_io_addr),
    .io_inst(instcache_io_inst)
  );
  Datapath datapath ( // @[:Tile.fir@92.4]
    .io_if_io_pc_out(datapath_io_if_io_pc_out),
    .io_if_io_pc_recover(datapath_io_if_io_pc_recover),
    .io_if_io_new_addr(datapath_io_if_io_new_addr),
    .io_if_io_next_pc(datapath_io_if_io_next_pc),
    .io_if_io_pc_4(datapath_io_if_io_pc_4),
    .io_if_io_PC_Sel(datapath_io_if_io_PC_Sel)
  );
  IF_ID_Register if_id_register ( // @[:Tile.fir@95.4]
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
  assign io_id_pc = if_id_register_io_id_pc; // @[tile.py:75:Tile.fir@110.4]
  assign io_id_pc_4 = if_id_register_io_id_pc_4; // @[tile.py:76:Tile.fir@111.4]
  assign io_id_rs1 = if_id_register_io_id_rs1; // @[tile.py:77:Tile.fir@112.4]
  assign io_id_rs2 = if_id_register_io_id_rs2; // @[tile.py:78:Tile.fir@113.4]
  assign io_id_inst = if_id_register_io_id_inst; // @[tile.py:79:Tile.fir@114.4]
  assign pc_clock = clock; // @[rawmodule.py:110:Tile.fir@87.4]
  assign pc_reset = reset; // @[rawmodule.py:110:Tile.fir@88.4]
  assign pc_io_next_pc = datapath_io_if_io_next_pc; // @[tile.py:47:Tile.fir@98.4]
  assign pc_io_PC_Write = io_PC_Write; // @[tile.py:48:Tile.fir@99.4]
  assign instcache_clock = clock; // @[rawmodule.py:110:Tile.fir@90.4]
  assign instcache_io_addr = pc_io_pc_out; // @[tile.py:53:Tile.fir@100.4]
  assign datapath_io_if_io_pc_out = pc_io_pc_out; // @[tile.py:58:Tile.fir@101.4]
  assign datapath_io_if_io_pc_recover = io_pc_recover; // @[tile.py:59:Tile.fir@102.4]
  assign datapath_io_if_io_new_addr = io_new_addr; // @[tile.py:60:Tile.fir@103.4]
  assign datapath_io_if_io_PC_Sel = io_PC_Sel; // @[tile.py:61:Tile.fir@104.4]
  assign if_id_register_clock = clock; // @[rawmodule.py:110:Tile.fir@96.4]
  assign if_id_register_reset = reset; // @[rawmodule.py:110:Tile.fir@97.4]
  assign if_id_register_io_if_pc = pc_io_pc_out; // @[tile.py:66:Tile.fir@105.4]
  assign if_id_register_io_if_pc_4 = datapath_io_if_io_pc_4; // @[tile.py:67:Tile.fir@106.4]
  assign if_id_register_io_if_inst = instcache_io_inst; // @[tile.py:68:Tile.fir@107.4]
  assign if_id_register_io_IF_ID_Write = io_IF_ID_Write; // @[tile.py:70:Tile.fir@109.4]
  assign if_id_register_io_IF_ID_Flush = io_IF_ID_Flush; // @[tile.py:69:Tile.fir@108.4]
endmodule
