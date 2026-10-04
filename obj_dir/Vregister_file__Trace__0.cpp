// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregister_file__Syms.h"


void Vregister_file___024root__trace_chg_0_sub_0(Vregister_file___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vregister_file___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_chg_0\n"); );
    // Init
    Vregister_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregister_file___024root*>(voidSelf);
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vregister_file___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vregister_file___024root__trace_chg_0_sub_0(Vregister_file___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.register_file_tb__DOT__reg_write));
        bufp->chgCData(oldp+1,(vlSelfRef.register_file_tb__DOT__register_source1),5);
        bufp->chgCData(oldp+2,(vlSelfRef.register_file_tb__DOT__register_source2),5);
        bufp->chgCData(oldp+3,(vlSelfRef.register_file_tb__DOT__register_destination),5);
        bufp->chgIData(oldp+4,(vlSelfRef.register_file_tb__DOT__write_data),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+5,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[0]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[1]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[2]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[3]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[4]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[5]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[6]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[7]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[8]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[9]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[10]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[11]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[12]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[13]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[14]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[15]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[16]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[17]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[18]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[19]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[20]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[21]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[22]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[23]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[24]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[25]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[26]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[27]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[28]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[29]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[30]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[31]),32);
    }
    bufp->chgBit(oldp+37,(vlSelfRef.register_file_tb__DOT__clk));
    bufp->chgIData(oldp+38,(((0U == (IData)(vlSelfRef.register_file_tb__DOT__register_source1))
                              ? 0U : vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                             [vlSelfRef.register_file_tb__DOT__register_source1])),32);
    bufp->chgIData(oldp+39,(((0U == (IData)(vlSelfRef.register_file_tb__DOT__register_source2))
                              ? 0U : vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                             [vlSelfRef.register_file_tb__DOT__register_source2])),32);
}

void Vregister_file___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_cleanup\n"); );
    // Init
    Vregister_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregister_file___024root*>(voidSelf);
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
