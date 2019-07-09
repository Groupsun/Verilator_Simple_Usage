module InstCache( // @[instcache.py:19:InstCache.fir@2.2]
  input         clock, // @[rawmodule.py:100:InstCache.fir@3.4]
  input         reset, // @[rawmodule.py:101:InstCache.fir@4.4]
  input  [31:0] io_addr, // @[instcache.py:12:InstCache.fir@5.4]
  output [31:0] io_inst // @[instcache.py:12:InstCache.fir@5.4]
);
  reg [7:0] cache [0:1023]; // @[instcache.py:22:InstCache.fir@7.4]
  reg [31:0] _RAND_0;
  wire [7:0] cache__T_7_data; // @[instcache.py:22:InstCache.fir@7.4]
  wire [9:0] cache__T_7_addr; // @[instcache.py:22:InstCache.fir@7.4]
  wire [7:0] cache__T_9_data; // @[instcache.py:22:InstCache.fir@7.4]
  wire [9:0] cache__T_9_addr; // @[instcache.py:22:InstCache.fir@7.4]
  wire [7:0] cache__T_11_data; // @[instcache.py:22:InstCache.fir@7.4]
  wire [9:0] cache__T_11_addr; // @[instcache.py:22:InstCache.fir@7.4]
  wire [7:0] cache__T_13_data; // @[instcache.py:22:InstCache.fir@7.4]
  wire [9:0] cache__T_13_addr; // @[instcache.py:22:InstCache.fir@7.4]
  wire [32:0] _T_8; // @[instcache.py:23:InstCache.fir@9.4]
  wire [32:0] _T_10; // @[instcache.py:24:InstCache.fir@11.4]
  wire [32:0] _T_12; // @[instcache.py:24:InstCache.fir@13.4]
  wire [23:0] _T_15; // @[instcache.py:24:InstCache.fir@16.4]
  assign cache__T_7_addr = io_addr[9:0];
  assign cache__T_7_data = cache[cache__T_7_addr]; // @[instcache.py:22:InstCache.fir@7.4]
  assign cache__T_9_addr = _T_8[9:0];
  assign cache__T_9_data = cache[cache__T_9_addr]; // @[instcache.py:22:InstCache.fir@7.4]
  assign cache__T_11_addr = _T_10[9:0];
  assign cache__T_11_data = cache[cache__T_11_addr]; // @[instcache.py:22:InstCache.fir@7.4]
  assign cache__T_13_addr = _T_12[9:0];
  assign cache__T_13_data = cache[cache__T_13_addr]; // @[instcache.py:22:InstCache.fir@7.4]
  assign _T_8 = io_addr + 32'h1; // @[instcache.py:23:InstCache.fir@9.4]
  assign _T_10 = io_addr + 32'h2; // @[instcache.py:24:InstCache.fir@11.4]
  assign _T_12 = io_addr + 32'h3; // @[instcache.py:24:InstCache.fir@13.4]
  assign _T_15 = {cache__T_7_data,cache__T_9_data,cache__T_11_data}; // @[instcache.py:24:InstCache.fir@16.4]
  assign io_inst = {_T_15,cache__T_13_data}; // @[instcache.py:24:InstCache.fir@18.4]
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
