// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAdder.h for the primary calling header

#include "VAdder.h"            // For This
#include "VAdder__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VAdder) {
    VAdder__Syms* __restrict vlSymsp = __VlSymsp = new VAdder__Syms(this, name());
    VAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAdder::__Vconfigure(VAdder__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAdder::~VAdder() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VAdder::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAdder::eval\n"); );
    VAdder__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VAdder::_eval_initial_loop(VAdder__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VAdder::_combo__TOP__1(VAdder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder::_combo__TOP__1\n"); );
    VAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Adder__DOT___T_16 = ((IData)(vlTOPp->io_cin) 
				 & (IData)(vlTOPp->io_a));
    vlTOPp->io_sum = ((((((~ (IData)(vlTOPp->io_cin)) 
			  & (~ (IData)(vlTOPp->io_a))) 
			 & (IData)(vlTOPp->io_b)) | 
			(((~ (IData)(vlTOPp->io_cin)) 
			  & (IData)(vlTOPp->io_a)) 
			 & (~ (IData)(vlTOPp->io_b)))) 
		       | (((IData)(vlTOPp->io_cin) 
			   & (~ (IData)(vlTOPp->io_a))) 
			  & (~ (IData)(vlTOPp->io_b)))) 
		      | ((IData)(vlTOPp->Adder__DOT___T_16) 
			 & (IData)(vlTOPp->io_b)));
    vlTOPp->io_cout = ((((IData)(vlTOPp->io_a) & (IData)(vlTOPp->io_b)) 
			| (IData)(vlTOPp->Adder__DOT___T_16)) 
		       | ((IData)(vlTOPp->io_b) & (IData)(vlTOPp->io_cin)));
}

void VAdder::_eval(VAdder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder::_eval\n"); );
    VAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VAdder::_eval_initial(VAdder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder::_eval_initial\n"); );
    VAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAdder::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder::final\n"); );
    // Variables
    VAdder__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAdder::_eval_settle(VAdder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder::_eval_settle\n"); );
    VAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VAdder::_change_request(VAdder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder::_change_request\n"); );
    VAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAdder::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_a & 0xfeU))) {
	Verilated::overWidthError("io_a");}
    if (VL_UNLIKELY((io_b & 0xfeU))) {
	Verilated::overWidthError("io_b");}
    if (VL_UNLIKELY((io_cin & 0xfeU))) {
	Verilated::overWidthError("io_cin");}
}
#endif // VL_DEBUG

void VAdder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_a = VL_RAND_RESET_I(1);
    io_b = VL_RAND_RESET_I(1);
    io_cin = VL_RAND_RESET_I(1);
    io_sum = VL_RAND_RESET_I(1);
    io_cout = VL_RAND_RESET_I(1);
    Adder__DOT___T_16 = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
