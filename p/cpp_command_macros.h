// Written by Steven Zagorianakos
// Helper macros to form CPP bus commands
// MACRO to FORM CPP command

// RS1 {Island_ID(7 or 0),data_master(5 or 0 ),(signal_master(5 or 0),Signal_ref(7 or 3),Byte_Mask(8 or 0),OVERRIDE(11, whrn zero lower value needed),LENGTH(5),DATA_REF(16)} # SZ FIXME move overrides to end of RS1, move signal ref to just after length

//T2 is RS2 {Mode_addr[7:0], target_addr (55:0) only 48 bits of addr is used

#-----------------------------------------------------------------------
# CPP Signal Macros
#-----------------------------------------------------------------------
#define GEN_SIGNAL(SIGNAL,CNT) (CNT << SIGNAL)
#define WAIT_ON_SIGNAL(SIGNAL,CNT) \
	LI t3, GEN_SIGNAL(SIGNAL,CNT) ; \
	.insn i 11, 4,  t5,   t3, 0	 ;
.macro wait_on_signal_1 signal, cnt
   LI t3, \cnt
   SLL t3, t3, \signal 
   .insn i 11, 4,  t5,   t3, 0	 ;
.endm
#--------------------------------
# Calcute RS1 for cpp command
#--------------------------------
.macro CALC_RS1_1 length, byte_mask, rs1
   slli \length , \length , 16
   or \rs1, \rs1, \length
   slli \byte_mask, \byte_mask, 21
   or \rs1, \rs1, \byte_mask
.endm
  
#define CALC_RS1(Island_ID,Data_Master,Signal_Master,Signal_Ref,Byte_Mask,Override,Length,Data_Ref) \
        ( (Data_Ref & 0xffff) | \
         ((Length & 0x1f)        << 16) | \
         ((Byte_Mask & 0xff)     << 21) | \
         ((Signal_Ref & 0x7)     << 29) | \
         ((Signal_Master & 0x1f) << 36) | \
         ((Data_Master & 0x1f)   << 41) | \
         ((Island_ID & 0x7f)     << 46) | \
         ((Override & 0xff)      << 53) )

# example of CPP command																										 
#define CPP_EXEC(IMM_1) \
	.insn s 43,0,t2,IMM_1(t1)     ;

#--------------------------------------
# define signals 
#--------------------------------------
.equ  SIG1_1, 0x2
.equ  SIG2_1, 0x4
.equ  SIG3_1, 0x8
.equ  SIG4_1, 0x10
.equ  SIG7_1, 0x20    # Bit 5
.equ  SIG5_3, 0x0c0 # Bits [8:6]  # 3 bit counter signals
.equ  SIG6_3, 0xe00 # Bits [11:9]  # 3 bit counter signals

.equ  SIG1_pos, 0x1
.equ  SIG2_pos, 0x2
.equ  SIG3_pos, 0x3
.equ  SIG4_pos, 0x4
.equ  SIG7_pos, 0x5    # Bit 5
.equ  SIG5_pos, 0x6 # Bits [8:6]  
.equ  SIG6_pos, 0x9 # Bits [11:9]  
.equ  SIG1, 0x1
.equ  SIG2, 0x2
.equ  SIG3, 0x3
.equ  SIG4, 0x4
.equ  SIG7, 0x7
.equ  SIG5, 0x5  
.equ  SIG6, 0x6
#----------------------------------------------------------------------
# define for CPP Action, Token and Targets
#----------------------------------------------------------------------

# Targets
#define Resv0 0
#define NBI 1
#define Resv2 2
#define Resv3 3
#define Resv4 4
#define Resv5 5
#define Resv6 6
#define CTM 7
#define MEM 7
#define Resv8 8
#define PCIe 9
#define ARM 10
#define Recv11 11
#define CRYPTO 12
#define Resv13 13
#define CT 14
#define LS 15
#define CLS 15






















  
