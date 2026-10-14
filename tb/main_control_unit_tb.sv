module main_control_unit_tb();

logic [6:0] opcode;
logic reg_write;
logic alu_src;
logic mem_write;
logic [1:0] result_src;
logic [2:0] immediate_src;
logic branch_signal;
logic [1:0] alu_op;

main_control_unit dut(.*);

task automatic check(
    input string label,
    input logic [6:0] test_opcode,
    input logic expected_reg_write,
    input logic expected_alu_src,
    input logic expected_mem_write,
    input logic [1:0] expected_result_src,
    input logic [2:0] expected_immediate_src,
    input logic expected_branch_signal,
    input logic [1:0] expected_alu_op
);

opcode = test_opcode;
#1;
if(reg_write !== expected_reg_write || alu_src !== expected_alu_src || mem_write !== expected_mem_write || result_src !== expected_result_src || immediate_src !== expected_immediate_src ||branch_signal !== expected_branch_signal ||alu_op !== expected_alu_op)
    $error("%s error has occured, the control signals are %b", label,{reg_write,alu_src,mem_write,result_src,immediate_src,branch_signal,alu_op});
endtask

initial begin
    
    $dumpfile("main_control_unit.fst");
    $dumpvars(0,main_control_unit_tb);

    check("I-type arithmetic test", 7'b0010011, 1'b1, 1'b1, 1'b0,2'b00, 3'b000, 1'b0, 2'b10);
    check("Load instruction test", 7'b0000011, 1'b1, 1'b1, 1'b0,2'b01, 3'b000, 1'b0, 2'b00);
    check("Store instruction test", 7'b0100011, 1'b0, 1'b1, 1'b1,2'b00, 3'b001, 1'b0, 2'b00);
    check("Branch instruction test", 7'b1100011, 1'b0, 1'b0, 1'b0,2'b00, 3'b010, 1'b1, 2'b01);
    check("Unsupported opcode 1111111", 7'b1111111, 1'b0, 1'b0, 1'b0,2'b00, 3'b000, 1'b0, 2'b00);
    check("Unsupported opcode 0000000", 7'b0000000, 1'b0, 1'b0, 1'b0,2'b00, 3'b000, 1'b0, 2'b00);
    $display("Main control unit succeeded!");
    $finish;
end



endmodule
