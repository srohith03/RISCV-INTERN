

module hamming74_dec (
    input  [6:0] i_data,
    input        i_parity,
    output [3:0] o_data,
    output       o_1bit_error,
    output       o_2bit_error,
    output       o_parity_error
);


    reg p1, p2, p4;
    reg [6:0] syndrome;
    wire [6:0] data_decoded;
    wire overall_parity;


    always_comb begin
        p1 = i_data[0] ^ i_data[2] ^ i_data[4] ^ i_data[6];
        p2 = i_data[1] ^ i_data[2] ^ i_data[5] ^ i_data[6];
        p4 = i_data[3] ^ i_data[4] ^ i_data[5] ^ i_data[6];
    end


    always_comb begin
        case ({
            p4, p2, p1
        })
            3'd1: syndrome = 7'b0000001;
            3'd2: syndrome = 7'b0000010;
            3'd3: syndrome = 7'b0000100;
            3'd4: syndrome = 7'b0001000;
            3'd5: syndrome = 7'b0010000;
            3'd6: syndrome = 7'b0100000;
            3'd7: syndrome = 7'b1000000;
            default: syndrome = 7'b0;
        endcase
    end

    assign data_decoded = syndrome ^ i_data;



    assign overall_parity = ^{i_parity, i_data};


    assign o_1bit_error = ({p4, p2, p1} != 3'b0) & overall_parity;
    assign o_2bit_error = ({p4, p2, p1} != 3'b0) & ~overall_parity;
    assign o_parity_error = ({p4, p2, p1} == 3'b0) & overall_parity;

    assign o_data = {data_decoded[6:4], data_decoded[2]};

endmodule
