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


    $display("Arithmetic logic unit has succeeded!");
    $finish;
end

endmodule