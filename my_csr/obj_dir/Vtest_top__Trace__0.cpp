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
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[0]),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[1]),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[2]),32);
        bufp->chgIData(oldp+3,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[0]),32);
        bufp->chgIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[1]),32);
        bufp->chgIData(oldp+5,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[2]),32);
        bufp->chgIData(oldp+6,(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd),32);
        bufp->chgIData(oldp+7,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+8,(vlSymsp->TOP__test_top.__PVT__host_req[0]));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__test_top.__PVT__host_gnt[0]));
        bufp->chgIData(oldp+10,(vlSymsp->TOP__test_top.__PVT__host_addr[0]),32);
        bufp->chgBit(oldp+11,(vlSymsp->TOP__test_top.__PVT__host_we[0]));
        bufp->chgIData(oldp+12,(vlSymsp->TOP__test_top.__PVT__host_wdata[0]),32);
        bufp->chgIData(oldp+13,(vlSymsp->TOP__test_top.__PVT__host_rdata[0]),32);
        bufp->chgBit(oldp+14,(vlSymsp->TOP__test_top.__PVT__device_req[0]));
        bufp->chgBit(oldp+15,(vlSymsp->TOP__test_top.__PVT__device_req[1]));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__test_top.__PVT__device_req[2]));
        bufp->chgIData(oldp+17,(vlSymsp->TOP__test_top.__PVT__device_addr[0]),32);
        bufp->chgIData(oldp+18,(vlSymsp->TOP__test_top.__PVT__device_addr[1]),32);
        bufp->chgIData(oldp+19,(vlSymsp->TOP__test_top.__PVT__device_addr[2]),32);
        bufp->chgBit(oldp+20,(vlSymsp->TOP__test_top.__PVT__device_we[0]));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__test_top.__PVT__device_we[1]));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__test_top.__PVT__device_we[2]));
        bufp->chgIData(oldp+23,(vlSymsp->TOP__test_top.__PVT__device_wdata[0]),32);
        bufp->chgIData(oldp+24,(vlSymsp->TOP__test_top.__PVT__device_wdata[1]),32);
        bufp->chgIData(oldp+25,(vlSymsp->TOP__test_top.__PVT__device_wdata[2]),32);
        bufp->chgIData(oldp+26,(vlSymsp->TOP__test_top.__PVT__device_rdata[0]),32);
        bufp->chgIData(oldp+27,(vlSymsp->TOP__test_top.__PVT__device_rdata[1]),32);
        bufp->chgIData(oldp+28,(vlSymsp->TOP__test_top.__PVT__device_rdata[2]),32);
        bufp->chgBit(oldp+29,(vlSymsp->TOP__test_top.__PVT__device_req
                              [0U]));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__test_top.__PVT__device_we
                              [0U]));
        bufp->chgIData(oldp+31,(vlSymsp->TOP__test_top.__PVT__device_addr
                                [0U]),32);
        bufp->chgIData(oldp+32,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                [0U]),32);
        bufp->chgIData(oldp+33,(vlSymsp->TOP__test_top.__Vcellout__clint0__data_o),32);
        bufp->chgSData(oldp+34,((0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                 [0U])),16);
        bufp->chgBit(oldp+35,((0xbff8U == (0xffffU 
                                           & vlSymsp->TOP__test_top.__PVT__device_addr
                                           [0U]))));
        bufp->chgBit(oldp+36,((0xbffcU == (0xffffU 
                                           & vlSymsp->TOP__test_top.__PVT__device_addr
                                           [0U]))));
        bufp->chgBit(oldp+37,((0x4000U == (0xffffU 
                                           & vlSymsp->TOP__test_top.__PVT__device_addr
                                           [0U]))));
        bufp->chgBit(oldp+38,((0x4004U == (0xffffU 
                                           & vlSymsp->TOP__test_top.__PVT__device_addr
                                           [0U]))));
        bufp->chgBit(oldp+39,((0U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                      [0U]))));
        bufp->chgBit(oldp+40,(vlSymsp->TOP__test_top.__PVT__device_req
                              [2U]));
        bufp->chgBit(oldp+41,(vlSymsp->TOP__test_top.__PVT__device_we
                              [2U]));
        bufp->chgIData(oldp+42,(vlSymsp->TOP__test_top.__PVT__device_addr
                                [2U]),32);
        bufp->chgIData(oldp+43,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                [2U]),32);
        bufp->chgCData(oldp+44,((0xffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                 [2U])),8);
        bufp->chgBit(oldp+45,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req));
        bufp->chgCData(oldp+46,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req),2);
        bufp->chgCData(oldp+47,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_resp),2);
        bufp->chgBit(oldp+48,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o));
        bufp->chgIData(oldp+49,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o),32);
        bufp->chgIData(oldp+50,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_data_o),32);
        bufp->chgIData(oldp+51,(vlSymsp->TOP__test_top.__PVT__host_rdata
                                [0U]),32);
        bufp->chgBit(oldp+52,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o));
        bufp->chgIData(oldp+53,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_o),32);
        bufp->chgBit(oldp+54,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o));
        bufp->chgIData(oldp+55,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_new_pc_o),32);
        bufp->chgCData(oldp+56,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o),6);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_pc_o),32);
        bufp->chgCData(oldp+58,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o),5);
        bufp->chgCData(oldp+59,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o),5);
        bufp->chgBit(oldp+60,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o));
        bufp->chgIData(oldp+62,(vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o),32);
        bufp->chgIData(oldp+63,(((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)) 
                                  & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o) 
                                     == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o)))
                                  ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o))
                                      ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o
                                      : 0U) : ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
                                                 & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)) 
                                                & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o) 
                                                   == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o)))
                                                ? (
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o))
                                                    ? vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata
                                                    : 0U)
                                                : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final))),32);
        bufp->chgIData(oldp+64,(((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)) 
                                  & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o) 
                                     == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                                  ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o))
                                      ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o
                                      : 0U) : ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                                 & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)) 
                                                & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o) 
                                                   == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                                                ? (
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o))
                                                    ? vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata
                                                    : 0U)
                                                : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final))),32);
        bufp->chgBit(oldp+65,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o));
        bufp->chgCData(oldp+66,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o),5);
        bufp->chgBit(oldp+67,(vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o));
        bufp->chgSData(oldp+68,(vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_addr_o),12);
        bufp->chgIData(oldp+69,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall) 
                                  << 1U) | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret))),32);
        bufp->chgCData(oldp+70,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o),5);
        bufp->chgBit(oldp+71,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o));
        bufp->chgIData(oldp+72,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o),32);
        bufp->chgIData(oldp+73,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o),32);
        bufp->chgBit(oldp+74,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o));
        bufp->chgIData(oldp+75,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o),32);
        bufp->chgCData(oldp+76,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o),4);
        bufp->chgBit(oldp+77,((((~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i)) 
                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o)) 
                               | ((~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i)) 
                                  & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o)))));
        bufp->chgIData(oldp+78,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o),32);
        bufp->chgBit(oldp+79,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_we_o));
        bufp->chgIData(oldp+80,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_wdata_o),32);
        bufp->chgCData(oldp+81,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o),5);
        bufp->chgBit(oldp+82,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o));
        bufp->chgIData(oldp+83,(vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata),32);
        bufp->chgBit(oldp+84,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_we_o));
        bufp->chgSData(oldp+85,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_waddr_o),12);
        bufp->chgIData(oldp+86,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_wdata_o),32);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o),32);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o),32);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__i_reg_wdata_o),32);
        bufp->chgIData(oldp+90,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__r_reg_wdata_o),32);
        bufp->chgBit(oldp+91,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_reg_we_o));
        bufp->chgIData(oldp+92,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_data_o),32);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_addr_o),32);
        bufp->chgBit(oldp+94,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_we_o));
        bufp->chgCData(oldp+95,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_op_o),4);
        bufp->chgIData(oldp+96,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_reg_wdata_o),32);
        bufp->chgIData(oldp+97,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_reg_wdata_o),32);
        bufp->chgIData(oldp+98,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_csr_wdata_o),32);
        bufp->chgIData(oldp+99,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__csr_rdata),32);
        bufp->chgIData(oldp+100,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o),32);
        bufp->chgIData(oldp+101,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o),32);
        bufp->chgBit(oldp+102,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o));
        bufp->chgIData(oldp+105,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__result),32);
        bufp->chgQData(oldp+106,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__invert_result),64);
        bufp->chgBit(oldp+108,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o)));
        bufp->chgBit(oldp+109,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)));
        bufp->chgCData(oldp+110,(((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
                                   ? ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o)
                                       ? (((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o) 
                                           | (0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o))
                                           ? 3U : 1U)
                                       : 0U) : ((1U 
                                                 == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
                                                 ? 
                                                ((0U 
                                                  != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt))
                                                  ? 1U
                                                  : 3U)
                                                 : 0U))),3);
        bufp->chgBit(oldp+111,((1U & (~ (IData)((0U 
                                                 != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o))))));
        bufp->chgBit(oldp+112,((1U & (~ (IData)((0U 
                                                 != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o))))));
        bufp->chgCData(oldp+113,(((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S))
                                   ? ((1U & ((~ (IData)(
                                                        (0U 
                                                         != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o))) 
                                             | (~ (IData)(
                                                          (0U 
                                                           != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)))))
                                       ? 3U : 1U) : 
                                  ((1U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S))
                                    ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt))
                                        ? 1U : 3U) : 0U))),3);
        bufp->chgBit(oldp+114,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall));
        bufp->chgIData(oldp+116,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final),32);
        bufp->chgIData(oldp+117,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final),32);
        bufp->chgIData(oldp+118,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op1_o),32);
        bufp->chgIData(oldp+119,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0)
                                   ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                   : 0U)),32);
        bufp->chgIData(oldp+120,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0)
                                   ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o
                                   : 0U)),32);
        bufp->chgCData(oldp+121,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o)),7);
        bufp->chgBit(oldp+122,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o) 
                                | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o))));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__test_top.__PVT__device_req
                               [1U]));
        bufp->chgIData(oldp+124,(vlSymsp->TOP__test_top.__PVT__device_addr
                                 [1U]),32);
        bufp->chgBit(oldp+125,(vlSymsp->TOP__test_top.__PVT__device_we
                               [1U]));
        bufp->chgIData(oldp+126,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                 [1U]),32);
        bufp->chgIData(oldp+127,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__device_addr
                                  [1U])),21);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+128,(vlSymsp->TOP__test_top.__PVT__halt_from_console));
        bufp->chgBit(oldp+129,((0U != vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem)));
        bufp->chgBit(oldp+130,(((~ (IData)((((((QData)((IData)(
                                                               vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                               [1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                [0U]))) 
                                             - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp) 
                                            >> 0x3fU))) 
                                & (0ULL != vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp))));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire));
        bufp->chgIData(oldp+132,(vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire),32);
        bufp->chgIData(oldp+133,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[0]),32);
        bufp->chgIData(oldp+134,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[1]),32);
        bufp->chgIData(oldp+135,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[0]),32);
        bufp->chgIData(oldp+136,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[1]),32);
        bufp->chgIData(oldp+137,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem),32);
        bufp->chgQData(oldp+138,((((QData)((IData)(
                                                   vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                   [1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                               [0U])))),64);
        bufp->chgQData(oldp+140,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp),64);
        bufp->chgQData(oldp+142,((QData)((IData)(vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem))),64);
        bufp->chgBit(oldp+144,((0xffffffffU == vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                [0U])));
        bufp->chgQData(oldp+145,(((((QData)((IData)(
                                                    vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                    [1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                [0U]))) 
                                  - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp)),64);
        bufp->chgBit(oldp+147,((1U & (~ (IData)((((
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                    [1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                     [0U]))) 
                                                  - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp) 
                                                 >> 0x3fU))))));
        bufp->chgBit(oldp+148,((0ULL == vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp)));
        bufp->chgCData(oldp+149,(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish),3);
        bufp->chgBit(oldp+150,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_cause_we_o));
        bufp->chgCData(oldp+153,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o),4);
        bufp->chgBit(oldp+154,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_we_o));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_clear_o));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_set_o));
        bufp->chgIData(oldp+157,(((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                   ? ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                       ? 0U : ((2U 
                                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                                    ? 0U
                                                    : vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mepc)))
                                   : ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                       ? ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec)
                                                      ? 
                                                     ((0xfffffffcU 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec) 
                                                      + 
                                                      ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                                       << 2U))
                                                      : 
                                                     (0xfffffffcU 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))
                                                     : 
                                                    (0xfffffffcU 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))))
                                       : 0U))),32);
        bufp->chgIData(oldp+158,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o),32);
        bufp->chgIData(oldp+159,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o),32);
        bufp->chgBit(oldp+160,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o) 
                                & (((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                              >> 0xfU)) 
                                    == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o)) 
                                   | ((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0x14U)) 
                                      == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o))))));
        bufp->chgIData(oldp+161,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o),32);
        bufp->chgIData(oldp+162,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o),32);
        bufp->chgBit(oldp+163,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o));
        bufp->chgCData(oldp+164,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o),5);
        bufp->chgIData(oldp+165,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o),32);
        bufp->chgIData(oldp+166,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o),32);
        bufp->chgBit(oldp+167,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o));
        bufp->chgCData(oldp+168,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o),5);
        bufp->chgBit(oldp+169,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_we_o));
        bufp->chgSData(oldp+170,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o),12);
        bufp->chgIData(oldp+171,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_exception_o),32);
        bufp->chgCData(oldp+172,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_waddr_o),5);
        bufp->chgBit(oldp+173,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_we_o));
        bufp->chgIData(oldp+174,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_wdata_o),32);
        bufp->chgIData(oldp+175,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o),32);
        bufp->chgBit(oldp+176,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we_o));
        bufp->chgIData(oldp+177,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o),32);
        bufp->chgCData(oldp+178,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o),4);
        bufp->chgBit(oldp+179,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_we_o));
        bufp->chgSData(oldp+180,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_waddr_o),12);
        bufp->chgIData(oldp+181,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_wdata_o),32);
        bufp->chgIData(oldp+182,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_inst_addr_o),32);
        bufp->chgIData(oldp+183,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o),32);
        bufp->chgCData(oldp+184,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o),5);
        bufp->chgBit(oldp+185,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_we_o));
        bufp->chgIData(oldp+186,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_wdata_o),32);
        bufp->chgBit(oldp+187,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o));
        bufp->chgSData(oldp+188,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o),12);
        bufp->chgIData(oldp+189,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o),32);
        bufp->chgBit(oldp+190,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_instret_incr_o));
        bufp->chgIData(oldp+191,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file_csr_rdata_o),32);
        bufp->chgBit(oldp+192,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie));
        bufp->chgBit(oldp+193,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_external));
        bufp->chgBit(oldp+194,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_timer));
        bufp->chgBit(oldp+195,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_software));
        bufp->chgBit(oldp+196,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_external));
        bufp->chgBit(oldp+197,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_timer));
        bufp->chgBit(oldp+198,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_software));
        bufp->chgIData(oldp+199,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec),32);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mepc),32);
        bufp->chgQData(oldp+201,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mcycle),64);
        bufp->chgQData(oldp+203,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__minstret),64);
        bufp->chgIData(oldp+205,((0x1800U | (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mpie) 
                                              << 7U) 
                                             | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie) 
                                                << 3U)))),32);
        bufp->chgBit(oldp+206,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mpie));
        bufp->chgBit(oldp+207,(((0x300U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
        bufp->chgIData(oldp+208,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_external) 
                                   << 0xbU) | (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_timer) 
                                                << 7U) 
                                               | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_software) 
                                                  << 3U)))),32);
        bufp->chgBit(oldp+209,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_mie));
        bufp->chgBit(oldp+210,(((0x305U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
        bufp->chgIData(oldp+211,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mscratch),32);
        bufp->chgBit(oldp+212,(((0x340U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
        bufp->chgBit(oldp+213,(((0x341U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
        bufp->chgIData(oldp+214,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__interrupt_type) 
                                   << 0x1fU) | ((vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause_rem 
                                                 << 4U) 
                                                | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause)))),32);
        bufp->chgCData(oldp+215,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause),4);
        bufp->chgIData(oldp+216,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause_rem),27);
        bufp->chgBit(oldp+217,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__interrupt_type));
        bufp->chgBit(oldp+218,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_mcause));
        bufp->chgIData(oldp+219,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_external) 
                                   << 0xbU) | (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_timer) 
                                                << 7U) 
                                               | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_software) 
                                                  << 3U)))),32);
        bufp->chgIData(oldp+220,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtval),32);
        bufp->chgBit(oldp+221,(((0x343U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
        bufp->chgIData(oldp+222,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl0__DOT__current_pc),32);
        bufp->chgCData(oldp+223,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)),7);
        bufp->chgCData(oldp+224,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+225,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 0x19U)),7);
        bufp->chgIData(oldp+226,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o),32);
        bufp->chgBit(oldp+227,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_enable_o));
        bufp->chgBit(oldp+228,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2));
        bufp->chgBit(oldp+229,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed));
        bufp->chgBit(oldp+230,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned));
        bufp->chgIData(oldp+231,((((- (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0x800U 
                                                & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                        >> 7U)))))),32);
        bufp->chgIData(oldp+232,((((- (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o) 
                                                | ((0x800U 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                         >> 0x14U)))))),32);
        bufp->chgIData(oldp+233,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_i0__DOT__sr_shift),32);
        bufp->chgIData(oldp+234,((0xffffffffU >> (0x1fU 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))),32);
        bufp->chgBit(oldp+235,((0x13U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))));
        bufp->chgBit(oldp+236,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m));
        bufp->chgIData(oldp+237,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result),32);
        bufp->chgBit(oldp+238,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i));
        bufp->chgBit(oldp+239,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i));
        bufp->chgQData(oldp+240,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i),64);
        bufp->chgBit(oldp+242,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                >> 0x1fU)));
        bufp->chgBit(oldp+243,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o 
                                >> 0x1fU)));
        bufp->chgBit(oldp+244,((1U & (~ (IData)((0U 
                                                 != vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))))));
        bufp->chgBit(oldp+245,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust));
        bufp->chgBit(oldp+246,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt)))))));
        bufp->chgIData(oldp+247,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32),32);
        bufp->chgWData(oldp+248,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result),65);
        bufp->chgCData(oldp+251,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt),6);
        bufp->chgIData(oldp+252,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U]),32);
        bufp->chgIData(oldp+253,(((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
                                   << 0x1fU) | (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                                                >> 1U))),32);
        bufp->chgCData(oldp+254,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S),3);
        bufp->chgBit(oldp+255,((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                                >= vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)));
        bufp->chgQData(oldp+256,((0x1ffffffffULL & 
                                  ((QData)((IData)(
                                                   vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                   - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32))))),33);
        __Vtemp_1[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U];
        __Vtemp_1[1U] = (IData)((0x1ffffffffULL & ((QData)((IData)(
                                                                   vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                                   - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)))));
        __Vtemp_1[2U] = (IData)(((0x1ffffffffULL & 
                                  ((QData)((IData)(
                                                   vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                   - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)))) 
                                 >> 0x20U));
        bufp->chgWData(oldp+258,(__Vtemp_1),65);
        bufp->chgBit(oldp+261,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt)))))));
        bufp->chgIData(oldp+262,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32),32);
        bufp->chgWData(oldp+263,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result),65);
        bufp->chgCData(oldp+266,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt),6);
        bufp->chgCData(oldp+267,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S),3);
        bufp->chgBit(oldp+268,((1U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U])));
        bufp->chgIData(oldp+269,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U]),32);
        bufp->chgQData(oldp+270,((0x1ffffffffULL & 
                                  ((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32)) 
                                   + (QData)((IData)(
                                                     vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U]))))),33);
        __Vtemp_2[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U];
        __Vtemp_2[1U] = (IData)((0x1ffffffffULL & ((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32)) 
                                                   + (QData)((IData)(
                                                                     vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U])))));
        __Vtemp_2[2U] = (IData)(((0x1ffffffffULL & 
                                  ((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32)) 
                                   + (QData)((IData)(
                                                     vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U])))) 
                                 >> 0x20U));
        bufp->chgWData(oldp+272,(__Vtemp_2),65);
        bufp->chgBit(oldp+275,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r));
        bufp->chgIData(oldp+276,((((- (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x1fU))) 
                                   << 0xcU) | (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x14U))),32);
        bufp->chgIData(oldp+277,((((- (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 7U))))),32);
        bufp->chgBit(oldp+278,((0x73U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))));
        bufp->chgCData(oldp+279,((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+280,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)),7);
        bufp->chgCData(oldp+281,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+282,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                           >> 7U))),5);
        bufp->chgCData(oldp+283,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+284,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+285,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_raddr_o),5);
        bufp->chgCData(oldp+286,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_raddr_o),5);
        bufp->chgBit(oldp+287,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_re_o));
        bufp->chgBit(oldp+288,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_re_o));
        bufp->chgIData(oldp+289,(((0x13U == (0x7fU 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))
                                   ? ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                       ? ((0x2000U 
                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                           ? (((- (IData)(
                                                          (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0x14U))
                                           : ((0x1000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? ((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_i__DOT____VdfgExtracted_h64b65831__0)
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0x14U))
                                                   : 0U)
                                               : ((
                                                   (- (IData)(
                                                              (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0x14U))))
                                       : ((0x2000U 
                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                           ? (((- (IData)(
                                                          (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0x14U))
                                           : ((0x1000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? ((0U 
                                                   == 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0x19U))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0x14U))
                                                   : 0U)
                                               : ((
                                                   (- (IData)(
                                                              (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0x14U)))))
                                   : 0U)),32);
        bufp->chgBit(oldp+290,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_we_o));
        bufp->chgCData(oldp+291,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_waddr_o),5);
        bufp->chgCData(oldp+292,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0)
                                   ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                               >> 0xfU))
                                   : 0U)),5);
        bufp->chgCData(oldp+293,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0)
                                   ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                               >> 0x14U))
                                   : 0U)),5);
        bufp->chgBit(oldp+294,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg1_re_o));
        bufp->chgBit(oldp+295,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg2_re_o));
        bufp->chgBit(oldp+296,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg_we_o));
        bufp->chgCData(oldp+297,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_h509dbd9c__0)
                                   ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                               >> 7U))
                                   : 0U)),5);
        bufp->chgBit(oldp+298,((0x13U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))));
        bufp->chgBit(oldp+299,(((0x33U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) 
                                & (IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_i__DOT____VdfgExtracted_h64b65831__0))));
        bufp->chgBit(oldp+300,((IData)((0x2000033U 
                                        == (0xfe00007fU 
                                            & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)))));
        bufp->chgCData(oldp+301,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S),4);
        bufp->chgCData(oldp+302,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S_nxt),4);
        bufp->chgBit(oldp+303,((1U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o)));
        bufp->chgBit(oldp+304,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
                                      >> 1U))));
        bufp->chgBit(oldp+305,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip));
        bufp->chgBit(oldp+306,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip));
        bufp->chgBit(oldp+307,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip));
        bufp->chgBit(oldp+308,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip) 
                                | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip) 
                                   | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip)))));
        bufp->chgBit(oldp+309,((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie) 
                                       & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip) 
                                          | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip) 
                                             | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip)))) 
                                      | (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
                                         >> 1U)))));
        bufp->chgIData(oldp+310,((vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec 
                                  >> 2U)),30);
        bufp->chgIData(oldp+311,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o)
                                   ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec)
                                       ? ((0xfffffffcU 
                                           & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec) 
                                          + ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                             << 2U))
                                       : (0xfffffffcU 
                                          & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))
                                   : (0xfffffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))),32);
        bufp->chgIData(oldp+312,(((1U & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec)
                                   ? ((0xfffffffcU 
                                       & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec) 
                                      + ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                         << 2U)) : 
                                  (0xfffffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))),32);
        bufp->chgIData(oldp+313,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                  << 2U)),32);
        bufp->chgBit(oldp+314,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__exception));
        bufp->chgCData(oldp+315,((3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o)),2);
        bufp->chgIData(oldp+316,((0x1ffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)),21);
        bufp->chgIData(oldp+317,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[0]),32);
        bufp->chgIData(oldp+318,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[1]),32);
        bufp->chgIData(oldp+319,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[2]),32);
        bufp->chgIData(oldp+320,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[3]),32);
        bufp->chgIData(oldp+321,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[4]),32);
        bufp->chgIData(oldp+322,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[5]),32);
        bufp->chgIData(oldp+323,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[6]),32);
        bufp->chgIData(oldp+324,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[7]),32);
        bufp->chgIData(oldp+325,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[8]),32);
        bufp->chgIData(oldp+326,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[9]),32);
        bufp->chgIData(oldp+327,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[10]),32);
        bufp->chgIData(oldp+328,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[11]),32);
        bufp->chgIData(oldp+329,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[12]),32);
        bufp->chgIData(oldp+330,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[13]),32);
        bufp->chgIData(oldp+331,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[14]),32);
        bufp->chgIData(oldp+332,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[15]),32);
        bufp->chgIData(oldp+333,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[16]),32);
        bufp->chgIData(oldp+334,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[17]),32);
        bufp->chgIData(oldp+335,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[18]),32);
        bufp->chgIData(oldp+336,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[19]),32);
        bufp->chgIData(oldp+337,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[20]),32);
        bufp->chgIData(oldp+338,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[21]),32);
        bufp->chgIData(oldp+339,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[22]),32);
        bufp->chgIData(oldp+340,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[23]),32);
        bufp->chgIData(oldp+341,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[24]),32);
        bufp->chgIData(oldp+342,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[25]),32);
        bufp->chgIData(oldp+343,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[26]),32);
        bufp->chgIData(oldp+344,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[27]),32);
        bufp->chgIData(oldp+345,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[28]),32);
        bufp->chgIData(oldp+346,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[29]),32);
        bufp->chgIData(oldp+347,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[30]),32);
        bufp->chgIData(oldp+348,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[31]),32);
    }
    bufp->chgBit(oldp+349,(vlSelf->clk_i));
    bufp->chgBit(oldp+350,(vlSelf->rst_i));
    bufp->chgBit(oldp+351,(vlSelf->halt_o));
    bufp->chgIData(oldp+352,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire)
                               ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                   [(0x1ffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)] 
                                   << 0x18U) | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                 [(0x1fffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0x1ffffcU 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))] 
                                                 << 0x10U) 
                                                | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                    [
                                                    (0x1fffffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x1ffffcU 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))] 
                                                    << 8U) 
                                                   | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                   [
                                                   (0x1fffffU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       (0x1ffffcU 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))])))
                               : 0U)),32);
    bufp->chgBit(oldp+353,(((1U & (~ (IData)(vlSelf->rst_i))) 
                            && (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))));
    bufp->chgIData(oldp+354,(((IData)(vlSelf->rst_i)
                               ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_inst_addr_o)),32);
    bufp->chgBit(oldp+355,(((1U & (~ ((IData)(vlSelf->rst_i) 
                                      | (0x13U != (0x7fU 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))))) 
                            && ((0x13U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
                                && ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                     ? ((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0xdU)) 
                                        || ((1U & (~ 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                    >> 0xcU))) 
                                            || ((0U 
                                                 == 
                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 0x19U)) 
                                                || (0x20U 
                                                    == 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 0x19U)))))
                                     : ((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0xdU)) 
                                        || ((1U & (~ 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                    >> 0xcU))) 
                                            || (0U 
                                                == 
                                                (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 >> 0x19U)))))))));
    bufp->chgBit(oldp+356,(((1U & (~ ((IData)(vlSelf->rst_i) 
                                      | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r))))) 
                            && ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                 ? ((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                           >> 0xdU)) 
                                    || ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 0xcU))) 
                                        || ((0U == 
                                             (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                              >> 0x19U)) 
                                            || (0x20U 
                                                == 
                                                (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 >> 0x19U)))))
                                 : ((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                           >> 0xdU)) 
                                    || ((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0xcU)) 
                                        || ((0U == 
                                             (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                              >> 0x19U)) 
                                            || (0x20U 
                                                == 
                                                (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 >> 0x19U)))))))));
    bufp->chgBit(oldp+357,((1U & (~ ((IData)(vlSelf->rst_i) 
                                     | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m)))))));
    bufp->chgIData(oldp+358,((vlSymsp->TOP__test_top.__PVT__device_req
                              [1U] ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                       [(0x1ffffcU 
                                         & vlSymsp->TOP__test_top.__PVT__device_addr
                                         [1U])] << 0x18U) 
                                      | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                          [(0x1fffffU 
                                            & ((IData)(1U) 
                                               + (0x1ffffcU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [1U])))] 
                                          << 0x10U) 
                                         | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                             [(0x1fffffU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0x1ffffcU 
                                                   & vlSymsp->TOP__test_top.__PVT__device_addr
                                                   [1U])))] 
                                             << 8U) 
                                            | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                            [(0x1fffffU 
                                              & ((IData)(3U) 
                                                 + 
                                                 (0x1ffffcU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [1U])))])))
                               : 0U)),32);
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
