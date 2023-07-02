module top ();
    reg [3:0] i_secded;
    reg [4:0] i_noise;

    wire [3:0] o_secded;
    wire o_1bit_error;
    wire o_2bit_error;
    wire o_parity_error;

    reg unsigned i;

    hamming_secded SECDED (
        .i_secded      (i_secded),
        .i_noise       (i_noise),
        .o_secded      (o_secded),
        .o_1bit_error  (o_1bit_error),
        .o_2bit_error  (o_2bit_error),
        .o_parity_error(o_parity_error)
    );


    initial begin
        for (i = 0; i < 16; i = i + 1) begin
            i_secded = i[3:0];
            i_noise  = 0;
            #1;
        end


        #10;

        for (i = 0; i <= 16; i = i + 1) begin
            i_secded = i[3:0];
            i_noise  = (i == 16) ? 5'b10000 : $urandom_range(7, 1);
        end
        $finish;
    end
endmodule
