// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_top.h for the primary calling header

#ifndef VERILATED_VTEST_TOP_TEST_TOP_H_
#define VERILATED_VTEST_TOP_TEST_TOP_H_  // guard

#include "verilated.h"
class Vtest_top_dpram__R200000_RB15;
class Vtest_top_regfile;


class Vtest_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_top_test_top final : public VerilatedModule {
  public:
    // CELLS
    Vtest_top_regfile* regfile0;
    Vtest_top_dpram__R200000_RB15* data_ram0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_i,0,0);
        CData/*5:0*/ __PVT__ctrl_stall_o;
        CData/*0:0*/ __PVT__ce_wire;
        CData/*4:0*/ __PVT__id_reg1_addr_o;
        CData/*4:0*/ __PVT__id_reg2_addr_o;
        CData/*0:0*/ __PVT__id_reg1_re_o;
        CData/*0:0*/ __PVT__id_reg2_re_o;
        CData/*0:0*/ __PVT__id_reg_we_o;
        CData/*4:0*/ __PVT__id_reg_waddr_o;
        CData/*0:0*/ __PVT__id_exe_reg_we_o;
        CData/*4:0*/ __PVT__id_exe_reg_waddr_o;
        CData/*0:0*/ __PVT__id_exe_inst_is_load_o;
        CData/*4:0*/ __PVT__id_exe_rd_o;
        CData/*4:0*/ __PVT__exe_reg_waddr_o;
        CData/*0:0*/ __PVT__exe_reg_we_o;
        CData/*0:0*/ __PVT__exe_stallreq_o;
        CData/*0:0*/ __PVT__exe_jump_enable_o;
        CData/*4:0*/ __PVT__exe_mem_reg_waddr_o;
        CData/*0:0*/ __PVT__exe_mem_reg_we_o;
        CData/*0:0*/ __PVT__exe_mem_mem_we_o;
        CData/*3:0*/ __PVT__exe_mem_mem_op_o;
        CData/*4:0*/ __PVT__mem_reg_waddr_o;
        CData/*0:0*/ __PVT__mem_reg_we_o;
        CData/*0:0*/ __PVT__mem_mem_we_o;
        CData/*4:0*/ __PVT__mem_wb_reg_waddr_o;
        CData/*0:0*/ __PVT__mem_wb_reg_we_o;
        CData/*0:0*/ __PVT__mem_ram_ce_o;
        CData/*4:0*/ __PVT__id0__DOT__i_reg1_raddr_o;
        CData/*4:0*/ __PVT__id0__DOT__i_reg2_raddr_o;
        CData/*0:0*/ __PVT__id0__DOT__i_reg1_re_o;
        CData/*0:0*/ __PVT__id0__DOT__i_reg2_re_o;
        CData/*0:0*/ __PVT__id0__DOT__i_reg_we_o;
        CData/*4:0*/ __PVT__id0__DOT__i_reg_waddr_o;
        CData/*0:0*/ __PVT__id0__DOT__r_reg1_re_o;
        CData/*0:0*/ __PVT__id0__DOT__r_reg2_re_o;
        CData/*0:0*/ __PVT__id0__DOT__r_reg_we_o;
        CData/*0:0*/ id0__DOT__inst_type_i__DOT____VdfgExtracted_h64b65831__0;
        CData/*0:0*/ id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0;
        CData/*0:0*/ __PVT__exe0__DOT__s_reg_we_o;
        CData/*0:0*/ __PVT__exe0__DOT__s_mem_we_o;
        CData/*3:0*/ __PVT__exe0__DOT__s_mem_op_o;
        CData/*0:0*/ __PVT__exe0__DOT__b_jump_enable_o;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_r0__DOT__isType_r;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned;
        IData/*31:0*/ __PVT__pc_wire;
        IData/*31:0*/ __PVT__if_id_inst_addr_o;
        IData/*31:0*/ __PVT__if_id_inst_o;
        IData/*31:0*/ __PVT__id_inst_o;
        IData/*31:0*/ __PVT__id_exe_op1_o;
        IData/*31:0*/ __PVT__id_exe_op2_o;
        IData/*31:0*/ __PVT__id_exe_inst_o;
        IData/*31:0*/ __PVT__id_exe_inst_addr_o;
        IData/*31:0*/ __PVT__exe_reg_wdata_o;
        IData/*31:0*/ __PVT__exe_mem_reg_wdata_o;
        IData/*31:0*/ __PVT__exe_mem_mem_addr_o;
        IData/*31:0*/ __PVT__exe_mem_mem_data_o;
        IData/*31:0*/ __PVT__mem_reg_wdata_o;
        IData/*31:0*/ __PVT__mem_mem_addr_o;
        IData/*31:0*/ __PVT__mem_mem_data_o;
        IData/*31:0*/ __PVT__mem_wb_reg_wdata_o;
        IData/*31:0*/ __PVT__id0__DOT__op1_o_final;
    };
    struct {
        IData/*31:0*/ __PVT__id0__DOT__op2_o_final;
        IData/*31:0*/ __PVT__id0__DOT__i_op1_o;
        IData/*31:0*/ __PVT__exe0__DOT__i_reg_wdata_o;
        IData/*31:0*/ __PVT__exe0__DOT__r_reg_wdata_o;
        IData/*31:0*/ __PVT__exe0__DOT__s_mem_data_o;
        IData/*31:0*/ __PVT__exe0__DOT__s_mem_addr_o;
        IData/*31:0*/ __PVT__exe0__DOT__b_jump_addr_o;
        IData/*31:0*/ __PVT__exe0__DOT__exe_type_i0__DOT__sr_shift;
    };

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
