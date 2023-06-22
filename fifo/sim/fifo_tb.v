parameter WIDTH = 3;
parameter DEPTH = (1 << WIDTH);


`define clock_delay(CYCLES) \
for (integer  i = 0; i < CYCLES; i = i + 1) begin \
@(posedge clk); \
end



module top (
    input clk ,
    input rstn );

   


    
    initial begin
        if ($test$plusargs("trace") != 0) begin
            $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
            $dumpfile("logs/vlt_dump.vcd");
            $dumpvars();
        end
        $display("[%0t] Model running...\n", $time);
    end

    
    wire rst = !rstn ;

    reg rd;
    reg wr;
    reg [DEPTH-1:0] data_in;

    wire empty;
    wire full;
    wire [WIDTH:0] fifo_cnt;
    wire [DEPTH-1:0] data_out;

     reg [DEPTH-1:0] verif_data_q[$];
  reg [DEPTH-1:0] verif_data_in;


    fifo dut (
        .data_in(data_in),
        .clk(clk),
        .rst(rst),
        .rd(rd),
        .wr(wr),
        .empty(empty),
        .full(full),
        .fifo_cnt(fifo_cnt),
        .data_out(data_out)
    );

    initial begin
    wr = 0;
    rd = 0;
    data_in = 0;

    for (int iter=0; iter<2; iter++) begin
      for (int i=0; i<32; i++) begin
        @(posedge clk)

         if (!full) begin
        wr = (i%2 == 0)? 1'b1 : 1'b0;
        if (wr) begin
          data_in = $urandom;
          verif_data_q.push_front(data_in);
        end
      end

      if(!empty) begin
        rd = (i%4 == 0) ? 1 : 0;
        if (rd) begin
            verif_data_in = verif_data_q.pop_back();
            $display("Checking rdata: expected wdata = %h, rdata = %h", verif_data_in, data_out);
          assert(data_out === verif_data_in) else $error("Checking failed: expected wdata = %h, rdata = %h", verif_data_in, data_out);

        end

      end
    end
  end

  

    $finish;
  end

endmodule




