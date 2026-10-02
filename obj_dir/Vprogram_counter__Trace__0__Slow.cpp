// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vprogram_counter__Syms.h"


VL_ATTR_COLD void Vprogram_counter___024root__trace_init_sub__TOP__0(Vprogram_counter___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("program_counter_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"RESET_ADDRESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"current_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vprogram_counter___024root__trace_init_top(Vprogram_counter___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vprogram_counter___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vprogram_counter___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vprogram_counter___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vprogram_counter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vprogram_counter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vprogram_counter___024root__trace_register(Vprogram_counter___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vprogram_counter___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vprogram_counter___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vprogram_counter___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vprogram_counter___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vprogram_counter___024root__trace_const_0_sub_0(Vprogram_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vprogram_counter___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root__trace_const_0\n"); );
    // Init
    Vprogram_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprogram_counter___024root*>(voidSelf);
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vprogram_counter___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vprogram_counter___024root__trace_const_0_sub_0(Vprogram_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+5,(0U),32);
}

VL_ATTR_COLD void Vprogram_counter___024root__trace_full_0_sub_0(Vprogram_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vprogram_counter___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root__trace_full_0\n"); );
    // Init
    Vprogram_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprogram_counter___024root*>(voidSelf);
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vprogram_counter___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vprogram_counter___024root__trace_full_0_sub_0(Vprogram_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.program_counter_tb__DOT__clk));
    bufp->fullBit(oldp+2,(vlSelfRef.program_counter_tb__DOT__reset));
    bufp->fullIData(oldp+3,(vlSelfRef.program_counter_tb__DOT__current_pc),32);
    bufp->fullIData(oldp+4,(vlSelfRef.program_counter_tb__DOT__next_pc),32);
}
