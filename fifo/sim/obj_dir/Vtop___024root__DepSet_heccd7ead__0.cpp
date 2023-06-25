// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtop___024root___eval_initial__TOP__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__rst__0 
        = vlSelf->top__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__wr = 0U;
    vlSelf->top__DOT__rd = 0U;
    vlSelf->top__DOT__data_in = 0U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 1U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 1U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 2U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 3U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 5U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 6U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 7U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 8U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 1U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 9U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0xaU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0xbU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0xcU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0xdU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0xeU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0xfU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x10U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 1U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x11U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x12U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x13U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x14U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x15U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x16U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x17U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x18U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 1U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x19U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x1aU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x1bU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x1cU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x1dU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x1eU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x1fU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x20U;
    vlSelf->top__DOT__unnamedblk1__DOT__iter = 1U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 1U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 1U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 2U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 3U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 5U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 6U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 7U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 8U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 1U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 9U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0xaU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0xbU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0xcU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0xdU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0xeU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0xfU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x10U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 1U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x11U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x12U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x13U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x14U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x15U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x16U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x17U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x18U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 1U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x19U;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x1aU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x1bU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x1cU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x1dU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x1eU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 1U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x1fU;
    co_await vlSelf->__VtrigSched_h3cade7ad__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         != ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
        if (vlSelf->top__DOT__wr) {
            vlSelf->top__DOT__data_in = (3U & VL_RANDOM_I());
            vlSelf->top__DOT__verif_data_q.push_front(vlSelf->top__DOT__data_in);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
         == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                           >> 4U)) << 4U)) | (0xfU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))) {
        vlSelf->top__DOT__wr = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
         != (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))) {
        vlSelf->top__DOT__rd = 0U;
        if (VL_UNLIKELY(vlSelf->top__DOT__rd)) {
            vlSelf->top__DOT__verif_data_in = vlSelf->top__DOT__verif_data_q.pop_back();
            VL_WRITEF("Checking rdata: expected wdata = %x, rdata = %x\n",
                      2,vlSelf->top__DOT__verif_data_in,
                      2,(IData)(vlSelf->top__DOT__data_out));
        }
    }
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x20U;
    vlSelf->top__DOT__unnamedblk1__DOT__iter = 2U;
    VL_FINISH_MT("fifo_tb.v", 88, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__rst = (1U & (~ (IData)(vlSelf->rstn)));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__top__DOT__dut__DOT__dp__DOT__mem__v0;
    __Vdlyvdim0__top__DOT__dut__DOT__dp__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdlyvval__top__DOT__dut__DOT__dp__DOT__mem__v0;
    __Vdlyvval__top__DOT__dut__DOT__dp__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__dp__DOT__mem__v0;
    __Vdlyvset__top__DOT__dut__DOT__dp__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__dut__DOT__dp__DOT__mem__v0 = 0U;
    if (vlSelf->top__DOT__wr) {
        __Vdlyvval__top__DOT__dut__DOT__dp__DOT__mem__v0 
            = vlSelf->top__DOT__data_in;
        __Vdlyvset__top__DOT__dut__DOT__dp__DOT__mem__v0 = 1U;
        __Vdlyvdim0__top__DOT__dut__DOT__dp__DOT__mem__v0 
            = (0xfU & (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr));
    }
    if (vlSelf->top__DOT__rd) {
        vlSelf->top__DOT__data_out = vlSelf->top__DOT__dut__DOT__dp__DOT__mem
            [(0xfU & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))];
    }
    if (__Vdlyvset__top__DOT__dut__DOT__dp__DOT__mem__v0) {
        vlSelf->top__DOT__dut__DOT__dp__DOT__mem[__Vdlyvdim0__top__DOT__dut__DOT__dp__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__dut__DOT__dp__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->top__DOT__rst) {
        vlSelf->top__DOT__dut__DOT__rd_ptr = 0U;
        vlSelf->top__DOT__dut__DOT__wr_ptr = 0U;
    } else {
        vlSelf->top__DOT__dut__DOT__rd_ptr = (0x1fU 
                                              & ((((IData)(vlSelf->top__DOT__rd) 
                                                   & (~ (IData)(vlSelf->top__DOT__empty))) 
                                                  | ((IData)(vlSelf->top__DOT__wr) 
                                                     & (IData)(vlSelf->top__DOT__rd)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))
                                                  : (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr)));
        vlSelf->top__DOT__dut__DOT__wr_ptr = (0x1fU 
                                              & (((IData)(vlSelf->top__DOT__wr) 
                                                  & ((~ (IData)(vlSelf->top__DOT__full)) 
                                                     | (IData)(vlSelf->top__DOT__rd)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))
                                                  : (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr)));
    }
    vlSelf->top__DOT__full = ((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
                              == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                                                >> 4U)) 
                                            << 4U)) 
                                  | (0xfU & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))));
    vlSelf->top__DOT__empty = ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                               == (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
void Vtop___024root___timing_commit(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___timing_resume(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("fifo_tb.v", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            Vtop___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("fifo_tb.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtop___024root___timing_resume(vlSelf);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("fifo_tb.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

void Vtop___024root___timing_commit(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h3cade7ad__0.commit("@(posedge clk)");
    }
}

void Vtop___024root___timing_resume(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h3cade7ad__0.resume("@(posedge clk)");
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
}
#endif  // VL_DEBUG
