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
        bufp->chgCData(oldp+1,(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o),5);
        bufp->chgBit(oldp+2,(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o));
        bufp->chgIData(oldp+3,(((0U == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))
                                 ? 0U : (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o) 
                                            == (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)) 
                                           & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                                          & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o))
                                          ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                                          : ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o)
                                              ? vlSymsp->TOP__test_top__regfile0.__PVT__regs
                                             [vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o]
                                              : 0U)))),32);
        bufp->chgCData(oldp+4,(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o),5);
        bufp->chgBit(oldp+5,(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
        bufp->chgIData(oldp+6,(vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o),32);
        bufp->chgCData(oldp+7,(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o),5);
        bufp->chgBit(oldp+8,(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
        bufp->chgIData(oldp+9,(vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+10,(vlSymsp->TOP__test_top.__PVT__pc_wire),32);
        bufp->chgBit(oldp+11,(vlSymsp->TOP__test_top.__PVT__ce_wire));
        bufp->chgIData(oldp+12,(vlSymsp->TOP__test_top__rom0.__PVT__inst_o),32);
        bufp->chgIData(oldp+13,(vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o),32);
        bufp->chgIData(oldp+14,(vlSymsp->TOP__test_top.__PVT__if_id_inst_o),32);
        bufp->chgIData(oldp+15,(vlSymsp->TOP__test_top.__PVT__id_exe_op1_o),32);
        bufp->chgIData(oldp+16,(vlSymsp->TOP__test_top.__PVT__id_exe_op2_o),32);
        bufp->chgBit(oldp+17,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o));
        bufp->chgCData(oldp+18,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),5);
        bufp->chgIData(oldp+19,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_o),32);
        bufp->chgCData(oldp+20,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o),5);
        bufp->chgBit(oldp+21,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
        bufp->chgIData(oldp+22,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o),32);
        bufp->chgCData(oldp+23,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o),5);
        bufp->chgBit(oldp+24,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o));
        bufp->chgIData(oldp+25,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o),32);
        bufp->chgCData(oldp+26,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)),7);
        bufp->chgCData(oldp+27,((7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+28,((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+29,((0x1fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+30,((0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)),7);
        bufp->chgCData(oldp+31,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                          >> 0xfU))),5);
        bufp->chgIData(oldp+32,((((- (IData)((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                              >> 0x14U))),32);
        bufp->chgCData(oldp+33,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                          >> 7U))),5);
        bufp->chgCData(oldp+34,((7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+35,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+36,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)),21);
        bufp->chgIData(oldp+37,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[0]),32);
        bufp->chgIData(oldp+38,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[1]),32);
        bufp->chgIData(oldp+39,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[2]),32);
        bufp->chgIData(oldp+40,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[3]),32);
        bufp->chgIData(oldp+41,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[4]),32);
        bufp->chgIData(oldp+42,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[5]),32);
        bufp->chgIData(oldp+43,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[6]),32);
        bufp->chgIData(oldp+44,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[7]),32);
        bufp->chgIData(oldp+45,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[8]),32);
        bufp->chgIData(oldp+46,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[9]),32);
        bufp->chgIData(oldp+47,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[10]),32);
        bufp->chgIData(oldp+48,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[11]),32);
        bufp->chgIData(oldp+49,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[12]),32);
        bufp->chgIData(oldp+50,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[13]),32);
        bufp->chgIData(oldp+51,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[14]),32);
        bufp->chgIData(oldp+52,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[15]),32);
        bufp->chgIData(oldp+53,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[16]),32);
        bufp->chgIData(oldp+54,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[17]),32);
        bufp->chgIData(oldp+55,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[18]),32);
        bufp->chgIData(oldp+56,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[19]),32);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[20]),32);
        bufp->chgIData(oldp+58,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[21]),32);
        bufp->chgIData(oldp+59,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[22]),32);
        bufp->chgIData(oldp+60,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[23]),32);
        bufp->chgIData(oldp+61,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[24]),32);
        bufp->chgIData(oldp+62,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[25]),32);
        bufp->chgIData(oldp+63,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[26]),32);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[27]),32);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[28]),32);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[29]),32);
        bufp->chgIData(oldp+67,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[30]),32);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[31]),32);
    }
    bufp->chgBit(oldp+69,(vlSelf->rst_i));
    bufp->chgBit(oldp+70,(vlSelf->clk_i));
    bufp->chgIData(oldp+71,(((IData)(vlSelf->rst_i)
                              ? 0U : ((0x13U == (0x7fU 
                                                 & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                       ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                       : 0U))),32);
    bufp->chgIData(oldp+72,(((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                               & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                              & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                 == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                              ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                              : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                   & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                  & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                     == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                  ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                  : ((IData)(vlSelf->rst_i)
                                      ? 0U : ((0x13U 
                                               == (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                               ? ((0U 
                                                   == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))
                                                   ? 0U
                                                   : 
                                                  (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o) 
                                                      == (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)) 
                                                     & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                                                    & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o))
                                                    ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                                                    : 
                                                   ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o)
                                                     ? 
                                                    vlSymsp->TOP__test_top__regfile0.__PVT__regs
                                                    [vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o]
                                                     : 0U)))
                                               : 0U))))),32);
    bufp->chgIData(oldp+73,(((IData)(vlSelf->rst_i)
                              ? 0U : ((0x13U == (0x7fU 
                                                 & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                       ? (((- (IData)(
                                                      (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0x14U))
                                       : 0U))),32);
    bufp->chgBit(oldp+74,(((1U & (~ (IData)(vlSelf->rst_i))) 
                           && (0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)))));
    bufp->chgCData(oldp+75,(((IData)(vlSelf->rst_i)
                              ? 0U : ((0x13U == (0x7fU 
                                                 & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                       ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 7U))
                                       : 0U))),5);
    bufp->chgIData(oldp+76,(((IData)(vlSelf->rst_i)
                              ? 0U : ((0x13U == (0x7fU 
                                                 & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                       ? ((0U == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))
                                           ? 0U : (
                                                   ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o) 
                                                      == (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)) 
                                                     & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                                                    & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o))
                                                    ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                                                    : 
                                                   ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o)
                                                     ? 
                                                    vlSymsp->TOP__test_top__regfile0.__PVT__regs
                                                    [vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o]
                                                     : 0U)))
                                       : 0U))),32);
    bufp->chgIData(oldp+77,(vlSymsp->TOP__test_top__rom0.__PVT__writeByte__Vstatic__unnamedblk1__DOT__t_addr),32);
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
