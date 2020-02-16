// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDataMem__Syms.h"


//======================

void VDataMem::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VDataMem::traceInit, &VDataMem::traceFull, &VDataMem::traceChg, this);
}
void VDataMem::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VDataMem* t=(VDataMem*)userthis;
    VDataMem__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VDataMem::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDataMem* t=(VDataMem*)userthis;
    VDataMem__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VDataMem::traceInitThis(VDataMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDataMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VDataMem::traceFullThis(VDataMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDataMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VDataMem::traceInitThis__1(VDataMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDataMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+3,"io_load",-1);
	vcdp->declBit  (c+4,"io_store",-1);
	vcdp->declBus  (c+5,"io_addrr",-1,31,0);
	vcdp->declBus  (c+6,"io_storedata",-1,31,0);
	vcdp->declBus  (c+7,"io_dataOut",-1,31,0);
	vcdp->declBit  (c+1,"DataMem clock",-1);
	vcdp->declBit  (c+2,"DataMem reset",-1);
	vcdp->declBit  (c+3,"DataMem io_load",-1);
	vcdp->declBit  (c+4,"DataMem io_store",-1);
	vcdp->declBus  (c+5,"DataMem io_addrr",-1,31,0);
	vcdp->declBus  (c+6,"DataMem io_storedata",-1,31,0);
	vcdp->declBus  (c+7,"DataMem io_dataOut",-1,31,0);
	// Tracing: DataMem mem // Ignored: Wide memory > --trace-max-array ents at DataMem.v:10
	// Tracing: DataMem _RAND_0 // Ignored: Inlined leading underscore at DataMem.v:11
	vcdp->declBus  (c+8,"DataMem mem__T_20_data",-1,31,0);
	vcdp->declBus  (c+9,"DataMem mem__T_20_addr",-1,9,0);
	vcdp->declBus  (c+6,"DataMem mem__T_24_data",-1,31,0);
	vcdp->declBus  (c+9,"DataMem mem__T_24_addr",-1,9,0);
	vcdp->declBit  (c+10,"DataMem mem__T_24_mask",-1);
	vcdp->declBit  (c+4,"DataMem mem__T_24_en",-1);
    }
}

void VDataMem::traceFullThis__1(VDataMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDataMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
	vcdp->fullBit  (c+3,(vlTOPp->io_load));
	vcdp->fullBit  (c+4,(vlTOPp->io_store));
	vcdp->fullBus  (c+5,(vlTOPp->io_addrr),32);
	vcdp->fullBus  (c+6,(vlTOPp->io_storedata),32);
	vcdp->fullBus  (c+7,(vlTOPp->io_dataOut),32);
	vcdp->fullBus  (c+8,(vlTOPp->DataMem__DOT__mem
			     [(0x3ffU & vlTOPp->io_addrr)]),32);
	vcdp->fullBus  (c+9,((0x3ffU & vlTOPp->io_addrr)),10);
	vcdp->fullBit  (c+10,(1U));
    }
}
