// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInsMem__Syms.h"


//======================

void VInsMem::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VInsMem* t=(VInsMem*)userthis;
    VInsMem__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VInsMem::traceChgThis(VInsMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VInsMem::traceChgThis__2(VInsMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->clock));
	vcdp->chgBit  (c+2,(vlTOPp->reset));
	vcdp->chgBus  (c+3,(vlTOPp->io_wrAddr),32);
	vcdp->chgBus  (c+4,(vlTOPp->io_rdData),32);
	vcdp->chgBus  (c+5,(vlTOPp->InsMem__DOT__mem
			    [(0x3ffU & vlTOPp->io_wrAddr)]),32);
	vcdp->chgBus  (c+6,((0x3ffU & vlTOPp->io_wrAddr)),10);
    }
}
