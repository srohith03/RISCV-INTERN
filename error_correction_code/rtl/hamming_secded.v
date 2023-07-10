module hamming_secded #( 

    parameter K = 4,   //taking k bits wide data
    parameter m = calculate_m(K),   //adding m redundant bits
    parameter n = m + K   //total n bit data including redundant bits
) (
    input  [K-1:0] i_secded,    //input k bit data
    output [K-1:0] o_secded,    //output corrected k bit data
    output         o_1bit_error,   //flag which indicates 1 bit error
    output         o_2bit_error,    //flag which indicates 2 bit error
    output         sb_fix_o         //flag which indicates the single bit error is fixed
);

    //function for calculating m , for k=4, m = 3,n=7

    function integer calculate_m;
        input integer k;

        integer m;
        begin
            m = 1;
            while (2 ** m < m + k + 1) m++;

            calculate_m = m;
        end
    endfunction



    wire [n:0] enc_hamming_code;
    wire [m:1] p_o;
    wire p0_o;

//ENCODER instantiation

    hamming_enc ENC (
        .d_i (i_secded),
        .q_o (enc_hamming_code),
        .p_o (p_o),
        .p0_o(p0_o)
    );

//Adding noise to n bit data

    reg [n:0] noisy_hamming_code;
    reg [($clog2(n+1))-1:0] error_index; 
    
    always @(enc_hamming_code) begin
        error_index = $random % n;
        if (error_index != 0) begin
            if (enc_hamming_code[error_index] == 1'b1)
                noisy_hamming_code = enc_hamming_code;
            else
                noisy_hamming_code = enc_hamming_code ^ (1 << error_index);
        end
    end


//DECODER instantiation

    wire [m:0] syndrome_o;

    hamming_dec DEC (
        .d_i       (noisy_hamming_code),
        .q_o       (o_secded),
        .sb_err_o  (o_1bit_error),
        .db_err_o  (o_2bit_error),
        .sb_fix_o  (sb_fix_o),
        .syndrome_o(syndrome_o)
    );





endmodule
