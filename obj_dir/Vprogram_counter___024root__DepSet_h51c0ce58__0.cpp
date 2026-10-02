// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprogram_counter.h for the primary calling header

#include "Vprogram_counter__pch.h"
#include "Vprogram_counter___024root.h"

VlCoroutine Vprogram_counter___024root___eval_initial__TOP__Vtiming__0(Vprogram_counter___024root* vlSelf);
VlCoroutine Vprogram_counter___024root___eval_initial__TOP__Vtiming__1(Vprogram_counter___024root* vlSelf);

void Vprogram_counter___024root___eval_initial(Vprogram_counter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vprogram_counter___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vprogram_counter___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__program_counter_tb__DOT__clk__0 
        = vlSelfRef.program_counter_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vprogram_counter___024root___eval_initial__TOP__Vtiming__1(Vprogram_counter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/program_counter_tb.sv", 
                                             9);
        vlSelfRef.__VdlyVal__program_counter_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.program_counter_tb__DOT__clk)));
        vlSelfRef.__VdlySet__program_counter_tb__DOT__clk__v0 = 1U;
    }
}

void Vprogram_counter___024root___eval_act(Vprogram_counter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vprogram_counter___024root___nba_sequent__TOP__0(Vprogram_counter___024root* vlSelf);
void Vprogram_counter___024root___nba_sequent__TOP__1(Vprogram_counter___024root* vlSelf);

void Vprogram_counter___024root___eval_nba(Vprogram_counter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vprogram_counter___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vprogram_counter___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vprogram_counter___024root___nba_sequent__TOP__0(Vprogram_counter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__program_counter_tb__DOT__clk__v0) {
        vlSelfRef.__VdlySet__program_counter_tb__DOT__clk__v0 = 0U;
        vlSelfRef.program_counter_tb__DOT__clk = vlSelfRef.__VdlyVal__program_counter_tb__DOT__clk__v0;
    }
}

VL_INLINE_OPT void Vprogram_counter___024root___nba_sequent__TOP__1(Vprogram_counter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.program_counter_tb__DOT__current_pc = 
        ((IData)(vlSelfRef.program_counter_tb__DOT__reset)
          ? 0U : vlSelfRef.program_counter_tb__DOT__next_pc);
}

void Vprogram_counter___024root___timing_resume(Vprogram_counter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vprogram_counter___024root___eval_triggers__act(Vprogram_counter___024root* vlSelf);

bool Vprogram_counter___024root___eval_phase__act(Vprogram_counter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vprogram_counter___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vprogram_counter___024root___timing_resume(vlSelf);
        Vprogram_counter___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vprogram_counter___024root___eval_phase__nba(Vprogram_counter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vprogram_counter___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vprogram_counter___024root___dump_triggers__nba(Vprogram_counter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vprogram_counter___024root___dump_triggers__act(Vprogram_counter___024root* vlSelf);
#endif  // VL_DEBUG

void Vprogram_counter___024root___eval(Vprogram_counter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___eval\n"); );
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
            Vprogram_counter___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/program_counter_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vprogram_counter___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/program_counter_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vprogram_counter___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vprogram_counter___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vprogram_counter___024root___eval_debug_assertions(Vprogram_counter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
