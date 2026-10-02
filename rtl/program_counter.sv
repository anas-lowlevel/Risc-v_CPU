module program_counter #(parameter logic [31:0] RESET_ADDRESS = 32'h0000_0000)(
    input logic [31:0] next_pc,
    input logic clk,
    input logic reset,
    output logic [31:0] current_pc);


always_ff @ (posedge clk) begin
    if(reset) current_pc <= RESET_ADDRESS;
    else current_pc <= next_pc;
end
endmodule
