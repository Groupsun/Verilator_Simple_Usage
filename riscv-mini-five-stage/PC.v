module PC( // @[pc.py:21:pc.fir@2.2]
  input         clock, // @[rawmodule.py:100:pc.fir@3.4]
  input         reset, // @[rawmodule.py:101:pc.fir@4.4]
  input  [31:0] io_next_pc, // @[pc.py:13:pc.fir@5.4]
  input         io_pc_write, // @[pc.py:13:pc.fir@5.4]
  output [31:0] io_pc_out // @[pc.py:13:pc.fir@5.4]
);
  reg [31:0] pc_reg; // @[pc.py:24:pc.fir@7.4]
  reg [31:0] _RAND_0;
  assign io_pc_out = pc_reg; // @[pc.py:26:pc.fir@11.4]
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
      if (io_pc_write) begin
        pc_reg <= io_next_pc;
      end
    end
  end
endmodule
