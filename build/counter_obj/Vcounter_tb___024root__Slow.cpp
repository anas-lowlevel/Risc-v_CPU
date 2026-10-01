// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter_tb.h for the primary calling header

#include "Vcounter_tb__pch.h"
#include "Vcounter_tb__Syms.h"
#include "Vcounter_tb___024root.h"

void Vcounter_tb___024root___ctor_var_reset(Vcounter_tb___024root* vlSelf);

Vcounter_tb___024root::Vcounter_tb___024root(Vcounter_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcounter_tb___024root___ctor_var_reset(this);
}

void Vcounter_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcounter_tb___024root::~Vcounter_tb___024root() {
}
