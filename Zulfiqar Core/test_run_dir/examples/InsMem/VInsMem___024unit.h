// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VInsMem.h for the primary calling header

#ifndef _VInsMem___024unit_H_
#define _VInsMem___024unit_H_

#include "verilated.h"

class VInsMem__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VInsMem___024unit) {
  public:
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    VInsMem__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VInsMem___024unit& operator= (const VInsMem___024unit&);  ///< Copying not allowed
    VInsMem___024unit(const VInsMem___024unit&);  ///< Copying not allowed
  public:
    VInsMem___024unit(const char* name="TOP");
    ~VInsMem___024unit();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VInsMem__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
