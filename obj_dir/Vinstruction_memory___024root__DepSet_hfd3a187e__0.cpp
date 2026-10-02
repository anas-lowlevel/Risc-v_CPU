// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinstruction_memory.h for the primary calling header

#include "Vinstruction_memory__pch.h"
#include "Vinstruction_memory___024root.h"

VL_ATTR_COLD void Vinstruction_memory___024root___eval_initial__TOP(Vinstruction_memory___024root* vlSelf);
VlCoroutine Vinstruction_memory___024root___eval_initial__TOP__Vtiming__0(Vinstruction_memory___024root* vlSelf);

void Vinstruction_memory___024root___eval_initial(Vinstruction_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vinstruction_memory___024root___eval_initial__TOP(vlSelf);
    Vinstruction_memory___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vinstruction_memory___024root___act_sequent__TOP__0(Vinstruction_memory___024root* vlSelf);

void Vinstruction_memory___024root___eval_act(Vinstruction_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vinstruction_memory___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vinstruction_memory___024root___act_sequent__TOP__0(Vinstruction_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___act_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.instruction_memory_tb__DOT__instruction 
        = vlSelfRef.instruction_memory_tb__DOT__dut__DOT__memory
        [(0xffU & (vlSelfRef.instruction_memory_tb__DOT__memory_address 
                   >> 2U))];
}

void Vinstruction_memory___024root___eval_nba(Vinstruction_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vinstruction_memory___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vinstruction_memory___024root___timing_resume(Vinstruction_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vinstruction_memory___024root___eval_triggers__act(Vinstruction_memory___024root* vlSelf);

bool Vinstruction_memory___024root___eval_phase__act(Vinstruction_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vinstruction_memory___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vinstruction_memory___024root___timing_resume(vlSelf);
        Vinstruction_memory___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vinstruction_memory___024root___eval_phase__nba(Vinstruction_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vinstruction_memory___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_memory___024root___dump_triggers__nba(Vinstruction_memory___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_memory___024root___dump_triggers__act(Vinstruction_memory___024root* vlSelf);
#endif  // VL_DEBUG

void Vinstruction_memory___024root___eval(Vinstruction_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval\n"); );
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
            Vinstruction_memory___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/instruction_memory_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vinstruction_memory___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/instruction_memory_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vinstruction_memory___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vinstruction_memory___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vinstruction_memory___024root___eval_debug_assertions(Vinstruction_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
