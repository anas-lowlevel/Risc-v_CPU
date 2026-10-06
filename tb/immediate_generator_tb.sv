module immediate_generator_tb;

logic [31:0] instruction;
logic [2:0] immediate_type;
logic [31:0] immediate;

immediate_generator dut(.*);

initial begin
    $dumpfile("immediate_generator.fst");
    $dumpvars(0, immediate_generator_tb);

    // Invalid case
    immediate_type = 3'b111;
    instruction = 32'h0000_0000;
    if(immediate != 32'h0000_0000)
        $error("Invalid case outputs a number other than zero");

    // I-type
    immediate_type = 3'b000;
    instruction = 32'h1230_0000;
    #1;
    if(immediate!= 32'h0000_0123)
        $error("Invalid I-type output, Positive sign extension,immediate value: %h", immediate);

    instruction = 32'hD230_0000;
    #1;
    if(immediate!= 32'hFFFF_FD23)
        $error("Invalid I-type output, Negative sign extension, immediate value: %h", immediate);

    // S-type
    immediate_type = 3'b001;
    instruction = 32'h5A30_0180;
    #1;
    if(immediate != 32'h0000_05A3)
        $error("Invalid S-type output, positive sign extension, immediate value: %h", immediate);

    instruction = 32'hD230_0180;
    #1;
    if(immediate != 32'hFFFF_FD23)
        $error("Invalid S-type output, negative sign extension, immediate value: %h", immediate);

    // B-type
    immediate_type = 3'b010;
    instruction = 32'h2A00_0300;
    #1;
    if(immediate != 32'h0000_02A6)
        $error("Invalid B-type output, positive sign extension, immediate value:%h", immediate);

    instruction = 32'hD400_0D80;
    #1;
    if(immediate != 32'hFFFF_FD5A)
        $error("Invalid B-type output, negative sign extension, immediate value:%h", immediate);

    // U-type
    immediate_type = 3'b011;
    instruction = 32'hABCDE000;
    #1;
    if(immediate != 32'hABCDE000)
        $error("Invalid U-type output, immediate value:%h", immediate);

    // J-type
    immediate_type = 3'b100;
    instruction = 32'h3461_2000;
    #1;
    if(immediate != 32'h0001_2346)
        begin
        $display("instruction=%h immediate=%h", instruction, immediate);
        $error("Invalid J-type output, positive sign extension, immediate value:%h", immediate);
        end


    $display("Test succeeded");
    $finish;
end



endmodule
