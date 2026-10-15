module instruction_memory(
    input logic [31:0] memory_address,
    output logic [31:0] instruction
    );

logic [31:0] memory [0:255];

initial begin
    $readmemh("program.hex", memory);
end

assign instruction = memory[memory_address[9:2]];

endmodule

