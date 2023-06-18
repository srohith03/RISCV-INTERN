

module asynch_fifo(areset_n,wr_clk,datain,write,rd_clk,read,q,empty,full);
	
parameter DWIDTH=8;
parameter AWIDTH=6;

input wr_clk;
input areset_n;
input [DWIDTH-1:0] datain;
input write;

input rd_clk;
input read;
output [DWIDTH-1:0] q;
output full;
output empty;


wire [DWIDTH-1:0] q;
wire [DWIDTH-1:0] data_int;
reg full;
wire empty;
reg [AWIDTH-1:0] wptr, rptr;
reg [AWIDTH-1:0] wptr_ms, wptr_rd;
reg [AWIDTH-1:0] rptr_ms, rptr_wr;
reg [AWIDTH:0] wptr_next, rptr_wr_bin;
reg [AWIDTH-1:0] rptr_gray, wptr_gray;
reg [AWIDTH:0] full;
integer i;

reg areset_n_ms, areset_n_wr;

always @(posedge wr_clk ) begin
	areset_n_ms <= areset_n;
	areset_n_wr <= areset_n_ms;
end


always @(posedge wr_clk or negedge areset_n_wr) begin
	if (!areset_n_wr) begin
		wptr <=  {AWIDTH{1'b0}};
	end else if (write) begin
		wptr <=  wptr+1;
	end
end
assign wptr_gray = (wptr >>1) ^ wptr;
assign wptr_next = wptr+1;


always @(posedge wr_clk ) begin
	rptr_ms <= rptr_gray;
	rptr_wr <= rptr_ms;
end

always@(*)
   for (i=0; i<AWIDTH; i = i+1) begin
     rptr_wr_bin[i] = ^(rptr_wr >> i);
   end


assign full  = (wptr_next == rptr_wr_bin);







always @(posedge rd_clk ) begin
	wptr_ms <= wptr_gray;
	wptr_rd <= wptr_ms;
end






always @(posedge rd_clk or negedge areset_n_wr) begin
	if (!areset_n_wr) begin
		rptr <=  {AWIDTH{1'b0}};
	end else if (read) begin
		rptr <=  rptr+1;;
	end
end



assign rptr_gray = (rptr>>1) ^ rptr;

assign q = data_int;


assign	empty = (rptr_gray == wptr_rd);



dp_dcram #(DWIDTH, AWIDTH) dp_dcram_0(
	
	.wr_clk(wr_clk),
	.addr0(wptr),
	.data0(datain),
	.we0(write),
	
	
	.rd_clk(rd_clk),
	.addr1(rptr),
	.q1(data_int),
	.re1(read)
);

endmodule 












