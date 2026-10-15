typedef enum logic [2:0] {
    I_immediate = 3'b000,
    S_immediate = 3'b001,
    B_immediate = 3'b010,
    U_immediate = 3'b011,
    J_immediate = 3'b100
} immediate_enum;


module immediate_generator(
    input logic [31:0] instruction,
    input logic [2:0] immediate_type,
    output logic [31:0] immediate
);

always_comb begin
    case (immediate_type)
        I_immediate:immediate = {{20{instruction[31]}}, instruction[31:20]};
        S_immediate:immediate = {{20{instruction[31]}}, instruction[31:25], instruction[11:7]};
        B_immediate:immediate = {{19{instruction[31]}}, instruction[31], instruction[7], instruction[30:25], instruction[11:8],1'b0};
        U_immediate:immediate = {instruction[31:12], 12'h0000};
        J_immediate:immediate = {{11{instruction[31]}}, instruction[31], instruction[19:12], instruction[20], instruction[30:21],1'b0};
        default: immediate = 32'h0000_0000;
    endcase
end

endmodule
