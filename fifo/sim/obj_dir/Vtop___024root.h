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
    CData/*0:0*/ top__DOT__rst;
    VL_IN8(rstn,0,0);
    CData/*0:0*/ top__DOT__rd;
    CData/*0:0*/ top__DOT__wr;
    CData/*1:0*/ top__DOT__data_in;
    CData/*0:0*/ top__DOT__empty;
    CData/*0:0*/ top__DOT__full;
    CData/*1:0*/ top__DOT__data_out;
    CData/*1:0*/ top__DOT__verif_data_in;
    CData/*4:0*/ top__DOT__dut__DOT__rd_ptr;
    CData/*4:0*/ top__DOT__dut__DOT__wr_ptr;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ top__DOT__unnamedblk1__DOT__iter;
    IData/*31:0*/ top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*1:0*/, 16> top__DOT__dut__DOT__dp__DOT__mem;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlQueue<CData/*1:0*/> top__DOT__verif_data_q;
    VlTriggerScheduler __VtrigSched_h3cade7ad__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

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
