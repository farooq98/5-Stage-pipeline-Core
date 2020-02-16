// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFullAdder2__Syms.h"


//======================

void VFullAdder2::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VFullAdder2* t=(VFullAdder2*)userthis;
    VFullAdder2__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VFullAdder2::traceChgThis(VFullAdder2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFullAdder2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VFullAdder2::traceChgThis__2(VFullAdder2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFullAdder2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->FullAdder2__DOT__add1_io_cout));
    }
}

void VFullAdder2::traceChgThis__3(VFullAdder2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFullAdder2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+2,(vlTOPp->clock));
	vcdp->chgBit  (c+3,(vlTOPp->reset));
	vcdp->chgBit  (c+4,(vlTOPp->io_cin));
	vcdp->chgBit  (c+5,(vlTOPp->io_a1));
	vcdp->chgBit  (c+6,(vlTOPp->io_b1));
	vcdp->chgBit  (c+7,(vlTOPp->io_a2));
	vcdp->chgBit  (c+8,(vlTOPp->io_b2));
	vcdp->chgBit  (c+9,(vlTOPp->io_sum0));
	vcdp->chgBit  (c+10,(vlTOPp->io_sum1));
	vcdp->chgBit  (c+11,(vlTOPp->io_cout));
	vcdp->chgBit  (c+12,(((((((~ (IData)(vlTOPp->io_cin)) 
				  & (~ (IData)(vlTOPp->io_a1))) 
				 & (IData)(vlTOPp->io_b1)) 
				| (((~ (IData)(vlTOPp->io_cin)) 
				    & (IData)(vlTOPp->io_a1)) 
				   & (~ (IData)(vlTOPp->io_b1)))) 
			       | (((IData)(vlTOPp->io_cin) 
				   & (~ (IData)(vlTOPp->io_a1))) 
				  & (~ (IData)(vlTOPp->io_b1)))) 
			      | ((IData)(vlTOPp->FullAdder2__DOT__add1__DOT___T_16) 
				 & (IData)(vlTOPp->io_b1)))));
	vcdp->chgBit  (c+13,(((((((~ (IData)(vlTOPp->FullAdder2__DOT__add1_io_cout)) 
				  & (~ (IData)(vlTOPp->io_a2))) 
				 & (IData)(vlTOPp->io_b2)) 
				| (((~ (IData)(vlTOPp->FullAdder2__DOT__add1_io_cout)) 
				    & (IData)(vlTOPp->io_a2)) 
				   & (~ (IData)(vlTOPp->io_b2)))) 
			       | (((IData)(vlTOPp->FullAdder2__DOT__add1_io_cout) 
				   & (~ (IData)(vlTOPp->io_a2))) 
				  & (~ (IData)(vlTOPp->io_b2)))) 
			      | ((IData)(vlTOPp->FullAdder2__DOT__add2__DOT___T_16) 
				 & (IData)(vlTOPp->io_b2)))));
	vcdp->chgBit  (c+14,(((((IData)(vlTOPp->io_a2) 
				& (IData)(vlTOPp->io_b2)) 
			       | (IData)(vlTOPp->FullAdder2__DOT__add2__DOT___T_16)) 
			      | ((IData)(vlTOPp->io_b2) 
				 & (IData)(vlTOPp->FullAdder2__DOT__add1_io_cout)))));
    }
}
