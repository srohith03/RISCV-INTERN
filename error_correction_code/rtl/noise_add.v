


module noise_add (
    input  [7:0] i_data,
    input  [4:0] i_noise,
    output [7:0] o_data
);

    reg [6:0] noise;



    always_comb begin
        case (i_noise[2:0])
            3'd1: noise = {i_noise[3], 6'b000001};
            3'd2: noise = {i_noise[3], 6'b000010};
            3'd3: noise = {i_noise[3], 6'b000100};
            3'd4: noise = {i_noise[3], 6'b001000};
            3'd5: noise = {i_noise[3], 6'b010000};
            3'd6: noise = {i_noise[3], 6'b100000};
            3'd7: noise = {6'b100000, i_noise[3]};
            default: noise = {i_noise[3], 6'b000000};
        endcase
    end

    assign o_data = i_data ^ {i_noise[4], noise};

endmodule
