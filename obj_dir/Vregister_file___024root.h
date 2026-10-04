// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister_file.h for the primary calling header

#ifndef VERILATED_VREGISTER_FILE___024ROOT_H_
#define VERILATED_VREGISTER_FILE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vregister_file__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregister_file___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ register_file_tb__DOT__clk;
    CData/*0:0*/ register_file_tb__DOT__reg_write;
    CData/*4:0*/ register_file_tb__DOT__register_source1;
    CData/*4:0*/ register_file_tb__DOT__register_source2;
    CData/*4:0*/ register_file_tb__DOT__register_destination;
    CData/*0:0*/ __VdlyVal__register_file_tb__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__register_file_tb__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__register_file_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ register_file_tb__DOT__write_data;
    IData/*31:0*/ register_file_tb__DOT__read_data1;
    IData/*31:0*/ register_file_tb__DOT__read_data2;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> register_file_tb__DOT__dut__DOT__registers;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h50bf4e21__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vregister_file__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregister_file___024root(Vregister_file__Syms* symsp, const char* v__name);
    ~Vregister_file___024root();
    VL_UNCOPYABLE(Vregister_file___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
