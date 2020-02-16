// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFullAdder2__Syms.h"


//======================

void VFullAdder2::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VFullAdder2::traceInit, &VFullAdder2::traceFull, &VFullAdder2::traceChg, this);
}
void VFullAdder2::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VFullAdder2* t=(VFullAdder2*)userthis;
    VFullAdder2__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VFullAdder2::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VFullAdder2* t=(VFullAdder2*)userthis;
    VFullAdder2__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VFullAdder2::traceInitThis(VFullAdder2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFullAdder2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VFullAdder2::traceFullThis(VFullAdder2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFullAdder2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VFullAdder2::traceInitThis__1(VFullAdder2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFullAdder2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+2,"clock",-1);
	vcdp->declBit  (c+3,"reset",-1);
	vcdp->declBit  (c+4,"io_cin",-1);
	vcdp->declBit  (c+5,"io_a1",-1);
	vcdp->declBit  (c+6,"io_b1",-1);
	vcdp->declBit  (c+7,"io_a2",-1);
	vcdp->declBit  (c+8,"io_b2",-1);
	vcdp->declBit  (c+9,"io_sum0",-1);
	vcdp->declBit  (c+10,"io_sum1",-1);
	vcdp->declBit  (c+11,"io_cout",-1);
	vcdp->declBit  (c+2,"FullAdder2 clock",-1);
	vcdp->declBit  (c+3,"FullAdder2 reset",-1);
	vcdp->declBit  (c+4,"FullAdder2 io_cin",-1);
	vcdp->declBit  (c+5,"FullAdder2 io_a1",-1);
	vcdp->declBit  (c+6,"FullAdder2 io_b1",-1);
	vcdp->declBit  (c+7,"FullAdder2 io_a2",-1);
	vcdp->declBit  (c+8,"FullAdder2 io_b2",-1);
	vcdp->declBit  (c+9,"FullAdder2 io_sum0",-1);
	vcdp->declBit  (c+10,"FullAdder2 io_sum1",-1);
	vcdp->declBit  (c+11,"FullAdder2 io_cout",-1);
	vcdp->declBit  (c+5,"FullAdder2 add1_io_a",-1);
	vcdp->declBit  (c+6,"FullAdder2 add1_io_b",-1);
	vcdp->declBit  (c+4,"FullAdder2 add1_io_cin",-1);
	vcdp->declBit  (c+12,"FullAdder2 add1_io_sum",-1);
	vcdp->declBit  (c+1,"FullAdder2 add1_io_cout",-1);
	vcdp->declBit  (c+7,"FullAdder2 add2_io_a",-1);
	vcdp->declBit  (c+8,"FullAdder2 add2_io_b",-1);
	vcdp->declBit  (c+1,"FullAdder2 add2_io_cin",-1);
	vcdp->declBit  (c+13,"FullAdder2 add2_io_sum",-1);
	vcdp->declBit  (c+14,"FullAdder2 add2_io_cout",-1);
	vcdp->declBit  (c+5,"FullAdder2 add1 io_a",-1);
	vcdp->declBit  (c+6,"FullAdder2 add1 io_b",-1);
	vcdp->declBit  (c+4,"FullAdder2 add1 io_cin",-1);
	vcdp->declBit  (c+12,"FullAdder2 add1 io_sum",-1);
	vcdp->declBit  (c+1,"FullAdder2 add1 io_cout",-1);
	// Tracing: FullAdder2 add1 _T_15 // Ignored: Inlined leading underscore at FullAdder2.v:8
	// Tracing: FullAdder2 add1 _T_16 // Ignored: Inlined leading underscore at FullAdder2.v:9
	// Tracing: FullAdder2 add1 _T_17 // Ignored: Inlined leading underscore at FullAdder2.v:10
	// Tracing: FullAdder2 add1 _T_18 // Ignored: Inlined leading underscore at FullAdder2.v:11
	// Tracing: FullAdder2 add1 _T_20 // Ignored: Inlined leading underscore at FullAdder2.v:12
	// Tracing: FullAdder2 add1 _T_21 // Ignored: Inlined leading underscore at FullAdder2.v:13
	// Tracing: FullAdder2 add1 _T_22 // Ignored: Inlined leading underscore at FullAdder2.v:14
	// Tracing: FullAdder2 add1 _T_23 // Ignored: Inlined leading underscore at FullAdder2.v:15
	// Tracing: FullAdder2 add1 _T_25 // Ignored: Inlined leading underscore at FullAdder2.v:16
	// Tracing: FullAdder2 add1 _T_26 // Ignored: Inlined leading underscore at FullAdder2.v:17
	// Tracing: FullAdder2 add1 _T_27 // Ignored: Inlined leading underscore at FullAdder2.v:18
	// Tracing: FullAdder2 add1 _T_28 // Ignored: Inlined leading underscore at FullAdder2.v:19
	// Tracing: FullAdder2 add1 _T_30 // Ignored: Inlined leading underscore at FullAdder2.v:20
	// Tracing: FullAdder2 add1 _T_32 // Ignored: Inlined leading underscore at FullAdder2.v:21
	// Tracing: FullAdder2 add1 _T_33 // Ignored: Inlined leading underscore at FullAdder2.v:22
	// Tracing: FullAdder2 add1 _T_35 // Ignored: Inlined leading underscore at FullAdder2.v:23
	vcdp->declBit  (c+7,"FullAdder2 add2 io_a",-1);
	vcdp->declBit  (c+8,"FullAdder2 add2 io_b",-1);
	vcdp->declBit  (c+1,"FullAdder2 add2 io_cin",-1);
	vcdp->declBit  (c+13,"FullAdder2 add2 io_sum",-1);
	vcdp->declBit  (c+14,"FullAdder2 add2 io_cout",-1);
	// Tracing: FullAdder2 add2 _T_15 // Ignored: Inlined leading underscore at FullAdder2.v:8
	// Tracing: FullAdder2 add2 _T_16 // Ignored: Inlined leading underscore at FullAdder2.v:9
	// Tracing: FullAdder2 add2 _T_17 // Ignored: Inlined leading underscore at FullAdder2.v:10
	// Tracing: FullAdder2 add2 _T_18 // Ignored: Inlined leading underscore at FullAdder2.v:11
	// Tracing: FullAdder2 add2 _T_20 // Ignored: Inlined leading underscore at FullAdder2.v:12
	// Tracing: FullAdder2 add2 _T_21 // Ignored: Inlined leading underscore at FullAdder2.v:13
	// Tracing: FullAdder2 add2 _T_22 // Ignored: Inlined leading underscore at FullAdder2.v:14
	// Tracing: FullAdder2 add2 _T_23 // Ignored: Inlined leading underscore at FullAdder2.v:15
	// Tracing: FullAdder2 add2 _T_25 // Ignored: Inlined leading underscore at FullAdder2.v:16
	// Tracing: FullAdder2 add2 _T_26 // Ignored: Inlined leading underscore at FullAdder2.v:17
	// Tracing: FullAdder2 add2 _T_27 // Ignored: Inlined leading underscore at FullAdder2.v:18
	// Tracing: FullAdder2 add2 _T_28 // Ignored: Inlined leading underscore at FullAdder2.v:19
	// Tracing: FullAdder2 add2 _T_30 // Ignored: Inlined leading underscore at FullAdder2.v:20
	// Tracing: FullAdder2 add2 _T_32 // Ignored: Inlined leading underscore at FullAdder2.v:21
	// Tracing: FullAdder2 add2 _T_33 // Ignored: Inlined leading underscore at FullAdder2.v:22
	// Tracing: FullAdder2 add2 _T_35 // Ignored: Inlined leading underscore at FullAdder2.v:23
    }
}

void VFullAdder2::traceFullThis__1(VFullAdder2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFullAdder2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->FullAdder2__DOT__add1_io_cout));
	vcdp->fullBit  (c+2,(vlTOPp->clock));
	vcdp->fullBit  (c+3,(vlTOPp->reset));
	vcdp->fullBit  (c+4,(vlTOPp->io_cin));
	vcdp->fullBit  (c+5,(vlTOPp->io_a1));
	vcdp->fullBit  (c+6,(vlTOPp->io_b1));
	vcdp->fullBit  (c+7,(vlTOPp->io_a2));
	vcdp->fullBit  (c+8,(vlTOPp->io_b2));
	vcdp->fullBit  (c+9,(vlTOPp->io_sum0));
	vcdp->fullBit  (c+10,(vlTOPp->io_sum1));
	vcdp->fullBit  (c+11,(vlTOPp->io_cout));
	vcdp->fullBit  (c+12,(((((((~ (IData)(vlTOPp->io_cin)) 
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
	vcdp->fullBit  (c+13,(((((((~ (IData)(vlTOPp->FullAdder2__DOT__add1_io_cout)) 
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
	vcdp->fullBit  (c+14,(((((IData)(vlTOPp->io_a2) 
				 & (IData)(vlTOPp->io_b2)) 
				| (IData)(vlTOPp->FullAdder2__DOT__add2__DOT___T_16)) 
			       | ((IData)(vlTOPp->io_b2) 
				  & (IData)(vlTOPp->FullAdder2__DOT__add1_io_cout)))));
    }
}
