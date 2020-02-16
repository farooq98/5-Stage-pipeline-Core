// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAdder__Syms.h"


//======================

void VAdder::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAdder* t=(VAdder*)userthis;
    VAdder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VAdder::traceChgThis(VAdder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAdder::traceChgThis__2(VAdder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->clock));
	vcdp->chgBit  (c+2,(vlTOPp->reset));
	vcdp->chgBit  (c+3,(vlTOPp->io_a));
	vcdp->chgBit  (c+4,(vlTOPp->io_b));
	vcdp->chgBit  (c+5,(vlTOPp->io_cin));
	vcdp->chgBit  (c+6,(vlTOPp->io_sum));
	vcdp->chgBit  (c+7,(vlTOPp->io_cout));
    }
}
