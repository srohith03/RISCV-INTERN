// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("sim_tb.v", 10, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h1b0c8468__0;
    top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h1b0c8468__0 = 0;
    CData/*0:0*/ top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h8582e781__0;
    top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h8582e781__0 = 0;
    // Body
    vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h553f3f9c__0 
        = ((~ (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__W_bit_D)) 
           & (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__flag));
    vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_hd00f3398__0 
        = ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__W_bit_D) 
           & (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__flag));
    vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__empty 
        = ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__rd_addr) 
           == (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__wr_addr));
    vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__full 
        = ((((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__rd_addr) 
             ^ (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__wr_addr)) 
            >> 3U) & ((7U & (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__rd_addr)) 
                      == (7U & (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__wr_addr))));
    vlSelf->top__DOT__ins1__DOT__f1__DOT__re_n = ((IData)(vlSelf->top__DOT__RE) 
                                                  & ((~ (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__empty)) 
                                                     & (IData)(vlSelf->rstn)));
    vlSelf->top__DOT__ins1__DOT__f1__DOT__we_n = ((IData)(vlSelf->top__DOT__WE) 
                                                  & (((~ (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__full)) 
                                                      & (IData)(vlSelf->rstn)) 
                                                     | ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__full) 
                                                        & (IData)(vlSelf->top__DOT__RE))));
    top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h1b0c8468__0 
        = ((~ (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__rd_addr)) 
           & (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__re_n));
    top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h8582e781__0 
        = ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__re_n) 
           & (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__rd_addr));
    vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__CONFLICT 
        = ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__re_n) 
           & ((~ ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__rd_addr) 
                  ^ (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__wr_addr))) 
              & (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__we_n)));
    vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_hcceeb104__0 
        = ((~ (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__wr_addr)) 
           & (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__we_n));
    vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h7c52ac83__0 
        = ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__we_n) 
           & (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__wr_addr));
    vlSelf->top__DOT__ins1__DOT__f1__DOT__ENABLE_0 
        = ((IData)(top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h1b0c8468__0) 
           | ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_hcceeb104__0) 
              | (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h553f3f9c__0)));
    vlSelf->top__DOT__ins1__DOT__f1__DOT__WE_0 = ((
                                                   (~ (IData)(top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h1b0c8468__0)) 
                                                   & (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_hcceeb104__0)) 
                                                  | (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h553f3f9c__0));
    vlSelf->top__DOT__ins1__DOT__f1__DOT__A_0 = (3U 
                                                 & ((IData)(top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h1b0c8468__0)
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__rd_addr) 
                                                     >> 1U)
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h553f3f9c__0)
                                                      ? (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__W_A_D)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_hcceeb104__0)
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__wr_addr) 
                                                       >> 1U)
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__rd_addr) 
                                                       >> 1U)))));
    vlSelf->top__DOT__ins1__DOT__f1__DOT__ENABLE_1 
        = ((IData)(top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h8582e781__0) 
           | ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h7c52ac83__0) 
              | (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_hd00f3398__0)));
    vlSelf->top__DOT__ins1__DOT__f1__DOT__WE_1 = ((
                                                   (~ (IData)(top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h8582e781__0)) 
                                                   & (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h7c52ac83__0)) 
                                                  | (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_hd00f3398__0));
    vlSelf->top__DOT__ins1__DOT__f1__DOT__A_1 = (3U 
                                                 & ((IData)(top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h8582e781__0)
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__rd_addr) 
                                                     >> 1U)
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_hd00f3398__0)
                                                      ? (IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__W_A_D)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h7c52ac83__0)
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__wr_addr) 
                                                       >> 1U)
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__rd_addr) 
                                                       >> 1U)))));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rstn = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DI = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__RE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__verif_data_q.atDefault() = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__verif_DI = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__unnamedblk1__DOT__iter = 0;
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__unnamedblk3__DOT__iter = 0;
    vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->top__DOT__ins1__DOT__f1__DOT__we_n = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__re_n = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__read_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__read_valid_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__ENABLE_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__ENABLE_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__WE_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__WE_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__A_0 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__A_1 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0_out = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1_out = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__rd_addr = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__update_addr__DOT__lut1__DOT__wr_addr = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__CONFLICT = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__W_bit_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__W_A_D = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__DI_D = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_hcceeb104__0 = 0;
    vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h553f3f9c__0 = 0;
    vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_h7c52ac83__0 = 0;
    vlSelf->top__DOT__ins1__DOT__f1__DOT__mem_ctr_1__DOT____VdfgTmp_hd00f3398__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_0__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__ins1__DOT__f1__DOT__RAM_1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__ins1__DOT__f1__DOT__r__DOT__en0_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ins1__DOT__f1__DOT__r__DOT__en1_r = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
