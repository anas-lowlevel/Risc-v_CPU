// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter_tb.h for the primary calling header

#include "Vcounter_tb__pch.h"
#include "Vcounter_tb__Syms.h"
#include "Vcounter_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vcounter_tb___024root___eval_initial__TOP__Vtiming__0(Vcounter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e667374U;
    __Vtemp_1[1U] = 0x6e746572U;
    __Vtemp_1[2U] = 0x636f75U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         16);
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         16);
    if (VL_UNLIKELY((0U != (IData)(vlSelfRef.counter_tb__DOT__count)))) {
        VL_WRITEF_NX("FAIL: after reset, count = %0#, expected 0\n",0,
                     4,vlSelfRef.counter_tb__DOT__count);
        vlSelfRef.counter_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.counter_tb__DOT__errors);
    }
    vlSelfRef.counter_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         25);
    if (VL_UNLIKELY((1U != (IData)(vlSelfRef.counter_tb__DOT__count)))) {
        VL_WRITEF_NX("FAIL: cycle 1, count = %0#, expected 1\n",0,
                     4,vlSelfRef.counter_tb__DOT__count);
        vlSelfRef.counter_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.counter_tb__DOT__errors);
    }
    vlSelfRef.counter_tb__DOT__unnamedblk1__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         25);
    if (VL_UNLIKELY((2U != (IData)(vlSelfRef.counter_tb__DOT__count)))) {
        VL_WRITEF_NX("FAIL: cycle 2, count = %0#, expected 2\n",0,
                     4,vlSelfRef.counter_tb__DOT__count);
        vlSelfRef.counter_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.counter_tb__DOT__errors);
    }
    vlSelfRef.counter_tb__DOT__unnamedblk1__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         25);
    if (VL_UNLIKELY((3U != (IData)(vlSelfRef.counter_tb__DOT__count)))) {
        VL_WRITEF_NX("FAIL: cycle 3, count = %0#, expected 3\n",0,
                     4,vlSelfRef.counter_tb__DOT__count);
        vlSelfRef.counter_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.counter_tb__DOT__errors);
    }
    vlSelfRef.counter_tb__DOT__unnamedblk1__DOT__i = 4U;
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         25);
    if (VL_UNLIKELY((4U != (IData)(vlSelfRef.counter_tb__DOT__count)))) {
        VL_WRITEF_NX("FAIL: cycle 4, count = %0#, expected 4\n",0,
                     4,vlSelfRef.counter_tb__DOT__count);
        vlSelfRef.counter_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.counter_tb__DOT__errors);
    }
    vlSelfRef.counter_tb__DOT__unnamedblk1__DOT__i = 5U;
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         25);
    if (VL_UNLIKELY((5U != (IData)(vlSelfRef.counter_tb__DOT__count)))) {
        VL_WRITEF_NX("FAIL: cycle 5, count = %0#, expected 5\n",0,
                     4,vlSelfRef.counter_tb__DOT__count);
        vlSelfRef.counter_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.counter_tb__DOT__errors);
    }
    vlSelfRef.counter_tb__DOT__unnamedblk1__DOT__i = 6U;
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         25);
    if (VL_UNLIKELY((6U != (IData)(vlSelfRef.counter_tb__DOT__count)))) {
        VL_WRITEF_NX("FAIL: cycle 6, count = %0#, expected 6\n",0,
                     4,vlSelfRef.counter_tb__DOT__count);
        vlSelfRef.counter_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.counter_tb__DOT__errors);
    }
    vlSelfRef.counter_tb__DOT__unnamedblk1__DOT__i = 7U;
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         25);
    if (VL_UNLIKELY((7U != (IData)(vlSelfRef.counter_tb__DOT__count)))) {
        VL_WRITEF_NX("FAIL: cycle 7, count = %0#, expected 7\n",0,
                     4,vlSelfRef.counter_tb__DOT__count);
        vlSelfRef.counter_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.counter_tb__DOT__errors);
    }
    vlSelfRef.counter_tb__DOT__unnamedblk1__DOT__i = 8U;
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         25);
    if (VL_UNLIKELY((8U != (IData)(vlSelfRef.counter_tb__DOT__count)))) {
        VL_WRITEF_NX("FAIL: cycle 8, count = %0#, expected -8\n",0,
                     4,vlSelfRef.counter_tb__DOT__count);
        vlSelfRef.counter_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.counter_tb__DOT__errors);
    }
    vlSelfRef.counter_tb__DOT__unnamedblk1__DOT__i = 9U;
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         25);
    if (VL_UNLIKELY((9U != (IData)(vlSelfRef.counter_tb__DOT__count)))) {
        VL_WRITEF_NX("FAIL: cycle 9, count = %0#, expected -7\n",0,
                     4,vlSelfRef.counter_tb__DOT__count);
        vlSelfRef.counter_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.counter_tb__DOT__errors);
    }
    vlSelfRef.counter_tb__DOT__unnamedblk1__DOT__i = 0xaU;
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         25);
    if (VL_UNLIKELY((0xaU != (IData)(vlSelfRef.counter_tb__DOT__count)))) {
        VL_WRITEF_NX("FAIL: cycle 10, count = %0#, expected -6\n",0,
                     4,vlSelfRef.counter_tb__DOT__count);
        vlSelfRef.counter_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.counter_tb__DOT__errors);
    }
    vlSelfRef.counter_tb__DOT__unnamedblk1__DOT__i = 0xbU;
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         25);
    if (VL_UNLIKELY((0xbU != (IData)(vlSelfRef.counter_tb__DOT__count)))) {
        VL_WRITEF_NX("FAIL: cycle 11, count = %0#, expected -5\n",0,
                     4,vlSelfRef.counter_tb__DOT__count);
        vlSelfRef.counter_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.counter_tb__DOT__errors);
    }
    vlSelfRef.counter_tb__DOT__unnamedblk1__DOT__i = 0xcU;
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         25);
    if (VL_UNLIKELY((0xcU != (IData)(vlSelfRef.counter_tb__DOT__count)))) {
        VL_WRITEF_NX("FAIL: cycle 12, count = %0#, expected -4\n",0,
                     4,vlSelfRef.counter_tb__DOT__count);
        vlSelfRef.counter_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.counter_tb__DOT__errors);
    }
    vlSelfRef.counter_tb__DOT__unnamedblk1__DOT__i = 0xdU;
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         25);
    if (VL_UNLIKELY((0xdU != (IData)(vlSelfRef.counter_tb__DOT__count)))) {
        VL_WRITEF_NX("FAIL: cycle 13, count = %0#, expected -3\n",0,
                     4,vlSelfRef.counter_tb__DOT__count);
        vlSelfRef.counter_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.counter_tb__DOT__errors);
    }
    vlSelfRef.counter_tb__DOT__unnamedblk1__DOT__i = 0xeU;
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         25);
    if (VL_UNLIKELY((0xeU != (IData)(vlSelfRef.counter_tb__DOT__count)))) {
        VL_WRITEF_NX("FAIL: cycle 14, count = %0#, expected -2\n",0,
                     4,vlSelfRef.counter_tb__DOT__count);
        vlSelfRef.counter_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.counter_tb__DOT__errors);
    }
    vlSelfRef.counter_tb__DOT__unnamedblk1__DOT__i = 0xfU;
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         25);
    if (VL_UNLIKELY((0xfU != (IData)(vlSelfRef.counter_tb__DOT__count)))) {
        VL_WRITEF_NX("FAIL: cycle 15, count = %0#, expected -1\n",0,
                     4,vlSelfRef.counter_tb__DOT__count);
        vlSelfRef.counter_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.counter_tb__DOT__errors);
    }
    vlSelfRef.counter_tb__DOT__unnamedblk1__DOT__i = 0x10U;
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         25);
    if (VL_UNLIKELY((0U != (IData)(vlSelfRef.counter_tb__DOT__count)))) {
        VL_WRITEF_NX("FAIL: cycle 16, count = %0#, expected 0\n",0,
                     4,vlSelfRef.counter_tb__DOT__count);
        vlSelfRef.counter_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.counter_tb__DOT__errors);
    }
    vlSelfRef.counter_tb__DOT__unnamedblk1__DOT__i = 0x11U;
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         25);
    if (VL_UNLIKELY((1U != (IData)(vlSelfRef.counter_tb__DOT__count)))) {
        VL_WRITEF_NX("FAIL: cycle 17, count = %0#, expected 1\n",0,
                     4,vlSelfRef.counter_tb__DOT__count);
        vlSelfRef.counter_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.counter_tb__DOT__errors);
    }
    vlSelfRef.counter_tb__DOT__unnamedblk1__DOT__i = 0x12U;
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         25);
    if (VL_UNLIKELY((2U != (IData)(vlSelfRef.counter_tb__DOT__count)))) {
        VL_WRITEF_NX("FAIL: cycle 18, count = %0#, expected 2\n",0,
                     4,vlSelfRef.counter_tb__DOT__count);
        vlSelfRef.counter_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.counter_tb__DOT__errors);
    }
    vlSelfRef.counter_tb__DOT__unnamedblk1__DOT__i = 0x13U;
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         25);
    if (VL_UNLIKELY((3U != (IData)(vlSelfRef.counter_tb__DOT__count)))) {
        VL_WRITEF_NX("FAIL: cycle 19, count = %0#, expected 3\n",0,
                     4,vlSelfRef.counter_tb__DOT__count);
        vlSelfRef.counter_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.counter_tb__DOT__errors);
    }
    vlSelfRef.counter_tb__DOT__unnamedblk1__DOT__i = 0x14U;
    co_await vlSelfRef.__VtrigSched_h18020ac8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge counter_tb.clk)", 
                                                         "/home/auth/risc-vcpu/test_benches/counter_tb.sv", 
                                                         25);
    if (VL_UNLIKELY((4U != (IData)(vlSelfRef.counter_tb__DOT__count)))) {
        VL_WRITEF_NX("FAIL: cycle 20, count = %0#, expected 4\n",0,
                     4,vlSelfRef.counter_tb__DOT__count);
        vlSelfRef.counter_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.counter_tb__DOT__errors);
    }
    vlSelfRef.counter_tb__DOT__unnamedblk1__DOT__i = 0x15U;
    if (VL_UNLIKELY((0U != vlSelfRef.counter_tb__DOT__errors))) {
        VL_WRITEF_NX("[%0t] %%Fatal: counter_tb.sv:32: Assertion failed in %Ncounter_tb: FAILED with %0d errors\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.counter_tb__DOT__errors);
        VL_STOP_MT("/home/auth/risc-vcpu/test_benches/counter_tb.sv", 32, "", false);
    }
    VL_WRITEF_NX("PASS\n",0);
    VL_FINISH_MT("/home/auth/risc-vcpu/test_benches/counter_tb.sv", 34, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_tb___024root___dump_triggers__act(Vcounter_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcounter_tb___024root___eval_triggers__act(Vcounter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.counter_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__counter_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.counter_tb__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__counter_tb__DOT__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__counter_tb__DOT__clk__0 
        = vlSelfRef.counter_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcounter_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
