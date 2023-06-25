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
    tracep->declBit(c+28,"clk", false,-1);
    tracep->declBit(c+29,"rstn", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+31,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+32,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+33,"DEPTH", false,-1, 31,0);
    tracep->declBit(c+28,"clk", false,-1);
    tracep->declBit(c+29,"rstn", false,-1);
    tracep->declBit(c+30,"rst", false,-1);
    tracep->declBit(c+1,"rd", false,-1);
    tracep->declBit(c+2,"wr", false,-1);
    tracep->declBus(c+3,"data_in", false,-1, 1,0);
    tracep->declBit(c+24,"empty", false,-1);
    tracep->declBit(c+25,"full", false,-1);
    tracep->declBus(c+7,"data_out", false,-1, 1,0);
    tracep->declBus(c+4,"verif_data_in", false,-1, 1,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+31,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+32,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+33,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+3,"data_in", false,-1, 1,0);
    tracep->declBit(c+28,"clk", false,-1);
    tracep->declBit(c+30,"rst", false,-1);
    tracep->declBit(c+1,"rd", false,-1);
    tracep->declBit(c+2,"wr", false,-1);
    tracep->declBit(c+24,"empty", false,-1);
    tracep->declBit(c+25,"full", false,-1);
    tracep->declBus(c+7,"data_out", false,-1, 1,0);
    tracep->declBus(c+26,"rd_ptr", false,-1, 4,0);
    tracep->declBus(c+27,"wr_ptr", false,-1, 4,0);
    tracep->pushNamePrefix("dp ");
    tracep->declBus(c+32,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+31,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+33,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+27,"wr_addr", false,-1, 4,0);
    tracep->declBus(c+3,"wr_data", false,-1, 1,0);
    tracep->declBit(c+2,"wr_en", false,-1);
    tracep->declBus(c+26,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+7,"rd_data", false,-1, 1,0);
    tracep->declBit(c+1,"rd_en", false,-1);
    tracep->declBit(c+28,"clk", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+8+i*1,"mem", true,(i+0), 1,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+5,"iter", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+6,"i", false,-1, 31,0);
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
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__rd));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__wr));
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__data_in),2);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__verif_data_in),2);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__unnamedblk1__DOT__iter),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__data_out),2);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[0]),2);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[1]),2);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[2]),2);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[3]),2);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[4]),2);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[5]),2);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[6]),2);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[7]),2);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[8]),2);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[9]),2);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[10]),2);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[11]),2);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[12]),2);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[13]),2);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[14]),2);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__dut__DOT__dp__DOT__mem[15]),2);
    bufp->fullBit(oldp+24,(((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                            == (IData)(vlSelf->top__DOT__dut__DOT__wr_ptr))));
    bufp->fullBit(oldp+25,(((IData)(vlSelf->top__DOT__dut__DOT__wr_ptr) 
                            == ((0x10U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__rd_ptr) 
                                              >> 4U)) 
                                          << 4U)) | 
                                (0xfU & (IData)(vlSelf->top__DOT__dut__DOT__rd_ptr))))));
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__dut__DOT__rd_ptr),5);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__dut__DOT__wr_ptr),5);
    bufp->fullBit(oldp+28,(vlSelf->clk));
    bufp->fullBit(oldp+29,(vlSelf->rstn));
    bufp->fullBit(oldp+30,(vlSelf->top__DOT__rst));
    bufp->fullIData(oldp+31,(5U),32);
    bufp->fullIData(oldp+32,(2U),32);
    bufp->fullIData(oldp+33,(0x10U),32);
}
