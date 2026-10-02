SIM = verilator
RUN = vvp

pc_sim:
	$(SIM) --binary --trace rtl/program_counter.sv tb/program_counter_tb.sv

test: pc_sim
	./obj_dir/Vprogram_counter

clean:
	rm -rf obj_dir
	rm -f *.vcd