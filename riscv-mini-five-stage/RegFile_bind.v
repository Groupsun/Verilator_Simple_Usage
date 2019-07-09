module RegFile_Bind( // @[regfile.py:24:RegFile.fir@2.2]
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

initial begin
    $readmemh("regfile.txt", RegFile.regfile);
end

endmodule

bind RegFile RegFile_Bind RegFile_Bind_0(.*);