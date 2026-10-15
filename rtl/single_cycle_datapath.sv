module single_cycle_datapath(
    input logic clk,
    input logic reset
);

//program counter
logic [31:0] current_pc;
logic [31:0] next_pc;
logic [31:0] pc_plus_4;

//instruction memory
logic [31:0] instruction;

//main control unit
logic reg_write;
logic alu_src;
logic mem_write;
logic [1:0] result_src;
logic [2:0] immediate_src;
logic branch_signal;
logic [1:0] alu_op;
logic pc_src;

//arithmetic logic unit control
logic [3:0] alu_control;

//Register file
logic [31:0] read_data1;
logic [31:0] read_data2;

//Arithmetic logic unit
logic [31:0] result;
logic zero_flag;
logic overflow_flag;
logic negative_flag;
logic carry_flag;
logic invalid_flag;

// immediate generator
logic [31:0] immediate;

//data memory
logic [31:0] read_data;
logic [31:0] write_data;

program_counter pc(.reset(reset), .clk(clk), .next_pc(next_pc), .current_pc(current_pc));

assign pc_plus_4 = current_pc + 32'h0000_0004;
assign next_pc = pc_src ? current_pc + immediate : pc_plus_4;
instruction_memory imem(.memory_address(current_pc), .instruction(instruction));

main_control_unit main_ctrl(
    .opcode(instruction[6:0]),
    .reg_write(reg_write),
    .alu_src(alu_src),
    .mem_write(mem_write),
    .result_src(result_src),
    .immediate_src(immediate_src),
    .branch_signal(branch_signal),
    .alu_op(alu_op)
    );

assign pc_src = (branch_signal && ((instruction[14:12] == 3'b000 && zero_flag) || (instruction[14:12] == 3'b001 && !zero_flag)));

immediate_generator imm_gen(
    .instruction(instruction),
    .immediate_type(immediate_src),
    .immediate(immediate));

arithmetic_logic_unit_control alu_ctrl(
    .alu_op(alu_op),
    .func3(instruction[14:12]),
    .func7(instruction[31:25]),
    .alu_control(alu_control)
    );

always_comb begin
    case(result_src)
        2'b00: write_data = result;
        2'b01:write_data = read_data;
        2'b10:write_data = pc_plus_4;
        default:write_data = 32'h0000_0000;
    endcase
end

register_file reg_file(
    .clk(clk),
    .reg_write(reg_write),
    .register_source1(instruction[19:15]),
    .register_source2(instruction[24:20]),
    .register_destination(instruction[11:7]),
    .write_data(write_data),
    .read_data1(read_data1),
    .read_data2(read_data2)
    );

arithmetic_logic_unit alu(
    .input1(read_data1),
    .input2(alu_src ? immediate : read_data2),
    .op_select(alu_control),
    .result(result),
    .zero_flag(zero_flag),
    .overflow_flag(overflow_flag),
    .negative_flag(negative_flag),
    .carry_flag(carry_flag),
    .invalid_flag(invalid_flag)
);

data_memory dmem(
    .data_address(result),
    .write_data(read_data2),
    .clk(clk),
    .write_enable(mem_write),
    .read_data(read_data)
);



endmodule
