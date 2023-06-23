`define WIDTH 3
`define DATA_WIDTH 8


module instruction (
    input [`DATA_WIDTH+1:0]    inst,
    input   clk,
    input   rst,
    output  [`DATA_WIDTH-1:0] DO,
    output  read_valid
);
    wire    [`DATA_WIDTH-1:0]  DI;
    wire    RE;
    wire    WE;
    assign DI = inst[`DATA_WIDTH-1:0];
    assign RE = inst[`DATA_WIDTH];
    assign WE = inst[`DATA_WIDTH+1];
    fifo f1 (
        .DI        (DI),
        .RE        (RE),
        .WE        (WE),
        .clk       (clk),
        .rst       (rst),
        .DO        (DO),
        .read_valid(read_valid)
    );


endmodule



