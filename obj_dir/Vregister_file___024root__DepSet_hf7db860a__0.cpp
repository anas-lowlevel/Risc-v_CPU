// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_file.h for the primary calling header

#include "Vregister_file__pch.h"
#include "Vregister_file__Syms.h"
#include "Vregister_file___024root.h"

VL_INLINE_OPT VlCoroutine Vregister_file___024root___eval_initial__TOP__Vtiming__0(Vregister_file___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e667374U;
    __Vtemp_1[1U] = 0x66696c65U;
    __Vtemp_1[2U] = 0x7465725fU;
    __Vtemp_1[3U] = 0x65676973U;
    __Vtemp_1[4U] = 0x72U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.register_file_tb__DOT__reg_write = 1U;
    vlSelfRef.register_file_tb__DOT__register_destination = 5U;
    vlSelfRef.register_file_tb__DOT__write_data = 0x64U;
    co_await vlSelfRef.__VtrigSched_h50bf4e21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge register_file_tb.clk)", 
                                                         "tb/register_file_tb.sv", 
                                                         24);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/register_file_tb.sv", 
                                         25);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.register_file_tb__DOT__register_destination = 0xaU;
    vlSelfRef.register_file_tb__DOT__write_data = 0xc8U;
    co_await vlSelfRef.__VtrigSched_h50bf4e21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge register_file_tb.clk)", 
                                                         "tb/register_file_tb.sv", 
                                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/register_file_tb.sv", 
                                         31);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.register_file_tb__DOT__reg_write = 0U;
    vlSelfRef.register_file_tb__DOT__register_source1 = 5U;
    vlSelfRef.register_file_tb__DOT__register_source2 = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/register_file_tb.sv", 
                                         37);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((0x64U != vlSelfRef.register_file_tb__DOT__read_data1))) {
        VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:40: Assertion failed in %Nregister_file_tb: x5 expected to be 100, got %10#\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.register_file_tb__DOT__read_data1);
        VL_STOP_MT("tb/register_file_tb.sv", 40, "");
    }
    if (VL_UNLIKELY((0xc8U != vlSelfRef.register_file_tb__DOT__read_data2))) {
        VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:43: Assertion failed in %Nregister_file_tb: x10 expected to be 200, got %10#\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.register_file_tb__DOT__read_data2);
        VL_STOP_MT("tb/register_file_tb.sv", 43, "");
    }
    vlSelfRef.register_file_tb__DOT__reg_write = 0U;
    vlSelfRef.register_file_tb__DOT__register_destination = 5U;
    vlSelfRef.register_file_tb__DOT__write_data = 0x3e7U;
    co_await vlSelfRef.__VtrigSched_h50bf4e21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge register_file_tb.clk)", 
                                                         "tb/register_file_tb.sv", 
                                                         49);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/register_file_tb.sv", 
                                         50);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.register_file_tb__DOT__register_source1 = 5U;
    if (VL_UNLIKELY((0x64U != vlSelfRef.register_file_tb__DOT__read_data1))) {
        VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:54: Assertion failed in %Nregister_file_tb: reg_write writes regardless of the 0 state\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/register_file_tb.sv", 54, "");
    }
    vlSelfRef.register_file_tb__DOT__reg_write = 1U;
    vlSelfRef.register_file_tb__DOT__register_destination = 0U;
    vlSelfRef.register_file_tb__DOT__write_data = 0xaU;
    co_await vlSelfRef.__VtrigSched_h50bf4e21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge register_file_tb.clk)", 
                                                         "tb/register_file_tb.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/register_file_tb.sv", 
                                         62);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.register_file_tb__DOT__register_source1 = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/register_file_tb.sv", 
                                         65);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((0U != vlSelfRef.register_file_tb__DOT__read_data1))) {
        VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:67: Assertion failed in %Nregister_file_tb: Register 0 had been assigned a value!\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/register_file_tb.sv", 67, "");
    }
    vlSelfRef.register_file_tb__DOT__register_source1 = 0U;
    vlSelfRef.register_file_tb__DOT__register_source2 = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/register_file_tb.sv", 
                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0U != vlSelfRef.register_file_tb__DOT__read_data1) 
                     | (0U != vlSelfRef.register_file_tb__DOT__read_data2)))) {
        VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:75: Assertion failed in %Nregister_file_tb: Registers are reading a value from register 0 that is not zero! read_data1:%10#, read_data2:%10#\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.register_file_tb__DOT__read_data1,
                     32,vlSelfRef.register_file_tb__DOT__read_data2);
        VL_STOP_MT("tb/register_file_tb.sv", 75, "");
    }
    vlSelfRef.register_file_tb__DOT__register_source1 = 5U;
    vlSelfRef.register_file_tb__DOT__register_source2 = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/register_file_tb.sv", 
                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0x64U != vlSelfRef.register_file_tb__DOT__read_data1) 
                     | (0U != vlSelfRef.register_file_tb__DOT__read_data2)))) {
        VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:82: Assertion failed in %Nregister_file_tb: Error in testing the reading of parallel registers\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/register_file_tb.sv", 82, "");
    }
    vlSelfRef.register_file_tb__DOT__register_source1 = 0U;
    vlSelfRef.register_file_tb__DOT__register_source2 = 5U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/register_file_tb.sv", 
                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0U != vlSelfRef.register_file_tb__DOT__read_data1) 
                     | (0x64U != vlSelfRef.register_file_tb__DOT__read_data2)))) {
        VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:88: Assertion failed in %Nregister_file_tb: Error in testing the second reading of parallel registers\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/register_file_tb.sv", 88, "");
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tb/register_file_tb.sv", 
                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Test succeeded!\n\n",0);
    VL_FINISH_MT("tb/register_file_tb.sv", 93, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file___024root___dump_triggers__act(Vregister_file___024root* vlSelf);
#endif  // VL_DEBUG

void Vregister_file___024root___eval_triggers__act(Vregister_file___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.register_file_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__register_file_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__register_file_tb__DOT__clk__0 
        = vlSelfRef.register_file_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vregister_file___024root___dump_triggers__act(vlSelf);
    }
#endif
}
