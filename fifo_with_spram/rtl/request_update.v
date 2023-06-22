`define WIDTH 8'd3

module request_update (
    input [31:0] di,
    input re,
    input we,
    input clk,
    input rst,
    output we_n,
    output re_n,
    output [`WIDTH-1:0] r_adr,
    output [`WIDTH-1:0] w_adr,
    output r_err,
    output w_err,
    output [31:0] data_out
);

    wire full, empty;



    //---------update we_n and re_n--------//
    assign we_n  = (we & (~full) & (~rst)) | (we & re & full);
    assign re_n  = re & (~empty) & (~rst);

    assign w_err = we & (full);
    assign r_err = re & (empty);



    //-----------update r_adr and w_adr---------------//
    address_update lut1 (
        .clk(clk),
        .rst(rst),
        .re(re),
        .we(we),
        .empty(empty),
        .full(full),
        .r_adr(r_adr),
        .w_adr(w_adr)
    );

    assign data_out = di;


endmodule

