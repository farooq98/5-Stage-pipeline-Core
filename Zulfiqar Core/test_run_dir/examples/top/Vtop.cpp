// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"              // For This
#include "Vtop__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop::~Vtop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vtop::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
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

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp1,223,0,7);
    // Body
    // INITIAL at /home/farooq/chisel-tutorial/test_run_dir/examples/top/top.insmem.mem.v:7
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x46696c65U;
    __Vtemp1[2U] = 0x74657374U;
    __Vtemp1[3U] = 0x6f6f712fU;
    __Vtemp1[4U] = 0x2f666172U;
    __Vtemp1[5U] = 0x686f6d65U;
    __Vtemp1[6U] = 0x2fU;
    VL_READMEM_W (true,32,1024, 0,7, __Vtemp1, vlTOPp->top__DOT__insmem__DOT__mem
		  ,0,~0);
}

VL_INLINE_OPT void Vtop::_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvset__top__DOT__dataMem__DOT__mem__v0,0,0);
    VL_SIG16(__Vdlyvdim0__top__DOT__dataMem__DOT__mem__v0,9,0);
    VL_SIG(__Vdlyvval__top__DOT__dataMem__DOT__mem__v0,31,0);
    // Body
    __Vdlyvset__top__DOT__dataMem__DOT__mem__v0 = 0U;
    // ALWAYS at top.v:961
    vlTOPp->top__DOT__regfile__DOT__register_0 = ((IData)(vlTOPp->top__DOT__control__DOT__c2_io_RegWrite)
						   ? 
						  ((0U 
						    == 
						    (0x1fU 
						     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							>> 7U)))
						    ? 0U
						    : 
						   ((0U 
						     == 
						     (0x1fU 
						      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							 >> 7U)))
						     ? vlTOPp->top__DOT__regfile_io_writedata
						     : 0U))
						   : 0U);
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((1U == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				 >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_1 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((2U == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				 >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_2 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((3U == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				 >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_3 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((4U == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				 >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_4 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((5U == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				 >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_5 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((6U == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				 >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_6 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((7U == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				 >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_7 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((8U == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				 >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_8 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((9U == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				 >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_9 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0xaU == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				   >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_10 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0xbU == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				   >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_11 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0xcU == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				   >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_12 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0xdU == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				   >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_13 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0xeU == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				   >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_14 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0xfU == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				   >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_15 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0x10U == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				    >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_16 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0x11U == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				    >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_17 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0x12U == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				    >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_18 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0x13U == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				    >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_19 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0x14U == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				    >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_20 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0x15U == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				    >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_21 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0x16U == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				    >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_22 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0x17U == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				    >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_23 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0x18U == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				    >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_24 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0x19U == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				    >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_25 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0x1aU == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				    >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_26 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0x1bU == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				    >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_27 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0x1cU == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				    >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_28 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0x1dU == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				    >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_29 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0x1eU == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				    >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_30 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:961
    if (vlTOPp->top__DOT__control__DOT__c2_io_RegWrite) {
	if ((0U != (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
			     >> 7U)))) {
	    if ((0x1fU == (0x1fU & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
				    >> 7U)))) {
		vlTOPp->top__DOT__regfile__DOT__register_31 
		    = vlTOPp->top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at top.v:1444
    if (((0x33U != (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
	 & ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load)) 
	    & (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Store)))) {
	__Vdlyvval__top__DOT__dataMem__DOT__mem__v0 
	    = vlTOPp->top__DOT__regfile_io_rs2;
	__Vdlyvset__top__DOT__dataMem__DOT__mem__v0 = 1U;
	__Vdlyvdim0__top__DOT__dataMem__DOT__mem__v0 
	    = (0xffU & (IData)((vlTOPp->top__DOT__alu__DOT___GEN_19 
				>> 2U)));
    }
    // ALWAYS at top.v:43
    vlTOPp->top__DOT__pc__DOT__reg__024 = vlTOPp->top__DOT__pc_io_input;
    // ALWAYSPOST at top.v:1446
    if (__Vdlyvset__top__DOT__dataMem__DOT__mem__v0) {
	vlTOPp->top__DOT__dataMem__DOT__mem[__Vdlyvdim0__top__DOT__dataMem__DOT__mem__v0] 
	    = __Vdlyvval__top__DOT__dataMem__DOT__mem__v0;
    }
    vlTOPp->top__DOT__immediategen__DOT___GEN_0 = (
						   ((QData)((IData)(
								    (1U 
								     & (vlTOPp->top__DOT__pc__DOT__reg__024 
									>> 0x1fU)))) 
						    << 0x20U) 
						   | (QData)((IData)(vlTOPp->top__DOT__pc__DOT__reg__024)));
    vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
	= vlTOPp->top__DOT__insmem__DOT__mem[(0x3ffU 
					      & (vlTOPp->top__DOT__pc__DOT__reg__024 
						 >> 2U))];
    vlTOPp->top__DOT__immediategen__DOT___T_38 = ((0x1000U 
						   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						      >> 0x13U)) 
						  | ((0x800U 
						      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							 << 4U)) 
						     | ((0x7e0U 
							 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							    >> 0x14U)) 
							| (0x1eU 
							   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							      >> 7U)))));
    vlTOPp->top__DOT__immediategen__DOT___T_59 = ((0x100000U 
						   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						      >> 0xbU)) 
						  | ((0xff000U 
						      & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data) 
						     | ((0x800U 
							 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							    >> 9U)) 
							| (0x7feU 
							   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							      >> 0x14U)))));
    vlTOPp->top__DOT__immediategen__DOT___T_21 = ((0xfe0U 
						   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						      >> 0x14U)) 
						  | (0x1fU 
						     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							>> 7U)));
    vlTOPp->top__DOT__immediategen__DOT___T_88 = ((
						   ((0x80000000U 
						     & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)
						     ? 0xfffffU
						     : 0U) 
						   << 0xcU) 
						  | (0xfffU 
						     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							>> 0x14U)));
    vlTOPp->top__DOT__regfile_io_rs2 = ((0x1fU == (0x1fU 
						   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						      >> 0x14U)))
					 ? vlTOPp->top__DOT__regfile__DOT__register_31
					 : ((0x1eU 
					     == (0x1fU 
						 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						    >> 0x14U)))
					     ? vlTOPp->top__DOT__regfile__DOT__register_30
					     : ((0x1dU 
						 == 
						 (0x1fU 
						  & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						     >> 0x14U)))
						 ? vlTOPp->top__DOT__regfile__DOT__register_29
						 : 
						((0x1cU 
						  == 
						  (0x1fU 
						   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						      >> 0x14U)))
						  ? vlTOPp->top__DOT__regfile__DOT__register_28
						  : 
						 ((0x1bU 
						   == 
						   (0x1fU 
						    & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						       >> 0x14U)))
						   ? vlTOPp->top__DOT__regfile__DOT__register_27
						   : 
						  ((0x1aU 
						    == 
						    (0x1fU 
						     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							>> 0x14U)))
						    ? vlTOPp->top__DOT__regfile__DOT__register_26
						    : 
						   ((0x19U 
						     == 
						     (0x1fU 
						      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							 >> 0x14U)))
						     ? vlTOPp->top__DOT__regfile__DOT__register_25
						     : 
						    ((0x18U 
						      == 
						      (0x1fU 
						       & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							  >> 0x14U)))
						      ? vlTOPp->top__DOT__regfile__DOT__register_24
						      : 
						     ((0x17U 
						       == 
						       (0x1fU 
							& (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							   >> 0x14U)))
						       ? vlTOPp->top__DOT__regfile__DOT__register_23
						       : 
						      ((0x16U 
							== 
							(0x1fU 
							 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							    >> 0x14U)))
						        ? vlTOPp->top__DOT__regfile__DOT__register_22
						        : 
						       ((0x15U 
							 == 
							 (0x1fU 
							  & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							     >> 0x14U)))
							 ? vlTOPp->top__DOT__regfile__DOT__register_21
							 : 
							((0x14U 
							  == 
							  (0x1fU 
							   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							      >> 0x14U)))
							  ? vlTOPp->top__DOT__regfile__DOT__register_20
							  : 
							 ((0x13U 
							   == 
							   (0x1fU 
							    & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							       >> 0x14U)))
							   ? vlTOPp->top__DOT__regfile__DOT__register_19
							   : 
							  ((0x12U 
							    == 
							    (0x1fU 
							     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								>> 0x14U)))
							    ? vlTOPp->top__DOT__regfile__DOT__register_18
							    : 
							   ((0x11U 
							     == 
							     (0x1fU 
							      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								 >> 0x14U)))
							     ? vlTOPp->top__DOT__regfile__DOT__register_17
							     : 
							    ((0x10U 
							      == 
							      (0x1fU 
							       & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								  >> 0x14U)))
							      ? vlTOPp->top__DOT__regfile__DOT__register_16
							      : 
							     ((0xfU 
							       == 
							       (0x1fU 
								& (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								   >> 0x14U)))
							       ? vlTOPp->top__DOT__regfile__DOT__register_15
							       : 
							      ((0xeU 
								== 
								(0x1fU 
								 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								    >> 0x14U)))
							        ? vlTOPp->top__DOT__regfile__DOT__register_14
							        : 
							       ((0xdU 
								 == 
								 (0x1fU 
								  & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								     >> 0x14U)))
								 ? vlTOPp->top__DOT__regfile__DOT__register_13
								 : 
								((0xcU 
								  == 
								  (0x1fU 
								   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								      >> 0x14U)))
								  ? vlTOPp->top__DOT__regfile__DOT__register_12
								  : 
								 ((0xbU 
								   == 
								   (0x1fU 
								    & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								       >> 0x14U)))
								   ? vlTOPp->top__DOT__regfile__DOT__register_11
								   : 
								  ((0xaU 
								    == 
								    (0x1fU 
								     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									>> 0x14U)))
								    ? vlTOPp->top__DOT__regfile__DOT__register_10
								    : 
								   ((9U 
								     == 
								     (0x1fU 
								      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									 >> 0x14U)))
								     ? vlTOPp->top__DOT__regfile__DOT__register_9
								     : 
								    ((8U 
								      == 
								      (0x1fU 
								       & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									  >> 0x14U)))
								      ? vlTOPp->top__DOT__regfile__DOT__register_8
								      : 
								     ((7U 
								       == 
								       (0x1fU 
									& (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									   >> 0x14U)))
								       ? vlTOPp->top__DOT__regfile__DOT__register_7
								       : 
								      ((6U 
									== 
									(0x1fU 
									 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									    >> 0x14U)))
								        ? vlTOPp->top__DOT__regfile__DOT__register_6
								        : 
								       ((5U 
									 == 
									 (0x1fU 
									  & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									     >> 0x14U)))
									 ? vlTOPp->top__DOT__regfile__DOT__register_5
									 : 
									((4U 
									  == 
									  (0x1fU 
									   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									      >> 0x14U)))
									  ? vlTOPp->top__DOT__regfile__DOT__register_4
									  : 
									 ((3U 
									   == 
									   (0x1fU 
									    & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									       >> 0x14U)))
									   ? vlTOPp->top__DOT__regfile__DOT__register_3
									   : 
									  ((2U 
									    == 
									    (0x1fU 
									     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
										>> 0x14U)))
									    ? vlTOPp->top__DOT__regfile__DOT__register_2
									    : 
									   ((1U 
									     == 
									     (0x1fU 
									      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
										>> 0x14U)))
									     ? vlTOPp->top__DOT__regfile__DOT__register_1
									     : vlTOPp->top__DOT__regfile__DOT__register_0)))))))))))))))))))))))))))))));
    vlTOPp->top__DOT__regfile_io_rs1 = ((0x1fU == (0x1fU 
						   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						      >> 0xfU)))
					 ? vlTOPp->top__DOT__regfile__DOT__register_31
					 : ((0x1eU 
					     == (0x1fU 
						 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						    >> 0xfU)))
					     ? vlTOPp->top__DOT__regfile__DOT__register_30
					     : ((0x1dU 
						 == 
						 (0x1fU 
						  & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						     >> 0xfU)))
						 ? vlTOPp->top__DOT__regfile__DOT__register_29
						 : 
						((0x1cU 
						  == 
						  (0x1fU 
						   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						      >> 0xfU)))
						  ? vlTOPp->top__DOT__regfile__DOT__register_28
						  : 
						 ((0x1bU 
						   == 
						   (0x1fU 
						    & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						       >> 0xfU)))
						   ? vlTOPp->top__DOT__regfile__DOT__register_27
						   : 
						  ((0x1aU 
						    == 
						    (0x1fU 
						     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							>> 0xfU)))
						    ? vlTOPp->top__DOT__regfile__DOT__register_26
						    : 
						   ((0x19U 
						     == 
						     (0x1fU 
						      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							 >> 0xfU)))
						     ? vlTOPp->top__DOT__regfile__DOT__register_25
						     : 
						    ((0x18U 
						      == 
						      (0x1fU 
						       & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							  >> 0xfU)))
						      ? vlTOPp->top__DOT__regfile__DOT__register_24
						      : 
						     ((0x17U 
						       == 
						       (0x1fU 
							& (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							   >> 0xfU)))
						       ? vlTOPp->top__DOT__regfile__DOT__register_23
						       : 
						      ((0x16U 
							== 
							(0x1fU 
							 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							    >> 0xfU)))
						        ? vlTOPp->top__DOT__regfile__DOT__register_22
						        : 
						       ((0x15U 
							 == 
							 (0x1fU 
							  & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							     >> 0xfU)))
							 ? vlTOPp->top__DOT__regfile__DOT__register_21
							 : 
							((0x14U 
							  == 
							  (0x1fU 
							   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							      >> 0xfU)))
							  ? vlTOPp->top__DOT__regfile__DOT__register_20
							  : 
							 ((0x13U 
							   == 
							   (0x1fU 
							    & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							       >> 0xfU)))
							   ? vlTOPp->top__DOT__regfile__DOT__register_19
							   : 
							  ((0x12U 
							    == 
							    (0x1fU 
							     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								>> 0xfU)))
							    ? vlTOPp->top__DOT__regfile__DOT__register_18
							    : 
							   ((0x11U 
							     == 
							     (0x1fU 
							      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								 >> 0xfU)))
							     ? vlTOPp->top__DOT__regfile__DOT__register_17
							     : 
							    ((0x10U 
							      == 
							      (0x1fU 
							       & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								  >> 0xfU)))
							      ? vlTOPp->top__DOT__regfile__DOT__register_16
							      : 
							     ((0xfU 
							       == 
							       (0x1fU 
								& (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								   >> 0xfU)))
							       ? vlTOPp->top__DOT__regfile__DOT__register_15
							       : 
							      ((0xeU 
								== 
								(0x1fU 
								 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								    >> 0xfU)))
							        ? vlTOPp->top__DOT__regfile__DOT__register_14
							        : 
							       ((0xdU 
								 == 
								 (0x1fU 
								  & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								     >> 0xfU)))
								 ? vlTOPp->top__DOT__regfile__DOT__register_13
								 : 
								((0xcU 
								  == 
								  (0x1fU 
								   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								      >> 0xfU)))
								  ? vlTOPp->top__DOT__regfile__DOT__register_12
								  : 
								 ((0xbU 
								   == 
								   (0x1fU 
								    & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								       >> 0xfU)))
								   ? vlTOPp->top__DOT__regfile__DOT__register_11
								   : 
								  ((0xaU 
								    == 
								    (0x1fU 
								     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									>> 0xfU)))
								    ? vlTOPp->top__DOT__regfile__DOT__register_10
								    : 
								   ((9U 
								     == 
								     (0x1fU 
								      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									 >> 0xfU)))
								     ? vlTOPp->top__DOT__regfile__DOT__register_9
								     : 
								    ((8U 
								      == 
								      (0x1fU 
								       & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									  >> 0xfU)))
								      ? vlTOPp->top__DOT__regfile__DOT__register_8
								      : 
								     ((7U 
								       == 
								       (0x1fU 
									& (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									   >> 0xfU)))
								       ? vlTOPp->top__DOT__regfile__DOT__register_7
								       : 
								      ((6U 
									== 
									(0x1fU 
									 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									    >> 0xfU)))
								        ? vlTOPp->top__DOT__regfile__DOT__register_6
								        : 
								       ((5U 
									 == 
									 (0x1fU 
									  & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									     >> 0xfU)))
									 ? vlTOPp->top__DOT__regfile__DOT__register_5
									 : 
									((4U 
									  == 
									  (0x1fU 
									   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									      >> 0xfU)))
									  ? vlTOPp->top__DOT__regfile__DOT__register_4
									  : 
									 ((3U 
									   == 
									   (0x1fU 
									    & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									       >> 0xfU)))
									   ? vlTOPp->top__DOT__regfile__DOT__register_3
									   : 
									  ((2U 
									    == 
									    (0x1fU 
									     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
										>> 0xfU)))
									    ? vlTOPp->top__DOT__regfile__DOT__register_2
									    : 
									   ((1U 
									     == 
									     (0x1fU 
									      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
										>> 0xfU)))
									     ? vlTOPp->top__DOT__regfile__DOT__register_1
									     : vlTOPp->top__DOT__regfile__DOT__register_0)))))))))))))))))))))))))))))));
    vlTOPp->top__DOT__alucontrol__DOT___T_17 = ((8U 
						 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						    >> 0x1bU)) 
						| (7U 
						   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						      >> 0xcU)));
    vlTOPp->top__DOT__control__DOT__c1_io_I = ((0x33U 
						!= 
						(0x7fU 
						 & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
					       & ((3U 
						   != 
						   (0x7fU 
						    & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						  & ((0x23U 
						      != 
						      (0x7fU 
						       & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						     & ((0x63U 
							 != 
							 (0x7fU 
							  & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
							& (0x13U 
							   == 
							   (0x7fU 
							    & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data))))));
    vlTOPp->top__DOT__control__DOT__c1_io_Store = (
						   (0x33U 
						    != 
						    (0x7fU 
						     & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						   & ((3U 
						       != 
						       (0x7fU 
							& vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						      & (0x23U 
							 == 
							 (0x7fU 
							  & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data))));
    vlTOPp->top__DOT__control__DOT__c1_io_Branch = 
	((0x33U != (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
	 & ((3U != (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
	    & ((0x23U != (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
	       & (0x63U == (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)))));
    vlTOPp->top__DOT__control__DOT__c1_io_Load = ((0x33U 
						   != 
						   (0x7fU 
						    & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						  & (3U 
						     == 
						     (0x7fU 
						      & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)));
    vlTOPp->top__DOT__control__DOT__c1_io_Lui = ((0x33U 
						  != 
						  (0x7fU 
						   & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						 & ((3U 
						     != 
						     (0x7fU 
						      & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						    & ((0x23U 
							!= 
							(0x7fU 
							 & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						       & ((0x63U 
							   != 
							   (0x7fU 
							    & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
							  & ((0x13U 
							      != 
							      (0x7fU 
							       & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
							     & ((0x67U 
								 != 
								 (0x7fU 
								  & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
								& ((0x6fU 
								    != 
								    (0x7fU 
								     & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
								   & (0x37U 
								      == 
								      (0x7fU 
								       & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)))))))));
    vlTOPp->top__DOT__control__DOT__c1_io_Jal = ((0x33U 
						  != 
						  (0x7fU 
						   & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						 & ((3U 
						     != 
						     (0x7fU 
						      & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						    & ((0x23U 
							!= 
							(0x7fU 
							 & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						       & ((0x63U 
							   != 
							   (0x7fU 
							    & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
							  & ((0x13U 
							      != 
							      (0x7fU 
							       & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
							     & ((0x67U 
								 != 
								 (0x7fU 
								  & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
								& (0x6fU 
								   == 
								   (0x7fU 
								    & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data))))))));
    vlTOPp->top__DOT__control__DOT__c1_io_Jalr = ((0x33U 
						   != 
						   (0x7fU 
						    & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						  & ((3U 
						      != 
						      (0x7fU 
						       & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						     & ((0x23U 
							 != 
							 (0x7fU 
							  & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
							& ((0x63U 
							    != 
							    (0x7fU 
							     & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
							   & ((0x13U 
							       != 
							       (0x7fU 
								& vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
							      & (0x67U 
								 == 
								 (0x7fU 
								  & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)))))));
    vlTOPp->top__DOT__immediategen__DOT___T_45 = ((
						   ((0x1000U 
						     & (IData)(vlTOPp->top__DOT__immediategen__DOT___T_38))
						     ? 0x7ffffU
						     : 0U) 
						   << 0xdU) 
						  | (IData)(vlTOPp->top__DOT__immediategen__DOT___T_38));
    vlTOPp->top__DOT__immediategen__DOT___T_66 = (((QData)((IData)(
								   ((0x100000U 
								     & vlTOPp->top__DOT__immediategen__DOT___T_59)
								     ? 0xfffU
								     : 0U))) 
						   << 0x15U) 
						  | (QData)((IData)(vlTOPp->top__DOT__immediategen__DOT___T_59)));
    vlTOPp->top__DOT__control__DOT__c2_io_RegWrite 
	= ((0x33U == (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
	   | ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load) 
	      | ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Store)) 
		 & ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Branch)) 
		    & ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_I) 
		       | ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Jal) 
			  | ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Jalr) 
			     | (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Lui))))))));
    vlTOPp->top__DOT__control__DOT__c2_io_NextPc = 
	((0x33U == (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data))
	  ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load)
		   ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Store)
			    ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Branch)
				     ? 1U : ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_I)
					      ? 0U : 
					     ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Jal)
					       ? 2U
					       : ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Jalr)
						   ? 3U
						   : 0U)))))));
    vlTOPp->top__DOT__control__DOT__c2_io_OpA = ((0x33U 
						  == 
						  (0x7fU 
						   & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data))
						  ? 0U
						  : 
						 ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load)
						   ? 0U
						   : 
						  ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Store)
						    ? 0U
						    : 
						   ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Branch)
						     ? 0U
						     : 
						    ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_I)
						      ? 0U
						      : 
						     ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Jal)
						       ? 2U
						       : 
						      ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Jalr)
						        ? 2U
						        : 
						       ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Lui)
							 ? 3U
							 : 0U))))))));
    vlTOPp->top__DOT__control__DOT__c2_io_AluOp = (
						   (0x33U 
						    == 
						    (0x7fU 
						     & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data))
						    ? 0U
						    : 
						   ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load)
						     ? 4U
						     : 
						    ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Store)
						      ? 5U
						      : 
						     ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Branch)
						       ? 2U
						       : 
						      ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_I)
						        ? 1U
						        : 
						       ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Jal)
							 ? 3U
							 : 
							((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Jalr)
							  ? 3U
							  : 
							 ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Lui)
							   ? 6U
							   : 7U))))))));
    vlTOPp->top__DOT__control__DOT__c2__DOT___GEN_14 
	= ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Jal)) 
	   & ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Jalr)) 
	      & (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Lui)));
    vlTOPp->top__DOT__alu_io_in1 = ((0U == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_OpA))
				     ? vlTOPp->top__DOT__regfile_io_rs1
				     : ((2U == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_OpA))
					 ? ((IData)(4U) 
					    + vlTOPp->top__DOT__pc__DOT__reg__024)
					 : vlTOPp->top__DOT__regfile_io_rs1));
    vlTOPp->top__DOT__alucontrol_io_ALUcont = ((0U 
						== (IData)(vlTOPp->top__DOT__control__DOT__c2_io_AluOp))
					        ? (IData)(vlTOPp->top__DOT__alucontrol__DOT___T_17)
					        : (
						   (1U 
						    == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_AluOp))
						    ? 
						   ((5U 
						     == 
						     (7U 
						      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							 >> 0xcU)))
						     ? (IData)(vlTOPp->top__DOT__alucontrol__DOT___T_17)
						     : 
						    (7U 
						     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							>> 0xcU)))
						    : 
						   (((5U 
						      == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_AluOp)) 
						     | (4U 
							== (IData)(vlTOPp->top__DOT__control__DOT__c2_io_AluOp)))
						     ? 0U
						     : 
						    ((3U 
						      == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_AluOp))
						      ? 0x1fU
						      : 
						     (0x10U 
						      | (7U 
							 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							    >> 0xcU)))))));
    vlTOPp->top__DOT__control__DOT__c2_io_ExtSel = 
	((0x33U == (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data))
	  ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load)
		   ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Store)
			    ? 2U : ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Branch)) 
				    & ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_I)) 
				       & (IData)(vlTOPp->top__DOT__control__DOT__c2__DOT___GEN_14))))));
    vlTOPp->top__DOT__alu_io_in2 = (((0x33U != (0x7fU 
						& vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
				     & ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load) 
					| ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Store) 
					   | ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Branch)) 
					      & ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_I) 
						 | (IData)(vlTOPp->top__DOT__control__DOT__c2__DOT___GEN_14))))))
				     ? ((0U == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_ExtSel))
					 ? vlTOPp->top__DOT__immediategen__DOT___T_88
					 : ((1U == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_ExtSel))
					     ? (IData)(
						       (VL_ULL(0x7fffffffffff) 
							& ((QData)((IData)(
									   ((((0x80000000U 
									       & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)
									       ? 0xfffU
									       : 0U) 
									     << 0x14U) 
									    | (0xfffffU 
									       & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
										>> 0xcU))))) 
							   << 0xcU)))
					     : ((((0x800U 
						   & (IData)(vlTOPp->top__DOT__immediategen__DOT___T_21))
						   ? 0xfffffU
						   : 0U) 
						 << 0xcU) 
						| (IData)(vlTOPp->top__DOT__immediategen__DOT___T_21))))
				     : vlTOPp->top__DOT__regfile_io_rs2);
    vlTOPp->top__DOT__alu__DOT___GEN_11 = ((0x15U == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont))
					    ? (VL_GTES_III(1,32,32, vlTOPp->top__DOT__alu_io_in1, vlTOPp->top__DOT__alu_io_in2)
					        ? 1U
					        : 0U)
					    : ((0x17U 
						== (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont))
					        ? (
						   (vlTOPp->top__DOT__alu_io_in1 
						    >= vlTOPp->top__DOT__alu_io_in2)
						    ? 1U
						    : 0U)
					        : (
						   ((3U 
						     == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont)) 
						    | (0x16U 
						       == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont)))
						    ? 
						   ((vlTOPp->top__DOT__alu_io_in1 
						     < vlTOPp->top__DOT__alu_io_in2)
						     ? 1U
						     : 0U)
						    : 
						   ((0x10U 
						     == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont))
						     ? 
						    ((vlTOPp->top__DOT__alu_io_in1 
						      == vlTOPp->top__DOT__alu_io_in2)
						      ? 1U
						      : 0U)
						     : 
						    (((2U 
						       == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont)) 
						      | (0x14U 
							 == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont)))
						      ? 
						     (VL_LTS_III(1,32,32, vlTOPp->top__DOT__alu_io_in1, vlTOPp->top__DOT__alu_io_in2)
						       ? 1U
						       : 0U)
						      : 
						     ((vlTOPp->top__DOT__alu_io_in1 
						       != vlTOPp->top__DOT__alu_io_in2)
						       ? 1U
						       : 0U))))));
    vlTOPp->top__DOT__alu__DOT___GEN_17 = ((4U == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont))
					    ? (vlTOPp->top__DOT__alu_io_in1 
					       ^ vlTOPp->top__DOT__alu_io_in2)
					    : (((5U 
						 == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont)) 
						| (0xdU 
						   == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont)))
					        ? VL_SHIFTRS_III(32,32,5, vlTOPp->top__DOT__alu_io_in1, 
								 (0x1fU 
								  & vlTOPp->top__DOT__alu_io_in2))
					        : (
						   (6U 
						    == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont))
						    ? 
						   (vlTOPp->top__DOT__alu_io_in1 
						    | vlTOPp->top__DOT__alu_io_in2)
						    : 
						   ((7U 
						     == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont))
						     ? 
						    (vlTOPp->top__DOT__alu_io_in1 
						     & vlTOPp->top__DOT__alu_io_in2)
						     : 
						    ((8U 
						      == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont))
						      ? 
						     (vlTOPp->top__DOT__alu_io_in1 
						      - vlTOPp->top__DOT__alu_io_in2)
						      : 
						     ((0x1fU 
						       == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont))
						       ? vlTOPp->top__DOT__alu_io_in1
						       : 
						      ((0xfffffffcU 
							& (VL_NEGATE_I((IData)(
									       (1U 
										& ((IData)(vlTOPp->top__DOT__alu__DOT___GEN_11) 
										>> 1U)))) 
							   << 2U)) 
						       | (IData)(vlTOPp->top__DOT__alu__DOT___GEN_11))))))));
    vlTOPp->top__DOT__alu__DOT___GEN_19 = (VL_ULL(0x7fffffffffffffff) 
					   & ((0U == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont))
					       ? (((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& ((vlTOPp->top__DOT__alu_io_in1 
										+ vlTOPp->top__DOT__alu_io_in2) 
										>> 0x1fU))))))) 
						   << 0x20U) 
						  | (QData)((IData)(
								    (vlTOPp->top__DOT__alu_io_in1 
								     + vlTOPp->top__DOT__alu_io_in2))))
					       : ((1U 
						   == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont))
						   ? 
						  ((((QData)((IData)(
								     (0x7fffffffU 
								      & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top__DOT__alu_io_in1 
										>> 0x1fU))))))) 
						     << 0x20U) 
						    | (QData)((IData)(vlTOPp->top__DOT__alu_io_in1))) 
						   << 
						   (0x1fU 
						    & vlTOPp->top__DOT__alu_io_in2))
						   : 
						  (((QData)((IData)(
								    (0x7fffffffU 
								     & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top__DOT__alu__DOT___GEN_17 
										>> 0x1fU))))))) 
						    << 0x20U) 
						   | (QData)((IData)(vlTOPp->top__DOT__alu__DOT___GEN_17))))));
    vlTOPp->io_output = (IData)(vlTOPp->top__DOT__alu__DOT___GEN_19);
    vlTOPp->top__DOT__regfile_io_writedata = (((0x33U 
						!= 
						(0x7fU 
						 & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
					       & (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load))
					       ? vlTOPp->top__DOT__dataMem__DOT__mem
					      [(0xffU 
						& (IData)(
							  (vlTOPp->top__DOT__alu__DOT___GEN_19 
							   >> 2U)))]
					       : (IData)(vlTOPp->top__DOT__alu__DOT___GEN_19));
    vlTOPp->top__DOT__pc_io_input = ((0U == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_NextPc))
				      ? ((IData)(4U) 
					 + vlTOPp->top__DOT__pc__DOT__reg__024)
				      : ((1U == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_NextPc))
					  ? ((((1U 
						== (IData)(vlTOPp->top__DOT__alu__DOT___GEN_19)) 
					       & (2U 
						  == 
						  (3U 
						   & ((IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont) 
						      >> 3U)))) 
					      & ((0x33U 
						  != 
						  (0x7fU 
						   & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
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
						    + vlTOPp->top__DOT__regfile_io_rs1)))));
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__immediategen__DOT___GEN_0 = (
						   ((QData)((IData)(
								    (1U 
								     & (vlTOPp->top__DOT__pc__DOT__reg__024 
									>> 0x1fU)))) 
						    << 0x20U) 
						   | (QData)((IData)(vlTOPp->top__DOT__pc__DOT__reg__024)));
    vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
	= vlTOPp->top__DOT__insmem__DOT__mem[(0x3ffU 
					      & (vlTOPp->top__DOT__pc__DOT__reg__024 
						 >> 2U))];
    vlTOPp->top__DOT__immediategen__DOT___T_38 = ((0x1000U 
						   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						      >> 0x13U)) 
						  | ((0x800U 
						      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							 << 4U)) 
						     | ((0x7e0U 
							 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							    >> 0x14U)) 
							| (0x1eU 
							   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							      >> 7U)))));
    vlTOPp->top__DOT__immediategen__DOT___T_59 = ((0x100000U 
						   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						      >> 0xbU)) 
						  | ((0xff000U 
						      & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data) 
						     | ((0x800U 
							 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							    >> 9U)) 
							| (0x7feU 
							   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							      >> 0x14U)))));
    vlTOPp->top__DOT__immediategen__DOT___T_21 = ((0xfe0U 
						   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						      >> 0x14U)) 
						  | (0x1fU 
						     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							>> 7U)));
    vlTOPp->top__DOT__immediategen__DOT___T_88 = ((
						   ((0x80000000U 
						     & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)
						     ? 0xfffffU
						     : 0U) 
						   << 0xcU) 
						  | (0xfffU 
						     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							>> 0x14U)));
    vlTOPp->top__DOT__regfile_io_rs2 = ((0x1fU == (0x1fU 
						   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						      >> 0x14U)))
					 ? vlTOPp->top__DOT__regfile__DOT__register_31
					 : ((0x1eU 
					     == (0x1fU 
						 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						    >> 0x14U)))
					     ? vlTOPp->top__DOT__regfile__DOT__register_30
					     : ((0x1dU 
						 == 
						 (0x1fU 
						  & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						     >> 0x14U)))
						 ? vlTOPp->top__DOT__regfile__DOT__register_29
						 : 
						((0x1cU 
						  == 
						  (0x1fU 
						   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						      >> 0x14U)))
						  ? vlTOPp->top__DOT__regfile__DOT__register_28
						  : 
						 ((0x1bU 
						   == 
						   (0x1fU 
						    & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						       >> 0x14U)))
						   ? vlTOPp->top__DOT__regfile__DOT__register_27
						   : 
						  ((0x1aU 
						    == 
						    (0x1fU 
						     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							>> 0x14U)))
						    ? vlTOPp->top__DOT__regfile__DOT__register_26
						    : 
						   ((0x19U 
						     == 
						     (0x1fU 
						      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							 >> 0x14U)))
						     ? vlTOPp->top__DOT__regfile__DOT__register_25
						     : 
						    ((0x18U 
						      == 
						      (0x1fU 
						       & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							  >> 0x14U)))
						      ? vlTOPp->top__DOT__regfile__DOT__register_24
						      : 
						     ((0x17U 
						       == 
						       (0x1fU 
							& (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							   >> 0x14U)))
						       ? vlTOPp->top__DOT__regfile__DOT__register_23
						       : 
						      ((0x16U 
							== 
							(0x1fU 
							 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							    >> 0x14U)))
						        ? vlTOPp->top__DOT__regfile__DOT__register_22
						        : 
						       ((0x15U 
							 == 
							 (0x1fU 
							  & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							     >> 0x14U)))
							 ? vlTOPp->top__DOT__regfile__DOT__register_21
							 : 
							((0x14U 
							  == 
							  (0x1fU 
							   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							      >> 0x14U)))
							  ? vlTOPp->top__DOT__regfile__DOT__register_20
							  : 
							 ((0x13U 
							   == 
							   (0x1fU 
							    & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							       >> 0x14U)))
							   ? vlTOPp->top__DOT__regfile__DOT__register_19
							   : 
							  ((0x12U 
							    == 
							    (0x1fU 
							     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								>> 0x14U)))
							    ? vlTOPp->top__DOT__regfile__DOT__register_18
							    : 
							   ((0x11U 
							     == 
							     (0x1fU 
							      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								 >> 0x14U)))
							     ? vlTOPp->top__DOT__regfile__DOT__register_17
							     : 
							    ((0x10U 
							      == 
							      (0x1fU 
							       & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								  >> 0x14U)))
							      ? vlTOPp->top__DOT__regfile__DOT__register_16
							      : 
							     ((0xfU 
							       == 
							       (0x1fU 
								& (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								   >> 0x14U)))
							       ? vlTOPp->top__DOT__regfile__DOT__register_15
							       : 
							      ((0xeU 
								== 
								(0x1fU 
								 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								    >> 0x14U)))
							        ? vlTOPp->top__DOT__regfile__DOT__register_14
							        : 
							       ((0xdU 
								 == 
								 (0x1fU 
								  & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								     >> 0x14U)))
								 ? vlTOPp->top__DOT__regfile__DOT__register_13
								 : 
								((0xcU 
								  == 
								  (0x1fU 
								   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								      >> 0x14U)))
								  ? vlTOPp->top__DOT__regfile__DOT__register_12
								  : 
								 ((0xbU 
								   == 
								   (0x1fU 
								    & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								       >> 0x14U)))
								   ? vlTOPp->top__DOT__regfile__DOT__register_11
								   : 
								  ((0xaU 
								    == 
								    (0x1fU 
								     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									>> 0x14U)))
								    ? vlTOPp->top__DOT__regfile__DOT__register_10
								    : 
								   ((9U 
								     == 
								     (0x1fU 
								      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									 >> 0x14U)))
								     ? vlTOPp->top__DOT__regfile__DOT__register_9
								     : 
								    ((8U 
								      == 
								      (0x1fU 
								       & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									  >> 0x14U)))
								      ? vlTOPp->top__DOT__regfile__DOT__register_8
								      : 
								     ((7U 
								       == 
								       (0x1fU 
									& (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									   >> 0x14U)))
								       ? vlTOPp->top__DOT__regfile__DOT__register_7
								       : 
								      ((6U 
									== 
									(0x1fU 
									 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									    >> 0x14U)))
								        ? vlTOPp->top__DOT__regfile__DOT__register_6
								        : 
								       ((5U 
									 == 
									 (0x1fU 
									  & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									     >> 0x14U)))
									 ? vlTOPp->top__DOT__regfile__DOT__register_5
									 : 
									((4U 
									  == 
									  (0x1fU 
									   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									      >> 0x14U)))
									  ? vlTOPp->top__DOT__regfile__DOT__register_4
									  : 
									 ((3U 
									   == 
									   (0x1fU 
									    & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									       >> 0x14U)))
									   ? vlTOPp->top__DOT__regfile__DOT__register_3
									   : 
									  ((2U 
									    == 
									    (0x1fU 
									     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
										>> 0x14U)))
									    ? vlTOPp->top__DOT__regfile__DOT__register_2
									    : 
									   ((1U 
									     == 
									     (0x1fU 
									      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
										>> 0x14U)))
									     ? vlTOPp->top__DOT__regfile__DOT__register_1
									     : vlTOPp->top__DOT__regfile__DOT__register_0)))))))))))))))))))))))))))))));
    vlTOPp->top__DOT__regfile_io_rs1 = ((0x1fU == (0x1fU 
						   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						      >> 0xfU)))
					 ? vlTOPp->top__DOT__regfile__DOT__register_31
					 : ((0x1eU 
					     == (0x1fU 
						 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						    >> 0xfU)))
					     ? vlTOPp->top__DOT__regfile__DOT__register_30
					     : ((0x1dU 
						 == 
						 (0x1fU 
						  & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						     >> 0xfU)))
						 ? vlTOPp->top__DOT__regfile__DOT__register_29
						 : 
						((0x1cU 
						  == 
						  (0x1fU 
						   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						      >> 0xfU)))
						  ? vlTOPp->top__DOT__regfile__DOT__register_28
						  : 
						 ((0x1bU 
						   == 
						   (0x1fU 
						    & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						       >> 0xfU)))
						   ? vlTOPp->top__DOT__regfile__DOT__register_27
						   : 
						  ((0x1aU 
						    == 
						    (0x1fU 
						     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							>> 0xfU)))
						    ? vlTOPp->top__DOT__regfile__DOT__register_26
						    : 
						   ((0x19U 
						     == 
						     (0x1fU 
						      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							 >> 0xfU)))
						     ? vlTOPp->top__DOT__regfile__DOT__register_25
						     : 
						    ((0x18U 
						      == 
						      (0x1fU 
						       & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							  >> 0xfU)))
						      ? vlTOPp->top__DOT__regfile__DOT__register_24
						      : 
						     ((0x17U 
						       == 
						       (0x1fU 
							& (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							   >> 0xfU)))
						       ? vlTOPp->top__DOT__regfile__DOT__register_23
						       : 
						      ((0x16U 
							== 
							(0x1fU 
							 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							    >> 0xfU)))
						        ? vlTOPp->top__DOT__regfile__DOT__register_22
						        : 
						       ((0x15U 
							 == 
							 (0x1fU 
							  & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							     >> 0xfU)))
							 ? vlTOPp->top__DOT__regfile__DOT__register_21
							 : 
							((0x14U 
							  == 
							  (0x1fU 
							   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							      >> 0xfU)))
							  ? vlTOPp->top__DOT__regfile__DOT__register_20
							  : 
							 ((0x13U 
							   == 
							   (0x1fU 
							    & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							       >> 0xfU)))
							   ? vlTOPp->top__DOT__regfile__DOT__register_19
							   : 
							  ((0x12U 
							    == 
							    (0x1fU 
							     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								>> 0xfU)))
							    ? vlTOPp->top__DOT__regfile__DOT__register_18
							    : 
							   ((0x11U 
							     == 
							     (0x1fU 
							      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								 >> 0xfU)))
							     ? vlTOPp->top__DOT__regfile__DOT__register_17
							     : 
							    ((0x10U 
							      == 
							      (0x1fU 
							       & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								  >> 0xfU)))
							      ? vlTOPp->top__DOT__regfile__DOT__register_16
							      : 
							     ((0xfU 
							       == 
							       (0x1fU 
								& (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								   >> 0xfU)))
							       ? vlTOPp->top__DOT__regfile__DOT__register_15
							       : 
							      ((0xeU 
								== 
								(0x1fU 
								 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								    >> 0xfU)))
							        ? vlTOPp->top__DOT__regfile__DOT__register_14
							        : 
							       ((0xdU 
								 == 
								 (0x1fU 
								  & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								     >> 0xfU)))
								 ? vlTOPp->top__DOT__regfile__DOT__register_13
								 : 
								((0xcU 
								  == 
								  (0x1fU 
								   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								      >> 0xfU)))
								  ? vlTOPp->top__DOT__regfile__DOT__register_12
								  : 
								 ((0xbU 
								   == 
								   (0x1fU 
								    & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
								       >> 0xfU)))
								   ? vlTOPp->top__DOT__regfile__DOT__register_11
								   : 
								  ((0xaU 
								    == 
								    (0x1fU 
								     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									>> 0xfU)))
								    ? vlTOPp->top__DOT__regfile__DOT__register_10
								    : 
								   ((9U 
								     == 
								     (0x1fU 
								      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									 >> 0xfU)))
								     ? vlTOPp->top__DOT__regfile__DOT__register_9
								     : 
								    ((8U 
								      == 
								      (0x1fU 
								       & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									  >> 0xfU)))
								      ? vlTOPp->top__DOT__regfile__DOT__register_8
								      : 
								     ((7U 
								       == 
								       (0x1fU 
									& (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									   >> 0xfU)))
								       ? vlTOPp->top__DOT__regfile__DOT__register_7
								       : 
								      ((6U 
									== 
									(0x1fU 
									 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									    >> 0xfU)))
								        ? vlTOPp->top__DOT__regfile__DOT__register_6
								        : 
								       ((5U 
									 == 
									 (0x1fU 
									  & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									     >> 0xfU)))
									 ? vlTOPp->top__DOT__regfile__DOT__register_5
									 : 
									((4U 
									  == 
									  (0x1fU 
									   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									      >> 0xfU)))
									  ? vlTOPp->top__DOT__regfile__DOT__register_4
									  : 
									 ((3U 
									   == 
									   (0x1fU 
									    & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
									       >> 0xfU)))
									   ? vlTOPp->top__DOT__regfile__DOT__register_3
									   : 
									  ((2U 
									    == 
									    (0x1fU 
									     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
										>> 0xfU)))
									    ? vlTOPp->top__DOT__regfile__DOT__register_2
									    : 
									   ((1U 
									     == 
									     (0x1fU 
									      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
										>> 0xfU)))
									     ? vlTOPp->top__DOT__regfile__DOT__register_1
									     : vlTOPp->top__DOT__regfile__DOT__register_0)))))))))))))))))))))))))))))));
    vlTOPp->top__DOT__alucontrol__DOT___T_17 = ((8U 
						 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						    >> 0x1bU)) 
						| (7U 
						   & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
						      >> 0xcU)));
    vlTOPp->top__DOT__control__DOT__c1_io_I = ((0x33U 
						!= 
						(0x7fU 
						 & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
					       & ((3U 
						   != 
						   (0x7fU 
						    & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						  & ((0x23U 
						      != 
						      (0x7fU 
						       & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						     & ((0x63U 
							 != 
							 (0x7fU 
							  & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
							& (0x13U 
							   == 
							   (0x7fU 
							    & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data))))));
    vlTOPp->top__DOT__control__DOT__c1_io_Store = (
						   (0x33U 
						    != 
						    (0x7fU 
						     & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						   & ((3U 
						       != 
						       (0x7fU 
							& vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						      & (0x23U 
							 == 
							 (0x7fU 
							  & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data))));
    vlTOPp->top__DOT__control__DOT__c1_io_Branch = 
	((0x33U != (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
	 & ((3U != (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
	    & ((0x23U != (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
	       & (0x63U == (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)))));
    vlTOPp->top__DOT__control__DOT__c1_io_Load = ((0x33U 
						   != 
						   (0x7fU 
						    & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						  & (3U 
						     == 
						     (0x7fU 
						      & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)));
    vlTOPp->top__DOT__control__DOT__c1_io_Lui = ((0x33U 
						  != 
						  (0x7fU 
						   & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						 & ((3U 
						     != 
						     (0x7fU 
						      & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						    & ((0x23U 
							!= 
							(0x7fU 
							 & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						       & ((0x63U 
							   != 
							   (0x7fU 
							    & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
							  & ((0x13U 
							      != 
							      (0x7fU 
							       & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
							     & ((0x67U 
								 != 
								 (0x7fU 
								  & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
								& ((0x6fU 
								    != 
								    (0x7fU 
								     & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
								   & (0x37U 
								      == 
								      (0x7fU 
								       & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)))))))));
    vlTOPp->top__DOT__control__DOT__c1_io_Jal = ((0x33U 
						  != 
						  (0x7fU 
						   & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						 & ((3U 
						     != 
						     (0x7fU 
						      & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						    & ((0x23U 
							!= 
							(0x7fU 
							 & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						       & ((0x63U 
							   != 
							   (0x7fU 
							    & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
							  & ((0x13U 
							      != 
							      (0x7fU 
							       & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
							     & ((0x67U 
								 != 
								 (0x7fU 
								  & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
								& (0x6fU 
								   == 
								   (0x7fU 
								    & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data))))))));
    vlTOPp->top__DOT__control__DOT__c1_io_Jalr = ((0x33U 
						   != 
						   (0x7fU 
						    & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						  & ((3U 
						      != 
						      (0x7fU 
						       & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
						     & ((0x23U 
							 != 
							 (0x7fU 
							  & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
							& ((0x63U 
							    != 
							    (0x7fU 
							     & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
							   & ((0x13U 
							       != 
							       (0x7fU 
								& vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
							      & (0x67U 
								 == 
								 (0x7fU 
								  & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)))))));
    vlTOPp->top__DOT__immediategen__DOT___T_45 = ((
						   ((0x1000U 
						     & (IData)(vlTOPp->top__DOT__immediategen__DOT___T_38))
						     ? 0x7ffffU
						     : 0U) 
						   << 0xdU) 
						  | (IData)(vlTOPp->top__DOT__immediategen__DOT___T_38));
    vlTOPp->top__DOT__immediategen__DOT___T_66 = (((QData)((IData)(
								   ((0x100000U 
								     & vlTOPp->top__DOT__immediategen__DOT___T_59)
								     ? 0xfffU
								     : 0U))) 
						   << 0x15U) 
						  | (QData)((IData)(vlTOPp->top__DOT__immediategen__DOT___T_59)));
    vlTOPp->top__DOT__control__DOT__c2_io_RegWrite 
	= ((0x33U == (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
	   | ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load) 
	      | ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Store)) 
		 & ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Branch)) 
		    & ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_I) 
		       | ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Jal) 
			  | ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Jalr) 
			     | (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Lui))))))));
    vlTOPp->top__DOT__control__DOT__c2_io_NextPc = 
	((0x33U == (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data))
	  ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load)
		   ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Store)
			    ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Branch)
				     ? 1U : ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_I)
					      ? 0U : 
					     ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Jal)
					       ? 2U
					       : ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Jalr)
						   ? 3U
						   : 0U)))))));
    vlTOPp->top__DOT__control__DOT__c2_io_OpA = ((0x33U 
						  == 
						  (0x7fU 
						   & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data))
						  ? 0U
						  : 
						 ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load)
						   ? 0U
						   : 
						  ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Store)
						    ? 0U
						    : 
						   ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Branch)
						     ? 0U
						     : 
						    ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_I)
						      ? 0U
						      : 
						     ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Jal)
						       ? 2U
						       : 
						      ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Jalr)
						        ? 2U
						        : 
						       ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Lui)
							 ? 3U
							 : 0U))))))));
    vlTOPp->top__DOT__control__DOT__c2_io_AluOp = (
						   (0x33U 
						    == 
						    (0x7fU 
						     & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data))
						    ? 0U
						    : 
						   ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load)
						     ? 4U
						     : 
						    ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Store)
						      ? 5U
						      : 
						     ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Branch)
						       ? 2U
						       : 
						      ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_I)
						        ? 1U
						        : 
						       ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Jal)
							 ? 3U
							 : 
							((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Jalr)
							  ? 3U
							  : 
							 ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Lui)
							   ? 6U
							   : 7U))))))));
    vlTOPp->top__DOT__control__DOT__c2__DOT___GEN_14 
	= ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Jal)) 
	   & ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Jalr)) 
	      & (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Lui)));
    vlTOPp->top__DOT__alu_io_in1 = ((0U == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_OpA))
				     ? vlTOPp->top__DOT__regfile_io_rs1
				     : ((2U == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_OpA))
					 ? ((IData)(4U) 
					    + vlTOPp->top__DOT__pc__DOT__reg__024)
					 : vlTOPp->top__DOT__regfile_io_rs1));
    vlTOPp->top__DOT__alucontrol_io_ALUcont = ((0U 
						== (IData)(vlTOPp->top__DOT__control__DOT__c2_io_AluOp))
					        ? (IData)(vlTOPp->top__DOT__alucontrol__DOT___T_17)
					        : (
						   (1U 
						    == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_AluOp))
						    ? 
						   ((5U 
						     == 
						     (7U 
						      & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							 >> 0xcU)))
						     ? (IData)(vlTOPp->top__DOT__alucontrol__DOT___T_17)
						     : 
						    (7U 
						     & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							>> 0xcU)))
						    : 
						   (((5U 
						      == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_AluOp)) 
						     | (4U 
							== (IData)(vlTOPp->top__DOT__control__DOT__c2_io_AluOp)))
						     ? 0U
						     : 
						    ((3U 
						      == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_AluOp))
						      ? 0x1fU
						      : 
						     (0x10U 
						      | (7U 
							 & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
							    >> 0xcU)))))));
    vlTOPp->top__DOT__control__DOT__c2_io_ExtSel = 
	((0x33U == (0x7fU & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data))
	  ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load)
		   ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Store)
			    ? 2U : ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Branch)) 
				    & ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_I)) 
				       & (IData)(vlTOPp->top__DOT__control__DOT__c2__DOT___GEN_14))))));
    vlTOPp->top__DOT__alu_io_in2 = (((0x33U != (0x7fU 
						& vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
				     & ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load) 
					| ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_Store) 
					   | ((~ (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Branch)) 
					      & ((IData)(vlTOPp->top__DOT__control__DOT__c1_io_I) 
						 | (IData)(vlTOPp->top__DOT__control__DOT__c2__DOT___GEN_14))))))
				     ? ((0U == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_ExtSel))
					 ? vlTOPp->top__DOT__immediategen__DOT___T_88
					 : ((1U == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_ExtSel))
					     ? (IData)(
						       (VL_ULL(0x7fffffffffff) 
							& ((QData)((IData)(
									   ((((0x80000000U 
									       & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)
									       ? 0xfffU
									       : 0U) 
									     << 0x14U) 
									    | (0xfffffU 
									       & (vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data 
										>> 0xcU))))) 
							   << 0xcU)))
					     : ((((0x800U 
						   & (IData)(vlTOPp->top__DOT__immediategen__DOT___T_21))
						   ? 0xfffffU
						   : 0U) 
						 << 0xcU) 
						| (IData)(vlTOPp->top__DOT__immediategen__DOT___T_21))))
				     : vlTOPp->top__DOT__regfile_io_rs2);
    vlTOPp->top__DOT__alu__DOT___GEN_11 = ((0x15U == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont))
					    ? (VL_GTES_III(1,32,32, vlTOPp->top__DOT__alu_io_in1, vlTOPp->top__DOT__alu_io_in2)
					        ? 1U
					        : 0U)
					    : ((0x17U 
						== (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont))
					        ? (
						   (vlTOPp->top__DOT__alu_io_in1 
						    >= vlTOPp->top__DOT__alu_io_in2)
						    ? 1U
						    : 0U)
					        : (
						   ((3U 
						     == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont)) 
						    | (0x16U 
						       == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont)))
						    ? 
						   ((vlTOPp->top__DOT__alu_io_in1 
						     < vlTOPp->top__DOT__alu_io_in2)
						     ? 1U
						     : 0U)
						    : 
						   ((0x10U 
						     == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont))
						     ? 
						    ((vlTOPp->top__DOT__alu_io_in1 
						      == vlTOPp->top__DOT__alu_io_in2)
						      ? 1U
						      : 0U)
						     : 
						    (((2U 
						       == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont)) 
						      | (0x14U 
							 == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont)))
						      ? 
						     (VL_LTS_III(1,32,32, vlTOPp->top__DOT__alu_io_in1, vlTOPp->top__DOT__alu_io_in2)
						       ? 1U
						       : 0U)
						      : 
						     ((vlTOPp->top__DOT__alu_io_in1 
						       != vlTOPp->top__DOT__alu_io_in2)
						       ? 1U
						       : 0U))))));
    vlTOPp->top__DOT__alu__DOT___GEN_17 = ((4U == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont))
					    ? (vlTOPp->top__DOT__alu_io_in1 
					       ^ vlTOPp->top__DOT__alu_io_in2)
					    : (((5U 
						 == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont)) 
						| (0xdU 
						   == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont)))
					        ? VL_SHIFTRS_III(32,32,5, vlTOPp->top__DOT__alu_io_in1, 
								 (0x1fU 
								  & vlTOPp->top__DOT__alu_io_in2))
					        : (
						   (6U 
						    == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont))
						    ? 
						   (vlTOPp->top__DOT__alu_io_in1 
						    | vlTOPp->top__DOT__alu_io_in2)
						    : 
						   ((7U 
						     == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont))
						     ? 
						    (vlTOPp->top__DOT__alu_io_in1 
						     & vlTOPp->top__DOT__alu_io_in2)
						     : 
						    ((8U 
						      == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont))
						      ? 
						     (vlTOPp->top__DOT__alu_io_in1 
						      - vlTOPp->top__DOT__alu_io_in2)
						      : 
						     ((0x1fU 
						       == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont))
						       ? vlTOPp->top__DOT__alu_io_in1
						       : 
						      ((0xfffffffcU 
							& (VL_NEGATE_I((IData)(
									       (1U 
										& ((IData)(vlTOPp->top__DOT__alu__DOT___GEN_11) 
										>> 1U)))) 
							   << 2U)) 
						       | (IData)(vlTOPp->top__DOT__alu__DOT___GEN_11))))))));
    vlTOPp->top__DOT__alu__DOT___GEN_19 = (VL_ULL(0x7fffffffffffffff) 
					   & ((0U == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont))
					       ? (((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& ((vlTOPp->top__DOT__alu_io_in1 
										+ vlTOPp->top__DOT__alu_io_in2) 
										>> 0x1fU))))))) 
						   << 0x20U) 
						  | (QData)((IData)(
								    (vlTOPp->top__DOT__alu_io_in1 
								     + vlTOPp->top__DOT__alu_io_in2))))
					       : ((1U 
						   == (IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont))
						   ? 
						  ((((QData)((IData)(
								     (0x7fffffffU 
								      & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top__DOT__alu_io_in1 
										>> 0x1fU))))))) 
						     << 0x20U) 
						    | (QData)((IData)(vlTOPp->top__DOT__alu_io_in1))) 
						   << 
						   (0x1fU 
						    & vlTOPp->top__DOT__alu_io_in2))
						   : 
						  (((QData)((IData)(
								    (0x7fffffffU 
								     & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top__DOT__alu__DOT___GEN_17 
										>> 0x1fU))))))) 
						    << 0x20U) 
						   | (QData)((IData)(vlTOPp->top__DOT__alu__DOT___GEN_17))))));
    vlTOPp->io_output = (IData)(vlTOPp->top__DOT__alu__DOT___GEN_19);
    vlTOPp->top__DOT__regfile_io_writedata = (((0x33U 
						!= 
						(0x7fU 
						 & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
					       & (IData)(vlTOPp->top__DOT__control__DOT__c1_io_Load))
					       ? vlTOPp->top__DOT__dataMem__DOT__mem
					      [(0xffU 
						& (IData)(
							  (vlTOPp->top__DOT__alu__DOT___GEN_19 
							   >> 2U)))]
					       : (IData)(vlTOPp->top__DOT__alu__DOT___GEN_19));
    vlTOPp->top__DOT__pc_io_input = ((0U == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_NextPc))
				      ? ((IData)(4U) 
					 + vlTOPp->top__DOT__pc__DOT__reg__024)
				      : ((1U == (IData)(vlTOPp->top__DOT__control__DOT__c2_io_NextPc))
					  ? ((((1U 
						== (IData)(vlTOPp->top__DOT__alu__DOT___GEN_19)) 
					       & (2U 
						  == 
						  (3U 
						   & ((IData)(vlTOPp->top__DOT__alucontrol_io_ALUcont) 
						      >> 3U)))) 
					      & ((0x33U 
						  != 
						  (0x7fU 
						   & vlTOPp->top__DOT__insmem__DOT__mem___05FT_12_data)) 
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
						    + vlTOPp->top__DOT__regfile_io_rs1)))));
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_output = VL_RAND_RESET_I(32);
    top__DOT__pc_io_input = VL_RAND_RESET_I(32);
    top__DOT__regfile_io_writedata = VL_RAND_RESET_I(32);
    top__DOT__regfile_io_rs1 = VL_RAND_RESET_I(32);
    top__DOT__regfile_io_rs2 = VL_RAND_RESET_I(32);
    top__DOT__alucontrol_io_ALUcont = VL_RAND_RESET_I(5);
    top__DOT__alu_io_in1 = VL_RAND_RESET_I(32);
    top__DOT__alu_io_in2 = VL_RAND_RESET_I(32);
    top__DOT__pc__DOT__reg__024 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    top__DOT__insmem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT__insmem__DOT__mem___05FT_12_data = VL_RAND_RESET_I(32);
    top__DOT__control__DOT__c1_io_Load = VL_RAND_RESET_I(1);
    top__DOT__control__DOT__c1_io_Store = VL_RAND_RESET_I(1);
    top__DOT__control__DOT__c1_io_Branch = VL_RAND_RESET_I(1);
    top__DOT__control__DOT__c1_io_I = VL_RAND_RESET_I(1);
    top__DOT__control__DOT__c1_io_Jal = VL_RAND_RESET_I(1);
    top__DOT__control__DOT__c1_io_Jalr = VL_RAND_RESET_I(1);
    top__DOT__control__DOT__c1_io_Lui = VL_RAND_RESET_I(1);
    top__DOT__control__DOT__c2_io_RegWrite = VL_RAND_RESET_I(1);
    top__DOT__control__DOT__c2_io_AluOp = VL_RAND_RESET_I(3);
    top__DOT__control__DOT__c2_io_OpA = VL_RAND_RESET_I(2);
    top__DOT__control__DOT__c2_io_ExtSel = VL_RAND_RESET_I(2);
    top__DOT__control__DOT__c2_io_NextPc = VL_RAND_RESET_I(2);
    top__DOT__control__DOT__c2__DOT___GEN_14 = VL_RAND_RESET_I(1);
    top__DOT__immediategen__DOT___T_21 = VL_RAND_RESET_I(12);
    top__DOT__immediategen__DOT___T_38 = VL_RAND_RESET_I(13);
    top__DOT__immediategen__DOT___T_45 = VL_RAND_RESET_I(32);
    top__DOT__immediategen__DOT___T_59 = VL_RAND_RESET_I(21);
    top__DOT__immediategen__DOT___T_66 = VL_RAND_RESET_Q(33);
    top__DOT__immediategen__DOT___GEN_0 = VL_RAND_RESET_Q(33);
    top__DOT__immediategen__DOT___T_88 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_0 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_1 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_2 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_3 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_4 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_5 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_6 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_7 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_8 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_9 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_10 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_11 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_12 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_13 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_14 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_15 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_16 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_17 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_18 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_19 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_20 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_21 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_22 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_23 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_24 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_25 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_26 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_27 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_28 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_29 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_30 = VL_RAND_RESET_I(32);
    top__DOT__regfile__DOT__register_31 = VL_RAND_RESET_I(32);
    top__DOT__alucontrol__DOT___T_17 = VL_RAND_RESET_I(5);
    top__DOT__alu__DOT___GEN_11 = VL_RAND_RESET_I(2);
    top__DOT__alu__DOT___GEN_17 = VL_RAND_RESET_I(32);
    top__DOT__alu__DOT___GEN_19 = VL_RAND_RESET_Q(63);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    top__DOT__dataMem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
