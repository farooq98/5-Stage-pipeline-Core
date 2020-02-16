// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCore__Syms.h"


//======================

void VCore::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCore* t=(VCore*)userthis;
    VCore__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VCore::traceChgThis(VCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VCore::traceChgThis__2(VCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(((0x33U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
			     & ((~ (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_load)) 
				& (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_store)))));
	vcdp->chgBit  (c+2,(((0x33U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
			     & (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_load))));
	vcdp->chgBit  (c+3,(((0x33U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
			     | ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_load) 
				| ((~ (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_store)) 
				   & ((~ (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_branch)) 
				      & ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jalr) 
					 | ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_i) 
					    | ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jal) 
					       | (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_lui))))))))));
	vcdp->chgBus  (c+4,(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_aluOp),3);
	vcdp->chgBus  (c+5,(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_oprA),2);
	vcdp->chgBit  (c+6,(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_oprB));
	vcdp->chgBus  (c+7,(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_extendSel),2);
	vcdp->chgBus  (c+8,(((0U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_aluOp))
			      ? (IData)(vlTOPp->Core__DOT__aluCtrl__DOT___T_17)
			      : ((3U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_aluOp))
				  ? 0x1fU : ((4U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_aluOp))
					      ? 0U : 
					     ((1U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_aluOp))
					       ? ((5U 
						   == 
						   (7U 
						    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						       >> 0xcU)))
						   ? (IData)(vlTOPp->Core__DOT__aluCtrl__DOT___T_17)
						   : 
						  (7U 
						   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						      >> 0xcU)))
					       : ((5U 
						   == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_aluOp))
						   ? 0U
						   : 
						  (((2U 
						     == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_aluOp)) 
						    & (0U 
						       == 
						       (7U 
							& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							   >> 0xcU))))
						    ? 
						   (0x10U 
						    | (7U 
						       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							  >> 0xcU)))
						    : 0U))))))),5);
	vcdp->chgBus  (c+9,(vlTOPp->Core__DOT__alu_io_a),32);
	vcdp->chgBus  (c+10,(vlTOPp->Core__DOT__alu_io_b),32);
	vcdp->chgBit  (c+11,(((1U == (IData)(vlTOPp->Core__DOT__alu__DOT___GEN_22)) 
			      & (2U == (3U & ((IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl) 
					      >> 3U))))));
	vcdp->chgBus  (c+12,((IData)(vlTOPp->Core__DOT__alu__DOT___GEN_22)),32);
	vcdp->chgBus  (c+13,(vlTOPp->Core__DOT__reg__024_io_writeData),32);
	vcdp->chgBus  (c+14,(vlTOPp->Core__DOT__reg__024_io_rs2),32);
	vcdp->chgBus  (c+15,(vlTOPp->Core__DOT__InsMem__DOT__mem
			     [(0x3ffU & (vlTOPp->Core__DOT__PC__DOT__reg__024 
					 >> 2U))]),32);
	vcdp->chgBus  (c+16,((((0U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_oprA)) 
			       | (3U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_oprA)))
			       ? ((0x1fU == (0x1fU 
					     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						>> 0xfU)))
				   ? vlTOPp->Core__DOT__reg__024__DOT__registers_31
				   : ((0x1eU == (0x1fU 
						 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						    >> 0xfU)))
				       ? vlTOPp->Core__DOT__reg__024__DOT__registers_30
				       : ((0x1dU == 
					   (0x1fU & 
					    (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
					     >> 0xfU)))
					   ? vlTOPp->Core__DOT__reg__024__DOT__registers_29
					   : ((0x1cU 
					       == (0x1fU 
						   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						      >> 0xfU)))
					       ? vlTOPp->Core__DOT__reg__024__DOT__registers_28
					       : ((0x1bU 
						   == 
						   (0x1fU 
						    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						       >> 0xfU)))
						   ? vlTOPp->Core__DOT__reg__024__DOT__registers_27
						   : 
						  ((0x1aU 
						    == 
						    (0x1fU 
						     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							>> 0xfU)))
						    ? vlTOPp->Core__DOT__reg__024__DOT__registers_26
						    : 
						   ((0x19U 
						     == 
						     (0x1fU 
						      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							 >> 0xfU)))
						     ? vlTOPp->Core__DOT__reg__024__DOT__registers_25
						     : 
						    ((0x18U 
						      == 
						      (0x1fU 
						       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							  >> 0xfU)))
						      ? vlTOPp->Core__DOT__reg__024__DOT__registers_24
						      : 
						     ((0x17U 
						       == 
						       (0x1fU 
							& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							   >> 0xfU)))
						       ? vlTOPp->Core__DOT__reg__024__DOT__registers_23
						       : 
						      ((0x16U 
							== 
							(0x1fU 
							 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							    >> 0xfU)))
						        ? vlTOPp->Core__DOT__reg__024__DOT__registers_22
						        : 
						       ((0x15U 
							 == 
							 (0x1fU 
							  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							     >> 0xfU)))
							 ? vlTOPp->Core__DOT__reg__024__DOT__registers_21
							 : 
							((0x14U 
							  == 
							  (0x1fU 
							   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							      >> 0xfU)))
							  ? vlTOPp->Core__DOT__reg__024__DOT__registers_20
							  : 
							 ((0x13U 
							   == 
							   (0x1fU 
							    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							       >> 0xfU)))
							   ? vlTOPp->Core__DOT__reg__024__DOT__registers_19
							   : 
							  ((0x12U 
							    == 
							    (0x1fU 
							     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								>> 0xfU)))
							    ? vlTOPp->Core__DOT__reg__024__DOT__registers_18
							    : 
							   ((0x11U 
							     == 
							     (0x1fU 
							      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								 >> 0xfU)))
							     ? vlTOPp->Core__DOT__reg__024__DOT__registers_17
							     : 
							    ((0x10U 
							      == 
							      (0x1fU 
							       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								  >> 0xfU)))
							      ? vlTOPp->Core__DOT__reg__024__DOT__registers_16
							      : 
							     ((0xfU 
							       == 
							       (0x1fU 
								& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								   >> 0xfU)))
							       ? vlTOPp->Core__DOT__reg__024__DOT__registers_15
							       : 
							      ((0xeU 
								== 
								(0x1fU 
								 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								    >> 0xfU)))
							        ? vlTOPp->Core__DOT__reg__024__DOT__registers_14
							        : 
							       ((0xdU 
								 == 
								 (0x1fU 
								  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								     >> 0xfU)))
								 ? vlTOPp->Core__DOT__reg__024__DOT__registers_13
								 : 
								((0xcU 
								  == 
								  (0x1fU 
								   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								      >> 0xfU)))
								  ? vlTOPp->Core__DOT__reg__024__DOT__registers_12
								  : 
								 ((0xbU 
								   == 
								   (0x1fU 
								    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								       >> 0xfU)))
								   ? vlTOPp->Core__DOT__reg__024__DOT__registers_11
								   : 
								  ((0xaU 
								    == 
								    (0x1fU 
								     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									>> 0xfU)))
								    ? vlTOPp->Core__DOT__reg__024__DOT__registers_10
								    : 
								   ((9U 
								     == 
								     (0x1fU 
								      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									 >> 0xfU)))
								     ? vlTOPp->Core__DOT__reg__024__DOT__registers_9
								     : 
								    ((8U 
								      == 
								      (0x1fU 
								       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									  >> 0xfU)))
								      ? vlTOPp->Core__DOT__reg__024__DOT__registers_8
								      : 
								     ((7U 
								       == 
								       (0x1fU 
									& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									   >> 0xfU)))
								       ? vlTOPp->Core__DOT__reg__024__DOT__registers_7
								       : 
								      ((6U 
									== 
									(0x1fU 
									 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									    >> 0xfU)))
								        ? vlTOPp->Core__DOT__reg__024__DOT__registers_6
								        : 
								       ((5U 
									 == 
									 (0x1fU 
									  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									     >> 0xfU)))
									 ? vlTOPp->Core__DOT__reg__024__DOT__registers_5
									 : 
									((4U 
									  == 
									  (0x1fU 
									   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									      >> 0xfU)))
									  ? vlTOPp->Core__DOT__reg__024__DOT__registers_4
									  : 
									 ((3U 
									   == 
									   (0x1fU 
									    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									       >> 0xfU)))
									   ? vlTOPp->Core__DOT__reg__024__DOT__registers_3
									   : 
									  ((2U 
									    == 
									    (0x1fU 
									     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
										>> 0xfU)))
									    ? vlTOPp->Core__DOT__reg__024__DOT__registers_2
									    : 
									   ((1U 
									     == 
									     (0x1fU 
									      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
										>> 0xfU)))
									     ? vlTOPp->Core__DOT__reg__024__DOT__registers_1
									     : vlTOPp->Core__DOT__reg__024__DOT__registers_0)))))))))))))))))))))))))))))))
			       : ((2U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_oprA))
				   ? vlTOPp->Core__DOT__if_pipe__DOT__reg_pc4
				   : vlTOPp->Core__DOT__if_pipe__DOT__reg_pc))),32);
	vcdp->chgBus  (c+17,(((IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_oprB)
			       ? ((0U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_extendSel))
				   ? ((((0x80000000U 
					 & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)
					 ? 0xfffffU
					 : 0U) << 0xcU) 
				      | (0xfffU & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						   >> 0x14U)))
				   : ((1U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_extendSel))
				       ? ((((0x80000000U 
					     & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)
					     ? 0xfffffU
					     : 0U) 
					   << 0xcU) 
					  | ((0x800U 
					      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						 >> 0x14U)) 
					     | ((0x7e0U 
						 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						    >> 0x14U)) 
						| (0x1fU 
						   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						      >> 7U)))))
				       : ((2U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_extendSel))
					   ? (IData)(
						     (VL_ULL(0x7ffffffff) 
						      & ((QData)((IData)(
									 (0xfffffU 
									  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									     >> 0xcU)))) 
							 << 0xcU)))
					   : vlTOPp->Core__DOT__reg__024_io_rs2)))
			       : vlTOPp->Core__DOT__reg__024_io_rs2)),32);
	vcdp->chgBus  (c+18,(vlTOPp->Core__DOT__forwarding_io_alu_A),2);
	vcdp->chgBus  (c+19,(vlTOPp->Core__DOT__forwarding_io_alu_B),2);
	vcdp->chgBit  (c+20,(vlTOPp->Core__DOT__control__DOT__typeDecode_io_load));
	vcdp->chgBit  (c+21,(vlTOPp->Core__DOT__control__DOT__typeDecode_io_store));
	vcdp->chgBit  (c+22,(vlTOPp->Core__DOT__control__DOT__typeDecode_io_branch));
	vcdp->chgBit  (c+23,(vlTOPp->Core__DOT__control__DOT__typeDecode_io_i));
	vcdp->chgBit  (c+24,(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jal));
	vcdp->chgBit  (c+25,(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jalr));
	vcdp->chgBit  (c+26,(vlTOPp->Core__DOT__control__DOT__typeDecode_io_lui));
    }
}

void VCore::traceChgThis__3(VCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+27,((0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)),7);
	vcdp->chgBus  (c+28,(vlTOPp->Core__DOT__if_pipe__DOT__reg_ins),32);
	vcdp->chgBus  (c+29,(((((0x80000000U & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)
				 ? 0xfffffU : 0U) << 0xcU) 
			      | ((0x800U & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
					    >> 0x14U)) 
				 | ((0x7e0U & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
					       >> 0x14U)) 
				    | (0x1fU & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						>> 7U)))))),32);
	vcdp->chgBus  (c+30,(((((0x80000000U & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)
				 ? 0xfffffU : 0U) << 0xcU) 
			      | (0xfffU & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
					   >> 0x14U)))),32);
	vcdp->chgBus  (c+31,((IData)((VL_ULL(0x7ffffffff) 
				      & ((QData)((IData)(
							 (0xfffffU 
							  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							     >> 0xcU)))) 
					 << 0xcU)))),32);
	vcdp->chgBus  (c+32,((7U & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
				    >> 0xcU))),3);
	vcdp->chgBit  (c+33,((1U & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
				    >> 0x1eU))));
	vcdp->chgBus  (c+34,(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl),5);
	vcdp->chgBit  (c+35,(vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite));
	vcdp->chgBus  (c+36,((0x1fU & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
				       >> 0xfU))),5);
	vcdp->chgBus  (c+37,((0x1fU & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
				       >> 0x14U))),5);
	vcdp->chgBus  (c+38,(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd),5);
	vcdp->chgBus  (c+39,(((0x1fU == (0x1fU & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						  >> 0xfU)))
			       ? vlTOPp->Core__DOT__reg__024__DOT__registers_31
			       : ((0x1eU == (0x1fU 
					     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						>> 0xfU)))
				   ? vlTOPp->Core__DOT__reg__024__DOT__registers_30
				   : ((0x1dU == (0x1fU 
						 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						    >> 0xfU)))
				       ? vlTOPp->Core__DOT__reg__024__DOT__registers_29
				       : ((0x1cU == 
					   (0x1fU & 
					    (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
					     >> 0xfU)))
					   ? vlTOPp->Core__DOT__reg__024__DOT__registers_28
					   : ((0x1bU 
					       == (0x1fU 
						   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						      >> 0xfU)))
					       ? vlTOPp->Core__DOT__reg__024__DOT__registers_27
					       : ((0x1aU 
						   == 
						   (0x1fU 
						    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						       >> 0xfU)))
						   ? vlTOPp->Core__DOT__reg__024__DOT__registers_26
						   : 
						  ((0x19U 
						    == 
						    (0x1fU 
						     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							>> 0xfU)))
						    ? vlTOPp->Core__DOT__reg__024__DOT__registers_25
						    : 
						   ((0x18U 
						     == 
						     (0x1fU 
						      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							 >> 0xfU)))
						     ? vlTOPp->Core__DOT__reg__024__DOT__registers_24
						     : 
						    ((0x17U 
						      == 
						      (0x1fU 
						       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							  >> 0xfU)))
						      ? vlTOPp->Core__DOT__reg__024__DOT__registers_23
						      : 
						     ((0x16U 
						       == 
						       (0x1fU 
							& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							   >> 0xfU)))
						       ? vlTOPp->Core__DOT__reg__024__DOT__registers_22
						       : 
						      ((0x15U 
							== 
							(0x1fU 
							 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							    >> 0xfU)))
						        ? vlTOPp->Core__DOT__reg__024__DOT__registers_21
						        : 
						       ((0x14U 
							 == 
							 (0x1fU 
							  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							     >> 0xfU)))
							 ? vlTOPp->Core__DOT__reg__024__DOT__registers_20
							 : 
							((0x13U 
							  == 
							  (0x1fU 
							   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							      >> 0xfU)))
							  ? vlTOPp->Core__DOT__reg__024__DOT__registers_19
							  : 
							 ((0x12U 
							   == 
							   (0x1fU 
							    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							       >> 0xfU)))
							   ? vlTOPp->Core__DOT__reg__024__DOT__registers_18
							   : 
							  ((0x11U 
							    == 
							    (0x1fU 
							     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								>> 0xfU)))
							    ? vlTOPp->Core__DOT__reg__024__DOT__registers_17
							    : 
							   ((0x10U 
							     == 
							     (0x1fU 
							      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								 >> 0xfU)))
							     ? vlTOPp->Core__DOT__reg__024__DOT__registers_16
							     : 
							    ((0xfU 
							      == 
							      (0x1fU 
							       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								  >> 0xfU)))
							      ? vlTOPp->Core__DOT__reg__024__DOT__registers_15
							      : 
							     ((0xeU 
							       == 
							       (0x1fU 
								& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								   >> 0xfU)))
							       ? vlTOPp->Core__DOT__reg__024__DOT__registers_14
							       : 
							      ((0xdU 
								== 
								(0x1fU 
								 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								    >> 0xfU)))
							        ? vlTOPp->Core__DOT__reg__024__DOT__registers_13
							        : 
							       ((0xcU 
								 == 
								 (0x1fU 
								  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								     >> 0xfU)))
								 ? vlTOPp->Core__DOT__reg__024__DOT__registers_12
								 : 
								((0xbU 
								  == 
								  (0x1fU 
								   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								      >> 0xfU)))
								  ? vlTOPp->Core__DOT__reg__024__DOT__registers_11
								  : 
								 ((0xaU 
								   == 
								   (0x1fU 
								    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								       >> 0xfU)))
								   ? vlTOPp->Core__DOT__reg__024__DOT__registers_10
								   : 
								  ((9U 
								    == 
								    (0x1fU 
								     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									>> 0xfU)))
								    ? vlTOPp->Core__DOT__reg__024__DOT__registers_9
								    : 
								   ((8U 
								     == 
								     (0x1fU 
								      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									 >> 0xfU)))
								     ? vlTOPp->Core__DOT__reg__024__DOT__registers_8
								     : 
								    ((7U 
								      == 
								      (0x1fU 
								       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									  >> 0xfU)))
								      ? vlTOPp->Core__DOT__reg__024__DOT__registers_7
								      : 
								     ((6U 
								       == 
								       (0x1fU 
									& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									   >> 0xfU)))
								       ? vlTOPp->Core__DOT__reg__024__DOT__registers_6
								       : 
								      ((5U 
									== 
									(0x1fU 
									 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									    >> 0xfU)))
								        ? vlTOPp->Core__DOT__reg__024__DOT__registers_5
								        : 
								       ((4U 
									 == 
									 (0x1fU 
									  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									     >> 0xfU)))
									 ? vlTOPp->Core__DOT__reg__024__DOT__registers_4
									 : 
									((3U 
									  == 
									  (0x1fU 
									   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									      >> 0xfU)))
									  ? vlTOPp->Core__DOT__reg__024__DOT__registers_3
									  : 
									 ((2U 
									   == 
									   (0x1fU 
									    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									       >> 0xfU)))
									   ? vlTOPp->Core__DOT__reg__024__DOT__registers_2
									   : 
									  ((1U 
									    == 
									    (0x1fU 
									     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
										>> 0xfU)))
									    ? vlTOPp->Core__DOT__reg__024__DOT__registers_1
									    : vlTOPp->Core__DOT__reg__024__DOT__registers_0)))))))))))))))))))))))))))))))),32);
	vcdp->chgBus  (c+40,((0x3ffU & (vlTOPp->Core__DOT__PC__DOT__reg__024 
					>> 2U))),32);
	vcdp->chgBus  (c+41,(((IData)(4U) + vlTOPp->Core__DOT__PC__DOT__reg__024)),32);
	vcdp->chgBus  (c+42,(vlTOPp->Core__DOT__PC__DOT__reg__024),32);
	vcdp->chgBit  (c+43,(vlTOPp->Core__DOT__exe_pipe__DOT__reg_memRead));
	vcdp->chgBit  (c+44,(vlTOPp->Core__DOT__exe_pipe__DOT__reg_memWrite));
	vcdp->chgBus  (c+45,((0xffU & (vlTOPp->Core__DOT__exe_pipe__DOT__reg_aluOutput 
				       >> 2U))),8);
	vcdp->chgBus  (c+46,(vlTOPp->Core__DOT__exe_pipe__DOT__reg_strData),32);
	vcdp->chgBus  (c+47,(vlTOPp->Core__DOT__dataMem__DOT__mem
			     [(0xffU & (vlTOPp->Core__DOT__exe_pipe__DOT__reg_aluOutput 
					>> 2U))]),32);
	vcdp->chgBus  (c+48,(vlTOPp->Core__DOT__if_pipe__DOT__reg_pc),32);
	vcdp->chgBus  (c+49,(vlTOPp->Core__DOT__if_pipe__DOT__reg_pc4),32);
	vcdp->chgBus  (c+50,((0x1fU & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
				       >> 7U))),5);
	vcdp->chgBus  (c+51,(vlTOPp->Core__DOT__id_pipe__DOT__reg_rs1_sel),5);
	vcdp->chgBus  (c+52,(vlTOPp->Core__DOT__id_pipe__DOT__reg_rs2_sel),5);
	vcdp->chgBit  (c+53,(vlTOPp->Core__DOT__id_pipe__DOT__reg_memWrite));
	vcdp->chgBit  (c+54,(vlTOPp->Core__DOT__id_pipe__DOT__reg_memRead));
	vcdp->chgBit  (c+55,(vlTOPp->Core__DOT__id_pipe__DOT__reg_memToReg));
	vcdp->chgBus  (c+56,(vlTOPp->Core__DOT__id_pipe__DOT__reg_operandA),32);
	vcdp->chgBus  (c+57,(vlTOPp->Core__DOT__id_pipe__DOT__reg_operandB),32);
	vcdp->chgBus  (c+58,(vlTOPp->Core__DOT__id_pipe__DOT__reg_rd),5);
	vcdp->chgBus  (c+59,(vlTOPp->Core__DOT__id_pipe__DOT__reg_strData),32);
	vcdp->chgBit  (c+60,(vlTOPp->Core__DOT__id_pipe__DOT__reg_regWrite));
	vcdp->chgBus  (c+61,(vlTOPp->Core__DOT__id_pipe__DOT__reg_opr_A),2);
	vcdp->chgBit  (c+62,(vlTOPp->Core__DOT__id_pipe__DOT__reg_opr_B));
	vcdp->chgBit  (c+63,(vlTOPp->Core__DOT__exe_pipe__DOT__reg_memToReg));
	vcdp->chgBus  (c+64,(vlTOPp->Core__DOT__exe_pipe__DOT__reg_rd),5);
	vcdp->chgBus  (c+65,(vlTOPp->Core__DOT__exe_pipe__DOT__reg_aluOutput),32);
	vcdp->chgBit  (c+66,(vlTOPp->Core__DOT__exe_pipe__DOT__reg_regWrite));
	vcdp->chgBit  (c+67,(vlTOPp->Core__DOT__exe_pipe__DOT__alu_branch_output));
	vcdp->chgBit  (c+68,(vlTOPp->Core__DOT__mem_pipe__DOT__reg_memToReg));
	vcdp->chgBus  (c+69,(vlTOPp->Core__DOT__mem_pipe__DOT__reg_dataOut),32);
	vcdp->chgBus  (c+70,(vlTOPp->Core__DOT__mem_pipe__DOT__reg_aluOutput),32);
	vcdp->chgBit  (c+71,((0x33U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins))));
	vcdp->chgBit  (c+72,((1U & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
				    >> 0x1fU))));
	vcdp->chgBus  (c+73,((0x3fU & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
				       >> 0x19U))),6);
	vcdp->chgBus  (c+74,((0xfU & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
				      >> 0x15U))),4);
	vcdp->chgBit  (c+75,((1U & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
				    >> 0x14U))));
	vcdp->chgBus  (c+76,((0xffU & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
				       >> 0xcU))),8);
	vcdp->chgBus  (c+77,((0xfU & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
				      >> 8U))),4);
	vcdp->chgBit  (c+78,((1U & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
				    >> 7U))));
	vcdp->chgBus  (c+79,(vlTOPp->Core__DOT__reg__024__DOT__registers_0),32);
	vcdp->chgBus  (c+80,(vlTOPp->Core__DOT__reg__024__DOT__registers_1),32);
	vcdp->chgBus  (c+81,(vlTOPp->Core__DOT__reg__024__DOT__registers_2),32);
	vcdp->chgBus  (c+82,(vlTOPp->Core__DOT__reg__024__DOT__registers_3),32);
	vcdp->chgBus  (c+83,(vlTOPp->Core__DOT__reg__024__DOT__registers_4),32);
	vcdp->chgBus  (c+84,(vlTOPp->Core__DOT__reg__024__DOT__registers_5),32);
	vcdp->chgBus  (c+85,(vlTOPp->Core__DOT__reg__024__DOT__registers_6),32);
	vcdp->chgBus  (c+86,(vlTOPp->Core__DOT__reg__024__DOT__registers_7),32);
	vcdp->chgBus  (c+87,(vlTOPp->Core__DOT__reg__024__DOT__registers_8),32);
	vcdp->chgBus  (c+88,(vlTOPp->Core__DOT__reg__024__DOT__registers_9),32);
	vcdp->chgBus  (c+89,(vlTOPp->Core__DOT__reg__024__DOT__registers_10),32);
	vcdp->chgBus  (c+90,(vlTOPp->Core__DOT__reg__024__DOT__registers_11),32);
	vcdp->chgBus  (c+91,(vlTOPp->Core__DOT__reg__024__DOT__registers_12),32);
	vcdp->chgBus  (c+92,(vlTOPp->Core__DOT__reg__024__DOT__registers_13),32);
	vcdp->chgBus  (c+93,(vlTOPp->Core__DOT__reg__024__DOT__registers_14),32);
	vcdp->chgBus  (c+94,(vlTOPp->Core__DOT__reg__024__DOT__registers_15),32);
	vcdp->chgBus  (c+95,(vlTOPp->Core__DOT__reg__024__DOT__registers_16),32);
	vcdp->chgBus  (c+96,(vlTOPp->Core__DOT__reg__024__DOT__registers_17),32);
	vcdp->chgBus  (c+97,(vlTOPp->Core__DOT__reg__024__DOT__registers_18),32);
	vcdp->chgBus  (c+98,(vlTOPp->Core__DOT__reg__024__DOT__registers_19),32);
	vcdp->chgBus  (c+99,(vlTOPp->Core__DOT__reg__024__DOT__registers_20),32);
	vcdp->chgBus  (c+100,(vlTOPp->Core__DOT__reg__024__DOT__registers_21),32);
	vcdp->chgBus  (c+101,(vlTOPp->Core__DOT__reg__024__DOT__registers_22),32);
	vcdp->chgBus  (c+102,(vlTOPp->Core__DOT__reg__024__DOT__registers_23),32);
	vcdp->chgBus  (c+103,(vlTOPp->Core__DOT__reg__024__DOT__registers_24),32);
	vcdp->chgBus  (c+104,(vlTOPp->Core__DOT__reg__024__DOT__registers_25),32);
	vcdp->chgBus  (c+105,(vlTOPp->Core__DOT__reg__024__DOT__registers_26),32);
	vcdp->chgBus  (c+106,(vlTOPp->Core__DOT__reg__024__DOT__registers_27),32);
	vcdp->chgBus  (c+107,(vlTOPp->Core__DOT__reg__024__DOT__registers_28),32);
	vcdp->chgBus  (c+108,(vlTOPp->Core__DOT__reg__024__DOT__registers_29),32);
	vcdp->chgBus  (c+109,(vlTOPp->Core__DOT__reg__024__DOT__registers_30),32);
	vcdp->chgBus  (c+110,(vlTOPp->Core__DOT__reg__024__DOT__registers_31),32);
	vcdp->chgBus  (c+111,((0x3ffU & (vlTOPp->Core__DOT__PC__DOT__reg__024 
					 >> 2U))),10);
	vcdp->chgBus  (c+112,((0xffU & (vlTOPp->Core__DOT__exe_pipe__DOT__reg_aluOutput 
					>> 2U))),10);
    }
}

void VCore::traceChgThis__4(VCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+113,(vlTOPp->clock));
	vcdp->chgBit  (c+114,(vlTOPp->reset));
	vcdp->chgBus  (c+115,(vlTOPp->io_instruction),32);
	vcdp->chgBus  (c+116,(vlTOPp->io_AluOut),32);
	vcdp->chgBit  (c+117,(vlTOPp->io_branchCheck));
    }
}
