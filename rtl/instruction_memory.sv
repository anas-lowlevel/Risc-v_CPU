module instruction_memory(
    input logic [31:0] memory_address,
    output logic [31:0] instruction
    );

logic [31:0] memory [0:255];

initial begin
    memory[0] = 32'hAAAA_AAAA;
    memory[1] = 32'hBBBB_BBBB;
    memory[2] = 32'hCCCC_CCCC;  
end

assign instruction = memory[memory_address[9:2]];

endmodule
