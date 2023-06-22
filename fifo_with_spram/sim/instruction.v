module instruction (
    input [33:0]    inst,
    input   clk,
    input   rst,
    output  [31:0] DO,
    output  read_valid
);
    wire    [31:0]  DI;
    wire    RE;
    wire    WE;
    assign DI = inst[31:0];
    assign RE = inst[32];
    assign WE = inst[33];
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



