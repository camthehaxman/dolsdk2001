/* symbols just to satisfy the linker*/
#define TEXT_STUB(name) void name(void) {}
#define DATA_STUB(name) int name;

TEXT_STUB(_start)

TEXT_STUB(__ArenaHi)
TEXT_STUB(__ArenaLo)
TEXT_STUB(__cvt_fp2unsigned)
TEXT_STUB(__div2i)
TEXT_STUB(__init_registers)
TEXT_STUB(__mod2i)
TEXT_STUB(__shl2i)
TEXT_STUB(__shr2i)
TEXT_STUB(__shr2u)
TEXT_STUB(_ctors)
TEXT_STUB(_dtors)
TEXT_STUB(_bss_init_info)
TEXT_STUB(_restfpr_18)
TEXT_STUB(_restfpr_20)
TEXT_STUB(_restfpr_23)
TEXT_STUB(_restfpr_24)
TEXT_STUB(_restfpr_25)
TEXT_STUB(_restfpr_27)
TEXT_STUB(_restfpr_28)
TEXT_STUB(_restfpr_29)
TEXT_STUB(_restfpr_30)
TEXT_STUB(_rom_copy_info)
TEXT_STUB(_savefpr_18)
TEXT_STUB(_savefpr_20)
TEXT_STUB(_savefpr_23)
TEXT_STUB(_savefpr_24)
TEXT_STUB(_savefpr_25)
TEXT_STUB(_savefpr_27)
TEXT_STUB(_savefpr_28)
TEXT_STUB(_savefpr_29)
TEXT_STUB(_savefpr_30)
TEXT_STUB(_stack_addr)
TEXT_STUB(_stack_end)
TEXT_STUB(C_MTXIdentity)
TEXT_STUB(DSPAddTask)
TEXT_STUB(DSPCheckMailToDSP)
TEXT_STUB(DSPInit)
TEXT_STUB(DSPSendMailToDSP)
TEXT_STUB(EnableMetroTRKInterrupts)
TEXT_STUB(InitMetroTRK)
TEXT_STUB(PPCHalt)
TEXT_STUB(PPCMfdec)
TEXT_STUB(PPCMfhid0)
TEXT_STUB(PPCMfhid2)
TEXT_STUB(PPCMfl2cr)
TEXT_STUB(PPCMfmsr)
TEXT_STUB(PPCMfpmc1)
TEXT_STUB(PPCMfpmc2)
TEXT_STUB(PPCMfpmc3)
TEXT_STUB(PPCMfpmc4)
TEXT_STUB(PPCMfwpar)
TEXT_STUB(PPCMtdec)
TEXT_STUB(PPCMtdmaL)
TEXT_STUB(PPCMtdmaU)
TEXT_STUB(PPCMthid2)
TEXT_STUB(PPCMtl2cr)
TEXT_STUB(PPCMtmmcr0)
TEXT_STUB(PPCMtmmcr1)
TEXT_STUB(PPCMtmsr)
TEXT_STUB(PPCMtpmc1)
TEXT_STUB(PPCMtpmc2)
TEXT_STUB(PPCMtpmc3)
TEXT_STUB(PPCMtpmc4)
TEXT_STUB(PPCMtwpar)
TEXT_STUB(PPCSync)
TEXT_STUB(PSMTXIdentity)
TEXT_STUB(cosf)
TEXT_STUB(main)
TEXT_STUB(memcmp)
TEXT_STUB(memcpy)
TEXT_STUB(memmove)
TEXT_STUB(memset)
TEXT_STUB(rand)
TEXT_STUB(sinf)
TEXT_STUB(sprintf)
TEXT_STUB(srand)
TEXT_STUB(strlen)
TEXT_STUB(strncpy)
TEXT_STUB(tolower)
TEXT_STUB(vprintf)
