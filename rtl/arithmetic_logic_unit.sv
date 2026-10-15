module arithmetic_logic_unit(
    input logic [31:0] input1,
    input logic [31:0] input2,
    input logic [3:0] op_select,
    output logic [31:0] result,
    output logic zero_flag,
    output logic overflow_flag,
    output logic negative_flag,
    output logic carry_flag,
    output logic invalid_flag
);

logic [31:0] inverted_input2;
assign inverted_input2 = ~input2;

typedef enum logic [3:0]
{
    ADD = 4'b0000,
    SUB = 4'b1000,
    SLL = 4'b0001,
    SLT = 4'b0010,
    SLTU = 4'b0011,
    XOR = 4'b0100,
    SRL = 4'b0101,
    SRA = 4'b1101,
    OR = 4'b0110,
    AND = 4'b0111,
    PASS_B = 4'b1111
} op_codes;

always_comb begin
    carry_flag = 1'b0;
    overflow_flag = 1'b0;
    invalid_flag = 1'b0;

    case (op_select)
        ADD:
        begin
            {carry_flag, result} = input1 + input2;
            if((input1[31] ^ result[31]) && ~(input1[31]^input2[31])) overflow_flag = 1'b1; else overflow_flag = 1'b0;
        end
        SUB:
        begin
            {carry_flag, result} = input1 + inverted_input2 + 1;
            if((input1[31] ^ result[31]) && (input1[31] ^ input2[31])) overflow_flag = 1'b1; else overflow_flag = 1'b0;
        end
        SLL: result = input1 << input2[4:0];
        SLT: result = $signed(input1) < $signed(input2) ? 32'h00000001 : 32'h00000000;
        SLTU: result = input1 < input2? 32'h00000001 : 32'h00000000;
        XOR: result = input1 ^ input2;
        SRL: result = input1 >> input2[4:0];
        SRA: result = $signed(input1) >>> input2[4:0];
        OR: result = input1 | input2;
        AND: result = input1 & input2;
        PASS_B: result = input2;
        default: //invalid
        begin
            invalid_flag = 1'b1;
            result = 32'h00000000;
        end
    endcase

    if(result[31] == 1'b1) negative_flag = 1'b1; else negative_flag = 1'b0;
    if(result == 32'h00000000) zero_flag = 1'b1; else zero_flag = 1'b0;
end

endmodule
