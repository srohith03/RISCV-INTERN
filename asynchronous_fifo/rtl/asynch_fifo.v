

module asynch_fifo # (

    parameter DSIZE = 8,
    parameter ASIZE = 4,
    localparam DW = DSIZE,
    localparam AW = ASIZE
)
(
    input i_wclk,
    input i_wrst_n,
    input i_wr,
    input [DSIZE-1:0] i_wdata,
    output reg o_wfull,
    input i_rclk,
    input i_rrst_n,
    input i_rd,
    output reg [DSIZE-1:0] o_rdata,
    output wire o_rempty
);
    


    wire [AW-1:0] waddr, raddr;
    wire wfull_next, rempty_next;
    reg [AW:0] wgray, wbin, wq2_rgray, wq1_rgray, rgray, rbin, rq2_wgray, rq1_wgray;

    wire [AW:0] wgraynext, wbinnext;
    wire [AW:0] rgraynext, rbinnext;

    // reg [DW-1:0] mem[0:((1<<AW)-1)];




    // initial {wq2_rgray, wq1_rgray} = 0;
    always @(posedge i_wclk or posedge i_wrst_n)
        if (i_wrst_n) {wq2_rgray, wq1_rgray} <= 0;
        else {wq2_rgray, wq1_rgray} <= {wq1_rgray, rgray};




    assign wbinnext = wbin + {{(AW) {1'b0}}, ((i_wr) && (!o_wfull))};
    assign wgraynext = (wbinnext >> 1) ^ wbinnext;

    assign waddr = wbin[AW-1:0];


    // initial {wbin, wgray} = 0;
    always @(posedge i_wclk or posedge i_wrst_n)
        if (i_wrst_n) {wbin, wgray} <= 0;
        else {wbin, wgray} <= {wbinnext, wgraynext};

    assign wfull_next = (wgraynext == {~wq2_rgray[AW:AW-1], wq2_rgray[AW-2:0]});



    // initial o_wfull = 0;
    always @(posedge i_wclk or posedge i_wrst_n)
        if (i_wrst_n) o_wfull <= 1'b0;
        else o_wfull <= wfull_next;


    // always @(posedge i_wclk) if ((i_wr) && (!o_wfull)) mem[waddr] <= i_wdata;

    


    // initial {rq2_wgray, rq1_wgray} = 0;
    always @(posedge i_rclk or posedge i_rrst_n)
        if (i_rrst_n) {rq2_wgray, rq1_wgray} <= 0;
        else {rq2_wgray, rq1_wgray} <= {rq1_wgray, wgray};



    assign rbinnext  = rbin + {{(AW) {1'b0}}, ((i_rd) && (!o_rempty))};

    assign rgraynext = (rbinnext >> 1) ^ rbinnext;


    // initial {rbin, rgray} = 0;
    always @(posedge i_rclk or posedge i_rrst_n)
        if (i_rrst_n) {rbin, rgray} <= 0;
        else {rbin, rgray} <= {rbinnext, rgraynext};


    assign raddr = rbin[AW-1:0];



    assign rempty_next = (rgraynext == rq2_wgray);

    // initial o_rempty = 1;
    always @(posedge i_rclk or posedge i_rrst_n)
        if (i_rrst_n) o_rempty <= 1'b1;
        else o_rempty <= rempty_next;


    // assign o_rdata = mem[raddr];


    fifomem mem(

    .wr_addr(waddr),
    .wr_data(i_wdata),
    .wr_en(i_wr),
    .rd_addr(raddr),
    .rd_data(o_rdata),
    .rd_en(i_rd),
    .wclk(i_wclk),
    .rclk(i_rclk),
    .o_wfull(o_wfull),
    .o_rempty(o_rempty)
);

endmodule













