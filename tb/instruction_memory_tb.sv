module instruction_memory_tb;

logic [31:0] memory_address;
logic [31:0] instruction;

instruction_memory dut(.*);

initial begin
    $dumpfile("instruction_memory.fst");
    $dumpvars(0,instruction_memory_tb);

    memory_address = 32'h0000_0000;
    #1
    if(instruction !== 32'hAAAA_AAAA)
        $error("Fetching instruction failed: instruction = %h", instruction);

    memory_address = 32'h0000_0004;
    #1
    if(instruction !== 32'hBBBB_BBBB)
        $error("Second fetching instruction failed : instruction = %h", instruction);

    memory_address = 32'h0000_0008;
    #1
    if(instruction !== 32'hCCCC_CCCC)
        $error("Third fetching instruction failed : instruction = %h", instruction);


    $display("Instruction memory test succeeded");
    $finish;
end

endmodule
