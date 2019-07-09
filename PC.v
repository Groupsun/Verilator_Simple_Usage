module PC( // @[components.py:208:test.fir@2.2]
  input         clock, // @[rawmodule.py:73:test.fir@3.4]
  input         reset, // @[rawmodule.py:74:test.fir@4.4]
  input  [31:0] io_next_pc, // @[components.py:201:test.fir@5.4]
  output [31:0] io_pc_out // @[components.py:201:test.fir@5.4]
);
  reg [31:0] pc; // @[components.py:211:test.fir@7.4]
  reg [31:0] _RAND_0;
  assign io_pc_out = pc; // @[components.py:213:test.fir@9.4]
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
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      pc <= 32'h0;
    end else begin
      pc <= io_next_pc;
    end
  end
endmodule
