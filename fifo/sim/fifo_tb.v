`define clock_delay(CYCLES) \
for (integer  i = 0; i < CYCLES; i = i + 1) begin \
@(posedge clk); \
end



module top (
    input clk ,
    input rstn );

    // Print some stuff as an example
    // the following enables dumping to vcd
    initial begin
        if ($test$plusargs("trace") != 0) begin
            $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
            $dumpfile("logs/vlt_dump.vcd");
            $dumpvars();
        end
        $display("[%0t] Model running...\n", $time);
    end

    //////////////////////////////////////////////////////
    wire rst = !rstn ;

    reg rd;
    reg wr;
    reg [7:0] data_in;

    wire empty;
    wire full;
    wire [3:0] fifo_cnt;
    wire [7:0] data_out;

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

    // initial begin
    //     clk = 0;
    //     forever #5 clk = ~clk;
    // end

    initial begin
        rd = 0;
        wr = 0;
        data_in = 8'b0;

        `clock_delay(10)

        // Write data into the FIFO
        wr = 1;
        data_in = 8'd42;  // decimal value: 42
        `clock_delay(20)
        wr = 0;

        // Read data from the FIFO
        rd = 1;
        `clock_delay(10)
        rd = 0;

        // Perform more read and write operations
        // Write data 1
        wr = 1;
        data_in = 8'd30;  // decimal value: 30
        `clock_delay(15)
        wr = 0;

        // Write data 2
        wr = 1;
        data_in = 8'd55;  // decimal value: 55
        `clock_delay(10)
        wr = 0;

        // Read data from the FIFO
        rd = 1;
        `clock_delay(5)


        rd = 0;

        // Write data 3
        wr = 1;
        data_in = 8'd87;  // decimal value: 87
        `clock_delay(25)
        wr = 0;

        // Read data from the FIFO
        rd = 1;
        `clock_delay(15)
        rd = 0;

        $finish;
    end

endmodule
