module hamming_secded #(

    parameter K = 8,
    parameter m = calculate_m(K),
    parameter n = m + K
) (
    input  [K-1:0] i_secded,
    output [K-1:0] o_secded,
    output         o_1bit_error,
    output         o_2bit_error,
    output         sb_fix_o 
);


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






    hamming_enc ENC (
        .d_i (i_secded),
        .q_o (enc_hamming_code),
        .p_o (p_o),
        .p0_o(p0_o)
    );

    wire [m:0] syndrome_o;

    hamming_dec DEC (
        .d_i       (enc_hamming_code),
        .q_o       (o_secded),
        .sb_err_o  (o_1bit_error),
        .db_err_o  (o_2bit_error),
        .sb_fix_o  (sb_fix_o),
        .syndrome_o(syndrome_o)
    );





endmodule
