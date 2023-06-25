module top # (

    parameter DSIZE = 8,
    parameter ASIZE = 4,
    localparam DW = DSIZE,
    localparam AW = ASIZE
)
(
    input i_wclk,
    input i_rclk,
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

    wire i_wrst_n = !rstn;
    wire i_rrst_n = !rstn; 
   

    wire [DSIZE-1:0] o_rdata;
    wire o_wfull;
    wire o_rempty;
    reg [DSIZE-1:0] i_wdata;
    reg i_wr;
    reg i_rd;

    // Model a queue for checking data
    reg [DSIZE-1:0] verif_data_q  [$];
    reg [DSIZE-1:0] verif_i_wdata;


    // Instantiate the FIFO
    asynch_fifo #(DSIZE, ASIZE) dut (.*);

   

    initial begin
        i_wr = 1'b0;
        i_wdata = '0;
        

        for (int iter = 0; iter < 2; iter++) begin
            for (int i = 0; i < 32; i++) begin
                @(posedge i_wclk)
                if (!o_wfull) begin
                    i_wr = (i % 2 == 0) ? 1'b1 : 1'b0;
                    if (i_wr) begin
                        /* verilator lint_off WIDTHTRUNC */
                        i_wdata = $urandom;
                        /* verilator lint_on WIDTHTRUNC */
                        verif_data_q.push_front(i_wdata);
                    end
                end
            end
        end
    end

    initial begin
        i_rd = 1'b0;

       

        for (int iter = 0; iter < 2; iter++) begin
            for (int i = 0; i < 8; i++) begin
                @(posedge i_rclk)
                if (!o_rempty) begin
                    i_rd = (i % 6 == 0) ? 1'b1 : 1'b0;
                    if (i_rd) begin
                        verif_i_wdata = verif_data_q.pop_back();
                        // Check the rdata against modeled wdata
                        $display("Checking rdata: expected wdata = %h, rdata = %h", verif_i_wdata,
                                 o_rdata);
                        assert (o_rdata === verif_i_wdata)
                        else
                            $error(
                                "Checking failed: expected wdata = %h, rdata = %h",
                                verif_i_wdata,
                                o_rdata
                            );
                    end
                end
            end
        end

        $finish;
    end

endmodule
