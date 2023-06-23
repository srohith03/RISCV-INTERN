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
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__ins1__DOT__f1__DOT__we_n));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__ins1__DOT__f1__DOT__re_n));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__ins1__DOT__f1__DOT__ENABLE_0));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__ins1__DOT__f1__DOT__ENABLE_1));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__ins1__DOT__f1__DOT__WE_0));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__ins1__DOT__f1__DOT__WE_1));
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__ins1__DOT__f1__DOT__A_0),2);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__ins1__DOT__f1__DOT__A_1),2);
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__CONFLICT));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+9,((0xffU & ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__read_valid_0)
                                          ? (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0_out)
                                          : ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__read_valid_1)
                                              ? (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1_out)
                                              : 0xffffffffU)))),8);
        bufp->chgBit(oldp+10,(((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__read_valid_0) 
                               | (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__read_valid_1))));
        bufp->chgCData(oldp+11,((7U & (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__rd_addr))),3);
        bufp->chgCData(oldp+12,((7U & (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__wr_addr))),3);
        bufp->chgBit(oldp+13,(vlSelf->top__DOT__ins1__DOT__f1__DOT__read_valid_0));
        bufp->chgBit(oldp+14,(vlSelf->top__DOT__ins1__DOT__f1__DOT__read_valid_1));
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0_out),8);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1_out),8);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__ram[0]),8);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__ram[1]),8);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__ram[2]),8);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__ram[3]),8);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__ram[4]),8);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__ram[5]),8);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__ram[6]),8);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__ram[7]),8);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__ram[0]),8);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__ram[1]),8);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__ram[2]),8);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__ram[3]),8);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__ram[4]),8);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__ram[5]),8);
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__ram[6]),8);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__ram[7]),8);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+35,((1U & (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__rd_addr))));
        bufp->chgBit(oldp+36,((1U & (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__wr_addr))));
        bufp->chgCData(oldp+37,((3U & ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__rd_addr) 
                                       >> 1U))),2);
        bufp->chgCData(oldp+38,((3U & ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__wr_addr) 
                                       >> 1U))),2);
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__W_bit_D));
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__W_A_D),2);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__DI_D),8);
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__flag));
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__full));
        bufp->chgBit(oldp+44,(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__empty));
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__rd_addr),4);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__wr_addr),4);
    }
    bufp->chgBit(oldp+47,(vlSelf->clk));
    bufp->chgBit(oldp+48,(vlSelf->rstn));
    bufp->chgBit(oldp+49,((1U & (~ (IData)(vlSelf->rstn)))));
    bufp->chgCData(oldp+50,(vlSelf->top__DOT__DI),8);
    bufp->chgBit(oldp+51,(vlSelf->top__DOT__RE));
    bufp->chgBit(oldp+52,(vlSelf->top__DOT__WE));
    bufp->chgSData(oldp+53,((((IData)(vlSelf->top__DOT__WE) 
                              << 9U) | (((IData)(vlSelf->top__DOT__RE) 
                                         << 8U) | (IData)(vlSelf->top__DOT__DI)))),10);
    bufp->chgCData(oldp+54,(vlSelf->top__DOT__verif_DI),8);
    bufp->chgBit(oldp+55,(((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__empty) 
                           & (IData)(vlSelf->top__DOT__RE))));
    bufp->chgBit(oldp+56,(((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__full) 
                           & (IData)(vlSelf->top__DOT__WE))));
    bufp->chgCData(oldp+57,(((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h553f3f9c__0)
                              ? (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__DI_D)
                              : ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_hcceeb104__0)
                                  ? (IData)(vlSelf->top__DOT__DI)
                                  : (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__DI_D)))),8);
    bufp->chgCData(oldp+58,(((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_hd00f3398__0)
                              ? (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__DI_D)
                              : ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h7c52ac83__0)
                                  ? (IData)(vlSelf->top__DOT__DI)
                                  : (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__DI_D)))),8);
    bufp->chgIData(oldp+59,(vlSelf->top__DOT__unnamedblk1__DOT__iter),32);
    bufp->chgIData(oldp+60,(vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i),32);
    bufp->chgIData(oldp+61,(vlSelf->top__DOT__unnamedblk3__DOT__iter),32);
    bufp->chgIData(oldp+62,(vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i),32);
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
}
