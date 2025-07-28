// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top__pch.h"
#include "Vtest_top__Syms.h"
#include "Vtest_top_core_top.h"

VL_INLINE_OPT void Vtest_top_core_top___ico_sequent__TOP__test_top__core_top0__0(Vtest_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top___ico_sequent__TOP__test_top__core_top0__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_i)))) {
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSelf->__PVT__if_id_inst_o)) {
                                        if ((0x2000U 
                                             & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id_csr_we_o = 1U;
                                            vlSelf->__PVT__id_csr_addr_o 
                                                = (vlSelf->__PVT__if_id_inst_o 
                                                   >> 0x14U);
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id_csr_we_o = 1U;
                                            vlSelf->__PVT__id_csr_addr_o 
                                                = (vlSelf->__PVT__if_id_inst_o 
                                                   >> 0x14U);
                                        }
                                    } else if ((0x2000U 
                                                & vlSelf->__PVT__if_id_inst_o)) {
                                        vlSelf->__PVT__id_csr_we_o = 1U;
                                        vlSelf->__PVT__id_csr_addr_o 
                                            = (vlSelf->__PVT__if_id_inst_o 
                                               >> 0x14U);
                                    } else if ((0x1000U 
                                                & vlSelf->__PVT__if_id_inst_o)) {
                                        vlSelf->__PVT__id_csr_we_o = 1U;
                                        vlSelf->__PVT__id_csr_addr_o 
                                            = (vlSelf->__PVT__if_id_inst_o 
                                               >> 0x14U);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__mem_reg_we_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                   && (IData)(vlSelf->__PVT__exe_mem_reg_we_o));
    vlSelf->__PVT__exe0__DOT__s_mem_we_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                            && (0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->__PVT__id_exe_inst_o)));
    vlSelf->__PVT__ctrl_pc_o = (((~ (IData)(vlSymsp->TOP.rst_i)) 
                                 & (0U != vlSelf->__PVT__exe_mem_inst_addr_o))
                                 ? ((IData)(vlSymsp->TOP.rst_i)
                                     ? 0U : vlSelf->__PVT__exe_mem_inst_addr_o)
                                 : vlSelf->__PVT__ctrl0__DOT__current_pc);
    vlSelf->__PVT__exe0__DOT__s_reg_we_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                            && ((0x23U 
                                                 != 
                                                 (0x7fU 
                                                  & vlSelf->__PVT__id_exe_inst_o)) 
                                                && (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->__PVT__id_exe_inst_o))));
    if ((1U & ((IData)(vlSymsp->TOP.rst_i) | (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))) {
        vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation = 0U;
        vlSelf->__PVT__exe0__DOT__m_reg_wdata_o = 0U;
        vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o = 0U;
        vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o = 0U;
        vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o = 0U;
        vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o = 0U;
    } else {
        vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation = 0U;
        vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o = 0U;
        if ((0x4000U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                          >> 0xdU)))) {
                vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation = 1U;
            }
            if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o 
                        = vlSelf->__PVT__id_exe_op2_o;
                    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
                        = vlSelf->__PVT__id_exe_op1_o;
                } else {
                    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o 
                        = ((vlSelf->__PVT__id_exe_op2_o 
                            >> 0x1fU) ? (- vlSelf->__PVT__id_exe_op2_o)
                            : vlSelf->__PVT__id_exe_op2_o);
                    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
                        = ((vlSelf->__PVT__id_exe_op1_o 
                            >> 0x1fU) ? (- vlSelf->__PVT__id_exe_op1_o)
                            : vlSelf->__PVT__id_exe_op1_o);
                }
            } else if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o 
                    = vlSelf->__PVT__id_exe_op2_o;
                vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
                    = vlSelf->__PVT__id_exe_op1_o;
            } else {
                vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o 
                    = ((vlSelf->__PVT__id_exe_op2_o 
                        >> 0x1fU) ? (- vlSelf->__PVT__id_exe_op2_o)
                        : vlSelf->__PVT__id_exe_op2_o);
                vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
                    = ((vlSelf->__PVT__id_exe_op1_o 
                        >> 0x1fU) ? (- vlSelf->__PVT__id_exe_op1_o)
                        : vlSelf->__PVT__id_exe_op1_o);
            }
            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o = 1U;
        } else if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o 
                = vlSelf->__PVT__id_exe_op2_o;
            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
                = ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                    ? vlSelf->__PVT__id_exe_op1_o : 
                   ((vlSelf->__PVT__id_exe_op1_o >> 0x1fU)
                     ? (- vlSelf->__PVT__id_exe_op1_o)
                     : vlSelf->__PVT__id_exe_op1_o));
        } else if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o 
                = ((vlSelf->__PVT__id_exe_op2_o >> 0x1fU)
                    ? ((IData)(1U) + (~ vlSelf->__PVT__id_exe_op2_o))
                    : vlSelf->__PVT__id_exe_op2_o);
            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
                = ((vlSelf->__PVT__id_exe_op1_o >> 0x1fU)
                    ? ((IData)(1U) + (~ vlSelf->__PVT__id_exe_op1_o))
                    : vlSelf->__PVT__id_exe_op1_o);
        } else {
            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o 
                = vlSelf->__PVT__id_exe_op2_o;
            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
                = vlSelf->__PVT__id_exe_op1_o;
        }
        vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o = 0U;
        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                      >> 0xeU)))) {
            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o = 1U;
        }
    }
    vlSelf->__PVT__exe0__DOT__i_reg_wdata_o = (((IData)(vlSymsp->TOP.rst_i) 
                                                | (0x13U 
                                                   != 
                                                   (0x7fU 
                                                    & vlSelf->__PVT__id_exe_inst_o)))
                                                ? 0U
                                                : (
                                                   (0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->__PVT__id_exe_inst_o))
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__id_exe_inst_o)
                                                       ? 
                                                      (vlSelf->__PVT__id_exe_op1_o 
                                                       & vlSelf->__PVT__id_exe_op2_o)
                                                       : 
                                                      (vlSelf->__PVT__id_exe_op1_o 
                                                       | vlSelf->__PVT__id_exe_op2_o))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (vlSelf->__PVT__id_exe_inst_o 
                                                         >> 0x19U))
                                                        ? 
                                                       VL_SHIFTR_III(32,32,32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o)
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (vlSelf->__PVT__id_exe_inst_o 
                                                          >> 0x19U))
                                                         ? 
                                                        ((vlSelf->__PVT__exe0__DOT__exe_type_i0__DOT__sr_shift 
                                                          & (0xffffffffU 
                                                             >> 
                                                             (0x1fU 
                                                              & vlSelf->__PVT__id_exe_op2_o))) 
                                                         | ((- (IData)(
                                                                       (vlSelf->__PVT__id_exe_op1_o 
                                                                        >> 0x1fU))) 
                                                            & (~ 
                                                               (0xffffffffU 
                                                                >> 
                                                                (0x1fU 
                                                                 & vlSelf->__PVT__id_exe_op2_o)))))
                                                         : 0U))
                                                       : 
                                                      (vlSelf->__PVT__id_exe_op1_o 
                                                       ^ vlSelf->__PVT__id_exe_op2_o)))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__id_exe_inst_o)
                                                       ? 
                                                      (1U 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned))))))
                                                       : 
                                                      (1U 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed)))))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (vlSelf->__PVT__id_exe_inst_o 
                                                         >> 0x19U))
                                                        ? 
                                                       VL_SHIFTL_III(32,32,32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o)
                                                        : 0U)
                                                       : 
                                                      (vlSelf->__PVT__id_exe_op1_o 
                                                       + vlSelf->__PVT__id_exe_op2_o))))
                                                    : 0U));
    vlSelf->__PVT__exe0__DOT__r_reg_wdata_o = ((1U 
                                                & ((IData)(vlSymsp->TOP.rst_i) 
                                                   | (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_r0__DOT__isType_r))))
                                                ? 0U
                                                : (
                                                   (0x4000U 
                                                    & vlSelf->__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 
                                                     (vlSelf->__PVT__id_exe_op1_o 
                                                      & vlSelf->__PVT__id_exe_op2_o)
                                                      : 
                                                     (vlSelf->__PVT__id_exe_op1_o 
                                                      | vlSelf->__PVT__id_exe_op2_o))
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (vlSelf->__PVT__id_exe_inst_o 
                                                        >> 0x19U))
                                                       ? 
                                                      (vlSelf->__PVT__id_exe_op1_o 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->__PVT__id_exe_op2_o))
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (vlSelf->__PVT__id_exe_inst_o 
                                                         >> 0x19U))
                                                        ? 
                                                       ((vlSelf->__PVT__exe0__DOT__exe_type_i0__DOT__sr_shift 
                                                         & (0xffffffffU 
                                                            >> 
                                                            (0x1fU 
                                                             & vlSelf->__PVT__id_exe_op2_o))) 
                                                        | ((- (IData)(
                                                                      (vlSelf->__PVT__id_exe_op1_o 
                                                                       >> 0x1fU))) 
                                                           & (~ 
                                                              (0xffffffffU 
                                                               >> 
                                                               (0x1fU 
                                                                & vlSelf->__PVT__id_exe_op2_o)))))
                                                        : 0U))
                                                      : 
                                                     (vlSelf->__PVT__id_exe_op1_o 
                                                      ^ vlSelf->__PVT__id_exe_op2_o)))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 
                                                     (1U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned))))))
                                                      : 
                                                     (1U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed)))))))
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 
                                                     (vlSelf->__PVT__id_exe_op1_o 
                                                      << 
                                                      (0x1fU 
                                                       & vlSelf->__PVT__id_exe_op2_o))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (vlSelf->__PVT__id_exe_inst_o 
                                                        >> 0x19U))
                                                       ? 
                                                      (vlSelf->__PVT__id_exe_op1_o 
                                                       + vlSelf->__PVT__id_exe_op2_o)
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (vlSelf->__PVT__id_exe_inst_o 
                                                         >> 0x19U))
                                                        ? 
                                                       (vlSelf->__PVT__id_exe_op1_o 
                                                        - vlSelf->__PVT__id_exe_op2_o)
                                                        : 0U))))));
    vlSelf->__PVT__mem_csr_we_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                   && (IData)(vlSelf->__PVT__exe_mem_csr_we_o));
    if ((1U & (~ ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S)))) {
                    vlSelf->__PVT__int_ctrl_epc_o = 
                        ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__exception)
                          ? (vlSelf->__PVT__ctrl_pc_o 
                             - (IData)(4U)) : vlSelf->__PVT__ctrl_pc_o);
                }
            }
        }
    }
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S_nxt 
        = ((0U == (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S))
            ? ((1U & ((~ (IData)((0U != vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o))) 
                      | (~ (IData)((0U != vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o)))))
                ? 3U : 1U) : ((1U == (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S))
                               ? ((0U != (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt))
                                   ? 1U : 3U) : 0U));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__id0__DOT__except_ecall = 0U;
        vlSelf->__PVT__id0__DOT__except_mret = 0U;
        vlSelf->__PVT__id_inst_o = 0x13U;
        vlSelf->__PVT__mem_reg_waddr_o = 0U;
        vlSelf->__PVT__exe_reg_waddr_o = 0U;
        vlSelf->__PVT__exe_csr_we_o = 0U;
        vlSelf->__PVT__mem0__DOT__reg_wdata = 0U;
        vlSelf->__PVT__id_reg_waddr_o = 0U;
        vlSelf->__PVT__id_reg_we_o = 0U;
        vlSelf->__PVT__exe0__DOT__s_mem_op_o = 0U;
        vlSelf->__PVT__exe0__DOT__s_mem_addr_o = 0U;
        vlSelf->__PVT__exe0__DOT__s_mem_data_o = 0U;
        vlSelf->__PVT__mem_mem_we_o = 0U;
        vlSelf->__PVT__exe_jump_enable_o = 0U;
        vlSelf->__PVT__id_reg2_addr_o = 0U;
        vlSelf->__PVT__id_reg2_re_o = 0U;
        vlSelf->__PVT__exe_jump_addr_o = 0U;
    } else {
        vlSelf->__PVT__id0__DOT__except_ecall = 0U;
        vlSelf->__PVT__id0__DOT__except_mret = 0U;
        vlSelf->__PVT__id_inst_o = 0x13U;
        vlSelf->__PVT__mem_reg_waddr_o = vlSelf->__PVT__exe_mem_reg_waddr_o;
        vlSelf->__PVT__exe_reg_waddr_o = 0U;
        vlSelf->__PVT__exe_csr_we_o = 0U;
        vlSelf->__PVT__mem0__DOT__reg_wdata = vlSelf->__PVT__exe_mem_reg_wdata_o;
        vlSelf->__PVT__id_reg_waddr_o = 0U;
        vlSelf->__PVT__id_reg_we_o = 0U;
        if ((0x23U == (0x7fU & vlSelf->__PVT__id_exe_inst_o))) {
            vlSelf->__PVT__exe0__DOT__s_mem_op_o = 
                ((0U == (7U & (vlSelf->__PVT__id_exe_inst_o 
                               >> 0xcU))) ? 1U : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->__PVT__id_exe_inst_o 
                                                       >> 0xcU)))
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->__PVT__id_exe_inst_o 
                                                        >> 0xcU)))
                                                    ? 3U
                                                    : 0U)));
            vlSelf->__PVT__exe0__DOT__s_mem_addr_o 
                = (vlSelf->__PVT__id_exe_op1_o + ((
                                                   (- (IData)(
                                                              (vlSelf->__PVT__id_exe_inst_o 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelf->__PVT__id_exe_inst_o 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->__PVT__id_exe_inst_o 
                                                           >> 7U)))));
            vlSelf->__PVT__exe0__DOT__s_mem_data_o 
                = vlSelf->__PVT__id_exe_op2_o;
        } else {
            if ((3U == (0x7fU & vlSelf->__PVT__id_exe_inst_o))) {
                vlSelf->__PVT__exe0__DOT__s_mem_op_o 
                    = ((0x4000U & vlSelf->__PVT__id_exe_inst_o)
                        ? ((0x2000U & vlSelf->__PVT__id_exe_inst_o)
                            ? 0U : ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                                     ? 0xdU : 0xcU))
                        : ((0x2000U & vlSelf->__PVT__id_exe_inst_o)
                            ? ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                                ? 0U : 0xbU) : ((0x1000U 
                                                 & vlSelf->__PVT__id_exe_inst_o)
                                                 ? 0xaU
                                                 : 9U)));
                vlSelf->__PVT__exe0__DOT__s_mem_addr_o 
                    = (vlSelf->__PVT__id_exe_op1_o 
                       + (((- (IData)((vlSelf->__PVT__id_exe_inst_o 
                                       >> 0x1fU))) 
                           << 0xcU) | (vlSelf->__PVT__id_exe_inst_o 
                                       >> 0x14U)));
            } else {
                vlSelf->__PVT__exe0__DOT__s_mem_op_o = 0U;
                vlSelf->__PVT__exe0__DOT__s_mem_addr_o = 0U;
            }
            vlSelf->__PVT__exe0__DOT__s_mem_data_o = 0U;
        }
        vlSelf->__PVT__mem_mem_we_o = vlSelf->__PVT__exe_mem_mem_we_o;
        if ((8U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                    vlSelf->__PVT__mem_mem_we_o = 0U;
                }
            } else if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                                 >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                    vlSelf->__PVT__mem_mem_we_o = 0U;
                }
            }
        } else if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            vlSelf->__PVT__mem_mem_we_o = 0U;
        } else if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                vlSelf->__PVT__mem_mem_we_o = 0U;
            }
        }
        vlSelf->__PVT__exe_jump_enable_o = 0U;
        vlSelf->__PVT__id_reg2_addr_o = 0U;
        vlSelf->__PVT__id_reg2_re_o = 0U;
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->__PVT__if_id_inst_o 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->__PVT__if_id_inst_o 
                                                     >> 0xcU)))) {
                                                if ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xfff00000U 
                                                              & vlSelf->__PVT__if_id_inst_o)))) {
                                                    vlSelf->__PVT__id0__DOT__except_ecall = 1U;
                                                }
                                                if ((IData)(
                                                            (0x30200000U 
                                                             == 
                                                             (0xfff00000U 
                                                              & vlSelf->__PVT__if_id_inst_o)))) {
                                                    vlSelf->__PVT__id0__DOT__except_mret = 1U;
                                                }
                                            }
                                        }
                                    }
                                    if ((0x4000U & vlSelf->__PVT__if_id_inst_o)) {
                                        if ((0x2000U 
                                             & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id_inst_o 
                                                = vlSelf->__PVT__if_id_inst_o;
                                            vlSelf->__PVT__id_reg_waddr_o 
                                                = (0x1fU 
                                                   & (vlSelf->__PVT__if_id_inst_o 
                                                      >> 7U));
                                            vlSelf->__PVT__id_reg_we_o = 1U;
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id_inst_o 
                                                = vlSelf->__PVT__if_id_inst_o;
                                            vlSelf->__PVT__id_reg_waddr_o 
                                                = (0x1fU 
                                                   & (vlSelf->__PVT__if_id_inst_o 
                                                      >> 7U));
                                            vlSelf->__PVT__id_reg_we_o = 1U;
                                        }
                                    } else if ((0x2000U 
                                                & vlSelf->__PVT__if_id_inst_o)) {
                                        vlSelf->__PVT__id_inst_o 
                                            = vlSelf->__PVT__if_id_inst_o;
                                        vlSelf->__PVT__id_reg_waddr_o 
                                            = (0x1fU 
                                               & (vlSelf->__PVT__if_id_inst_o 
                                                  >> 7U));
                                        vlSelf->__PVT__id_reg_we_o = 1U;
                                    } else if ((0x1000U 
                                                & vlSelf->__PVT__if_id_inst_o)) {
                                        vlSelf->__PVT__id_inst_o 
                                            = vlSelf->__PVT__if_id_inst_o;
                                        vlSelf->__PVT__id_reg_waddr_o 
                                            = (0x1fU 
                                               & (vlSelf->__PVT__if_id_inst_o 
                                                  >> 7U));
                                        vlSelf->__PVT__id_reg_we_o = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_inst_o 
                                    = vlSelf->__PVT__if_id_inst_o;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                                vlSelf->__PVT__id_reg_we_o = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                            vlSelf->__PVT__id_reg_we_o = 1U;
                        }
                    }
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = vlSelf->__PVT__if_id_inst_o;
                    }
                }
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 4U)))) {
                    if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    vlSelf->__PVT__id_reg2_addr_o 
                                        = (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U));
                                }
                            }
                        }
                    } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_reg2_addr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 0x14U));
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_reg2_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U));
                        }
                    }
                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    vlSelf->__PVT__id_reg2_re_o = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 3U)))) {
                    if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_inst_o 
                                    = vlSelf->__PVT__if_id_inst_o;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                                vlSelf->__PVT__id_reg_we_o = 1U;
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = ((IData)(vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0)
                                    ? (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U))
                                    : 0U);
                            vlSelf->__PVT__id_reg_we_o 
                                = vlSelf->__PVT__id0__DOT__r_reg_we_o;
                        }
                    }
                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                  >> 2U)))) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_reg2_addr_o 
                                    = ((IData)(vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0)
                                        ? (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U))
                                        : 0U);
                                vlSelf->__PVT__id_reg2_re_o 
                                    = vlSelf->__PVT__id0__DOT__r_reg2_re_o;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 2U)))) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                            vlSelf->__PVT__id_reg2_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U));
                            vlSelf->__PVT__id_reg2_re_o = 1U;
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                          >> 3U)))) {
                if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                            vlSelf->__PVT__id_reg_we_o = 1U;
                        }
                    }
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = vlSelf->__PVT__if_id_inst_o;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = vlSelf->__PVT__id0__DOT__i_reg_waddr_o;
                        vlSelf->__PVT__id_reg_we_o 
                            = vlSelf->__PVT__id0__DOT__i_reg_we_o;
                    }
                }
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 2U)))) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_reg2_addr_o 
                                = vlSelf->__PVT__id0__DOT__i_reg2_raddr_o;
                            vlSelf->__PVT__id_reg2_re_o 
                                = vlSelf->__PVT__id0__DOT__i_reg2_re_o;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                          >> 2U)))) {
                if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = vlSelf->__PVT__if_id_inst_o;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                        >> 7U));
                        vlSelf->__PVT__id_reg_we_o = 1U;
                    }
                }
            }
        }
        vlSelf->__PVT__exe_jump_addr_o = 0U;
        if ((0x40U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
                                        vlSelf->__PVT__exe_reg_waddr_o 
                                            = vlSelf->__PVT__id_exe_reg_waddr_o;
                                        vlSelf->__PVT__exe_csr_we_o 
                                            = vlSelf->__PVT__id_exe_csr_we_o;
                                    } else if ((0x1000U 
                                                & vlSelf->__PVT__id_exe_inst_o)) {
                                        vlSelf->__PVT__exe_reg_waddr_o 
                                            = vlSelf->__PVT__id_exe_reg_waddr_o;
                                        vlSelf->__PVT__exe_csr_we_o 
                                            = vlSelf->__PVT__id_exe_csr_we_o;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                vlSelf->__PVT__exe_reg_waddr_o 
                                    = vlSelf->__PVT__id_exe_reg_waddr_o;
                            }
                        }
                    }
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                        }
                    }
                }
                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                              >> 4U)))) {
                    if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    vlSelf->__PVT__exe_jump_enable_o 
                                        = vlSelf->__PVT__exe0__DOT__b_jump_enable_o;
                                    vlSelf->__PVT__exe_jump_addr_o 
                                        = vlSelf->__PVT__exe0__DOT__b_jump_addr_o;
                                }
                            }
                        }
                    } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                vlSelf->__PVT__exe_jump_enable_o 
                                    = vlSelf->__PVT__exe0__DOT__b_jump_enable_o;
                                vlSelf->__PVT__exe_jump_addr_o 
                                    = (0xfffffffeU 
                                       & (vlSelf->__PVT__exe0__DOT__b_jump_addr_o 
                                          + vlSelf->__PVT__id_exe_op1_o));
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_jump_enable_o 
                                = vlSelf->__PVT__exe0__DOT__b_jump_enable_o;
                            vlSelf->__PVT__exe_jump_addr_o 
                                = vlSelf->__PVT__exe0__DOT__b_jump_addr_o;
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                              >> 3U)))) {
                    if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                vlSelf->__PVT__exe_reg_waddr_o 
                                    = vlSelf->__PVT__id_exe_reg_waddr_o;
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                              >> 2U)))) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                          >> 3U)))) {
                if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                        }
                    }
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_reg_waddr_o 
                            = vlSelf->__PVT__id_exe_reg_waddr_o;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                          >> 2U)))) {
                if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_reg_waddr_o 
                            = vlSelf->__PVT__id_exe_reg_waddr_o;
                    }
                }
            }
        }
    }
    vlSelf->__PVT__ctrl_new_pc_o = ((IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)
                                     ? ((8U & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                         ? ((4U & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                             ? 0U : 
                                            ((2U & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                              ? 0U : 
                                             ((1U & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                               ? 0U
                                               : vlSelf->__PVT__csr0__DOT__mepc)))
                                         : ((4U & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                             ? ((2U 
                                                 & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->__PVT__int_ctrl_interrupt_type_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->__PVT__csr0__DOT__mtvec)
                                                    ? 
                                                   ((0xfffffffcU 
                                                     & vlSelf->__PVT__csr0__DOT__mtvec) 
                                                    + 
                                                    ((IData)(vlSelf->__PVT__int_ctrl_trap_casue_o) 
                                                     << 2U))
                                                    : 
                                                   (0xfffffffcU 
                                                    & vlSelf->__PVT__csr0__DOT__mtvec))
                                                   : 
                                                  (0xfffffffcU 
                                                   & vlSelf->__PVT__csr0__DOT__mtvec))))
                                             : 0U))
                                     : ((IData)(vlSelf->__PVT__exe_jump_enable_o)
                                         ? vlSelf->__PVT__exe_jump_addr_o
                                         : 0U));
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S_next 
        = ((0U == (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
            ? ((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o)
                ? (((0U == vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o) 
                    | (0U == vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o))
                    ? 3U : 1U) : 0U) : ((1U == (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
                                         ? ((0U != (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt))
                                             ? 1U : 3U)
                                         : 0U));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__id_reg1_addr_o = 0U;
        vlSelf->__PVT__id_reg1_re_o = 0U;
        vlSelf->__PVT__mem_csr_waddr_o = 0U;
        vlSelf->__PVT__mem_csr_wdata_o = 0U;
    } else {
        vlSelf->__PVT__id_reg1_addr_o = 0U;
        vlSelf->__PVT__id_reg1_re_o = 0U;
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                                  >> 0xeU)))) {
                                        if ((0x2000U 
                                             & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id_reg1_addr_o 
                                                = (0x1fU 
                                                   & (vlSelf->__PVT__if_id_inst_o 
                                                      >> 0xfU));
                                            vlSelf->__PVT__id_reg1_re_o = 1U;
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id_reg1_addr_o 
                                                = (0x1fU 
                                                   & (vlSelf->__PVT__if_id_inst_o 
                                                      >> 0xfU));
                                            vlSelf->__PVT__id_reg1_re_o = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    vlSelf->__PVT__id_reg1_addr_o 
                                        = (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                                }
                            }
                        }
                    } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_reg1_addr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 0xfU));
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                        }
                    }
                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    vlSelf->__PVT__id_reg1_re_o = 1U;
                                }
                            }
                        } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_reg1_re_o = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                  >> 2U)))) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_reg1_addr_o 
                                    = ((IData)(vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0)
                                        ? (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU))
                                        : 0U);
                                vlSelf->__PVT__id_reg1_re_o 
                                    = vlSelf->__PVT__id0__DOT__r_reg1_re_o;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 2U)))) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                            vlSelf->__PVT__id_reg1_re_o = 1U;
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 2U)))) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_reg1_addr_o 
                                = vlSelf->__PVT__id0__DOT__i_reg1_raddr_o;
                            vlSelf->__PVT__id_reg1_re_o 
                                = vlSelf->__PVT__id0__DOT__i_reg1_re_o;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                          >> 2U)))) {
                if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                        >> 0xfU));
                        vlSelf->__PVT__id_reg1_re_o = 1U;
                    }
                }
            }
        }
        vlSelf->__PVT__mem_csr_waddr_o = vlSelf->__PVT__exe_mem_csr_waddr_o;
        vlSelf->__PVT__mem_csr_wdata_o = vlSelf->__PVT__exe_mem_csr_wdata_o;
    }
    vlSelf->__PVT__exe0__DOT__csr_rdata = ((((IData)(vlSelf->__PVT__id_exe_csr_addr_o) 
                                             == (IData)(vlSelf->__PVT__mem_csr_waddr_o)) 
                                            & (IData)(vlSelf->__PVT__mem_csr_we_o))
                                            ? vlSelf->__PVT__mem_csr_wdata_o
                                            : vlSelf->__PVT__csr_file_csr_rdata_o);
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__invert_result 
        = ((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o)
            ? (1ULL + (~ vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i))
            : 0ULL);
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__result 
        = ((1U & ((IData)(vlSymsp->TOP.rst_i) | (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))
            ? 0U : ((0x4000U & vlSelf->__PVT__id_exe_inst_o)
                     ? ((0x2000U & vlSelf->__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                             ? vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_result
                             : ((0U != vlSelf->__PVT__id_exe_op2_o)
                                 ? ((vlSelf->__PVT__id_exe_op1_o 
                                     >> 0x1fU) ? (- vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_result)
                                     : vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_result)
                                 : vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_result))
                         : ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                             ? vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_result
                             : ((0U != vlSelf->__PVT__id_exe_op2_o)
                                 ? ((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust)
                                     ? (- vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_result)
                                     : vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_result)
                                 : vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_result)))
                     : ((0x2000U & vlSelf->__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                             ? (IData)((vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i 
                                        >> 0x20U)) : 
                            ((vlSelf->__PVT__id_exe_op1_o 
                              >> 0x1fU) ? (IData)((vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__invert_result 
                                                   >> 0x20U))
                              : (IData)((vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i 
                                         >> 0x20U))))
                         : ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                             ? ((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust)
                                 ? (IData)((vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__invert_result 
                                            >> 0x20U))
                                 : (IData)((vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i 
                                            >> 0x20U)))
                             : (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i)))));
    if (((IData)(vlSymsp->TOP.rst_i) | (0x73U != (0x7fU 
                                                  & vlSelf->__PVT__id_exe_inst_o)))) {
        vlSelf->__PVT__exe0__DOT__system_csr_wdata_o = 0U;
        vlSelf->__PVT__exe0__DOT__system_reg_wdata_o = 0U;
    } else if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
        vlSelf->__PVT__exe0__DOT__system_csr_wdata_o 
            = ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                ? (vlSelf->__PVT__exe0__DOT__csr_rdata 
                   & (~ vlSelf->__PVT__id_exe_op1_o))
                : (vlSelf->__PVT__exe0__DOT__csr_rdata 
                   | vlSelf->__PVT__id_exe_op1_o));
        vlSelf->__PVT__exe0__DOT__system_reg_wdata_o 
            = vlSelf->__PVT__exe0__DOT__csr_rdata;
    } else if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
        vlSelf->__PVT__exe0__DOT__system_csr_wdata_o 
            = vlSelf->__PVT__id_exe_op1_o;
        vlSelf->__PVT__exe0__DOT__system_reg_wdata_o 
            = vlSelf->__PVT__exe0__DOT__csr_rdata;
    } else {
        vlSelf->__PVT__exe0__DOT__system_csr_wdata_o = 0U;
        vlSelf->__PVT__exe0__DOT__system_reg_wdata_o = 0U;
    }
    vlSelf->__PVT__exe0__DOT__m_reg_wdata_o = ((- (IData)(
                                                          ((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i) 
                                                           | (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i)))) 
                                               & vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__result);
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__mem_mem_addr_o = 0U;
        vlSelf->__PVT__mem_mem_ce_o = 0U;
        vlSelf->__PVT__exe_mem_we_o = 0U;
        vlSelf->__PVT__exe_mem_op_o = 0U;
        vlSelf->__PVT__exe_mem_addr_o = 0U;
        vlSelf->__PVT__exe_mem_data_o = 0U;
        vlSelf->__PVT__exe_reg_we_o = 0U;
        vlSelf->__PVT__ctrl_stall_o = 0U;
        vlSelf->__PVT__exe_csr_wdata_o = 0U;
        vlSelf->__PVT__exe_reg_wdata_o = 0U;
    } else {
        vlSelf->__PVT__mem_mem_addr_o = vlSelf->__PVT__exe_mem_mem_addr_o;
        vlSelf->__PVT__mem_mem_ce_o = 1U;
        if ((8U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                    vlSelf->__PVT__mem_mem_addr_o = 0U;
                    vlSelf->__PVT__mem_mem_ce_o = 0U;
                }
            } else if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                                 >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                    vlSelf->__PVT__mem_mem_addr_o = 0U;
                    vlSelf->__PVT__mem_mem_ce_o = 0U;
                }
            }
        } else if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            vlSelf->__PVT__mem_mem_addr_o = 0U;
            vlSelf->__PVT__mem_mem_ce_o = 0U;
        } else if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                vlSelf->__PVT__mem_mem_addr_o = 0U;
                vlSelf->__PVT__mem_mem_ce_o = 0U;
            }
        }
        vlSelf->__PVT__exe_mem_we_o = 0U;
        vlSelf->__PVT__exe_mem_op_o = 0U;
        vlSelf->__PVT__exe_mem_addr_o = 0U;
        vlSelf->__PVT__exe_mem_data_o = 0U;
        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    vlSelf->__PVT__exe_mem_we_o 
                                        = vlSelf->__PVT__exe0__DOT__s_mem_we_o;
                                    vlSelf->__PVT__exe_mem_op_o 
                                        = vlSelf->__PVT__exe0__DOT__s_mem_op_o;
                                    vlSelf->__PVT__exe_mem_addr_o 
                                        = vlSelf->__PVT__exe0__DOT__s_mem_addr_o;
                                    vlSelf->__PVT__exe_mem_data_o 
                                        = vlSelf->__PVT__exe0__DOT__s_mem_data_o;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                 >> 4U)))) {
                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 2U)))) {
                        if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                vlSelf->__PVT__exe_mem_we_o 
                                    = vlSelf->__PVT__exe0__DOT__s_mem_we_o;
                                vlSelf->__PVT__exe_mem_op_o 
                                    = vlSelf->__PVT__exe0__DOT__s_mem_op_o;
                                vlSelf->__PVT__exe_mem_addr_o 
                                    = vlSelf->__PVT__exe0__DOT__s_mem_addr_o;
                                vlSelf->__PVT__exe_mem_data_o 
                                    = vlSelf->__PVT__exe0__DOT__s_mem_data_o;
                            }
                        }
                    }
                }
            }
        }
        vlSelf->__PVT__exe_reg_we_o = 0U;
        vlSelf->__PVT__ctrl_stall_o = ((((~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i)) 
                                         & (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o)) 
                                        | ((~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i)) 
                                           & (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o)))
                                        ? 0xfU : (((IData)(vlSelf->__PVT__id_exe_inst_is_load_o) 
                                                   & (((0x1fU 
                                                        & (vlSelf->__PVT__if_id_inst_o 
                                                           >> 0xfU)) 
                                                       == (IData)(vlSelf->__PVT__id_exe_rd_o)) 
                                                      | ((0x1fU 
                                                          & (vlSelf->__PVT__if_id_inst_o 
                                                             >> 0x14U)) 
                                                         == (IData)(vlSelf->__PVT__id_exe_rd_o))))
                                                   ? 7U
                                                   : 0U));
        vlSelf->__PVT__exe_csr_wdata_o = 0U;
        vlSelf->__PVT__exe_reg_wdata_o = 0U;
        if ((0x40U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
                                        vlSelf->__PVT__exe_reg_we_o 
                                            = vlSelf->__PVT__id_exe_reg_we_o;
                                        vlSelf->__PVT__exe_csr_wdata_o 
                                            = vlSelf->__PVT__exe0__DOT__system_csr_wdata_o;
                                        vlSelf->__PVT__exe_reg_wdata_o 
                                            = vlSelf->__PVT__exe0__DOT__system_reg_wdata_o;
                                    } else if ((0x1000U 
                                                & vlSelf->__PVT__id_exe_inst_o)) {
                                        vlSelf->__PVT__exe_reg_we_o 
                                            = vlSelf->__PVT__id_exe_reg_we_o;
                                        vlSelf->__PVT__exe_csr_wdata_o 
                                            = vlSelf->__PVT__exe0__DOT__system_csr_wdata_o;
                                        vlSelf->__PVT__exe_reg_wdata_o 
                                            = vlSelf->__PVT__exe0__DOT__system_reg_wdata_o;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                vlSelf->__PVT__exe_reg_we_o = 1U;
                                vlSelf->__PVT__exe_reg_wdata_o 
                                    = ((IData)(4U) 
                                       + vlSelf->__PVT__id_exe_inst_addr_o);
                            }
                        }
                    }
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_we_o = 1U;
                            vlSelf->__PVT__exe_reg_wdata_o 
                                = ((IData)(4U) + vlSelf->__PVT__id_exe_inst_addr_o);
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                              >> 3U)))) {
                    if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                vlSelf->__PVT__exe_reg_we_o 
                                    = vlSelf->__PVT__id_exe_reg_we_o;
                                vlSelf->__PVT__exe_reg_wdata_o 
                                    = (vlSelf->__PVT__id_exe_op1_o 
                                       + vlSelf->__PVT__id_exe_op2_o);
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_we_o 
                                = (1U & (((1U & (~ 
                                                 ((IData)(vlSymsp->TOP.rst_i) 
                                                  | (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_r0__DOT__isType_r))))) 
                                          && ((0x4000U 
                                               & vlSelf->__PVT__id_exe_inst_o)
                                               ? ((1U 
                                                   & (vlSelf->__PVT__id_exe_inst_o 
                                                      >> 0xdU)) 
                                                  || ((1U 
                                                       & (~ 
                                                          (vlSelf->__PVT__id_exe_inst_o 
                                                           >> 0xcU))) 
                                                      || ((0U 
                                                           == 
                                                           (vlSelf->__PVT__id_exe_inst_o 
                                                            >> 0x19U)) 
                                                          || (0x20U 
                                                              == 
                                                              (vlSelf->__PVT__id_exe_inst_o 
                                                               >> 0x19U)))))
                                               : ((1U 
                                                   & (vlSelf->__PVT__id_exe_inst_o 
                                                      >> 0xdU)) 
                                                  || ((1U 
                                                       & (vlSelf->__PVT__id_exe_inst_o 
                                                          >> 0xcU)) 
                                                      || ((0U 
                                                           == 
                                                           (vlSelf->__PVT__id_exe_inst_o 
                                                            >> 0x19U)) 
                                                          || (0x20U 
                                                              == 
                                                              (vlSelf->__PVT__id_exe_inst_o 
                                                               >> 0x19U))))))) 
                                         | (~ ((IData)(vlSymsp->TOP.rst_i) 
                                               | (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))));
                            vlSelf->__PVT__exe_reg_wdata_o 
                                = (vlSelf->__PVT__exe0__DOT__r_reg_wdata_o 
                                   | vlSelf->__PVT__exe0__DOT__m_reg_wdata_o);
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                              >> 2U)))) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_we_o 
                                = vlSelf->__PVT__exe0__DOT__s_reg_we_o;
                            vlSelf->__PVT__exe_reg_wdata_o = 0U;
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                          >> 3U)))) {
                if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_we_o 
                                = vlSelf->__PVT__id_exe_reg_we_o;
                            vlSelf->__PVT__exe_reg_wdata_o 
                                = (vlSelf->__PVT__id_exe_op1_o 
                                   + vlSelf->__PVT__id_exe_op2_o);
                        }
                    }
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_reg_we_o 
                            = ((1U & (~ ((IData)(vlSymsp->TOP.rst_i) 
                                         | (0x13U != 
                                            (0x7fU 
                                             & vlSelf->__PVT__id_exe_inst_o))))) 
                               && ((0x13U == (0x7fU 
                                              & vlSelf->__PVT__id_exe_inst_o)) 
                                   && ((0x4000U & vlSelf->__PVT__id_exe_inst_o)
                                        ? ((1U & (vlSelf->__PVT__id_exe_inst_o 
                                                  >> 0xdU)) 
                                           || ((1U 
                                                & (~ 
                                                   (vlSelf->__PVT__id_exe_inst_o 
                                                    >> 0xcU))) 
                                               || ((0U 
                                                    == 
                                                    (vlSelf->__PVT__id_exe_inst_o 
                                                     >> 0x19U)) 
                                                   || (0x20U 
                                                       == 
                                                       (vlSelf->__PVT__id_exe_inst_o 
                                                        >> 0x19U)))))
                                        : ((1U & (vlSelf->__PVT__id_exe_inst_o 
                                                  >> 0xdU)) 
                                           || ((1U 
                                                & (~ 
                                                   (vlSelf->__PVT__id_exe_inst_o 
                                                    >> 0xcU))) 
                                               || (0U 
                                                   == 
                                                   (vlSelf->__PVT__id_exe_inst_o 
                                                    >> 0x19U)))))));
                        vlSelf->__PVT__exe_reg_wdata_o 
                            = vlSelf->__PVT__exe0__DOT__i_reg_wdata_o;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                          >> 2U)))) {
                if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_reg_we_o 
                            = vlSelf->__PVT__exe0__DOT__s_reg_we_o;
                        vlSelf->__PVT__exe_reg_wdata_o = 0U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtest_top_core_top___ico_sequent__TOP__test_top__core_top0__1(Vtest_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top___ico_sequent__TOP__test_top__core_top0__1\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_i)))) {
        if ((8U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    vlSelf->__PVT__mem0__DOT__reg_wdata 
                        = ((1U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                            ? ((0U == (3U & vlSelf->__PVT__exe_mem_mem_addr_o))
                                ? (0xffffU & vlSymsp->TOP__test_top.__PVT__host_rdata
                                   [0U]) : ((2U == 
                                             (3U & vlSelf->__PVT__exe_mem_mem_addr_o))
                                             ? (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                [0U] 
                                                >> 0x10U)
                                             : 0U))
                            : ((0U == (3U & vlSelf->__PVT__exe_mem_mem_addr_o))
                                ? (0xffU & vlSymsp->TOP__test_top.__PVT__host_rdata
                                   [0U]) : ((1U == 
                                             (3U & vlSelf->__PVT__exe_mem_mem_addr_o))
                                             ? (0xffU 
                                                & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                   [0U] 
                                                   >> 8U))
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                 ? 
                                                (0xffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                    [0U] 
                                                    >> 0x10U))
                                                 : 
                                                (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                 [0U] 
                                                 >> 0x18U)))));
                }
            } else if ((2U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                vlSelf->__PVT__mem0__DOT__reg_wdata 
                    = ((1U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                        ? vlSymsp->TOP__test_top.__PVT__host_rdata
                       [0U] : ((0U == (3U & vlSelf->__PVT__exe_mem_mem_addr_o))
                                ? (((- (IData)((1U 
                                                & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                   [0U] 
                                                   >> 0xfU)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                 [0U]))
                                : ((2U == (3U & vlSelf->__PVT__exe_mem_mem_addr_o))
                                    ? (((- (IData)(
                                                   (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                    [0U] 
                                                    >> 0x1fU))) 
                                        << 0x10U) | 
                                       (vlSymsp->TOP__test_top.__PVT__host_rdata
                                        [0U] >> 0x10U))
                                    : 0U)));
            } else if ((1U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                vlSelf->__PVT__mem0__DOT__reg_wdata 
                    = ((0U == (3U & vlSelf->__PVT__exe_mem_mem_addr_o))
                        ? (((- (IData)((1U & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                              [0U] 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSymsp->TOP__test_top.__PVT__host_rdata
                                      [0U])) : ((1U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                                 [0U] 
                                                                 >> 0xfU)))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                       [0U] 
                                                       >> 8U)))
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                                  [0U] 
                                                                  >> 0x17U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                        [0U] 
                                                        >> 0x10U)))
                                                  : 
                                                 (((- (IData)(
                                                              (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                               [0U] 
                                                               >> 0x1fU))) 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                     [0U] 
                                                     >> 0x18U)))));
            }
        }
    }
    if ((0x13U == (0x7fU & vlSelf->__PVT__if_id_inst_o))) {
        vlSelf->__PVT__id0__DOT__i_op1_o = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
        if ((0x4000U & vlSelf->__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & (~ (IData)(vlSelf->id0__DOT__inst_type_i__DOT____VdfgExtracted_h64b65831__0)))) {
                        vlSelf->__PVT__id0__DOT__i_op1_o = 0U;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                             >> 0xdU)))) {
            if ((0x1000U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0U != (vlSelf->__PVT__if_id_inst_o 
                            >> 0x19U))) {
                    vlSelf->__PVT__id0__DOT__i_op1_o = 0U;
                }
            }
        }
    } else {
        vlSelf->__PVT__id0__DOT__i_op1_o = 0U;
    }
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__mem_mem_data_o = 0U;
        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
    } else {
        vlSelf->__PVT__mem_mem_data_o = 0U;
        if ((8U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                    vlSelf->__PVT__mem_mem_data_o = 0U;
                }
            } else if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                                 >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                    vlSelf->__PVT__mem_mem_data_o = 0U;
                }
            }
        } else {
            vlSelf->__PVT__mem_mem_data_o = ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                              ? 0U : 
                                             ((2U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                               ? ((1U 
                                                   & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                                   ? vlSelf->__PVT__exe_mem_mem_data_o
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                    ? 
                                                   ((0xffff0000U 
                                                     & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                     [0U]) 
                                                    | (0xffffU 
                                                       & vlSelf->__PVT__exe_mem_mem_data_o))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                     ? 
                                                    ((vlSelf->__PVT__exe_mem_mem_data_o 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                        [0U]))
                                                     : 0U)))
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                    ? 
                                                   ((0xffffff00U 
                                                     & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                     [0U]) 
                                                    | (0xffU 
                                                       & vlSelf->__PVT__exe_mem_mem_data_o))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                     ? 
                                                    ((0xffff0000U 
                                                      & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                      [0U]) 
                                                     | ((0xff00U 
                                                         & (vlSelf->__PVT__exe_mem_mem_data_o 
                                                            << 8U)) 
                                                        | (0xffU 
                                                           & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                           [0U])))
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                      ? 
                                                     ((0xff000000U 
                                                       & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                       [0U]) 
                                                      | ((0xff0000U 
                                                          & (vlSelf->__PVT__exe_mem_mem_data_o 
                                                             << 0x10U)) 
                                                         | (0xffffU 
                                                            & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                            [0U])))
                                                      : 
                                                     ((vlSelf->__PVT__exe_mem_mem_data_o 
                                                       << 0x18U) 
                                                      | (0xffffffU 
                                                         & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                         [0U])))))
                                                   : 0U)));
        }
        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    vlSelf->__PVT__id0__DOT__op2_o_final 
                                        = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o;
                                }
                            }
                        }
                    }
                }
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSelf->__PVT__if_id_inst_o)) {
                                        if ((0x2000U 
                                             & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id0__DOT__op1_o_final 
                                                = (0x1fU 
                                                   & (vlSelf->__PVT__if_id_inst_o 
                                                      >> 0xfU));
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id0__DOT__op1_o_final 
                                                = (0x1fU 
                                                   & (vlSelf->__PVT__if_id_inst_o 
                                                      >> 0xfU));
                                        }
                                    } else if ((0x2000U 
                                                & vlSelf->__PVT__if_id_inst_o)) {
                                        vlSelf->__PVT__id0__DOT__op1_o_final 
                                            = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                                    } else if ((0x1000U 
                                                & vlSelf->__PVT__if_id_inst_o)) {
                                        vlSelf->__PVT__id0__DOT__op1_o_final 
                                            = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                     >> 3U)))) {
                    if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id0__DOT__op1_o_final 
                                    = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id0__DOT__op1_o_final 
                                = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 3U)))) {
                    if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                                vlSelf->__PVT__id0__DOT__op1_o_final 
                                    = (0xfffff000U 
                                       & vlSelf->__PVT__if_id_inst_o);
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            if (vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0) {
                                vlSelf->__PVT__id0__DOT__op2_o_final 
                                    = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o;
                                vlSelf->__PVT__id0__DOT__op1_o_final 
                                    = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                            } else {
                                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                                vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 2U)))) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id0__DOT__op2_o_final 
                                = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o;
                            vlSelf->__PVT__id0__DOT__op1_o_final 
                                = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                          >> 3U)))) {
                if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id0__DOT__op2_o_final 
                                = (0xfffff000U & vlSelf->__PVT__if_id_inst_o);
                            vlSelf->__PVT__id0__DOT__op1_o_final 
                                = vlSelf->__PVT__if_id_inst_addr_o;
                        }
                    }
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id0__DOT__op2_o_final 
                            = ((0x13U == (0x7fU & vlSelf->__PVT__if_id_inst_o))
                                ? ((0x4000U & vlSelf->__PVT__if_id_inst_o)
                                    ? ((0x2000U & vlSelf->__PVT__if_id_inst_o)
                                        ? (((- (IData)(
                                                       (vlSelf->__PVT__if_id_inst_o 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelf->__PVT__if_id_inst_o 
                                              >> 0x14U))
                                        : ((0x1000U 
                                            & vlSelf->__PVT__if_id_inst_o)
                                            ? ((IData)(vlSelf->id0__DOT__inst_type_i__DOT____VdfgExtracted_h64b65831__0)
                                                ? (0x1fU 
                                                   & (vlSelf->__PVT__if_id_inst_o 
                                                      >> 0x14U))
                                                : 0U)
                                            : (((- (IData)(
                                                           (vlSelf->__PVT__if_id_inst_o 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->__PVT__if_id_inst_o 
                                                  >> 0x14U))))
                                    : ((0x2000U & vlSelf->__PVT__if_id_inst_o)
                                        ? (((- (IData)(
                                                       (vlSelf->__PVT__if_id_inst_o 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelf->__PVT__if_id_inst_o 
                                              >> 0x14U))
                                        : ((0x1000U 
                                            & vlSelf->__PVT__if_id_inst_o)
                                            ? ((0U 
                                                == 
                                                (vlSelf->__PVT__if_id_inst_o 
                                                 >> 0x19U))
                                                ? (0x1fU 
                                                   & (vlSelf->__PVT__if_id_inst_o 
                                                      >> 0x14U))
                                                : 0U)
                                            : (((- (IData)(
                                                           (vlSelf->__PVT__if_id_inst_o 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->__PVT__if_id_inst_o 
                                                  >> 0x14U)))))
                                : 0U);
                        vlSelf->__PVT__id0__DOT__op1_o_final 
                            = vlSelf->__PVT__id0__DOT__i_op1_o;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                          >> 2U)))) {
                if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id0__DOT__op1_o_final 
                            = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                    }
                }
            }
        }
    }
}

extern const VlUnpacked<CData/*3:0*/, 256> Vtest_top__ConstPool__TABLE_h0768fe48_0;

VL_INLINE_OPT void Vtest_top_core_top___nba_sequent__TOP__test_top__core_top0__0(Vtest_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top___nba_sequent__TOP__test_top__core_top0__0\n"); );
    // Init
    IData/*31:0*/ exe0__DOT__exe_type_b_j0__DOT____VdfgExtracted_h79293f26__0;
    exe0__DOT__exe_type_b_j0__DOT____VdfgExtracted_h79293f26__0 = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __Vdly__pc_wire;
    __Vdly__pc_wire = 0;
    IData/*31:0*/ __Vdly__if_id_inst_addr_o;
    __Vdly__if_id_inst_addr_o = 0;
    IData/*31:0*/ __Vdly__id_exe_exception_o;
    __Vdly__id_exe_exception_o = 0;
    SData/*11:0*/ __Vdly__id_exe_csr_addr_o;
    __Vdly__id_exe_csr_addr_o = 0;
    IData/*31:0*/ __Vdly__id_exe_inst_addr_o;
    __Vdly__id_exe_inst_addr_o = 0;
    VlWide<3>/*64:0*/ __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result;
    VL_ZERO_W(65, __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result);
    CData/*5:0*/ __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt;
    __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt = 0;
    VlWide<3>/*64:0*/ __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result;
    VL_ZERO_W(65, __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result);
    CData/*5:0*/ __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt;
    __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt = 0;
    QData/*63:0*/ __Vdly__csr0__DOT__minstret;
    __Vdly__csr0__DOT__minstret = 0;
    CData/*0:0*/ __Vdly__csr0__DOT__mstatus_mie;
    __Vdly__csr0__DOT__mstatus_mie = 0;
    CData/*0:0*/ __Vdly__csr0__DOT__mstatus_mpie;
    __Vdly__csr0__DOT__mstatus_mpie = 0;
    IData/*31:0*/ __Vtemp_29;
    // Body
    __Vdly__id_exe_exception_o = vlSelf->__PVT__id_exe_exception_o;
    __Vdly__csr0__DOT__minstret = vlSelf->__PVT__csr0__DOT__minstret;
    __Vdly__if_id_inst_addr_o = vlSelf->__PVT__if_id_inst_addr_o;
    __Vdly__pc_wire = vlSelf->__PVT__pc_wire;
    __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt 
        = vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt;
    __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U] 
        = vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U];
    __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
        = vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U];
    __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
        = vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U];
    __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt 
        = vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt;
    __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U] 
        = vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U];
    __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U] 
        = vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U];
    __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[2U] 
        = vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[2U];
    __Vdly__id_exe_inst_addr_o = vlSelf->__PVT__id_exe_inst_addr_o;
    __Vdly__id_exe_csr_addr_o = vlSelf->__PVT__id_exe_csr_addr_o;
    __Vdly__csr0__DOT__mstatus_mpie = vlSelf->__PVT__csr0__DOT__mstatus_mpie;
    __Vdly__csr0__DOT__mstatus_mie = vlSelf->__PVT__csr0__DOT__mstatus_mie;
    vlSelf->__PVT__ctrl0__DOT__current_pc = ((IData)(vlSelf->__PVT__exe_jump_enable_o)
                                              ? vlSelf->__PVT__exe_jump_addr_o
                                              : vlSelf->__PVT__ctrl0__DOT__current_pc);
    vlSelf->__PVT__id_exe_csr_we_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->__PVT__exe_jump_enable_o) 
                                                  | (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)))) 
                                          && ((IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__ctrl_stall_o))))
                                               ? (IData)(vlSelf->__PVT__id_exe_csr_we_o)
                                               : ((1U 
                                                   & (~ (IData)(
                                                                (4U 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->__PVT__ctrl_stall_o)))))) 
                                                  && (IData)(vlSelf->__PVT__id_csr_we_o)))));
    vlSelf->__PVT__id_exe_reg_we_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->__PVT__exe_jump_enable_o) 
                                                  | (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)))) 
                                          && ((IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__ctrl_stall_o))))
                                               ? (IData)(vlSelf->__PVT__id_exe_reg_we_o)
                                               : ((1U 
                                                   & (~ (IData)(
                                                                (4U 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->__PVT__ctrl_stall_o)))))) 
                                                  && (IData)(vlSelf->__PVT__id_reg_we_o)))));
    vlSelf->__PVT__id_exe_inst_is_load_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__exe_jump_enable_o) 
                                                     | (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)))) 
                                                && ((IData)(
                                                            (0xcU 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->__PVT__ctrl_stall_o))))
                                                     ? (IData)(vlSelf->__PVT__id_exe_inst_is_load_o)
                                                     : 
                                                    ((1U 
                                                      & (~ (IData)(
                                                                   (4U 
                                                                    == 
                                                                    (0xcU 
                                                                     & (IData)(vlSelf->__PVT__ctrl_stall_o)))))) 
                                                     && (3U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->__PVT__id_inst_o))))));
    __Vdly__pc_wire = ((IData)(vlSelf->__PVT__ce_wire)
                        ? (((IData)(vlSelf->__PVT__exe_jump_enable_o) 
                            | (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o))
                            ? vlSelf->__PVT__ctrl_new_pc_o
                            : ((1U & (IData)(vlSelf->__PVT__ctrl_stall_o))
                                ? vlSelf->__PVT__pc_wire
                                : ((IData)(4U) + vlSelf->__PVT__pc_wire)))
                        : 0x80U);
    if (((0U == (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S)) 
         & (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o))) {
        if ((0U != vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o)) {
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt = 0x20U;
            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32 
                = vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o;
        }
        if ((0U == vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o)) {
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U] = 0xffffffffU;
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                = (vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
                   << 1U);
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
                = (vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
                   >> 0x1fU);
        } else {
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U] 
                = vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o;
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] = 0U;
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] = 0U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))) {
        __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt 
            = (0x3fU & ((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt) 
                        - (IData)(1U)));
        if (vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__div_sub) {
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U] 
                = (1U | ((IData)((((QData)((IData)(
                                                   vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[0U])))) 
                         << 1U));
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                = (((IData)((((QData)((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[0U])))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[0U]))) 
                                          >> 0x20U)) 
                                 << 1U));
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
                = ((IData)(((((QData)((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[0U]))) 
                            >> 0x20U)) >> 0x1fU);
        } else {
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U] 
                = ((IData)((((QData)((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U])))) 
                   << 1U);
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                = (((IData)((((QData)((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U])))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U]))) 
                                          >> 0x20U)) 
                                 << 1U));
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
                = ((IData)(((((QData)((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U]))) 
                            >> 0x20U)) >> 0x1fU);
        }
    }
    if (((0U == (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S)) 
         & (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o))) {
        if ((1U & (~ ((~ (IData)((0U != vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o))) 
                      | (~ (IData)((0U != vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o))))))) {
            __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt = 0x1fU;
            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32 
                = vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o;
        }
        __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U] 
            = ((1U & ((~ (IData)((0U != vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o))) 
                      | (~ (IData)((0U != vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o)))))
                ? 0U : vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o);
        __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U] = 0U;
        __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[2U] = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S))) {
        __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt 
            = (0x3fU & ((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt) 
                        - (IData)(1U)));
        if (vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mul_add) {
            __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U] 
                = (IData)((((QData)((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result_tmp[2U])) 
                            << 0x3fU) | (((QData)((IData)(
                                                          vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result_tmp[1U])) 
                                          << 0x1fU) 
                                         | ((QData)((IData)(
                                                            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result_tmp[0U])) 
                                            >> 1U))));
            __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U] 
                = (IData)(((((QData)((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result_tmp[2U])) 
                             << 0x3fU) | (((QData)((IData)(
                                                           vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result_tmp[1U])) 
                                           << 0x1fU) 
                                          | ((QData)((IData)(
                                                             vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result_tmp[0U])) 
                                             >> 1U))) 
                           >> 0x20U));
        } else {
            __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U] 
                = (IData)((((QData)((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[2U])) 
                            << 0x3fU) | (((QData)((IData)(
                                                          vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U])) 
                                          << 0x1fU) 
                                         | ((QData)((IData)(
                                                            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U])) 
                                            >> 1U))));
            __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U] 
                = (IData)(((((QData)((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[2U])) 
                             << 0x3fU) | (((QData)((IData)(
                                                           vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U])) 
                                           << 0x1fU) 
                                          | ((QData)((IData)(
                                                             vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U])) 
                                             >> 1U))) 
                           >> 0x20U));
        }
        __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[2U] = 0U;
    }
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_result 
        = (((3U == (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S)) 
            & (~ (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)))
            ? ((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation)
                ? vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U]
                : ((vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
                    << 0x1fU) | (vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                                 >> 1U))) : ((IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)
                                              ? 0U : vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_result));
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i 
        = (((3U == (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S)) 
            & (~ (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)))
            ? (((QData)((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U])))
            : ((IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)
                ? 0ULL : vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i));
    vlSelf->__PVT__csr0__DOT__mie_software = ((1U & 
                                               (~ (IData)(vlSymsp->TOP.rst_i))) 
                                              && (1U 
                                                  & ((IData)(vlSelf->__PVT__csr0__DOT__w_mie)
                                                      ? 
                                                     (vlSelf->__PVT__mem_wb_csr_wdata_o 
                                                      >> 3U)
                                                      : (IData)(vlSelf->__PVT__csr0__DOT__mie_software))));
    vlSelf->__PVT__csr0__DOT__mie_timer = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                           && (1U & 
                                               ((IData)(vlSelf->__PVT__csr0__DOT__w_mie)
                                                 ? 
                                                (vlSelf->__PVT__mem_wb_csr_wdata_o 
                                                 >> 7U)
                                                 : (IData)(vlSelf->__PVT__csr0__DOT__mie_timer))));
    vlSelf->__PVT__csr0__DOT__mie_external = ((1U & 
                                               (~ (IData)(vlSymsp->TOP.rst_i))) 
                                              && (1U 
                                                  & ((IData)(vlSelf->__PVT__csr0__DOT__w_mie)
                                                      ? 
                                                     (vlSelf->__PVT__mem_wb_csr_wdata_o 
                                                      >> 0xbU)
                                                      : (IData)(vlSelf->__PVT__csr0__DOT__mie_external))));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__csr0__DOT__mcycle = 0ULL;
        __Vdly__id_exe_exception_o = 0U;
        __Vdly__csr0__DOT__minstret = 0ULL;
        vlSelf->__PVT__id_exe_reg_waddr_o = 0U;
        __Vdly__if_id_inst_addr_o = 0U;
        vlSelf->__PVT__id_exe_rd_o = 0U;
        __Vdly__id_exe_inst_addr_o = 0U;
        __Vdly__id_exe_csr_addr_o = 0U;
        vlSelf->__PVT__id_exe_op2_o = 0U;
        vlSelf->__PVT__id_exe_op1_o = 0U;
        vlSelf->__PVT__csr0__DOT__mscratch = 0U;
        vlSelf->__PVT__csr0__DOT__mtvec = 0U;
        vlSelf->__PVT__csr0__DOT__mepc = 0U;
        __Vdly__csr0__DOT__mstatus_mie = 0U;
        __Vdly__csr0__DOT__mstatus_mpie = 1U;
        vlSelf->__PVT__id_exe_inst_o = 0x13U;
        __Vtemp_29 = 0x13U;
    } else {
        vlSelf->__PVT__csr0__DOT__mcycle = (1ULL + vlSelf->__PVT__csr0__DOT__mcycle);
        if (((IData)(vlSelf->__PVT__exe_jump_enable_o) 
             | (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o))) {
            __Vdly__id_exe_exception_o = 0U;
            vlSelf->__PVT__id_exe_reg_waddr_o = 0U;
            __Vdly__if_id_inst_addr_o = 0U;
            vlSelf->__PVT__id_exe_rd_o = 0U;
            __Vdly__id_exe_inst_addr_o = vlSelf->__PVT__id_exe_inst_addr_o;
            __Vdly__id_exe_csr_addr_o = 0U;
            vlSelf->__PVT__id_exe_op2_o = 0U;
            vlSelf->__PVT__id_exe_op1_o = 0U;
            vlSelf->__PVT__id_exe_inst_o = 0x13U;
            __Vtemp_29 = 0x13U;
        } else {
            if ((0xcU == (0xcU & (IData)(vlSelf->__PVT__ctrl_stall_o)))) {
                __Vdly__id_exe_exception_o = vlSelf->__PVT__id_exe_exception_o;
                vlSelf->__PVT__id_exe_reg_waddr_o = vlSelf->__PVT__id_exe_reg_waddr_o;
                vlSelf->__PVT__id_exe_rd_o = (0x1fU 
                                              & (IData)(vlSelf->__PVT__id_exe_rd_o));
                __Vdly__id_exe_inst_addr_o = vlSelf->__PVT__id_exe_inst_addr_o;
                __Vdly__id_exe_csr_addr_o = vlSelf->__PVT__id_exe_csr_addr_o;
                vlSelf->__PVT__id_exe_op2_o = vlSelf->__PVT__id_exe_op2_o;
                vlSelf->__PVT__id_exe_op1_o = vlSelf->__PVT__id_exe_op1_o;
                vlSelf->__PVT__id_exe_inst_o = vlSelf->__PVT__id_exe_inst_o;
            } else if ((4U == (0xcU & (IData)(vlSelf->__PVT__ctrl_stall_o)))) {
                __Vdly__id_exe_exception_o = 0U;
                vlSelf->__PVT__id_exe_reg_waddr_o = 0U;
                vlSelf->__PVT__id_exe_rd_o = (0x1fU 
                                              & 0U);
                __Vdly__id_exe_inst_addr_o = vlSelf->__PVT__id_exe_inst_addr_o;
                __Vdly__id_exe_csr_addr_o = 0U;
                vlSelf->__PVT__id_exe_op2_o = 0U;
                vlSelf->__PVT__id_exe_op1_o = 0U;
                vlSelf->__PVT__id_exe_inst_o = 0x13U;
            } else {
                __Vdly__id_exe_exception_o = (((IData)(vlSelf->__PVT__id0__DOT__except_ecall) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__id0__DOT__except_mret));
                vlSelf->__PVT__id_exe_reg_waddr_o = vlSelf->__PVT__id_reg_waddr_o;
                vlSelf->__PVT__id_exe_rd_o = (0x1fU 
                                              & (vlSelf->__PVT__id_inst_o 
                                                 >> 7U));
                __Vdly__id_exe_inst_addr_o = vlSelf->__PVT__if_id_inst_addr_o;
                __Vdly__id_exe_csr_addr_o = vlSelf->__PVT__id_csr_addr_o;
                vlSelf->__PVT__id_exe_op2_o = ((((IData)(vlSelf->__PVT__id_reg2_re_o) 
                                                 & (IData)(vlSelf->__PVT__exe_reg_we_o)) 
                                                & ((IData)(vlSelf->__PVT__exe_reg_waddr_o) 
                                                   == (IData)(vlSelf->__PVT__id_reg2_addr_o)))
                                                ? (
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__id_reg2_addr_o))
                                                    ? vlSelf->__PVT__exe_reg_wdata_o
                                                    : 0U)
                                                : (
                                                   (((IData)(vlSelf->__PVT__id_reg2_re_o) 
                                                     & (IData)(vlSelf->__PVT__mem_reg_we_o)) 
                                                    & ((IData)(vlSelf->__PVT__mem_reg_waddr_o) 
                                                       == (IData)(vlSelf->__PVT__id_reg2_addr_o)))
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlSelf->__PVT__id_reg2_addr_o))
                                                     ? vlSelf->__PVT__mem0__DOT__reg_wdata
                                                     : 0U)
                                                    : vlSelf->__PVT__id0__DOT__op2_o_final));
                vlSelf->__PVT__id_exe_op1_o = ((((IData)(vlSelf->__PVT__id_reg1_re_o) 
                                                 & (IData)(vlSelf->__PVT__exe_reg_we_o)) 
                                                & ((IData)(vlSelf->__PVT__exe_reg_waddr_o) 
                                                   == (IData)(vlSelf->__PVT__id_reg1_addr_o)))
                                                ? (
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__id_reg1_addr_o))
                                                    ? vlSelf->__PVT__exe_reg_wdata_o
                                                    : 0U)
                                                : (
                                                   (((IData)(vlSelf->__PVT__id_reg1_re_o) 
                                                     & (IData)(vlSelf->__PVT__mem_reg_we_o)) 
                                                    & ((IData)(vlSelf->__PVT__mem_reg_waddr_o) 
                                                       == (IData)(vlSelf->__PVT__id_reg1_addr_o)))
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlSelf->__PVT__id_reg1_addr_o))
                                                     ? vlSelf->__PVT__mem0__DOT__reg_wdata
                                                     : 0U)
                                                    : vlSelf->__PVT__id0__DOT__op1_o_final));
                vlSelf->__PVT__id_exe_inst_o = vlSelf->__PVT__id_inst_o;
            }
            if ((6U == (6U & (IData)(vlSelf->__PVT__ctrl_stall_o)))) {
                __Vdly__if_id_inst_addr_o = vlSelf->__PVT__if_id_inst_addr_o;
                __Vtemp_29 = vlSelf->__PVT__if_id_inst_o;
            } else if ((2U == (6U & (IData)(vlSelf->__PVT__ctrl_stall_o)))) {
                __Vdly__if_id_inst_addr_o = 0U;
                __Vtemp_29 = 0x13U;
            } else {
                __Vdly__if_id_inst_addr_o = vlSelf->__PVT__pc_wire;
                __Vtemp_29 = ((IData)(vlSelf->__PVT__ce_wire)
                               ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                   [(0x1ffffcU & vlSelf->__PVT__pc_wire)] 
                                   << 0x18U) | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                 [(0x1fffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0x1ffffcU 
                                                       & vlSelf->__PVT__pc_wire)))] 
                                                 << 0x10U) 
                                                | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                    [
                                                    (0x1fffffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x1ffffcU 
                                                         & vlSelf->__PVT__pc_wire)))] 
                                                    << 8U) 
                                                   | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                   [
                                                   (0x1fffffU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       (0x1ffffcU 
                                                        & vlSelf->__PVT__pc_wire)))])))
                               : 0U);
            }
        }
        if (vlSelf->__PVT__mem_wb_instret_incr_o) {
            __Vdly__csr0__DOT__minstret = (1ULL + vlSelf->__PVT__csr0__DOT__minstret);
        }
        vlSelf->__PVT__csr0__DOT__mscratch = (((0x340U 
                                                == (IData)(vlSelf->__PVT__mem_wb_csr_waddr_o)) 
                                               & (IData)(vlSelf->__PVT__mem_wb_csr_we_o))
                                               ? vlSelf->__PVT__mem_wb_csr_wdata_o
                                               : vlSelf->__PVT__csr0__DOT__mscratch);
        vlSelf->__PVT__csr0__DOT__mtvec = (((0x305U 
                                             == (IData)(vlSelf->__PVT__mem_wb_csr_waddr_o)) 
                                            & (IData)(vlSelf->__PVT__mem_wb_csr_we_o))
                                            ? vlSelf->__PVT__mem_wb_csr_wdata_o
                                            : vlSelf->__PVT__csr0__DOT__mtvec);
        vlSelf->__PVT__csr0__DOT__mepc = ((IData)(vlSelf->__PVT__int_ctrl_epc_we_o)
                                           ? (0xfffffffcU 
                                              & vlSelf->__PVT__int_ctrl_epc_o)
                                           : (((0x341U 
                                                == (IData)(vlSelf->__PVT__mem_wb_csr_waddr_o)) 
                                               & (IData)(vlSelf->__PVT__mem_wb_csr_we_o))
                                               ? vlSelf->__PVT__mem_wb_csr_wdata_o
                                               : vlSelf->__PVT__csr0__DOT__mepc));
        if (((0x300U == (IData)(vlSelf->__PVT__mem_wb_csr_waddr_o)) 
             & (IData)(vlSelf->__PVT__mem_wb_csr_we_o))) {
            __Vdly__csr0__DOT__mstatus_mie = (1U & 
                                              (vlSelf->__PVT__mem_wb_csr_wdata_o 
                                               >> 3U));
            __Vdly__csr0__DOT__mstatus_mpie = (1U & 
                                               (vlSelf->__PVT__mem_wb_csr_wdata_o 
                                                >> 7U));
        } else if (vlSelf->__PVT__int_ctrl_mstatus_ie_clear_o) {
            __Vdly__csr0__DOT__mstatus_mpie = vlSelf->__PVT__csr0__DOT__mstatus_mie;
            __Vdly__csr0__DOT__mstatus_mie = 0U;
        } else if (vlSelf->__PVT__int_ctrl_mstatus_ie_set_o) {
            __Vdly__csr0__DOT__mstatus_mie = vlSelf->__PVT__csr0__DOT__mstatus_mpie;
            __Vdly__csr0__DOT__mstatus_mpie = 1U;
        } else {
            __Vdly__csr0__DOT__mstatus_mie = vlSelf->__PVT__csr0__DOT__mstatus_mie;
            __Vdly__csr0__DOT__mstatus_mpie = vlSelf->__PVT__csr0__DOT__mstatus_mpie;
        }
    }
    vlSelf->__PVT__if_id_inst_o = __Vtemp_29;
    vlSelf->__PVT__csr0__DOT__mip_external = 0U;
    vlSelf->__PVT__exe_mem_reg_we_o = ((IData)(vlSymsp->TOP.rst_i) 
                                       || ((IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o) 
                                           || (IData)(vlSelf->__PVT__exe_reg_we_o)));
    vlSelf->__PVT__exe_mem_mem_we_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                       && ((1U & (~ (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o))) 
                                           && (IData)(vlSelf->__PVT__exe_mem_we_o)));
    vlSelf->__PVT__interrupt_ctrl0__DOT__exception 
        = (0U != vlSelf->__PVT__exe_mem_exception_o);
    vlSelf->__PVT__exe_mem_csr_we_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                       && ((1U & (~ (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o))) 
                                           && (IData)(vlSelf->__PVT__exe_csr_we_o)));
    vlSelf->__PVT__csr0__DOT__mip_timer = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                           && ((~ (IData)(
                                                          (((((QData)((IData)(
                                                                              vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                              [1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                               [0U]))) 
                                                            - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp) 
                                                           >> 0x3fU))) 
                                               & (0ULL 
                                                  != vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp)));
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i 
        = (3U == (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S));
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i 
        = ((3U == (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S)) 
           & (~ (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)));
    vlSelf->__PVT__csr0__DOT__mip_software = ((1U & 
                                               (~ (IData)(vlSymsp->TOP.rst_i))) 
                                              && (0U 
                                                  != vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem));
    vlSelf->__PVT__csr0__DOT__minstret = __Vdly__csr0__DOT__minstret;
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt 
        = __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt;
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt 
        = __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt;
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U] 
        = __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U];
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
        = __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U];
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
        = __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U];
    vlSelf->__PVT__if_id_inst_addr_o = __Vdly__if_id_inst_addr_o;
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U] 
        = __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U];
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U] 
        = __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U];
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[2U] 
        = __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[2U];
    vlSelf->__PVT__csr0__DOT__mstatus_mpie = __Vdly__csr0__DOT__mstatus_mpie;
    vlSelf->__PVT__pc_wire = __Vdly__pc_wire;
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__exe_mem_reg_waddr_o = 0U;
        vlSelf->__PVT__exe_mem_reg_wdata_o = 0U;
        vlSelf->__PVT__exe_mem_mem_data_o = 0U;
        vlSelf->__PVT__exe_mem_csr_wdata_o = 0U;
        vlSelf->__PVT__exe_mem_inst_addr_o = 0U;
        vlSelf->__PVT__id_exe_inst_addr_o = __Vdly__id_exe_inst_addr_o;
        vlSelf->__PVT__exe_mem_csr_waddr_o = 0U;
    } else {
        if (vlSelf->__PVT__int_ctrl_interrupt_en_o) {
            vlSelf->__PVT__exe_mem_reg_waddr_o = 0U;
            vlSelf->__PVT__exe_mem_reg_wdata_o = 0U;
            vlSelf->__PVT__exe_mem_mem_data_o = 0U;
            vlSelf->__PVT__exe_mem_csr_wdata_o = 0U;
            vlSelf->__PVT__exe_mem_inst_addr_o = 0U;
            vlSelf->__PVT__exe_mem_csr_waddr_o = 0U;
        } else {
            vlSelf->__PVT__exe_mem_reg_waddr_o = vlSelf->__PVT__exe_reg_waddr_o;
            vlSelf->__PVT__exe_mem_reg_wdata_o = vlSelf->__PVT__exe_reg_wdata_o;
            vlSelf->__PVT__exe_mem_mem_data_o = vlSelf->__PVT__exe_mem_data_o;
            vlSelf->__PVT__exe_mem_csr_wdata_o = vlSelf->__PVT__exe_csr_wdata_o;
            vlSelf->__PVT__exe_mem_inst_addr_o = vlSelf->__PVT__id_exe_inst_addr_o;
            vlSelf->__PVT__exe_mem_csr_waddr_o = vlSelf->__PVT__id_exe_csr_addr_o;
        }
        vlSelf->__PVT__id_exe_inst_addr_o = __Vdly__id_exe_inst_addr_o;
    }
    vlSelf->__PVT__id_exe_csr_addr_o = __Vdly__id_exe_csr_addr_o;
    vlSelf->__PVT__mem_wb_instret_incr_o = 0U;
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mul_add 
        = (1U & vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U]);
    vlSelf->__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2 
        = (vlSelf->__PVT__id_exe_op1_o == vlSelf->__PVT__id_exe_op2_o);
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust 
        = ((vlSelf->__PVT__id_exe_op1_o ^ vlSelf->__PVT__id_exe_op2_o) 
           >> 0x1fU);
    vlSelf->__PVT__exe0__DOT__exe_type_i0__DOT__sr_shift 
        = (vlSelf->__PVT__id_exe_op1_o >> (0x1fU & vlSelf->__PVT__id_exe_op2_o));
    vlSelf->__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed 
        = VL_GTES_III(32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o);
    vlSelf->__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned 
        = (vlSelf->__PVT__id_exe_op1_o >= vlSelf->__PVT__id_exe_op2_o);
    vlSelf->__PVT__exe0__DOT__s_mem_we_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                            && (0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->__PVT__id_exe_inst_o)));
    vlSelf->__PVT__exe0__DOT__s_reg_we_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                            && ((0x23U 
                                                 != 
                                                 (0x7fU 
                                                  & vlSelf->__PVT__id_exe_inst_o)) 
                                                && (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->__PVT__id_exe_inst_o))));
    vlSelf->__PVT__exe0__DOT__exe_type_r0__DOT__isType_r 
        = ((0x33U == (0x7fU & vlSelf->__PVT__id_exe_inst_o)) 
           & ((0U == (vlSelf->__PVT__id_exe_inst_o 
                      >> 0x19U)) | (0x20U == (vlSelf->__PVT__id_exe_inst_o 
                                              >> 0x19U))));
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__isType_m 
        = (IData)((0x2000033U == (0xfe00007fU & vlSelf->__PVT__id_exe_inst_o)));
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_i)))) {
        vlSelf->__PVT__ce_wire = 1U;
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSelf->__PVT__if_id_inst_o)) {
                                        if ((0x2000U 
                                             & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id_csr_we_o = 1U;
                                            vlSelf->__PVT__id_csr_addr_o 
                                                = (vlSelf->__PVT__if_id_inst_o 
                                                   >> 0x14U);
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id_csr_we_o = 1U;
                                            vlSelf->__PVT__id_csr_addr_o 
                                                = (vlSelf->__PVT__if_id_inst_o 
                                                   >> 0x14U);
                                        }
                                    } else if ((0x2000U 
                                                & vlSelf->__PVT__if_id_inst_o)) {
                                        vlSelf->__PVT__id_csr_we_o = 1U;
                                        vlSelf->__PVT__id_csr_addr_o 
                                            = (vlSelf->__PVT__if_id_inst_o 
                                               >> 0x14U);
                                    } else if ((0x1000U 
                                                & vlSelf->__PVT__if_id_inst_o)) {
                                        vlSelf->__PVT__id_csr_we_o = 1U;
                                        vlSelf->__PVT__id_csr_addr_o 
                                            = (vlSelf->__PVT__if_id_inst_o 
                                               >> 0x14U);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->__PVT__ce_wire = 0U;
    }
    vlSelf->id0__DOT__inst_type_i__DOT____VdfgExtracted_h64b65831__0 
        = ((0U == (vlSelf->__PVT__if_id_inst_o >> 0x19U)) 
           | (0x20U == (vlSelf->__PVT__if_id_inst_o 
                        >> 0x19U)));
    vlSelf->__PVT__ctrl_pc_o = (((~ (IData)(vlSymsp->TOP.rst_i)) 
                                 & (0U != vlSelf->__PVT__exe_mem_inst_addr_o))
                                 ? ((IData)(vlSymsp->TOP.rst_i)
                                     ? 0U : vlSelf->__PVT__exe_mem_inst_addr_o)
                                 : vlSelf->__PVT__ctrl0__DOT__current_pc);
    exe0__DOT__exe_type_b_j0__DOT____VdfgExtracted_h79293f26__0 
        = (vlSelf->__PVT__id_exe_inst_addr_o + (((- (IData)(
                                                            (vlSelf->__PVT__id_exe_inst_o 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | ((0x800U 
                                                    & (vlSelf->__PVT__id_exe_inst_o 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->__PVT__id_exe_inst_o 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->__PVT__id_exe_inst_o 
                                                            >> 7U))))));
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__div_sub 
        = (vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
           >= vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32);
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[0U] 
        = vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U];
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[1U] 
        = (IData)((0x1ffffffffULL & ((QData)((IData)(
                                                     vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                     - (QData)((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)))));
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[2U] 
        = (IData)(((0x1ffffffffULL & ((QData)((IData)(
                                                      vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                      - (QData)((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)))) 
                   >> 0x20U));
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S 
        = ((1U & (((IData)(vlSymsp->TOP.rst_i) | (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o))) 
                  | (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)))
            ? 0U : (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S_next));
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result_tmp[0U] 
        = vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U];
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result_tmp[1U] 
        = (IData)((0x1ffffffffULL & ((QData)((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32)) 
                                     + (QData)((IData)(
                                                       vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U])))));
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result_tmp[2U] 
        = (IData)(((0x1ffffffffULL & ((QData)((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32)) 
                                      + (QData)((IData)(
                                                        vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U])))) 
                   >> 0x20U));
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S 
        = ((1U & (((IData)(vlSymsp->TOP.rst_i) | (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o))) 
                  | (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)))
            ? 0U : (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S_nxt));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__csr0__DOT__cause_rem = 0U;
        vlSelf->__PVT__exe_mem_mem_addr_o = 0U;
        vlSelf->__PVT__csr0__DOT__interrupt_type = 0U;
        vlSelf->__PVT__csr0__DOT__cause = 0U;
        vlSelf->__PVT__csr0__DOT__mtval = 0U;
    } else {
        if (vlSelf->__PVT__int_ctrl_cause_we_o) {
            vlSelf->__PVT__csr0__DOT__cause_rem = 0U;
            vlSelf->__PVT__csr0__DOT__interrupt_type 
                = vlSelf->__PVT__int_ctrl_interrupt_type_o;
            vlSelf->__PVT__csr0__DOT__cause = vlSelf->__PVT__int_ctrl_trap_casue_o;
        } else if (vlSelf->__PVT__csr0__DOT__w_mcause) {
            vlSelf->__PVT__csr0__DOT__cause_rem = (0x7ffffffU 
                                                   & (vlSelf->__PVT__mem_wb_csr_wdata_o 
                                                      >> 4U));
            vlSelf->__PVT__csr0__DOT__interrupt_type 
                = (vlSelf->__PVT__mem_wb_csr_wdata_o 
                   >> 0x1fU);
            vlSelf->__PVT__csr0__DOT__cause = (0xfU 
                                               & vlSelf->__PVT__mem_wb_csr_wdata_o);
        }
        vlSelf->__PVT__exe_mem_mem_addr_o = ((IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)
                                              ? 0U : vlSelf->__PVT__exe_mem_addr_o);
        if (((0x343U == (IData)(vlSelf->__PVT__mem_wb_csr_waddr_o)) 
             & (IData)(vlSelf->__PVT__mem_wb_csr_we_o))) {
            vlSelf->__PVT__csr0__DOT__mtval = vlSelf->__PVT__mem_wb_csr_wdata_o;
        }
    }
    vlSelf->__PVT__mem_wb_csr_we_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                      && ((1U & (~ (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o))) 
                                          && (IData)(vlSelf->__PVT__mem_csr_we_o)));
    vlSelf->__PVT__exe0__DOT__i_reg_wdata_o = (((IData)(vlSymsp->TOP.rst_i) 
                                                | (0x13U 
                                                   != 
                                                   (0x7fU 
                                                    & vlSelf->__PVT__id_exe_inst_o)))
                                                ? 0U
                                                : (
                                                   (0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->__PVT__id_exe_inst_o))
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__id_exe_inst_o)
                                                       ? 
                                                      (vlSelf->__PVT__id_exe_op1_o 
                                                       & vlSelf->__PVT__id_exe_op2_o)
                                                       : 
                                                      (vlSelf->__PVT__id_exe_op1_o 
                                                       | vlSelf->__PVT__id_exe_op2_o))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (vlSelf->__PVT__id_exe_inst_o 
                                                         >> 0x19U))
                                                        ? 
                                                       VL_SHIFTR_III(32,32,32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o)
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (vlSelf->__PVT__id_exe_inst_o 
                                                          >> 0x19U))
                                                         ? 
                                                        ((vlSelf->__PVT__exe0__DOT__exe_type_i0__DOT__sr_shift 
                                                          & (0xffffffffU 
                                                             >> 
                                                             (0x1fU 
                                                              & vlSelf->__PVT__id_exe_op2_o))) 
                                                         | ((- (IData)(
                                                                       (vlSelf->__PVT__id_exe_op1_o 
                                                                        >> 0x1fU))) 
                                                            & (~ 
                                                               (0xffffffffU 
                                                                >> 
                                                                (0x1fU 
                                                                 & vlSelf->__PVT__id_exe_op2_o)))))
                                                         : 0U))
                                                       : 
                                                      (vlSelf->__PVT__id_exe_op1_o 
                                                       ^ vlSelf->__PVT__id_exe_op2_o)))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__id_exe_inst_o)
                                                       ? 
                                                      (1U 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned))))))
                                                       : 
                                                      (1U 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed)))))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (vlSelf->__PVT__id_exe_inst_o 
                                                         >> 0x19U))
                                                        ? 
                                                       VL_SHIFTL_III(32,32,32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o)
                                                        : 0U)
                                                       : 
                                                      (vlSelf->__PVT__id_exe_op1_o 
                                                       + vlSelf->__PVT__id_exe_op2_o))))
                                                    : 0U));
    if ((0x63U == (0x7fU & vlSelf->__PVT__id_exe_inst_o))) {
        if ((0x4000U & vlSelf->__PVT__id_exe_inst_o)) {
            vlSelf->__PVT__exe0__DOT__b_jump_enable_o 
                = (1U & ((0x2000U & vlSelf->__PVT__id_exe_inst_o)
                          ? ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                              ? (IData)(vlSelf->__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned)
                              : (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned)))
                          : ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                              ? (IData)(vlSelf->__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed)
                              : (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed)))));
            vlSelf->__PVT__exe0__DOT__b_jump_addr_o 
                = exe0__DOT__exe_type_b_j0__DOT____VdfgExtracted_h79293f26__0;
        } else {
            vlSelf->__PVT__exe0__DOT__b_jump_enable_o 
                = (1U & ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                   >> 0xdU))) && (1U 
                                                  & ((0x1000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 
                                                     (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2))
                                                      : (IData)(vlSelf->__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2)))));
            vlSelf->__PVT__exe0__DOT__b_jump_addr_o 
                = ((0x2000U & vlSelf->__PVT__id_exe_inst_o)
                    ? 0U : exe0__DOT__exe_type_b_j0__DOT____VdfgExtracted_h79293f26__0);
        }
    } else {
        vlSelf->__PVT__exe0__DOT__b_jump_enable_o = 
            (1U & ((0x6fU == (0x7fU & vlSelf->__PVT__id_exe_inst_o)) 
                   || (0x67U == (0x7fU & vlSelf->__PVT__id_exe_inst_o))));
        vlSelf->__PVT__exe0__DOT__b_jump_addr_o = (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->__PVT__id_exe_inst_o))
                                                    ? 
                                                   (vlSelf->__PVT__id_exe_inst_addr_o 
                                                    + 
                                                    (((- (IData)(
                                                                 (vlSelf->__PVT__id_exe_inst_o 
                                                                  >> 0x1fU))) 
                                                      << 0x14U) 
                                                     | ((0xff000U 
                                                         & vlSelf->__PVT__id_exe_inst_o) 
                                                        | ((0x800U 
                                                            & (vlSelf->__PVT__id_exe_inst_o 
                                                               >> 9U)) 
                                                           | (0x7feU 
                                                              & (vlSelf->__PVT__id_exe_inst_o 
                                                                 >> 0x14U))))))
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->__PVT__id_exe_inst_o))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->__PVT__id_exe_inst_o 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->__PVT__id_exe_inst_o 
                                                        >> 0x14U))
                                                     : 0U));
    }
    vlSelf->__PVT__exe0__DOT__r_reg_wdata_o = ((1U 
                                                & ((IData)(vlSymsp->TOP.rst_i) 
                                                   | (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_r0__DOT__isType_r))))
                                                ? 0U
                                                : (
                                                   (0x4000U 
                                                    & vlSelf->__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 
                                                     (vlSelf->__PVT__id_exe_op1_o 
                                                      & vlSelf->__PVT__id_exe_op2_o)
                                                      : 
                                                     (vlSelf->__PVT__id_exe_op1_o 
                                                      | vlSelf->__PVT__id_exe_op2_o))
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (vlSelf->__PVT__id_exe_inst_o 
                                                        >> 0x19U))
                                                       ? 
                                                      (vlSelf->__PVT__id_exe_op1_o 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->__PVT__id_exe_op2_o))
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (vlSelf->__PVT__id_exe_inst_o 
                                                         >> 0x19U))
                                                        ? 
                                                       ((vlSelf->__PVT__exe0__DOT__exe_type_i0__DOT__sr_shift 
                                                         & (0xffffffffU 
                                                            >> 
                                                            (0x1fU 
                                                             & vlSelf->__PVT__id_exe_op2_o))) 
                                                        | ((- (IData)(
                                                                      (vlSelf->__PVT__id_exe_op1_o 
                                                                       >> 0x1fU))) 
                                                           & (~ 
                                                              (0xffffffffU 
                                                               >> 
                                                               (0x1fU 
                                                                & vlSelf->__PVT__id_exe_op2_o)))))
                                                        : 0U))
                                                      : 
                                                     (vlSelf->__PVT__id_exe_op1_o 
                                                      ^ vlSelf->__PVT__id_exe_op2_o)))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 
                                                     (1U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned))))))
                                                      : 
                                                     (1U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed)))))))
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 
                                                     (vlSelf->__PVT__id_exe_op1_o 
                                                      << 
                                                      (0x1fU 
                                                       & vlSelf->__PVT__id_exe_op2_o))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (vlSelf->__PVT__id_exe_inst_o 
                                                        >> 0x19U))
                                                       ? 
                                                      (vlSelf->__PVT__id_exe_op1_o 
                                                       + vlSelf->__PVT__id_exe_op2_o)
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (vlSelf->__PVT__id_exe_inst_o 
                                                         >> 0x19U))
                                                        ? 
                                                       (vlSelf->__PVT__id_exe_op1_o 
                                                        - vlSelf->__PVT__id_exe_op2_o)
                                                        : 0U))))));
    if ((0x13U == (0x7fU & vlSelf->__PVT__if_id_inst_o))) {
        vlSelf->__PVT__id0__DOT__i_reg_waddr_o = (0x1fU 
                                                  & (vlSelf->__PVT__if_id_inst_o 
                                                     >> 7U));
        vlSelf->__PVT__id0__DOT__i_reg_we_o = 1U;
        vlSelf->__PVT__id0__DOT__i_reg2_re_o = 0U;
        vlSelf->__PVT__id0__DOT__i_reg2_raddr_o = 0U;
        vlSelf->__PVT__id0__DOT__i_reg1_re_o = 1U;
        vlSelf->__PVT__id0__DOT__i_reg1_raddr_o = (0x1fU 
                                                   & (vlSelf->__PVT__if_id_inst_o 
                                                      >> 0xfU));
        if ((0x4000U & vlSelf->__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & (~ (IData)(vlSelf->id0__DOT__inst_type_i__DOT____VdfgExtracted_h64b65831__0)))) {
                        vlSelf->__PVT__id0__DOT__i_reg_waddr_o = 0U;
                        vlSelf->__PVT__id0__DOT__i_reg_we_o = 0U;
                        vlSelf->__PVT__id0__DOT__i_reg2_re_o = 0U;
                        vlSelf->__PVT__id0__DOT__i_reg2_raddr_o = 0U;
                        vlSelf->__PVT__id0__DOT__i_reg1_re_o = 0U;
                        vlSelf->__PVT__id0__DOT__i_reg1_raddr_o = 0U;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                             >> 0xdU)))) {
            if ((0x1000U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0U != (vlSelf->__PVT__if_id_inst_o 
                            >> 0x19U))) {
                    vlSelf->__PVT__id0__DOT__i_reg_waddr_o = 0U;
                    vlSelf->__PVT__id0__DOT__i_reg_we_o = 0U;
                    vlSelf->__PVT__id0__DOT__i_reg2_re_o = 0U;
                    vlSelf->__PVT__id0__DOT__i_reg2_raddr_o = 0U;
                    vlSelf->__PVT__id0__DOT__i_reg1_re_o = 0U;
                    vlSelf->__PVT__id0__DOT__i_reg1_raddr_o = 0U;
                }
            }
        }
    } else {
        vlSelf->__PVT__id0__DOT__i_reg_waddr_o = 0U;
        vlSelf->__PVT__id0__DOT__i_reg_we_o = 0U;
        vlSelf->__PVT__id0__DOT__i_reg2_re_o = 0U;
        vlSelf->__PVT__id0__DOT__i_reg2_raddr_o = 0U;
        vlSelf->__PVT__id0__DOT__i_reg1_re_o = 0U;
        vlSelf->__PVT__id0__DOT__i_reg1_raddr_o = 0U;
    }
    vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0 
        = (((0x33U == (0x7fU & vlSelf->__PVT__if_id_inst_o)) 
            & (IData)(vlSelf->id0__DOT__inst_type_i__DOT____VdfgExtracted_h64b65831__0)) 
           | (IData)((0x2000033U == (0xfe00007fU & vlSelf->__PVT__if_id_inst_o))));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__exe_mem_mem_op_o = 0U;
        vlSelf->__PVT__exe_reg_waddr_o = 0U;
        vlSelf->__PVT__exe_csr_we_o = 0U;
        vlSelf->__PVT__exe0__DOT__s_mem_op_o = 0U;
        vlSelf->__PVT__exe0__DOT__s_mem_addr_o = 0U;
        vlSelf->__PVT__exe0__DOT__s_mem_data_o = 0U;
        vlSelf->__PVT__id0__DOT__except_ecall = 0U;
        vlSelf->__PVT__id0__DOT__except_mret = 0U;
        vlSelf->__PVT__id_inst_o = 0x13U;
        vlSelf->__PVT__int_ctrl_interrupt_type_o = 0U;
        vlSelf->__PVT__int_ctrl_trap_casue_o = 0U;
    } else {
        vlSelf->__PVT__exe_mem_mem_op_o = ((IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)
                                            ? 0U : (IData)(vlSelf->__PVT__exe_mem_op_o));
        vlSelf->__PVT__exe_reg_waddr_o = 0U;
        vlSelf->__PVT__exe_csr_we_o = 0U;
        if ((0x40U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
                                        vlSelf->__PVT__exe_reg_waddr_o 
                                            = vlSelf->__PVT__id_exe_reg_waddr_o;
                                        vlSelf->__PVT__exe_csr_we_o 
                                            = vlSelf->__PVT__id_exe_csr_we_o;
                                    } else if ((0x1000U 
                                                & vlSelf->__PVT__id_exe_inst_o)) {
                                        vlSelf->__PVT__exe_reg_waddr_o 
                                            = vlSelf->__PVT__id_exe_reg_waddr_o;
                                        vlSelf->__PVT__exe_csr_we_o 
                                            = vlSelf->__PVT__id_exe_csr_we_o;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                vlSelf->__PVT__exe_reg_waddr_o 
                                    = vlSelf->__PVT__id_exe_reg_waddr_o;
                            }
                        }
                    }
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                              >> 3U)))) {
                    if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                vlSelf->__PVT__exe_reg_waddr_o 
                                    = vlSelf->__PVT__id_exe_reg_waddr_o;
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                              >> 2U)))) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                          >> 3U)))) {
                if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                        }
                    }
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_reg_waddr_o 
                            = vlSelf->__PVT__id_exe_reg_waddr_o;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                          >> 2U)))) {
                if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_reg_waddr_o 
                            = vlSelf->__PVT__id_exe_reg_waddr_o;
                    }
                }
            }
        }
        if ((0x23U == (0x7fU & vlSelf->__PVT__id_exe_inst_o))) {
            vlSelf->__PVT__exe0__DOT__s_mem_op_o = 
                ((0U == (7U & (vlSelf->__PVT__id_exe_inst_o 
                               >> 0xcU))) ? 1U : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->__PVT__id_exe_inst_o 
                                                       >> 0xcU)))
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->__PVT__id_exe_inst_o 
                                                        >> 0xcU)))
                                                    ? 3U
                                                    : 0U)));
            vlSelf->__PVT__exe0__DOT__s_mem_addr_o 
                = (vlSelf->__PVT__id_exe_op1_o + ((
                                                   (- (IData)(
                                                              (vlSelf->__PVT__id_exe_inst_o 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelf->__PVT__id_exe_inst_o 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->__PVT__id_exe_inst_o 
                                                           >> 7U)))));
            vlSelf->__PVT__exe0__DOT__s_mem_data_o 
                = vlSelf->__PVT__id_exe_op2_o;
        } else {
            if ((3U == (0x7fU & vlSelf->__PVT__id_exe_inst_o))) {
                vlSelf->__PVT__exe0__DOT__s_mem_op_o 
                    = ((0x4000U & vlSelf->__PVT__id_exe_inst_o)
                        ? ((0x2000U & vlSelf->__PVT__id_exe_inst_o)
                            ? 0U : ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                                     ? 0xdU : 0xcU))
                        : ((0x2000U & vlSelf->__PVT__id_exe_inst_o)
                            ? ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                                ? 0U : 0xbU) : ((0x1000U 
                                                 & vlSelf->__PVT__id_exe_inst_o)
                                                 ? 0xaU
                                                 : 9U)));
                vlSelf->__PVT__exe0__DOT__s_mem_addr_o 
                    = (vlSelf->__PVT__id_exe_op1_o 
                       + (((- (IData)((vlSelf->__PVT__id_exe_inst_o 
                                       >> 0x1fU))) 
                           << 0xcU) | (vlSelf->__PVT__id_exe_inst_o 
                                       >> 0x14U)));
            } else {
                vlSelf->__PVT__exe0__DOT__s_mem_op_o = 0U;
                vlSelf->__PVT__exe0__DOT__s_mem_addr_o = 0U;
            }
            vlSelf->__PVT__exe0__DOT__s_mem_data_o = 0U;
        }
        vlSelf->__PVT__id0__DOT__except_ecall = 0U;
        vlSelf->__PVT__id0__DOT__except_mret = 0U;
        vlSelf->__PVT__id_inst_o = 0x13U;
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->__PVT__if_id_inst_o 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->__PVT__if_id_inst_o 
                                                     >> 0xcU)))) {
                                                if ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xfff00000U 
                                                              & vlSelf->__PVT__if_id_inst_o)))) {
                                                    vlSelf->__PVT__id0__DOT__except_ecall = 1U;
                                                }
                                                if ((IData)(
                                                            (0x30200000U 
                                                             == 
                                                             (0xfff00000U 
                                                              & vlSelf->__PVT__if_id_inst_o)))) {
                                                    vlSelf->__PVT__id0__DOT__except_mret = 1U;
                                                }
                                            }
                                        }
                                    }
                                    if ((0x4000U & vlSelf->__PVT__if_id_inst_o)) {
                                        if ((0x2000U 
                                             & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id_inst_o 
                                                = vlSelf->__PVT__if_id_inst_o;
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id_inst_o 
                                                = vlSelf->__PVT__if_id_inst_o;
                                        }
                                    } else if ((0x2000U 
                                                & vlSelf->__PVT__if_id_inst_o)) {
                                        vlSelf->__PVT__id_inst_o 
                                            = vlSelf->__PVT__if_id_inst_o;
                                    } else if ((0x1000U 
                                                & vlSelf->__PVT__if_id_inst_o)) {
                                        vlSelf->__PVT__id_inst_o 
                                            = vlSelf->__PVT__if_id_inst_o;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_inst_o 
                                    = vlSelf->__PVT__if_id_inst_o;
                            }
                        }
                    }
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                        }
                    }
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = vlSelf->__PVT__if_id_inst_o;
                    }
                }
            }
        } else if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 3U)))) {
                    if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_inst_o 
                                    = vlSelf->__PVT__if_id_inst_o;
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 2U)))) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                          >> 3U)))) {
                if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                        }
                    }
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = vlSelf->__PVT__if_id_inst_o;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                          >> 2U)))) {
                if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = vlSelf->__PVT__if_id_inst_o;
                    }
                }
            }
        }
        if ((2U == (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))) {
            if (((IData)(vlSelf->__PVT__csr0__DOT__mstatus_mie) 
                 & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__eip))) {
                vlSelf->__PVT__int_ctrl_interrupt_type_o = 1U;
                vlSelf->__PVT__int_ctrl_trap_casue_o = 0xbU;
            } else if (((IData)(vlSelf->__PVT__csr0__DOT__mstatus_mie) 
                        & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__sip))) {
                vlSelf->__PVT__int_ctrl_interrupt_type_o = 1U;
                vlSelf->__PVT__int_ctrl_trap_casue_o = 3U;
            } else if (((IData)(vlSelf->__PVT__csr0__DOT__mstatus_mie) 
                        & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__tip))) {
                vlSelf->__PVT__int_ctrl_interrupt_type_o = 1U;
                vlSelf->__PVT__int_ctrl_trap_casue_o = 7U;
            } else if ((2U & vlSelf->__PVT__exe_mem_exception_o)) {
                vlSelf->__PVT__int_ctrl_interrupt_type_o = 0U;
                vlSelf->__PVT__int_ctrl_trap_casue_o = 0xbU;
            }
        }
    }
    vlSelf->__PVT__interrupt_ctrl0__DOT__eip = ((IData)(vlSelf->__PVT__csr0__DOT__mie_external) 
                                                & (IData)(vlSelf->__PVT__csr0__DOT__mip_external));
    vlSelf->__PVT__interrupt_ctrl0__DOT__sip = ((IData)(vlSelf->__PVT__csr0__DOT__mie_software) 
                                                & (IData)(vlSelf->__PVT__csr0__DOT__mip_software));
    vlSelf->__PVT__interrupt_ctrl0__DOT__tip = ((IData)(vlSelf->__PVT__csr0__DOT__mie_timer) 
                                                & (IData)(vlSelf->__PVT__csr0__DOT__mip_timer));
    vlSelf->__PVT__csr0__DOT__mstatus_mie = __Vdly__csr0__DOT__mstatus_mie;
    vlSelf->__PVT__mem_csr_we_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                   && (IData)(vlSelf->__PVT__exe_mem_csr_we_o));
    vlSelf->__PVT__id0__DOT__r_reg_we_o = vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0;
    vlSelf->__PVT__id0__DOT__r_reg2_re_o = vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0;
    vlSelf->__PVT__id0__DOT__r_reg1_re_o = vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0;
    if ((1U & ((IData)(vlSymsp->TOP.rst_i) | (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))) {
        vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation = 0U;
        vlSelf->__PVT__exe0__DOT__m_reg_wdata_o = 0U;
        vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o = 0U;
        vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o = 0U;
        vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o = 0U;
        vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o = 0U;
    } else {
        vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation = 0U;
        vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o = 0U;
        if ((0x4000U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                          >> 0xdU)))) {
                vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation = 1U;
            }
            if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o 
                        = vlSelf->__PVT__id_exe_op2_o;
                    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
                        = vlSelf->__PVT__id_exe_op1_o;
                } else {
                    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o 
                        = ((vlSelf->__PVT__id_exe_op2_o 
                            >> 0x1fU) ? (- vlSelf->__PVT__id_exe_op2_o)
                            : vlSelf->__PVT__id_exe_op2_o);
                    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
                        = ((vlSelf->__PVT__id_exe_op1_o 
                            >> 0x1fU) ? (- vlSelf->__PVT__id_exe_op1_o)
                            : vlSelf->__PVT__id_exe_op1_o);
                }
            } else if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o 
                    = vlSelf->__PVT__id_exe_op2_o;
                vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
                    = vlSelf->__PVT__id_exe_op1_o;
            } else {
                vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o 
                    = ((vlSelf->__PVT__id_exe_op2_o 
                        >> 0x1fU) ? (- vlSelf->__PVT__id_exe_op2_o)
                        : vlSelf->__PVT__id_exe_op2_o);
                vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
                    = ((vlSelf->__PVT__id_exe_op1_o 
                        >> 0x1fU) ? (- vlSelf->__PVT__id_exe_op1_o)
                        : vlSelf->__PVT__id_exe_op1_o);
            }
            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o = 1U;
        } else if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o 
                = vlSelf->__PVT__id_exe_op2_o;
            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
                = ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                    ? vlSelf->__PVT__id_exe_op1_o : 
                   ((vlSelf->__PVT__id_exe_op1_o >> 0x1fU)
                     ? (- vlSelf->__PVT__id_exe_op1_o)
                     : vlSelf->__PVT__id_exe_op1_o));
        } else if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o 
                = ((vlSelf->__PVT__id_exe_op2_o >> 0x1fU)
                    ? ((IData)(1U) + (~ vlSelf->__PVT__id_exe_op2_o))
                    : vlSelf->__PVT__id_exe_op2_o);
            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
                = ((vlSelf->__PVT__id_exe_op1_o >> 0x1fU)
                    ? ((IData)(1U) + (~ vlSelf->__PVT__id_exe_op1_o))
                    : vlSelf->__PVT__id_exe_op1_o);
        } else {
            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o 
                = vlSelf->__PVT__id_exe_op2_o;
            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
                = vlSelf->__PVT__id_exe_op1_o;
        }
        vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o = 0U;
        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                      >> 0xeU)))) {
            vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o = 1U;
        }
    }
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S_next 
        = ((0U == (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
            ? ((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o)
                ? (((0U == vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o) 
                    | (0U == vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o))
                    ? 3U : 1U) : 0U) : ((1U == (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
                                         ? ((0U != (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt))
                                             ? 1U : 3U)
                                         : 0U));
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S_nxt 
        = ((0U == (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S))
            ? ((1U & ((~ (IData)((0U != vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__a_o))) 
                      | (~ (IData)((0U != vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__b_o)))))
                ? 3U : 1U) : ((1U == (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S))
                               ? ((0U != (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt))
                                   ? 1U : 3U) : 0U));
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__invert_result 
        = ((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o)
            ? (1ULL + (~ vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i))
            : 0ULL);
    vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__result 
        = ((1U & ((IData)(vlSymsp->TOP.rst_i) | (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))
            ? 0U : ((0x4000U & vlSelf->__PVT__id_exe_inst_o)
                     ? ((0x2000U & vlSelf->__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                             ? vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_result
                             : ((0U != vlSelf->__PVT__id_exe_op2_o)
                                 ? ((vlSelf->__PVT__id_exe_op1_o 
                                     >> 0x1fU) ? (- vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_result)
                                     : vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_result)
                                 : vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_result))
                         : ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                             ? vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_result
                             : ((0U != vlSelf->__PVT__id_exe_op2_o)
                                 ? ((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust)
                                     ? (- vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_result)
                                     : vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_result)
                                 : vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_result)))
                     : ((0x2000U & vlSelf->__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                             ? (IData)((vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i 
                                        >> 0x20U)) : 
                            ((vlSelf->__PVT__id_exe_op1_o 
                              >> 0x1fU) ? (IData)((vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__invert_result 
                                                   >> 0x20U))
                              : (IData)((vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i 
                                         >> 0x20U))))
                         : ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                             ? ((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust)
                                 ? (IData)((vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__invert_result 
                                            >> 0x20U))
                                 : (IData)((vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i 
                                            >> 0x20U)))
                             : (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i)))));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__mem_wb_csr_wdata_o = 0U;
        vlSelf->__PVT__mem_wb_csr_waddr_o = 0U;
    } else if (vlSelf->__PVT__int_ctrl_interrupt_en_o) {
        vlSelf->__PVT__mem_wb_csr_wdata_o = 0U;
        vlSelf->__PVT__mem_wb_csr_waddr_o = 0U;
    } else {
        vlSelf->__PVT__mem_wb_csr_wdata_o = vlSelf->__PVT__mem_csr_wdata_o;
        vlSelf->__PVT__mem_wb_csr_waddr_o = vlSelf->__PVT__mem_csr_waddr_o;
    }
    vlSelf->__PVT__csr0__DOT__w_mie = ((0x304U == (IData)(vlSelf->__PVT__mem_wb_csr_waddr_o)) 
                                       & (IData)(vlSelf->__PVT__mem_wb_csr_we_o));
    vlSelf->__PVT__csr0__DOT__w_mcause = ((0x342U == (IData)(vlSelf->__PVT__mem_wb_csr_waddr_o)) 
                                          & (IData)(vlSelf->__PVT__mem_wb_csr_we_o));
    vlSelf->__PVT__csr_file_csr_rdata_o = ((((IData)(vlSelf->__PVT__mem_wb_csr_waddr_o) 
                                             == (IData)(vlSelf->__PVT__id_exe_csr_addr_o)) 
                                            & (IData)(vlSelf->__PVT__mem_wb_csr_we_o))
                                            ? vlSelf->__PVT__mem_wb_csr_wdata_o
                                            : ((0x800U 
                                                & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                ? (
                                                   (0x400U 
                                                    & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                    ? 
                                                   ((0x200U 
                                                     & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                     ? 
                                                    ((0x100U 
                                                      & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                      ? 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                       ? 0U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                        ? 0U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                          ? 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                              ? 0U
                                                              : 0x16U)
                                                             : 0U)))
                                                          : 0U))))
                                                      : 0U)
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                      ? 0U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                       ? 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                        ? 0U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                              ? 0U
                                                              : (IData)(
                                                                        (vlSelf->__PVT__csr0__DOT__mcycle 
                                                                         >> 0x20U)))))))))
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                        ? 0U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                              ? 0U
                                                              : (IData)(vlSelf->__PVT__csr0__DOT__mcycle)))))))))))
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                     ? 
                                                    ((0x100U 
                                                      & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                      ? 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                       ? 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                        ? 0U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                              ? 0U
                                                              : (IData)(
                                                                        (vlSelf->__PVT__csr0__DOT__mcycle 
                                                                         >> 0x20U)))))))))
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                        ? 0U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                              ? 0U
                                                              : (IData)(vlSelf->__PVT__csr0__DOT__minstret))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                              ? 0U
                                                              : (IData)(vlSelf->__PVT__csr0__DOT__mcycle)))))))))
                                                      : 0U)
                                                     : 0U))
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                     ? 
                                                    ((0x100U 
                                                      & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                      ? 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                       ? 0U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                        ? 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                              ? 0U
                                                              : 
                                                             (((IData)(vlSelf->__PVT__csr0__DOT__mip_external) 
                                                               << 0xbU) 
                                                              | (((IData)(vlSelf->__PVT__csr0__DOT__mip_timer) 
                                                                  << 7U) 
                                                                 | ((IData)(vlSelf->__PVT__csr0__DOT__mip_software) 
                                                                    << 3U)))))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                              ? vlSelf->__PVT__csr0__DOT__mtval
                                                              : 
                                                             (((IData)(vlSelf->__PVT__csr0__DOT__interrupt_type) 
                                                               << 0x1fU) 
                                                              | ((vlSelf->__PVT__csr0__DOT__cause_rem 
                                                                  << 4U) 
                                                                 | (IData)(vlSelf->__PVT__csr0__DOT__cause))))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                              ? vlSelf->__PVT__csr0__DOT__mepc
                                                              : vlSelf->__PVT__csr0__DOT__mscratch))))))
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                              ? vlSelf->__PVT__csr0__DOT__mtvec
                                                              : 
                                                             (((IData)(vlSelf->__PVT__csr0__DOT__mie_external) 
                                                               << 0xbU) 
                                                              | (((IData)(vlSelf->__PVT__csr0__DOT__mie_timer) 
                                                                  << 7U) 
                                                                 | ((IData)(vlSelf->__PVT__csr0__DOT__mie_software) 
                                                                    << 3U)))))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__id_exe_csr_addr_o))
                                                              ? 0x40001100U
                                                              : 
                                                             (0x1800U 
                                                              | (((IData)(vlSelf->__PVT__csr0__DOT__mstatus_mpie) 
                                                                  << 7U) 
                                                                 | ((IData)(vlSelf->__PVT__csr0__DOT__mstatus_mie) 
                                                                    << 3U)))))))))))
                                                      : 0U)
                                                     : 0U))));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__mem_mem_we_o = 0U;
        vlSelf->__PVT__mem_mem_addr_o = 0U;
        vlSelf->__PVT__mem_mem_ce_o = 0U;
        vlSelf->__PVT__exe_mem_we_o = 0U;
        vlSelf->__PVT__exe_mem_op_o = 0U;
        vlSelf->__PVT__exe_mem_addr_o = 0U;
        vlSelf->__PVT__exe_mem_data_o = 0U;
        vlSelf->__PVT__exe_reg_we_o = 0U;
        vlSelf->__PVT__mem_csr_wdata_o = 0U;
        vlSelf->__PVT__mem_csr_waddr_o = 0U;
        vlSelf->__PVT__exe_jump_enable_o = 0U;
        vlSelf->__PVT__id_reg_waddr_o = 0U;
        vlSelf->__PVT__id_reg2_addr_o = 0U;
        vlSelf->__PVT__id_reg1_addr_o = 0U;
        vlSelf->__PVT__exe_jump_addr_o = 0U;
        vlSelf->__PVT__ctrl_stall_o = 0U;
        vlSelf->__PVT__exe_mem_exception_o = 0U;
    } else {
        vlSelf->__PVT__mem_mem_we_o = vlSelf->__PVT__exe_mem_mem_we_o;
        vlSelf->__PVT__mem_mem_addr_o = vlSelf->__PVT__exe_mem_mem_addr_o;
        vlSelf->__PVT__mem_mem_ce_o = 1U;
        if ((8U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                    vlSelf->__PVT__mem_mem_we_o = 0U;
                    vlSelf->__PVT__mem_mem_addr_o = 0U;
                    vlSelf->__PVT__mem_mem_ce_o = 0U;
                }
            } else if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                                 >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                    vlSelf->__PVT__mem_mem_we_o = 0U;
                    vlSelf->__PVT__mem_mem_addr_o = 0U;
                    vlSelf->__PVT__mem_mem_ce_o = 0U;
                }
            }
        } else if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            vlSelf->__PVT__mem_mem_we_o = 0U;
            vlSelf->__PVT__mem_mem_addr_o = 0U;
            vlSelf->__PVT__mem_mem_ce_o = 0U;
        } else if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                vlSelf->__PVT__mem_mem_we_o = 0U;
                vlSelf->__PVT__mem_mem_addr_o = 0U;
                vlSelf->__PVT__mem_mem_ce_o = 0U;
            }
        }
        vlSelf->__PVT__exe_mem_we_o = 0U;
        vlSelf->__PVT__exe_mem_op_o = 0U;
        vlSelf->__PVT__exe_mem_addr_o = 0U;
        vlSelf->__PVT__exe_mem_data_o = 0U;
        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    vlSelf->__PVT__exe_mem_we_o 
                                        = vlSelf->__PVT__exe0__DOT__s_mem_we_o;
                                    vlSelf->__PVT__exe_mem_op_o 
                                        = vlSelf->__PVT__exe0__DOT__s_mem_op_o;
                                    vlSelf->__PVT__exe_mem_addr_o 
                                        = vlSelf->__PVT__exe0__DOT__s_mem_addr_o;
                                    vlSelf->__PVT__exe_mem_data_o 
                                        = vlSelf->__PVT__exe0__DOT__s_mem_data_o;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                 >> 4U)))) {
                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 2U)))) {
                        if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                vlSelf->__PVT__exe_mem_we_o 
                                    = vlSelf->__PVT__exe0__DOT__s_mem_we_o;
                                vlSelf->__PVT__exe_mem_op_o 
                                    = vlSelf->__PVT__exe0__DOT__s_mem_op_o;
                                vlSelf->__PVT__exe_mem_addr_o 
                                    = vlSelf->__PVT__exe0__DOT__s_mem_addr_o;
                                vlSelf->__PVT__exe_mem_data_o 
                                    = vlSelf->__PVT__exe0__DOT__s_mem_data_o;
                            }
                        }
                    }
                }
            }
        }
        vlSelf->__PVT__exe_reg_we_o = 0U;
        vlSelf->__PVT__mem_csr_wdata_o = vlSelf->__PVT__exe_mem_csr_wdata_o;
        vlSelf->__PVT__mem_csr_waddr_o = vlSelf->__PVT__exe_mem_csr_waddr_o;
        vlSelf->__PVT__exe_jump_enable_o = 0U;
        vlSelf->__PVT__id_reg_waddr_o = 0U;
        vlSelf->__PVT__id_reg2_addr_o = 0U;
        vlSelf->__PVT__id_reg1_addr_o = 0U;
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSelf->__PVT__if_id_inst_o)) {
                                        if ((0x2000U 
                                             & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id_reg_waddr_o 
                                                = (0x1fU 
                                                   & (vlSelf->__PVT__if_id_inst_o 
                                                      >> 7U));
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id_reg_waddr_o 
                                                = (0x1fU 
                                                   & (vlSelf->__PVT__if_id_inst_o 
                                                      >> 7U));
                                        }
                                    } else if ((0x2000U 
                                                & vlSelf->__PVT__if_id_inst_o)) {
                                        vlSelf->__PVT__id_reg_waddr_o 
                                            = (0x1fU 
                                               & (vlSelf->__PVT__if_id_inst_o 
                                                  >> 7U));
                                    } else if ((0x1000U 
                                                & vlSelf->__PVT__if_id_inst_o)) {
                                        vlSelf->__PVT__id_reg_waddr_o 
                                            = (0x1fU 
                                               & (vlSelf->__PVT__if_id_inst_o 
                                                  >> 7U));
                                    }
                                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                                  >> 0xeU)))) {
                                        if ((0x2000U 
                                             & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id_reg1_addr_o 
                                                = (0x1fU 
                                                   & (vlSelf->__PVT__if_id_inst_o 
                                                      >> 0xfU));
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id_reg1_addr_o 
                                                = (0x1fU 
                                                   & (vlSelf->__PVT__if_id_inst_o 
                                                      >> 0xfU));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                                vlSelf->__PVT__id_reg1_addr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 0xfU));
                            }
                        }
                    }
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                        }
                    }
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                        >> 0xfU));
                    }
                }
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 4U)))) {
                    if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    vlSelf->__PVT__id_reg2_addr_o 
                                        = (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U));
                                }
                            }
                        }
                    } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_reg2_addr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 0x14U));
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_reg2_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U));
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 3U)))) {
                    if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_reg_waddr_o 
                                = ((IData)(vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0)
                                    ? (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U))
                                    : 0U);
                        }
                    }
                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                  >> 2U)))) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                if (vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0) {
                                    vlSelf->__PVT__id_reg2_addr_o 
                                        = (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U));
                                    vlSelf->__PVT__id_reg1_addr_o 
                                        = (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                                } else {
                                    vlSelf->__PVT__id_reg2_addr_o = 0U;
                                    vlSelf->__PVT__id_reg1_addr_o = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 2U)))) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_reg2_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U));
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                          >> 3U)))) {
                if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                        }
                    }
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_reg_waddr_o 
                            = vlSelf->__PVT__id0__DOT__i_reg_waddr_o;
                    }
                }
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 2U)))) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_reg2_addr_o 
                                = vlSelf->__PVT__id0__DOT__i_reg2_raddr_o;
                            vlSelf->__PVT__id_reg1_addr_o 
                                = vlSelf->__PVT__id0__DOT__i_reg1_raddr_o;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                          >> 2U)))) {
                if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                        >> 7U));
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                        >> 0xfU));
                    }
                }
            }
        }
        vlSelf->__PVT__exe_jump_addr_o = 0U;
        if ((0x40U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
                                        vlSelf->__PVT__exe_reg_we_o 
                                            = vlSelf->__PVT__id_exe_reg_we_o;
                                    } else if ((0x1000U 
                                                & vlSelf->__PVT__id_exe_inst_o)) {
                                        vlSelf->__PVT__exe_reg_we_o 
                                            = vlSelf->__PVT__id_exe_reg_we_o;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                vlSelf->__PVT__exe_reg_we_o = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_we_o = 1U;
                        }
                    }
                }
                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                              >> 4U)))) {
                    if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    vlSelf->__PVT__exe_jump_enable_o 
                                        = vlSelf->__PVT__exe0__DOT__b_jump_enable_o;
                                    vlSelf->__PVT__exe_jump_addr_o 
                                        = vlSelf->__PVT__exe0__DOT__b_jump_addr_o;
                                }
                            }
                        }
                    } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                vlSelf->__PVT__exe_jump_enable_o 
                                    = vlSelf->__PVT__exe0__DOT__b_jump_enable_o;
                                vlSelf->__PVT__exe_jump_addr_o 
                                    = (0xfffffffeU 
                                       & (vlSelf->__PVT__exe0__DOT__b_jump_addr_o 
                                          + vlSelf->__PVT__id_exe_op1_o));
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_jump_enable_o 
                                = vlSelf->__PVT__exe0__DOT__b_jump_enable_o;
                            vlSelf->__PVT__exe_jump_addr_o 
                                = vlSelf->__PVT__exe0__DOT__b_jump_addr_o;
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                              >> 3U)))) {
                    if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                vlSelf->__PVT__exe_reg_we_o 
                                    = vlSelf->__PVT__id_exe_reg_we_o;
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_we_o 
                                = (1U & (((1U & (~ 
                                                 ((IData)(vlSymsp->TOP.rst_i) 
                                                  | (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_r0__DOT__isType_r))))) 
                                          && ((0x4000U 
                                               & vlSelf->__PVT__id_exe_inst_o)
                                               ? ((1U 
                                                   & (vlSelf->__PVT__id_exe_inst_o 
                                                      >> 0xdU)) 
                                                  || ((1U 
                                                       & (~ 
                                                          (vlSelf->__PVT__id_exe_inst_o 
                                                           >> 0xcU))) 
                                                      || ((0U 
                                                           == 
                                                           (vlSelf->__PVT__id_exe_inst_o 
                                                            >> 0x19U)) 
                                                          || (0x20U 
                                                              == 
                                                              (vlSelf->__PVT__id_exe_inst_o 
                                                               >> 0x19U)))))
                                               : ((1U 
                                                   & (vlSelf->__PVT__id_exe_inst_o 
                                                      >> 0xdU)) 
                                                  || ((1U 
                                                       & (vlSelf->__PVT__id_exe_inst_o 
                                                          >> 0xcU)) 
                                                      || ((0U 
                                                           == 
                                                           (vlSelf->__PVT__id_exe_inst_o 
                                                            >> 0x19U)) 
                                                          || (0x20U 
                                                              == 
                                                              (vlSelf->__PVT__id_exe_inst_o 
                                                               >> 0x19U))))))) 
                                         | (~ ((IData)(vlSymsp->TOP.rst_i) 
                                               | (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))));
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                              >> 2U)))) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_we_o 
                                = vlSelf->__PVT__exe0__DOT__s_reg_we_o;
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                          >> 3U)))) {
                if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_we_o 
                                = vlSelf->__PVT__id_exe_reg_we_o;
                        }
                    }
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_reg_we_o 
                            = ((1U & (~ ((IData)(vlSymsp->TOP.rst_i) 
                                         | (0x13U != 
                                            (0x7fU 
                                             & vlSelf->__PVT__id_exe_inst_o))))) 
                               && ((0x13U == (0x7fU 
                                              & vlSelf->__PVT__id_exe_inst_o)) 
                                   && ((0x4000U & vlSelf->__PVT__id_exe_inst_o)
                                        ? ((1U & (vlSelf->__PVT__id_exe_inst_o 
                                                  >> 0xdU)) 
                                           || ((1U 
                                                & (~ 
                                                   (vlSelf->__PVT__id_exe_inst_o 
                                                    >> 0xcU))) 
                                               || ((0U 
                                                    == 
                                                    (vlSelf->__PVT__id_exe_inst_o 
                                                     >> 0x19U)) 
                                                   || (0x20U 
                                                       == 
                                                       (vlSelf->__PVT__id_exe_inst_o 
                                                        >> 0x19U)))))
                                        : ((1U & (vlSelf->__PVT__id_exe_inst_o 
                                                  >> 0xdU)) 
                                           || ((1U 
                                                & (~ 
                                                   (vlSelf->__PVT__id_exe_inst_o 
                                                    >> 0xcU))) 
                                               || (0U 
                                                   == 
                                                   (vlSelf->__PVT__id_exe_inst_o 
                                                    >> 0x19U)))))));
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                          >> 2U)))) {
                if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_reg_we_o 
                            = vlSelf->__PVT__exe0__DOT__s_reg_we_o;
                    }
                }
            }
        }
        vlSelf->__PVT__ctrl_stall_o = ((((~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i)) 
                                         & (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o)) 
                                        | ((~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i)) 
                                           & (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o)))
                                        ? 0xfU : (((IData)(vlSelf->__PVT__id_exe_inst_is_load_o) 
                                                   & (((0x1fU 
                                                        & (vlSelf->__PVT__if_id_inst_o 
                                                           >> 0xfU)) 
                                                       == (IData)(vlSelf->__PVT__id_exe_rd_o)) 
                                                      | ((0x1fU 
                                                          & (vlSelf->__PVT__if_id_inst_o 
                                                             >> 0x14U)) 
                                                         == (IData)(vlSelf->__PVT__id_exe_rd_o))))
                                                   ? 7U
                                                   : 0U));
        vlSelf->__PVT__exe_mem_exception_o = ((IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)
                                               ? 0U
                                               : vlSelf->__PVT__id_exe_exception_o);
    }
    vlSelf->__PVT__id_exe_exception_o = __Vdly__id_exe_exception_o;
    vlSelf->__PVT__exe0__DOT__csr_rdata = ((((IData)(vlSelf->__PVT__id_exe_csr_addr_o) 
                                             == (IData)(vlSelf->__PVT__mem_csr_waddr_o)) 
                                            & (IData)(vlSelf->__PVT__mem_csr_we_o))
                                            ? vlSelf->__PVT__mem_csr_wdata_o
                                            : vlSelf->__PVT__csr_file_csr_rdata_o);
    vlSelf->__PVT__exe0__DOT__m_reg_wdata_o = ((- (IData)(
                                                          ((IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i) 
                                                           | (IData)(vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i)))) 
                                               & vlSelf->__PVT__exe0__DOT__exe_type_m0__DOT__result);
    vlSelf->__PVT__interrupt_ctrl0__DOT__S = ((IData)(vlSymsp->TOP.rst_i)
                                               ? 1U
                                               : (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S_nxt));
    vlSelf->__PVT__int_ctrl_epc_we_o = ((1U & (~ ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                                                  >> 3U))) 
                                        && ((1U & ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                                                   >> 2U)) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))))));
    vlSelf->__PVT__int_ctrl_mstatus_ie_clear_o = ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                                                       >> 3U))) 
                                                  && ((1U 
                                                       & ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                                                          >> 2U)) 
                                                      && ((1U 
                                                           & (~ 
                                                              ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                                                               >> 1U))) 
                                                          && (1U 
                                                              & (~ (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))))));
    vlSelf->__PVT__int_ctrl_cause_we_o = ((1U & (~ 
                                                 ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                                                  >> 3U))) 
                                          && ((1U & 
                                               ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                                                >> 2U)) 
                                              && ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                                                       >> 1U))) 
                                                  && (1U 
                                                      & (~ (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))))));
    vlSelf->__PVT__int_ctrl_mstatus_ie_set_o = ((1U 
                                                 & ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                                                    >> 3U)) 
                                                && ((1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                                                         >> 2U))) 
                                                    && ((1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                                                             >> 1U))) 
                                                        && (1U 
                                                            & (~ (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))))));
    if ((1U & (~ ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S)))) {
                    vlSelf->__PVT__int_ctrl_epc_o = 
                        ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__exception)
                          ? (vlSelf->__PVT__ctrl_pc_o 
                             - (IData)(4U)) : vlSelf->__PVT__ctrl_pc_o);
                }
            }
        }
    }
    __Vtableidx1 = ((((1U & (((IData)(vlSelf->__PVT__csr0__DOT__mstatus_mie) 
                              & ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__eip) 
                                 | ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__tip) 
                                    | (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__sip)))) 
                             | (vlSelf->__PVT__exe_mem_exception_o 
                                >> 1U))) ? 4U : ((1U 
                                                  & vlSelf->__PVT__exe_mem_exception_o)
                                                  ? 8U
                                                  : 2U)) 
                     << 4U) | (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S));
    vlSelf->__PVT__interrupt_ctrl0__DOT__S_nxt = Vtest_top__ConstPool__TABLE_h0768fe48_0
        [__Vtableidx1];
    if (((IData)(vlSymsp->TOP.rst_i) | (0x73U != (0x7fU 
                                                  & vlSelf->__PVT__id_exe_inst_o)))) {
        vlSelf->__PVT__exe0__DOT__system_csr_wdata_o = 0U;
        vlSelf->__PVT__exe0__DOT__system_reg_wdata_o = 0U;
    } else if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
        vlSelf->__PVT__exe0__DOT__system_csr_wdata_o 
            = ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                ? (vlSelf->__PVT__exe0__DOT__csr_rdata 
                   & (~ vlSelf->__PVT__id_exe_op1_o))
                : (vlSelf->__PVT__exe0__DOT__csr_rdata 
                   | vlSelf->__PVT__id_exe_op1_o));
        vlSelf->__PVT__exe0__DOT__system_reg_wdata_o 
            = vlSelf->__PVT__exe0__DOT__csr_rdata;
    } else if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
        vlSelf->__PVT__exe0__DOT__system_csr_wdata_o 
            = vlSelf->__PVT__id_exe_op1_o;
        vlSelf->__PVT__exe0__DOT__system_reg_wdata_o 
            = vlSelf->__PVT__exe0__DOT__csr_rdata;
    } else {
        vlSelf->__PVT__exe0__DOT__system_csr_wdata_o = 0U;
        vlSelf->__PVT__exe0__DOT__system_reg_wdata_o = 0U;
    }
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__id_reg_we_o = 0U;
        vlSelf->__PVT__id_reg2_re_o = 0U;
        vlSelf->__PVT__id_reg1_re_o = 0U;
        vlSelf->__PVT__exe_csr_wdata_o = 0U;
        vlSelf->__PVT__exe_reg_wdata_o = 0U;
    } else {
        vlSelf->__PVT__id_reg_we_o = 0U;
        vlSelf->__PVT__id_reg2_re_o = 0U;
        vlSelf->__PVT__id_reg1_re_o = 0U;
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSelf->__PVT__if_id_inst_o)) {
                                        if ((0x2000U 
                                             & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id_reg_we_o = 1U;
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id_reg_we_o = 1U;
                                        }
                                    } else if ((0x2000U 
                                                & vlSelf->__PVT__if_id_inst_o)) {
                                        vlSelf->__PVT__id_reg_we_o = 1U;
                                    } else if ((0x1000U 
                                                & vlSelf->__PVT__if_id_inst_o)) {
                                        vlSelf->__PVT__id_reg_we_o = 1U;
                                    }
                                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                                  >> 0xeU)))) {
                                        if ((0x2000U 
                                             & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id_reg1_re_o = 1U;
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id_reg1_re_o = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    vlSelf->__PVT__id_reg_we_o = 1U;
                                }
                            }
                        }
                    } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_reg_we_o = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    vlSelf->__PVT__id_reg1_re_o = 1U;
                                }
                            }
                        } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_reg1_re_o = 1U;
                            }
                        }
                    }
                }
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    vlSelf->__PVT__id_reg2_re_o = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 3U)))) {
                    if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_reg_we_o = 1U;
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_reg_we_o 
                                = vlSelf->__PVT__id0__DOT__r_reg_we_o;
                        }
                    }
                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                  >> 2U)))) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_reg2_re_o 
                                    = vlSelf->__PVT__id0__DOT__r_reg2_re_o;
                                vlSelf->__PVT__id_reg1_re_o 
                                    = vlSelf->__PVT__id0__DOT__r_reg1_re_o;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 2U)))) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_reg2_re_o = 1U;
                            vlSelf->__PVT__id_reg1_re_o = 1U;
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                          >> 3U)))) {
                if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_reg_we_o = 1U;
                        }
                    }
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_reg_we_o 
                            = vlSelf->__PVT__id0__DOT__i_reg_we_o;
                    }
                }
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 2U)))) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_reg2_re_o 
                                = vlSelf->__PVT__id0__DOT__i_reg2_re_o;
                            vlSelf->__PVT__id_reg1_re_o 
                                = vlSelf->__PVT__id0__DOT__i_reg1_re_o;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                          >> 2U)))) {
                if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_reg_we_o = 1U;
                        vlSelf->__PVT__id_reg1_re_o = 1U;
                    }
                }
            }
        }
        vlSelf->__PVT__exe_csr_wdata_o = 0U;
        vlSelf->__PVT__exe_reg_wdata_o = 0U;
        if ((0x40U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
                                        vlSelf->__PVT__exe_csr_wdata_o 
                                            = vlSelf->__PVT__exe0__DOT__system_csr_wdata_o;
                                        vlSelf->__PVT__exe_reg_wdata_o 
                                            = vlSelf->__PVT__exe0__DOT__system_reg_wdata_o;
                                    } else if ((0x1000U 
                                                & vlSelf->__PVT__id_exe_inst_o)) {
                                        vlSelf->__PVT__exe_csr_wdata_o 
                                            = vlSelf->__PVT__exe0__DOT__system_csr_wdata_o;
                                        vlSelf->__PVT__exe_reg_wdata_o 
                                            = vlSelf->__PVT__exe0__DOT__system_reg_wdata_o;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                vlSelf->__PVT__exe_reg_wdata_o 
                                    = ((IData)(4U) 
                                       + vlSelf->__PVT__id_exe_inst_addr_o);
                            }
                        }
                    }
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_wdata_o 
                                = ((IData)(4U) + vlSelf->__PVT__id_exe_inst_addr_o);
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                              >> 3U)))) {
                    if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                vlSelf->__PVT__exe_reg_wdata_o 
                                    = (vlSelf->__PVT__id_exe_op1_o 
                                       + vlSelf->__PVT__id_exe_op2_o);
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_wdata_o 
                                = (vlSelf->__PVT__exe0__DOT__r_reg_wdata_o 
                                   | vlSelf->__PVT__exe0__DOT__m_reg_wdata_o);
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                              >> 2U)))) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_wdata_o = 0U;
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                          >> 3U)))) {
                if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_wdata_o 
                                = (vlSelf->__PVT__id_exe_op1_o 
                                   + vlSelf->__PVT__id_exe_op2_o);
                        }
                    }
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_reg_wdata_o 
                            = vlSelf->__PVT__exe0__DOT__i_reg_wdata_o;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                          >> 2U)))) {
                if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_reg_wdata_o = 0U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtest_top_core_top___nba_sequent__TOP__test_top__core_top0__1(Vtest_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top___nba_sequent__TOP__test_top__core_top0__1\n"); );
    // Body
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__mem_mem_data_o = 0U;
        vlSelf->__PVT__mem_wb_reg_waddr_o = 0U;
        vlSelf->__PVT__mem_wb_reg_wdata_o = 0U;
        vlSelf->__PVT__mem_reg_waddr_o = 0U;
        vlSelf->__PVT__mem0__DOT__reg_wdata = 0U;
    } else {
        vlSelf->__PVT__mem_mem_data_o = 0U;
        if ((8U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                    vlSelf->__PVT__mem_mem_data_o = 0U;
                }
            } else if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                                 >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                    vlSelf->__PVT__mem_mem_data_o = 0U;
                }
            }
        } else {
            vlSelf->__PVT__mem_mem_data_o = ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                              ? 0U : 
                                             ((2U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                               ? ((1U 
                                                   & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                                   ? vlSelf->__PVT__exe_mem_mem_data_o
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                    ? 
                                                   ((0xffff0000U 
                                                     & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                     [0U]) 
                                                    | (0xffffU 
                                                       & vlSelf->__PVT__exe_mem_mem_data_o))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                     ? 
                                                    ((vlSelf->__PVT__exe_mem_mem_data_o 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                        [0U]))
                                                     : 0U)))
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                    ? 
                                                   ((0xffffff00U 
                                                     & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                     [0U]) 
                                                    | (0xffU 
                                                       & vlSelf->__PVT__exe_mem_mem_data_o))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                     ? 
                                                    ((0xffff0000U 
                                                      & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                      [0U]) 
                                                     | ((0xff00U 
                                                         & (vlSelf->__PVT__exe_mem_mem_data_o 
                                                            << 8U)) 
                                                        | (0xffU 
                                                           & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                           [0U])))
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                      ? 
                                                     ((0xff000000U 
                                                       & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                       [0U]) 
                                                      | ((0xff0000U 
                                                          & (vlSelf->__PVT__exe_mem_mem_data_o 
                                                             << 0x10U)) 
                                                         | (0xffffU 
                                                            & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                            [0U])))
                                                      : 
                                                     ((vlSelf->__PVT__exe_mem_mem_data_o 
                                                       << 0x18U) 
                                                      | (0xffffffU 
                                                         & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                         [0U])))))
                                                   : 0U)));
        }
        if (vlSelf->__PVT__int_ctrl_interrupt_en_o) {
            vlSelf->__PVT__mem_wb_reg_waddr_o = 0U;
            vlSelf->__PVT__mem_wb_reg_wdata_o = 0U;
        } else {
            vlSelf->__PVT__mem_wb_reg_waddr_o = vlSelf->__PVT__mem_reg_waddr_o;
            vlSelf->__PVT__mem_wb_reg_wdata_o = vlSelf->__PVT__mem0__DOT__reg_wdata;
        }
        vlSelf->__PVT__mem_reg_waddr_o = vlSelf->__PVT__exe_mem_reg_waddr_o;
        vlSelf->__PVT__mem0__DOT__reg_wdata = vlSelf->__PVT__exe_mem_reg_wdata_o;
    }
    vlSelf->__PVT__mem_wb_reg_we_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                      && ((1U & (~ (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o))) 
                                          && (IData)(vlSelf->__PVT__mem_reg_we_o)));
    vlSelf->__PVT__mem_reg_we_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                   && (IData)(vlSelf->__PVT__exe_mem_reg_we_o));
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_i)))) {
        if ((8U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    vlSelf->__PVT__mem0__DOT__reg_wdata 
                        = ((1U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                            ? ((0U == (3U & vlSelf->__PVT__exe_mem_mem_addr_o))
                                ? (0xffffU & vlSymsp->TOP__test_top.__PVT__host_rdata
                                   [0U]) : ((2U == 
                                             (3U & vlSelf->__PVT__exe_mem_mem_addr_o))
                                             ? (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                [0U] 
                                                >> 0x10U)
                                             : 0U))
                            : ((0U == (3U & vlSelf->__PVT__exe_mem_mem_addr_o))
                                ? (0xffU & vlSymsp->TOP__test_top.__PVT__host_rdata
                                   [0U]) : ((1U == 
                                             (3U & vlSelf->__PVT__exe_mem_mem_addr_o))
                                             ? (0xffU 
                                                & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                   [0U] 
                                                   >> 8U))
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                 ? 
                                                (0xffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                    [0U] 
                                                    >> 0x10U))
                                                 : 
                                                (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                 [0U] 
                                                 >> 0x18U)))));
                }
            } else if ((2U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                vlSelf->__PVT__mem0__DOT__reg_wdata 
                    = ((1U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                        ? vlSymsp->TOP__test_top.__PVT__host_rdata
                       [0U] : ((0U == (3U & vlSelf->__PVT__exe_mem_mem_addr_o))
                                ? (((- (IData)((1U 
                                                & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                   [0U] 
                                                   >> 0xfU)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                 [0U]))
                                : ((2U == (3U & vlSelf->__PVT__exe_mem_mem_addr_o))
                                    ? (((- (IData)(
                                                   (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                    [0U] 
                                                    >> 0x1fU))) 
                                        << 0x10U) | 
                                       (vlSymsp->TOP__test_top.__PVT__host_rdata
                                        [0U] >> 0x10U))
                                    : 0U)));
            } else if ((1U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                vlSelf->__PVT__mem0__DOT__reg_wdata 
                    = ((0U == (3U & vlSelf->__PVT__exe_mem_mem_addr_o))
                        ? (((- (IData)((1U & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                              [0U] 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSymsp->TOP__test_top.__PVT__host_rdata
                                      [0U])) : ((1U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                                 [0U] 
                                                                 >> 0xfU)))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                       [0U] 
                                                       >> 8U)))
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                                  [0U] 
                                                                  >> 0x17U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                        [0U] 
                                                        >> 0x10U)))
                                                  : 
                                                 (((- (IData)(
                                                              (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                               [0U] 
                                                               >> 0x1fU))) 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                     [0U] 
                                                     >> 0x18U)))));
            }
        }
    }
    vlSelf->__PVT__int_ctrl_interrupt_en_o = ((8U & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                               ? ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S)))))
                                               : ((1U 
                                                   & ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                                                      >> 2U)) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))))));
    vlSelf->__PVT__ctrl_new_pc_o = ((IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)
                                     ? ((8U & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                         ? ((4U & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                             ? 0U : 
                                            ((2U & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                              ? 0U : 
                                             ((1U & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                               ? 0U
                                               : vlSelf->__PVT__csr0__DOT__mepc)))
                                         : ((4U & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                             ? ((2U 
                                                 & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->__PVT__int_ctrl_interrupt_type_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->__PVT__csr0__DOT__mtvec)
                                                    ? 
                                                   ((0xfffffffcU 
                                                     & vlSelf->__PVT__csr0__DOT__mtvec) 
                                                    + 
                                                    ((IData)(vlSelf->__PVT__int_ctrl_trap_casue_o) 
                                                     << 2U))
                                                    : 
                                                   (0xfffffffcU 
                                                    & vlSelf->__PVT__csr0__DOT__mtvec))
                                                   : 
                                                  (0xfffffffcU 
                                                   & vlSelf->__PVT__csr0__DOT__mtvec))))
                                             : 0U))
                                     : ((IData)(vlSelf->__PVT__exe_jump_enable_o)
                                         ? vlSelf->__PVT__exe_jump_addr_o
                                         : 0U));
}

VL_INLINE_OPT void Vtest_top_core_top___nba_sequent__TOP__test_top__core_top0__2(Vtest_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top___nba_sequent__TOP__test_top__core_top0__2\n"); );
    // Body
    if ((0x13U == (0x7fU & vlSelf->__PVT__if_id_inst_o))) {
        vlSelf->__PVT__id0__DOT__i_op1_o = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
        if ((0x4000U & vlSelf->__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & (~ (IData)(vlSelf->id0__DOT__inst_type_i__DOT____VdfgExtracted_h64b65831__0)))) {
                        vlSelf->__PVT__id0__DOT__i_op1_o = 0U;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                             >> 0xdU)))) {
            if ((0x1000U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0U != (vlSelf->__PVT__if_id_inst_o 
                            >> 0x19U))) {
                    vlSelf->__PVT__id0__DOT__i_op1_o = 0U;
                }
            }
        }
    } else {
        vlSelf->__PVT__id0__DOT__i_op1_o = 0U;
    }
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
    } else {
        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    vlSelf->__PVT__id0__DOT__op2_o_final 
                                        = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o;
                                }
                            }
                        }
                    }
                }
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSelf->__PVT__if_id_inst_o)) {
                                        if ((0x2000U 
                                             & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id0__DOT__op1_o_final 
                                                = (0x1fU 
                                                   & (vlSelf->__PVT__if_id_inst_o 
                                                      >> 0xfU));
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__if_id_inst_o)) {
                                            vlSelf->__PVT__id0__DOT__op1_o_final 
                                                = (0x1fU 
                                                   & (vlSelf->__PVT__if_id_inst_o 
                                                      >> 0xfU));
                                        }
                                    } else if ((0x2000U 
                                                & vlSelf->__PVT__if_id_inst_o)) {
                                        vlSelf->__PVT__id0__DOT__op1_o_final 
                                            = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                                    } else if ((0x1000U 
                                                & vlSelf->__PVT__if_id_inst_o)) {
                                        vlSelf->__PVT__id0__DOT__op1_o_final 
                                            = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                     >> 3U)))) {
                    if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id0__DOT__op1_o_final 
                                    = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id0__DOT__op1_o_final 
                                = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 3U)))) {
                    if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                                vlSelf->__PVT__id0__DOT__op1_o_final 
                                    = (0xfffff000U 
                                       & vlSelf->__PVT__if_id_inst_o);
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            if (vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0) {
                                vlSelf->__PVT__id0__DOT__op2_o_final 
                                    = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o;
                                vlSelf->__PVT__id0__DOT__op1_o_final 
                                    = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                            } else {
                                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                                vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                              >> 2U)))) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id0__DOT__op2_o_final 
                                = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o;
                            vlSelf->__PVT__id0__DOT__op1_o_final 
                                = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                          >> 3U)))) {
                if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id0__DOT__op2_o_final 
                                = (0xfffff000U & vlSelf->__PVT__if_id_inst_o);
                            vlSelf->__PVT__id0__DOT__op1_o_final 
                                = vlSelf->__PVT__if_id_inst_addr_o;
                        }
                    }
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id0__DOT__op2_o_final 
                            = ((0x13U == (0x7fU & vlSelf->__PVT__if_id_inst_o))
                                ? ((0x4000U & vlSelf->__PVT__if_id_inst_o)
                                    ? ((0x2000U & vlSelf->__PVT__if_id_inst_o)
                                        ? (((- (IData)(
                                                       (vlSelf->__PVT__if_id_inst_o 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelf->__PVT__if_id_inst_o 
                                              >> 0x14U))
                                        : ((0x1000U 
                                            & vlSelf->__PVT__if_id_inst_o)
                                            ? ((IData)(vlSelf->id0__DOT__inst_type_i__DOT____VdfgExtracted_h64b65831__0)
                                                ? (0x1fU 
                                                   & (vlSelf->__PVT__if_id_inst_o 
                                                      >> 0x14U))
                                                : 0U)
                                            : (((- (IData)(
                                                           (vlSelf->__PVT__if_id_inst_o 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->__PVT__if_id_inst_o 
                                                  >> 0x14U))))
                                    : ((0x2000U & vlSelf->__PVT__if_id_inst_o)
                                        ? (((- (IData)(
                                                       (vlSelf->__PVT__if_id_inst_o 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelf->__PVT__if_id_inst_o 
                                              >> 0x14U))
                                        : ((0x1000U 
                                            & vlSelf->__PVT__if_id_inst_o)
                                            ? ((0U 
                                                == 
                                                (vlSelf->__PVT__if_id_inst_o 
                                                 >> 0x19U))
                                                ? (0x1fU 
                                                   & (vlSelf->__PVT__if_id_inst_o 
                                                      >> 0x14U))
                                                : 0U)
                                            : (((- (IData)(
                                                           (vlSelf->__PVT__if_id_inst_o 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->__PVT__if_id_inst_o 
                                                  >> 0x14U)))))
                                : 0U);
                        vlSelf->__PVT__id0__DOT__op1_o_final 
                            = vlSelf->__PVT__id0__DOT__i_op1_o;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                          >> 2U)))) {
                if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id0__DOT__op1_o_final 
                            = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                    }
                }
            }
        }
    }
}
