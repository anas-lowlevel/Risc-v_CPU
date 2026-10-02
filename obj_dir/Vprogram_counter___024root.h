// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vprogram_counter.h for the primary calling header

#ifndef VERILATED_VPROGRAM_COUNTER___024ROOT_H_
#define VERILATED_VPROGRAM_COUNTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vprogram_counter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vprogram_counter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ program_counter_tb__DOT__clk;
    CData/*0:0*/ program_counter_tb__DOT__reset;
    CData/*0:0*/ __VdlyVal__program_counter_tb__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__program_counter_tb__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__program_counter_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ program_counter_tb__DOT__current_pc;
    IData/*31:0*/ program_counter_tb__DOT__next_pc;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vprogram_counter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vprogram_counter___024root(Vprogram_counter__Syms* symsp, const char* v__name);
    ~Vprogram_counter___024root();
    VL_UNCOPYABLE(Vprogram_counter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
