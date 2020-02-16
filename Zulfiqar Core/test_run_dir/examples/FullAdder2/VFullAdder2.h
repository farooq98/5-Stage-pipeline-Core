// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VFullAdder2_H_
#define _VFullAdder2_H_

#include "verilated.h"

class VFullAdder2__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VFullAdder2) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_cin,0,0);
    VL_IN8(io_a1,0,0);
    VL_IN8(io_b1,0,0);
    VL_IN8(io_a2,0,0);
    VL_IN8(io_b2,0,0);
    VL_OUT8(io_sum0,0,0);
    VL_OUT8(io_sum1,0,0);
    VL_OUT8(io_cout,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(FullAdder2__DOT__add1_io_cout,0,0);
    VL_SIG8(FullAdder2__DOT__add1__DOT___T_16,0,0);
    VL_SIG8(FullAdder2__DOT__add2__DOT___T_16,0,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VFullAdder2__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VFullAdder2& operator= (const VFullAdder2&);  ///< Copying not allowed
    VFullAdder2(const VFullAdder2&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VFullAdder2(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VFullAdder2();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VFullAdder2__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VFullAdder2__Syms* symsp, bool first);
  private:
    static QData _change_request(VFullAdder2__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VFullAdder2__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(VFullAdder2__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VFullAdder2__Syms* __restrict vlSymsp);
    static void _eval_settle(VFullAdder2__Syms* __restrict vlSymsp);
    static void traceChgThis(VFullAdder2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VFullAdder2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VFullAdder2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VFullAdder2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VFullAdder2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VFullAdder2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VFullAdder2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
