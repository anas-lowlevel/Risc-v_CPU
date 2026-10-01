# CMake generated Testfile for 
# Source directory: /home/auth/risc-vcpu
# Build directory: /home/auth/risc-vcpu/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[counter]=] "/home/auth/risc-vcpu/build/counter_obj/Vcounter_tb")
set_tests_properties([=[counter]=] PROPERTIES  PASS_REGULAR_EXPRESSION "PASS" WORKING_DIRECTORY "/home/auth/risc-vcpu/build" _BACKTRACE_TRIPLES "/home/auth/risc-vcpu/CMakeLists.txt;19;add_test;/home/auth/risc-vcpu/CMakeLists.txt;26;add_sv_test;/home/auth/risc-vcpu/CMakeLists.txt;0;")
