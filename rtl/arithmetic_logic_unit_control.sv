    module arithmetic_logic_unit_control(
        input logic [1:0] alu_op,
        input logic [2:0] func3,
        input logic [6:0] func7,
        output logic [3:0] alu_control
    );


    always_comb begin
        case(alu_op)
        2'b00: alu_control = 4'b0000;
        2'b01: alu_control = 4'b1000;
        2'b10:
            case(func3)
                3'b000:
                    if(func7== 7'b0000000) alu_control = 4'b0000;
                    else if(func7 == 7'b0100000) alu_control = 4'b1000;
                    else alu_control = 4'b1001;
                3'b101:
                    if(func7== 7'b0000000) alu_control = 4'b0101;
                    else if(func7 == 7'b0100000) alu_control = 4'b1101;
                    else alu_control = 4'b1001;
                3'b001:
                    if(func7 == 7'b0000000) alu_control = 4'b0001;
                    else alu_control = 4'b1001;
                3'b100:
                    if(func7 == 7'b0000000) alu_control = 4'b0100;
                    else alu_control = 4'b1001;
                3'b110:
                    if(func7 == 7'b0000000) alu_control = 4'b0110;
                    else alu_control = 4'b1001;
                3'b111:
                    if(func7 == 7'b0000000) alu_control = 4'b0111;
                    else alu_control = 4'b1001;
                default: alu_control = 4'b1001;
            endcase
        default: alu_control = 4'b1001;
        endcase

    end

    endmodule
