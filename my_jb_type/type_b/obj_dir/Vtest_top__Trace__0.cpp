// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_top__Syms.h"


void Vtest_top___024root__trace_chg_0_sub_0(Vtest_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtest_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_chg_0\n"); );
    // Init
    Vtest_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_top___024root*>(voidSelf);
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtest_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtest_top___024root__trace_chg_0_sub_0(Vtest_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__test_top__regfile0.__PVT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+1,(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o));
        bufp->chgCData(oldp+2,(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o),6);
        bufp->chgIData(oldp+3,(vlSymsp->TOP__test_top__data_ram0.__PVT__data_o),32);
        bufp->chgCData(oldp+4,(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o),5);
        bufp->chgCData(oldp+5,(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o),5);
        bufp->chgBit(oldp+6,(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o));
        bufp->chgIData(oldp+8,(vlSymsp->TOP__test_top.__PVT__id_inst_o),32);
        bufp->chgIData(oldp+9,(((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                  & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                                 & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                    == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                 ? ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))
                                     ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                                     : 0U) : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                                & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                               & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                                  == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                               ? ((0U 
                                                   != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))
                                                   ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                                   : 0U)
                                               : vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final))),32);
        bufp->chgIData(oldp+10,(((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                   & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                                  & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                     == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                  ? ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
                                      ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                                      : 0U) : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                                 & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                                & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                                   == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                                ? (
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
                                                    ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                                    : 0U)
                                                : vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final))),32);
        bufp->chgBit(oldp+11,(vlSymsp->TOP__test_top.__PVT__id_reg_we_o));
        bufp->chgCData(oldp+12,(vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o),5);
        bufp->chgCData(oldp+13,(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o),5);
        bufp->chgBit(oldp+14,(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
        bufp->chgIData(oldp+15,(vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o),32);
        bufp->chgCData(oldp+16,(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o),5);
        bufp->chgBit(oldp+17,(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
        bufp->chgIData(oldp+18,(vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o),32);
        bufp->chgIData(oldp+19,(vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o),32);
        bufp->chgBit(oldp+20,(vlSymsp->TOP__test_top.__PVT__mem_mem_we_o));
        bufp->chgIData(oldp+21,(vlSymsp->TOP__test_top.__PVT__mem_mem_data_o),32);
        bufp->chgIData(oldp+22,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o),32);
        bufp->chgIData(oldp+23,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o),32);
        bufp->chgBit(oldp+24,(vlSymsp->TOP__test_top.__PVT__mem_ram_ce_o));
        bufp->chgIData(oldp+25,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__i_reg_wdata_o),32);
        bufp->chgIData(oldp+26,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o),32);
        bufp->chgBit(oldp+27,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_reg_we_o));
        bufp->chgIData(oldp+28,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_data_o),32);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_addr_o),32);
        bufp->chgBit(oldp+30,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_we_o));
        bufp->chgCData(oldp+31,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_op_o),4);
        bufp->chgIData(oldp+32,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final),32);
        bufp->chgIData(oldp+33,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final),32);
        bufp->chgIData(oldp+34,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o),32);
        bufp->chgIData(oldp+35,(((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0)
                                  ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                  : 0U)),32);
        bufp->chgIData(oldp+36,(((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0)
                                  ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o
                                  : 0U)),32);
        bufp->chgCData(oldp+37,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_inst_o)),7);
        bufp->chgIData(oldp+38,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o)),21);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+39,(vlSymsp->TOP__test_top.__PVT__pc_wire),32);
        bufp->chgBit(oldp+40,(vlSymsp->TOP__test_top.__PVT__ce_wire));
        bufp->chgIData(oldp+41,(vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o),32);
        bufp->chgIData(oldp+42,(vlSymsp->TOP__test_top.__PVT__if_id_inst_o),32);
        bufp->chgBit(oldp+43,(((IData)(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o) 
                               & (((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0xfU)) 
                                   == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o)) 
                                  | ((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                               >> 0x14U)) 
                                     == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o))))));
        bufp->chgIData(oldp+44,(vlSymsp->TOP__test_top.__PVT__id_exe_op1_o),32);
        bufp->chgIData(oldp+45,(vlSymsp->TOP__test_top.__PVT__id_exe_op2_o),32);
        bufp->chgBit(oldp+46,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o));
        bufp->chgCData(oldp+47,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),5);
        bufp->chgIData(oldp+48,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_o),32);
        bufp->chgIData(oldp+49,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o),32);
        bufp->chgBit(oldp+50,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o));
        bufp->chgCData(oldp+51,(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o),5);
        bufp->chgCData(oldp+52,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o),5);
        bufp->chgBit(oldp+53,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
        bufp->chgIData(oldp+54,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o),32);
        bufp->chgIData(oldp+55,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o),32);
        bufp->chgBit(oldp+56,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_we_o));
        bufp->chgIData(oldp+57,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o),32);
        bufp->chgCData(oldp+58,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o),4);
        bufp->chgCData(oldp+59,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o),5);
        bufp->chgBit(oldp+60,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o));
        bufp->chgIData(oldp+61,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o),32);
        bufp->chgCData(oldp+62,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)),7);
        bufp->chgCData(oldp+63,((7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+64,((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                 >> 0x19U)),7);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_jump_addr_o),32);
        bufp->chgBit(oldp+66,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_jump_enable_o));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned));
        bufp->chgIData(oldp+70,((((- (IData)((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0x800U 
                                               & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                       >> 7U)))))),32);
        bufp->chgIData(oldp+71,((((- (IData)((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o) 
                                               | ((0x800U 
                                                   & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                        >> 0x14U)))))),32);
        bufp->chgIData(oldp+72,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_i0__DOT__sr_shift),32);
        bufp->chgIData(oldp+73,((0xffffffffU >> (0x1fU 
                                                 & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))),32);
        bufp->chgBit(oldp+74,((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r));
        bufp->chgIData(oldp+76,((((- (IData)((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                              >> 0x14U))),32);
        bufp->chgIData(oldp+77,((((- (IData)((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                    >> 7U))))),32);
        bufp->chgCData(oldp+78,((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+79,((0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)),7);
        bufp->chgCData(oldp+80,((7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+81,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                          >> 7U))),5);
        bufp->chgCData(oldp+82,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+83,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+84,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o),5);
        bufp->chgCData(oldp+85,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_raddr_o),5);
        bufp->chgBit(oldp+86,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_re_o));
        bufp->chgIData(oldp+88,(((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                  ? ((0x4000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                      ? ((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                          ? (((- (IData)(
                                                         (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0x14U))
                                          : ((0x1000U 
                                              & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                              ? ((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_i__DOT____VdfgExtracted_h64b65831__0)
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0x14U))
                                                  : 0U)
                                              : (((- (IData)(
                                                             (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                    >> 0x14U))))
                                      : ((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                          ? (((- (IData)(
                                                         (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0x14U))
                                          : ((0x1000U 
                                              & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                              ? ((0U 
                                                  == 
                                                  (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 0x19U))
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0x14U))
                                                  : 0U)
                                              : (((- (IData)(
                                                             (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                    >> 0x14U)))))
                                  : 0U)),32);
        bufp->chgBit(oldp+89,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o));
        bufp->chgCData(oldp+90,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o),5);
        bufp->chgCData(oldp+91,(((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0)
                                  ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                              >> 0xfU))
                                  : 0U)),5);
        bufp->chgCData(oldp+92,(((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0)
                                  ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                              >> 0x14U))
                                  : 0U)),5);
        bufp->chgBit(oldp+93,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg1_re_o));
        bufp->chgBit(oldp+94,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg2_re_o));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o));
        bufp->chgCData(oldp+96,(((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0)
                                  ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                              >> 7U))
                                  : 0U)),5);
        bufp->chgBit(oldp+97,((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))));
        bufp->chgBit(oldp+98,(((0x33U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) 
                               & (IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_i__DOT____VdfgExtracted_h64b65831__0))));
        bufp->chgBit(oldp+99,((IData)((0x2000033U == 
                                       (0xfe00007fU 
                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)))));
        bufp->chgCData(oldp+100,((3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)),2);
        bufp->chgIData(oldp+101,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[0]),32);
        bufp->chgIData(oldp+102,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[1]),32);
        bufp->chgIData(oldp+103,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[2]),32);
        bufp->chgIData(oldp+104,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[3]),32);
        bufp->chgIData(oldp+105,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[4]),32);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[5]),32);
        bufp->chgIData(oldp+107,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[6]),32);
        bufp->chgIData(oldp+108,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[7]),32);
        bufp->chgIData(oldp+109,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[8]),32);
        bufp->chgIData(oldp+110,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[9]),32);
        bufp->chgIData(oldp+111,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[10]),32);
        bufp->chgIData(oldp+112,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[11]),32);
        bufp->chgIData(oldp+113,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[12]),32);
        bufp->chgIData(oldp+114,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[13]),32);
        bufp->chgIData(oldp+115,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[14]),32);
        bufp->chgIData(oldp+116,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[15]),32);
        bufp->chgIData(oldp+117,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[16]),32);
        bufp->chgIData(oldp+118,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[17]),32);
        bufp->chgIData(oldp+119,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[18]),32);
        bufp->chgIData(oldp+120,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[19]),32);
        bufp->chgIData(oldp+121,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[20]),32);
        bufp->chgIData(oldp+122,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[21]),32);
        bufp->chgIData(oldp+123,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[22]),32);
        bufp->chgIData(oldp+124,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[23]),32);
        bufp->chgIData(oldp+125,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[24]),32);
        bufp->chgIData(oldp+126,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[25]),32);
        bufp->chgIData(oldp+127,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[26]),32);
        bufp->chgIData(oldp+128,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[27]),32);
        bufp->chgIData(oldp+129,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[28]),32);
        bufp->chgIData(oldp+130,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[29]),32);
        bufp->chgIData(oldp+131,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[30]),32);
        bufp->chgIData(oldp+132,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[31]),32);
        bufp->chgIData(oldp+133,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)),21);
    }
    bufp->chgBit(oldp+134,(vlSelf->rst_i));
    bufp->chgBit(oldp+135,(vlSelf->clk_i));
    bufp->chgIData(oldp+136,(((IData)(vlSymsp->TOP__test_top.__PVT__ce_wire)
                               ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                   [(0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)] 
                                   << 0x18U) | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                 [(0x1fffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0x1ffffcU 
                                                       & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                                 << 0x10U) 
                                                | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                    [
                                                    (0x1fffffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x1ffffcU 
                                                         & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                                    << 8U) 
                                                   | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                   [
                                                   (0x1fffffU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       (0x1ffffcU 
                                                        & vlSymsp->TOP__test_top.__PVT__pc_wire)))])))
                               : 0U)),32);
    bufp->chgIData(oldp+137,(((IData)(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o)
                               ? ((IData)(vlSelf->rst_i)
                                   ? 0U : ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                            ? ((0x20U 
                                                & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                ? (
                                                   (0x10U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                        ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_jump_addr_o
                                                        : 0U)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                        ? 
                                                       (0xfffffffeU 
                                                        & (vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_jump_addr_o 
                                                           + vlSymsp->TOP__test_top.__PVT__id_exe_op1_o))
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                        ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_jump_addr_o
                                                        : 0U)
                                                       : 0U))))
                                                : 0U)
                                            : 0U)) : 0U)),32);
    bufp->chgIData(oldp+138,(((IData)(vlSelf->rst_i)
                               ? 0U : ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                        ? 0U : ((0x20U 
                                                 & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                 ? 
                                                ((0x10U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_addr_o
                                                      : 0U)
                                                     : 0U))))
                                                 : 
                                                ((0x10U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_addr_o
                                                      : 0U)
                                                     : 0U)))))))),32);
    bufp->chgBit(oldp+139,(((1U & (~ (IData)(vlSelf->rst_i))) 
                            && ((1U & (~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                          >> 6U))) 
                                && ((0x20U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                     ? ((1U & (~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                  >> 4U))) 
                                        && ((1U & (~ 
                                                   (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                    >> 3U))) 
                                            && ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                     >> 2U))) 
                                                && ((1U 
                                                     & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                        >> 1U)) 
                                                    && ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o) 
                                                        && (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_we_o))))))
                                     : ((1U & (~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                  >> 4U))) 
                                        && ((1U & (~ 
                                                   (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                    >> 3U))) 
                                            && ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                     >> 2U))) 
                                                && ((1U 
                                                     & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                        >> 1U)) 
                                                    && ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o) 
                                                        && (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_we_o)))))))))));
    bufp->chgIData(oldp+140,(((IData)(vlSelf->rst_i)
                               ? 0U : ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                        ? 0U : ((0x20U 
                                                 & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                 ? 
                                                ((0x10U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_data_o
                                                      : 0U)
                                                     : 0U))))
                                                 : 
                                                ((0x10U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_data_o
                                                      : 0U)
                                                     : 0U)))))))),32);
    bufp->chgCData(oldp+141,(((IData)(vlSelf->rst_i)
                               ? 0U : ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                        ? 0U : ((0x20U 
                                                 & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                 ? 
                                                ((0x10U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_op_o)
                                                      : 0U)
                                                     : 0U))))
                                                 : 
                                                ((0x10U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_op_o)
                                                      : 0U)
                                                     : 0U)))))))),4);
    bufp->chgIData(oldp+142,(((IData)(vlSelf->rst_i)
                               ? 0U : ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                        ? ((0x20U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                            ? ((0x10U 
                                                & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                ? 0U
                                                : (
                                                   (8U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_jump_addr_o
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? 
                                                      (0xfffffffeU 
                                                       & (vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_jump_addr_o 
                                                          + vlSymsp->TOP__test_top.__PVT__id_exe_op1_o))
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_jump_addr_o
                                                       : 0U)
                                                      : 0U))))
                                            : 0U) : 0U))),32);
    bufp->chgBit(oldp+143,(((1U & (~ ((IData)(vlSelf->rst_i) 
                                      | (0x13U != (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))))) 
                            && ((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) 
                                && ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                     ? ((1U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                               >> 0xdU)) 
                                        || ((1U & (~ 
                                                   (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                    >> 0xcU))) 
                                            || ((0U 
                                                 == 
                                                 (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                  >> 0x19U)) 
                                                || (0x20U 
                                                    == 
                                                    (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                     >> 0x19U)))))
                                     : ((1U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                               >> 0xdU)) 
                                        || ((1U & (~ 
                                                   (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                    >> 0xcU))) 
                                            || (0U 
                                                == 
                                                (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                 >> 0x19U)))))))));
    bufp->chgBit(oldp+144,(((1U & (~ ((IData)(vlSelf->rst_i) 
                                      | (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r))))) 
                            && ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                 ? ((1U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0xdU)) 
                                    || ((1U & (~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                  >> 0xcU))) 
                                        || ((0U == 
                                             (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                              >> 0x19U)) 
                                            || (0x20U 
                                                == 
                                                (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                 >> 0x19U)))))
                                 : ((1U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0xdU)) 
                                    || ((1U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                               >> 0xcU)) 
                                        || ((0U == 
                                             (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                              >> 0x19U)) 
                                            || (0x20U 
                                                == 
                                                (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                 >> 0x19U)))))))));
}

void Vtest_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_cleanup\n"); );
    // Init
    Vtest_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_top___024root*>(voidSelf);
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
