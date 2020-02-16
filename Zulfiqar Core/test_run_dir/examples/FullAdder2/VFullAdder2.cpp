// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFullAdder2.h for the primary calling header

#include "VFullAdder2.h"       // For This
#include "VFullAdder2__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VFullAdder2) {
    VFullAdder2__Syms* __restrict vlSymsp = __VlSymsp = new VFullAdder2__Syms(this, name());
    VFullAdder2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VFullAdder2::__Vconfigure(VFullAdder2__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VFullAdder2::~VFullAdder2() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VFullAdder2::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFullAdder2::eval\n"); );
    VFullAdder2__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VFullAdder2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VFullAdder2::_eval_initial_loop(VFullAdder2__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VFullAdder2::_combo__TOP__1(VFullAdder2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder2::_combo__TOP__1\n"); );
    VFullAdder2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->FullAdder2__DOT__add1__DOT___T_16 = ((IData)(vlTOPp->io_cin) 
						 & (IData)(vlTOPp->io_a1));
    vlTOPp->io_sum0 = ((((((~ (IData)(vlTOPp->io_cin)) 
			   & (~ (IData)(vlTOPp->io_a1))) 
			  & (IData)(vlTOPp->io_b1)) 
			 | (((~ (IData)(vlTOPp->io_cin)) 
			     & (IData)(vlTOPp->io_a1)) 
			    & (~ (IData)(vlTOPp->io_b1)))) 
			| (((IData)(vlTOPp->io_cin) 
			    & (~ (IData)(vlTOPp->io_a1))) 
			   & (~ (IData)(vlTOPp->io_b1)))) 
		       | ((IData)(vlTOPp->FullAdder2__DOT__add1__DOT___T_16) 
			  & (IData)(vlTOPp->io_b1)));
    vlTOPp->FullAdder2__DOT__add1_io_cout = ((((IData)(vlTOPp->io_a1) 
					       & (IData)(vlTOPp->io_b1)) 
					      | (IData)(vlTOPp->FullAdder2__DOT__add1__DOT___T_16)) 
					     | ((IData)(vlTOPp->io_b1) 
						& (IData)(vlTOPp->io_cin)));
    vlTOPp->FullAdder2__DOT__add2__DOT___T_16 = ((IData)(vlTOPp->FullAdder2__DOT__add1_io_cout) 
						 & (IData)(vlTOPp->io_a2));
    vlTOPp->io_sum1 = ((((((~ (IData)(vlTOPp->FullAdder2__DOT__add1_io_cout)) 
			   & (~ (IData)(vlTOPp->io_a2))) 
			  & (IData)(vlTOPp->io_b2)) 
			 | (((~ (IData)(vlTOPp->FullAdder2__DOT__add1_io_cout)) 
			     & (IData)(vlTOPp->io_a2)) 
			    & (~ (IData)(vlTOPp->io_b2)))) 
			| (((IData)(vlTOPp->FullAdder2__DOT__add1_io_cout) 
			    & (~ (IData)(vlTOPp->io_a2))) 
			   & (~ (IData)(vlTOPp->io_b2)))) 
		       | ((IData)(vlTOPp->FullAdder2__DOT__add2__DOT___T_16) 
			  & (IData)(vlTOPp->io_b2)));
    vlTOPp->io_cout = ((((IData)(vlTOPp->io_a2) & (IData)(vlTOPp->io_b2)) 
			| (IData)(vlTOPp->FullAdder2__DOT__add2__DOT___T_16)) 
		       | ((IData)(vlTOPp->io_b2) & (IData)(vlTOPp->FullAdder2__DOT__add1_io_cout)));
}

void VFullAdder2::_eval(VFullAdder2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder2::_eval\n"); );
    VFullAdder2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
}

void VFullAdder2::_eval_initial(VFullAdder2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder2::_eval_initial\n"); );
    VFullAdder2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFullAdder2::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder2::final\n"); );
    // Variables
    VFullAdder2__Syms* __restrict vlSymsp = this->__VlSymsp;
    VFullAdder2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFullAdder2::_eval_settle(VFullAdder2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder2::_eval_settle\n"); );
    VFullAdder2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VFullAdder2::_change_request(VFullAdder2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder2::_change_request\n"); );
    VFullAdder2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VFullAdder2::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder2::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_cin & 0xfeU))) {
	Verilated::overWidthError("io_cin");}
    if (VL_UNLIKELY((io_a1 & 0xfeU))) {
	Verilated::overWidthError("io_a1");}
    if (VL_UNLIKELY((io_b1 & 0xfeU))) {
	Verilated::overWidthError("io_b1");}
    if (VL_UNLIKELY((io_a2 & 0xfeU))) {
	Verilated::overWidthError("io_a2");}
    if (VL_UNLIKELY((io_b2 & 0xfeU))) {
	Verilated::overWidthError("io_b2");}
}
#endif // VL_DEBUG

void VFullAdder2::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder2::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_cin = VL_RAND_RESET_I(1);
    io_a1 = VL_RAND_RESET_I(1);
    io_b1 = VL_RAND_RESET_I(1);
    io_a2 = VL_RAND_RESET_I(1);
    io_b2 = VL_RAND_RESET_I(1);
    io_sum0 = VL_RAND_RESET_I(1);
    io_sum1 = VL_RAND_RESET_I(1);
    io_cout = VL_RAND_RESET_I(1);
    FullAdder2__DOT__add1_io_cout = VL_RAND_RESET_I(1);
    FullAdder2__DOT__add1__DOT___T_16 = VL_RAND_RESET_I(1);
    FullAdder2__DOT__add2__DOT___T_16 = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
