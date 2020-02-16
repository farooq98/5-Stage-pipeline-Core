// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VregisterFile__Syms.h"


//======================

void VregisterFile::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VregisterFile* t=(VregisterFile*)userthis;
    VregisterFile__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VregisterFile::traceChgThis(VregisterFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VregisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VregisterFile::traceChgThis__2(VregisterFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VregisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->registerFile__DOT__registers_0),32);
	vcdp->chgBus  (c+2,(vlTOPp->registerFile__DOT__registers_1),32);
	vcdp->chgBus  (c+3,(vlTOPp->registerFile__DOT__registers_2),32);
	vcdp->chgBus  (c+4,(vlTOPp->registerFile__DOT__registers_3),32);
	vcdp->chgBus  (c+5,(vlTOPp->registerFile__DOT__registers_4),32);
	vcdp->chgBus  (c+6,(vlTOPp->registerFile__DOT__registers_5),32);
	vcdp->chgBus  (c+7,(vlTOPp->registerFile__DOT__registers_6),32);
	vcdp->chgBus  (c+8,(vlTOPp->registerFile__DOT__registers_7),32);
	vcdp->chgBus  (c+9,(vlTOPp->registerFile__DOT__registers_8),32);
	vcdp->chgBus  (c+10,(vlTOPp->registerFile__DOT__registers_9),32);
	vcdp->chgBus  (c+11,(vlTOPp->registerFile__DOT__registers_10),32);
	vcdp->chgBus  (c+12,(vlTOPp->registerFile__DOT__registers_11),32);
	vcdp->chgBus  (c+13,(vlTOPp->registerFile__DOT__registers_12),32);
	vcdp->chgBus  (c+14,(vlTOPp->registerFile__DOT__registers_13),32);
	vcdp->chgBus  (c+15,(vlTOPp->registerFile__DOT__registers_14),32);
	vcdp->chgBus  (c+16,(vlTOPp->registerFile__DOT__registers_15),32);
	vcdp->chgBus  (c+17,(vlTOPp->registerFile__DOT__registers_16),32);
	vcdp->chgBus  (c+18,(vlTOPp->registerFile__DOT__registers_17),32);
	vcdp->chgBus  (c+19,(vlTOPp->registerFile__DOT__registers_18),32);
	vcdp->chgBus  (c+20,(vlTOPp->registerFile__DOT__registers_19),32);
	vcdp->chgBus  (c+21,(vlTOPp->registerFile__DOT__registers_20),32);
	vcdp->chgBus  (c+22,(vlTOPp->registerFile__DOT__registers_21),32);
	vcdp->chgBus  (c+23,(vlTOPp->registerFile__DOT__registers_22),32);
	vcdp->chgBus  (c+24,(vlTOPp->registerFile__DOT__registers_23),32);
	vcdp->chgBus  (c+25,(vlTOPp->registerFile__DOT__registers_24),32);
	vcdp->chgBus  (c+26,(vlTOPp->registerFile__DOT__registers_25),32);
	vcdp->chgBus  (c+27,(vlTOPp->registerFile__DOT__registers_26),32);
	vcdp->chgBus  (c+28,(vlTOPp->registerFile__DOT__registers_27),32);
	vcdp->chgBus  (c+29,(vlTOPp->registerFile__DOT__registers_28),32);
	vcdp->chgBus  (c+30,(vlTOPp->registerFile__DOT__registers_29),32);
	vcdp->chgBus  (c+31,(vlTOPp->registerFile__DOT__registers_30),32);
	vcdp->chgBus  (c+32,(vlTOPp->registerFile__DOT__registers_31),32);
    }
}

void VregisterFile::traceChgThis__3(VregisterFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VregisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+33,(vlTOPp->clock));
	vcdp->chgBit  (c+34,(vlTOPp->reset));
	vcdp->chgBit  (c+35,(vlTOPp->io_regWrite));
	vcdp->chgBus  (c+36,(vlTOPp->io_rs1_sel),5);
	vcdp->chgBus  (c+37,(vlTOPp->io_rs2_sel),5);
	vcdp->chgBus  (c+38,(vlTOPp->io_rd_sel),5);
	vcdp->chgBus  (c+39,(vlTOPp->io_writeData),32);
	vcdp->chgBus  (c+40,(vlTOPp->io_rs1),32);
	vcdp->chgBus  (c+41,(vlTOPp->io_rs2),32);
    }
}
