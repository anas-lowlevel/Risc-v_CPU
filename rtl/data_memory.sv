module data_memory(
    input logic [31:0] data_address,
    input logic [31:0] write_data,
    input logic clk,
    input logic write_enable,
    output logic [31:0] read_data
);

logic [31:0] memory [0:255];
always_ff @(posedge clk) begin
    if(write_enable)
        memory[data_address[9:2]] <= write_data; 
end

assign read_data = memory[data_address[9:2]];

endmodule
