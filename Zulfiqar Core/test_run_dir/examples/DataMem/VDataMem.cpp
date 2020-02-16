// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDataMem.h for the primary calling header

#include "VDataMem.h"          // For This
#include "VDataMem__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VDataMem) {
    VDataMem__Syms* __restrict vlSymsp = __VlSymsp = new VDataMem__Syms(this, name());
    VDataMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VDataMem::__Vconfigure(VDataMem__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VDataMem::~VDataMem() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VDataMem::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDataMem::eval\n"); );
    VDataMem__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VDataMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VDataMem::_eval_initial_loop(VDataMem__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VDataMem::_sequent__TOP__1(VDataMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMem::_sequent__TOP__1\n"); );
    VDataMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvset__DataMem__DOT__mem__v0,0,0);
    VL_SIG16(__Vdlyvdim0__DataMem__DOT__mem__v0,9,0);
    VL_SIG(__Vdlyvval__DataMem__DOT__mem__v0,31,0);
    // Body
    __Vdlyvset__DataMem__DOT__mem__v0 = 0U;
    // ALWAYS at DataMem.v:56
    if (vlTOPp->io_store) {
	__Vdlyvval__DataMem__DOT__mem__v0 = vlTOPp->io_storedata;
	__Vdlyvset__DataMem__DOT__mem__v0 = 1U;
	__Vdlyvdim0__DataMem__DOT__mem__v0 = (0x3ffU 
					      & vlTOPp->io_addrr);
    }
    // ALWAYSPOST at DataMem.v:58
    if (__Vdlyvset__DataMem__DOT__mem__v0) {
	vlTOPp->DataMem__DOT__mem[__Vdlyvdim0__DataMem__DOT__mem__v0] 
	    = __Vdlyvval__DataMem__DOT__mem__v0;
    }
}

VL_INLINE_OPT void VDataMem::_settle__TOP__2(VDataMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMem::_settle__TOP__2\n"); );
    VDataMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_dataOut = vlTOPp->DataMem__DOT__mem[
	(0x3ffU & vlTOPp->io_addrr)];
}

void VDataMem::_eval(VDataMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMem::_eval\n"); );
    VDataMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_settle__TOP__2(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VDataMem::_eval_initial(VDataMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMem::_eval_initial\n"); );
    VDataMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDataMem::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMem::final\n"); );
    // Variables
    VDataMem__Syms* __restrict vlSymsp = this->__VlSymsp;
    VDataMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDataMem::_eval_settle(VDataMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMem::_eval_settle\n"); );
    VDataMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VDataMem::_change_request(VDataMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMem::_change_request\n"); );
    VDataMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VDataMem::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMem::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_load & 0xfeU))) {
	Verilated::overWidthError("io_load");}
    if (VL_UNLIKELY((io_store & 0xfeU))) {
	Verilated::overWidthError("io_store");}
}
#endif // VL_DEBUG

void VDataMem::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMem::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_load = VL_RAND_RESET_I(1);
    io_store = VL_RAND_RESET_I(1);
    io_addrr = VL_RAND_RESET_I(32);
    io_storedata = VL_RAND_RESET_I(32);
    io_dataOut = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    DataMem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
