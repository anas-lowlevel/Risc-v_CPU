// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprogram_counter.h for the primary calling header

#include "Vprogram_counter__pch.h"
#include "Vprogram_counter__Syms.h"
#include "Vprogram_counter___024root.h"

VL_INLINE_OPT VlCoroutine Vprogram_counter___024root___eval_initial__TOP__Vtiming__0(Vprogram_counter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e667374U;
    __Vtemp_1[1U] = 0x6e746572U;
    __Vtemp_1[2U] = 0x5f636f75U;
    __Vtemp_1[3U] = 0x6772616dU;
    __Vtemp_1[4U] = 0x70726fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.program_counter_tb__DOT__clk = 0U;
    vlSelfRef.program_counter_tb__DOT__reset = 1U;
    vlSelfRef.program_counter_tb__DOT__next_pc = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/program_counter_tb.sv", 
                                         20);
    if (VL_UNLIKELY((0U != vlSelfRef.program_counter_tb__DOT__current_pc))) {
        VL_WRITEF_NX("[%0t] %%Error: program_counter_tb.sv:23: Assertion failed in %Nprogram_counter_tb: Rested failed: pc = %x\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.program_counter_tb__DOT__current_pc);
        VL_STOP_MT("tb/program_counter_tb.sv", 23, "");
    }
    vlSelfRef.program_counter_tb__DOT__reset = 0U;
    vlSelfRef.program_counter_tb__DOT__next_pc = 4U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/program_counter_tb.sv", 
                                         27);
    if (VL_UNLIKELY((4U != vlSelfRef.program_counter_tb__DOT__current_pc))) {
        VL_WRITEF_NX("[%0t] %%Error: program_counter_tb.sv:30: Assertion failed in %Nprogram_counter_tb: PC update failed: pc = %x\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.program_counter_tb__DOT__current_pc);
        VL_STOP_MT("tb/program_counter_tb.sv", 30, "");
    }
    vlSelfRef.program_counter_tb__DOT__next_pc = 8U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/program_counter_tb.sv", 
                                         34);
    if (VL_UNLIKELY((8U != vlSelfRef.program_counter_tb__DOT__current_pc))) {
        VL_WRITEF_NX("[%0t] %%Error: program_counter_tb.sv:37: Assertion failed in %Nprogram_counter_tb: Second PC update failed: pc = %x\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.program_counter_tb__DOT__current_pc);
        VL_STOP_MT("tb/program_counter_tb.sv", 37, "");
    }
    VL_WRITEF_NX("PC test passed\n",0);
    VL_FINISH_MT("tb/program_counter_tb.sv", 41, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vprogram_counter___024root___dump_triggers__act(Vprogram_counter___024root* vlSelf);
#endif  // VL_DEBUG

void Vprogram_counter___024root___eval_triggers__act(Vprogram_counter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.program_counter_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__program_counter_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__program_counter_tb__DOT__clk__0 
        = vlSelfRef.program_counter_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vprogram_counter___024root___dump_triggers__act(vlSelf);
    }
#endif
}
