// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInsMem.h for the primary calling header

#include "VInsMem.h"           // For This
#include "VInsMem__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VInsMem) {
    VInsMem__Syms* __restrict vlSymsp = __VlSymsp = new VInsMem__Syms(this, name());
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VInsMem::__Vconfigure(VInsMem__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VInsMem::~VInsMem() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VInsMem::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VInsMem::eval\n"); );
    VInsMem__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VInsMem::_eval_initial_loop(VInsMem__Syms* __restrict vlSymsp) {
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

void VInsMem::_initial__TOP__1(VInsMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInsMem::_initial__TOP__1\n"); );
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp1,223,0,7);
    // Body
    // INITIAL at /home/farooq/chisel-tutorial/test_run_dir/examples/InsMem/InsMem.InsMem.mem.v:8
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x46696c65U;
    __Vtemp1[2U] = 0x74657374U;
    __Vtemp1[3U] = 0x6f6f712fU;
    __Vtemp1[4U] = 0x2f666172U;
    __Vtemp1[5U] = 0x686f6d65U;
    __Vtemp1[6U] = 0x2fU;
    VL_READMEM_W (true,32,1024, 0,7, __Vtemp1, vlTOPp->InsMem__DOT__mem
		  ,0,~0);
}

VL_INLINE_OPT void VInsMem::_combo__TOP__2(VInsMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInsMem::_combo__TOP__2\n"); );
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_rdData = vlTOPp->InsMem__DOT__mem[(0x3ffU 
						  & vlTOPp->io_wrAddr)];
}

void VInsMem::_eval(VInsMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInsMem::_eval\n"); );
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VInsMem::_eval_initial(VInsMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInsMem::_eval_initial\n"); );
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VInsMem::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInsMem::final\n"); );
    // Variables
    VInsMem__Syms* __restrict vlSymsp = this->__VlSymsp;
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VInsMem::_eval_settle(VInsMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInsMem::_eval_settle\n"); );
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VInsMem::_change_request(VInsMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInsMem::_change_request\n"); );
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VInsMem::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInsMem::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VInsMem::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInsMem::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_wrAddr = VL_RAND_RESET_I(32);
    io_rdData = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    InsMem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
