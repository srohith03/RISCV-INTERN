


module fifo (
    input reg [DATA_WIDTH-1:0] data_in,
    input clk,
    rst,
    rd,
    wr,
    output empty,
    full,
    output reg [ADDR_WIDTH:0] fifo_cnt,
    output reg [DATA_WIDTH-1:0] data_out
);

parameter ADDR_WIDTH = 12;
parameter DATA_WIDTH = 32;

    
    reg [ADDR_WIDTH-1:0] rd_ptr, wr_ptr;

    assign empty = (fifo_cnt == 0);
    assign full  = (fifo_cnt == DATA_WIDTH);


    always @(posedge clk or posedge rst) begin
        if (rst) begin
            wr_ptr <= 0;
            rd_ptr <= 0;
        end else begin
            wr_ptr <= ((wr && !full) || (wr && rd)) ? wr_ptr + 1 : wr_ptr;

            rd_ptr <= ((rd && !empty) || (wr && rd)) ? rd_ptr + 1 : rd_ptr;
        end
    end

    always @(posedge clk or posedge rst) begin
        if (rst) fifo_cnt <= 0;
        else begin
            case ({
                wr, rd
            })
                2'b00: fifo_cnt <= fifo_cnt;
                2'b01: fifo_cnt <= (fifo_cnt == 0) ? 0 : fifo_cnt - 1;
                2'b10: fifo_cnt <= (fifo_cnt == DATA_WIDTH) ? DATA_WIDTH : fifo_cnt + 1;
                2'b11: fifo_cnt <= fifo_cnt;
                default fifo_cnt <= fifo_cnt;
            endcase
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


