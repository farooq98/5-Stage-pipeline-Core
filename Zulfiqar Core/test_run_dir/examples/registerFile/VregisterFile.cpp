// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VregisterFile.h for the primary calling header

#include "VregisterFile.h"     // For This
#include "VregisterFile__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VregisterFile) {
    VregisterFile__Syms* __restrict vlSymsp = __VlSymsp = new VregisterFile__Syms(this, name());
    VregisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VregisterFile::__Vconfigure(VregisterFile__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VregisterFile::~VregisterFile() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VregisterFile::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VregisterFile::eval\n"); );
    VregisterFile__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VregisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VregisterFile::_eval_initial_loop(VregisterFile__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VregisterFile::_sequent__TOP__1(VregisterFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VregisterFile::_sequent__TOP__1\n"); );
    VregisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at registerFile.v:480
    vlTOPp->registerFile__DOT__registers_0 = ((IData)(vlTOPp->reset)
					       ? 0U
					       : ((IData)(vlTOPp->io_regWrite)
						   ? 
						  ((0U 
						    == (IData)(vlTOPp->io_rd_sel))
						    ? vlTOPp->io_writeData
						    : 0U)
						   : 0U));
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_1 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((1U == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_1 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_2 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((2U == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_2 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_3 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((3U == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_3 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_4 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((4U == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_4 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_5 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((5U == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_5 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_6 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((6U == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_6 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_7 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((7U == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_7 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_8 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((8U == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_8 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_9 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((9U == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_9 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_10 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0xaU == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_10 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_11 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0xbU == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_11 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_12 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0xcU == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_12 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_13 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0xdU == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_13 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_14 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0xeU == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_14 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_15 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0xfU == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_15 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_16 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0x10U == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_16 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_17 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0x11U == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_17 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_18 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0x12U == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_18 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_19 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0x13U == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_19 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_20 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0x14U == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_20 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_21 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0x15U == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_21 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_22 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0x16U == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_22 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_23 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0x17U == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_23 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_24 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0x18U == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_24 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_25 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0x19U == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_25 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_26 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0x1aU == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_26 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_27 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0x1bU == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_27 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_28 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0x1cU == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_28 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_29 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0x1dU == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_29 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_30 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0x1eU == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_30 
		    = vlTOPp->io_writeData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->registerFile__DOT__registers_31 = 0U;
    } else {
	if (vlTOPp->io_regWrite) {
	    if ((0x1fU == (IData)(vlTOPp->io_rd_sel))) {
		vlTOPp->registerFile__DOT__registers_31 
		    = vlTOPp->io_writeData;
	    }
	}
    }
}

VL_INLINE_OPT void VregisterFile::_settle__TOP__2(VregisterFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VregisterFile::_settle__TOP__2\n"); );
    VregisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_rs1 = ((0x1fU == (IData)(vlTOPp->io_rs1_sel))
		       ? vlTOPp->registerFile__DOT__registers_31
		       : ((0x1eU == (IData)(vlTOPp->io_rs1_sel))
			   ? vlTOPp->registerFile__DOT__registers_30
			   : ((0x1dU == (IData)(vlTOPp->io_rs1_sel))
			       ? vlTOPp->registerFile__DOT__registers_29
			       : ((0x1cU == (IData)(vlTOPp->io_rs1_sel))
				   ? vlTOPp->registerFile__DOT__registers_28
				   : ((0x1bU == (IData)(vlTOPp->io_rs1_sel))
				       ? vlTOPp->registerFile__DOT__registers_27
				       : ((0x1aU == (IData)(vlTOPp->io_rs1_sel))
					   ? vlTOPp->registerFile__DOT__registers_26
					   : ((0x19U 
					       == (IData)(vlTOPp->io_rs1_sel))
					       ? vlTOPp->registerFile__DOT__registers_25
					       : ((0x18U 
						   == (IData)(vlTOPp->io_rs1_sel))
						   ? vlTOPp->registerFile__DOT__registers_24
						   : 
						  ((0x17U 
						    == (IData)(vlTOPp->io_rs1_sel))
						    ? vlTOPp->registerFile__DOT__registers_23
						    : 
						   ((0x16U 
						     == (IData)(vlTOPp->io_rs1_sel))
						     ? vlTOPp->registerFile__DOT__registers_22
						     : 
						    ((0x15U 
						      == (IData)(vlTOPp->io_rs1_sel))
						      ? vlTOPp->registerFile__DOT__registers_21
						      : 
						     ((0x14U 
						       == (IData)(vlTOPp->io_rs1_sel))
						       ? vlTOPp->registerFile__DOT__registers_20
						       : 
						      ((0x13U 
							== (IData)(vlTOPp->io_rs1_sel))
						        ? vlTOPp->registerFile__DOT__registers_19
						        : 
						       ((0x12U 
							 == (IData)(vlTOPp->io_rs1_sel))
							 ? vlTOPp->registerFile__DOT__registers_18
							 : 
							((0x11U 
							  == (IData)(vlTOPp->io_rs1_sel))
							  ? vlTOPp->registerFile__DOT__registers_17
							  : 
							 ((0x10U 
							   == (IData)(vlTOPp->io_rs1_sel))
							   ? vlTOPp->registerFile__DOT__registers_16
							   : 
							  ((0xfU 
							    == (IData)(vlTOPp->io_rs1_sel))
							    ? vlTOPp->registerFile__DOT__registers_15
							    : 
							   ((0xeU 
							     == (IData)(vlTOPp->io_rs1_sel))
							     ? vlTOPp->registerFile__DOT__registers_14
							     : 
							    ((0xdU 
							      == (IData)(vlTOPp->io_rs1_sel))
							      ? vlTOPp->registerFile__DOT__registers_13
							      : 
							     ((0xcU 
							       == (IData)(vlTOPp->io_rs1_sel))
							       ? vlTOPp->registerFile__DOT__registers_12
							       : 
							      ((0xbU 
								== (IData)(vlTOPp->io_rs1_sel))
							        ? vlTOPp->registerFile__DOT__registers_11
							        : 
							       ((0xaU 
								 == (IData)(vlTOPp->io_rs1_sel))
								 ? vlTOPp->registerFile__DOT__registers_10
								 : 
								((9U 
								  == (IData)(vlTOPp->io_rs1_sel))
								  ? vlTOPp->registerFile__DOT__registers_9
								  : 
								 ((8U 
								   == (IData)(vlTOPp->io_rs1_sel))
								   ? vlTOPp->registerFile__DOT__registers_8
								   : 
								  ((7U 
								    == (IData)(vlTOPp->io_rs1_sel))
								    ? vlTOPp->registerFile__DOT__registers_7
								    : 
								   ((6U 
								     == (IData)(vlTOPp->io_rs1_sel))
								     ? vlTOPp->registerFile__DOT__registers_6
								     : 
								    ((5U 
								      == (IData)(vlTOPp->io_rs1_sel))
								      ? vlTOPp->registerFile__DOT__registers_5
								      : 
								     ((4U 
								       == (IData)(vlTOPp->io_rs1_sel))
								       ? vlTOPp->registerFile__DOT__registers_4
								       : 
								      ((3U 
									== (IData)(vlTOPp->io_rs1_sel))
								        ? vlTOPp->registerFile__DOT__registers_3
								        : 
								       ((2U 
									 == (IData)(vlTOPp->io_rs1_sel))
									 ? vlTOPp->registerFile__DOT__registers_2
									 : 
									((1U 
									  == (IData)(vlTOPp->io_rs1_sel))
									  ? vlTOPp->registerFile__DOT__registers_1
									  : vlTOPp->registerFile__DOT__registers_0)))))))))))))))))))))))))))))));
    vlTOPp->io_rs2 = ((0x1fU == (IData)(vlTOPp->io_rs2_sel))
		       ? vlTOPp->registerFile__DOT__registers_31
		       : ((0x1eU == (IData)(vlTOPp->io_rs2_sel))
			   ? vlTOPp->registerFile__DOT__registers_30
			   : ((0x1dU == (IData)(vlTOPp->io_rs2_sel))
			       ? vlTOPp->registerFile__DOT__registers_29
			       : ((0x1cU == (IData)(vlTOPp->io_rs2_sel))
				   ? vlTOPp->registerFile__DOT__registers_28
				   : ((0x1bU == (IData)(vlTOPp->io_rs2_sel))
				       ? vlTOPp->registerFile__DOT__registers_27
				       : ((0x1aU == (IData)(vlTOPp->io_rs2_sel))
					   ? vlTOPp->registerFile__DOT__registers_26
					   : ((0x19U 
					       == (IData)(vlTOPp->io_rs2_sel))
					       ? vlTOPp->registerFile__DOT__registers_25
					       : ((0x18U 
						   == (IData)(vlTOPp->io_rs2_sel))
						   ? vlTOPp->registerFile__DOT__registers_24
						   : 
						  ((0x17U 
						    == (IData)(vlTOPp->io_rs2_sel))
						    ? vlTOPp->registerFile__DOT__registers_23
						    : 
						   ((0x16U 
						     == (IData)(vlTOPp->io_rs2_sel))
						     ? vlTOPp->registerFile__DOT__registers_22
						     : 
						    ((0x15U 
						      == (IData)(vlTOPp->io_rs2_sel))
						      ? vlTOPp->registerFile__DOT__registers_21
						      : 
						     ((0x14U 
						       == (IData)(vlTOPp->io_rs2_sel))
						       ? vlTOPp->registerFile__DOT__registers_20
						       : 
						      ((0x13U 
							== (IData)(vlTOPp->io_rs2_sel))
						        ? vlTOPp->registerFile__DOT__registers_19
						        : 
						       ((0x12U 
							 == (IData)(vlTOPp->io_rs2_sel))
							 ? vlTOPp->registerFile__DOT__registers_18
							 : 
							((0x11U 
							  == (IData)(vlTOPp->io_rs2_sel))
							  ? vlTOPp->registerFile__DOT__registers_17
							  : 
							 ((0x10U 
							   == (IData)(vlTOPp->io_rs2_sel))
							   ? vlTOPp->registerFile__DOT__registers_16
							   : 
							  ((0xfU 
							    == (IData)(vlTOPp->io_rs2_sel))
							    ? vlTOPp->registerFile__DOT__registers_15
							    : 
							   ((0xeU 
							     == (IData)(vlTOPp->io_rs2_sel))
							     ? vlTOPp->registerFile__DOT__registers_14
							     : 
							    ((0xdU 
							      == (IData)(vlTOPp->io_rs2_sel))
							      ? vlTOPp->registerFile__DOT__registers_13
							      : 
							     ((0xcU 
							       == (IData)(vlTOPp->io_rs2_sel))
							       ? vlTOPp->registerFile__DOT__registers_12
							       : 
							      ((0xbU 
								== (IData)(vlTOPp->io_rs2_sel))
							        ? vlTOPp->registerFile__DOT__registers_11
							        : 
							       ((0xaU 
								 == (IData)(vlTOPp->io_rs2_sel))
								 ? vlTOPp->registerFile__DOT__registers_10
								 : 
								((9U 
								  == (IData)(vlTOPp->io_rs2_sel))
								  ? vlTOPp->registerFile__DOT__registers_9
								  : 
								 ((8U 
								   == (IData)(vlTOPp->io_rs2_sel))
								   ? vlTOPp->registerFile__DOT__registers_8
								   : 
								  ((7U 
								    == (IData)(vlTOPp->io_rs2_sel))
								    ? vlTOPp->registerFile__DOT__registers_7
								    : 
								   ((6U 
								     == (IData)(vlTOPp->io_rs2_sel))
								     ? vlTOPp->registerFile__DOT__registers_6
								     : 
								    ((5U 
								      == (IData)(vlTOPp->io_rs2_sel))
								      ? vlTOPp->registerFile__DOT__registers_5
								      : 
								     ((4U 
								       == (IData)(vlTOPp->io_rs2_sel))
								       ? vlTOPp->registerFile__DOT__registers_4
								       : 
								      ((3U 
									== (IData)(vlTOPp->io_rs2_sel))
								        ? vlTOPp->registerFile__DOT__registers_3
								        : 
								       ((2U 
									 == (IData)(vlTOPp->io_rs2_sel))
									 ? vlTOPp->registerFile__DOT__registers_2
									 : 
									((1U 
									  == (IData)(vlTOPp->io_rs2_sel))
									  ? vlTOPp->registerFile__DOT__registers_1
									  : vlTOPp->registerFile__DOT__registers_0)))))))))))))))))))))))))))))));
}

void VregisterFile::_eval(VregisterFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VregisterFile::_eval\n"); );
    VregisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_settle__TOP__2(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VregisterFile::_eval_initial(VregisterFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VregisterFile::_eval_initial\n"); );
    VregisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VregisterFile::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VregisterFile::final\n"); );
    // Variables
    VregisterFile__Syms* __restrict vlSymsp = this->__VlSymsp;
    VregisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VregisterFile::_eval_settle(VregisterFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VregisterFile::_eval_settle\n"); );
    VregisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VregisterFile::_change_request(VregisterFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VregisterFile::_change_request\n"); );
    VregisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VregisterFile::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VregisterFile::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_regWrite & 0xfeU))) {
	Verilated::overWidthError("io_regWrite");}
    if (VL_UNLIKELY((io_rs1_sel & 0xe0U))) {
	Verilated::overWidthError("io_rs1_sel");}
    if (VL_UNLIKELY((io_rs2_sel & 0xe0U))) {
	Verilated::overWidthError("io_rs2_sel");}
    if (VL_UNLIKELY((io_rd_sel & 0xe0U))) {
	Verilated::overWidthError("io_rd_sel");}
}
#endif // VL_DEBUG

void VregisterFile::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VregisterFile::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_regWrite = VL_RAND_RESET_I(1);
    io_rs1_sel = VL_RAND_RESET_I(5);
    io_rs2_sel = VL_RAND_RESET_I(5);
    io_rd_sel = VL_RAND_RESET_I(5);
    io_writeData = VL_RAND_RESET_I(32);
    io_rs1 = VL_RAND_RESET_I(32);
    io_rs2 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_0 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_1 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_2 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_3 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_4 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_5 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_6 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_7 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_8 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_9 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_10 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_11 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_12 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_13 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_14 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_15 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_16 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_17 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_18 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_19 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_20 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_21 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_22 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_23 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_24 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_25 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_26 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_27 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_28 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_29 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_30 = VL_RAND_RESET_I(32);
    registerFile__DOT__registers_31 = VL_RAND_RESET_I(32);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
