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
    vlSelf->__PVT__id_inst_o = 0U;
    vlSelf->__PVT__exe_reg_we_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                   && ((0x13U == (0x7fU 
                                                  & vlSelf->__PVT__id_exe_inst_o)) 
                                       || (0x33U == 
                                           (0x7fU & vlSelf->__PVT__id_exe_inst_o))));
    vlSelf->__PVT__mem_reg_we_o = ((1U & (~ (IData)(vlSymsp->TOP.rst_i))) 
                                   && (IData)(vlSelf->__PVT__exe_mem_reg_we_o));
    vlSelf->__PVT__exe0__DOT__i_reg_wdata_o = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP.rst_i) | (0x13U 
                                                 != 
                                                 (0x7fU 
                                                  & vlSelf->__PVT__id_exe_inst_o)))))) {
        if ((0x13U == (0x7fU & vlSelf->__PVT__id_exe_inst_o))) {
            if ((0x4000U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe0__DOT__i_reg_wdata_o 
                        = ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                            ? (vlSelf->__PVT__id_exe_op1_o 
                               & vlSelf->__PVT__id_exe_op2_o)
                            : (vlSelf->__PVT__id_exe_op1_o 
                               | vlSelf->__PVT__id_exe_op2_o));
                } else if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((0U == (vlSelf->__PVT__id_exe_inst_o 
                                >> 0x19U))) {
                        vlSelf->__PVT__exe0__DOT__i_reg_wdata_o 
                            = VL_SHIFTR_III(32,32,32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o);
                    } else if ((0x20U == (vlSelf->__PVT__id_exe_inst_o 
                                          >> 0x19U))) {
                        vlSelf->__PVT__exe0__DOT__i_reg_wdata_o 
                            = VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__id_exe_op1_o, 
                                             (0x1fU 
                                              & vlSelf->__PVT__id_exe_op2_o));
                    }
                } else {
                    vlSelf->__PVT__exe0__DOT__i_reg_wdata_o 
                        = (vlSelf->__PVT__id_exe_op1_o 
                           ^ vlSelf->__PVT__id_exe_op2_o);
                }
            } else if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe0__DOT__i_reg_wdata_o 
                    = ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                        ? ((vlSelf->__PVT__id_exe_op1_o 
                            < vlSelf->__PVT__id_exe_op2_o)
                            ? 1U : 0U) : (VL_LTS_III(32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o)
                                           ? 1U : 0U));
            } else if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0U == (vlSelf->__PVT__id_exe_inst_o 
                            >> 0x19U))) {
                    vlSelf->__PVT__exe0__DOT__i_reg_wdata_o 
                        = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o);
                }
            } else {
                vlSelf->__PVT__exe0__DOT__i_reg_wdata_o 
                    = (vlSelf->__PVT__id_exe_op1_o 
                       + vlSelf->__PVT__id_exe_op2_o);
            }
        }
    }
    vlSelf->__PVT__exe0__DOT__r_reg_wdata_o = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP.rst_i) | (~ 
                                                 ((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->__PVT__id_exe_inst_o)) 
                                                  & ((0U 
                                                      == 
                                                      (vlSelf->__PVT__id_exe_inst_o 
                                                       >> 0x19U)) 
                                                     | (0x20U 
                                                        == 
                                                        (vlSelf->__PVT__id_exe_inst_o 
                                                         >> 0x19U))))))))) {
        if ((0x4000U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe0__DOT__r_reg_wdata_o 
                    = ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                        ? (vlSelf->__PVT__id_exe_op1_o 
                           & vlSelf->__PVT__id_exe_op2_o)
                        : (vlSelf->__PVT__id_exe_op1_o 
                           | vlSelf->__PVT__id_exe_op2_o));
            } else if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0U == (vlSelf->__PVT__id_exe_inst_o 
                            >> 0x19U))) {
                    vlSelf->__PVT__exe0__DOT__r_reg_wdata_o 
                        = (vlSelf->__PVT__id_exe_op1_o 
                           >> (0x1fU & vlSelf->__PVT__id_exe_op2_o));
                } else if ((0x20U == (vlSelf->__PVT__id_exe_inst_o 
                                      >> 0x19U))) {
                    vlSelf->__PVT__exe0__DOT__r_reg_wdata_o 
                        = VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__id_exe_op1_o, 
                                         (0x1fU & vlSelf->__PVT__id_exe_op2_o));
                }
            } else {
                vlSelf->__PVT__exe0__DOT__r_reg_wdata_o 
                    = (vlSelf->__PVT__id_exe_op1_o 
                       ^ vlSelf->__PVT__id_exe_op2_o);
            }
        } else if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
            vlSelf->__PVT__exe0__DOT__r_reg_wdata_o 
                = ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                    ? ((vlSelf->__PVT__id_exe_op1_o 
                        < vlSelf->__PVT__id_exe_op2_o)
                        ? 1U : 0U) : (VL_LTS_III(32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o)
                                       ? 1U : 0U));
        } else if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
            vlSelf->__PVT__exe0__DOT__r_reg_wdata_o 
                = (vlSelf->__PVT__id_exe_op1_o << (0x1fU 
                                                   & vlSelf->__PVT__id_exe_op2_o));
        } else if ((0U == (vlSelf->__PVT__id_exe_inst_o 
                           >> 0x19U))) {
            vlSelf->__PVT__exe0__DOT__r_reg_wdata_o 
                = (vlSelf->__PVT__id_exe_op1_o + vlSelf->__PVT__id_exe_op2_o);
        } else if ((0x20U == (vlSelf->__PVT__id_exe_inst_o 
                              >> 0x19U))) {
            vlSelf->__PVT__exe0__DOT__r_reg_wdata_o 
                = (vlSelf->__PVT__id_exe_op1_o - vlSelf->__PVT__id_exe_op2_o);
        }
    }
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__mem_reg_waddr_o = 0U;
        vlSelf->__PVT__mem_reg_wdata_o = 0U;
        vlSelf->__PVT__exe_reg_waddr_o = 0U;
        vlSelf->__PVT__exe_reg_wdata_o = 0U;
    } else {
        vlSelf->__PVT__mem_reg_waddr_o = vlSelf->__PVT__exe_mem_reg_waddr_o;
        vlSelf->__PVT__mem_reg_wdata_o = vlSelf->__PVT__exe_mem_reg_wdata_o;
        if ((0x13U == (0x7fU & vlSelf->__PVT__id_exe_inst_o))) {
            vlSelf->__PVT__exe_reg_waddr_o = vlSelf->__PVT__id_exe_reg_waddr_o;
            vlSelf->__PVT__exe_reg_wdata_o = vlSelf->__PVT__exe0__DOT__i_reg_wdata_o;
        } else if ((0x33U == (0x7fU & vlSelf->__PVT__id_exe_inst_o))) {
            vlSelf->__PVT__exe_reg_waddr_o = vlSelf->__PVT__id_exe_reg_waddr_o;
            vlSelf->__PVT__exe_reg_wdata_o = vlSelf->__PVT__exe0__DOT__r_reg_wdata_o;
        } else {
            vlSelf->__PVT__exe_reg_waddr_o = 0U;
            vlSelf->__PVT__exe_reg_wdata_o = 0U;
        }
    }
    vlSelf->id0__DOT__inst_type_i__DOT____VdfgExtracted_h64b65831__0 
        = ((0U == (vlSelf->__PVT__if_id_inst_o >> 0x19U)) 
           | (0x20U == (vlSelf->__PVT__if_id_inst_o 
                        >> 0x19U)));
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
    vlSelf->__PVT__id_reg_waddr_o = 0U;
    vlSelf->__PVT__id0__DOT__r_reg_we_o = vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0;
    vlSelf->__PVT__id_reg2_addr_o = 0U;
    vlSelf->__PVT__id0__DOT__r_reg2_re_o = vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0;
    vlSelf->__PVT__id_reg1_addr_o = 0U;
    vlSelf->__PVT__id0__DOT__r_reg1_re_o = vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0;
    vlSelf->__PVT__id_reg_we_o = 0U;
    vlSelf->__PVT__id_reg2_re_o = 0U;
    vlSelf->__PVT__id_reg1_re_o = 0U;
    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_i)))) {
        if ((0x13U == (0x7fU & vlSelf->__PVT__if_id_inst_o))) {
            vlSelf->__PVT__id_inst_o = vlSelf->__PVT__if_id_inst_o;
            vlSelf->__PVT__id_reg_waddr_o = vlSelf->__PVT__id0__DOT__i_reg_waddr_o;
            vlSelf->__PVT__id_reg2_addr_o = vlSelf->__PVT__id0__DOT__i_reg2_raddr_o;
            vlSelf->__PVT__id_reg1_addr_o = vlSelf->__PVT__id0__DOT__i_reg1_raddr_o;
            vlSelf->__PVT__id_reg_we_o = vlSelf->__PVT__id0__DOT__i_reg_we_o;
            vlSelf->__PVT__id_reg2_re_o = vlSelf->__PVT__id0__DOT__i_reg2_re_o;
            vlSelf->__PVT__id_reg1_re_o = vlSelf->__PVT__id0__DOT__i_reg1_re_o;
            vlSelf->__PVT__id0__DOT__op2_o_final = 
                ((0x13U == (0x7fU & vlSelf->__PVT__if_id_inst_o))
                  ? ((0x4000U & vlSelf->__PVT__if_id_inst_o)
                      ? ((0x2000U & vlSelf->__PVT__if_id_inst_o)
                          ? (((- (IData)((vlSelf->__PVT__if_id_inst_o 
                                          >> 0x1fU))) 
                              << 0xcU) | (vlSelf->__PVT__if_id_inst_o 
                                          >> 0x14U))
                          : ((0x1000U & vlSelf->__PVT__if_id_inst_o)
                              ? ((IData)(vlSelf->id0__DOT__inst_type_i__DOT____VdfgExtracted_h64b65831__0)
                                  ? (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                              >> 0x14U))
                                  : 0U) : (((- (IData)(
                                                       (vlSelf->__PVT__if_id_inst_o 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelf->__PVT__if_id_inst_o 
                                              >> 0x14U))))
                      : ((0x2000U & vlSelf->__PVT__if_id_inst_o)
                          ? (((- (IData)((vlSelf->__PVT__if_id_inst_o 
                                          >> 0x1fU))) 
                              << 0xcU) | (vlSelf->__PVT__if_id_inst_o 
                                          >> 0x14U))
                          : ((0x1000U & vlSelf->__PVT__if_id_inst_o)
                              ? ((0U == (vlSelf->__PVT__if_id_inst_o 
                                         >> 0x19U))
                                  ? (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                              >> 0x14U))
                                  : 0U) : (((- (IData)(
                                                       (vlSelf->__PVT__if_id_inst_o 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelf->__PVT__if_id_inst_o 
                                              >> 0x14U)))))
                  : 0U);
        } else if ((0x33U == (0x7fU & vlSelf->__PVT__if_id_inst_o))) {
            vlSelf->__PVT__id_inst_o = vlSelf->__PVT__if_id_inst_o;
            vlSelf->__PVT__id_reg_we_o = vlSelf->__PVT__id0__DOT__r_reg_we_o;
            vlSelf->__PVT__id_reg2_re_o = vlSelf->__PVT__id0__DOT__r_reg2_re_o;
            if (vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0) {
                vlSelf->__PVT__id_reg_waddr_o = (0x1fU 
                                                 & (vlSelf->__PVT__if_id_inst_o 
                                                    >> 7U));
                vlSelf->__PVT__id_reg2_addr_o = (0x1fU 
                                                 & (vlSelf->__PVT__if_id_inst_o 
                                                    >> 0x14U));
                vlSelf->__PVT__id_reg1_addr_o = (0x1fU 
                                                 & (vlSelf->__PVT__if_id_inst_o 
                                                    >> 0xfU));
                vlSelf->__PVT__id0__DOT__op2_o_final 
                    = ((0U == (IData)(vlSelf->__PVT__id_reg2_addr_o))
                        ? 0U : (((((IData)(vlSelf->__PVT__id_reg2_addr_o) 
                                   == (IData)(vlSelf->__PVT__mem_wb_reg_waddr_o)) 
                                  & (IData)(vlSelf->__PVT__mem_wb_reg_we_o)) 
                                 & (IData)(vlSelf->__PVT__id_reg2_re_o))
                                 ? vlSelf->__PVT__mem_wb_reg_wdata_o
                                 : ((IData)(vlSelf->__PVT__id_reg2_re_o)
                                     ? vlSymsp->TOP__test_top__regfile0.__PVT__regs
                                    [vlSelf->__PVT__id_reg2_addr_o]
                                     : 0U)));
            } else {
                vlSelf->__PVT__id_reg_waddr_o = 0U;
                vlSelf->__PVT__id_reg2_addr_o = 0U;
                vlSelf->__PVT__id_reg1_addr_o = 0U;
                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
            }
            vlSelf->__PVT__id_reg1_re_o = vlSelf->__PVT__id0__DOT__r_reg1_re_o;
        }
    }
}
