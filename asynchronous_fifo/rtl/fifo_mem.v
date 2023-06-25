module fifomem # (
    parameter DSIZE = 8,
    parameter ASIZE = 4,
    localparam DW = DSIZE,
    localparam AW = ASIZE
) (
    input [AW-1:0] wr_addr ,
    input [DW-1:0] wr_data ,
    input wr_en ,

    input [AW-1:0] rd_addr ,
    output reg [DW-1:0] rd_data ,
    input rd_en ,

    input wclk,
    input rclk,
    input o_wfull,
    input o_rempty
);

reg [DW-1:0] mem [(2**AW) -1 :0] ;

always @ ( posedge wclk ) begin
    if ( wr_en && !o_wfull) begin
        mem [ wr_addr ] <= wr_data ;
    end
end

always @ ( posedge rclk ) begin
    if ( rd_en && !o_rempty) begin
        rd_data <= mem [ rd_addr ] ;
    end
end

endmodule
