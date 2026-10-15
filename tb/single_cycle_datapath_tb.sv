
module single_cycle_datapath_tb;

    logic clk;
    logic reset;

    single_cycle_datapath dut (
        .clk(clk),
        .reset(reset)
    );

    // 10 ns clock period
    always #5 clk <= ~clk;

    initial begin

        $dumpfile("single_cycle_datapath.fst");
        $dumpvars(0,single_cycle_datapath_tb);

        clk = 1'b0;
        reset = 1'b1;

        // Keep reset active for two clock edges.
        repeat (2) @(posedge clk);

        // Deassert away from the active clock edge.
        @(negedge clk);
        reset = 1'b0;

        // Allow the program to execute.
        repeat (20) @(posedge clk);
        #1;

        $display("PC             = %h", dut.current_pc);
        $display("Instruction    = %h", dut.instruction);
        $display("RegWrite       = %b", dut.reg_write);
        $display("rd             = %0d", dut.instruction[11:7]);
        $display("rs1            = %0d", dut.instruction[19:15]);
        $display("Immediate      = %h", dut.immediate);
        $display("ReadData1      = %h", dut.read_data1);
        $display("ALU input2     = %h", dut.alu.input2);
        $display("ALU result     = %h", dut.result);
        $display("Writeback data = %h", dut.write_data);
        $display("x1             = %h", dut.reg_file.registers[1]);

        // Check the final register values.
        if (dut.reg_file.registers[1] !== 32'd10)
            $fatal(1, "FAIL: x1 expected 10");

        if (dut.reg_file.registers[2] !== 32'd20)
            $fatal(1, "FAIL: x2 expected 20");

        if (dut.reg_file.registers[3] !== 32'd30)
            $fatal(1, "FAIL: x3 expected 30");

        if (dut.reg_file.registers[4] !== 32'd30)
            $fatal(1, "FAIL: x4 expected 30");

        if (dut.reg_file.registers[5] !== 32'd0)
            $fatal(1, "FAIL: x5 expected 0; BEQ may have failed");

        if (dut.reg_file.registers[6] !== 32'd1)
            $fatal(1, "FAIL: x6 expected 1; BNE may have failed");

        // Check the first data-memory word.
        if (dut.dmem.memory[0] !== 32'd30)
            $fatal(1, "FAIL: memory[0] expected 30");

        $display("PASS: all CPU integration tests passed.");
        $finish;
    end

endmodule
