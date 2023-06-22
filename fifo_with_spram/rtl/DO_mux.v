module DO_mux (
    input clk,
    input rd_en,
    input en0,
    input en1,
    input [31:0] data0,
    input [31:0] data1,
   
    output [31:0] out,
    output read_valid
);
    reg en0_r;
    reg en1_r;
    assign out = (en0) ? data0 : (en1) ? data1 : 32'hffffffff;
    assign read_valid = (en0 | en1);
    

endmodule


