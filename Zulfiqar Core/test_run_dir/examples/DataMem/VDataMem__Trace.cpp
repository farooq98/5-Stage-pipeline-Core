// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDataMem__Syms.h"


//======================

void VDataMem::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDataMem* t=(VDataMem*)userthis;
    VDataMem__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VDataMem::traceChgThis(VDataMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDataMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VDataMem::traceChgThis__2(VDataMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDataMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->clock));
	vcdp->chgBit  (c+2,(vlTOPp->reset));
	vcdp->chgBit  (c+3,(vlTOPp->io_load));
	vcdp->chgBit  (c+4,(vlTOPp->io_store));
	vcdp->chgBus  (c+5,(vlTOPp->io_addrr),32);
	vcdp->chgBus  (c+6,(vlTOPp->io_storedata),32);
	vcdp->chgBus  (c+7,(vlTOPp->io_dataOut),32);
	vcdp->chgBus  (c+8,(vlTOPp->DataMem__DOT__mem
			    [(0x3ffU & vlTOPp->io_addrr)]),32);
	vcdp->chgBus  (c+9,((0x3ffU & vlTOPp->io_addrr)),10);
    }
}
