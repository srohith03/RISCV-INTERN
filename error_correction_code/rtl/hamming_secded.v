module hamming_secded (
    input  [3:0] i_secded,
    input  [4:0] i_noise,
    output [3:0] o_secded,
    output       o_1bit_error,
    output       o_2bit_error,
    output       o_parity_error
);


    wire [6:0] enc_hamming_code;
    wire enc_parity;

    wire [6:0] o_noise_hamming_code;
    wire o_noise_parity;





    hamming74_enc ENC (
        .i_data        (i_secded),
        .o_hamming_code(enc_hamming_code),
        .o_parity      (enc_parity)
    );


    noise_add NOISE (
        .i_data ({enc_parity, enc_hamming_code}),
        .i_noise(i_noise),
        .o_data ({o_noise_parity, o_noise_hamming_code})
    );


    hamming74_dec DEC (
        .i_data        (o_noise_hamming_code),
        .i_parity      (o_noise_parity),
        .o_data        (o_secded),
        .o_1bit_error  (o_1bit_error),
        .o_2bit_error  (o_2bit_error),
        .o_parity_error(o_parity_error)
    );





endmodule
