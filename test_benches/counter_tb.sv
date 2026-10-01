module counter_tb;
    logic       clk = 0;
    logic       rst = 1;
    logic [3:0] count;
    int         errors = 0;

    counter dut (.*);

    always #5 clk <= ~clk;

    initial begin
        $dumpfile("counter.fst");
        $dumpvars(0, counter_tb);

        // Hold reset for two cycles, then check the reset value
        repeat (2) @(negedge clk);
        if (count !== 4'd0) begin
            $display("FAIL: after reset, count = %0d, expected 0", count);
            errors++;
        end

        // Release reset and check 20 cycles, including the 4-bit wraparound
        rst = 0;
        for (int i = 1; i <= 20; i++) begin
            @(negedge clk);
            if (count !== 4'(i)) begin
                $display("FAIL: cycle %0d, count = %0d, expected %0d", i, count, 4'(i));
                errors++;
            end
        end

        if (errors != 0) $fatal(1, "FAILED with %0d errors", errors);
        $display("PASS");
        $finish;
    end
endmodule
