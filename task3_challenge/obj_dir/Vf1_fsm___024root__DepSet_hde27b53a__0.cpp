// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_fsm.h for the primary calling header

#include "verilated.h"

#include "Vf1_fsm___024root.h"

VL_INLINE_OPT void Vf1_fsm___024root___sequent__TOP__0(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->f1_fsm__DOT__current_state = 0U;
    } else if (vlSelf->en) {
        vlSelf->f1_fsm__DOT__current_state = vlSelf->f1_fsm__DOT__next_state;
    }
    if (((((((((0U == vlSelf->f1_fsm__DOT__current_state) 
               | (1U == vlSelf->f1_fsm__DOT__current_state)) 
              | (2U == vlSelf->f1_fsm__DOT__current_state)) 
             | (3U == vlSelf->f1_fsm__DOT__current_state)) 
            | (4U == vlSelf->f1_fsm__DOT__current_state)) 
           | (5U == vlSelf->f1_fsm__DOT__current_state)) 
          | (6U == vlSelf->f1_fsm__DOT__current_state)) 
         | (7U == vlSelf->f1_fsm__DOT__current_state))) {
        if ((0U == vlSelf->f1_fsm__DOT__current_state)) {
            vlSelf->data_out = 0U;
            vlSelf->f1_fsm__DOT__next_state = 1U;
        } else if ((1U == vlSelf->f1_fsm__DOT__current_state)) {
            vlSelf->data_out = 1U;
            vlSelf->f1_fsm__DOT__next_state = 2U;
        } else if ((2U == vlSelf->f1_fsm__DOT__current_state)) {
            vlSelf->data_out = 3U;
            vlSelf->f1_fsm__DOT__next_state = 3U;
        } else if ((3U == vlSelf->f1_fsm__DOT__current_state)) {
            vlSelf->data_out = 7U;
            vlSelf->f1_fsm__DOT__next_state = 4U;
        } else if ((4U == vlSelf->f1_fsm__DOT__current_state)) {
            vlSelf->data_out = 0xfU;
            vlSelf->f1_fsm__DOT__next_state = 5U;
        } else if ((5U == vlSelf->f1_fsm__DOT__current_state)) {
            vlSelf->data_out = 0x1fU;
            vlSelf->f1_fsm__DOT__next_state = 6U;
        } else if ((6U == vlSelf->f1_fsm__DOT__current_state)) {
            vlSelf->data_out = 0x3fU;
            vlSelf->f1_fsm__DOT__next_state = 7U;
        } else {
            vlSelf->data_out = 0x7fU;
            vlSelf->f1_fsm__DOT__next_state = 8U;
        }
    } else {
        vlSelf->data_out = ((8U == vlSelf->f1_fsm__DOT__current_state)
                             ? 0xffU : 0U);
        vlSelf->f1_fsm__DOT__next_state = 0U;
    }
}

void Vf1_fsm___024root___eval(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vf1_fsm___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vf1_fsm___024root___eval_debug_assertions(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
