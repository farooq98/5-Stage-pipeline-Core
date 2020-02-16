// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VregisterFile__Syms.h"


//======================

void VregisterFile::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VregisterFile::traceInit, &VregisterFile::traceFull, &VregisterFile::traceChg, this);
}
void VregisterFile::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VregisterFile* t=(VregisterFile*)userthis;
    VregisterFile__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VregisterFile::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VregisterFile* t=(VregisterFile*)userthis;
    VregisterFile__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VregisterFile::traceInitThis(VregisterFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VregisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VregisterFile::traceFullThis(VregisterFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VregisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VregisterFile::traceInitThis__1(VregisterFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VregisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+33,"clock",-1);
	vcdp->declBit  (c+34,"reset",-1);
	vcdp->declBit  (c+35,"io_regWrite",-1);
	vcdp->declBus  (c+36,"io_rs1_sel",-1,4,0);
	vcdp->declBus  (c+37,"io_rs2_sel",-1,4,0);
	vcdp->declBus  (c+38,"io_rd_sel",-1,4,0);
	vcdp->declBus  (c+39,"io_writeData",-1,31,0);
	vcdp->declBus  (c+40,"io_rs1",-1,31,0);
	vcdp->declBus  (c+41,"io_rs2",-1,31,0);
	vcdp->declBit  (c+33,"registerFile clock",-1);
	vcdp->declBit  (c+34,"registerFile reset",-1);
	vcdp->declBit  (c+35,"registerFile io_regWrite",-1);
	vcdp->declBus  (c+36,"registerFile io_rs1_sel",-1,4,0);
	vcdp->declBus  (c+37,"registerFile io_rs2_sel",-1,4,0);
	vcdp->declBus  (c+38,"registerFile io_rd_sel",-1,4,0);
	vcdp->declBus  (c+39,"registerFile io_writeData",-1,31,0);
	vcdp->declBus  (c+40,"registerFile io_rs1",-1,31,0);
	vcdp->declBus  (c+41,"registerFile io_rs2",-1,31,0);
	vcdp->declBus  (c+1,"registerFile registers_0",-1,31,0);
	// Tracing: registerFile _RAND_0 // Ignored: Inlined leading underscore at registerFile.v:13
	vcdp->declBus  (c+2,"registerFile registers_1",-1,31,0);
	// Tracing: registerFile _RAND_1 // Ignored: Inlined leading underscore at registerFile.v:15
	vcdp->declBus  (c+3,"registerFile registers_2",-1,31,0);
	// Tracing: registerFile _RAND_2 // Ignored: Inlined leading underscore at registerFile.v:17
	vcdp->declBus  (c+4,"registerFile registers_3",-1,31,0);
	// Tracing: registerFile _RAND_3 // Ignored: Inlined leading underscore at registerFile.v:19
	vcdp->declBus  (c+5,"registerFile registers_4",-1,31,0);
	// Tracing: registerFile _RAND_4 // Ignored: Inlined leading underscore at registerFile.v:21
	vcdp->declBus  (c+6,"registerFile registers_5",-1,31,0);
	// Tracing: registerFile _RAND_5 // Ignored: Inlined leading underscore at registerFile.v:23
	vcdp->declBus  (c+7,"registerFile registers_6",-1,31,0);
	// Tracing: registerFile _RAND_6 // Ignored: Inlined leading underscore at registerFile.v:25
	vcdp->declBus  (c+8,"registerFile registers_7",-1,31,0);
	// Tracing: registerFile _RAND_7 // Ignored: Inlined leading underscore at registerFile.v:27
	vcdp->declBus  (c+9,"registerFile registers_8",-1,31,0);
	// Tracing: registerFile _RAND_8 // Ignored: Inlined leading underscore at registerFile.v:29
	vcdp->declBus  (c+10,"registerFile registers_9",-1,31,0);
	// Tracing: registerFile _RAND_9 // Ignored: Inlined leading underscore at registerFile.v:31
	vcdp->declBus  (c+11,"registerFile registers_10",-1,31,0);
	// Tracing: registerFile _RAND_10 // Ignored: Inlined leading underscore at registerFile.v:33
	vcdp->declBus  (c+12,"registerFile registers_11",-1,31,0);
	// Tracing: registerFile _RAND_11 // Ignored: Inlined leading underscore at registerFile.v:35
	vcdp->declBus  (c+13,"registerFile registers_12",-1,31,0);
	// Tracing: registerFile _RAND_12 // Ignored: Inlined leading underscore at registerFile.v:37
	vcdp->declBus  (c+14,"registerFile registers_13",-1,31,0);
	// Tracing: registerFile _RAND_13 // Ignored: Inlined leading underscore at registerFile.v:39
	vcdp->declBus  (c+15,"registerFile registers_14",-1,31,0);
	// Tracing: registerFile _RAND_14 // Ignored: Inlined leading underscore at registerFile.v:41
	vcdp->declBus  (c+16,"registerFile registers_15",-1,31,0);
	// Tracing: registerFile _RAND_15 // Ignored: Inlined leading underscore at registerFile.v:43
	vcdp->declBus  (c+17,"registerFile registers_16",-1,31,0);
	// Tracing: registerFile _RAND_16 // Ignored: Inlined leading underscore at registerFile.v:45
	vcdp->declBus  (c+18,"registerFile registers_17",-1,31,0);
	// Tracing: registerFile _RAND_17 // Ignored: Inlined leading underscore at registerFile.v:47
	vcdp->declBus  (c+19,"registerFile registers_18",-1,31,0);
	// Tracing: registerFile _RAND_18 // Ignored: Inlined leading underscore at registerFile.v:49
	vcdp->declBus  (c+20,"registerFile registers_19",-1,31,0);
	// Tracing: registerFile _RAND_19 // Ignored: Inlined leading underscore at registerFile.v:51
	vcdp->declBus  (c+21,"registerFile registers_20",-1,31,0);
	// Tracing: registerFile _RAND_20 // Ignored: Inlined leading underscore at registerFile.v:53
	vcdp->declBus  (c+22,"registerFile registers_21",-1,31,0);
	// Tracing: registerFile _RAND_21 // Ignored: Inlined leading underscore at registerFile.v:55
	vcdp->declBus  (c+23,"registerFile registers_22",-1,31,0);
	// Tracing: registerFile _RAND_22 // Ignored: Inlined leading underscore at registerFile.v:57
	vcdp->declBus  (c+24,"registerFile registers_23",-1,31,0);
	// Tracing: registerFile _RAND_23 // Ignored: Inlined leading underscore at registerFile.v:59
	vcdp->declBus  (c+25,"registerFile registers_24",-1,31,0);
	// Tracing: registerFile _RAND_24 // Ignored: Inlined leading underscore at registerFile.v:61
	vcdp->declBus  (c+26,"registerFile registers_25",-1,31,0);
	// Tracing: registerFile _RAND_25 // Ignored: Inlined leading underscore at registerFile.v:63
	vcdp->declBus  (c+27,"registerFile registers_26",-1,31,0);
	// Tracing: registerFile _RAND_26 // Ignored: Inlined leading underscore at registerFile.v:65
	vcdp->declBus  (c+28,"registerFile registers_27",-1,31,0);
	// Tracing: registerFile _RAND_27 // Ignored: Inlined leading underscore at registerFile.v:67
	vcdp->declBus  (c+29,"registerFile registers_28",-1,31,0);
	// Tracing: registerFile _RAND_28 // Ignored: Inlined leading underscore at registerFile.v:69
	vcdp->declBus  (c+30,"registerFile registers_29",-1,31,0);
	// Tracing: registerFile _RAND_29 // Ignored: Inlined leading underscore at registerFile.v:71
	vcdp->declBus  (c+31,"registerFile registers_30",-1,31,0);
	// Tracing: registerFile _RAND_30 // Ignored: Inlined leading underscore at registerFile.v:73
	vcdp->declBus  (c+32,"registerFile registers_31",-1,31,0);
	// Tracing: registerFile _RAND_31 // Ignored: Inlined leading underscore at registerFile.v:75
	// Tracing: registerFile _GEN_1 // Ignored: Inlined leading underscore at registerFile.v:76
	// Tracing: registerFile _GEN_2 // Ignored: Inlined leading underscore at registerFile.v:77
	// Tracing: registerFile _GEN_3 // Ignored: Inlined leading underscore at registerFile.v:78
	// Tracing: registerFile _GEN_4 // Ignored: Inlined leading underscore at registerFile.v:79
	// Tracing: registerFile _GEN_5 // Ignored: Inlined leading underscore at registerFile.v:80
	// Tracing: registerFile _GEN_6 // Ignored: Inlined leading underscore at registerFile.v:81
	// Tracing: registerFile _GEN_7 // Ignored: Inlined leading underscore at registerFile.v:82
	// Tracing: registerFile _GEN_8 // Ignored: Inlined leading underscore at registerFile.v:83
	// Tracing: registerFile _GEN_9 // Ignored: Inlined leading underscore at registerFile.v:84
	// Tracing: registerFile _GEN_10 // Ignored: Inlined leading underscore at registerFile.v:85
	// Tracing: registerFile _GEN_11 // Ignored: Inlined leading underscore at registerFile.v:86
	// Tracing: registerFile _GEN_12 // Ignored: Inlined leading underscore at registerFile.v:87
	// Tracing: registerFile _GEN_13 // Ignored: Inlined leading underscore at registerFile.v:88
	// Tracing: registerFile _GEN_14 // Ignored: Inlined leading underscore at registerFile.v:89
	// Tracing: registerFile _GEN_15 // Ignored: Inlined leading underscore at registerFile.v:90
	// Tracing: registerFile _GEN_16 // Ignored: Inlined leading underscore at registerFile.v:91
	// Tracing: registerFile _GEN_17 // Ignored: Inlined leading underscore at registerFile.v:92
	// Tracing: registerFile _GEN_18 // Ignored: Inlined leading underscore at registerFile.v:93
	// Tracing: registerFile _GEN_19 // Ignored: Inlined leading underscore at registerFile.v:94
	// Tracing: registerFile _GEN_20 // Ignored: Inlined leading underscore at registerFile.v:95
	// Tracing: registerFile _GEN_21 // Ignored: Inlined leading underscore at registerFile.v:96
	// Tracing: registerFile _GEN_22 // Ignored: Inlined leading underscore at registerFile.v:97
	// Tracing: registerFile _GEN_23 // Ignored: Inlined leading underscore at registerFile.v:98
	// Tracing: registerFile _GEN_24 // Ignored: Inlined leading underscore at registerFile.v:99
	// Tracing: registerFile _GEN_25 // Ignored: Inlined leading underscore at registerFile.v:100
	// Tracing: registerFile _GEN_26 // Ignored: Inlined leading underscore at registerFile.v:101
	// Tracing: registerFile _GEN_27 // Ignored: Inlined leading underscore at registerFile.v:102
	// Tracing: registerFile _GEN_28 // Ignored: Inlined leading underscore at registerFile.v:103
	// Tracing: registerFile _GEN_29 // Ignored: Inlined leading underscore at registerFile.v:104
	// Tracing: registerFile _GEN_30 // Ignored: Inlined leading underscore at registerFile.v:105
	// Tracing: registerFile _GEN_33 // Ignored: Inlined leading underscore at registerFile.v:106
	// Tracing: registerFile _GEN_34 // Ignored: Inlined leading underscore at registerFile.v:107
	// Tracing: registerFile _GEN_35 // Ignored: Inlined leading underscore at registerFile.v:108
	// Tracing: registerFile _GEN_36 // Ignored: Inlined leading underscore at registerFile.v:109
	// Tracing: registerFile _GEN_37 // Ignored: Inlined leading underscore at registerFile.v:110
	// Tracing: registerFile _GEN_38 // Ignored: Inlined leading underscore at registerFile.v:111
	// Tracing: registerFile _GEN_39 // Ignored: Inlined leading underscore at registerFile.v:112
	// Tracing: registerFile _GEN_40 // Ignored: Inlined leading underscore at registerFile.v:113
	// Tracing: registerFile _GEN_41 // Ignored: Inlined leading underscore at registerFile.v:114
	// Tracing: registerFile _GEN_42 // Ignored: Inlined leading underscore at registerFile.v:115
	// Tracing: registerFile _GEN_43 // Ignored: Inlined leading underscore at registerFile.v:116
	// Tracing: registerFile _GEN_44 // Ignored: Inlined leading underscore at registerFile.v:117
	// Tracing: registerFile _GEN_45 // Ignored: Inlined leading underscore at registerFile.v:118
	// Tracing: registerFile _GEN_46 // Ignored: Inlined leading underscore at registerFile.v:119
	// Tracing: registerFile _GEN_47 // Ignored: Inlined leading underscore at registerFile.v:120
	// Tracing: registerFile _GEN_48 // Ignored: Inlined leading underscore at registerFile.v:121
	// Tracing: registerFile _GEN_49 // Ignored: Inlined leading underscore at registerFile.v:122
	// Tracing: registerFile _GEN_50 // Ignored: Inlined leading underscore at registerFile.v:123
	// Tracing: registerFile _GEN_51 // Ignored: Inlined leading underscore at registerFile.v:124
	// Tracing: registerFile _GEN_52 // Ignored: Inlined leading underscore at registerFile.v:125
	// Tracing: registerFile _GEN_53 // Ignored: Inlined leading underscore at registerFile.v:126
	// Tracing: registerFile _GEN_54 // Ignored: Inlined leading underscore at registerFile.v:127
	// Tracing: registerFile _GEN_55 // Ignored: Inlined leading underscore at registerFile.v:128
	// Tracing: registerFile _GEN_56 // Ignored: Inlined leading underscore at registerFile.v:129
	// Tracing: registerFile _GEN_57 // Ignored: Inlined leading underscore at registerFile.v:130
	// Tracing: registerFile _GEN_58 // Ignored: Inlined leading underscore at registerFile.v:131
	// Tracing: registerFile _GEN_59 // Ignored: Inlined leading underscore at registerFile.v:132
	// Tracing: registerFile _GEN_60 // Ignored: Inlined leading underscore at registerFile.v:133
	// Tracing: registerFile _GEN_61 // Ignored: Inlined leading underscore at registerFile.v:134
	// Tracing: registerFile _GEN_62 // Ignored: Inlined leading underscore at registerFile.v:135
	// Tracing: registerFile _GEN_64 // Ignored: Inlined leading underscore at registerFile.v:136
	// Tracing: registerFile _GEN_65 // Ignored: Inlined leading underscore at registerFile.v:137
	// Tracing: registerFile _GEN_66 // Ignored: Inlined leading underscore at registerFile.v:138
	// Tracing: registerFile _GEN_67 // Ignored: Inlined leading underscore at registerFile.v:139
	// Tracing: registerFile _GEN_68 // Ignored: Inlined leading underscore at registerFile.v:140
	// Tracing: registerFile _GEN_69 // Ignored: Inlined leading underscore at registerFile.v:141
	// Tracing: registerFile _GEN_70 // Ignored: Inlined leading underscore at registerFile.v:142
	// Tracing: registerFile _GEN_71 // Ignored: Inlined leading underscore at registerFile.v:143
	// Tracing: registerFile _GEN_72 // Ignored: Inlined leading underscore at registerFile.v:144
	// Tracing: registerFile _GEN_73 // Ignored: Inlined leading underscore at registerFile.v:145
	// Tracing: registerFile _GEN_74 // Ignored: Inlined leading underscore at registerFile.v:146
	// Tracing: registerFile _GEN_75 // Ignored: Inlined leading underscore at registerFile.v:147
	// Tracing: registerFile _GEN_76 // Ignored: Inlined leading underscore at registerFile.v:148
	// Tracing: registerFile _GEN_77 // Ignored: Inlined leading underscore at registerFile.v:149
	// Tracing: registerFile _GEN_78 // Ignored: Inlined leading underscore at registerFile.v:150
	// Tracing: registerFile _GEN_79 // Ignored: Inlined leading underscore at registerFile.v:151
	// Tracing: registerFile _GEN_80 // Ignored: Inlined leading underscore at registerFile.v:152
	// Tracing: registerFile _GEN_81 // Ignored: Inlined leading underscore at registerFile.v:153
	// Tracing: registerFile _GEN_82 // Ignored: Inlined leading underscore at registerFile.v:154
	// Tracing: registerFile _GEN_83 // Ignored: Inlined leading underscore at registerFile.v:155
	// Tracing: registerFile _GEN_84 // Ignored: Inlined leading underscore at registerFile.v:156
	// Tracing: registerFile _GEN_85 // Ignored: Inlined leading underscore at registerFile.v:157
	// Tracing: registerFile _GEN_86 // Ignored: Inlined leading underscore at registerFile.v:158
	// Tracing: registerFile _GEN_87 // Ignored: Inlined leading underscore at registerFile.v:159
	// Tracing: registerFile _GEN_88 // Ignored: Inlined leading underscore at registerFile.v:160
	// Tracing: registerFile _GEN_89 // Ignored: Inlined leading underscore at registerFile.v:161
	// Tracing: registerFile _GEN_90 // Ignored: Inlined leading underscore at registerFile.v:162
	// Tracing: registerFile _GEN_91 // Ignored: Inlined leading underscore at registerFile.v:163
	// Tracing: registerFile _GEN_92 // Ignored: Inlined leading underscore at registerFile.v:164
	// Tracing: registerFile _GEN_93 // Ignored: Inlined leading underscore at registerFile.v:165
	// Tracing: registerFile _GEN_94 // Ignored: Inlined leading underscore at registerFile.v:166
	// Tracing: registerFile _GEN_95 // Ignored: Inlined leading underscore at registerFile.v:167
	// Tracing: registerFile _GEN_96 // Ignored: Inlined leading underscore at registerFile.v:168
	// Tracing: registerFile _GEN_97 // Ignored: Inlined leading underscore at registerFile.v:169
	// Tracing: registerFile _GEN_98 // Ignored: Inlined leading underscore at registerFile.v:170
	// Tracing: registerFile _GEN_99 // Ignored: Inlined leading underscore at registerFile.v:171
	// Tracing: registerFile _GEN_100 // Ignored: Inlined leading underscore at registerFile.v:172
	// Tracing: registerFile _GEN_101 // Ignored: Inlined leading underscore at registerFile.v:173
	// Tracing: registerFile _GEN_102 // Ignored: Inlined leading underscore at registerFile.v:174
	// Tracing: registerFile _GEN_103 // Ignored: Inlined leading underscore at registerFile.v:175
	// Tracing: registerFile _GEN_104 // Ignored: Inlined leading underscore at registerFile.v:176
	// Tracing: registerFile _GEN_105 // Ignored: Inlined leading underscore at registerFile.v:177
	// Tracing: registerFile _GEN_106 // Ignored: Inlined leading underscore at registerFile.v:178
	// Tracing: registerFile _GEN_107 // Ignored: Inlined leading underscore at registerFile.v:179
	// Tracing: registerFile _GEN_108 // Ignored: Inlined leading underscore at registerFile.v:180
	// Tracing: registerFile _GEN_109 // Ignored: Inlined leading underscore at registerFile.v:181
	// Tracing: registerFile _GEN_110 // Ignored: Inlined leading underscore at registerFile.v:182
	// Tracing: registerFile _GEN_111 // Ignored: Inlined leading underscore at registerFile.v:183
	// Tracing: registerFile _GEN_112 // Ignored: Inlined leading underscore at registerFile.v:184
	// Tracing: registerFile _GEN_113 // Ignored: Inlined leading underscore at registerFile.v:185
	// Tracing: registerFile _GEN_114 // Ignored: Inlined leading underscore at registerFile.v:186
	// Tracing: registerFile _GEN_115 // Ignored: Inlined leading underscore at registerFile.v:187
	// Tracing: registerFile _GEN_116 // Ignored: Inlined leading underscore at registerFile.v:188
	// Tracing: registerFile _GEN_117 // Ignored: Inlined leading underscore at registerFile.v:189
	// Tracing: registerFile _GEN_118 // Ignored: Inlined leading underscore at registerFile.v:190
	// Tracing: registerFile _GEN_119 // Ignored: Inlined leading underscore at registerFile.v:191
	// Tracing: registerFile _GEN_120 // Ignored: Inlined leading underscore at registerFile.v:192
	// Tracing: registerFile _GEN_121 // Ignored: Inlined leading underscore at registerFile.v:193
	// Tracing: registerFile _GEN_122 // Ignored: Inlined leading underscore at registerFile.v:194
	// Tracing: registerFile _GEN_123 // Ignored: Inlined leading underscore at registerFile.v:195
	// Tracing: registerFile _GEN_124 // Ignored: Inlined leading underscore at registerFile.v:196
	// Tracing: registerFile _GEN_125 // Ignored: Inlined leading underscore at registerFile.v:197
	// Tracing: registerFile _GEN_126 // Ignored: Inlined leading underscore at registerFile.v:198
	// Tracing: registerFile _GEN_127 // Ignored: Inlined leading underscore at registerFile.v:199
    }
}

void VregisterFile::traceFullThis__1(VregisterFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VregisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->registerFile__DOT__registers_0),32);
	vcdp->fullBus  (c+2,(vlTOPp->registerFile__DOT__registers_1),32);
	vcdp->fullBus  (c+3,(vlTOPp->registerFile__DOT__registers_2),32);
	vcdp->fullBus  (c+4,(vlTOPp->registerFile__DOT__registers_3),32);
	vcdp->fullBus  (c+5,(vlTOPp->registerFile__DOT__registers_4),32);
	vcdp->fullBus  (c+6,(vlTOPp->registerFile__DOT__registers_5),32);
	vcdp->fullBus  (c+7,(vlTOPp->registerFile__DOT__registers_6),32);
	vcdp->fullBus  (c+8,(vlTOPp->registerFile__DOT__registers_7),32);
	vcdp->fullBus  (c+9,(vlTOPp->registerFile__DOT__registers_8),32);
	vcdp->fullBus  (c+10,(vlTOPp->registerFile__DOT__registers_9),32);
	vcdp->fullBus  (c+11,(vlTOPp->registerFile__DOT__registers_10),32);
	vcdp->fullBus  (c+12,(vlTOPp->registerFile__DOT__registers_11),32);
	vcdp->fullBus  (c+13,(vlTOPp->registerFile__DOT__registers_12),32);
	vcdp->fullBus  (c+14,(vlTOPp->registerFile__DOT__registers_13),32);
	vcdp->fullBus  (c+15,(vlTOPp->registerFile__DOT__registers_14),32);
	vcdp->fullBus  (c+16,(vlTOPp->registerFile__DOT__registers_15),32);
	vcdp->fullBus  (c+17,(vlTOPp->registerFile__DOT__registers_16),32);
	vcdp->fullBus  (c+18,(vlTOPp->registerFile__DOT__registers_17),32);
	vcdp->fullBus  (c+19,(vlTOPp->registerFile__DOT__registers_18),32);
	vcdp->fullBus  (c+20,(vlTOPp->registerFile__DOT__registers_19),32);
	vcdp->fullBus  (c+21,(vlTOPp->registerFile__DOT__registers_20),32);
	vcdp->fullBus  (c+22,(vlTOPp->registerFile__DOT__registers_21),32);
	vcdp->fullBus  (c+23,(vlTOPp->registerFile__DOT__registers_22),32);
	vcdp->fullBus  (c+24,(vlTOPp->registerFile__DOT__registers_23),32);
	vcdp->fullBus  (c+25,(vlTOPp->registerFile__DOT__registers_24),32);
	vcdp->fullBus  (c+26,(vlTOPp->registerFile__DOT__registers_25),32);
	vcdp->fullBus  (c+27,(vlTOPp->registerFile__DOT__registers_26),32);
	vcdp->fullBus  (c+28,(vlTOPp->registerFile__DOT__registers_27),32);
	vcdp->fullBus  (c+29,(vlTOPp->registerFile__DOT__registers_28),32);
	vcdp->fullBus  (c+30,(vlTOPp->registerFile__DOT__registers_29),32);
	vcdp->fullBus  (c+31,(vlTOPp->registerFile__DOT__registers_30),32);
	vcdp->fullBus  (c+32,(vlTOPp->registerFile__DOT__registers_31),32);
	vcdp->fullBit  (c+33,(vlTOPp->clock));
	vcdp->fullBit  (c+34,(vlTOPp->reset));
	vcdp->fullBit  (c+35,(vlTOPp->io_regWrite));
	vcdp->fullBus  (c+36,(vlTOPp->io_rs1_sel),5);
	vcdp->fullBus  (c+37,(vlTOPp->io_rs2_sel),5);
	vcdp->fullBus  (c+38,(vlTOPp->io_rd_sel),5);
	vcdp->fullBus  (c+39,(vlTOPp->io_writeData),32);
	vcdp->fullBus  (c+40,(vlTOPp->io_rs1),32);
	vcdp->fullBus  (c+41,(vlTOPp->io_rs2),32);
    }
}
