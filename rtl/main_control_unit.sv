typedef enum logic [6:0]{
    R_type = 7'b0110011,
    I_type = 7'b0010011,
    Load = 7'b0000011,
    Store = 7'b0100011,
    Branch = 7'b1100011
} operations;


module main_control_unit(
    input logic [6:0] opcode,
    output logic reg_write,
    output logic alu_src,
    output logic mem_write,
    output logic [1:0] result_src,
    output logic [2:0] immediate_src,
    output logic branch_signal,
    output logic [1:0] alu_op
);


always_comb begin
    case (opcode)
        R_type: {reg_write, alu_src,mem_write,result_src,immediate_src,branch_signal, alu_op} = {1'b1,1'b0,1'b0,2'b00,3'b000,1'b0,2'b10};
        I_type: {reg_write, alu_src,mem_write,result_src,immediate_src,branch_signal, alu_op} = {1'b1,1'b1,1'b0,2'b00,3'b000,1'b0,2'b10};
        Load: {reg_write, alu_src,mem_write,result_src,immediate_src,branch_signal, alu_op} = {1'b1,1'b1,1'b0,2'b01,3'b000,1'b0,2'b00};
        Store: {reg_write, alu_src,mem_write,result_src,immediate_src,branch_signal, alu_op} = {1'b0,1'b1,1'b1,2'b00,3'b001,1'b0,2'b00};
        Branch: {reg_write, alu_src,mem_write,result_src,immediate_src,branch_signal, alu_op} = {1'b0,1'b0,1'b0,2'b00,3'b010,1'b1,2'b01};
        default: {reg_write, alu_src,mem_write,result_src,immediate_src,branch_signal, alu_op} = {1'b0,1'b0,1'b0,2'b00,3'b000,1'b0,2'b00};
    endcase
end



endmodule
