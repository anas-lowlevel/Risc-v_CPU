// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vinstruction_memory.h for the primary calling header

#ifndef VERILATED_VINSTRUCTION_MEMORY___024ROOT_H_
#define VERILATED_VINSTRUCTION_MEMORY___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vinstruction_memory__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vinstruction_memory___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ instruction_memory_tb__DOT__memory_address;
    IData/*31:0*/ instruction_memory_tb__DOT__instruction;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> instruction_memory_tb__DOT__dut__DOT__memory;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vinstruction_memory__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vinstruction_memory___024root(Vinstruction_memory__Syms* symsp, const char* v__name);
    ~Vinstruction_memory___024root();
    VL_UNCOPYABLE(Vinstruction_memory___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
