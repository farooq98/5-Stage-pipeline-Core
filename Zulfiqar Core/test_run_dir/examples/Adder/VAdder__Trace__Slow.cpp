// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAdder__Syms.h"


//======================

void VAdder::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VAdder::traceInit, &VAdder::traceFull, &VAdder::traceChg, this);
}
void VAdder::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAdder* t=(VAdder*)userthis;
    VAdder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAdder::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAdder* t=(VAdder*)userthis;
    VAdder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VAdder::traceInitThis(VAdder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAdder::traceFullThis(VAdder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAdder::traceInitThis__1(VAdder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+3,"io_a",-1);
	vcdp->declBit  (c+4,"io_b",-1);
	vcdp->declBit  (c+5,"io_cin",-1);
	vcdp->declBit  (c+6,"io_sum",-1);
	vcdp->declBit  (c+7,"io_cout",-1);
	vcdp->declBit  (c+1,"Adder clock",-1);
	vcdp->declBit  (c+2,"Adder reset",-1);
	vcdp->declBit  (c+3,"Adder io_a",-1);
	vcdp->declBit  (c+4,"Adder io_b",-1);
	vcdp->declBit  (c+5,"Adder io_cin",-1);
	vcdp->declBit  (c+6,"Adder io_sum",-1);
	vcdp->declBit  (c+7,"Adder io_cout",-1);
	// Tracing: Adder _T_15 // Ignored: Inlined leading underscore at Adder.v:10
	// Tracing: Adder _T_16 // Ignored: Inlined leading underscore at Adder.v:11
	// Tracing: Adder _T_17 // Ignored: Inlined leading underscore at Adder.v:12
	// Tracing: Adder _T_18 // Ignored: Inlined leading underscore at Adder.v:13
	// Tracing: Adder _T_20 // Ignored: Inlined leading underscore at Adder.v:14
	// Tracing: Adder _T_21 // Ignored: Inlined leading underscore at Adder.v:15
	// Tracing: Adder _T_22 // Ignored: Inlined leading underscore at Adder.v:16
	// Tracing: Adder _T_23 // Ignored: Inlined leading underscore at Adder.v:17
	// Tracing: Adder _T_25 // Ignored: Inlined leading underscore at Adder.v:18
	// Tracing: Adder _T_26 // Ignored: Inlined leading underscore at Adder.v:19
	// Tracing: Adder _T_27 // Ignored: Inlined leading underscore at Adder.v:20
	// Tracing: Adder _T_28 // Ignored: Inlined leading underscore at Adder.v:21
	// Tracing: Adder _T_30 // Ignored: Inlined leading underscore at Adder.v:22
	// Tracing: Adder _T_32 // Ignored: Inlined leading underscore at Adder.v:23
	// Tracing: Adder _T_33 // Ignored: Inlined leading underscore at Adder.v:24
	// Tracing: Adder _T_35 // Ignored: Inlined leading underscore at Adder.v:25
    }
}

void VAdder::traceFullThis__1(VAdder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
	vcdp->fullBit  (c+3,(vlTOPp->io_a));
	vcdp->fullBit  (c+4,(vlTOPp->io_b));
	vcdp->fullBit  (c+5,(vlTOPp->io_cin));
	vcdp->fullBit  (c+6,(vlTOPp->io_sum));
	vcdp->fullBit  (c+7,(vlTOPp->io_cout));
    }
}
