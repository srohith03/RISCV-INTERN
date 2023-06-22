


module fifo (
    input reg [DEPTH-1:0] data_in,
    input clk,
    rst,
    rd,
    wr,
    output empty,
    full,
    output reg [WIDTH:0] fifo_cnt,
    output reg [DEPTH-1:0] data_out
);

parameter WIDTH = 3;
parameter DEPTH = (1 << WIDTH);

    reg [DEPTH-1:0] fifo_ram[DEPTH-1 : 0];
    reg [WIDTH-1:0] rd_ptr, wr_ptr;

    assign empty = (fifo_cnt == 0);
    assign full  = (fifo_cnt == DEPTH);


   


    always @(posedge clk) begin

        if (wr && !full) fifo_ram[wr_ptr] <= data_in;
        else if (wr && rd) fifo_ram[wr_ptr] <= data_in;
    end

    always @(posedge clk or posedge rst) begin
        if(rst) 
        data_out <= 0;
        else begin
            if (rd && !empty)
             data_out <= fifo_ram[rd_ptr];
        else if (rd && wr)
         data_out <= fifo_ram[rd_ptr];
         else
         data_out <= data_out;
    end
    end

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
                2'b10: fifo_cnt <= (fifo_cnt == DEPTH) ? DEPTH : fifo_cnt + 1;
                2'b11: fifo_cnt <= fifo_cnt;
                default fifo_cnt <= fifo_cnt;
            endcase
        end
    end
endmodule


