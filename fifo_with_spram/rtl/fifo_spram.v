`define WIDTH 3
`define DATA_WIDTH 8 

module fifo (
    input [`DATA_WIDTH-1:0] DI,
    input RE,
    input WE,
    input clk,
    input rst,
    output [`DATA_WIDTH-1:0] DO,
    output read_valid,
    output r_err,
    output w_err
);

    wire we_n;
    wire re_n;
    wire [`WIDTH-1:0] r_adr;
    wire [`WIDTH-1:0] w_adr;
    wire [`DATA_WIDTH-1:0] d_out;
    wire read_valid_0, read_valid_1;

    request_update update_addr (
        .di(DI),
        .re(RE),
        .we(WE),
        .clk(clk),
        .rst(rst),
        .we_n(we_n),
        .re_n(re_n),
        .r_adr(r_adr),
        .w_adr(w_adr),
        .r_err(r_err),
        .w_err(w_err),
        .data_out(d_out)
    );

    wire ENABLE_0, ENABLE_1;
    wire WE_0, WE_1;
    wire [`WIDTH-2:0] A_0;
    wire    [`DATA_WIDTH-1:0] DI_0;
    wire [`WIDTH-2:0] A_1;
    wire    [`DATA_WIDTH-1:0] DI_1;
    wire [`DATA_WIDTH-1:0] RAM_0_out, RAM_1_out;

    mem_ctr mem_ctr_1 (
        .clk (clk),
        .rst (rst),
        .WE_N (we_n),
        .RE_N (re_n),
        .R_ADR (r_adr),
        .W_ADR (w_adr),
        .DI  (d_out),
        //----------single port ram_0 signal----------//
        .ENABLE_0 (ENABLE_0),
        .WE_0   (WE_0),
        .A_0   (A_0) ,
        .DI_0   (DI_0),
        //----------single port ram_0 signal----------//
        .ENABLE_1 (ENABLE_1),
        .WE_1   (WE_1),
        .A_1   (A_1),
        .DI_1   (DI_1)
    );

    single_port_ram RAM_0 (
        .clk(clk),
        .rst(rst),
        .ena(ENABLE_0),
        .wea(WE_0),
        .din(DI_0),
        .addr(A_0),
        .dout(RAM_0_out),
        .read_valid(read_valid_0)
    );

    single_port_ram RAM_1 (
        .clk(clk),
        .rst(rst),
        .ena(ENABLE_1),
        .wea(WE_1),
        .din(DI_1),
        .addr(A_1),
        .dout(RAM_1_out),
        .read_valid(read_valid_1)
    );

    DO_mux r (
        .clk(clk),
        .rd_en(RE),
        .en0(read_valid_0),
        .en1(read_valid_1),
        .data0(RAM_0_out),
        .data1(RAM_1_out),
        .out(DO),
        .read_valid(read_valid)
    );

endmodule
