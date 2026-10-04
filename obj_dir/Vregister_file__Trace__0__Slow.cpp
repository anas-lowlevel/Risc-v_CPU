// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregister_file__Syms.h"


VL_ATTR_COLD void Vregister_file___024root__trace_init_sub__TOP__0(Vregister_file___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("register_file_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+38,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"register_source1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"register_source2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"register_destination",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"read_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"read_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+38,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"register_source1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"register_source2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"register_destination",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"read_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"read_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+6+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vregister_file___024root__trace_init_top(Vregister_file___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vregister_file___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vregister_file___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vregister_file___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregister_file___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregister_file___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vregister_file___024root__trace_register(Vregister_file___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vregister_file___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vregister_file___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vregister_file___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vregister_file___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vregister_file___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_const_0\n"); );
    // Init
    Vregister_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregister_file___024root*>(voidSelf);
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vregister_file___024root__trace_full_0_sub_0(Vregister_file___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vregister_file___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_full_0\n"); );
    // Init
    Vregister_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregister_file___024root*>(voidSelf);
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vregister_file___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vregister_file___024root__trace_full_0_sub_0(Vregister_file___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.register_file_tb__DOT__reg_write));
    bufp->fullCData(oldp+2,(vlSelfRef.register_file_tb__DOT__register_source1),5);
    bufp->fullCData(oldp+3,(vlSelfRef.register_file_tb__DOT__register_source2),5);
    bufp->fullCData(oldp+4,(vlSelfRef.register_file_tb__DOT__register_destination),5);
    bufp->fullIData(oldp+5,(vlSelfRef.register_file_tb__DOT__write_data),32);
    bufp->fullIData(oldp+6,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[0]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[1]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[2]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[3]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[4]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[5]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[6]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[7]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[8]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[9]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[10]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[11]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[12]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[13]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[14]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[15]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[16]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[17]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[18]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[19]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[20]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[21]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[22]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[23]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[24]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[25]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[26]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[27]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[28]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[29]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[30]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.register_file_tb__DOT__dut__DOT__registers[31]),32);
    bufp->fullBit(oldp+38,(vlSelfRef.register_file_tb__DOT__clk));
    bufp->fullIData(oldp+39,(((0U == (IData)(vlSelfRef.register_file_tb__DOT__register_source1))
                               ? 0U : vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                              [vlSelfRef.register_file_tb__DOT__register_source1])),32);
    bufp->fullIData(oldp+40,(((0U == (IData)(vlSelfRef.register_file_tb__DOT__register_source2))
                               ? 0U : vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                              [vlSelfRef.register_file_tb__DOT__register_source2])),32);
}
