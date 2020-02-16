// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VCore__Syms_H_
#define _VCore__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VCore.h"
#include "VCore___024unit.h"

// SYMS CLASS
class VCore__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VCore*                         TOPp;
    
    // CREATORS
    VCore__Syms(VCore* topp, const char* namep);
    ~VCore__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
