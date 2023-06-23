// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+48,"clk", false,-1);
    tracep->declBit(c+49,"rstn", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+48,"clk", false,-1);
    tracep->declBit(c+49,"rstn", false,-1);
    tracep->declBit(c+50,"rst", false,-1);
    tracep->declBus(c+51,"DI", false,-1, 7,0);
    tracep->declBit(c+52,"RE", false,-1);
    tracep->declBit(c+53,"WE", false,-1);
    tracep->declBus(c+10,"DO", false,-1, 7,0);
    tracep->declBus(c+54,"inst", false,-1, 9,0);
    tracep->declBit(c+64,"full", false,-1);
    tracep->declBit(c+65,"empty", false,-1);
    tracep->declBus(c+55,"verif_DI", false,-1, 7,0);
    tracep->declBit(c+11,"read_valid", false,-1);
    tracep->pushNamePrefix("ins1 ");
    tracep->declBus(c+54,"inst", false,-1, 9,0);
    tracep->declBit(c+48,"clk", false,-1);
    tracep->declBit(c+50,"rst", false,-1);
    tracep->declBus(c+10,"DO", false,-1, 7,0);
    tracep->declBit(c+11,"read_valid", false,-1);
    tracep->declBus(c+51,"DI", false,-1, 7,0);
    tracep->declBit(c+52,"RE", false,-1);
    tracep->declBit(c+53,"WE", false,-1);
    tracep->pushNamePrefix("f1 ");
    tracep->declBus(c+51,"DI", false,-1, 7,0);
    tracep->declBit(c+52,"RE", false,-1);
    tracep->declBit(c+53,"WE", false,-1);
    tracep->declBit(c+48,"clk", false,-1);
    tracep->declBit(c+50,"rst", false,-1);
    tracep->declBus(c+10,"DO", false,-1, 7,0);
    tracep->declBit(c+11,"read_valid", false,-1);
    tracep->declBit(c+56,"r_err", false,-1);
    tracep->declBit(c+57,"w_err", false,-1);
    tracep->declBit(c+1,"we_n", false,-1);
    tracep->declBit(c+2,"re_n", false,-1);
    tracep->declBus(c+12,"r_adr", false,-1, 2,0);
    tracep->declBus(c+13,"w_adr", false,-1, 2,0);
    tracep->declBus(c+51,"d_out", false,-1, 7,0);
    tracep->declBit(c+14,"read_valid_0", false,-1);
    tracep->declBit(c+15,"read_valid_1", false,-1);
    tracep->declBit(c+3,"ENABLE_0", false,-1);
    tracep->declBit(c+4,"ENABLE_1", false,-1);
    tracep->declBit(c+5,"WE_0", false,-1);
    tracep->declBit(c+6,"WE_1", false,-1);
    tracep->declBus(c+7,"A_0", false,-1, 1,0);
    tracep->declBus(c+58,"DI_0", false,-1, 7,0);
    tracep->declBus(c+8,"A_1", false,-1, 1,0);
    tracep->declBus(c+59,"DI_1", false,-1, 7,0);
    tracep->declBus(c+16,"RAM_0_out", false,-1, 7,0);
    tracep->declBus(c+17,"RAM_1_out", false,-1, 7,0);
    tracep->pushNamePrefix("RAM_0 ");
    tracep->declBit(c+48,"clk", false,-1);
    tracep->declBit(c+50,"rst", false,-1);
    tracep->declBit(c+3,"ena", false,-1);
    tracep->declBit(c+5,"wea", false,-1);
    tracep->declBus(c+58,"din", false,-1, 7,0);
    tracep->declBus(c+7,"addr", false,-1, 1,0);
    tracep->declBus(c+16,"dout", false,-1, 7,0);
    tracep->declBit(c+14,"read_valid", false,-1);
    tracep->declBus(c+66,"num", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+18+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+26,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("RAM_1 ");
    tracep->declBit(c+48,"clk", false,-1);
    tracep->declBit(c+50,"rst", false,-1);
    tracep->declBit(c+4,"ena", false,-1);
    tracep->declBit(c+6,"wea", false,-1);
    tracep->declBus(c+59,"din", false,-1, 7,0);
    tracep->declBus(c+8,"addr", false,-1, 1,0);
    tracep->declBus(c+17,"dout", false,-1, 7,0);
    tracep->declBit(c+15,"read_valid", false,-1);
    tracep->declBus(c+66,"num", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+27+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+35,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem_ctr_1 ");
    tracep->declBit(c+48,"clk", false,-1);
    tracep->declBit(c+50,"rst", false,-1);
    tracep->declBit(c+1,"WE_N", false,-1);
    tracep->declBit(c+2,"RE_N", false,-1);
    tracep->declBus(c+12,"R_ADR", false,-1, 2,0);
    tracep->declBus(c+13,"W_ADR", false,-1, 2,0);
    tracep->declBus(c+51,"DI", false,-1, 7,0);
    tracep->declBit(c+3,"ENABLE_0", false,-1);
    tracep->declBit(c+5,"WE_0", false,-1);
    tracep->declBus(c+7,"A_0", false,-1, 1,0);
    tracep->declBus(c+58,"DI_0", false,-1, 7,0);
    tracep->declBit(c+4,"ENABLE_1", false,-1);
    tracep->declBit(c+6,"WE_1", false,-1);
    tracep->declBus(c+8,"A_1", false,-1, 1,0);
    tracep->declBus(c+59,"DI_1", false,-1, 7,0);
    tracep->declBit(c+36,"R_bit", false,-1);
    tracep->declBit(c+37,"W_bit", false,-1);
    tracep->declBus(c+38,"R_A", false,-1, 1,0);
    tracep->declBus(c+39,"W_A", false,-1, 1,0);
    tracep->declBit(c+9,"CONFLICT", false,-1);
    tracep->declBit(c+40,"W_bit_D", false,-1);
    tracep->declBus(c+41,"W_A_D", false,-1, 1,0);
    tracep->declBus(c+42,"DI_D", false,-1, 7,0);
    tracep->declBit(c+43,"flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("r ");
    tracep->declBit(c+48,"clk", false,-1);
    tracep->declBit(c+52,"rd_en", false,-1);
    tracep->declBit(c+14,"en0", false,-1);
    tracep->declBit(c+15,"en1", false,-1);
    tracep->declBus(c+16,"data0", false,-1, 7,0);
    tracep->declBus(c+17,"data1", false,-1, 7,0);
    tracep->declBus(c+10,"out", false,-1, 7,0);
    tracep->declBit(c+11,"read_valid", false,-1);
    tracep->declBit(c+67,"en0_r", false,-1);
    tracep->declBit(c+68,"en1_r", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("update_addr ");
    tracep->declBus(c+51,"di", false,-1, 7,0);
    tracep->declBit(c+52,"re", false,-1);
    tracep->declBit(c+53,"we", false,-1);
    tracep->declBit(c+48,"clk", false,-1);
    tracep->declBit(c+50,"rst", false,-1);
    tracep->declBit(c+1,"we_n", false,-1);
    tracep->declBit(c+2,"re_n", false,-1);
    tracep->declBus(c+12,"r_adr", false,-1, 2,0);
    tracep->declBus(c+13,"w_adr", false,-1, 2,0);
    tracep->declBit(c+56,"r_err", false,-1);
    tracep->declBit(c+57,"w_err", false,-1);
    tracep->declBus(c+51,"data_out", false,-1, 7,0);
    tracep->declBit(c+44,"full", false,-1);
    tracep->declBit(c+45,"empty", false,-1);
    tracep->pushNamePrefix("lut1 ");
    tracep->declBit(c+48,"clk", false,-1);
    tracep->declBit(c+50,"rst", false,-1);
    tracep->declBit(c+52,"re", false,-1);
    tracep->declBit(c+53,"we", false,-1);
    tracep->declBit(c+45,"empty", false,-1);
    tracep->declBit(c+44,"full", false,-1);
    tracep->declBus(c+12,"r_adr", false,-1, 2,0);
    tracep->declBus(c+13,"w_adr", false,-1, 2,0);
    tracep->declBus(c+46,"rd_addr", false,-1, 3,0);
    tracep->declBus(c+47,"wr_addr", false,-1, 3,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+60,"iter", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+61,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+62,"iter", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+63,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__ins1__DOT__f1__DOT__we_n));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__ins1__DOT__f1__DOT__re_n));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__ins1__DOT__f1__DOT__ENABLE_0));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__ins1__DOT__f1__DOT__ENABLE_1));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__ins1__DOT__f1__DOT__WE_0));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__ins1__DOT__f1__DOT__WE_1));
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__ins1__DOT__f1__DOT__A_0),2);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__ins1__DOT__f1__DOT__A_1),2);
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__CONFLICT));
    bufp->fullCData(oldp+10,((0xffU & ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__read_valid_0)
                                        ? (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0_out)
                                        : ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__read_valid_1)
                                            ? (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1_out)
                                            : 0xffffffffU)))),8);
    bufp->fullBit(oldp+11,(((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__read_valid_0) 
                            | (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__read_valid_1))));
    bufp->fullCData(oldp+12,((7U & (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__rd_addr))),3);
    bufp->fullCData(oldp+13,((7U & (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__wr_addr))),3);
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__ins1__DOT__f1__DOT__read_valid_0));
    bufp->fullBit(oldp+15,(vlSelf->top__DOT__ins1__DOT__f1__DOT__read_valid_1));
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0_out),8);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1_out),8);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__ram[0]),8);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__ram[1]),8);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__ram[2]),8);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__ram[3]),8);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__ram[4]),8);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__ram[5]),8);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__ram[6]),8);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__ram[7]),8);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__ram[0]),8);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__ram[1]),8);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__ram[2]),8);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__ram[3]),8);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__ram[4]),8);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__ram[5]),8);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__ram[6]),8);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__ram[7]),8);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+36,((1U & (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__rd_addr))));
    bufp->fullBit(oldp+37,((1U & (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__wr_addr))));
    bufp->fullCData(oldp+38,((3U & ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__rd_addr) 
                                    >> 1U))),2);
    bufp->fullCData(oldp+39,((3U & ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__wr_addr) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__W_bit_D));
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__W_A_D),2);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__DI_D),8);
    bufp->fullBit(oldp+43,(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__flag));
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__full));
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__empty));
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__rd_addr),4);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__wr_addr),4);
    bufp->fullBit(oldp+48,(vlSelf->clk));
    bufp->fullBit(oldp+49,(vlSelf->rstn));
    bufp->fullBit(oldp+50,((1U & (~ (IData)(vlSelf->rstn)))));
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__DI),8);
    bufp->fullBit(oldp+52,(vlSelf->top__DOT__RE));
    bufp->fullBit(oldp+53,(vlSelf->top__DOT__WE));
    bufp->fullSData(oldp+54,((((IData)(vlSelf->top__DOT__WE) 
                               << 9U) | (((IData)(vlSelf->top__DOT__RE) 
                                          << 8U) | (IData)(vlSelf->top__DOT__DI)))),10);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__verif_DI),8);
    bufp->fullBit(oldp+56,(((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__empty) 
                            & (IData)(vlSelf->top__DOT__RE))));
    bufp->fullBit(oldp+57,(((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__full) 
                            & (IData)(vlSelf->top__DOT__WE))));
    bufp->fullCData(oldp+58,(((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h553f3f9c__0)
                               ? (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__DI_D)
                               : ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_hcceeb104__0)
                                   ? (IData)(vlSelf->top__DOT__DI)
                                   : (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__DI_D)))),8);
    bufp->fullCData(oldp+59,(((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_hd00f3398__0)
                               ? (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__DI_D)
                               : ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h7c52ac83__0)
                                   ? (IData)(vlSelf->top__DOT__DI)
                                   : (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__DI_D)))),8);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__unnamedblk1__DOT__iter),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__unnamedblk3__DOT__iter),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i),32);
    bufp->fullBit(oldp+64,(vlSelf->top__DOT__full));
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__empty));
    bufp->fullIData(oldp+66,(8U),32);
    bufp->fullBit(oldp+67,(vlSelf->top__DOT__ins1__DOT__f1__DOT__r__DOT__en0_r));
    bufp->fullBit(oldp+68,(vlSelf->top__DOT__ins1__DOT__f1__DOT__r__DOT__en1_r));
}
