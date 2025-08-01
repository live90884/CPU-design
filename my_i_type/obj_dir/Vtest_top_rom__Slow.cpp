// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top__pch.h"
#include "Vtest_top__Syms.h"
#include "Vtest_top_rom.h"

void Vtest_top_rom___ctor_var_reset(Vtest_top_rom* vlSelf);

Vtest_top_rom::Vtest_top_rom(Vtest_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_top_rom___ctor_var_reset(this);
}

void Vtest_top_rom::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtest_top_rom::~Vtest_top_rom() {
}
