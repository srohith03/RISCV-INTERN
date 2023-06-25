
module fifo # (

    parameter ADDR_WIDTH  = 5,
    parameter DATA_WIDTH  = 2,
    parameter DEPTH       = 16
)
(
    input reg [DATA_WIDTH-1:0] data_in,
    input clk,
    rst,
    rd,
    wr,
    output empty,
    full,
    output reg [DATA_WIDTH-1:0] data_out
);

    reg [ADDR_WIDTH-1:0] rd_ptr, wr_ptr;

    assign empty = (wr_ptr == rd_ptr);
   assign full  = (wr_ptr == {~rd_ptr[ADDR_WIDTH-1], rd_ptr[ADDR_WIDTH-2:0]});

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            wr_ptr <= 0;
            rd_ptr <= 0;
        end else begin
            wr_ptr <= ((wr && !full) || (wr && rd)) ? wr_ptr + 1 : wr_ptr;

            rd_ptr <= ((rd && !empty) || (wr && rd)) ? rd_ptr + 1 : rd_ptr;
        end
    end


 dpram dp(

    .wr_addr(wr_ptr),
    .wr_data(data_in),
    .wr_en(wr),
    .rd_addr(rd_ptr),
    .rd_data(data_out),
    .rd_en(rd),
    .clk(clk)

);



endmodule


