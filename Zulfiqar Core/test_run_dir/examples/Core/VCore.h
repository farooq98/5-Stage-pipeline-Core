// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCore_H_
#define _VCore_H_

#include "verilated.h"

class VCore__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VCore) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_branchCheck,0,0);
    VL_OUT(io_instruction,31,0);
    VL_OUT(io_AluOut,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(Core__DOT__forwarding_io_alu_A,1,0);
    VL_SIG8(Core__DOT__forwarding_io_alu_B,1,0);
    VL_SIG8(Core__DOT__control__DOT__typeDecode_io_load,0,0);
    VL_SIG8(Core__DOT__control__DOT__typeDecode_io_store,0,0);
    VL_SIG8(Core__DOT__control__DOT__typeDecode_io_branch,0,0);
    VL_SIG8(Core__DOT__control__DOT__typeDecode_io_i,0,0);
    VL_SIG8(Core__DOT__control__DOT__typeDecode_io_jal,0,0);
    VL_SIG8(Core__DOT__control__DOT__typeDecode_io_jalr,0,0);
    VL_SIG8(Core__DOT__control__DOT__typeDecode_io_lui,0,0);
    VL_SIG8(Core__DOT__control__DOT__CtrlDecode_io_aluOp,2,0);
    VL_SIG8(Core__DOT__control__DOT__CtrlDecode_io_oprA,1,0);
    VL_SIG8(Core__DOT__control__DOT__CtrlDecode_io_oprB,0,0);
    VL_SIG8(Core__DOT__control__DOT__CtrlDecode_io_extendSel,1,0);
    VL_SIG8(Core__DOT__control__DOT__CtrlDecode__DOT___GEN_8,0,0);
    VL_SIG8(Core__DOT__aluCtrl__DOT___T_17,4,0);
    VL_SIG8(Core__DOT__alu__DOT___T_26,0,0);
    VL_SIG8(Core__DOT__id_pipe__DOT__reg_memWrite,0,0);
    VL_SIG8(Core__DOT__id_pipe__DOT__reg_memRead,0,0);
    VL_SIG8(Core__DOT__id_pipe__DOT__reg_memToReg,0,0);
    VL_SIG8(Core__DOT__id_pipe__DOT__reg_rd,4,0);
    VL_SIG8(Core__DOT__id_pipe__DOT__reg_aluCtrl,4,0);
    VL_SIG8(Core__DOT__id_pipe__DOT__reg_regWrite,0,0);
    VL_SIG8(Core__DOT__id_pipe__DOT__reg_rs1_sel,4,0);
    VL_SIG8(Core__DOT__id_pipe__DOT__reg_rs2_sel,4,0);
    VL_SIG8(Core__DOT__id_pipe__DOT__reg_opr_A,1,0);
    VL_SIG8(Core__DOT__id_pipe__DOT__reg_opr_B,0,0);
    VL_SIG8(Core__DOT__exe_pipe__DOT__reg_memWrite,0,0);
    VL_SIG8(Core__DOT__exe_pipe__DOT__reg_memRead,0,0);
    VL_SIG8(Core__DOT__exe_pipe__DOT__reg_memToReg,0,0);
    VL_SIG8(Core__DOT__exe_pipe__DOT__reg_rd,4,0);
    VL_SIG8(Core__DOT__exe_pipe__DOT__reg_regWrite,0,0);
    VL_SIG8(Core__DOT__exe_pipe__DOT__alu_branch_output,0,0);
    VL_SIG8(Core__DOT__mem_pipe__DOT__reg_memToReg,0,0);
    VL_SIG8(Core__DOT__mem_pipe__DOT__reg_rd,4,0);
    VL_SIG8(Core__DOT__mem_pipe__DOT__reg_regWrite,0,0);
    VL_SIG8(Core__DOT__forwarding__DOT___T_27,0,0);
    VL_SIG8(Core__DOT__forwarding__DOT___T_28,0,0);
    VL_SIG8(Core__DOT__forwarding__DOT___T_30,0,0);
    VL_SIG8(Core__DOT__forwarding__DOT___GEN_2,0,0);
    VL_SIG8(Core__DOT__forwarding__DOT___GEN_3,0,0);
    VL_SIG8(Core__DOT__forwarding__DOT___T_36,0,0);
    VL_SIG(Core__DOT__alu_io_a,31,0);
    VL_SIG(Core__DOT__alu_io_b,31,0);
    VL_SIG(Core__DOT__reg__024_io_writeData,31,0);
    VL_SIG(Core__DOT__reg__024_io_rs2,31,0);
    VL_SIG(Core__DOT__PC_io_input,31,0);
    VL_SIG(Core__DOT__alu__DOT___T_46,31,0);
    VL_SIG(Core__DOT__alu__DOT___GEN_20,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_0,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_1,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_2,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_3,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_4,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_5,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_6,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_7,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_8,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_9,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_10,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_11,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_12,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_13,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_14,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_15,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_16,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_17,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_18,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_19,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_20,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_21,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_22,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_23,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_24,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_25,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_26,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_27,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_28,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_29,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_30,31,0);
    VL_SIG(Core__DOT__reg__024__DOT__registers_31,31,0);
    VL_SIG(Core__DOT__PC__DOT__reg__024,31,0);
    VL_SIG(Core__DOT__if_pipe__DOT__reg_pc,31,0);
    VL_SIG(Core__DOT__if_pipe__DOT__reg_pc4,31,0);
    VL_SIG(Core__DOT__if_pipe__DOT__reg_ins,31,0);
    VL_SIG(Core__DOT__id_pipe__DOT__reg_operandA,31,0);
    VL_SIG(Core__DOT__id_pipe__DOT__reg_operandB,31,0);
    VL_SIG(Core__DOT__id_pipe__DOT__reg_strData,31,0);
    VL_SIG(Core__DOT__exe_pipe__DOT__reg_strData,31,0);
    VL_SIG(Core__DOT__exe_pipe__DOT__reg_aluOutput,31,0);
    VL_SIG(Core__DOT__mem_pipe__DOT__reg_dataOut,31,0);
    VL_SIG(Core__DOT__mem_pipe__DOT__reg_aluOutput,31,0);
    VL_SIG64(Core__DOT__alu__DOT___GEN_22,62,0);
    VL_SIG(Core__DOT__InsMem__DOT__mem[1024],31,0);
    VL_SIG(Core__DOT__dataMem__DOT__mem[1024],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCore__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VCore& operator= (const VCore&);  ///< Copying not allowed
    VCore(const VCore&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VCore(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCore();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VCore__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCore__Syms* symsp, bool first);
  private:
    static QData _change_request(VCore__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(VCore__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VCore__Syms* __restrict vlSymsp);
    static void _eval_settle(VCore__Syms* __restrict vlSymsp);
    static void _initial__TOP__1(VCore__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VCore__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VCore__Syms* __restrict vlSymsp);
    static void traceChgThis(VCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
