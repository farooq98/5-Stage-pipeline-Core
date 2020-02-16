// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VInsMem__Syms_H_
#define _VInsMem__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VInsMem.h"
#include "VInsMem___024unit.h"

// SYMS CLASS
class VInsMem__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VInsMem*                       TOPp;
    
    // CREATORS
    VInsMem__Syms(VInsMem* topp, const char* namep);
    ~VInsMem__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
