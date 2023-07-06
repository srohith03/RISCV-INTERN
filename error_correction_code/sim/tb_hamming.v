module top #(

     parameter K         = 8,
    parameter m = calculate_m(K),
    parameter n = m + K
);


 initial begin
        if ($test$plusargs("trace") != 0) begin
            $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
            $dumpfile("logs/vlt_dump.vcd");
            $dumpvars();
        end
        $display("[%0t] Model running...\n", $time);
    end



function integer calculate_m;
  input integer k;

  integer m;
begin
  m=1;
  while (2**m < m+k+1) m++;

  calculate_m = m;
end
endfunction //calculate_m


    reg [K-1:0] i_secded;
    

    wire [K-1:0] o_secded;
    wire o_1bit_error;
    wire o_2bit_error;
    wire sb_fix_o;

    integer i;

    hamming_secded SECDED (
        .i_secded      (i_secded),
        .o_secded      (o_secded),
        .o_1bit_error  (o_1bit_error),
        .o_2bit_error  (o_2bit_error),
        .sb_fix_o       (sb_fix_o)
    );


    initial begin
        #10;
        
        for (i = 0; i < 16; i = i + 1) begin
            i_secded = i;
            #1;
        end
        
        $finish;
    end
endmodule