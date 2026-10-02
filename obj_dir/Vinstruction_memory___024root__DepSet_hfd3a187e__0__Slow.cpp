// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinstruction_memory.h for the primary calling header

#include "Vinstruction_memory__pch.h"
#include "Vinstruction_memory___024root.h"

VL_ATTR_COLD void Vinstruction_memory___024root___eval_static(Vinstruction_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vinstruction_memory___024root___eval_initial__TOP(Vinstruction_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.instruction_memory_tb__DOT__dut__DOT__memory[0U] = 0xaaaaaaaaU;
    vlSelfRef.instruction_memory_tb__DOT__dut__DOT__memory[1U] = 0xbbbbbbbbU;
    vlSelfRef.instruction_memory_tb__DOT__dut__DOT__memory[2U] = 0xccccccccU;
}

VL_ATTR_COLD void Vinstruction_memory___024root___eval_final(Vinstruction_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_memory___024root___dump_triggers__stl(Vinstruction_memory___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vinstruction_memory___024root___eval_phase__stl(Vinstruction_memory___024root* vlSelf);

VL_ATTR_COLD void Vinstruction_memory___024root___eval_settle(Vinstruction_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vinstruction_memory___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/instruction_memory_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vinstruction_memory___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_memory___024root___dump_triggers__stl(Vinstruction_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vinstruction_memory___024root___act_sequent__TOP__0(Vinstruction_memory___024root* vlSelf);

VL_ATTR_COLD void Vinstruction_memory___024root___eval_stl(Vinstruction_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vinstruction_memory___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vinstruction_memory___024root___eval_triggers__stl(Vinstruction_memory___024root* vlSelf);

VL_ATTR_COLD bool Vinstruction_memory___024root___eval_phase__stl(Vinstruction_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vinstruction_memory___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vinstruction_memory___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_memory___024root___dump_triggers__act(Vinstruction_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_memory___024root___dump_triggers__nba(Vinstruction_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vinstruction_memory___024root___ctor_var_reset(Vinstruction_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->instruction_memory_tb__DOT__memory_address = VL_RAND_RESET_I(32);
    vlSelf->instruction_memory_tb__DOT__instruction = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->instruction_memory_tb__DOT__dut__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    }
