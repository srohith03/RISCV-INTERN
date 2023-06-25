// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__rd));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__wr));
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__data_in),2);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__verif_data_in),2);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__unnamedblk1__DOT__iter),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__data_out),2);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[0]),2);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[1]),2);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[2]),2);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[3]),2);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[4]),2);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[5]),2);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[6]),2);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[7]),2);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[8]),2);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[9]),2);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[10]),2);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[11]),2);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[12]),2);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[13]),2);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[14]),2);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[15]),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+23,(((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                               == (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))));
        bufp->chgBit(oldp+24,(((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
                               == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                                                 >> 4U)) 
                                             << 4U)) 
                                   | (0xfU & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))));
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__dut__DOT__rd_ptr),5);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__dut__DOT__wr_ptr),5);
    }
    bufp->chgBit(oldp+27,(vlSelf->clk));
    bufp->chgBit(oldp+28,(vlSelf->rstn));
    bufp->chgBit(oldp+29,(vlSelf->top__DOT__rst));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
