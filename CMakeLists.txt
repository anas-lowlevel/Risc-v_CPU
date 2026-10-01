cmake_minimum_required(VERSION 3.20)
project(riscv_cpu NONE)

find_program(VERILATOR verilator REQUIRED)
enable_testing()

function(add_sv_test name)
    cmake_parse_arguments(T "" "TOP" "SOURCES" ${ARGN})
    set(objdir ${CMAKE_BINARY_DIR}/${name}_obj)

    add_custom_command(
        OUTPUT  ${objdir}/V${T_TOP}
        COMMAND ${VERILATOR} --binary --timing --trace-fst -Wall
                --top-module ${T_TOP} -Mdir ${objdir} ${T_SOURCES}
        DEPENDS ${T_SOURCES}
        COMMENT "Verilating ${name}")

    add_custom_target(${name}_build ALL DEPENDS ${objdir}/V${T_TOP})
    add_test(NAME ${name}
             COMMAND ${objdir}/V${T_TOP}
             WORKING_DIRECTORY ${CMAKE_BINARY_DIR})
    set_tests_properties(${name} PROPERTIES
        PASS_REGULAR_EXPRESSION "PASS")
endfunction()

add_sv_test(counter
    TOP     counter_tb
    SOURCES ${CMAKE_SOURCE_DIR}/register_transfer_level/counter.sv
            ${CMAKE_SOURCE_DIR}/test_benches/counter_tb.sv)