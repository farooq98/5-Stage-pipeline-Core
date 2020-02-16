// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInsMem__Syms.h"


//======================

void VInsMem::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VInsMem::traceInit, &VInsMem::traceFull, &VInsMem::traceChg, this);
}
void VInsMem::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VInsMem* t=(VInsMem*)userthis;
    VInsMem__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VInsMem::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VInsMem* t=(VInsMem*)userthis;
    VInsMem__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VInsMem::traceInitThis(VInsMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VInsMem::traceFullThis(VInsMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VInsMem::traceInitThis__1(VInsMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBus  (c+3,"io_wrAddr",-1,31,0);
	vcdp->declBus  (c+4,"io_rdData",-1,31,0);
	vcdp->declBit  (c+1,"InsMem clock",-1);
	vcdp->declBit  (c+2,"InsMem reset",-1);
	vcdp->declBus  (c+3,"InsMem io_wrAddr",-1,31,0);
	vcdp->declBus  (c+4,"InsMem io_rdData",-1,31,0);
	// Tracing: InsMem mem // Ignored: Wide memory > --trace-max-array ents at InsMem.v:7
	// Tracing: InsMem _RAND_0 // Ignored: Inlined leading underscore at InsMem.v:8
	vcdp->declBus  (c+5,"InsMem mem__T_12_data",-1,31,0);
	vcdp->declBus  (c+6,"InsMem mem__T_12_addr",-1,9,0);
	vcdp->declBit  (c+1,"InsMem BindsTo_0_InsMem_Inst clock",-1);
	vcdp->declBit  (c+2,"InsMem BindsTo_0_InsMem_Inst reset",-1);
	vcdp->declBus  (c+3,"InsMem BindsTo_0_InsMem_Inst io_wrAddr",-1,31,0);
	vcdp->declBus  (c+4,"InsMem BindsTo_0_InsMem_Inst io_rdData",-1,31,0);
    }
}

void VInsMem::traceFullThis__1(VInsMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
	vcdp->fullBus  (c+3,(vlTOPp->io_wrAddr),32);
	vcdp->fullBus  (c+4,(vlTOPp->io_rdData),32);
	vcdp->fullBus  (c+5,(vlTOPp->InsMem__DOT__mem
			     [(0x3ffU & vlTOPp->io_wrAddr)]),32);
	vcdp->fullBus  (c+6,((0x3ffU & vlTOPp->io_wrAddr)),10);
    }
}
