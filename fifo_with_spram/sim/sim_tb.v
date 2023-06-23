`define clock_delay(CYCLES) \
for (integer  i = 0; i < CYCLES; i = i + 1) begin \
@(posedge clk); \
end

`define WIDTH 3
`define DATA_WIDTH 8


module top(
   input clk,
   input rstn

    );


     initial begin
        if ($test$plusargs("trace") != 0) begin
            $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
            $dumpfile("logs/vlt_dump.vcd");
            $dumpvars();
        end
        $display("[%0t] Model running...\n", $time);
    end

    wire rst = !rstn ;
   
   
    reg [`DATA_WIDTH-1:0]  DI;
    reg RE;
    reg WE;
    wire [`DATA_WIDTH-1:0]  DO;
    wire [`DATA_WIDTH+1:0]  inst;
    wire full;
    wire empty;


    reg [`DATA_WIDTH-1:0] verif_data_q[$];
  reg [`DATA_WIDTH-1:0] verif_DI;



   
      initial begin
    WE = 0;
    DI = 0;
    

    for (int iter=0; iter<2; iter++) begin
      for (int i=0; i<32; i++) begin
        @(posedge clk)
         if(!full) begin
        WE = (i%2 == 0)? 1'b1 : 1'b0;
        if (WE) begin
          DI = $urandom;
          verif_data_q.push_front(DI);
        end
      end
      end
    end
  end

  initial begin
    RE = 0;

    

    for (int iter=0; iter<2; iter++) begin
      for (int i=0; i<32; i++) begin
        @(posedge clk)
         if(!empty) begin
        RE = (i%2 == 0)? 1'b0 : 1'b1;
        if (RE) begin
          verif_DI = verif_data_q.pop_back();
          // Check the rdata against modeled wdata
          $display("Checking rdata: expected wdata = %h, rdata = %h", verif_DI, DO);
          assert(DO === verif_DI) else $error("Checking failed: expected wdata = %h, rdata = %h", verif_DI, DO);
        end
      end
      end
    end

    $finish;
  end
    
    

    assign  inst = {WE, RE, DI};    

    wire read_valid;
    instruction ins1(
        .inst(inst),
        .clk (clk),
        .rst (rst),
        .DO (DO),
        .read_valid (read_valid)
    );

endmodule


