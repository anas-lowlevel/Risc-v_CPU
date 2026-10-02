// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprogram_counter.h for the primary calling header

#include "Vprogram_counter__pch.h"
#include "Vprogram_counter___024root.h"

VL_ATTR_COLD void Vprogram_counter___024root___eval_static(Vprogram_counter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vprogram_counter___024root___eval_final(Vprogram_counter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vprogram_counter___024root___eval_settle(Vprogram_counter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vprogram_counter___024root___dump_triggers__act(Vprogram_counter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge program_counter_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vprogram_counter___024root___dump_triggers__nba(Vprogram_counter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge program_counter_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vprogram_counter___024root___ctor_var_reset(Vprogram_counter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->program_counter_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->program_counter_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->program_counter_tb__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->program_counter_tb__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__program_counter_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__program_counter_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__program_counter_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
}
