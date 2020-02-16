// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore.h for the primary calling header

#include "VCore.h"             // For This
#include "VCore__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VCore) {
    VCore__Syms* __restrict vlSymsp = __VlSymsp = new VCore__Syms(this, name());
    VCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCore::__Vconfigure(VCore__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VCore::~VCore() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VCore::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCore::eval\n"); );
    VCore__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VCore::_eval_initial_loop(VCore__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void VCore::_initial__TOP__1(VCore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore::_initial__TOP__1\n"); );
    VCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp1,223,0,7);
    // Body
    // INITIAL at /home/farooq/chisel-tutorial/test_run_dir/examples/Core/Core.InsMem.mem.v:7
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x46696c65U;
    __Vtemp1[2U] = 0x74657374U;
    __Vtemp1[3U] = 0x6f6f712fU;
    __Vtemp1[4U] = 0x2f666172U;
    __Vtemp1[5U] = 0x686f6d65U;
    __Vtemp1[6U] = 0x2fU;
    VL_READMEM_W (true,32,1024, 0,7, __Vtemp1, vlTOPp->Core__DOT__InsMem__DOT__mem
		  ,0,~0);
}

VL_INLINE_OPT void VCore::_sequent__TOP__2(VCore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore::_sequent__TOP__2\n"); );
    VCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvset__Core__DOT__dataMem__DOT__mem__v0,0,0);
    VL_SIG16(__Vdlyvdim0__Core__DOT__dataMem__DOT__mem__v0,9,0);
    VL_SIG(__Vdlyvval__Core__DOT__dataMem__DOT__mem__v0,31,0);
    // Body
    __Vdlyvset__Core__DOT__dataMem__DOT__mem__v0 = 0U;
    // ALWAYS at Core.v:1571
    vlTOPp->Core__DOT__id_pipe__DOT__reg_opr_B = ((~ (IData)(vlTOPp->reset)) 
						  & (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_oprB));
    // ALWAYS at Core.v:1571
    vlTOPp->Core__DOT__id_pipe__DOT__reg_opr_A = ((IData)(vlTOPp->reset)
						   ? 0U
						   : (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_oprA));
    // ALWAYS at Core.v:1750
    vlTOPp->Core__DOT__exe_pipe__DOT__reg_memRead = 
	((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_memRead));
    // ALWAYS at Core.v:1750
    vlTOPp->Core__DOT__exe_pipe__DOT__alu_branch_output 
	= ((~ (IData)(vlTOPp->reset)) & ((1U == (IData)(vlTOPp->Core__DOT__alu__DOT___GEN_22)) 
					 & (2U == (3U 
						   & ((IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl) 
						      >> 3U)))));
    // ALWAYS at Core.v:1571
    vlTOPp->Core__DOT__id_pipe__DOT__reg_operandB = 
	((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_oprB)
					 ? ((0U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_extendSel))
					     ? ((((0x80000000U 
						   & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)
						   ? 0xfffffU
						   : 0U) 
						 << 0xcU) 
						| (0xfffU 
						   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						      >> 0x14U)))
					     : ((1U 
						 == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_extendSel))
						 ? 
						((((0x80000000U 
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
						 : 
						((2U 
						  == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_extendSel))
						  ? (IData)(
							    (VL_ULL(0x7ffffffff) 
							     & ((QData)((IData)(
										(0xfffffU 
										& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
										>> 0xcU)))) 
								<< 0xcU)))
						  : vlTOPp->Core__DOT__reg__024_io_rs2)))
					 : vlTOPp->Core__DOT__reg__024_io_rs2));
    // ALWAYS at Core.v:1341
    if (vlTOPp->Core__DOT__exe_pipe__DOT__reg_memWrite) {
	__Vdlyvval__Core__DOT__dataMem__DOT__mem__v0 
	    = vlTOPp->Core__DOT__exe_pipe__DOT__reg_strData;
	__Vdlyvset__Core__DOT__dataMem__DOT__mem__v0 = 1U;
	__Vdlyvdim0__Core__DOT__dataMem__DOT__mem__v0 
	    = (0xffU & (vlTOPp->Core__DOT__exe_pipe__DOT__reg_aluOutput 
			>> 2U));
    }
    // ALWAYS at Core.v:1873
    vlTOPp->Core__DOT__mem_pipe__DOT__reg_aluOutput 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Core__DOT__exe_pipe__DOT__reg_aluOutput);
    // ALWAYS at Core.v:1873
    vlTOPp->Core__DOT__mem_pipe__DOT__reg_dataOut = 
	((IData)(vlTOPp->reset) ? 0U : vlTOPp->Core__DOT__dataMem__DOT__mem
	 [(0xffU & (vlTOPp->Core__DOT__exe_pipe__DOT__reg_aluOutput 
		    >> 2U))]);
    // ALWAYS at Core.v:1873
    vlTOPp->Core__DOT__mem_pipe__DOT__reg_memToReg 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Core__DOT__exe_pipe__DOT__reg_memToReg));
    // ALWAYS at Core.v:1571
    vlTOPp->Core__DOT__id_pipe__DOT__reg_rs1_sel = 
	(0x1fU & ((IData)(vlTOPp->reset) ? 0U : (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						 >> 0xfU)));
    // ALWAYS at Core.v:1571
    vlTOPp->Core__DOT__id_pipe__DOT__reg_rs2_sel = 
	(0x1fU & ((IData)(vlTOPp->reset) ? 0U : (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						 >> 0x14U)));
    // ALWAYS at Core.v:1571
    vlTOPp->Core__DOT__id_pipe__DOT__reg_operandA = 
	((IData)(vlTOPp->reset) ? 0U : (((0U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_oprA)) 
					 | (3U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_oprA)))
					 ? ((0x1fU 
					     == (0x1fU 
						 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						    >> 0xfU)))
					     ? vlTOPp->Core__DOT__reg__024__DOT__registers_31
					     : ((0x1eU 
						 == 
						 (0x1fU 
						  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						     >> 0xfU)))
						 ? vlTOPp->Core__DOT__reg__024__DOT__registers_30
						 : 
						((0x1dU 
						  == 
						  (0x1fU 
						   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						      >> 0xfU)))
						  ? vlTOPp->Core__DOT__reg__024__DOT__registers_29
						  : 
						 ((0x1cU 
						   == 
						   (0x1fU 
						    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						       >> 0xfU)))
						   ? vlTOPp->Core__DOT__reg__024__DOT__registers_28
						   : 
						  ((0x1bU 
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
					     : vlTOPp->Core__DOT__if_pipe__DOT__reg_pc)));
    // ALWAYSPOST at Core.v:1343
    if (__Vdlyvset__Core__DOT__dataMem__DOT__mem__v0) {
	vlTOPp->Core__DOT__dataMem__DOT__mem[__Vdlyvdim0__Core__DOT__dataMem__DOT__mem__v0] 
	    = __Vdlyvval__Core__DOT__dataMem__DOT__mem__v0;
    }
    // ALWAYS at Core.v:1571
    vlTOPp->Core__DOT__id_pipe__DOT__reg_memRead = 
	((~ (IData)(vlTOPp->reset)) & ((0x33U != (0x7fU 
						  & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
				       & (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_load)));
    vlTOPp->io_branchCheck = vlTOPp->Core__DOT__exe_pipe__DOT__alu_branch_output;
    // ALWAYS at Core.v:1571
    vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl = 
	((IData)(vlTOPp->reset) ? 0U : ((0U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_aluOp))
					 ? (IData)(vlTOPp->Core__DOT__aluCtrl__DOT___T_17)
					 : ((3U == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_aluOp))
					     ? 0x1fU
					     : ((4U 
						 == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_aluOp))
						 ? 0U
						 : 
						((1U 
						  == (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_aluOp))
						  ? 
						 ((5U 
						   == 
						   (7U 
						    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						       >> 0xcU)))
						   ? (IData)(vlTOPp->Core__DOT__aluCtrl__DOT___T_17)
						   : 
						  (7U 
						   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						      >> 0xcU)))
						  : 
						 ((5U 
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
						    : 0U)))))));
    // ALWAYS at Core.v:1750
    vlTOPp->Core__DOT__exe_pipe__DOT__reg_strData = 
	((IData)(vlTOPp->reset) ? 0U : vlTOPp->Core__DOT__id_pipe__DOT__reg_strData);
    // ALWAYS at Core.v:1750
    vlTOPp->Core__DOT__exe_pipe__DOT__reg_memWrite 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_memWrite));
    // ALWAYS at Core.v:1750
    vlTOPp->Core__DOT__exe_pipe__DOT__reg_aluOutput 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Core__DOT__alu__DOT___GEN_22));
    // ALWAYS at Core.v:1750
    vlTOPp->Core__DOT__exe_pipe__DOT__reg_memToReg 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_memToReg));
    // ALWAYS at Core.v:1406
    vlTOPp->Core__DOT__if_pipe__DOT__reg_pc4 = ((IData)(vlTOPp->reset)
						 ? 0U
						 : 
						((IData)(4U) 
						 + vlTOPp->Core__DOT__PC__DOT__reg__024));
    // ALWAYS at Core.v:1406
    vlTOPp->Core__DOT__if_pipe__DOT__reg_pc = ((IData)(vlTOPp->reset)
					        ? 0U
					        : vlTOPp->Core__DOT__PC__DOT__reg__024);
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0x1fU == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_31 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0x1eU == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_30 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0x1dU == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_29 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0x1cU == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_28 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0x1bU == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_27 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0x1aU == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_26 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0x19U == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_25 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0x18U == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_24 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0x17U == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_23 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0x16U == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_22 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0x15U == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_21 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0x14U == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_20 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0x13U == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_19 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0x12U == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_18 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0x11U == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_17 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0x10U == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_16 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0xfU == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_15 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0xeU == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_14 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0xdU == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_13 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0xcU == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_12 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0xbU == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_11 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((0xaU == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_10 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((9U == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_9 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((8U == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_8 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((7U == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_7 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((6U == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_6 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((5U == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_5 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((4U == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_4 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((3U == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_3 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((2U == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_2 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    if (vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) {
	if ((0U != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
	    if ((1U == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))) {
		vlTOPp->Core__DOT__reg__024__DOT__registers_1 
		    = vlTOPp->Core__DOT__reg__024_io_writeData;
	    }
	}
    }
    // ALWAYS at Core.v:962
    vlTOPp->Core__DOT__reg__024__DOT__registers_0 = 
	((IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite)
	  ? ((0U == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))
	      ? 0U : ((0U == (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd))
		       ? vlTOPp->Core__DOT__reg__024_io_writeData
		       : 0U)) : 0U);
    // ALWAYS at Core.v:1571
    vlTOPp->Core__DOT__id_pipe__DOT__reg_strData = 
	((IData)(vlTOPp->reset) ? 0U : vlTOPp->Core__DOT__reg__024_io_rs2);
    // ALWAYS at Core.v:1571
    vlTOPp->Core__DOT__id_pipe__DOT__reg_memWrite = 
	((~ (IData)(vlTOPp->reset)) & ((0x33U != (0x7fU 
						  & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
				       & ((~ (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_load)) 
					  & (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_store))));
    vlTOPp->io_AluOut = vlTOPp->Core__DOT__exe_pipe__DOT__reg_aluOutput;
    // ALWAYS at Core.v:1571
    vlTOPp->Core__DOT__id_pipe__DOT__reg_memToReg = 
	((~ (IData)(vlTOPp->reset)) & ((0x33U != (0x7fU 
						  & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
				       & (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_load)));
    // ALWAYS at Core.v:1279
    vlTOPp->Core__DOT__PC__DOT__reg__024 = ((IData)(vlTOPp->reset)
					     ? 0U : vlTOPp->Core__DOT__PC_io_input);
    // ALWAYS at Core.v:1873
    vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Core__DOT__exe_pipe__DOT__reg_regWrite));
    // ALWAYS at Core.v:1873
    vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd = ((IData)(vlTOPp->reset)
						 ? 0U
						 : (IData)(vlTOPp->Core__DOT__exe_pipe__DOT__reg_rd));
    vlTOPp->Core__DOT__PC_io_input = ((IData)(4U) + vlTOPp->Core__DOT__PC__DOT__reg__024);
    vlTOPp->Core__DOT__reg__024_io_writeData = ((IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_memToReg)
						 ? vlTOPp->Core__DOT__mem_pipe__DOT__reg_dataOut
						 : 
						((IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite)
						  ? vlTOPp->Core__DOT__mem_pipe__DOT__reg_aluOutput
						  : 0U));
    // ALWAYS at Core.v:1750
    vlTOPp->Core__DOT__exe_pipe__DOT__reg_regWrite 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_regWrite));
    vlTOPp->Core__DOT__forwarding__DOT___T_36 = ((IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) 
						 & (0U 
						    != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd)));
    // ALWAYS at Core.v:1750
    vlTOPp->Core__DOT__exe_pipe__DOT__reg_rd = ((IData)(vlTOPp->reset)
						 ? 0U
						 : (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_rd));
    // ALWAYS at Core.v:1571
    vlTOPp->Core__DOT__id_pipe__DOT__reg_regWrite = 
	((~ (IData)(vlTOPp->reset)) & ((0x33U == (0x7fU 
						  & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
				       | ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_load) 
					  | ((~ (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_store)) 
					     & ((~ (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_branch)) 
						& ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jalr) 
						   | ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_i) 
						      | ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jal) 
							 | (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_lui)))))))));
    // ALWAYS at Core.v:1571
    vlTOPp->Core__DOT__id_pipe__DOT__reg_rd = (0x1fU 
					       & ((IData)(vlTOPp->reset)
						   ? 0U
						   : 
						  (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						   >> 7U)));
    vlTOPp->Core__DOT__forwarding__DOT___T_28 = ((IData)(vlTOPp->Core__DOT__exe_pipe__DOT__reg_rd) 
						 == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_rs1_sel));
    vlTOPp->Core__DOT__forwarding__DOT___T_30 = ((IData)(vlTOPp->Core__DOT__exe_pipe__DOT__reg_rd) 
						 == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_rs2_sel));
    vlTOPp->Core__DOT__forwarding__DOT___T_27 = ((IData)(vlTOPp->Core__DOT__exe_pipe__DOT__reg_regWrite) 
						 & (0U 
						    != (IData)(vlTOPp->Core__DOT__exe_pipe__DOT__reg_rd)));
    vlTOPp->Core__DOT__forwarding__DOT___GEN_2 = ((IData)(vlTOPp->Core__DOT__forwarding__DOT___T_27) 
						  & (IData)(vlTOPp->Core__DOT__forwarding__DOT___T_28));
    vlTOPp->Core__DOT__forwarding__DOT___GEN_3 = ((IData)(vlTOPp->Core__DOT__forwarding__DOT___T_27) 
						  & (IData)(vlTOPp->Core__DOT__forwarding__DOT___T_30));
    // ALWAYS at Core.v:1406
    vlTOPp->Core__DOT__if_pipe__DOT__reg_ins = ((IData)(vlTOPp->reset)
						 ? 0U
						 : vlTOPp->io_instruction);
    vlTOPp->Core__DOT__forwarding_io_alu_A = ((IData)(vlTOPp->Core__DOT__forwarding__DOT___T_36)
					       ? ((
						   (~ 
						    ((IData)(vlTOPp->Core__DOT__forwarding__DOT___T_36) 
						     & (IData)(vlTOPp->Core__DOT__forwarding__DOT___T_28))) 
						   & ((IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd) 
						      == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_rs1_sel)))
						   ? 2U
						   : (IData)(vlTOPp->Core__DOT__forwarding__DOT___GEN_2))
					       : (IData)(vlTOPp->Core__DOT__forwarding__DOT___GEN_2));
    vlTOPp->Core__DOT__forwarding_io_alu_B = ((IData)(vlTOPp->Core__DOT__forwarding__DOT___T_36)
					       ? ((
						   (~ 
						    ((IData)(vlTOPp->Core__DOT__forwarding__DOT___T_36) 
						     & (IData)(vlTOPp->Core__DOT__forwarding__DOT___T_30))) 
						   & ((IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd) 
						      == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_rs2_sel)))
						   ? 2U
						   : (IData)(vlTOPp->Core__DOT__forwarding__DOT___GEN_3))
					       : (IData)(vlTOPp->Core__DOT__forwarding__DOT___GEN_3));
    vlTOPp->io_instruction = vlTOPp->Core__DOT__InsMem__DOT__mem
	[(0x3ffU & (vlTOPp->Core__DOT__PC__DOT__reg__024 
		    >> 2U))];
    vlTOPp->Core__DOT__alu_io_a = ((2U == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_opr_A))
				    ? vlTOPp->Core__DOT__id_pipe__DOT__reg_operandA
				    : ((0U == (IData)(vlTOPp->Core__DOT__forwarding_io_alu_A))
				        ? vlTOPp->Core__DOT__id_pipe__DOT__reg_operandA
				        : ((1U == (IData)(vlTOPp->Core__DOT__forwarding_io_alu_A))
					    ? vlTOPp->Core__DOT__exe_pipe__DOT__reg_aluOutput
					    : ((2U 
						== (IData)(vlTOPp->Core__DOT__forwarding_io_alu_A))
					        ? vlTOPp->Core__DOT__reg__024_io_writeData
					        : vlTOPp->Core__DOT__id_pipe__DOT__reg_operandA))));
    vlTOPp->Core__DOT__alu_io_b = ((IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_opr_B)
				    ? vlTOPp->Core__DOT__id_pipe__DOT__reg_operandB
				    : ((0U == (IData)(vlTOPp->Core__DOT__forwarding_io_alu_B))
				        ? vlTOPp->Core__DOT__id_pipe__DOT__reg_operandB
				        : ((1U == (IData)(vlTOPp->Core__DOT__forwarding_io_alu_B))
					    ? vlTOPp->Core__DOT__exe_pipe__DOT__reg_aluOutput
					    : ((2U 
						== (IData)(vlTOPp->Core__DOT__forwarding_io_alu_B))
					        ? vlTOPp->Core__DOT__reg__024_io_writeData
					        : vlTOPp->Core__DOT__id_pipe__DOT__reg_operandB))));
    vlTOPp->Core__DOT__aluCtrl__DOT___T_17 = ((8U & 
					       (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						>> 0x1bU)) 
					      | (7U 
						 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						    >> 0xcU)));
    vlTOPp->Core__DOT__reg__024_io_rs2 = ((0x1fU == 
					   (0x1fU & 
					    (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
					     >> 0x14U)))
					   ? vlTOPp->Core__DOT__reg__024__DOT__registers_31
					   : ((0x1eU 
					       == (0x1fU 
						   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						      >> 0x14U)))
					       ? vlTOPp->Core__DOT__reg__024__DOT__registers_30
					       : ((0x1dU 
						   == 
						   (0x1fU 
						    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						       >> 0x14U)))
						   ? vlTOPp->Core__DOT__reg__024__DOT__registers_29
						   : 
						  ((0x1cU 
						    == 
						    (0x1fU 
						     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							>> 0x14U)))
						    ? vlTOPp->Core__DOT__reg__024__DOT__registers_28
						    : 
						   ((0x1bU 
						     == 
						     (0x1fU 
						      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							 >> 0x14U)))
						     ? vlTOPp->Core__DOT__reg__024__DOT__registers_27
						     : 
						    ((0x1aU 
						      == 
						      (0x1fU 
						       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							  >> 0x14U)))
						      ? vlTOPp->Core__DOT__reg__024__DOT__registers_26
						      : 
						     ((0x19U 
						       == 
						       (0x1fU 
							& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							   >> 0x14U)))
						       ? vlTOPp->Core__DOT__reg__024__DOT__registers_25
						       : 
						      ((0x18U 
							== 
							(0x1fU 
							 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							    >> 0x14U)))
						        ? vlTOPp->Core__DOT__reg__024__DOT__registers_24
						        : 
						       ((0x17U 
							 == 
							 (0x1fU 
							  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							     >> 0x14U)))
							 ? vlTOPp->Core__DOT__reg__024__DOT__registers_23
							 : 
							((0x16U 
							  == 
							  (0x1fU 
							   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							      >> 0x14U)))
							  ? vlTOPp->Core__DOT__reg__024__DOT__registers_22
							  : 
							 ((0x15U 
							   == 
							   (0x1fU 
							    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							       >> 0x14U)))
							   ? vlTOPp->Core__DOT__reg__024__DOT__registers_21
							   : 
							  ((0x14U 
							    == 
							    (0x1fU 
							     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								>> 0x14U)))
							    ? vlTOPp->Core__DOT__reg__024__DOT__registers_20
							    : 
							   ((0x13U 
							     == 
							     (0x1fU 
							      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								 >> 0x14U)))
							     ? vlTOPp->Core__DOT__reg__024__DOT__registers_19
							     : 
							    ((0x12U 
							      == 
							      (0x1fU 
							       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								  >> 0x14U)))
							      ? vlTOPp->Core__DOT__reg__024__DOT__registers_18
							      : 
							     ((0x11U 
							       == 
							       (0x1fU 
								& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								   >> 0x14U)))
							       ? vlTOPp->Core__DOT__reg__024__DOT__registers_17
							       : 
							      ((0x10U 
								== 
								(0x1fU 
								 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								    >> 0x14U)))
							        ? vlTOPp->Core__DOT__reg__024__DOT__registers_16
							        : 
							       ((0xfU 
								 == 
								 (0x1fU 
								  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								     >> 0x14U)))
								 ? vlTOPp->Core__DOT__reg__024__DOT__registers_15
								 : 
								((0xeU 
								  == 
								  (0x1fU 
								   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								      >> 0x14U)))
								  ? vlTOPp->Core__DOT__reg__024__DOT__registers_14
								  : 
								 ((0xdU 
								   == 
								   (0x1fU 
								    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								       >> 0x14U)))
								   ? vlTOPp->Core__DOT__reg__024__DOT__registers_13
								   : 
								  ((0xcU 
								    == 
								    (0x1fU 
								     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									>> 0x14U)))
								    ? vlTOPp->Core__DOT__reg__024__DOT__registers_12
								    : 
								   ((0xbU 
								     == 
								     (0x1fU 
								      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									 >> 0x14U)))
								     ? vlTOPp->Core__DOT__reg__024__DOT__registers_11
								     : 
								    ((0xaU 
								      == 
								      (0x1fU 
								       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									  >> 0x14U)))
								      ? vlTOPp->Core__DOT__reg__024__DOT__registers_10
								      : 
								     ((9U 
								       == 
								       (0x1fU 
									& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									   >> 0x14U)))
								       ? vlTOPp->Core__DOT__reg__024__DOT__registers_9
								       : 
								      ((8U 
									== 
									(0x1fU 
									 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									    >> 0x14U)))
								        ? vlTOPp->Core__DOT__reg__024__DOT__registers_8
								        : 
								       ((7U 
									 == 
									 (0x1fU 
									  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									     >> 0x14U)))
									 ? vlTOPp->Core__DOT__reg__024__DOT__registers_7
									 : 
									((6U 
									  == 
									  (0x1fU 
									   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									      >> 0x14U)))
									  ? vlTOPp->Core__DOT__reg__024__DOT__registers_6
									  : 
									 ((5U 
									   == 
									   (0x1fU 
									    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									       >> 0x14U)))
									   ? vlTOPp->Core__DOT__reg__024__DOT__registers_5
									   : 
									  ((4U 
									    == 
									    (0x1fU 
									     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
										>> 0x14U)))
									    ? vlTOPp->Core__DOT__reg__024__DOT__registers_4
									    : 
									   ((3U 
									     == 
									     (0x1fU 
									      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
										>> 0x14U)))
									     ? vlTOPp->Core__DOT__reg__024__DOT__registers_3
									     : 
									    ((2U 
									      == 
									      (0x1fU 
									       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
										>> 0x14U)))
									      ? vlTOPp->Core__DOT__reg__024__DOT__registers_2
									      : 
									     ((1U 
									       == 
									       (0x1fU 
										& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
										>> 0x14U)))
									       ? vlTOPp->Core__DOT__reg__024__DOT__registers_1
									       : vlTOPp->Core__DOT__reg__024__DOT__registers_0)))))))))))))))))))))))))))))));
    vlTOPp->Core__DOT__control__DOT__typeDecode_io_load 
	= ((0x33U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	   & (3U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)));
    vlTOPp->Core__DOT__control__DOT__typeDecode_io_store 
	= ((0x33U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	   & ((3U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	      & (0x23U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins))));
    vlTOPp->Core__DOT__control__DOT__typeDecode_io_branch 
	= ((0x33U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	   & ((3U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	      & ((0x23U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		 & (0x63U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)))));
    vlTOPp->Core__DOT__control__DOT__typeDecode_io_i 
	= ((0x33U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	   & ((3U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	      & ((0x23U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		 & ((0x63U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		    & (0x13U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins))))));
    vlTOPp->Core__DOT__control__DOT__typeDecode_io_jalr 
	= ((0x33U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	   & ((3U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	      & ((0x23U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		 & ((0x63U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		    & ((0x13U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		       & (0x67U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)))))));
    vlTOPp->Core__DOT__control__DOT__typeDecode_io_jal 
	= ((0x33U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	   & ((3U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	      & ((0x23U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		 & ((0x63U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		    & ((0x13U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		       & ((0x67U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
			  & (0x6fU == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins))))))));
    vlTOPp->Core__DOT__control__DOT__typeDecode_io_lui 
	= ((0x33U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	   & ((3U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	      & ((0x23U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		 & ((0x63U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		    & ((0x13U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		       & ((0x67U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
			  & ((0x6fU != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
			     & (0x37U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)))))))));
    vlTOPp->Core__DOT__alu__DOT___T_26 = VL_LTS_III(1,32,32, vlTOPp->Core__DOT__alu_io_a, vlTOPp->Core__DOT__alu_io_b);
    vlTOPp->Core__DOT__alu__DOT___T_46 = VL_SHIFTRS_III(32,32,5, vlTOPp->Core__DOT__alu_io_a, 
							(0x1fU 
							 & vlTOPp->Core__DOT__alu_io_b));
    vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_aluOp 
	= ((0x33U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins))
	    ? 0U : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_load)
		     ? 4U : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_store)
			      ? 5U : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_branch)
				       ? 2U : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jalr)
					        ? 3U
					        : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_i)
						    ? 1U
						    : 
						   ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jal)
						     ? 3U
						     : 
						    ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_lui)
						      ? 6U
						      : 7U))))))));
    vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_oprA 
	= ((0x33U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins))
	    ? 0U : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_load)
		     ? 0U : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_store)
			      ? 0U : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_branch)
				       ? 0U : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jalr)
					        ? 2U
					        : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_i)
						    ? 0U
						    : 
						   ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jal)
						     ? 2U
						     : 
						    ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_lui)
						      ? 3U
						      : 0U))))))));
    vlTOPp->Core__DOT__control__DOT__CtrlDecode__DOT___GEN_8 
	= ((~ (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jal)) 
	   & (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_lui));
    vlTOPp->Core__DOT__alu__DOT___GEN_20 = ((2U == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
					     ? ((0xfffffffcU 
						 & (VL_NEGATE_I((IData)(
									(1U 
									 & (((IData)(vlTOPp->Core__DOT__alu__DOT___T_26)
									      ? 1U
									      : 0U) 
									    >> 1U)))) 
						    << 2U)) 
						| ((IData)(vlTOPp->Core__DOT__alu__DOT___T_26)
						    ? 1U
						    : 0U))
					     : ((4U 
						 == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
						 ? 
						(vlTOPp->Core__DOT__alu_io_a 
						 ^ vlTOPp->Core__DOT__alu_io_b)
						 : 
						(((3U 
						   == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl)) 
						  | (0x16U 
						     == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl)))
						  ? 
						 ((0xfffffffcU 
						   & (VL_NEGATE_I((IData)(
									  (1U 
									   & (((vlTOPp->Core__DOT__alu_io_a 
										< vlTOPp->Core__DOT__alu_io_b)
									        ? 1U
									        : 0U) 
									      >> 1U)))) 
						      << 2U)) 
						  | ((vlTOPp->Core__DOT__alu_io_a 
						      < vlTOPp->Core__DOT__alu_io_b)
						      ? 1U
						      : 0U))
						  : 
						 ((5U 
						   == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
						   ? vlTOPp->Core__DOT__alu__DOT___T_46
						   : 
						  ((6U 
						    == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
						    ? 
						   (vlTOPp->Core__DOT__alu_io_a 
						    | vlTOPp->Core__DOT__alu_io_b)
						    : 
						   ((7U 
						     == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
						     ? 
						    (vlTOPp->Core__DOT__alu_io_a 
						     & vlTOPp->Core__DOT__alu_io_b)
						     : 
						    ((8U 
						      == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
						      ? 
						     (vlTOPp->Core__DOT__alu_io_a 
						      - vlTOPp->Core__DOT__alu_io_b)
						      : 
						     ((0xdU 
						       == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
						       ? vlTOPp->Core__DOT__alu__DOT___T_46
						       : 
						      ((0x10U 
							== (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
						        ? 
						       ((0xfffffffcU 
							 & (VL_NEGATE_I((IData)(
										(1U 
										& (((vlTOPp->Core__DOT__alu_io_a 
										== vlTOPp->Core__DOT__alu_io_b)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
							    << 2U)) 
							| ((vlTOPp->Core__DOT__alu_io_a 
							    == vlTOPp->Core__DOT__alu_io_b)
							    ? 1U
							    : 0U))
						        : 
						       ((0x11U 
							 == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
							 ? 
							((0xfffffffcU 
							  & (VL_NEGATE_I((IData)(
										(1U 
										& (((vlTOPp->Core__DOT__alu_io_a 
										!= vlTOPp->Core__DOT__alu_io_b)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
							     << 2U)) 
							 | ((vlTOPp->Core__DOT__alu_io_a 
							     != vlTOPp->Core__DOT__alu_io_b)
							     ? 1U
							     : 0U))
							 : 
							((0x14U 
							  == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
							  ? 
							 ((0xfffffffcU 
							   & (VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlTOPp->Core__DOT__alu__DOT___T_26)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
							      << 2U)) 
							  | ((IData)(vlTOPp->Core__DOT__alu__DOT___T_26)
							      ? 1U
							      : 0U))
							  : 
							 ((0x15U 
							   == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
							   ? 
							  ((0xfffffffcU 
							    & (VL_NEGATE_I((IData)(
										(1U 
										& ((VL_GTS_III(1,32,32, vlTOPp->Core__DOT__alu_io_a, vlTOPp->Core__DOT__alu_io_b)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
							       << 2U)) 
							   | (VL_GTS_III(1,32,32, vlTOPp->Core__DOT__alu_io_a, vlTOPp->Core__DOT__alu_io_b)
							       ? 1U
							       : 0U))
							   : 
							  ((0x17U 
							    == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
							    ? 
							   ((0xfffffffcU 
							     & (VL_NEGATE_I((IData)(
										(1U 
										& ((VL_GTES_III(1,32,32, vlTOPp->Core__DOT__alu_io_a, vlTOPp->Core__DOT__alu_io_b)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
								<< 2U)) 
							    | (VL_GTES_III(1,32,32, vlTOPp->Core__DOT__alu_io_a, vlTOPp->Core__DOT__alu_io_b)
							        ? 1U
							        : 0U))
							    : vlTOPp->Core__DOT__alu_io_a)))))))))))));
    vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_oprB 
	= ((0x33U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	   & ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_load) 
	      | ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_store) 
		 | ((~ (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_branch)) 
		    & ((~ (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jalr)) 
		       & ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_i) 
			  | (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode__DOT___GEN_8)))))));
    vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_extendSel 
	= ((0x33U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins))
	    ? 0U : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_load)
		     ? 0U : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_store)
			      ? 2U : ((~ (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_branch)) 
				      & ((~ (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jalr)) 
					 & ((~ (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_i)) 
					    & (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode__DOT___GEN_8)))))));
    vlTOPp->Core__DOT__alu__DOT___GEN_22 = (VL_ULL(0x7fffffffffffffff) 
					    & ((0U 
						== (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
					        ? (
						   ((QData)((IData)(
								    (0x7fffffffU 
								     & VL_NEGATE_I((IData)(
										(1U 
										& ((vlTOPp->Core__DOT__alu_io_a 
										+ vlTOPp->Core__DOT__alu_io_b) 
										>> 0x1fU))))))) 
						    << 0x20U) 
						   | (QData)((IData)(
								     (vlTOPp->Core__DOT__alu_io_a 
								      + vlTOPp->Core__DOT__alu_io_b))))
					        : (
						   (1U 
						    == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
						    ? 
						   ((((QData)((IData)(
								      (0x7fffffffU 
								       & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Core__DOT__alu_io_a 
										>> 0x1fU))))))) 
						      << 0x20U) 
						     | (QData)((IData)(vlTOPp->Core__DOT__alu_io_a))) 
						    << 
						    (0x1fU 
						     & vlTOPp->Core__DOT__alu_io_b))
						    : 
						   (((QData)((IData)(
								     (0x7fffffffU 
								      & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Core__DOT__alu__DOT___GEN_20 
										>> 0x1fU))))))) 
						     << 0x20U) 
						    | (QData)((IData)(vlTOPp->Core__DOT__alu__DOT___GEN_20))))));
}

void VCore::_settle__TOP__3(VCore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore::_settle__TOP__3\n"); );
    VCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_branchCheck = vlTOPp->Core__DOT__exe_pipe__DOT__alu_branch_output;
    vlTOPp->io_AluOut = vlTOPp->Core__DOT__exe_pipe__DOT__reg_aluOutput;
    vlTOPp->Core__DOT__PC_io_input = ((IData)(4U) + vlTOPp->Core__DOT__PC__DOT__reg__024);
    vlTOPp->Core__DOT__reg__024_io_writeData = ((IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_memToReg)
						 ? vlTOPp->Core__DOT__mem_pipe__DOT__reg_dataOut
						 : 
						((IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite)
						  ? vlTOPp->Core__DOT__mem_pipe__DOT__reg_aluOutput
						  : 0U));
    vlTOPp->Core__DOT__forwarding__DOT___T_36 = ((IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_regWrite) 
						 & (0U 
						    != (IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd)));
    vlTOPp->Core__DOT__forwarding__DOT___T_28 = ((IData)(vlTOPp->Core__DOT__exe_pipe__DOT__reg_rd) 
						 == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_rs1_sel));
    vlTOPp->Core__DOT__forwarding__DOT___T_30 = ((IData)(vlTOPp->Core__DOT__exe_pipe__DOT__reg_rd) 
						 == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_rs2_sel));
    vlTOPp->Core__DOT__forwarding__DOT___T_27 = ((IData)(vlTOPp->Core__DOT__exe_pipe__DOT__reg_regWrite) 
						 & (0U 
						    != (IData)(vlTOPp->Core__DOT__exe_pipe__DOT__reg_rd)));
    vlTOPp->Core__DOT__aluCtrl__DOT___T_17 = ((8U & 
					       (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						>> 0x1bU)) 
					      | (7U 
						 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						    >> 0xcU)));
    vlTOPp->Core__DOT__reg__024_io_rs2 = ((0x1fU == 
					   (0x1fU & 
					    (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
					     >> 0x14U)))
					   ? vlTOPp->Core__DOT__reg__024__DOT__registers_31
					   : ((0x1eU 
					       == (0x1fU 
						   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						      >> 0x14U)))
					       ? vlTOPp->Core__DOT__reg__024__DOT__registers_30
					       : ((0x1dU 
						   == 
						   (0x1fU 
						    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
						       >> 0x14U)))
						   ? vlTOPp->Core__DOT__reg__024__DOT__registers_29
						   : 
						  ((0x1cU 
						    == 
						    (0x1fU 
						     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							>> 0x14U)))
						    ? vlTOPp->Core__DOT__reg__024__DOT__registers_28
						    : 
						   ((0x1bU 
						     == 
						     (0x1fU 
						      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							 >> 0x14U)))
						     ? vlTOPp->Core__DOT__reg__024__DOT__registers_27
						     : 
						    ((0x1aU 
						      == 
						      (0x1fU 
						       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							  >> 0x14U)))
						      ? vlTOPp->Core__DOT__reg__024__DOT__registers_26
						      : 
						     ((0x19U 
						       == 
						       (0x1fU 
							& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							   >> 0x14U)))
						       ? vlTOPp->Core__DOT__reg__024__DOT__registers_25
						       : 
						      ((0x18U 
							== 
							(0x1fU 
							 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							    >> 0x14U)))
						        ? vlTOPp->Core__DOT__reg__024__DOT__registers_24
						        : 
						       ((0x17U 
							 == 
							 (0x1fU 
							  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							     >> 0x14U)))
							 ? vlTOPp->Core__DOT__reg__024__DOT__registers_23
							 : 
							((0x16U 
							  == 
							  (0x1fU 
							   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							      >> 0x14U)))
							  ? vlTOPp->Core__DOT__reg__024__DOT__registers_22
							  : 
							 ((0x15U 
							   == 
							   (0x1fU 
							    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
							       >> 0x14U)))
							   ? vlTOPp->Core__DOT__reg__024__DOT__registers_21
							   : 
							  ((0x14U 
							    == 
							    (0x1fU 
							     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								>> 0x14U)))
							    ? vlTOPp->Core__DOT__reg__024__DOT__registers_20
							    : 
							   ((0x13U 
							     == 
							     (0x1fU 
							      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								 >> 0x14U)))
							     ? vlTOPp->Core__DOT__reg__024__DOT__registers_19
							     : 
							    ((0x12U 
							      == 
							      (0x1fU 
							       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								  >> 0x14U)))
							      ? vlTOPp->Core__DOT__reg__024__DOT__registers_18
							      : 
							     ((0x11U 
							       == 
							       (0x1fU 
								& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								   >> 0x14U)))
							       ? vlTOPp->Core__DOT__reg__024__DOT__registers_17
							       : 
							      ((0x10U 
								== 
								(0x1fU 
								 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								    >> 0x14U)))
							        ? vlTOPp->Core__DOT__reg__024__DOT__registers_16
							        : 
							       ((0xfU 
								 == 
								 (0x1fU 
								  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								     >> 0x14U)))
								 ? vlTOPp->Core__DOT__reg__024__DOT__registers_15
								 : 
								((0xeU 
								  == 
								  (0x1fU 
								   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								      >> 0x14U)))
								  ? vlTOPp->Core__DOT__reg__024__DOT__registers_14
								  : 
								 ((0xdU 
								   == 
								   (0x1fU 
								    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
								       >> 0x14U)))
								   ? vlTOPp->Core__DOT__reg__024__DOT__registers_13
								   : 
								  ((0xcU 
								    == 
								    (0x1fU 
								     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									>> 0x14U)))
								    ? vlTOPp->Core__DOT__reg__024__DOT__registers_12
								    : 
								   ((0xbU 
								     == 
								     (0x1fU 
								      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									 >> 0x14U)))
								     ? vlTOPp->Core__DOT__reg__024__DOT__registers_11
								     : 
								    ((0xaU 
								      == 
								      (0x1fU 
								       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									  >> 0x14U)))
								      ? vlTOPp->Core__DOT__reg__024__DOT__registers_10
								      : 
								     ((9U 
								       == 
								       (0x1fU 
									& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									   >> 0x14U)))
								       ? vlTOPp->Core__DOT__reg__024__DOT__registers_9
								       : 
								      ((8U 
									== 
									(0x1fU 
									 & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									    >> 0x14U)))
								        ? vlTOPp->Core__DOT__reg__024__DOT__registers_8
								        : 
								       ((7U 
									 == 
									 (0x1fU 
									  & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									     >> 0x14U)))
									 ? vlTOPp->Core__DOT__reg__024__DOT__registers_7
									 : 
									((6U 
									  == 
									  (0x1fU 
									   & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									      >> 0x14U)))
									  ? vlTOPp->Core__DOT__reg__024__DOT__registers_6
									  : 
									 ((5U 
									   == 
									   (0x1fU 
									    & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
									       >> 0x14U)))
									   ? vlTOPp->Core__DOT__reg__024__DOT__registers_5
									   : 
									  ((4U 
									    == 
									    (0x1fU 
									     & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
										>> 0x14U)))
									    ? vlTOPp->Core__DOT__reg__024__DOT__registers_4
									    : 
									   ((3U 
									     == 
									     (0x1fU 
									      & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
										>> 0x14U)))
									     ? vlTOPp->Core__DOT__reg__024__DOT__registers_3
									     : 
									    ((2U 
									      == 
									      (0x1fU 
									       & (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
										>> 0x14U)))
									      ? vlTOPp->Core__DOT__reg__024__DOT__registers_2
									      : 
									     ((1U 
									       == 
									       (0x1fU 
										& (vlTOPp->Core__DOT__if_pipe__DOT__reg_ins 
										>> 0x14U)))
									       ? vlTOPp->Core__DOT__reg__024__DOT__registers_1
									       : vlTOPp->Core__DOT__reg__024__DOT__registers_0)))))))))))))))))))))))))))))));
    vlTOPp->Core__DOT__control__DOT__typeDecode_io_load 
	= ((0x33U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	   & (3U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)));
    vlTOPp->Core__DOT__control__DOT__typeDecode_io_store 
	= ((0x33U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	   & ((3U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	      & (0x23U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins))));
    vlTOPp->Core__DOT__control__DOT__typeDecode_io_branch 
	= ((0x33U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	   & ((3U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	      & ((0x23U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		 & (0x63U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)))));
    vlTOPp->Core__DOT__control__DOT__typeDecode_io_i 
	= ((0x33U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	   & ((3U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	      & ((0x23U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		 & ((0x63U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		    & (0x13U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins))))));
    vlTOPp->Core__DOT__control__DOT__typeDecode_io_jalr 
	= ((0x33U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	   & ((3U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	      & ((0x23U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		 & ((0x63U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		    & ((0x13U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		       & (0x67U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)))))));
    vlTOPp->Core__DOT__control__DOT__typeDecode_io_jal 
	= ((0x33U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	   & ((3U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	      & ((0x23U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		 & ((0x63U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		    & ((0x13U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		       & ((0x67U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
			  & (0x6fU == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins))))))));
    vlTOPp->Core__DOT__control__DOT__typeDecode_io_lui 
	= ((0x33U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	   & ((3U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	      & ((0x23U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		 & ((0x63U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		    & ((0x13U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
		       & ((0x67U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
			  & ((0x6fU != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
			     & (0x37U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)))))))));
    vlTOPp->io_instruction = vlTOPp->Core__DOT__InsMem__DOT__mem
	[(0x3ffU & (vlTOPp->Core__DOT__PC__DOT__reg__024 
		    >> 2U))];
    vlTOPp->Core__DOT__forwarding__DOT___GEN_2 = ((IData)(vlTOPp->Core__DOT__forwarding__DOT___T_27) 
						  & (IData)(vlTOPp->Core__DOT__forwarding__DOT___T_28));
    vlTOPp->Core__DOT__forwarding__DOT___GEN_3 = ((IData)(vlTOPp->Core__DOT__forwarding__DOT___T_27) 
						  & (IData)(vlTOPp->Core__DOT__forwarding__DOT___T_30));
    vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_aluOp 
	= ((0x33U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins))
	    ? 0U : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_load)
		     ? 4U : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_store)
			      ? 5U : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_branch)
				       ? 2U : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jalr)
					        ? 3U
					        : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_i)
						    ? 1U
						    : 
						   ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jal)
						     ? 3U
						     : 
						    ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_lui)
						      ? 6U
						      : 7U))))))));
    vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_oprA 
	= ((0x33U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins))
	    ? 0U : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_load)
		     ? 0U : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_store)
			      ? 0U : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_branch)
				       ? 0U : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jalr)
					        ? 2U
					        : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_i)
						    ? 0U
						    : 
						   ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jal)
						     ? 2U
						     : 
						    ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_lui)
						      ? 3U
						      : 0U))))))));
    vlTOPp->Core__DOT__control__DOT__CtrlDecode__DOT___GEN_8 
	= ((~ (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jal)) 
	   & (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_lui));
    vlTOPp->Core__DOT__forwarding_io_alu_A = ((IData)(vlTOPp->Core__DOT__forwarding__DOT___T_36)
					       ? ((
						   (~ 
						    ((IData)(vlTOPp->Core__DOT__forwarding__DOT___T_36) 
						     & (IData)(vlTOPp->Core__DOT__forwarding__DOT___T_28))) 
						   & ((IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd) 
						      == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_rs1_sel)))
						   ? 2U
						   : (IData)(vlTOPp->Core__DOT__forwarding__DOT___GEN_2))
					       : (IData)(vlTOPp->Core__DOT__forwarding__DOT___GEN_2));
    vlTOPp->Core__DOT__forwarding_io_alu_B = ((IData)(vlTOPp->Core__DOT__forwarding__DOT___T_36)
					       ? ((
						   (~ 
						    ((IData)(vlTOPp->Core__DOT__forwarding__DOT___T_36) 
						     & (IData)(vlTOPp->Core__DOT__forwarding__DOT___T_30))) 
						   & ((IData)(vlTOPp->Core__DOT__mem_pipe__DOT__reg_rd) 
						      == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_rs2_sel)))
						   ? 2U
						   : (IData)(vlTOPp->Core__DOT__forwarding__DOT___GEN_3))
					       : (IData)(vlTOPp->Core__DOT__forwarding__DOT___GEN_3));
    vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_oprB 
	= ((0x33U != (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins)) 
	   & ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_load) 
	      | ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_store) 
		 | ((~ (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_branch)) 
		    & ((~ (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jalr)) 
		       & ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_i) 
			  | (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode__DOT___GEN_8)))))));
    vlTOPp->Core__DOT__control__DOT__CtrlDecode_io_extendSel 
	= ((0x33U == (0x7fU & vlTOPp->Core__DOT__if_pipe__DOT__reg_ins))
	    ? 0U : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_load)
		     ? 0U : ((IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_store)
			      ? 2U : ((~ (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_branch)) 
				      & ((~ (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_jalr)) 
					 & ((~ (IData)(vlTOPp->Core__DOT__control__DOT__typeDecode_io_i)) 
					    & (IData)(vlTOPp->Core__DOT__control__DOT__CtrlDecode__DOT___GEN_8)))))));
    vlTOPp->Core__DOT__alu_io_a = ((2U == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_opr_A))
				    ? vlTOPp->Core__DOT__id_pipe__DOT__reg_operandA
				    : ((0U == (IData)(vlTOPp->Core__DOT__forwarding_io_alu_A))
				        ? vlTOPp->Core__DOT__id_pipe__DOT__reg_operandA
				        : ((1U == (IData)(vlTOPp->Core__DOT__forwarding_io_alu_A))
					    ? vlTOPp->Core__DOT__exe_pipe__DOT__reg_aluOutput
					    : ((2U 
						== (IData)(vlTOPp->Core__DOT__forwarding_io_alu_A))
					        ? vlTOPp->Core__DOT__reg__024_io_writeData
					        : vlTOPp->Core__DOT__id_pipe__DOT__reg_operandA))));
    vlTOPp->Core__DOT__alu_io_b = ((IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_opr_B)
				    ? vlTOPp->Core__DOT__id_pipe__DOT__reg_operandB
				    : ((0U == (IData)(vlTOPp->Core__DOT__forwarding_io_alu_B))
				        ? vlTOPp->Core__DOT__id_pipe__DOT__reg_operandB
				        : ((1U == (IData)(vlTOPp->Core__DOT__forwarding_io_alu_B))
					    ? vlTOPp->Core__DOT__exe_pipe__DOT__reg_aluOutput
					    : ((2U 
						== (IData)(vlTOPp->Core__DOT__forwarding_io_alu_B))
					        ? vlTOPp->Core__DOT__reg__024_io_writeData
					        : vlTOPp->Core__DOT__id_pipe__DOT__reg_operandB))));
    vlTOPp->Core__DOT__alu__DOT___T_26 = VL_LTS_III(1,32,32, vlTOPp->Core__DOT__alu_io_a, vlTOPp->Core__DOT__alu_io_b);
    vlTOPp->Core__DOT__alu__DOT___T_46 = VL_SHIFTRS_III(32,32,5, vlTOPp->Core__DOT__alu_io_a, 
							(0x1fU 
							 & vlTOPp->Core__DOT__alu_io_b));
    vlTOPp->Core__DOT__alu__DOT___GEN_20 = ((2U == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
					     ? ((0xfffffffcU 
						 & (VL_NEGATE_I((IData)(
									(1U 
									 & (((IData)(vlTOPp->Core__DOT__alu__DOT___T_26)
									      ? 1U
									      : 0U) 
									    >> 1U)))) 
						    << 2U)) 
						| ((IData)(vlTOPp->Core__DOT__alu__DOT___T_26)
						    ? 1U
						    : 0U))
					     : ((4U 
						 == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
						 ? 
						(vlTOPp->Core__DOT__alu_io_a 
						 ^ vlTOPp->Core__DOT__alu_io_b)
						 : 
						(((3U 
						   == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl)) 
						  | (0x16U 
						     == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl)))
						  ? 
						 ((0xfffffffcU 
						   & (VL_NEGATE_I((IData)(
									  (1U 
									   & (((vlTOPp->Core__DOT__alu_io_a 
										< vlTOPp->Core__DOT__alu_io_b)
									        ? 1U
									        : 0U) 
									      >> 1U)))) 
						      << 2U)) 
						  | ((vlTOPp->Core__DOT__alu_io_a 
						      < vlTOPp->Core__DOT__alu_io_b)
						      ? 1U
						      : 0U))
						  : 
						 ((5U 
						   == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
						   ? vlTOPp->Core__DOT__alu__DOT___T_46
						   : 
						  ((6U 
						    == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
						    ? 
						   (vlTOPp->Core__DOT__alu_io_a 
						    | vlTOPp->Core__DOT__alu_io_b)
						    : 
						   ((7U 
						     == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
						     ? 
						    (vlTOPp->Core__DOT__alu_io_a 
						     & vlTOPp->Core__DOT__alu_io_b)
						     : 
						    ((8U 
						      == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
						      ? 
						     (vlTOPp->Core__DOT__alu_io_a 
						      - vlTOPp->Core__DOT__alu_io_b)
						      : 
						     ((0xdU 
						       == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
						       ? vlTOPp->Core__DOT__alu__DOT___T_46
						       : 
						      ((0x10U 
							== (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
						        ? 
						       ((0xfffffffcU 
							 & (VL_NEGATE_I((IData)(
										(1U 
										& (((vlTOPp->Core__DOT__alu_io_a 
										== vlTOPp->Core__DOT__alu_io_b)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
							    << 2U)) 
							| ((vlTOPp->Core__DOT__alu_io_a 
							    == vlTOPp->Core__DOT__alu_io_b)
							    ? 1U
							    : 0U))
						        : 
						       ((0x11U 
							 == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
							 ? 
							((0xfffffffcU 
							  & (VL_NEGATE_I((IData)(
										(1U 
										& (((vlTOPp->Core__DOT__alu_io_a 
										!= vlTOPp->Core__DOT__alu_io_b)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
							     << 2U)) 
							 | ((vlTOPp->Core__DOT__alu_io_a 
							     != vlTOPp->Core__DOT__alu_io_b)
							     ? 1U
							     : 0U))
							 : 
							((0x14U 
							  == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
							  ? 
							 ((0xfffffffcU 
							   & (VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlTOPp->Core__DOT__alu__DOT___T_26)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
							      << 2U)) 
							  | ((IData)(vlTOPp->Core__DOT__alu__DOT___T_26)
							      ? 1U
							      : 0U))
							  : 
							 ((0x15U 
							   == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
							   ? 
							  ((0xfffffffcU 
							    & (VL_NEGATE_I((IData)(
										(1U 
										& ((VL_GTS_III(1,32,32, vlTOPp->Core__DOT__alu_io_a, vlTOPp->Core__DOT__alu_io_b)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
							       << 2U)) 
							   | (VL_GTS_III(1,32,32, vlTOPp->Core__DOT__alu_io_a, vlTOPp->Core__DOT__alu_io_b)
							       ? 1U
							       : 0U))
							   : 
							  ((0x17U 
							    == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
							    ? 
							   ((0xfffffffcU 
							     & (VL_NEGATE_I((IData)(
										(1U 
										& ((VL_GTES_III(1,32,32, vlTOPp->Core__DOT__alu_io_a, vlTOPp->Core__DOT__alu_io_b)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
								<< 2U)) 
							    | (VL_GTES_III(1,32,32, vlTOPp->Core__DOT__alu_io_a, vlTOPp->Core__DOT__alu_io_b)
							        ? 1U
							        : 0U))
							    : vlTOPp->Core__DOT__alu_io_a)))))))))))));
    vlTOPp->Core__DOT__alu__DOT___GEN_22 = (VL_ULL(0x7fffffffffffffff) 
					    & ((0U 
						== (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
					        ? (
						   ((QData)((IData)(
								    (0x7fffffffU 
								     & VL_NEGATE_I((IData)(
										(1U 
										& ((vlTOPp->Core__DOT__alu_io_a 
										+ vlTOPp->Core__DOT__alu_io_b) 
										>> 0x1fU))))))) 
						    << 0x20U) 
						   | (QData)((IData)(
								     (vlTOPp->Core__DOT__alu_io_a 
								      + vlTOPp->Core__DOT__alu_io_b))))
					        : (
						   (1U 
						    == (IData)(vlTOPp->Core__DOT__id_pipe__DOT__reg_aluCtrl))
						    ? 
						   ((((QData)((IData)(
								      (0x7fffffffU 
								       & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Core__DOT__alu_io_a 
										>> 0x1fU))))))) 
						      << 0x20U) 
						     | (QData)((IData)(vlTOPp->Core__DOT__alu_io_a))) 
						    << 
						    (0x1fU 
						     & vlTOPp->Core__DOT__alu_io_b))
						    : 
						   (((QData)((IData)(
								     (0x7fffffffU 
								      & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Core__DOT__alu__DOT___GEN_20 
										>> 0x1fU))))))) 
						     << 0x20U) 
						    | (QData)((IData)(vlTOPp->Core__DOT__alu__DOT___GEN_20))))));
}

void VCore::_eval(VCore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore::_eval\n"); );
    VCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VCore::_eval_initial(VCore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore::_eval_initial\n"); );
    VCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VCore::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore::final\n"); );
    // Variables
    VCore__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCore::_eval_settle(VCore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore::_eval_settle\n"); );
    VCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VCore::_change_request(VCore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore::_change_request\n"); );
    VCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCore::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VCore::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_instruction = VL_RAND_RESET_I(32);
    io_AluOut = VL_RAND_RESET_I(32);
    io_branchCheck = VL_RAND_RESET_I(1);
    Core__DOT__alu_io_a = VL_RAND_RESET_I(32);
    Core__DOT__alu_io_b = VL_RAND_RESET_I(32);
    Core__DOT__reg__024_io_writeData = VL_RAND_RESET_I(32);
    Core__DOT__reg__024_io_rs2 = VL_RAND_RESET_I(32);
    Core__DOT__PC_io_input = VL_RAND_RESET_I(32);
    Core__DOT__forwarding_io_alu_A = VL_RAND_RESET_I(2);
    Core__DOT__forwarding_io_alu_B = VL_RAND_RESET_I(2);
    Core__DOT__control__DOT__typeDecode_io_load = VL_RAND_RESET_I(1);
    Core__DOT__control__DOT__typeDecode_io_store = VL_RAND_RESET_I(1);
    Core__DOT__control__DOT__typeDecode_io_branch = VL_RAND_RESET_I(1);
    Core__DOT__control__DOT__typeDecode_io_i = VL_RAND_RESET_I(1);
    Core__DOT__control__DOT__typeDecode_io_jal = VL_RAND_RESET_I(1);
    Core__DOT__control__DOT__typeDecode_io_jalr = VL_RAND_RESET_I(1);
    Core__DOT__control__DOT__typeDecode_io_lui = VL_RAND_RESET_I(1);
    Core__DOT__control__DOT__CtrlDecode_io_aluOp = VL_RAND_RESET_I(3);
    Core__DOT__control__DOT__CtrlDecode_io_oprA = VL_RAND_RESET_I(2);
    Core__DOT__control__DOT__CtrlDecode_io_oprB = VL_RAND_RESET_I(1);
    Core__DOT__control__DOT__CtrlDecode_io_extendSel = VL_RAND_RESET_I(2);
    Core__DOT__control__DOT__CtrlDecode__DOT___GEN_8 = VL_RAND_RESET_I(1);
    Core__DOT__aluCtrl__DOT___T_17 = VL_RAND_RESET_I(5);
    Core__DOT__alu__DOT___T_26 = VL_RAND_RESET_I(1);
    Core__DOT__alu__DOT___T_46 = VL_RAND_RESET_I(32);
    Core__DOT__alu__DOT___GEN_20 = VL_RAND_RESET_I(32);
    Core__DOT__alu__DOT___GEN_22 = VL_RAND_RESET_Q(63);
    Core__DOT__reg__024__DOT__registers_0 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_1 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_2 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_3 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_4 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_5 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_6 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_7 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_8 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_9 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_10 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_11 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_12 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_13 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_14 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_15 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_16 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_17 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_18 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_19 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_20 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_21 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_22 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_23 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_24 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_25 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_26 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_27 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_28 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_29 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_30 = VL_RAND_RESET_I(32);
    Core__DOT__reg__024__DOT__registers_31 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    Core__DOT__InsMem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Core__DOT__PC__DOT__reg__024 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    Core__DOT__dataMem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Core__DOT__if_pipe__DOT__reg_pc = VL_RAND_RESET_I(32);
    Core__DOT__if_pipe__DOT__reg_pc4 = VL_RAND_RESET_I(32);
    Core__DOT__if_pipe__DOT__reg_ins = VL_RAND_RESET_I(32);
    Core__DOT__id_pipe__DOT__reg_memWrite = VL_RAND_RESET_I(1);
    Core__DOT__id_pipe__DOT__reg_memRead = VL_RAND_RESET_I(1);
    Core__DOT__id_pipe__DOT__reg_memToReg = VL_RAND_RESET_I(1);
    Core__DOT__id_pipe__DOT__reg_operandA = VL_RAND_RESET_I(32);
    Core__DOT__id_pipe__DOT__reg_operandB = VL_RAND_RESET_I(32);
    Core__DOT__id_pipe__DOT__reg_rd = VL_RAND_RESET_I(5);
    Core__DOT__id_pipe__DOT__reg_strData = VL_RAND_RESET_I(32);
    Core__DOT__id_pipe__DOT__reg_aluCtrl = VL_RAND_RESET_I(5);
    Core__DOT__id_pipe__DOT__reg_regWrite = VL_RAND_RESET_I(1);
    Core__DOT__id_pipe__DOT__reg_rs1_sel = VL_RAND_RESET_I(5);
    Core__DOT__id_pipe__DOT__reg_rs2_sel = VL_RAND_RESET_I(5);
    Core__DOT__id_pipe__DOT__reg_opr_A = VL_RAND_RESET_I(2);
    Core__DOT__id_pipe__DOT__reg_opr_B = VL_RAND_RESET_I(1);
    Core__DOT__exe_pipe__DOT__reg_memWrite = VL_RAND_RESET_I(1);
    Core__DOT__exe_pipe__DOT__reg_memRead = VL_RAND_RESET_I(1);
    Core__DOT__exe_pipe__DOT__reg_memToReg = VL_RAND_RESET_I(1);
    Core__DOT__exe_pipe__DOT__reg_rd = VL_RAND_RESET_I(5);
    Core__DOT__exe_pipe__DOT__reg_strData = VL_RAND_RESET_I(32);
    Core__DOT__exe_pipe__DOT__reg_aluOutput = VL_RAND_RESET_I(32);
    Core__DOT__exe_pipe__DOT__reg_regWrite = VL_RAND_RESET_I(1);
    Core__DOT__exe_pipe__DOT__alu_branch_output = VL_RAND_RESET_I(1);
    Core__DOT__mem_pipe__DOT__reg_memToReg = VL_RAND_RESET_I(1);
    Core__DOT__mem_pipe__DOT__reg_rd = VL_RAND_RESET_I(5);
    Core__DOT__mem_pipe__DOT__reg_dataOut = VL_RAND_RESET_I(32);
    Core__DOT__mem_pipe__DOT__reg_aluOutput = VL_RAND_RESET_I(32);
    Core__DOT__mem_pipe__DOT__reg_regWrite = VL_RAND_RESET_I(1);
    Core__DOT__forwarding__DOT___T_27 = VL_RAND_RESET_I(1);
    Core__DOT__forwarding__DOT___T_28 = VL_RAND_RESET_I(1);
    Core__DOT__forwarding__DOT___T_30 = VL_RAND_RESET_I(1);
    Core__DOT__forwarding__DOT___GEN_2 = VL_RAND_RESET_I(1);
    Core__DOT__forwarding__DOT___GEN_3 = VL_RAND_RESET_I(1);
    Core__DOT__forwarding__DOT___T_36 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
