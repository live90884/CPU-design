// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top__pch.h"
#include "Vtest_top__Syms.h"
#include "Vtest_top_test_top.h"

VL_INLINE_OPT void Vtest_top_test_top___ico_sequent__TOP__test_top__0(Vtest_top_test_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top___ico_sequent__TOP__test_top__0\n"); );
    // Init
    CData/*0:0*/ u_bus__DOT____Vlvbound_h50a63e67__0;
    u_bus__DOT____Vlvbound_h50a63e67__0 = 0;
    // Body
    vlSelf->__PVT__host_we[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o;
    vlSelf->__PVT__host_addr[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o;
    vlSelf->__PVT__host_req[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o;
    vlSelf->__PVT__u_bus__DOT__host_sel_req = 0U;
    if (vlSelf->__PVT__host_req[0U]) {
        vlSelf->__PVT__u_bus__DOT__host_sel_req = 0U;
    }
    vlSelf->__PVT__host_gnt[0U] = 0U;
    u_bus__DOT____Vlvbound_h50a63e67__0 = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
                                           && vlSelf->__PVT__host_req
                                           [vlSelf->__PVT__u_bus__DOT__host_sel_req]);
    if ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))) {
        vlSelf->__PVT__host_gnt[vlSelf->__PVT__u_bus__DOT__host_sel_req] 
            = u_bus__DOT____Vlvbound_h50a63e67__0;
    }
    vlSelf->__PVT__u_bus__DOT__device_sel_req = 0U;
    if (((((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
            ? vlSelf->__PVT__host_addr[vlSelf->__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSelf->__PVT__cfg_device_addr_mask
          [0U]) == vlSelf->__PVT__cfg_device_addr_base
         [0U])) {
        vlSelf->__PVT__u_bus__DOT__device_sel_req = 0U;
    }
    if (((((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
            ? vlSelf->__PVT__host_addr[vlSelf->__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSelf->__PVT__cfg_device_addr_mask
          [1U]) == vlSelf->__PVT__cfg_device_addr_base
         [1U])) {
        vlSelf->__PVT__u_bus__DOT__device_sel_req = 1U;
    }
    if (((((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
            ? vlSelf->__PVT__host_addr[vlSelf->__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSelf->__PVT__cfg_device_addr_mask
          [2U]) == vlSelf->__PVT__cfg_device_addr_base
         [2U])) {
        vlSelf->__PVT__u_bus__DOT__device_sel_req = 2U;
    }
    if ((0U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        vlSelf->u_bus__DOT____Vlvbound_h68115d41__0 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
               && vlSelf->__PVT__host_we[vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        vlSelf->__PVT__device_we[0U] = vlSelf->u_bus__DOT____Vlvbound_h68115d41__0;
        vlSelf->u_bus__DOT____Vlvbound_hb43a685a__0 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
                ? vlSelf->__PVT__host_addr[vlSelf->__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSelf->__PVT__device_addr[0U] = vlSelf->u_bus__DOT____Vlvbound_hb43a685a__0;
        vlSelf->u_bus__DOT____Vlvbound_hd0827925__0 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
               && vlSelf->__PVT__host_req[vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        vlSelf->__PVT__device_req[0U] = vlSelf->u_bus__DOT____Vlvbound_hd0827925__0;
    } else {
        vlSelf->__PVT__device_we[0U] = 0U;
        vlSelf->__PVT__device_addr[0U] = 0U;
        vlSelf->__PVT__device_req[0U] = 0U;
    }
    if ((1U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        vlSelf->u_bus__DOT____Vlvbound_h68115d41__0 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
               && vlSelf->__PVT__host_we[vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        vlSelf->__PVT__device_we[1U] = vlSelf->u_bus__DOT____Vlvbound_h68115d41__0;
        vlSelf->u_bus__DOT____Vlvbound_hb43a685a__0 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
                ? vlSelf->__PVT__host_addr[vlSelf->__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSelf->__PVT__device_addr[1U] = vlSelf->u_bus__DOT____Vlvbound_hb43a685a__0;
        vlSelf->u_bus__DOT____Vlvbound_hd0827925__0 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
               && vlSelf->__PVT__host_req[vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        vlSelf->__PVT__device_req[1U] = vlSelf->u_bus__DOT____Vlvbound_hd0827925__0;
    } else {
        vlSelf->__PVT__device_we[1U] = 0U;
        vlSelf->__PVT__device_addr[1U] = 0U;
        vlSelf->__PVT__device_req[1U] = 0U;
    }
    if ((2U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        vlSelf->u_bus__DOT____Vlvbound_h68115d41__0 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
               && vlSelf->__PVT__host_we[vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        vlSelf->__PVT__device_we[2U] = vlSelf->u_bus__DOT____Vlvbound_h68115d41__0;
        vlSelf->u_bus__DOT____Vlvbound_hb43a685a__0 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
                ? vlSelf->__PVT__host_addr[vlSelf->__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSelf->__PVT__device_addr[2U] = vlSelf->u_bus__DOT____Vlvbound_hb43a685a__0;
        vlSelf->u_bus__DOT____Vlvbound_hd0827925__0 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
               && vlSelf->__PVT__host_req[vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        vlSelf->__PVT__device_req[2U] = vlSelf->u_bus__DOT____Vlvbound_hd0827925__0;
    } else {
        vlSelf->__PVT__device_we[2U] = 0U;
        vlSelf->__PVT__device_addr[2U] = 0U;
        vlSelf->__PVT__device_req[2U] = 0U;
    }
    vlSelf->__PVT__u_bus__DOT__device_sel_resp = ((IData)(vlSymsp->TOP.rst_i)
                                                   ? 0U
                                                   : (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req));
    vlSelf->__PVT__device_rdata[1U] = (vlSelf->__PVT__device_req
                                       [1U] ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                [(0x1ffffcU 
                                                  & vlSelf->__PVT__device_addr
                                                  [1U])] 
                                                << 0x18U) 
                                               | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                   [
                                                   (0x1fffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (0x1ffffcU 
                                                        & vlSelf->__PVT__device_addr
                                                        [1U])))] 
                                                   << 0x10U) 
                                                  | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                      [
                                                      (0x1fffffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0x1ffffcU 
                                                           & vlSelf->__PVT__device_addr
                                                           [1U])))] 
                                                      << 8U) 
                                                     | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                     [
                                                     (0x1fffffU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         (0x1ffffcU 
                                                          & vlSelf->__PVT__device_addr
                                                          [1U])))])))
                                        : 0U);
    if (vlSelf->__PVT__device_req[0U]) {
        if ((0U == (0xffffU & vlSelf->__PVT__device_addr
                    [0U]))) {
            vlSelf->__Vcellout__clint0__data_o = vlSelf->__PVT__clint0__DOT__msip_mem;
        } else if ((0x4000U == (0xffffU & vlSelf->__PVT__device_addr
                                [0U]))) {
            vlSelf->__Vcellout__clint0__data_o = vlSelf->__PVT__clint0__DOT__mtimecmp_mem
                [0U];
        } else if ((0x4004U == (0xffffU & vlSelf->__PVT__device_addr
                                [0U]))) {
            vlSelf->__Vcellout__clint0__data_o = vlSelf->__PVT__clint0__DOT__mtimecmp_mem
                [1U];
        } else if ((0xbff8U == (0xffffU & vlSelf->__PVT__device_addr
                                [0U]))) {
            vlSelf->__Vcellout__clint0__data_o = vlSelf->__PVT__clint0__DOT__mtime_mem
                [0U];
        } else if ((0xbffcU == (0xffffU & vlSelf->__PVT__device_addr
                                [0U]))) {
            vlSelf->__Vcellout__clint0__data_o = vlSelf->__PVT__clint0__DOT__mtime_mem
                [1U];
        }
    } else {
        vlSelf->__Vcellout__clint0__data_o = 0U;
    }
    vlSelf->__PVT__device_rdata[0U] = vlSelf->__Vcellout__clint0__data_o;
    if (((1U & (~ (IData)(vlSymsp->TOP.rst_i))) && (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))) {
        vlSelf->__PVT__host_rdata[0U] = 0U;
    } else {
        vlSelf->u_bus__DOT____Vlvbound_h09ab9cca__0 
            = ((2U >= (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_resp))
                ? vlSelf->__PVT__device_rdata[vlSelf->__PVT__u_bus__DOT__device_sel_resp]
                : 0U);
        vlSelf->__PVT__host_rdata[0U] = vlSelf->u_bus__DOT____Vlvbound_h09ab9cca__0;
    }
}

VL_INLINE_OPT void Vtest_top_test_top___ico_sequent__TOP__test_top__1(Vtest_top_test_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top___ico_sequent__TOP__test_top__1\n"); );
    // Body
    vlSelf->__PVT__host_wdata[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_data_o;
    if ((0U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        vlSelf->u_bus__DOT____Vlvbound_hd46660b5__0 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
                ? vlSelf->__PVT__host_wdata[vlSelf->__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSelf->__PVT__device_wdata[0U] = vlSelf->u_bus__DOT____Vlvbound_hd46660b5__0;
    } else {
        vlSelf->__PVT__device_wdata[0U] = 0U;
    }
    if ((1U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        vlSelf->u_bus__DOT____Vlvbound_hd46660b5__0 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
                ? vlSelf->__PVT__host_wdata[vlSelf->__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSelf->__PVT__device_wdata[1U] = vlSelf->u_bus__DOT____Vlvbound_hd46660b5__0;
    } else {
        vlSelf->__PVT__device_wdata[1U] = 0U;
    }
    if ((2U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        vlSelf->u_bus__DOT____Vlvbound_hd46660b5__0 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
                ? vlSelf->__PVT__host_wdata[vlSelf->__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSelf->__PVT__device_wdata[2U] = vlSelf->u_bus__DOT____Vlvbound_hd46660b5__0;
    } else {
        vlSelf->__PVT__device_wdata[2U] = 0U;
    }
}

VL_INLINE_OPT void Vtest_top_test_top___nba_sequent__TOP__test_top__0(Vtest_top_test_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top___nba_sequent__TOP__test_top__0\n"); );
    // Init
    CData/*0:0*/ u_bus__DOT____Vlvbound_h50a63e67__0;
    u_bus__DOT____Vlvbound_h50a63e67__0 = 0;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtime_mem__v0;
    __Vdlyvset__clint0__DOT__mtime_mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtime_mem__v2;
    __Vdlyvval__clint0__DOT__mtime_mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtime_mem__v2;
    __Vdlyvset__clint0__DOT__mtime_mem__v2 = 0;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtime_mem__v3;
    __Vdlyvval__clint0__DOT__mtime_mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtimecmp_mem__v0;
    __Vdlyvset__clint0__DOT__mtimecmp_mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtimecmp_mem__v2;
    __Vdlyvval__clint0__DOT__mtimecmp_mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtimecmp_mem__v2;
    __Vdlyvset__clint0__DOT__mtimecmp_mem__v2 = 0;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtimecmp_mem__v3;
    __Vdlyvval__clint0__DOT__mtimecmp_mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtimecmp_mem__v3;
    __Vdlyvset__clint0__DOT__mtimecmp_mem__v3 = 0;
    CData/*2:0*/ __Vdly__console0__DOT__sim_finish;
    __Vdly__console0__DOT__sim_finish = 0;
    // Body
    __Vdly__console0__DOT__sim_finish = vlSelf->__PVT__console0__DOT__sim_finish;
    __Vdlyvset__clint0__DOT__mtime_mem__v0 = 0U;
    __Vdlyvset__clint0__DOT__mtime_mem__v2 = 0U;
    __Vdlyvset__clint0__DOT__mtimecmp_mem__v0 = 0U;
    __Vdlyvset__clint0__DOT__mtimecmp_mem__v2 = 0U;
    __Vdlyvset__clint0__DOT__mtimecmp_mem__v3 = 0U;
    vlSelf->__PVT__host_we[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o;
    vlSelf->__PVT__host_addr[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o;
    vlSelf->__PVT__host_req[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o;
    if (vlSymsp->TOP.rst_i) {
        __Vdlyvset__clint0__DOT__mtime_mem__v0 = 1U;
        __Vdlyvset__clint0__DOT__mtimecmp_mem__v0 = 1U;
    } else {
        if ((1U & (~ vlSelf->__PVT__device_we[0U]))) {
            __Vdlyvval__clint0__DOT__mtime_mem__v2 
                = ((IData)(1U) + vlSelf->__PVT__clint0__DOT__mtime_mem
                   [0U]);
            __Vdlyvset__clint0__DOT__mtime_mem__v2 = 1U;
            __Vdlyvval__clint0__DOT__mtime_mem__v3 
                = (vlSelf->__PVT__clint0__DOT__mtime_mem
                   [1U] + (IData)(vlSelf->__PVT__clint0__DOT__carry));
        }
        if (vlSelf->__PVT__device_we[0U]) {
            if ((0U != (0xffffU & vlSelf->__PVT__device_addr
                        [0U]))) {
                if ((0x4000U == (0xffffU & vlSelf->__PVT__device_addr
                                 [0U]))) {
                    __Vdlyvval__clint0__DOT__mtimecmp_mem__v2 
                        = vlSelf->__PVT__device_wdata
                        [0U];
                    __Vdlyvset__clint0__DOT__mtimecmp_mem__v2 = 1U;
                } else if ((0x4004U == (0xffffU & vlSelf->__PVT__device_addr
                                        [0U]))) {
                    __Vdlyvval__clint0__DOT__mtimecmp_mem__v3 
                        = vlSelf->__PVT__device_wdata
                        [0U];
                    __Vdlyvset__clint0__DOT__mtimecmp_mem__v3 = 1U;
                }
            }
        }
    }
    if (vlSymsp->TOP.rst_i) {
        __Vdly__console0__DOT__sim_finish = 0U;
    } else if ((vlSelf->__PVT__device_req[2U] & vlSelf->__PVT__device_we
                [2U])) {
        if (VL_UNLIKELY((4U == (0xffU & vlSelf->__PVT__device_addr
                                [2U])))) {
            VL_FWRITEF(vlSelf->__PVT__console0__DOT__log_fd,"%c",
                       8,(0xffU & vlSelf->__PVT__device_wdata
                          [2U]));
            VL_WRITEF("%c",8,(0xffU & vlSelf->__PVT__device_wdata
                              [2U]));
            if (vlSelf->__PVT__console0__DOT__log_fd) { VL_FFLUSH_I(vlSelf->__PVT__console0__DOT__log_fd); }
        } else if ((8U == (0xffU & vlSelf->__PVT__device_addr
                           [2U]))) {
            if ((vlSelf->__PVT__device_wdata[2U] & 
                 (0U == (IData)(vlSelf->__PVT__console0__DOT__sim_finish)))) {
                __Vdly__console0__DOT__sim_finish = 1U;
            }
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__console0__DOT__sim_finish))) {
        __Vdly__console0__DOT__sim_finish = (7U & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__console0__DOT__sim_finish)));
    }
    vlSelf->__PVT__halt_from_console = (2U <= (IData)(vlSelf->__PVT__console0__DOT__sim_finish));
    vlSelf->__PVT__u_bus__DOT__host_sel_req = 0U;
    if (vlSelf->__PVT__host_req[0U]) {
        vlSelf->__PVT__u_bus__DOT__host_sel_req = 0U;
    }
    if (__Vdlyvset__clint0__DOT__mtime_mem__v0) {
        vlSelf->__PVT__clint0__DOT__mtime_mem[0U] = 0U;
        vlSelf->__PVT__clint0__DOT__mtime_mem[1U] = 0U;
    }
    if (__Vdlyvset__clint0__DOT__mtime_mem__v2) {
        vlSelf->__PVT__clint0__DOT__mtime_mem[0U] = __Vdlyvval__clint0__DOT__mtime_mem__v2;
        vlSelf->__PVT__clint0__DOT__mtime_mem[1U] = __Vdlyvval__clint0__DOT__mtime_mem__v3;
    }
    if (__Vdlyvset__clint0__DOT__mtimecmp_mem__v0) {
        vlSelf->__PVT__clint0__DOT__mtimecmp_mem[0U] = 0U;
        vlSelf->__PVT__clint0__DOT__mtimecmp_mem[1U] = 0U;
    }
    if (__Vdlyvset__clint0__DOT__mtimecmp_mem__v2) {
        vlSelf->__PVT__clint0__DOT__mtimecmp_mem[0U] 
            = __Vdlyvval__clint0__DOT__mtimecmp_mem__v2;
    }
    if (__Vdlyvset__clint0__DOT__mtimecmp_mem__v3) {
        vlSelf->__PVT__clint0__DOT__mtimecmp_mem[1U] 
            = __Vdlyvval__clint0__DOT__mtimecmp_mem__v3;
    }
    vlSelf->__PVT__console0__DOT__sim_finish = __Vdly__console0__DOT__sim_finish;
    vlSelf->__PVT__host_gnt[0U] = 0U;
    u_bus__DOT____Vlvbound_h50a63e67__0 = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
                                           && vlSelf->__PVT__host_req
                                           [vlSelf->__PVT__u_bus__DOT__host_sel_req]);
    if ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))) {
        vlSelf->__PVT__host_gnt[vlSelf->__PVT__u_bus__DOT__host_sel_req] 
            = u_bus__DOT____Vlvbound_h50a63e67__0;
    }
    vlSelf->__PVT__u_bus__DOT__device_sel_req = 0U;
    if (((((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
            ? vlSelf->__PVT__host_addr[vlSelf->__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSelf->__PVT__cfg_device_addr_mask
          [0U]) == vlSelf->__PVT__cfg_device_addr_base
         [0U])) {
        vlSelf->__PVT__u_bus__DOT__device_sel_req = 0U;
    }
    if (((((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
            ? vlSelf->__PVT__host_addr[vlSelf->__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSelf->__PVT__cfg_device_addr_mask
          [1U]) == vlSelf->__PVT__cfg_device_addr_base
         [1U])) {
        vlSelf->__PVT__u_bus__DOT__device_sel_req = 1U;
    }
    if (((((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
            ? vlSelf->__PVT__host_addr[vlSelf->__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSelf->__PVT__cfg_device_addr_mask
          [2U]) == vlSelf->__PVT__cfg_device_addr_base
         [2U])) {
        vlSelf->__PVT__u_bus__DOT__device_sel_req = 2U;
    }
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__clint0__DOT__msip_mem = 0U;
        vlSelf->__PVT__u_bus__DOT__device_sel_resp = 0U;
    } else {
        if (vlSelf->__PVT__device_we[0U]) {
            if ((0U == (0xffffU & vlSelf->__PVT__device_addr
                        [0U]))) {
                vlSelf->__PVT__clint0__DOT__msip_mem 
                    = vlSelf->__PVT__device_wdata[0U];
            }
        }
        vlSelf->__PVT__u_bus__DOT__device_sel_resp 
            = vlSelf->__PVT__u_bus__DOT__device_sel_req;
    }
    vlSelf->__PVT__clint0__DOT__carry = (0xffffffffU 
                                         == vlSelf->__PVT__clint0__DOT__mtime_mem
                                         [0U]);
    vlSelf->__PVT__clint0__DOT__mtimecmp = (((QData)((IData)(
                                                             vlSelf->__PVT__clint0__DOT__mtimecmp_mem
                                                             [1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->__PVT__clint0__DOT__mtimecmp_mem
                                                              [0U])));
}

VL_INLINE_OPT void Vtest_top_test_top___nba_sequent__TOP__test_top__1(Vtest_top_test_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top___nba_sequent__TOP__test_top__1\n"); );
    // Body
    if ((0U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        vlSelf->u_bus__DOT____Vlvbound_hd0827925__0 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
               && vlSelf->__PVT__host_req[vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        vlSelf->__PVT__device_req[0U] = vlSelf->u_bus__DOT____Vlvbound_hd0827925__0;
        vlSelf->u_bus__DOT____Vlvbound_h68115d41__0 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
               && vlSelf->__PVT__host_we[vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        vlSelf->__PVT__device_we[0U] = vlSelf->u_bus__DOT____Vlvbound_h68115d41__0;
        vlSelf->u_bus__DOT____Vlvbound_hb43a685a__0 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
                ? vlSelf->__PVT__host_addr[vlSelf->__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSelf->__PVT__device_addr[0U] = vlSelf->u_bus__DOT____Vlvbound_hb43a685a__0;
    } else {
        vlSelf->__PVT__device_req[0U] = 0U;
        vlSelf->__PVT__device_we[0U] = 0U;
        vlSelf->__PVT__device_addr[0U] = 0U;
    }
    if ((1U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        vlSelf->u_bus__DOT____Vlvbound_hd0827925__0 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
               && vlSelf->__PVT__host_req[vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        vlSelf->__PVT__device_req[1U] = vlSelf->u_bus__DOT____Vlvbound_hd0827925__0;
        vlSelf->u_bus__DOT____Vlvbound_h68115d41__0 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
               && vlSelf->__PVT__host_we[vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        vlSelf->__PVT__device_we[1U] = vlSelf->u_bus__DOT____Vlvbound_h68115d41__0;
        vlSelf->u_bus__DOT____Vlvbound_hb43a685a__0 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
                ? vlSelf->__PVT__host_addr[vlSelf->__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSelf->__PVT__device_addr[1U] = vlSelf->u_bus__DOT____Vlvbound_hb43a685a__0;
    } else {
        vlSelf->__PVT__device_req[1U] = 0U;
        vlSelf->__PVT__device_we[1U] = 0U;
        vlSelf->__PVT__device_addr[1U] = 0U;
    }
    if ((2U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        vlSelf->u_bus__DOT____Vlvbound_hd0827925__0 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
               && vlSelf->__PVT__host_req[vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        vlSelf->__PVT__device_req[2U] = vlSelf->u_bus__DOT____Vlvbound_hd0827925__0;
        vlSelf->u_bus__DOT____Vlvbound_h68115d41__0 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
               && vlSelf->__PVT__host_we[vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        vlSelf->__PVT__device_we[2U] = vlSelf->u_bus__DOT____Vlvbound_h68115d41__0;
        vlSelf->u_bus__DOT____Vlvbound_hb43a685a__0 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
                ? vlSelf->__PVT__host_addr[vlSelf->__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSelf->__PVT__device_addr[2U] = vlSelf->u_bus__DOT____Vlvbound_hb43a685a__0;
    } else {
        vlSelf->__PVT__device_req[2U] = 0U;
        vlSelf->__PVT__device_we[2U] = 0U;
        vlSelf->__PVT__device_addr[2U] = 0U;
    }
    vlSelf->__PVT__device_rdata[1U] = (vlSelf->__PVT__device_req
                                       [1U] ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                [(0x1ffffcU 
                                                  & vlSelf->__PVT__device_addr
                                                  [1U])] 
                                                << 0x18U) 
                                               | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                   [
                                                   (0x1fffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (0x1ffffcU 
                                                        & vlSelf->__PVT__device_addr
                                                        [1U])))] 
                                                   << 0x10U) 
                                                  | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                      [
                                                      (0x1fffffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0x1ffffcU 
                                                           & vlSelf->__PVT__device_addr
                                                           [1U])))] 
                                                      << 8U) 
                                                     | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                     [
                                                     (0x1fffffU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         (0x1ffffcU 
                                                          & vlSelf->__PVT__device_addr
                                                          [1U])))])))
                                        : 0U);
    if (vlSelf->__PVT__device_req[0U]) {
        if ((0U == (0xffffU & vlSelf->__PVT__device_addr
                    [0U]))) {
            vlSelf->__Vcellout__clint0__data_o = vlSelf->__PVT__clint0__DOT__msip_mem;
        } else if ((0x4000U == (0xffffU & vlSelf->__PVT__device_addr
                                [0U]))) {
            vlSelf->__Vcellout__clint0__data_o = vlSelf->__PVT__clint0__DOT__mtimecmp_mem
                [0U];
        } else if ((0x4004U == (0xffffU & vlSelf->__PVT__device_addr
                                [0U]))) {
            vlSelf->__Vcellout__clint0__data_o = vlSelf->__PVT__clint0__DOT__mtimecmp_mem
                [1U];
        } else if ((0xbff8U == (0xffffU & vlSelf->__PVT__device_addr
                                [0U]))) {
            vlSelf->__Vcellout__clint0__data_o = vlSelf->__PVT__clint0__DOT__mtime_mem
                [0U];
        } else if ((0xbffcU == (0xffffU & vlSelf->__PVT__device_addr
                                [0U]))) {
            vlSelf->__Vcellout__clint0__data_o = vlSelf->__PVT__clint0__DOT__mtime_mem
                [1U];
        }
    } else {
        vlSelf->__Vcellout__clint0__data_o = 0U;
    }
    vlSelf->__PVT__device_rdata[0U] = vlSelf->__Vcellout__clint0__data_o;
    if (((1U & (~ (IData)(vlSymsp->TOP.rst_i))) && (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))) {
        vlSelf->__PVT__host_rdata[0U] = 0U;
    } else {
        vlSelf->u_bus__DOT____Vlvbound_h09ab9cca__0 
            = ((2U >= (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_resp))
                ? vlSelf->__PVT__device_rdata[vlSelf->__PVT__u_bus__DOT__device_sel_resp]
                : 0U);
        vlSelf->__PVT__host_rdata[0U] = vlSelf->u_bus__DOT____Vlvbound_h09ab9cca__0;
    }
}
