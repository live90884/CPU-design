// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_top.h for the primary calling header

#ifndef VERILATED_VTEST_TOP_TEST_TOP_H_
#define VERILATED_VTEST_TOP_TEST_TOP_H_  // guard

#include "verilated.h"
class Vtest_top_regfile;
class Vtest_top_rom;


class Vtest_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_top_test_top final : public VerilatedModule {
  public:
    // CELLS
    Vtest_top_rom* rom0;
    Vtest_top_regfile* regfile0;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    CData/*0:0*/ __PVT__ce_wire;
    CData/*4:0*/ __PVT__id_reg1_addr_o;
    CData/*0:0*/ __PVT__id_reg1_re_o;
    CData/*0:0*/ __PVT__id_exe_reg_we_o;
    CData/*4:0*/ __PVT__id_exe_reg_waddr_o;
    CData/*4:0*/ __PVT__exe_reg_waddr_o;
    CData/*0:0*/ __PVT__exe_reg_we_o;
    CData/*4:0*/ __PVT__exe_mem_reg_waddr_o;
    CData/*0:0*/ __PVT__exe_mem_reg_we_o;
    CData/*4:0*/ __PVT__mem_reg_waddr_o;
    CData/*0:0*/ __PVT__mem_reg_we_o;
    CData/*4:0*/ __PVT__mem_wb_reg_waddr_o;
    CData/*0:0*/ __PVT__mem_wb_reg_we_o;
    IData/*31:0*/ __PVT__pc_wire;
    IData/*31:0*/ __PVT__if_id_inst_addr_o;
    IData/*31:0*/ __PVT__if_id_inst_o;
    IData/*31:0*/ __PVT__id_exe_op1_o;
    IData/*31:0*/ __PVT__id_exe_op2_o;
    IData/*31:0*/ __PVT__id_exe_inst_o;
    IData/*31:0*/ __PVT__exe_reg_wdata_o;
    IData/*31:0*/ __PVT__exe_mem_reg_wdata_o;
    IData/*31:0*/ __PVT__mem_reg_wdata_o;
    IData/*31:0*/ __PVT__mem_wb_reg_wdata_o;
    IData/*31:0*/ __Vdly__pc_wire;

    // INTERNAL VARIABLES
    Vtest_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_top_test_top(Vtest_top__Syms* symsp, const char* v__name);
    ~Vtest_top_test_top();
    VL_UNCOPYABLE(Vtest_top_test_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
