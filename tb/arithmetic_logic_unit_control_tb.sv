module arithmetic_logic_unit_control_tb();


logic [1:0] alu_op;
logic [2:0] func3;
logic [6:0] func7;
logic [3:0] alu_control;

arithmetic_logic_unit_control dut(.*);

task automatic check(
    input string label,
    input logic [1:0] test_alu_op,
    input logic [2:0] test_func3,
    input logic [6:0] test_func7,
    input logic [3:0] expected_alu_control
);

alu_op = test_alu_op;
func3 = test_func3;
func7 = test_func7;
#1;

if(alu_control !== expected_alu_control)
    $error("%s error had occured, Expected value: %b, Actual value:%b", label, expected_alu_control,alu_control);
endtask



    initial begin
        $dumpfile("arithmetic_logic_unit_control.fst");
        $dumpvars(0, arithmetic_logic_unit_control_tb);

        // Supported arithmetic and logical operations
        check("ADD", 2'b10, 3'b000, 7'b0000000, 4'b0000);
        check("SUB", 2'b10, 3'b000, 7'b0100000, 4'b1000);
        check("SLL", 2'b10, 3'b001, 7'b0000000, 4'b0001);
        check("XOR", 2'b10, 3'b100, 7'b0000000, 4'b0100);
        check("SRL", 2'b10, 3'b101, 7'b0000000, 4'b0101);
        check("SRA", 2'b10, 3'b101, 7'b0100000, 4'b1101);
        check("OR",  2'b10, 3'b110, 7'b0000000, 4'b0110);
        check("AND", 2'b10, 3'b111, 7'b0000000, 4'b0111);

        // Fixed ADD mode
        check("Fixed ADD 1", 2'b00, 3'b000, 7'b0000000, 4'b0000);
        check("Fixed ADD 2", 2'b00, 3'b101, 7'b0100000, 4'b0000);
        check("Fixed ADD 3", 2'b00, 3'b111, 7'b1111111, 4'b0000);

        // Fixed SUB mode
        check("Fixed SUB 1", 2'b01, 3'b000, 7'b0000000, 4'b1000);
        check("Fixed SUB 2", 2'b01, 3'b101, 7'b0100000, 4'b1000);
        check("Fixed SUB 3", 2'b01, 3'b111, 7'b1111111, 4'b1000);

        // Invalid ADD/SUB encodings
        check("Invalid ADD funct7", 2'b10, 3'b000, 7'b0000001, 4'b1001);
        check("Invalid SUB funct7", 2'b10, 3'b000, 7'b0100001, 4'b1001);

        // Invalid shift encodings
        check("Invalid SLL funct7", 2'b10, 3'b001, 7'b0000001, 4'b1001);
        check("Invalid SRL funct7", 2'b10, 3'b101, 7'b0000001, 4'b1001);
        check("Invalid SRA funct7", 2'b10, 3'b101, 7'b0100001, 4'b1001);

        // Invalid logical-operation encodings
        check("Invalid XOR funct7", 2'b10, 3'b100, 7'b0000001, 4'b1001);
        check("Invalid OR funct7",  2'b10, 3'b110, 7'b0000001, 4'b1001);
        check("Invalid AND funct7", 2'b10, 3'b111, 7'b0000001, 4'b1001);

        // Unsupported SLT and SLTU
        check("Unsupported SLT",  2'b10, 3'b010, 7'b0000000, 4'b1001);
        check("Unsupported SLTU", 2'b10, 3'b011, 7'b0000000, 4'b1001);

        // Unsupported func3 with different func7 values
        check("Invalid func3 010", 2'b10, 3'b010, 7'b1111111, 4'b1001);
        check("Invalid func3 011", 2'b10, 3'b011, 7'b1111111, 4'b1001);

        check("Invalid alu_op 11", 2'b11, 3'b000, 7'b0000000, 4'b1001);
        check("Invalid alu_op 11 alt", 2'b11, 3'b111, 7'b1111111, 4'b1001);

        $display("ALU Control Unit testbench PASSED.");
        $finish;
    end



endmodule