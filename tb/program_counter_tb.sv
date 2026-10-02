module program_counter_tb;

logic clk;
logic reset ;
logic [31:0] current_pc;
logic [31:0] next_pc;

program_counter dut (.*);
always #5 clk <= ~clk;

initial begin

    $dumpfile("program_counter.fst");
    $dumpvars(0, program_counter_tb);

    clk = 0;
    reset = 1;
    next_pc = 32'h0000_0000;

    #10;

    if(current_pc !== 32'h0000_0000)
        $error("Rested failed: pc = %h", current_pc);

    reset = 0;
    next_pc = 32'h0000_0004;
    #10;

    if(current_pc !== 32'h0000_0004)
        $error("PC update failed: pc = %h", current_pc);

    next_pc = 32'h0000_0008;
    
    #10;

    if(current_pc !== 32'h0000_0008)
        $error("Second PC update failed: pc = %h", current_pc);

    $display("PC test passed");

    $finish;
end

endmodule
