`define WIDTH 3
`define DATA_WIDTH 8

module single_port_ram (
    input clk,
    input rst,
    input ena,
    input wea,
    input [`DATA_WIDTH-1:0] din,
    input [`WIDTH-2:0] addr,
    output reg [`DATA_WIDTH-1:0] dout,
    output reg read_valid
);
    parameter num = 1 << `WIDTH;
    reg [`DATA_WIDTH-1:0] ram[num-1:0];
    
    always @(posedge clk) begin
        if (rst) begin
            for (int i = 0; i < num; i = i + 1) begin
                ram[i] = 0;
            end
            dout <= 0;
            read_valid <= 1'b0;
        end else if (ena && wea) begin
            ram[addr]  <= din;
            read_valid <= 1'b0;
        end else if (ena && ~wea) begin
            dout <= ram[addr];
            read_valid <= 1'b1;
        end else read_valid <= 1'b0;
    end


endmodule
