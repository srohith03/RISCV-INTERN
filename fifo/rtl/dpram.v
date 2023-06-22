module dpram # (
    parameter integer DATA_WIDTH = 32 ,
    parameter integer ADDR_WIDTH = 12
) (
    input [ADDR_WIDTH-1:0] wr_addr ,
    input [DATA_WIDTH-1:0] wr_data ,
    input wr_en ,

    input [ADDR_WIDTH-1:0] rd_addr ,
    output reg [DATA_WIDTH-1:0] rd_data ,
    input rd_en ,

    input clk
);

reg [DATA_WIDTH-1:0] mem [(2**ADDR_WIDTH) -1 :0] ;

always @ ( posedge clk ) begin
    if ( wr_en ) begin
        mem [ wr_addr ] <= wr_data ;
    end
end

always @ ( posedge clk ) begin
    if ( rd_en ) begin
        rd_data <= mem [ rd_addr ] ;
    end
end

endmodule


