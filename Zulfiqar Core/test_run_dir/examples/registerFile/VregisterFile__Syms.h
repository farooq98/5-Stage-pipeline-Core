// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VregisterFile__Syms_H_
#define _VregisterFile__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VregisterFile.h"

// SYMS CLASS
class VregisterFile__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VregisterFile*                 TOPp;
    
    // CREATORS
    VregisterFile__Syms(VregisterFile* topp, const char* namep);
    ~VregisterFile__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
