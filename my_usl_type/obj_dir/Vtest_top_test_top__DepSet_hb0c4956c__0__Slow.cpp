// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top__pch.h"
#include "Vtest_top__Syms.h"
#include "Vtest_top_test_top.h"

VL_ATTR_COLD void Vtest_top_test_top___stl_sequent__TOP__test_top__0(Vtest_top_test_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top___stl_sequent__TOP__test_top__0\n"); );
    // Body
    vlSelf->__PVT__exe0__DOT__s_mem_we_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                            && (0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->__PVT__id_exe_inst_o)));
    vlSelf->__PVT__mem_reg_we_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                   && (IData)(vlSelf->__PVT__exe_mem_reg_we_o));
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
    vlSelf->__PVT__exe0__DOT__exe_type_i0__DOT__sr_shift 
        = (vlSelf->__PVT__id_exe_op1_o >> (0x1fU & vlSelf->__PVT__id_exe_op2_o));
    vlSelf->__PVT__exe0__DOT__exe_type_i0__DOT__op1_ge_op2_signed 
        = VL_GTES_III(32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o);
    vlSelf->__PVT__exe0__DOT__exe_type_i0__DOT__op1_ge_op2_unsigned 
        = (vlSelf->__PVT__id_exe_op1_o >= vlSelf->__PVT__id_exe_op2_o);
    vlSelf->id0__DOT__inst_type_i__DOT____VdfgExtracted_h64b65831__0 
        = ((0U == (vlSelf->__PVT__if_id_inst_o >> 0x19U)) 
           | (0x20U == (vlSelf->__PVT__if_id_inst_o 
                        >> 0x19U)));
    vlSelf->__PVT__exe_reg_we_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                   && ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                                 >> 6U))) 
                                       && ((0x20U & vlSelf->__PVT__id_exe_inst_o)
                                            ? ((0x10U 
                                                & vlSelf->__PVT__id_exe_inst_o)
                                                ? (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->__PVT__id_exe_inst_o 
                                                        >> 3U))) 
                                                   && ((4U 
                                                        & vlSelf->__PVT__id_exe_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & (vlSelf->__PVT__id_exe_inst_o 
                                                            >> 1U)) 
                                                        && ((1U 
                                                             & vlSelf->__PVT__id_exe_inst_o) 
                                                            && (IData)(vlSelf->__PVT__id_exe_reg_we_o)))
                                                        : 
                                                       ((1U 
                                                         & (vlSelf->__PVT__id_exe_inst_o 
                                                            >> 1U)) 
                                                        && ((1U 
                                                             & vlSelf->__PVT__id_exe_inst_o) 
                                                            && ((1U 
                                                                 & (~ 
                                                                    ((IData)(vlSymsp->TOP.rst_i) 
                                                                     | (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_r0__DOT__isType_r))))) 
                                                                && ((0x4000U 
                                                                     & vlSelf->__PVT__id_exe_inst_o)
                                                                     ? 
                                                                    ((1U 
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
                                                                     : 
                                                                    ((1U 
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
                                                                                >> 0x19U)))))))))))
                                                : (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->__PVT__id_exe_inst_o 
                                                        >> 3U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelf->__PVT__id_exe_inst_o 
                                                            >> 2U))) 
                                                       && ((1U 
                                                            & (vlSelf->__PVT__id_exe_inst_o 
                                                               >> 1U)) 
                                                           && ((1U 
                                                                & vlSelf->__PVT__id_exe_inst_o) 
                                                               && (IData)(vlSelf->__PVT__exe0__DOT__s_reg_we_o))))))
                                            : ((0x10U 
                                                & vlSelf->__PVT__id_exe_inst_o)
                                                ? (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->__PVT__id_exe_inst_o 
                                                        >> 3U))) 
                                                   && ((4U 
                                                        & vlSelf->__PVT__id_exe_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & (vlSelf->__PVT__id_exe_inst_o 
                                                            >> 1U)) 
                                                        && ((1U 
                                                             & vlSelf->__PVT__id_exe_inst_o) 
                                                            && (IData)(vlSelf->__PVT__id_exe_reg_we_o)))
                                                        : 
                                                       ((1U 
                                                         & (vlSelf->__PVT__id_exe_inst_o 
                                                            >> 1U)) 
                                                        && ((1U 
                                                             & vlSelf->__PVT__id_exe_inst_o) 
                                                            && ((1U 
                                                                 & (~ 
                                                                    ((IData)(vlSymsp->TOP.rst_i) 
                                                                     | (0x13U 
                                                                        != 
                                                                        (0x7fU 
                                                                         & vlSelf->__PVT__id_exe_inst_o))))) 
                                                                && ((0x13U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->__PVT__id_exe_inst_o)) 
                                                                    && ((0x4000U 
                                                                         & vlSelf->__PVT__id_exe_inst_o)
                                                                         ? 
                                                                        ((1U 
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
                                                                         : 
                                                                        ((1U 
                                                                          & (vlSelf->__PVT__id_exe_inst_o 
                                                                             >> 0xdU)) 
                                                                         || ((1U 
                                                                              & (~ 
                                                                                (vlSelf->__PVT__id_exe_inst_o 
                                                                                >> 0xcU))) 
                                                                             || (0U 
                                                                                == 
                                                                                (vlSelf->__PVT__id_exe_inst_o 
                                                                                >> 0x19U)))))))))))
                                                : (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->__PVT__id_exe_inst_o 
                                                        >> 3U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelf->__PVT__id_exe_inst_o 
                                                            >> 2U))) 
                                                       && ((1U 
                                                            & (vlSelf->__PVT__id_exe_inst_o 
                                                               >> 1U)) 
                                                           && ((1U 
                                                                & vlSelf->__PVT__id_exe_inst_o) 
                                                               && (IData)(vlSelf->__PVT__exe0__DOT__s_reg_we_o)))))))));
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
                                                                     & (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_i0__DOT__op1_ge_op2_unsigned))))))
                                                       : 
                                                      (1U 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_i0__DOT__op1_ge_op2_signed)))))))
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
                                                                    & (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_i0__DOT__op1_ge_op2_unsigned))))))
                                                      : 
                                                     (1U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->__PVT__exe0__DOT__exe_type_i0__DOT__op1_ge_op2_signed)))))))
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
        vlSelf->__PVT__id_inst_o = 0x13U;
        vlSelf->__PVT__exe0__DOT__s_mem_op_o = 0U;
        vlSelf->__PVT__mem_reg_waddr_o = 0U;
        vlSelf->__PVT__exe_reg_waddr_o = 0U;
        vlSelf->__PVT__exe0__DOT__s_mem_data_o = 0U;
        vlSelf->__PVT__exe0__DOT__s_mem_addr_o = 0U;
        vlSelf->__PVT__mem0__DOT__reg_wdata = 0U;
        vlSelf->__PVT__mem_mem_we_o = 0U;
        vlSelf->__PVT__ctrl_stall_o = 0U;
        vlSelf->__PVT__mem_ram_ce_o = 0U;
        vlSelf->__PVT__mem_mem_addr_o = 0U;
        vlSelf->__PVT__exe_reg_wdata_o = 0U;
        vlSelf->__PVT__id_reg_waddr_o = 0U;
        vlSelf->__PVT__id_reg2_addr_o = 0U;
        vlSelf->__PVT__id_reg1_addr_o = 0U;
    } else {
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            vlSelf->__PVT__id_inst_o = 0x13U;
            vlSelf->__PVT__id_reg_waddr_o = 0U;
            vlSelf->__PVT__id_reg2_addr_o = 0U;
            vlSelf->__PVT__id_reg1_addr_o = 0U;
        } else if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                    }
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = vlSelf->__PVT__if_id_inst_o;
                        if (vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0) {
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                            vlSelf->__PVT__id_reg2_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U));
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                        } else {
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                            vlSelf->__PVT__id_reg2_addr_o 
                                = (0x1fU & 0U);
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & 0U);
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                } else {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                }
            } else {
                if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = vlSelf->__PVT__if_id_inst_o;
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                        >> 0x14U));
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                        >> 0xfU));
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                } else {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                }
                vlSelf->__PVT__id_reg_waddr_o = (0x1fU 
                                                 & 0U);
            }
        } else if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
            if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id_inst_o = 0x13U;
                vlSelf->__PVT__id_reg_waddr_o = (0x1fU 
                                                 & 0U);
                vlSelf->__PVT__id_reg2_addr_o = (0x1fU 
                                                 & 0U);
                vlSelf->__PVT__id_reg1_addr_o = (0x1fU 
                                                 & 0U);
            } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = vlSelf->__PVT__if_id_inst_o;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                        >> 7U));
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                    }
                } else {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                }
                vlSelf->__PVT__id_reg2_addr_o = (0x1fU 
                                                 & 0U);
                vlSelf->__PVT__id_reg1_addr_o = (0x1fU 
                                                 & 0U);
            } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_inst_o = vlSelf->__PVT__if_id_inst_o;
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & (IData)(vlSelf->__PVT__id0__DOT__i_reg_waddr_o));
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & (IData)(vlSelf->__PVT__id0__DOT__i_reg2_raddr_o));
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & (IData)(vlSelf->__PVT__id0__DOT__i_reg1_raddr_o));
                } else {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                }
            } else {
                vlSelf->__PVT__id_inst_o = 0x13U;
                vlSelf->__PVT__id_reg_waddr_o = (0x1fU 
                                                 & 0U);
                vlSelf->__PVT__id_reg2_addr_o = (0x1fU 
                                                 & 0U);
                vlSelf->__PVT__id_reg1_addr_o = (0x1fU 
                                                 & 0U);
            }
        } else {
            if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id_inst_o = 0x13U;
                vlSelf->__PVT__id_reg_waddr_o = (0x1fU 
                                                 & 0U);
                vlSelf->__PVT__id_reg1_addr_o = (0x1fU 
                                                 & 0U);
            } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id_inst_o = 0x13U;
                vlSelf->__PVT__id_reg_waddr_o = (0x1fU 
                                                 & 0U);
                vlSelf->__PVT__id_reg1_addr_o = (0x1fU 
                                                 & 0U);
            } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_inst_o = vlSelf->__PVT__if_id_inst_o;
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                  >> 7U));
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                  >> 0xfU));
                } else {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                }
            } else {
                vlSelf->__PVT__id_inst_o = 0x13U;
                vlSelf->__PVT__id_reg_waddr_o = (0x1fU 
                                                 & 0U);
                vlSelf->__PVT__id_reg1_addr_o = (0x1fU 
                                                 & 0U);
            }
            vlSelf->__PVT__id_reg2_addr_o = (0x1fU 
                                             & 0U);
        }
        if ((0x23U == (0x7fU & vlSelf->__PVT__id_exe_inst_o))) {
            if ((0U == (7U & (vlSelf->__PVT__id_exe_inst_o 
                              >> 0xcU)))) {
                vlSelf->__PVT__exe0__DOT__s_mem_op_o = 1U;
            } else if ((1U == (7U & (vlSelf->__PVT__id_exe_inst_o 
                                     >> 0xcU)))) {
                vlSelf->__PVT__exe0__DOT__s_mem_op_o = 2U;
            } else if ((2U == (7U & (vlSelf->__PVT__id_exe_inst_o 
                                     >> 0xcU)))) {
                vlSelf->__PVT__exe0__DOT__s_mem_op_o = 3U;
            }
            vlSelf->__PVT__exe0__DOT__s_mem_data_o 
                = vlSelf->__PVT__id_exe_op2_o;
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
        } else {
            if ((3U == (0x7fU & vlSelf->__PVT__id_exe_inst_o))) {
                if ((0U == (7U & (vlSelf->__PVT__id_exe_inst_o 
                                  >> 0xcU)))) {
                    vlSelf->__PVT__exe0__DOT__s_mem_op_o = 9U;
                } else if ((1U == (7U & (vlSelf->__PVT__id_exe_inst_o 
                                         >> 0xcU)))) {
                    vlSelf->__PVT__exe0__DOT__s_mem_op_o = 0xaU;
                } else if ((2U == (7U & (vlSelf->__PVT__id_exe_inst_o 
                                         >> 0xcU)))) {
                    vlSelf->__PVT__exe0__DOT__s_mem_op_o = 0xbU;
                } else if ((4U == (7U & (vlSelf->__PVT__id_exe_inst_o 
                                         >> 0xcU)))) {
                    vlSelf->__PVT__exe0__DOT__s_mem_op_o = 0xcU;
                } else if ((5U == (7U & (vlSelf->__PVT__id_exe_inst_o 
                                         >> 0xcU)))) {
                    vlSelf->__PVT__exe0__DOT__s_mem_op_o = 0xdU;
                }
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
        vlSelf->__PVT__mem_reg_waddr_o = vlSelf->__PVT__exe_mem_reg_waddr_o;
        if ((0x40U & vlSelf->__PVT__id_exe_inst_o)) {
            vlSelf->__PVT__exe_reg_waddr_o = 0U;
            vlSelf->__PVT__exe_reg_wdata_o = 0U;
        } else if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_wdata_o = 0U;
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                            vlSelf->__PVT__exe_reg_wdata_o 
                                = (vlSelf->__PVT__id_exe_op1_o 
                                   + vlSelf->__PVT__id_exe_op2_o);
                        } else {
                            vlSelf->__PVT__exe_reg_waddr_o = 0U;
                            vlSelf->__PVT__exe_reg_wdata_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_reg_wdata_o = 0U;
                    }
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_reg_waddr_o 
                            = vlSelf->__PVT__id_exe_reg_waddr_o;
                        vlSelf->__PVT__exe_reg_wdata_o 
                            = vlSelf->__PVT__exe0__DOT__r_reg_wdata_o;
                    } else {
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_reg_wdata_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_wdata_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_reg_waddr_o = ((8U 
                                                   & vlSelf->__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? (IData)(vlSelf->__PVT__id_exe_reg_waddr_o)
                                                      : 0U)
                                                     : 0U)));
                vlSelf->__PVT__exe_reg_wdata_o = 0U;
            }
        } else if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_reg_wdata_o = 0U;
            } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_reg_waddr_o 
                            = vlSelf->__PVT__id_exe_reg_waddr_o;
                        vlSelf->__PVT__exe_reg_wdata_o 
                            = (vlSelf->__PVT__id_exe_op1_o 
                               + vlSelf->__PVT__id_exe_op2_o);
                    } else {
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_reg_wdata_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_wdata_o = 0U;
                }
            } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_reg_waddr_o 
                        = vlSelf->__PVT__id_exe_reg_waddr_o;
                    vlSelf->__PVT__exe_reg_wdata_o 
                        = vlSelf->__PVT__exe0__DOT__i_reg_wdata_o;
                } else {
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_wdata_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_reg_wdata_o = 0U;
            }
        } else {
            vlSelf->__PVT__exe_reg_waddr_o = ((8U & vlSelf->__PVT__id_exe_inst_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSelf->__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->__PVT__id_exe_inst_o)
                                                     ? (IData)(vlSelf->__PVT__id_exe_reg_waddr_o)
                                                     : 0U)
                                                    : 0U)));
            vlSelf->__PVT__exe_reg_wdata_o = 0U;
        }
        vlSelf->__PVT__mem0__DOT__reg_wdata = vlSelf->__PVT__exe_mem_reg_wdata_o;
        vlSelf->__PVT__mem_mem_we_o = vlSelf->__PVT__exe_mem_mem_we_o;
        vlSelf->__PVT__ctrl_stall_o = (((IData)(vlSelf->__PVT__id_exe_inst_is_load_o) 
                                        & (((0x1fU 
                                             & (vlSelf->__PVT__if_id_inst_o 
                                                >> 0xfU)) 
                                            == (IData)(vlSelf->__PVT__id_exe_rd_o)) 
                                           | ((0x1fU 
                                               & (vlSelf->__PVT__if_id_inst_o 
                                                  >> 0x14U)) 
                                              == (IData)(vlSelf->__PVT__id_exe_rd_o))))
                                        ? 7U : 0U);
        vlSelf->__PVT__mem_ram_ce_o = 1U;
        vlSelf->__PVT__mem_mem_addr_o = vlSelf->__PVT__exe_mem_mem_addr_o;
        if ((8U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                    vlSelf->__PVT__mem_mem_we_o = 0U;
                    vlSelf->__PVT__mem_ram_ce_o = 0U;
                    vlSelf->__PVT__mem_mem_addr_o = 0U;
                }
            } else if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                                 >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                    vlSelf->__PVT__mem_mem_we_o = 0U;
                    vlSelf->__PVT__mem_ram_ce_o = 0U;
                    vlSelf->__PVT__mem_mem_addr_o = 0U;
                }
            }
        } else if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            vlSelf->__PVT__mem_mem_we_o = 0U;
            vlSelf->__PVT__mem_ram_ce_o = 0U;
            vlSelf->__PVT__mem_mem_addr_o = 0U;
        } else if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                vlSelf->__PVT__mem_mem_we_o = 0U;
                vlSelf->__PVT__mem_ram_ce_o = 0U;
                vlSelf->__PVT__mem_mem_addr_o = 0U;
            }
        }
    }
    vlSelf->__PVT__id0__DOT__r_reg_we_o = vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0;
    vlSelf->__PVT__id0__DOT__r_reg2_re_o = vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0;
    vlSelf->__PVT__id0__DOT__r_reg1_re_o = vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0;
    vlSelf->__PVT__id_reg_we_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                  && ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                                >> 6U))) 
                                      && ((0x20U & vlSelf->__PVT__if_id_inst_o)
                                           ? ((1U & 
                                               (vlSelf->__PVT__if_id_inst_o 
                                                >> 4U)) 
                                              && ((1U 
                                                   & (~ 
                                                      (vlSelf->__PVT__if_id_inst_o 
                                                       >> 3U))) 
                                                  && ((4U 
                                                       & vlSelf->__PVT__if_id_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & (vlSelf->__PVT__if_id_inst_o 
                                                           >> 1U)) 
                                                       && (1U 
                                                           & vlSelf->__PVT__if_id_inst_o))
                                                       : 
                                                      ((1U 
                                                        & (vlSelf->__PVT__if_id_inst_o 
                                                           >> 1U)) 
                                                       && ((1U 
                                                            & vlSelf->__PVT__if_id_inst_o) 
                                                           && (IData)(vlSelf->__PVT__id0__DOT__r_reg_we_o))))))
                                           : ((0x10U 
                                               & vlSelf->__PVT__if_id_inst_o)
                                               ? ((1U 
                                                   & (~ 
                                                      (vlSelf->__PVT__if_id_inst_o 
                                                       >> 3U))) 
                                                  && ((4U 
                                                       & vlSelf->__PVT__if_id_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & (vlSelf->__PVT__if_id_inst_o 
                                                           >> 1U)) 
                                                       && (1U 
                                                           & vlSelf->__PVT__if_id_inst_o))
                                                       : 
                                                      ((1U 
                                                        & (vlSelf->__PVT__if_id_inst_o 
                                                           >> 1U)) 
                                                       && ((1U 
                                                            & vlSelf->__PVT__if_id_inst_o) 
                                                           && (IData)(vlSelf->__PVT__id0__DOT__i_reg_we_o)))))
                                               : ((1U 
                                                   & (~ 
                                                      (vlSelf->__PVT__if_id_inst_o 
                                                       >> 3U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          (vlSelf->__PVT__if_id_inst_o 
                                                           >> 2U))) 
                                                      && ((1U 
                                                           & (vlSelf->__PVT__if_id_inst_o 
                                                              >> 1U)) 
                                                          && (1U 
                                                              & vlSelf->__PVT__if_id_inst_o))))))));
    vlSelf->__PVT__id_reg2_re_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                   && ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                                 >> 6U))) 
                                       && ((0x20U & vlSelf->__PVT__if_id_inst_o)
                                            ? ((0x10U 
                                                & vlSelf->__PVT__if_id_inst_o)
                                                ? (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->__PVT__if_id_inst_o 
                                                        >> 3U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelf->__PVT__if_id_inst_o 
                                                            >> 2U))) 
                                                       && ((1U 
                                                            & (vlSelf->__PVT__if_id_inst_o 
                                                               >> 1U)) 
                                                           && ((1U 
                                                                & vlSelf->__PVT__if_id_inst_o) 
                                                               && (IData)(vlSelf->__PVT__id0__DOT__r_reg2_re_o)))))
                                                : (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->__PVT__if_id_inst_o 
                                                        >> 3U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelf->__PVT__if_id_inst_o 
                                                            >> 2U))) 
                                                       && ((1U 
                                                            & (vlSelf->__PVT__if_id_inst_o 
                                                               >> 1U)) 
                                                           && (1U 
                                                               & vlSelf->__PVT__if_id_inst_o)))))
                                            : ((1U 
                                                & (vlSelf->__PVT__if_id_inst_o 
                                                   >> 4U)) 
                                               && ((1U 
                                                    & (~ 
                                                       (vlSelf->__PVT__if_id_inst_o 
                                                        >> 3U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelf->__PVT__if_id_inst_o 
                                                            >> 2U))) 
                                                       && ((1U 
                                                            & (vlSelf->__PVT__if_id_inst_o 
                                                               >> 1U)) 
                                                           && ((1U 
                                                                & vlSelf->__PVT__if_id_inst_o) 
                                                               && (IData)(vlSelf->__PVT__id0__DOT__i_reg2_re_o)))))))));
    vlSelf->__PVT__id_reg1_re_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                   && ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                                 >> 6U))) 
                                       && ((0x20U & vlSelf->__PVT__if_id_inst_o)
                                            ? ((0x10U 
                                                & vlSelf->__PVT__if_id_inst_o)
                                                ? (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->__PVT__if_id_inst_o 
                                                        >> 3U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelf->__PVT__if_id_inst_o 
                                                            >> 2U))) 
                                                       && ((1U 
                                                            & (vlSelf->__PVT__if_id_inst_o 
                                                               >> 1U)) 
                                                           && ((1U 
                                                                & vlSelf->__PVT__if_id_inst_o) 
                                                               && (IData)(vlSelf->__PVT__id0__DOT__r_reg1_re_o)))))
                                                : (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->__PVT__if_id_inst_o 
                                                        >> 3U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelf->__PVT__if_id_inst_o 
                                                            >> 2U))) 
                                                       && ((1U 
                                                            & (vlSelf->__PVT__if_id_inst_o 
                                                               >> 1U)) 
                                                           && (1U 
                                                               & vlSelf->__PVT__if_id_inst_o)))))
                                            : ((0x10U 
                                                & vlSelf->__PVT__if_id_inst_o)
                                                ? (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->__PVT__if_id_inst_o 
                                                        >> 3U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelf->__PVT__if_id_inst_o 
                                                            >> 2U))) 
                                                       && ((1U 
                                                            & (vlSelf->__PVT__if_id_inst_o 
                                                               >> 1U)) 
                                                           && ((1U 
                                                                & vlSelf->__PVT__if_id_inst_o) 
                                                               && (IData)(vlSelf->__PVT__id0__DOT__i_reg1_re_o)))))
                                                : (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->__PVT__if_id_inst_o 
                                                        >> 3U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelf->__PVT__if_id_inst_o 
                                                            >> 2U))) 
                                                       && ((1U 
                                                            & (vlSelf->__PVT__if_id_inst_o 
                                                               >> 1U)) 
                                                           && (1U 
                                                               & vlSelf->__PVT__if_id_inst_o))))))));
}
