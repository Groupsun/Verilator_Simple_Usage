module Adder( // @[:Adder.fir@3.2]
  input   clock, // @[:Adder.fir@4.4]
  input   reset, // @[:Adder.fir@5.4]
  input   io_a, // @[:Adder.fir@6.4]
  input   io_b, // @[:Adder.fir@6.4]
  input   io_v_0, // @[:Adder.fir@6.4]
  input   io_v_1, // @[:Adder.fir@6.4]
  output  io_s // @[:Adder.fir@6.4]
);
  reg [31:0] vec_1; // @[Adder.scala 30:16:Adder.fir@8.4]
  reg [31:0] _RAND_0;
  wire  _T_37; // @[Adder.scala 31:16:Adder.fir@10.4]
  wire  _T_39; // @[Adder.scala 33:16:Adder.fir@13.4]
  wire [32:0] _T_40; // @[Adder.scala 33:23:Adder.fir@14.4]
  wire [31:0] _T_41; // @[Adder.scala 33:23:Adder.fir@15.4]
  wire [31:0] _T_43; // @[Adder.scala 33:32:Adder.fir@17.4]
  wire [32:0] _T_44; // @[Adder.scala 33:41:Adder.fir@18.4]
  wire [31:0] _T_45; // @[Adder.scala 33:41:Adder.fir@19.4]
  wire [32:0] _T_46; // @[Adder.scala 33:50:Adder.fir@20.4]
  wire [31:0] _T_47; // @[Adder.scala 33:50:Adder.fir@21.4]
  assign _T_37 = io_a ? 1'h0 : 1'h1; // @[Adder.scala 31:16:Adder.fir@10.4]
  assign _T_39 = io_a + io_b; // @[Adder.scala 33:16:Adder.fir@13.4]
  assign _T_40 = {{32'd0}, _T_39}; // @[Adder.scala 33:23:Adder.fir@14.4]
  assign _T_41 = _T_40[31:0]; // @[Adder.scala 33:23:Adder.fir@15.4]
  assign _T_43 = _T_41 + vec_1; // @[Adder.scala 33:32:Adder.fir@17.4]
  assign _T_44 = {{1'd0}, _T_43}; // @[Adder.scala 33:41:Adder.fir@18.4]
  assign _T_45 = _T_44[31:0]; // @[Adder.scala 33:41:Adder.fir@19.4]
  assign _T_46 = {{1'd0}, _T_45}; // @[Adder.scala 33:50:Adder.fir@20.4]
  assign _T_47 = _T_46[31:0]; // @[Adder.scala 33:50:Adder.fir@21.4]
  assign io_s = _T_47[0]; // @[Adder.scala 33:8:Adder.fir@22.4]
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
  vec_1 = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    vec_1 <= {{31'd0}, _T_37};
  end
endmodule
