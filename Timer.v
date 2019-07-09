module Timer( // @[components.py:190:test.fir@2.2]
  input         clock, // @[rawmodule.py:73:test.fir@3.4]
  input         reset, // @[rawmodule.py:74:test.fir@4.4]
  output [31:0] io_out // @[components.py:184:test.fir@5.4]
);
  reg [31:0] timer; // @[components.py:193:test.fir@7.4]
  reg [31:0] _RAND_0;
  wire [32:0] _T_6; // @[components.py:194:test.fir@8.4]
  assign _T_6 = timer + 32'h1; // @[components.py:194:test.fir@8.4]
  assign io_out = timer; // @[components.py:196:test.fir@10.4]
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
  timer = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      timer <= 32'h0;
    end else begin
      timer <= _T_6[31:0];
    end
  end
endmodule
