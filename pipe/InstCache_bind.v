module BindsTo_0_InstCache(
    input         clock,
    // input         reset,
    input  [31:0] io_addr,
    output [31:0] io_inst
);

initial begin
    $readmemh("instcache.txt", InstCache.cache);
end

endmodule

bind InstCache BindsTo_0_InstCache BindsTo_0_InstCache_Inst(.*);