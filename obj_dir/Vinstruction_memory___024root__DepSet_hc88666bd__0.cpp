// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinstruction_memory.h for the primary calling header

#include "Vinstruction_memory__pch.h"
#include "Vinstruction_memory__Syms.h"
#include "Vinstruction_memory___024root.h"

VL_INLINE_OPT VlCoroutine Vinstruction_memory___024root___eval_initial__TOP__Vtiming__0(Vinstruction_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e667374U;
    __Vtemp_1[1U] = 0x6d6f7279U;
    __Vtemp_1[2U] = 0x6e5f6d65U;
    __Vtemp_1[3U] = 0x6374696fU;
    __Vtemp_1[4U] = 0x73747275U;
    __Vtemp_1[5U] = 0x696eU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.instruction_memory_tb__DOT__memory_address = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/instruction_memory_tb.sv", 
                                         13);
    if (VL_UNLIKELY((0xaaaaaaaaU != vlSelfRef.instruction_memory_tb__DOT__instruction))) {
        VL_WRITEF_NX("[%0t] %%Error: instruction_memory_tb.sv:15: Assertion failed in %Ninstruction_memory_tb: Fetching instruction failed: instruction = %x\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.instruction_memory_tb__DOT__instruction);
        VL_STOP_MT("tb/instruction_memory_tb.sv", 15, "");
    }
    vlSelfRef.instruction_memory_tb__DOT__memory_address = 4U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/instruction_memory_tb.sv", 
                                         18);
    if (VL_UNLIKELY((0xbbbbbbbbU != vlSelfRef.instruction_memory_tb__DOT__instruction))) {
        VL_WRITEF_NX("[%0t] %%Error: instruction_memory_tb.sv:20: Assertion failed in %Ninstruction_memory_tb: Second fetching instruction failed : instruction = %x\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.instruction_memory_tb__DOT__instruction);
        VL_STOP_MT("tb/instruction_memory_tb.sv", 20, "");
    }
    vlSelfRef.instruction_memory_tb__DOT__memory_address = 8U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/instruction_memory_tb.sv", 
                                         23);
    if (VL_UNLIKELY((0xccccccccU != vlSelfRef.instruction_memory_tb__DOT__instruction))) {
        VL_WRITEF_NX("[%0t] %%Error: instruction_memory_tb.sv:25: Assertion failed in %Ninstruction_memory_tb: Third fetching instruction failed : instruction = %x\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.instruction_memory_tb__DOT__instruction);
        VL_STOP_MT("tb/instruction_memory_tb.sv", 25, "");
    }
    VL_WRITEF_NX("Instruction memory test succeeded\n",0);
    VL_FINISH_MT("tb/instruction_memory_tb.sv", 29, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_memory___024root___dump_triggers__act(Vinstruction_memory___024root* vlSelf);
#endif  // VL_DEBUG

void Vinstruction_memory___024root___eval_triggers__act(Vinstruction_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vinstruction_memory___024root___dump_triggers__act(vlSelf);
    }
#endif
}
