module register_file_tb;

logic clk = 0;
logic reg_write;
logic [4:0] register_source1;
logic [4:0] register_source2;
logic [4:0] register_destination;
logic [31:0] write_data;
logic [31:0] read_data1;
logic [31:0] read_data2;

register_file dut(.*);

always #5 clk <= ~clk;

initial begin
    $dumpfile("register_file.fst");
    $dumpvars(0, register_file_tb);

    reg_write = 1;
    register_destination = 5'd5;
    write_data = 100;

    @(posedge clk);
    #1;

    register_destination = 5'd10;
    write_data = 200;

    @(posedge clk);
    #1;

    reg_write = 0;
    register_source1 = 5'd5;
    register_source2 = 5'd10;

    #1;

    if(read_data1 != 100)
        $error("x5 expected to be 100, got %d", read_data1);
        
    if(read_data2 != 200)
        $error("x10 expected to be 200, got %d", read_data2);

    reg_write = 0;
    register_destination = 5'd5;
    write_data = 999;

    @(posedge clk);
    #1;

    register_source1 = 5'd5;
    if(read_data1 != 100)
        $error("reg_write writes regardless of the 0 state");
        

    reg_write = 1;
    register_destination = 5'd0;
    write_data = 10;

    @(posedge clk);
    #1;

    register_source1 = 5'd0;
    #1;
    if(read_data1 != 0)
        $error("Register 0 had been assigned a value!");
    

    register_source1 = 5'd0;
    register_source2 = 5'd0;
    #1;

    if(read_data1 != 0 || read_data2 !=0)
        $error("Registers are reading a value from register 0 that is not zero! read_data1:%d, read_data2:%d", read_data1, read_data2);
    

    register_source1 = 5'd5;
    register_source2 = 5'd0;
    #1
    if(read_data1 != 100 || read_data2 != 0)
        $error("Error in testing the reading of parallel registers");

    register_source1 = 5'd0;
    register_source2 = 5'd5;
    #1;
    if(read_data1 != 0 || read_data2 != 100)
        $error("Error in testing the second reading of parallel registers");

    #5;
    $display("Test succeeded!\n");

    $finish;
end



endmodule