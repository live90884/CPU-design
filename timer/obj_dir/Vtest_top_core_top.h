// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_top.h for the primary calling header

#ifndef VERILATED_VTEST_TOP_CORE_TOP_H_
#define VERILATED_VTEST_TOP_CORE_TOP_H_  // guard

#include "verilated.h"
class Vtest_top_regfile;


class Vtest_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_top_core_top final : public VerilatedModule {
  public:
    // CELLS
    Vtest_top_regfile* regfile0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_OUT8(__PVT__rom_ce_o,0,0);
        VL_OUT8(__PVT__ram_ce_o,0,0);
        VL_OUT8(__PVT__ram_we_o,0,0);
        VL_IN8(__PVT__irq_external_i,0,0);
        VL_IN8(__PVT__irq_software_i,0,0);
        VL_IN8(__PVT__irq_timer_i,0,0);
        CData/*0:0*/ __PVT__int_ctrl_interrupt_type_o;
        CData/*0:0*/ __PVT__int_ctrl_interrupt_en_o;
        CData/*0:0*/ __PVT__int_ctrl_cause_we_o;
        CData/*3:0*/ __PVT__int_ctrl_trap_casue_o;
        CData/*0:0*/ __PVT__int_ctrl_epc_we_o;
        CData/*0:0*/ __PVT__int_ctrl_mstatus_ie_clear_o;
        CData/*0:0*/ __PVT__int_ctrl_mstatus_ie_set_o;
        CData/*0:0*/ __PVT__int_ctrl_flush_o;
        CData/*5:0*/ __PVT__ctrl_stall_o;
        CData/*0:0*/ __PVT__ce_wire;
        CData/*4:0*/ __PVT__id_reg1_addr_o;
        CData/*4:0*/ __PVT__id_reg2_addr_o;
        CData/*0:0*/ __PVT__id_reg1_re_o;
        CData/*0:0*/ __PVT__id_reg2_re_o;
        CData/*0:0*/ __PVT__id_reg_we_o;
        CData/*4:0*/ __PVT__id_reg_waddr_o;
        CData/*0:0*/ __PVT__id_csr_we_o;
        CData/*0:0*/ __PVT__id_exe_reg_we_o;
        CData/*4:0*/ __PVT__id_exe_reg_waddr_o;
        CData/*0:0*/ __PVT__id_exe_inst_is_load_o;
        CData/*4:0*/ __PVT__id_exe_rd_o;
        CData/*0:0*/ __PVT__id_exe_csr_we_o;
        CData/*4:0*/ __PVT__exe_reg_waddr_o;
        CData/*0:0*/ __PVT__exe_reg_we_o;
        CData/*0:0*/ __PVT__exe_mem_we_o;
        CData/*3:0*/ __PVT__exe_mem_op_o;
        CData/*0:0*/ __PVT__exe_jump_enable_o;
        CData/*0:0*/ __PVT__exe_csr_we_o;
        CData/*4:0*/ __PVT__exe_mem_reg_waddr_o;
        CData/*0:0*/ __PVT__exe_mem_reg_we_o;
        CData/*0:0*/ __PVT__exe_mem_mem_we_o;
        CData/*3:0*/ __PVT__exe_mem_mem_op_o;
        CData/*0:0*/ __PVT__exe_mem_csr_we_o;
        CData/*4:0*/ __PVT__mem_reg_waddr_o;
        CData/*0:0*/ __PVT__mem_reg_we_o;
        CData/*0:0*/ __PVT__mem_mem_we_o;
        CData/*0:0*/ __PVT__mem_mem_ce_o;
        CData/*0:0*/ __PVT__mem_csr_we_o;
        CData/*4:0*/ __PVT__mem_wb_reg_waddr_o;
        CData/*0:0*/ __PVT__mem_wb_reg_we_o;
        CData/*0:0*/ __PVT__mem_wb_csr_we_o;
        CData/*0:0*/ __PVT__mem_wb_instret_incr_o;
        CData/*3:0*/ __PVT__interrupt_ctrl0__DOT__S;
        CData/*3:0*/ __PVT__interrupt_ctrl0__DOT__S_nxt;
        CData/*0:0*/ __PVT__interrupt_ctrl0__DOT__eip;
        CData/*0:0*/ __PVT__interrupt_ctrl0__DOT__tip;
        CData/*0:0*/ __PVT__interrupt_ctrl0__DOT__sip;
        CData/*0:0*/ __PVT__interrupt_ctrl0__DOT__exception;
        CData/*0:0*/ __PVT__id0__DOT__except_mret;
        CData/*0:0*/ __PVT__id0__DOT__except_ecall;
        CData/*4:0*/ __PVT__id0__DOT__i_reg1_raddr_o;
        CData/*4:0*/ __PVT__id0__DOT__i_reg2_raddr_o;
        CData/*0:0*/ __PVT__id0__DOT__i_reg1_re_o;
        CData/*0:0*/ __PVT__id0__DOT__i_reg2_re_o;
        CData/*0:0*/ __PVT__id0__DOT__i_reg_we_o;
        CData/*4:0*/ __PVT__id0__DOT__i_reg_waddr_o;
    };
    struct {
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
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__isType_m;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__div_req_o;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust;
        CData/*5:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt;
        CData/*2:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S;
        CData/*2:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S_nxt;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mul_add;
        CData/*5:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt;
        CData/*2:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S;
        CData/*2:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S_next;
        CData/*0:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__div_sub;
        CData/*0:0*/ __PVT__csr0__DOT__mstatus_mpie;
        CData/*0:0*/ __PVT__csr0__DOT__mstatus_mie;
        CData/*0:0*/ __PVT__csr0__DOT__mie_external;
        CData/*0:0*/ __PVT__csr0__DOT__mie_timer;
        CData/*0:0*/ __PVT__csr0__DOT__mie_software;
        CData/*0:0*/ __PVT__csr0__DOT__w_mie;
        CData/*3:0*/ __PVT__csr0__DOT__cause;
        CData/*0:0*/ __PVT__csr0__DOT__interrupt_type;
        CData/*0:0*/ __PVT__csr0__DOT__w_mcause;
        CData/*0:0*/ __PVT__csr0__DOT__mip_external;
        CData/*0:0*/ __PVT__csr0__DOT__mip_timer;
        CData/*0:0*/ __PVT__csr0__DOT__mip_software;
        SData/*11:0*/ __PVT__id_csr_addr_o;
        SData/*11:0*/ __PVT__id_exe_csr_addr_o;
        SData/*11:0*/ __PVT__exe_mem_csr_waddr_o;
        SData/*11:0*/ __PVT__mem_csr_waddr_o;
        SData/*11:0*/ __PVT__mem_wb_csr_waddr_o;
        VL_OUT(__PVT__rom_addr_o,31,0);
        VL_IN(__PVT__rom_data_i,31,0);
        VL_OUT(__PVT__ram_addr_o,31,0);
        VL_OUT(__PVT__ram_wdata_o,31,0);
        VL_IN(__PVT__ram_rdata_i,31,0);
        IData/*31:0*/ __PVT__int_ctrl_epc_o;
        IData/*31:0*/ __PVT__ctrl_new_pc_o;
        IData/*31:0*/ __PVT__ctrl_pc_o;
        IData/*31:0*/ __PVT__pc_wire;
        IData/*31:0*/ __PVT__if_id_inst_addr_o;
        IData/*31:0*/ __PVT__if_id_inst_o;
        IData/*31:0*/ __PVT__id_inst_o;
        IData/*31:0*/ __PVT__id_exe_op1_o;
        IData/*31:0*/ __PVT__id_exe_op2_o;
        IData/*31:0*/ __PVT__id_exe_inst_o;
        IData/*31:0*/ __PVT__id_exe_inst_addr_o;
        IData/*31:0*/ __PVT__id_exe_exception_o;
        IData/*31:0*/ __PVT__exe_reg_wdata_o;
        IData/*31:0*/ __PVT__exe_mem_addr_o;
    };
    struct {
        IData/*31:0*/ __PVT__exe_mem_data_o;
        IData/*31:0*/ __PVT__exe_jump_addr_o;
        IData/*31:0*/ __PVT__exe_csr_wdata_o;
        IData/*31:0*/ __PVT__exe_mem_reg_wdata_o;
        IData/*31:0*/ __PVT__exe_mem_mem_addr_o;
        IData/*31:0*/ __PVT__exe_mem_mem_data_o;
        IData/*31:0*/ __PVT__exe_mem_csr_wdata_o;
        IData/*31:0*/ __PVT__exe_mem_inst_addr_o;
        IData/*31:0*/ __PVT__exe_mem_exception_o;
        IData/*31:0*/ __PVT__mem_mem_addr_o;
        IData/*31:0*/ __PVT__mem_mem_data_o;
        IData/*31:0*/ __PVT__mem_csr_wdata_o;
        IData/*31:0*/ __PVT__mem_wb_reg_wdata_o;
        IData/*31:0*/ __PVT__mem_wb_csr_wdata_o;
        IData/*31:0*/ __PVT__csr_file_csr_rdata_o;
        IData/*31:0*/ __PVT__ctrl0__DOT__current_pc;
        IData/*31:0*/ __PVT__id0__DOT__op1_o_final;
        IData/*31:0*/ __PVT__id0__DOT__op2_o_final;
        IData/*31:0*/ __PVT__id0__DOT__i_op1_o;
        IData/*31:0*/ __PVT__exe0__DOT__i_reg_wdata_o;
        IData/*31:0*/ __PVT__exe0__DOT__r_reg_wdata_o;
        IData/*31:0*/ __PVT__exe0__DOT__s_mem_data_o;
        IData/*31:0*/ __PVT__exe0__DOT__s_mem_addr_o;
        IData/*31:0*/ __PVT__exe0__DOT__b_jump_addr_o;
        IData/*31:0*/ __PVT__exe0__DOT__m_reg_wdata_o;
        IData/*31:0*/ __PVT__exe0__DOT__system_reg_wdata_o;
        IData/*31:0*/ __PVT__exe0__DOT__system_csr_wdata_o;
        IData/*31:0*/ __PVT__exe0__DOT__csr_rdata;
        IData/*31:0*/ __PVT__exe0__DOT__exe_type_i0__DOT__sr_shift;
        IData/*31:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__a_o;
        IData/*31:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__b_o;
        IData/*31:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__div_result;
        IData/*31:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__result;
        IData/*31:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32;
        VlWide<3>/*64:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result;
        VlWide<3>/*64:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result_tmp;
        IData/*31:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32;
        VlWide<3>/*64:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result;
        VlWide<3>/*64:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp;
        IData/*31:0*/ __PVT__mem0__DOT__reg_wdata;
        IData/*31:0*/ __PVT__csr0__DOT__mtvec;
        IData/*31:0*/ __PVT__csr0__DOT__mscratch;
        IData/*31:0*/ __PVT__csr0__DOT__mepc;
        IData/*26:0*/ __PVT__csr0__DOT__cause_rem;
        IData/*31:0*/ __PVT__csr0__DOT__mtval;
        QData/*63:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i;
        QData/*63:0*/ __PVT__exe0__DOT__exe_type_m0__DOT__invert_result;
        QData/*63:0*/ __PVT__csr0__DOT__mcycle;
        QData/*63:0*/ __PVT__csr0__DOT__minstret;
    };

    // INTERNAL VARIABLES
    Vtest_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_top_core_top(Vtest_top__Syms* symsp, const char* v__name);
    ~Vtest_top_core_top();
    VL_UNCOPYABLE(Vtest_top_core_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
