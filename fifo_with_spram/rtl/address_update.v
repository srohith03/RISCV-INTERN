`define WIDTH 8'd3


module address_update (
    input clk,
    input rst,
    input re,
    input we,
    output empty,
    output full,
    output [`WIDTH-1:0] r_adr,
    output [`WIDTH-1:0] w_adr
);


    reg [`WIDTH:0] rd_addr;
    reg [`WIDTH:0] wr_addr;
    assign  full  = (rd_addr[`WIDTH] ^ wr_addr[`WIDTH]) & (rd_addr[`WIDTH-1:0]==wr_addr[`WIDTH-1:0]);
    assign empty = (rd_addr == wr_addr);

    always @(posedge clk) begin
        if (rst) begin
            rd_addr <= 4'b0;

        end else if (re & ~empty) begin
            rd_addr <= rd_addr + 1'b1;

        end

    end


    always @(posedge clk) begin
        if (rst) begin
            wr_addr <= 4'b0;

        end else if ((we & ~full) | (we & re & full)) begin
            wr_addr <= wr_addr + 1'b1;

        end

    end

    assign r_adr = rd_addr[`WIDTH-1:0];
    assign w_adr = wr_addr[`WIDTH-1:0];

endmodule
