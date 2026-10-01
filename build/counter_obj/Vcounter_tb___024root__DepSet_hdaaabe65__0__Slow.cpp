// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter_tb.h for the primary calling header

#include "Vcounter_tb__pch.h"
#include "Vcounter_tb___024root.h"

VL_ATTR_COLD void Vcounter_tb___024root___eval_static__TOP(Vcounter_tb___024root* vlSelf);

VL_ATTR_COLD void Vcounter_tb___024root___eval_static(Vcounter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcounter_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vcounter_tb___024root___eval_static__TOP(Vcounter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_static__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.counter_tb__DOT__clk = 0U;
    vlSelfRef.counter_tb__DOT__rst = 1U;
    vlSelfRef.counter_tb__DOT__errors = 0U;
}

VL_ATTR_COLD void Vcounter_tb___024root___eval_final(Vcounter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcounter_tb___024root___eval_settle(Vcounter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_tb___024root___dump_triggers__act(Vcounter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge counter_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge counter_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_tb___024root___dump_triggers__nba(Vcounter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge counter_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge counter_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcounter_tb___024root___ctor_var_reset(Vcounter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->counter_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->counter_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->counter_tb__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->counter_tb__DOT__errors = 0;
    vlSelf->counter_tb__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__VdlyVal__counter_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__counter_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__counter_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
}
