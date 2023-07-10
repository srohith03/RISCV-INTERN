module hamming_dec #(
    parameter K       = 4,
    


    parameter P0_LSB = 1,



    parameter m = calculate_m(K),
    parameter n = m + K
) (


    input      [n : 0] d_i,
    output reg [K-1:0] q_o,
    output reg [m : 0] syndrome_o,


    output reg sb_err_o,
    output reg db_err_o,
    output reg sb_fix_o
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

//this function calculates the syndrome
// for ex if syndrome = 011, this indicates that error is  located at index=3.(for k=4,m=3)

    function [m:1] calculate_syndrome;
        input [n:0] cw;

        integer p_idx, cw_idx;
        begin

            calculate_syndrome = 0;

            for (p_idx = 1; p_idx <= m; p_idx++)
            for (cw_idx = 1; cw_idx <= n; cw_idx++)
            if (|(2 ** (p_idx - 1) & cw_idx))
                calculate_syndrome[p_idx] = calculate_syndrome[p_idx] ^ cw[cw_idx];
        end
    endfunction

//This functions corrects the codeword by flipping the bit which is located at syndrome index

    function [n:0] correct_codeword;
        input [n:0] cw;
        input [m:1] syndrome;
        begin

            correct_codeword = cw;


            correct_codeword[syndrome] = ~correct_codeword[syndrome];
        end
    endfunction

//This function extracts the k bit data from the codeword

    function [K-1:0] extract_q;
        input [n:0] cw;

        integer bit_idx, cw_idx;
        begin

            bit_idx = 0;
            for (cw_idx = 1; cw_idx <= n; cw_idx++)
            if (2 ** $clog2(cw_idx) != cw_idx) 
            begin
            extract_q[bit_idx] = cw[cw_idx];
            bit_idx = bit_idx+1;
            end
        end
    endfunction

//if information_error =1,then there is error in the k bit data, or else the error is in parity bits.
    function information_error;
        input [m:1] syndrome;

        integer i;
        reg [n:0] tmp;
        begin

            tmp = 0;
            for (i = 1; i < n; i++) begin
                if ((i == syndrome) && (i != 2 ** $clog2(i - 1))) tmp[i] = 1'b1;
            end


            information_error = |tmp;
        end
    endfunction




    wire          parity;
    reg         parity_reg;
    wire  [m : 1] syndrome;
    reg [m : 1] syndrome_reg;
    wire  [n : 0] cw_fixed;

    wire  [n : 0] d;
    reg [n : 0] d_reg;
    wire  [K-1:0] q;
    wire          sb_err;
    wire          db_err;
    wire          sb_fix;





    assign d = P0_LSB ? d_i : {d_i[n-1:0], d_i[n]};


    assign parity = ^d;


    assign syndrome = calculate_syndrome(d);


    


        assign d_reg        = d;
        assign parity_reg   = parity;
        assign syndrome_reg = syndrome;

  


    assign cw_fixed = correct_codeword(d_reg, syndrome_reg); //fining the codeword


    assign q = extract_q(cw_fixed);


    assign sb_err = parity_reg & |syndrome_reg;
    assign db_err = ~parity_reg & |syndrome_reg;
    assign sb_fix = parity_reg & |information_error(syndrome_reg);


  



        
            always_comb begin
                q_o        = q;
                syndrome_o = P0_LSB ? {syndrome_reg, parity_reg} : {parity_reg, syndrome_reg};
                sb_err_o   = sb_err;
                db_err_o   = db_err;
                sb_fix_o   = sb_fix;
            end
        
    

endmodule
