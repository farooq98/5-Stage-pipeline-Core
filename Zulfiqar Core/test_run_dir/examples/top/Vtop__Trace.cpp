// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtop* t=(Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vtop::traceChgThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtop::traceChgThis__2(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(((0U == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_NextPc))
			      ? ((IData)(4U) + vlTOPp->top__DOT__pc__DOT__reg__024)
			      : ((1U == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_NextPc))
				  ? ((((1U == (IData)(vlTOPp->top__DOT__alu__DOT___GEN_19)) 
				       & (2U == (3U 
						 & ((IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont) 
						    >> 3U)))) 
				      & ((0x33U != 
					  (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
					 & ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load)) 
					    & ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Store)) 
					       & (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Branch)))))
				      ? (vlTOPp->top__DOT__immediategen__DOT___T_45 
					 + vlTOPp->top__DOT__pc__DOT__reg__024)
				      : ((IData)(4U) 
					 + vlTOPp->top__DOT__pc__DOT__reg__024))
				  : ((2U == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_NextPc))
				      ? ((IData)(vlTOPp->top__DOT__immediategen__DOT___T_66) 
					 + (IData)(vlTOPp->top__DOT__immediategen__DOT___GEN_0))
				      : (0xfffffffeU 
					 & (vlTOPp->top__DOT__immediategen__DOT___T_88 
					    + vlTOPp->top__DOT__regfile_io_rs1)))))),32);
	vcdp->chgBus  (c+2,(vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data),32);
	vcdp->chgBus  (c+3,((0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)),7);
	vcdp->chgBit  (c+4,(((0x33U != (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
			     & ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load)) 
				& (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Store)))));
	vcdp->chgBit  (c+5,(((0x33U != (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
			     & ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load)) 
				& ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Store)) 
				   & (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Branch))))));
	vcdp->chgBit  (c+6,(((0x33U != (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
			     & (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load))));
	vcdp->chgBit  (c+7,(vlTOPp->top__DOT__control__DOT__c2_io_RegWrite));
	vcdp->chgBus  (c+8,(vlTOPp->top__DOT__control__DOT__c2_io_AluOp),3);
	vcdp->chgBus  (c+9,(vlTOPp->top__DOT__control__DOT__c2_io_OpA),2);
	vcdp->chgBit  (c+10,(((0x33U != (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
			      & ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load) 
				 | ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Store) 
				    | ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Branch)) 
				       & ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_I) 
					  | (IData)(vlTOPp->top__DOT__control__DOT__c2__DOT___GEN_14))))))));
	vcdp->chgBus  (c+11,(vlTOPp->top__DOT__control__DOT__c2_io_ExtSel),2);
	vcdp->chgBus  (c+12,(vlTOPp->top__DOT__control__DOT__c2_io_NextPc),2);
	vcdp->chgBus  (c+13,(((((0x800U & (IData)(vlTOPp->top__DOT__immediategen__DOT___T_21))
				 ? 0xfffffU : 0U) << 0xcU) 
			      | (IData)(vlTOPp->top__DOT__immediategen__DOT___T_21))),32);
	vcdp->chgBus  (c+14,((vlTOPp->top__DOT__immediategen__DOT___T_45 
			      + vlTOPp->top__DOT__pc__DOT__reg__024)),32);
	vcdp->chgBus  (c+15,(((IData)(vlTOPp->top__DOT__immediategen__DOT___T_66) 
			      + (IData)(vlTOPp->top__DOT__immediategen__DOT___GEN_0))),32);
	vcdp->chgBus  (c+16,((IData)((VL_ULL(0x7fffffffffff) 
				      & ((QData)((IData)(
							 ((((0x80000000U 
							     & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)
							     ? 0xfffU
							     : 0U) 
							   << 0x14U) 
							  | (0xfffffU 
							     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								>> 0xcU))))) 
					 << 0xcU)))),32);
	vcdp->chgBus  (c+17,(vlTOPp->top__DOT__immediategen__DOT___T_88),32);
	vcdp->chgBus  (c+18,((0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				       >> 7U))),5);
	vcdp->chgBus  (c+19,((0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				       >> 0xfU))),5);
	vcdp->chgBus  (c+20,((0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				       >> 0x14U))),5);
	vcdp->chgBus  (c+21,(vlTOPp->top__DOT__regfile_io_writedata),32);
	vcdp->chgBus  (c+22,(vlTOPp->top__DOT__regfile_io_rs1),32);
	vcdp->chgBus  (c+23,(vlTOPp->top__DOT__regfile_io_rs2),32);
	vcdp->chgBus  (c+24,((7U & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				    >> 0xcU))),3);
	vcdp->chgBit  (c+25,((1U & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				    >> 0x1eU))));
	vcdp->chgBus  (c+26,(vlTOPp->top__DOT__alucontrol_io_ALUcont),5);
	vcdp->chgBus  (c+27,((0xfffffffeU & (vlTOPp->top__DOT__immediategen__DOT___T_88 
					     + vlTOPp->top__DOT__regfile_io_rs1))),32);
	vcdp->chgBus  (c+28,(vlTOPp->top__DOT__alu_io_in1),32);
	vcdp->chgBus  (c+29,(vlTOPp->top__DOT__alu_io_in2),32);
	vcdp->chgBit  (c+30,(((1U == (IData)(vlTOPp->top__DOT__alu__DOT___GEN_19)) 
			      & (2U == (3U & ((IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont) 
					      >> 3U))))));
	vcdp->chgBus  (c+31,((IData)(vlTOPp->top__DOT__alu__DOT___GEN_19)),32);
	vcdp->chgBus  (c+32,((0xffU & (IData)((vlTOPp->top__DOT__alu__DOT___GEN_19 
					       >> 2U)))),8);
	vcdp->chgBus  (c+33,(vlTOPp->top__DOT__dataMem__DOT__mem
			     [(0xffU & (IData)((vlTOPp->top__DOT__alu__DOT___GEN_19 
						>> 2U)))]),32);
	vcdp->chgBit  (c+34,((0x33U == (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data))));
	vcdp->chgBit  (c+35,(vlTOPp->top__DOT__control__DOT__c1_io_Load));
	vcdp->chgBit  (c+36,(vlTOPp->top__DOT__control__DOT__c1_io_Store));
	vcdp->chgBit  (c+37,(vlTOPp->top__DOT__control__DOT__c1_io_Branch));
	vcdp->chgBit  (c+38,(vlTOPp->top__DOT__control__DOT__c1_io_I));
	vcdp->chgBit  (c+39,(vlTOPp->top__DOT__control__DOT__c1_io_Jal));
	vcdp->chgBit  (c+40,(vlTOPp->top__DOT__control__DOT__c1_io_Jalr));
	vcdp->chgBit  (c+41,(vlTOPp->top__DOT__control__DOT__c1_io_Lui));
	vcdp->chgBus  (c+42,(vlTOPp->top__DOT__immediategen__DOT___T_21),12);
	vcdp->chgBus  (c+43,(vlTOPp->top__DOT__immediategen__DOT___T_38),13);
	vcdp->chgBus  (c+44,(vlTOPp->top__DOT__immediategen__DOT___T_59),21);
	vcdp->chgBus  (c+45,((vlTOPp->top__DOT__immediategen__DOT___T_88 
			      + vlTOPp->top__DOT__regfile_io_rs1)),32);
	vcdp->chgBus  (c+46,((0xffU & (IData)((vlTOPp->top__DOT__alu__DOT___GEN_19 
					       >> 2U)))),10);
    }
}

void Vtop::traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+47,(((IData)(4U) + vlTOPp->top__DOT__pc__DOT__reg__024)),32);
	vcdp->chgBus  (c+48,(vlTOPp->top__DOT__pc__DOT__reg__024),32);
	vcdp->chgBus  (c+49,((0x3ffU & (vlTOPp->top__DOT__pc__DOT__reg__024 
					>> 2U))),32);
	vcdp->chgBus  (c+50,((0x3ffU & (vlTOPp->top__DOT__pc__DOT__reg__024 
					>> 2U))),10);
	vcdp->chgBus  (c+51,(vlTOPp->top__DOT__regfile__DOT__register_0),32);
	vcdp->chgBus  (c+52,(vlTOPp->top__DOT__regfile__DOT__register_1),32);
	vcdp->chgBus  (c+53,(vlTOPp->top__DOT__regfile__DOT__register_2),32);
	vcdp->chgBus  (c+54,(vlTOPp->top__DOT__regfile__DOT__register_3),32);
	vcdp->chgBus  (c+55,(vlTOPp->top__DOT__regfile__DOT__register_4),32);
	vcdp->chgBus  (c+56,(vlTOPp->top__DOT__regfile__DOT__register_5),32);
	vcdp->chgBus  (c+57,(vlTOPp->top__DOT__regfile__DOT__register_6),32);
	vcdp->chgBus  (c+58,(vlTOPp->top__DOT__regfile__DOT__register_7),32);
	vcdp->chgBus  (c+59,(vlTOPp->top__DOT__regfile__DOT__register_8),32);
	vcdp->chgBus  (c+60,(vlTOPp->top__DOT__regfile__DOT__register_9),32);
	vcdp->chgBus  (c+61,(vlTOPp->top__DOT__regfile__DOT__register_10),32);
	vcdp->chgBus  (c+62,(vlTOPp->top__DOT__regfile__DOT__register_11),32);
	vcdp->chgBus  (c+63,(vlTOPp->top__DOT__regfile__DOT__register_12),32);
	vcdp->chgBus  (c+64,(vlTOPp->top__DOT__regfile__DOT__register_13),32);
	vcdp->chgBus  (c+65,(vlTOPp->top__DOT__regfile__DOT__register_14),32);
	vcdp->chgBus  (c+66,(vlTOPp->top__DOT__regfile__DOT__register_15),32);
	vcdp->chgBus  (c+67,(vlTOPp->top__DOT__regfile__DOT__register_16),32);
	vcdp->chgBus  (c+68,(vlTOPp->top__DOT__regfile__DOT__register_17),32);
	vcdp->chgBus  (c+69,(vlTOPp->top__DOT__regfile__DOT__register_18),32);
	vcdp->chgBus  (c+70,(vlTOPp->top__DOT__regfile__DOT__register_19),32);
	vcdp->chgBus  (c+71,(vlTOPp->top__DOT__regfile__DOT__register_20),32);
	vcdp->chgBus  (c+72,(vlTOPp->top__DOT__regfile__DOT__register_21),32);
	vcdp->chgBus  (c+73,(vlTOPp->top__DOT__regfile__DOT__register_22),32);
	vcdp->chgBus  (c+74,(vlTOPp->top__DOT__regfile__DOT__register_23),32);
	vcdp->chgBus  (c+75,(vlTOPp->top__DOT__regfile__DOT__register_24),32);
	vcdp->chgBus  (c+76,(vlTOPp->top__DOT__regfile__DOT__register_25),32);
	vcdp->chgBus  (c+77,(vlTOPp->top__DOT__regfile__DOT__register_26),32);
	vcdp->chgBus  (c+78,(vlTOPp->top__DOT__regfile__DOT__register_27),32);
	vcdp->chgBus  (c+79,(vlTOPp->top__DOT__regfile__DOT__register_28),32);
	vcdp->chgBus  (c+80,(vlTOPp->top__DOT__regfile__DOT__register_29),32);
	vcdp->chgBus  (c+81,(vlTOPp->top__DOT__regfile__DOT__register_30),32);
	vcdp->chgBus  (c+82,(vlTOPp->top__DOT__regfile__DOT__register_31),32);
    }
}

void Vtop::traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+83,(vlTOPp->clock));
	vcdp->chgBit  (c+84,(vlTOPp->reset));
	vcdp->chgBus  (c+85,(vlTOPp->io_output),32);
    }
}
