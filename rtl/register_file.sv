module register_file(
    input logic clk,
    input logic reg_write, // 1 for write
    input logic [4:0] register_source1,
    input logic [4:0] register_source2,
    input logic [4:0] register_destination,
    input logic [31:0] write_data, // data to write
    output logic [31:0] read_data1,
    output logic [31:0] read_data2
);

logic [31:0] registers[0:31];

always_ff @( posedge clk ) begin
    if(reg_write)
    begin
        if(register_destination != 0) registers[register_destination] <= write_data;
    end
end

always_comb begin
    if(register_source1 == 0)
        begin
            read_data1 = 0;    
        end
    else
        begin
            read_data1 = registers[register_source1];
        end


    if(register_source2 == 0)
        begin
            read_data2 = 0;    
        end
    else
        begin
            read_data2 = registers[register_source2];
        end 
end


endmodule
