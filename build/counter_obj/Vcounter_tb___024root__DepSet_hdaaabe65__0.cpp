// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter_tb.h for the primary calling header

#include "Vcounter_tb__pch.h"
#include "Vcounter_tb___024root.h"

VlCoroutine Vcounter_tb___024root___eval_initial__TOP__Vtiming__0(Vcounter_tb___024root* vlSelf);
VlCoroutine Vcounter_tb___024root___eval_initial__TOP__Vtiming__1(Vcounter_tb___024root* vlSelf);

void Vcounter_tb___024root___eval_initial(Vcounter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcounter_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcounter_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__counter_tb__DOT__clk__0 
        = vlSelfRef.counter_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vcounter_tb___024root___eval_initial__TOP__Vtiming__1(Vcounter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                             9);
        vlSelfRef.__VdlyVal__counter_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.counter_tb__DOT__clk)));
        vlSelfRef.__VdlySet__counter_tb__DOT__clk__v0 = 1U;
    }
}

void Vcounter_tb___024root___eval_act(Vcounter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcounter_tb___024root___nba_sequent__TOP__0(Vcounter_tb___024root* vlSelf);
void Vcounter_tb___024root___nba_sequent__TOP__1(Vcounter_tb___024root* vlSelf);

void Vcounter_tb___024root___eval_nba(Vcounter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcounter_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcounter_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vcounter_tb___024root___nba_sequent__TOP__0(Vcounter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.counter_tb__DOT__count = ((IData)(vlSelfRef.counter_tb__DOT__rst)
                                         ? 0U : (0xfU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.counter_tb__DOT__count))));
}

VL_INLINE_OPT void Vcounter_tb___024root___nba_sequent__TOP__1(Vcounter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__counter_tb__DOT__clk__v0) {
        vlSelfRef.__VdlySet__counter_tb__DOT__clk__v0 = 0U;
        vlSelfRef.counter_tb__DOT__clk = vlSelfRef.__VdlyVal__counter_tb__DOT__clk__v0;
    }
}

void Vcounter_tb___024root___timing_resume(Vcounter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h18020ac8__0.resume(
                                                   "@(negedge counter_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcounter_tb___024root___timing_commit(Vcounter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h18020ac8__0.commit(
                                                   "@(negedge counter_tb.clk)");
    }
}

void Vcounter_tb___024root___eval_triggers__act(Vcounter_tb___024root* vlSelf);

bool Vcounter_tb___024root___eval_phase__act(Vcounter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcounter_tb___024root___eval_triggers__act(vlSelf);
    Vcounter_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcounter_tb___024root___timing_resume(vlSelf);
        Vcounter_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcounter_tb___024root___eval_phase__nba(Vcounter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcounter_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_tb___024root___dump_triggers__nba(Vcounter_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_tb___024root___dump_triggers__act(Vcounter_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcounter_tb___024root___eval(Vcounter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcounter_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/auth/risc-vcpu/test_benches/counter_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vcounter_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/auth/risc-vcpu/test_benches/counter_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcounter_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcounter_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcounter_tb___024root___eval_debug_assertions(Vcounter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
