module arithmetic_logic_unit_tb;

logic [31:0] input1;
logic [31:0] input2;
logic [31:0] result;
logic [3:0] op_select;
logic zero_flag;
logic overflow_flag;
logic negative_flag;
logic invalid_flag;
logic carry_flag;

arithmetic_logic_unit dut(.*);

task automatic check(
    input string label,
    input logic [3:0] operation,
    input logic [31:0] test_a,
    input logic [31:0] test_b,
    input logic [31:0] expected_result,
    input logic [4:0] expected_flags // zero,negative,carry,overflow,invalid    
);

input1 = test_a;
input2 = test_b;
op_select = operation;
#1;
if(result !== expected_result || expected_flags !== {zero_flag,negative_flag,carry_flag,overflow_flag,invalid_flag})
    $error("%s error has occured, The result is: %h, and the flags are %b", label ,result,{zero_flag,negative_flag,carry_flag,overflow_flag,invalid_flag});
endtask

initial begin
    $dumpfile("arithmetic_logic_unit.fst");
    $dumpvars(0,arithmetic_logic_unit_tb);

    //Addition
    check("Add 1", 4'b0000, 32'h00000005, 32'h00000007, 32'h0000000C, 5'b00000);
    check("Add 2", 4'b0000, 32'h00000000, 32'h00000000, 32'h00000000, 5'b10000);
    check("Add 3", 4'b0000, 32'hFFFFFFFF, 32'h00000001, 32'h00000000, 5'b10100);
    check("Add 4", 4'b0000, 32'h7FFFFFFF, 32'h00000001, 32'h80000000, 5'b01010);
    check("Add 5", 4'b0000, 32'h00000005, 32'hFFFFFFF6, 32'hFFFFFFFB, 5'b01000);
    check("Add 6", 4'b0000, 32'h80000000, 32'h80000000, 32'h00000000, 5'b10110);
    check("Add 7", 4'b0000, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'hFFFFFFFE, 5'b01100);
    check("Add 8", 4'b0000, 32'h80000000, 32'hFFFFFFFF, 32'h7FFFFFFF, 5'b00110);

    //Subtraction
    check("Sub 1", 4'b1000, 32'h00000005, 32'h00000007, 32'hFFFFFFFE, 5'b01000);
    check("Sub 2", 4'b1000, 32'h00000007, 32'h00000005, 32'h00000002, 5'b00100);
    check("Sub 3", 4'b1000, 32'h00000005, 32'h00000005, 32'h00000000, 5'b10100);
    check("Sub 4", 4'b1000, 32'h00000000, 32'h00000000, 32'h00000000, 5'b10100);
    check("Sub 5", 4'b1000, 32'h80000000, 32'h00000001, 32'h7FFFFFFF, 5'b00110);
    check("Sub 6", 4'b1000, 32'h7FFFFFFF, 32'hFFFFFFFF, 32'h80000000, 5'b01010);
    check("Sub 7", 4'b1000, 32'h00000000, 32'h80000000, 32'h80000000, 5'b01010);

    //AND
    check("AND 1", 4'b0111, 32'hF0F0F0F0, 32'hFF00FF00, 32'hF000F000, 5'b01000); // bitwise, N from bit 31
    check("AND 2", 4'b0111, 32'hAAAAAAAA, 32'h55555555, 32'h00000000, 5'b10000); // disjoint bits give zero

    //OR
    check("OR 1", 4'b0110, 32'hF0F0F0F0, 32'h0F0F0F0F, 32'hFFFFFFFF, 5'b01000); // all-ones result
    check("OR 2", 4'b0110, 32'h00000000, 32'h00000000, 32'h00000000, 5'b10000); // zero stays zero

    //XOR
    check("XOR 1", 4'b0100, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'h00000000, 5'b10000); // self-XOR is zero
    check("XOR 2", 4'b0100, 32'hAAAAAAAA, 32'h55555555, 32'hFFFFFFFF, 5'b01000); // complementary patterns

    //SLL
    check("SLL 1", 4'b0001, 32'h00000001, 32'h00000000, 32'h00000001, 5'b00000); // shift by 0
    check("SLL 2", 4'b0001, 32'h00000001, 32'h0000001F, 32'h80000000, 5'b01000); // shift by 31 reaches bit 31
    check("SLL 3", 4'b0001, 32'hFFFFFFFF, 32'h00000004, 32'hFFFFFFF0, 5'b01000); // zero fill on the right
    check("SLL 4", 4'b0001, 32'h00000001, 32'h00000025, 32'h00000020, 5'b00000); // only b[4:0] counts (37 -> 5)
    check("SLL 5", 4'b0001, 32'h00000001, 32'h00000020, 32'h00000001, 5'b00000); // 32 -> 0, not "shift everything out"
    check("SLL 6", 4'b0001, 32'h80000000, 32'h00000001, 32'h00000000, 5'b10000); // bit shifted out vanishes, carry stays 0
    check("SLL 7", 4'b0001, 32'h12345678, 32'h00000008, 32'h34567800, 5'b00000); // multi-bit shift, top bits dropped

    //SRL
    check("SRL 1", 4'b0101, 32'h80000010, 32'h00000004, 32'h08000001, 5'b00000); // zero fill on the left
    check("SRL 2", 4'b0101, 32'h80000000, 32'h0000001F, 32'h00000001, 5'b00000); // shift by 31

    //SRA
    check("SRA 1", 4'b1101, 32'h80000010, 32'h00000004, 32'hF8000001, 5'b01000); // sign fill
    check("SRA 2", 4'b1101, 32'h80000000, 32'h0000001F, 32'hFFFFFFFF, 5'b01000); // all sign bits
    check("SRA 3", 4'b1101, 32'h7FFFFFF0, 32'h00000004, 32'h07FFFFFF, 5'b00000); // positive operand, zero fill
    check("SRA 4", 4'b1101, 32'h80000010, 32'hFFFFFFE4, 32'hF8000001, 5'b01000); // upper bits of b ignored

    //SLT
    check("SLT 1", 4'b0010, 32'h80000000, 32'h00000001, 32'h00000001, 5'b00000); // signed: -2^31 < 1
    check("SLT 2", 4'b0010, 32'h00000001, 32'h80000000, 32'h00000000, 5'b10000); // the reverse
    check("SLT 3", 4'b0010, 32'hFFFFFFFF, 32'h00000000, 32'h00000001, 5'b00000); // -1 < 0
    check("SLT 4", 4'b0010, 32'h7FFFFFFF, 32'hFFFFFFFF, 32'h00000000, 5'b10000); // sign-bit-of-difference trap
    check("SLT 5", 4'b0010, 32'h80000000, 32'h7FFFFFFF, 32'h00000001, 5'b00000); // most negative < most positive
    check("SLT 6", 4'b0010, 32'h00000005, 32'h00000005, 32'h00000000, 5'b10000); // equal is not less-than
    check("SLT 7", 4'b0010, 32'h00000003, 32'h00000005, 32'h00000001, 5'b00000); // both positive
    check("SLT 8", 4'b0010, 32'h00000005, 32'h00000003, 32'h00000000, 5'b10000); // the reverse

    //SLTU
    check("SLTU 1", 4'b0011, 32'h80000000, 32'h00000001, 32'h00000000, 5'b10000); // unsigned: 2^31 > 1
    check("SLTU 2", 4'b0011, 32'h00000001, 32'h80000000, 32'h00000001, 5'b00000); // the reverse
    check("SLTU 3", 4'b0011, 32'hFFFFFFFF, 32'h00000000, 32'h00000000, 5'b10000); // max unsigned vs 0
    check("SLTU 4", 4'b0011, 32'h7FFFFFFF, 32'hFFFFFFFF, 32'h00000001, 5'b00000); // differs from SLT 4
    check("SLTU 5", 4'b0011, 32'h80000000, 32'h7FFFFFFF, 32'h00000000, 5'b10000); // differs from SLT 5
    check("SLTU 6", 4'b0011, 32'h00000005, 32'h00000005, 32'h00000000, 5'b10000); // equal is not less-than
    check("SLTU 7", 4'b0011, 32'h00000003, 32'h00000005, 32'h00000001, 5'b00000); // both positive, agrees with SLT
    check("SLTU 8", 4'b0011, 32'h00000005, 32'h00000003, 32'h00000000, 5'b10000); // the reverse

    //PASS_B
    check("PASS_B 1", 4'b1111, 32'h12345678, 32'h80000000, 32'h80000000, 5'b01000); // passes b, ignores a
    check("PASS_B 2", 4'b1111, 32'hFFFFFFFF, 32'h00000000, 32'h00000000, 5'b10000); // zero result

    //Invalid codes: result 0, zero and invalid flags set
    check("INV 1001", 4'b1001, 32'hFFFFFFFF, 32'h00000001, 32'h00000000, 5'b10001);
    check("INV 1010", 4'b1010, 32'hFFFFFFFF, 32'h00000001, 32'h00000000, 5'b10001);
    check("INV 1011", 4'b1011, 32'hFFFFFFFF, 32'h00000001, 32'h00000000, 5'b10001);
    check("INV 1100", 4'b1100, 32'hFFFFFFFF, 32'h00000001, 32'h00000000, 5'b10001);
    check("INV 1110", 4'b1110, 32'hFFFFFFFF, 32'h00000001, 32'h00000000, 5'b10001);

    //Sequencing: each pair must run back to back, to catch stale flags
    check("SEQ 1a", 4'b0000, 32'hFFFFFFFF, 32'h00000001, 32'h00000000, 5'b10100); // carry = 1
    check("SEQ 1b", 4'b0100, 32'h00000001, 32'h00000001, 32'h00000000, 5'b10000); // carry must drop to 0
    check("SEQ 2a", 4'b1001, 32'hFFFFFFFF, 32'h00000001, 32'h00000000, 5'b10001); // invalid = 1
    check("SEQ 2b", 4'b0000, 32'h00000001, 32'h00000001, 32'h00000002, 5'b00000); // invalid must drop to 0
    check("SEQ 3a", 4'b0000, 32'h7FFFFFFF, 32'h00000001, 32'h80000000, 5'b01010); // overflow = 1
    check("SEQ 3b", 4'b0111, 32'h7FFFFFFF, 32'h00000001, 32'h00000001, 5'b00000); // overflow must drop to 0


    $display("Arithmetic logic unit has succeeded!");
    $finish;
end

endmodule