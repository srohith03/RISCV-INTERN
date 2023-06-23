// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rstn,0,0);
    CData/*7:0*/ top__DOT__DI;
    CData/*0:0*/ top__DOT__RE;
    CData/*0:0*/ top__DOT__WE;
    CData/*0:0*/ top__DOT__full;
    CData/*0:0*/ top__DOT__empty;
    CData/*7:0*/ top__DOT__verif_DI;
    CData/*0:0*/ top__DOT__ins1__DOT__f1__DOT__we_n;
    CData/*0:0*/ top__DOT__ins1__DOT__f1__DOT__re_n;
    CData/*0:0*/ top__DOT__ins1__DOT__f1__DOT__read_valid_0;
    CData/*0:0*/ top__DOT__ins1__DOT__f1__DOT__read_valid_1;
    CData/*0:0*/ top__DOT__ins1__DOT__f1__DOT__ENABLE_0;
    CData/*0:0*/ top__DOT__ins1__DOT__f1__DOT__ENABLE_1;
    CData/*0:0*/ top__DOT__ins1__DOT__f1__DOT__WE_0;
    CData/*0:0*/ top__DOT__ins1__DOT__f1__DOT__WE_1;
    CData/*1:0*/ top__DOT__ins1__DOT__f1__DOT__A_0;
    CData/*1:0*/ top__DOT__ins1__DOT__f1__DOT__A_1;
    CData/*7:0*/ top__DOT__ins1__DOT__f1__DOT__RAM_0_out;
    CData/*7:0*/ top__DOT__ins1__DOT__f1__DOT__RAM_1_out;
    CData/*0:0*/ top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__full;
    CData/*0:0*/ top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__empty;
    CData/*3:0*/ top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__rd_addr;
    CData/*3:0*/ top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__wr_addr;
    CData/*0:0*/ top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__CONFLICT;
    CData/*0:0*/ top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__W_bit_D;
    CData/*1:0*/ top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__W_A_D;
    CData/*7:0*/ top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__DI_D;
    CData/*0:0*/ top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__flag;
    CData/*0:0*/ top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_hcceeb104__0;
    CData/*0:0*/ top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h553f3f9c__0;
    CData/*0:0*/ top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h7c52ac83__0;
    CData/*0:0*/ top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_hd00f3398__0;
    CData/*0:0*/ top__DOT__ins1__DOT__f1__DOT__r__DOT__en0_r;
    CData/*0:0*/ top__DOT__ins1__DOT__f1__DOT__r__DOT__en1_r;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ top__DOT__unnamedblk1__DOT__iter;
    IData/*31:0*/ top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ top__DOT__unnamedblk3__DOT__iter;
    IData/*31:0*/ top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i;
    IData/*31:0*/ top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__ram;
    VlUnpacked<CData/*7:0*/, 8> top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__ram;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlQueue<CData/*7:0*/> top__DOT__verif_data_q;
    VlTriggerScheduler __VtrigSched_h3cade7ad__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
