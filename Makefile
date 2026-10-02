VERILATOR = verilator
VERILATOR_FLAGS = --binary --trace

RTL_DIR = rtl
TB_DIR = tb
BUILD_DIR = obj_dir

MODULE = instruction_memory

RTL = $(RTL_DIR)/$(MODULE).sv
TB = $(TB_DIR)/$(MODULE)_tb.sv

.PHONY : test clean

test:
	$(VERILATOR) $(VERILATOR_FLAGS) $(RTL) $(TB)
	./$(BUILD_DIR)/V$(MODULE)

clean:
	rm -rf $(BUILD_DIR)
	rm -f *.vcd