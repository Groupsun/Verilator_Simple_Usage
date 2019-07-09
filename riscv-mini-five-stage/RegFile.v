module RegFile( // @[regfile.py:24:RegFile.fir@2.2]
  input         clock, // @[rawmodule.py:100:RegFile.fir@3.4]
  input         reset, // @[rawmodule.py:101:RegFile.fir@4.4]
  input  [4:0]  io_rs1, // @[regfile.py:11:RegFile.fir@5.4]
  input  [4:0]  io_rs2, // @[regfile.py:11:RegFile.fir@5.4]
  input  [4:0]  io_rd, // @[regfile.py:11:RegFile.fir@5.4]
  input  [31:0] io_wdata, // @[regfile.py:11:RegFile.fir@5.4]
  output [31:0] io_rs1_out, // @[regfile.py:11:RegFile.fir@5.4]
  output [31:0] io_rs2_out, // @[regfile.py:11:RegFile.fir@5.4]
  input         io_Reg_Write // @[regfile.py:11:RegFile.fir@5.4]
);
  reg [31:0] regfile [0:31]; // @[regfile.py:27:RegFile.fir@7.4]
  reg [31:0] _RAND_0;
  wire [31:0] regfile__T_18_data; // @[regfile.py:27:RegFile.fir@7.4]
  wire [4:0] regfile__T_18_addr; // @[regfile.py:27:RegFile.fir@7.4]
  wire [31:0] regfile__T_20_data; // @[regfile.py:27:RegFile.fir@7.4]
  wire [4:0] regfile__T_20_addr; // @[regfile.py:27:RegFile.fir@7.4]
  wire [31:0] regfile__T_25_data; // @[regfile.py:27:RegFile.fir@7.4]
  wire [4:0] regfile__T_25_addr; // @[regfile.py:27:RegFile.fir@7.4]
  wire [31:0] regfile__T_27_data; // @[regfile.py:27:RegFile.fir@7.4]
  wire [4:0] regfile__T_27_addr; // @[regfile.py:27:RegFile.fir@7.4]
  wire  regfile__T_27_mask; // @[regfile.py:27:RegFile.fir@7.4]
  wire  regfile__T_27_en; // @[regfile.py:27:RegFile.fir@7.4]
  wire  _T_13; // @[regfile.py:30:RegFile.fir@9.4]
  wire  _T_14; // @[regfile.py:30:RegFile.fir@10.4]
  wire  _T_16; // @[regfile.py:31:RegFile.fir@12.4]
  wire  _T_17; // @[regfile.py:31:RegFile.fir@13.4]
  wire  _T_23; // @[regfile.py:36:RegFile.fir@21.4]
  wire [31:0] _T_24; // @[regfile.py:36:RegFile.fir@22.4]
  assign regfile__T_18_addr = io_rs1;
  assign regfile__T_18_data = regfile[regfile__T_18_addr]; // @[regfile.py:27:RegFile.fir@7.4]
  assign regfile__T_20_addr = io_rs2;
  assign regfile__T_20_data = regfile[regfile__T_20_addr]; // @[regfile.py:27:RegFile.fir@7.4]
  assign regfile__T_25_addr = io_rd;
  assign regfile__T_25_data = regfile[regfile__T_25_addr]; // @[regfile.py:27:RegFile.fir@7.4]
  assign regfile__T_27_data = io_Reg_Write ? _T_24 : regfile__T_25_data;
  assign regfile__T_27_addr = io_rd;
  assign regfile__T_27_mask = 1'h1;
  assign regfile__T_27_en = 1'h1;
  assign _T_13 = io_rs1 == io_rd; // @[regfile.py:30:RegFile.fir@9.4]
  assign _T_14 = io_Reg_Write & _T_13; // @[regfile.py:30:RegFile.fir@10.4]
  assign _T_16 = io_rs2 == io_rd; // @[regfile.py:31:RegFile.fir@12.4]
  assign _T_17 = io_Reg_Write & _T_16; // @[regfile.py:31:RegFile.fir@13.4]
  assign _T_23 = io_rd == 5'h0; // @[regfile.py:36:RegFile.fir@21.4]
  assign _T_24 = _T_23 ? 32'h0 : io_wdata; // @[regfile.py:36:RegFile.fir@22.4]
  assign io_rs1_out = _T_14 ? io_wdata : regfile__T_18_data; // @[regfile.py:33:RegFile.fir@16.4]
  assign io_rs2_out = _T_17 ? io_wdata : regfile__T_20_data; // @[regfile.py:34:RegFile.fir@19.4]
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
    if(regfile__T_27_en & regfile__T_27_mask) begin
      regfile[regfile__T_27_addr] <= regfile__T_27_data; // @[regfile.py:27:RegFile.fir@7.4]
    end
  end
endmodule
