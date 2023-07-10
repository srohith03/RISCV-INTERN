module hamming_enc #(
    parameter K      = 4,
    parameter P0_LSB = 1, // if P0_LSB =1 ,extra parity bit is located at LSB
                          // if P0_LSB =0 ,extra parity bit is located at MSB


    parameter m = calculate_m(K),
    parameter n = m + K
) (
    input  [K-1:0] d_i,
    output [n : 0] q_o, // (n+1) bit data includes the extra parity bit too.

    output [m : 1] p_o,           // m parity bits.
    output         p0_o           //extra parity bit.
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

//This function stores the input k data bits in the n bit wide data according to their respective locations

// for ex, k=4,m=3,n=7
//  n = {k[3:1],m[3],k[0],m[2:1]}  


    function [n:1] store_dbits_in_codeword;
        input [K-1:0] d;

        integer bit_idx, cw_idx; //bit_idx is the index of k bit data,, cw_idx is the index of n bit data
        begin


            store_dbits_in_codeword = 0;

            bit_idx = 0;
            for (cw_idx = 1; cw_idx <= n; cw_idx++)
            
            if (2 ** $clog2(cw_idx) != cw_idx) begin  // this condition gives us cw_idx = 3,5,6,7 (for n =7),,remaining 1,2,4 are for parity bits
    store_dbits_in_codeword[cw_idx] = d[bit_idx];
    bit_idx = bit_idx + 1;
end
        end
    endfunction

//This function calculates the values of the parity bits
    function [m:1] calculate_p;
        input [n:1] cw; //codeword

        integer p_idx, cw_idx; //p_idx is the parity index
        begin

            calculate_p = 0;

            for (p_idx = 1; p_idx <= m; p_idx++)
            for (cw_idx = 1; cw_idx <= n; cw_idx++)
            if (|(2 ** (p_idx - 1) & cw_idx)) calculate_p[p_idx] = calculate_p[p_idx] ^ cw[cw_idx]; 
        end
    endfunction

//This function stores the parity bits in our n bit codeword according to their respective positions
//parity bits are stored in index's which are powers of 2.
    function [n:1] store_p_in_codeword;
        input [n:1] cw;
        input [m:1] p;

        integer i;
        begin

            store_p_in_codeword = cw;


            for (i = 1; i <= m; i = i + 1) store_p_in_codeword[2**(i-1)] = p[i];
        end
    endfunction




    reg [n:1] cw_w_dbits;
    reg [n:1] cw;







    assign cw_w_dbits = store_dbits_in_codeword(d_i);


    assign p_o = calculate_p(cw_w_dbits);


    assign cw = store_p_in_codeword(cw_w_dbits, p_o);



    assign p0_o = ^cw; 
    assign q_o = P0_LSB ? {cw, p0_o} : {p0_o, cw};

endmodule
