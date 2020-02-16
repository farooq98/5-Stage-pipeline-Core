// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCore.h for the primary calling header

#ifndef _VCore___024unit_H_
#define _VCore___024unit_H_

#include "verilated.h"

class VCore__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VCore___024unit) {
  public:
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    VCore__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VCore___024unit& operator= (const VCore___024unit&);  ///< Copying not allowed
    VCore___024unit(const VCore___024unit&);  ///< Copying not allowed
  public:
    VCore___024unit(const char* name="TOP");
    ~VCore___024unit();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VCore__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
