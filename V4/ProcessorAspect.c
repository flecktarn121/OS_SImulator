
struct JoinPoint { 
	void** (*fp) (struct JoinPoint *);
	void ** args;
	int argsCount;
	const char ** argsType;
	 void * (*arg)(int, struct JoinPoint *); 
	 const char * (*argType)(int , struct JoinPoint *); 
	void ** retValue;
	const char * retType;
	const char * funcName ;
	const char * targetName ;
	const char * fileName ;
	const char * kind ;
	void * excep_return ;
};

 struct __UTAC__EXCEPTION {
	void * jumpbuf ;
	unsigned long long int prtValue ;
	int pops;
	struct __UTAC__CFLOW_FUNC {
		int (*func)(int,int) ;
		int val ;
		struct __UTAC__CFLOW_FUNC * next; 
	} * cflowfuncs; 
}; 


# 1 "Processor.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "Processor.c" 
# 1 "Processor.h" 1
# 1 "MainMemory.h" 1
# 13 "MainMemory.h" 
typedef struct {char operationCode; int operand1; int operand2; 
}MEMORYCELL; 
#line 16 "MainMemory.h"
void MainMemory_readMemory(); 
#line 17 "MainMemory.h"
void MainMemory_writeMemory(); 
#line 19 "MainMemory.h"
int MainMemory_GetMAR(); 
#line 20 "MainMemory.h"
void MainMemory_SetMAR(int ); 
#line 21 "MainMemory.h"
void MainMemory_GetMBR( MEMORYCELL *); 
#line 22 "MainMemory.h"
void MainMemory_SetMBR( MEMORYCELL *); 
#line 10 "Processor.h"
enum PSW_BITS {POWEROFF_BIT=0,ZERO_BIT=1,NEGATIVE_BIT=2,OVERFLOW_BIT=3,EXECUTION_MODE_BIT=7,INTERRUPT_MASKED_BIT=15}; 
#line 14 "Processor.h"
enum INT_BITS {SYSCALL_BIT=2,EXCEPTION_BIT=6,CLOCKINT_BIT=9}; 
#line 17 "Processor.h"
enum EXCEPTIONS {DIVISIONBYZERO,INVALIDPROCESSORMODE,INVALIDADDRESS,INVALIDINSTRUCTION}; 
#line 20 "Processor.h"
void Processor_InitializeInterruptVectorTable(); 
#line 21 "Processor.h"
void Processor_InstructionCycleLoop(); 
#line 22 "Processor.h"
void Processor_CopyInSystemStack(int , int ); 
#line 23 "Processor.h"
int Processor_CopyFromSystemStack(int ); 
#line 24 "Processor.h"
unsigned int Processor_PSW_BitState(const unsigned int ); 
#line 25 "Processor.h"
char *Processor_ShowPSW(); 
#line 26 "Processor.h"
void Processor_RaiseInterrupt(const unsigned int interruptNumber); 
#line 27 "Processor.h"
void Processor_RaiseException(int typeOfException); 
#line 31 "Processor.h"
int Processor_GetMAR(); 
#line 32 "Processor.h"
void Processor_SetMAR(int ); 
#line 33 "Processor.h"
void Processor_GetMBR( MEMORYCELL *); 
#line 34 "Processor.h"
void Processor_SetMBR( MEMORYCELL *); 
#line 40 "Processor.h"
void Processor_SetAccumulator(int ); 
#line 41 "Processor.h"
int Processor_GetAccumulator(); 
#line 45 "Processor.h"
void Processor_SetPC(int ); 
#line 49 "Processor.h"
int Processor_GetRegisterA(); 
#line 50 "Processor.h"
int Processor_GetRegisterB(); 
#line 53 "Processor.h"
void Processor_SetPSW(unsigned int ); 
#line 55 "Processor.h"
unsigned int Processor_GetPSW(); 
# 5 "Processor.h" 2
# 2 "Processor.c" 2
# 1 "OperatingSystem.h" 1
# 1 "ComputerSystem.h" 1
# 1 "Simulator.h" 1
# 5 "ComputerSystem.h" 2
# 1 "ComputerSystemBase.h" 1
# 1 "ComputerSystem.h" 1
# 7 "ComputerSystemBase.h" 2
int ComputerSystem_ObtainProgramList(int , char *([])); 
#line 8 "ComputerSystemBase.h"
void ComputerSystem_DebugMessage(int , char , ...); 
#line 9 "ComputerSystemBase.h"
void ComputerSystem_FillInArrivalTimeQueue(); 
#line 10 "ComputerSystemBase.h"
void ComputerSystem_PrintArrivalTimeQueue(); 
#line 14 "ComputerSystemBase.h"
extern int numberOfProgramsInArrivalTimeQueue; 
#line 15 "ComputerSystemBase.h"
extern int arrivalTimeQueue[30]; 
#line 8 "ComputerSystem.h"
void ComputerSystem_PowerOn(int argc, char *argv[]); 
#line 9 "ComputerSystem.h"
void ComputerSystem_PowerOff(); 
# 6 "ComputerSystem.h" 2
# 37 "ComputerSystem.h" 
typedef struct ProgramData {char *executableName; unsigned int arrivalTime; unsigned int type; 
}PROGRAMS_DATA; 
#line 41 "ComputerSystem.h"
extern  PROGRAMS_DATA *programList[30]; 
#line 42 "ComputerSystem.h"
extern int arrivalTimeQueue[30]; 
#line 43 "ComputerSystem.h"
extern int numberOfProgramsInArrivalTimeQueue; 
# 5 "OperatingSystem.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 374 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 385 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 386 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 375 "/usr/include/features.h" 2 3 4
# 398 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 399 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 3 4
typedef long unsigned int size_t; 
# 34 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
typedef unsigned char __u_char; 
#line 31 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned short int __u_short; 
#line 32 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __u_int; 
#line 33 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __u_long; 
#line 36 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed char __int8_t; 
#line 37 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned char __uint8_t; 
#line 38 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed short int __int16_t; 
#line 39 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned short int __uint16_t; 
#line 40 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed int __int32_t; 
#line 41 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uint32_t; 
#line 43 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed long int __int64_t; 
#line 44 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __uint64_t; 
#line 52 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __quad_t; 
#line 53 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __u_quad_t; 
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 124 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
typedef unsigned long int __dev_t; 
#line 125 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uid_t; 
#line 126 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __gid_t; 
#line 127 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __ino_t; 
#line 128 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __ino64_t; 
#line 129 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __mode_t; 
#line 130 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __nlink_t; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __off_t; 
#line 132 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __off64_t; 
#line 133 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __pid_t; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef struct {int __val[2]; 
}__fsid_t; 
#line 135 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __clock_t; 
#line 136 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __rlim_t; 
#line 137 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __rlim64_t; 
#line 138 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __id_t; 
#line 139 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __time_t; 
#line 140 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __useconds_t; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __suseconds_t; 
#line 143 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __daddr_t; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __key_t; 
#line 147 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __clockid_t; 
#line 150 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef void *__timer_t; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blksize_t; 
#line 158 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blkcnt_t; 
#line 159 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blkcnt64_t; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsblkcnt_t; 
#line 163 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsblkcnt64_t; 
#line 166 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsfilcnt_t; 
#line 167 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsfilcnt64_t; 
#line 170 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __fsword_t; 
#line 172 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __ssize_t; 
#line 175 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __syscall_slong_t; 
#line 177 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __syscall_ulong_t; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef  __off64_t __loff_t; 
#line 182 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef  __quad_t *__qaddr_t; 
#line 183 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef char *__caddr_t; 
#line 186 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __intptr_t; 
#line 189 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __socklen_t; 
# 36 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE ; 
#line 48 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE; 
#line 64 "/usr/include/stdio.h"
typedef struct _IO_FILE __FILE; 
# 64 "/usr/include/stdio.h" 3 4
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 94 "/usr/include/wchar.h" 3 4
typedef struct {int __count; union {unsigned int __wch; char __wchb[4]; 
}__value; 
}__mbstate_t; 
#line 25 "/usr/include/_G_config.h"
typedef struct { __off_t __pos;  __mbstate_t __state; 
}_G_fpos_t; 
#line 30 "/usr/include/_G_config.h"
typedef struct { __off64_t __pos;  __mbstate_t __state; 
}_G_fpos64_t; 
# 21 "/usr/include/_G_config.h" 2 3 4
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list; 
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t ; 
#line 144 "/usr/include/libio.h"
struct _IO_FILE ; 
#line 154 "/usr/include/libio.h"
typedef void _IO_lock_t; 
# 154 "/usr/include/libio.h" 3 4
# 177 "/usr/include/libio.h" 3 4
struct _IO_marker {struct _IO_marker *_next; struct _IO_FILE *_sbuf; int _pos; 
}; 
#line 186 "/usr/include/libio.h"
enum __codecvt_result {__codecvt_ok,__codecvt_partial,__codecvt_error,__codecvt_noconv}; 
# 245 "/usr/include/libio.h" 3 4
# 293 "/usr/include/libio.h" 3 4
# 312 "/usr/include/libio.h" 3 4
struct _IO_FILE {int _flags; char *_IO_read_ptr; char *_IO_read_end; char *_IO_read_base; char *_IO_write_base; char *_IO_write_ptr; char *_IO_write_end; char *_IO_buf_base; char *_IO_buf_end; char *_IO_save_base; char *_IO_backup_base; char *_IO_save_end; struct _IO_marker *_markers; struct _IO_FILE *_chain; int _fileno; int _flags2;  __off_t _old_offset; unsigned short _cur_column; signed char _vtable_offset; char _shortbuf[1];  _IO_lock_t *_lock;  __off64_t _offset; void *__pad1; void *__pad2; void *__pad3; void *__pad4;  size_t __pad5; int _mode; char _unused2[15 * sizeof (int ) - 4 * sizeof (void *) - sizeof ( size_t )]; 
}; 
#line 315 "/usr/include/libio.h"
typedef struct _IO_FILE _IO_FILE; 
#line 318 "/usr/include/libio.h"
struct _IO_FILE_plus ; 
#line 320 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdin_; 
#line 321 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdout_; 
#line 322 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stderr_; 
#line 338 "/usr/include/libio.h"
typedef  __ssize_t __io_read_fn(void *__cookie, char *__buf,  size_t __nbytes); 
#line 347 "/usr/include/libio.h"
typedef  __ssize_t __io_write_fn(void *__cookie, const char *__buf,  size_t __n); 
#line 355 "/usr/include/libio.h"
typedef int __io_seek_fn(void *__cookie,  __off64_t *__pos, int __w); 
#line 358 "/usr/include/libio.h"
typedef int __io_close_fn(void *__cookie); 
# 338 "/usr/include/libio.h" 3 4
# 390 "/usr/include/libio.h" 3 4
extern int __underflow( _IO_FILE *); 
#line 391 "/usr/include/libio.h"
extern int __uflow( _IO_FILE *); 
#line 392 "/usr/include/libio.h"
extern int __overflow( _IO_FILE *, int ); 
#line 434 "/usr/include/libio.h"
extern int _IO_getc( _IO_FILE *__fp); 
#line 435 "/usr/include/libio.h"
extern int _IO_putc(int __c,  _IO_FILE *__fp); 
#line 436 "/usr/include/libio.h"
extern int _IO_feof( _IO_FILE *__fp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 437 "/usr/include/libio.h"
extern int _IO_ferror( _IO_FILE *__fp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 439 "/usr/include/libio.h"
extern int _IO_peekc_locked( _IO_FILE *__fp); 
#line 445 "/usr/include/libio.h"
extern void _IO_flockfile( _IO_FILE *) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 446 "/usr/include/libio.h"
extern void _IO_funlockfile( _IO_FILE *) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 447 "/usr/include/libio.h"
extern int _IO_ftrylockfile( _IO_FILE *) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 434 "/usr/include/libio.h" 3 4
# 465 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list , int *__restrict ); 
#line 467 "/usr/include/libio.h"
extern int _IO_vfprintf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list ); 
#line 468 "/usr/include/libio.h"
extern  __ssize_t _IO_padn( _IO_FILE *, int ,  __ssize_t ); 
#line 469 "/usr/include/libio.h"
extern  size_t _IO_sgetn( _IO_FILE *, void *,  size_t ); 
#line 471 "/usr/include/libio.h"
extern  __off64_t _IO_seekoff( _IO_FILE *,  __off64_t , int , int ); 
#line 472 "/usr/include/libio.h"
extern  __off64_t _IO_seekpos( _IO_FILE *,  __off64_t , int ); 
#line 474 "/usr/include/libio.h"
extern void _IO_free_backup_area( _IO_FILE *) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 79 "/usr/include/stdio.h"
typedef  __gnuc_va_list va_list; 
# 75 "/usr/include/stdio.h" 2 3 4
# 90 "/usr/include/stdio.h" 3 4
typedef  __off_t off_t; 
#line 102 "/usr/include/stdio.h"
typedef  __ssize_t ssize_t; 
#line 110 "/usr/include/stdio.h"
typedef  _G_fpos_t fpos_t; 
# 102 "/usr/include/stdio.h" 3 4
# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 168 "/usr/include/stdio.h" 2 3 4
extern struct _IO_FILE *stdin; 
#line 169 "/usr/include/stdio.h"
extern struct _IO_FILE *stdout; 
#line 170 "/usr/include/stdio.h"
extern struct _IO_FILE *stderr; 
#line 178 "/usr/include/stdio.h"
extern int remove(const char *__filename) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 180 "/usr/include/stdio.h"
extern int rename(const char *__old, const char *__new) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 186 "/usr/include/stdio.h"
extern int renameat(int __oldfd, const char *__old, int __newfd, const char *__new) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 195 "/usr/include/stdio.h"
extern  FILE *tmpfile(void ); 
#line 209 "/usr/include/stdio.h"
extern char *tmpnam(char *__s) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 215 "/usr/include/stdio.h"
extern char *tmpnam_r(char *__s) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 209 "/usr/include/stdio.h" 3 4
# 228 "/usr/include/stdio.h" 3 4
extern char *tempnam(const char *__dir, const char *__pfx) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __malloc__ )) ; 
#line 237 "/usr/include/stdio.h"
extern int fclose( FILE *__stream); 
#line 242 "/usr/include/stdio.h"
extern int fflush( FILE *__stream); 
#line 252 "/usr/include/stdio.h"
extern int fflush_unlocked( FILE *__stream); 
# 252 "/usr/include/stdio.h" 3 4
# 273 "/usr/include/stdio.h" 3 4
extern  FILE *fopen(const char *__restrict __filename, const char *__restrict __modes); 
#line 280 "/usr/include/stdio.h"
extern  FILE *freopen(const char *__restrict __filename, const char *__restrict __modes,  FILE *__restrict __stream); 
# 295 "/usr/include/stdio.h" 3 4
# 306 "/usr/include/stdio.h" 3 4
extern  FILE *fdopen(int __fd, const char *__modes) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 320 "/usr/include/stdio.h"
extern  FILE *fmemopen(void *__s,  size_t __len, const char *__modes) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 325 "/usr/include/stdio.h"
extern  FILE *open_memstream(char **__bufloc,  size_t *__sizeloc) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 332 "/usr/include/stdio.h"
extern void setbuf( FILE *__restrict __stream, char *__restrict __buf) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 337 "/usr/include/stdio.h"
extern int setvbuf( FILE *__restrict __stream, char *__restrict __buf, int __modes,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 344 "/usr/include/stdio.h"
extern void setbuffer( FILE *__restrict __stream, char *__restrict __buf,  size_t __size) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 347 "/usr/include/stdio.h"
extern void setlinebuf( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 357 "/usr/include/stdio.h"
extern int fprintf( FILE *__restrict __stream, const char *__restrict __format, ...); 
#line 362 "/usr/include/stdio.h"
extern int printf(const char *__restrict __format, ...); 
#line 365 "/usr/include/stdio.h"
extern int sprintf(char *__restrict __s, const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 372 "/usr/include/stdio.h"
extern int vfprintf( FILE *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg); 
#line 377 "/usr/include/stdio.h"
extern int vprintf(const char *__restrict __format,  __gnuc_va_list __arg); 
#line 380 "/usr/include/stdio.h"
extern int vsprintf(char *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ )) ; 
#line 388 "/usr/include/stdio.h"
extern int snprintf(char *__restrict __s,  size_t __maxlen, const char *__restrict __format, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 392 "/usr/include/stdio.h"
extern int vsnprintf(char *__restrict __s,  size_t __maxlen, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 0 )  )) ; 
# 319 "/usr/include/stdio.h" 3 4
# 414 "/usr/include/stdio.h" 3 4
extern int vdprintf(int __fd, const char *__restrict __fmt,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __printf__, 2, 0 )  )) ; 
#line 416 "/usr/include/stdio.h"
extern int dprintf(int __fd, const char *__restrict __fmt, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 426 "/usr/include/stdio.h"
extern int fscanf( FILE *__restrict __stream, const char *__restrict __format, ...); 
#line 431 "/usr/include/stdio.h"
extern int scanf(const char *__restrict __format, ...); 
#line 434 "/usr/include/stdio.h"
extern int sscanf(const char *__restrict __s, const char *__restrict __format, ...) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 445 "/usr/include/stdio.h"
extern int fscanf( FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("""__isoc99_fscanf"); 
#line 447 "/usr/include/stdio.h"
extern int scanf(const char *__restrict __format, ...) __asm__ ("""__isoc99_scanf"); 
#line 450 "/usr/include/stdio.h"
extern int sscanf(const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("""__isoc99_sscanf") __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 443 "/usr/include/stdio.h" 3 4
# 473 "/usr/include/stdio.h" 3 4
extern int vfscanf( FILE *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 480 "/usr/include/stdio.h"
extern int vscanf(const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __scanf__, 1, 0 )  )) ; 
#line 485 "/usr/include/stdio.h"
extern int vsscanf(const char *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 498 "/usr/include/stdio.h"
extern int vfscanf( FILE *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __asm__ ("""__isoc99_vfscanf") __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 501 "/usr/include/stdio.h"
extern int vscanf(const char *__restrict __format,  __gnuc_va_list __arg) __asm__ ("""__isoc99_vscanf") __attribute__  (( __format__ ( __scanf__, 1, 0 )  )) ; 
#line 506 "/usr/include/stdio.h"
extern int vsscanf(const char *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __asm__ ("""__isoc99_vsscanf") __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
# 494 "/usr/include/stdio.h" 3 4
# 531 "/usr/include/stdio.h" 3 4
extern int fgetc( FILE *__stream); 
#line 532 "/usr/include/stdio.h"
extern int getc( FILE *__stream); 
#line 538 "/usr/include/stdio.h"
extern int getchar(void ); 
#line 550 "/usr/include/stdio.h"
extern int getc_unlocked( FILE *__stream); 
#line 551 "/usr/include/stdio.h"
extern int getchar_unlocked(void ); 
# 550 "/usr/include/stdio.h" 3 4
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked( FILE *__stream); 
#line 573 "/usr/include/stdio.h"
extern int fputc(int __c,  FILE *__stream); 
#line 574 "/usr/include/stdio.h"
extern int putc(int __c,  FILE *__stream); 
#line 580 "/usr/include/stdio.h"
extern int putchar(int __c); 
#line 594 "/usr/include/stdio.h"
extern int fputc_unlocked(int __c,  FILE *__stream); 
#line 602 "/usr/include/stdio.h"
extern int putc_unlocked(int __c,  FILE *__stream); 
#line 603 "/usr/include/stdio.h"
extern int putchar_unlocked(int __c); 
#line 610 "/usr/include/stdio.h"
extern int getw( FILE *__stream); 
#line 613 "/usr/include/stdio.h"
extern int putw(int __w,  FILE *__stream); 
#line 623 "/usr/include/stdio.h"
extern char *fgets(char *__restrict __s, int __n,  FILE *__restrict __stream); 
# 594 "/usr/include/stdio.h" 3 4
# 638 "/usr/include/stdio.h" 3 4
extern char *gets(char *__s) __attribute__  (( __deprecated__ )) ; 
#line 667 "/usr/include/stdio.h"
extern  __ssize_t __getdelim(char **__restrict __lineptr,  size_t *__restrict __n, int __delimiter,  FILE *__restrict __stream); 
#line 670 "/usr/include/stdio.h"
extern  __ssize_t getdelim(char **__restrict __lineptr,  size_t *__restrict __n, int __delimiter,  FILE *__restrict __stream); 
#line 680 "/usr/include/stdio.h"
extern  __ssize_t getline(char **__restrict __lineptr,  size_t *__restrict __n,  FILE *__restrict __stream); 
#line 689 "/usr/include/stdio.h"
extern int fputs(const char *__restrict __s,  FILE *__restrict __stream); 
#line 695 "/usr/include/stdio.h"
extern int puts(const char *__s); 
#line 702 "/usr/include/stdio.h"
extern int ungetc(int __c,  FILE *__stream); 
#line 710 "/usr/include/stdio.h"
extern  size_t fread(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 716 "/usr/include/stdio.h"
extern  size_t fwrite(const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __s); 
# 665 "/usr/include/stdio.h" 3 4
# 738 "/usr/include/stdio.h" 3 4
extern  size_t fread_unlocked(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 740 "/usr/include/stdio.h"
extern  size_t fwrite_unlocked(const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 749 "/usr/include/stdio.h"
extern int fseek( FILE *__stream, long int __off, int __whence); 
#line 754 "/usr/include/stdio.h"
extern long int ftell( FILE *__stream); 
#line 759 "/usr/include/stdio.h"
extern void rewind( FILE *__stream); 
#line 773 "/usr/include/stdio.h"
extern int fseeko( FILE *__stream,  __off_t __off, int __whence); 
#line 778 "/usr/include/stdio.h"
extern  __off_t ftello( FILE *__stream); 
# 773 "/usr/include/stdio.h" 3 4
# 798 "/usr/include/stdio.h" 3 4
extern int fgetpos( FILE *__restrict __stream,  fpos_t *__restrict __pos); 
#line 803 "/usr/include/stdio.h"
extern int fsetpos( FILE *__stream, const  fpos_t *__pos); 
# 815 "/usr/include/stdio.h" 3 4
# 826 "/usr/include/stdio.h" 3 4
extern void clearerr( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 828 "/usr/include/stdio.h"
extern int feof( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 830 "/usr/include/stdio.h"
extern int ferror( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 835 "/usr/include/stdio.h"
extern void clearerr_unlocked( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 836 "/usr/include/stdio.h"
extern int feof_unlocked( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 837 "/usr/include/stdio.h"
extern int ferror_unlocked( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 846 "/usr/include/stdio.h"
extern void perror(const char *__s); 
# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr; 
#line 27 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
extern const char *const sys_errlist[]; 
#line 858 "/usr/include/stdio.h"
extern int fileno( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 863 "/usr/include/stdio.h"
extern int fileno_unlocked( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 854 "/usr/include/stdio.h" 2 3 4
# 873 "/usr/include/stdio.h" 3 4
extern  FILE *popen(const char *__command, const char *__modes); 
#line 879 "/usr/include/stdio.h"
extern int pclose( FILE *__stream); 
#line 885 "/usr/include/stdio.h"
extern char *ctermid(char *__s) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 913 "/usr/include/stdio.h"
extern void flockfile( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 917 "/usr/include/stdio.h"
extern int ftrylockfile( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 920 "/usr/include/stdio.h"
extern void funlockfile( FILE *__stream) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 913 "/usr/include/stdio.h" 3 4
# 943 "/usr/include/stdio.h" 3 4
# 6 "OperatingSystem.h" 2
# 46 "OperatingSystem.h" 
enum ProcessStates {NEW,READY,EXECUTING,BLOCKED,EXIT}; 
#line 49 "OperatingSystem.h"
enum SystemCallIdentifiers {SYSCALL_END=3,SYSCALL_YIELD=4,SYSCALL_PRINTEXECPID=5,SYSCALL_SLEEP=7}; 
#line 64 "OperatingSystem.h"
typedef struct {int busy; int initialPhysicalAddress; int processSize; int state; int priority; int copyOfPCRegister; unsigned int copyOfPSWRegister; int copyOfACCRegister; int programListIndex; int queueID; int whenToWakeUp; 
}PCB; 
#line 68 "OperatingSystem.h"
extern  PCB processTable[4]; 
#line 69 "OperatingSystem.h"
extern int OS_address_base; 
#line 70 "OperatingSystem.h"
extern int sipID; 
#line 73 "OperatingSystem.h"
void OperatingSystem_Initialize(); 
#line 74 "OperatingSystem.h"
void OperatingSystem_InterruptLogic(int ); 
#line 75 "OperatingSystem.h"
void OperatingSystem_PrintReadyToRunQueue(); 
#line 76 "OperatingSystem.h"
int OperatingSystem_GetExecutingProcessID(); 
# 3 "Processor.c" 2
# 4 "Buses.h" 1
enum BusConnection {MAINMEMORY,MMU,CPU,INPUTDEVICE,OUTPUTDEVICE}; 
#line 10 "Buses.h"
int Buses_write_AddressBus_From_To(int , int ); 
#line 11 "Buses.h"
int Buses_write_DataBus_From_To(int , int ); 
# 4 "Processor.c" 2
# 8 "MMU.h" 1
int MMU_readMemory(); 
#line 9 "MMU.h"
int MMU_writeMemory(); 
#line 11 "MMU.h"
int MMU_GetMAR(); 
#line 12 "MMU.h"
void MMU_SetMAR(int ); 
#line 13 "MMU.h"
void MMU_SetBase(int ); 
#line 14 "MMU.h"
void MMU_SetLimit(int ); 
#line 17 "MMU.h"
int MMU_GetBase(); 
#line 18 "MMU.h"
int MMU_GetLimit(); 
# 5 "Processor.c" 2
# 5 "Clock.h" 1
void Clock_Update(); 
#line 6 "Clock.h"
int Clock_GetTime(); 
# 6 "Processor.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4
# 47 "/usr/include/string.h" 3 4
extern void *memcpy(void *__restrict __dest, const void *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 51 "/usr/include/string.h"
extern void *memmove(void *__dest, const void *__src,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 60 "/usr/include/string.h"
extern void *memccpy(void *__restrict __dest, const void *__restrict __src, int __c,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 66 "/usr/include/string.h"
extern void *memset(void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 70 "/usr/include/string.h"
extern int memcmp(const void *__s1, const void *__s2,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 97 "/usr/include/string.h"
extern void *memchr(const void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 96 "/usr/include/string.h" 3 4
# 130 "/usr/include/string.h" 3 4
extern char *strcpy(char *__restrict __dest, const char *__restrict __src) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 134 "/usr/include/string.h"
extern char *strncpy(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 138 "/usr/include/string.h"
extern char *strcat(char *__restrict __dest, const char *__restrict __src) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 141 "/usr/include/string.h"
extern char *strncat(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 145 "/usr/include/string.h"
extern int strcmp(const char *__s1, const char *__s2) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 148 "/usr/include/string.h"
extern int strncmp(const char *__s1, const char *__s2,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 152 "/usr/include/string.h"
extern int strcoll(const char *__s1, const char *__s2) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 156 "/usr/include/string.h"
extern  size_t strxfrm(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 1 "/usr/include/xlocale.h" 1 3 4
# 39 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct {struct __locale_data *__locales[13]; const unsigned short int *__ctype_b; const int *__ctype_tolower; const int *__ctype_toupper; const char *__names[13]; 
}*__locale_t; 
#line 42 "/usr/include/xlocale.h"
typedef  __locale_t locale_t; 
#line 167 "/usr/include/string.h"
extern int strcoll_l(const char *__s1, const char *__s2,  __locale_t __l) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
#line 170 "/usr/include/string.h"
extern  size_t strxfrm_l(char *__dest, const char *__src,  size_t __n,  __locale_t __l) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 177 "/usr/include/string.h"
extern char *strdup(const char *__s) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 185 "/usr/include/string.h"
extern char *strndup(const char *__string,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 164 "/usr/include/string.h" 2 3 4
# 211 "/usr/include/string.h" 3 4
# 237 "/usr/include/string.h" 3 4
extern char *strchr(const char *__s, int __c) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 264 "/usr/include/string.h"
extern char *strrchr(const char *__s, int __c) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 263 "/usr/include/string.h" 3 4
# 286 "/usr/include/string.h" 3 4
extern  size_t strcspn(const char *__s, const char *__reject) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 290 "/usr/include/string.h"
extern  size_t strspn(const char *__s, const char *__accept) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 316 "/usr/include/string.h"
extern char *strpbrk(const char *__s, const char *__accept) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
# 315 "/usr/include/string.h" 3 4
# 343 "/usr/include/string.h" 3 4
extern char *strstr(const char *__haystack, const char *__needle) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 349 "/usr/include/string.h"
extern char *strtok(char *__restrict __s, const char *__restrict __delim) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 357 "/usr/include/string.h"
extern char *__strtok_r(char *__restrict __s, const char *__restrict __delim, char **__restrict __save_ptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 361 "/usr/include/string.h"
extern char *strtok_r(char *__restrict __s, const char *__restrict __delim, char **__restrict __save_ptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 400 "/usr/include/string.h"
extern  size_t strlen(const char *__s) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 407 "/usr/include/string.h"
extern  size_t strnlen(const char *__string,  size_t __maxlen) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 413 "/usr/include/string.h"
extern char *strerror(int __errnum) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 397 "/usr/include/string.h" 3 4
# 429 "/usr/include/string.h" 3 4
extern int strerror_r(int __errnum, char *__buf,  size_t __buflen) __asm__ ("""__xpg_strerror_r") __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 445 "/usr/include/string.h"
extern char *strerror_l(int __errnum,  __locale_t __l) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 451 "/usr/include/string.h"
extern void __bzero(void *__s,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 456 "/usr/include/string.h"
extern void bcopy(const void *__src, void *__dest,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 459 "/usr/include/string.h"
extern void bzero(void *__s,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 463 "/usr/include/string.h"
extern int bcmp(const void *__s1, const void *__s2,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
# 445 "/usr/include/string.h" 3 4
# 490 "/usr/include/string.h" 3 4
extern char *index(const char *__s, int __c) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 518 "/usr/include/string.h"
extern char *rindex(const char *__s, int __c) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 523 "/usr/include/string.h"
extern int ffs(int __i) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
# 517 "/usr/include/string.h" 3 4
# 535 "/usr/include/string.h" 3 4
extern int strcasecmp(const char *__s1, const char *__s2) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 539 "/usr/include/string.h"
extern int strncasecmp(const char *__s1, const char *__s2,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 559 "/usr/include/string.h"
extern char *strsep(char **__restrict __stringp, const char *__restrict __delim) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 564 "/usr/include/string.h"
extern char *strsignal(int __sig) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 568 "/usr/include/string.h"
extern char *__stpcpy(char *__restrict __dest, const char *__restrict __src) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 570 "/usr/include/string.h"
extern char *stpcpy(char *__restrict __dest, const char *__restrict __src) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 576 "/usr/include/string.h"
extern char *__stpncpy(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 579 "/usr/include/string.h"
extern char *stpncpy(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
# 557 "/usr/include/string.h" 3 4
# 644 "/usr/include/string.h" 3 4
# 11 "Processor.c" 2
void Processor_FetchInstruction(); 
#line 12 "Processor.c"
void Processor_DecodeAndExecuteInstruction(); 
#line 13 "Processor.c"
void Processor_ManageInterrupts(); 
#line 14 "Processor.c"
void Processor_RaiseInterrupt(const unsigned int ); 
#line 15 "Processor.c"
void Processor_ACKInterrupt(const unsigned int ); 
#line 16 "Processor.c"
unsigned int Processor_GetInterruptLineStatus(const unsigned int ); 
#line 17 "Processor.c"
void Processor_ActivatePSW_Bit(const unsigned int ); 
#line 18 "Processor.c"
void Processor_DeactivatePSW_Bit(const unsigned int ); 
#line 19 "Processor.c"
void Processor_UpdatePSW(); 
#line 20 "Processor.c"
void Processor_CheckOverflow(int , int ); 
#line 21 "Processor.c"
void Processor_ShowTime(char section); 
#line 22 "Processor.c"
void Processor_RaiseException(int typeOfException); 
#line 23 "Processor.c"
int Processor_GetRegisterB(); 
#line 28 "Processor.c"
int registerPC_CPU; 
#line 29 "Processor.c"
int registerAccumulator_CPU; 
#line 30 "Processor.c"
 MEMORYCELL registerIR_CPU; 
#line 31 "Processor.c"
unsigned int registerPSW_CPU = 128; 
#line 32 "Processor.c"
int registerMAR_CPU; 
#line 33 "Processor.c"
 MEMORYCELL registerMBR_CPU; 
#line 35 "Processor.c"
int registerA_CPU; 
#line 36 "Processor.c"
int registerB_CPU; 
#line 37 "Processor.c"
int interruptLines_CPU; 
#line 40 "Processor.c"
int interruptVectorTable[10]; 
#line 43 "Processor.c"
char pswmask[] = "----------------"; 
#line 46 "Processor.c"
void Processor_InitializeInterruptVectorTable(int interruptVectorInitialAddress)  
# 800 "ProcessorAspect.c"
{



# 805 "ProcessorAspect.c"
{

#line 47 "Processor.c"

#line 47 "Processor.c"
int i;
#line 48 "Processor.c"
for(i = 0;i < 10;i++) { interruptVectorTable[i] = interruptVectorInitialAddress - 1; } 
#line 51 "Processor.c"
interruptVectorTable[SYSCALL_BIT] = interruptVectorInitialAddress; 
#line 52 "Processor.c"
interruptVectorTable[EXCEPTION_BIT] = interruptVectorInitialAddress + 2; 
#line 53 "Processor.c"
interruptVectorTable[CLOCKINT_BIT] = interruptVectorInitialAddress + 4; 
# 820 "ProcessorAspect.c"

}

# 824 "ProcessorAspect.c"

}
 
  void __utac_acc__Aspect__5 (void);


#line 60 "Processor.c"
void Processor_InstructionCycleLoop()  
# 833 "ProcessorAspect.c"
{



# 838 "ProcessorAspect.c"
{

#line 67 "Processor.c"
while((!Processor_PSW_BitState(POWEROFF_BIT))) { { 
#line 63 "Processor.c"
Processor_FetchInstruction(); 
#line 64 "Processor.c"
Processor_DecodeAndExecuteInstruction(); 
#line 65 "Processor.c"
if (interruptLines_CPU && (!Processor_PSW_BitState(INTERRUPT_MASKED_BIT))){
Processor_ManageInterrupts(); }} } 
# 850 "ProcessorAspect.c"

}

{
__utac_acc__Aspect__5();

}

# 859 "ProcessorAspect.c"

}
 
  void __utac_acc__Aspect__1 (void);


#line 71 "Processor.c"
void Processor_FetchInstruction()  
# 868 "ProcessorAspect.c"
{



{
__utac_acc__Aspect__1();

}

# 878 "ProcessorAspect.c"
{

#line 74 "Processor.c"
registerMAR_CPU = registerPC_CPU; 
#line 76 "Processor.c"
Buses_write_AddressBus_From_To(CPU, MMU); 
#line 78 "Processor.c"
if (MMU_readMemory() == 1){
{ 
#line 81 "Processor.c"
memcpy(((void *)((&registerIR_CPU))), ((void *)((&registerMBR_CPU))), sizeof ( MEMORYCELL )); 
#line 84 "Processor.c"
Processor_ShowTime('h'); 
#line 85 "Processor.c"
ComputerSystem_DebugMessage(1, 'h', registerIR_CPU.operationCode, registerIR_CPU.operand1, registerIR_CPU.operand2); } }else{
{ 
#line 89 "Processor.c"
Processor_ShowTime('h'); 
#line 90 "Processor.c"
ComputerSystem_DebugMessage(2, 'h'); } }
# 899 "ProcessorAspect.c"

}

# 903 "ProcessorAspect.c"

}
 
  void __utac_acc__Aspect__2 (void);


  void __utac_acc__Aspect__2 (void);


#line 96 "Processor.c"
void Processor_DecodeAndExecuteInstruction()  
# 915 "ProcessorAspect.c"
{



# 920 "ProcessorAspect.c"
{

#line 97 "Processor.c"

#line 97 "Processor.c"
int tempAcc;
#line 99 "Processor.c"
Processor_DeactivatePSW_Bit(OVERFLOW_BIT); 
#line 101 "Processor.c"
switch(registerIR_CPU.operationCode){ { 
#line 105 "Processor.c"
case 'a': registerAccumulator_CPU = registerIR_CPU.operand1 + registerIR_CPU.operand2; 
#line 106 "Processor.c"
Processor_CheckOverflow(registerIR_CPU.operand1, registerIR_CPU.operand2); 
#line 107 "Processor.c"
registerPC_CPU++; 
#line 108 "Processor.c"
break; 
#line 111 "Processor.c"
case 's': registerAccumulator_CPU = registerIR_CPU.operand1 - registerIR_CPU.operand2; 
#line 113 "Processor.c"
Processor_CheckOverflow(registerIR_CPU.operand1, (-registerIR_CPU.operand2)); 
#line 114 "Processor.c"
registerPC_CPU++; 
#line 115 "Processor.c"
break; 
#line 118 "Processor.c"
case 'd': if (registerIR_CPU.operand2 == 0){
{ 
#line 120 "Processor.c"
Processor_RaiseException(DIVISIONBYZERO); } }else{
{ 
#line 122 "Processor.c"
registerAccumulator_CPU = registerIR_CPU.operand1 / registerIR_CPU.operand2; 
#line 123 "Processor.c"
registerPC_CPU++; } }
#line 125 "Processor.c"
break; 
#line 128 "Processor.c"
case 't': Processor_RaiseInterrupt(SYSCALL_BIT); 
#line 130 "Processor.c"
registerA_CPU = registerIR_CPU.operand1; 
#line 131 "Processor.c"
registerPC_CPU++; 
#line 132 "Processor.c"
break; 
#line 135 "Processor.c"
case 'n': registerPC_CPU++; 
#line 137 "Processor.c"
break; 
#line 140 "Processor.c"
case 'j': registerPC_CPU += registerIR_CPU.operand1; 
#line 142 "Processor.c"
break; 
#line 145 "Processor.c"
case 'z': if (Processor_PSW_BitState(ZERO_BIT)){
registerPC_CPU += registerIR_CPU.operand1; }else{
registerPC_CPU++; }
#line 150 "Processor.c"
break; 
#line 153 "Processor.c"
case 'w': registerMBR_CPU.operationCode = registerMBR_CPU.operand1 = registerMBR_CPU.operand2 = registerAccumulator_CPU; 
#line 155 "Processor.c"
registerMAR_CPU = registerIR_CPU.operand1; 
#line 157 "Processor.c"
Buses_write_DataBus_From_To(CPU, MAINMEMORY); 
#line 159 "Processor.c"
Buses_write_AddressBus_From_To(CPU, MMU); 
#line 161 "Processor.c"
MMU_writeMemory(); 
#line 162 "Processor.c"
registerPC_CPU++; 
#line 163 "Processor.c"
break; 
#line 166 "Processor.c"
case 'r': registerMAR_CPU = registerIR_CPU.operand1; 
#line 169 "Processor.c"
Buses_write_AddressBus_From_To(CPU, MMU); 
#line 171 "Processor.c"
MMU_readMemory(); 
#line 173 "Processor.c"
registerAccumulator_CPU = registerMBR_CPU.operand1; 
#line 174 "Processor.c"
registerPC_CPU++; 
#line 175 "Processor.c"
break; 
#line 178 "Processor.c"
case 'i': tempAcc = registerAccumulator_CPU; 
#line 180 "Processor.c"
registerAccumulator_CPU += registerIR_CPU.operand1; 
#line 181 "Processor.c"
Processor_CheckOverflow(tempAcc, registerIR_CPU.operand1); 
#line 182 "Processor.c"
registerPC_CPU++; 
#line 183 "Processor.c"
break; 
#line 186 "Processor.c"
case 'h': if ((!Processor_PSW_BitState(EXECUTION_MODE_BIT))){
{ 
#line 188 "Processor.c"
Processor_RaiseException(INVALIDPROCESSORMODE); } }
#line 190 "Processor.c"
Processor_ActivatePSW_Bit(POWEROFF_BIT); 
#line 191 "Processor.c"
break; 
#line 193 "Processor.c"
case 'm': registerMAR_CPU = registerIR_CPU.operand2; 
#line 195 "Processor.c"
Buses_write_AddressBus_From_To(CPU, MMU); 
#line 197 "Processor.c"
MMU_readMemory(); 
#line 199 "Processor.c"
registerAccumulator_CPU = registerIR_CPU.operand1 + registerIR_CPU.operand1; 
#line 200 "Processor.c"
registerPC_CPU++; 
#line 201 "Processor.c"
break; 
#line 204 "Processor.c"
case 'o': if ((!Processor_PSW_BitState(EXECUTION_MODE_BIT))){
{ 
#line 208 "Processor.c"
Processor_RaiseException(INVALIDPROCESSORMODE); } }
#line 210 "Processor.c"
ComputerSystem_DebugMessage(3, 'h', registerPC_CPU, registerAccumulator_CPU, registerPSW_CPU, Processor_ShowPSW()); 
#line 212 "Processor.c"
OperatingSystem_InterruptLogic(registerIR_CPU.operand1); 
#line 213 "Processor.c"
registerPC_CPU++; 
#line 215 "Processor.c"
Processor_UpdatePSW(); 
#line 216 "Processor.c"

{
__utac_acc__Aspect__2();

}
return ; 
 
#line 219 "Processor.c"
case 'y': if ((!Processor_PSW_BitState(EXECUTION_MODE_BIT))){
{ 
#line 221 "Processor.c"
Processor_RaiseException(INVALIDPROCESSORMODE); } }
#line 223 "Processor.c"
registerPC_CPU = Processor_CopyFromSystemStack(300 - 1); 
#line 224 "Processor.c"
registerPSW_CPU = Processor_CopyFromSystemStack(300 - 2); 
#line 225 "Processor.c"
break; 
#line 228 "Processor.c"
default: Processor_RaiseException(INVALIDINSTRUCTION); 
#line 230 "Processor.c"
break; } } 
#line 234 "Processor.c"
Processor_UpdatePSW(); 
#line 239 "Processor.c"
ComputerSystem_DebugMessage(130, 'h', OperatingSystem_GetExecutingProcessID(), registerPC_CPU, registerAccumulator_CPU, registerPSW_CPU, Processor_ShowPSW()); 
# 1078 "ProcessorAspect.c"

}

{
__utac_acc__Aspect__2();

}

# 1087 "ProcessorAspect.c"

}
 
#line 244 "Processor.c"
void Processor_ManageInterrupts()  
# 1093 "ProcessorAspect.c"
{



# 1098 "ProcessorAspect.c"
{

#line 246 "Processor.c"

#line 246 "Processor.c"
int i;
#line 248 "Processor.c"
for(i = 0;i < 10;i++) { if (Processor_GetInterruptLineStatus(i)){
{ 
#line 252 "Processor.c"
Processor_ACKInterrupt(i); 
#line 254 "Processor.c"
Processor_CopyInSystemStack(300 - 1, registerPC_CPU); 
#line 255 "Processor.c"
Processor_CopyInSystemStack(300 - 2, registerPSW_CPU); 
#line 257 "Processor.c"
Processor_ActivatePSW_Bit(INTERRUPT_MASKED_BIT); 
#line 259 "Processor.c"
Processor_ActivatePSW_Bit(EXECUTION_MODE_BIT); 
#line 261 "Processor.c"
registerPC_CPU = interruptVectorTable[i]; 
#line 262 "Processor.c"
break; } }} 
# 1122 "ProcessorAspect.c"

}

# 1126 "ProcessorAspect.c"

}
 
#line 267 "Processor.c"
void Processor_UpdatePSW()  
# 1132 "ProcessorAspect.c"
{



# 1137 "ProcessorAspect.c"
{

#line 276 "Processor.c"
if (registerAccumulator_CPU == 0){
{ 
#line 272 "Processor.c"
if ((!Processor_PSW_BitState(ZERO_BIT))){
Processor_ActivatePSW_Bit(ZERO_BIT); }} }else{
{ 
#line 276 "Processor.c"
if (Processor_PSW_BitState(ZERO_BIT)){
Processor_DeactivatePSW_Bit(ZERO_BIT); }} }
#line 279 "Processor.c"
if (registerAccumulator_CPU < 0){
{ 
#line 282 "Processor.c"
if ((!Processor_PSW_BitState(NEGATIVE_BIT))){
Processor_ActivatePSW_Bit(NEGATIVE_BIT); }} }else{
{ 
#line 286 "Processor.c"
if (Processor_PSW_BitState(NEGATIVE_BIT)){
Processor_DeactivatePSW_Bit(NEGATIVE_BIT); }} }
# 1160 "ProcessorAspect.c"

}

# 1164 "ProcessorAspect.c"

}
 
#line 291 "Processor.c"
void Processor_CheckOverflow(int op1, int op2)  
# 1170 "ProcessorAspect.c"
{



# 1175 "ProcessorAspect.c"
{

#line 295 "Processor.c"
if ((op1 > 0 && op2 > 0 && registerAccumulator_CPU < 0) || (op1 < 0 && op2 < 0 && registerAccumulator_CPU > 0)){
Processor_ActivatePSW_Bit(OVERFLOW_BIT); }
# 1181 "ProcessorAspect.c"

}

# 1185 "ProcessorAspect.c"

}
 
#line 298 "Processor.c"
void Processor_CopyInSystemStack(int physicalMemoryAddress, int data)  
# 1191 "ProcessorAspect.c"
{



# 1196 "ProcessorAspect.c"
{

#line 300 "Processor.c"
registerMBR_CPU.operationCode = registerMBR_CPU.operand1 = registerMBR_CPU.operand2 = data; 
#line 301 "Processor.c"
registerMAR_CPU = physicalMemoryAddress; 
#line 302 "Processor.c"
Buses_write_AddressBus_From_To(CPU, MAINMEMORY); 
#line 303 "Processor.c"
Buses_write_DataBus_From_To(CPU, MAINMEMORY); 
#line 304 "Processor.c"
MainMemory_writeMemory(); 
# 1209 "ProcessorAspect.c"

}

# 1213 "ProcessorAspect.c"

}
 
#line 308 "Processor.c"
int Processor_CopyFromSystemStack(int physicalMemoryAddress)  
# 1219 "ProcessorAspect.c"
{
# 1221 "ProcessorAspect.c"
int retValue_acc;




# 1227 "ProcessorAspect.c"
{

#line 310 "Processor.c"
registerMAR_CPU = physicalMemoryAddress; 
#line 311 "Processor.c"
Buses_write_AddressBus_From_To(CPU, MAINMEMORY); 
#line 312 "Processor.c"
MainMemory_readMemory(); 
#line 313 "Processor.c"

# 1238 "ProcessorAspect.c"
retValue_acc = registerMBR_CPU.operand1;
# 1240 "ProcessorAspect.c"
return (int )retValue_acc;
 
# 1243 "ProcessorAspect.c"

}

# 1247 "ProcessorAspect.c"
return (int )retValue_acc;

# 1250 "ProcessorAspect.c"

}
 
#line 318 "Processor.c"
void Processor_RaiseInterrupt(const unsigned int interruptNumber)  
# 1256 "ProcessorAspect.c"
{



# 1261 "ProcessorAspect.c"
{

#line 319 "Processor.c"

#line 319 "Processor.c"
unsigned int mask = 1;
#line 321 "Processor.c"
mask = mask << interruptNumber; 
#line 322 "Processor.c"
interruptLines_CPU = interruptLines_CPU | mask; 
# 1272 "ProcessorAspect.c"

}

# 1276 "ProcessorAspect.c"

}
 
#line 326 "Processor.c"
void Processor_ACKInterrupt(const unsigned int interruptNumber)  
# 1282 "ProcessorAspect.c"
{



# 1287 "ProcessorAspect.c"
{

#line 327 "Processor.c"

#line 327 "Processor.c"
unsigned int mask = 1;
#line 329 "Processor.c"
mask = mask << interruptNumber; 
#line 330 "Processor.c"
mask = (~mask); 
#line 332 "Processor.c"
interruptLines_CPU = interruptLines_CPU & mask; 
# 1300 "ProcessorAspect.c"

}

# 1304 "ProcessorAspect.c"

}
 
#line 336 "Processor.c"
unsigned int Processor_GetInterruptLineStatus(const unsigned int interruptNumber)  
# 1310 "ProcessorAspect.c"
{
# 1312 "ProcessorAspect.c"
unsigned int retValue_acc;




# 1318 "ProcessorAspect.c"
{

#line 337 "Processor.c"

#line 337 "Processor.c"
unsigned int mask = 1;
#line 339 "Processor.c"
mask = mask << interruptNumber; 
#line 340 "Processor.c"

# 1329 "ProcessorAspect.c"
retValue_acc = (interruptLines_CPU & mask) >> interruptNumber;
# 1331 "ProcessorAspect.c"
return (unsigned int )retValue_acc;
 
# 1334 "ProcessorAspect.c"

}

# 1338 "ProcessorAspect.c"
return (unsigned int )retValue_acc;

# 1341 "ProcessorAspect.c"

}
 
#line 344 "Processor.c"
void Processor_ActivatePSW_Bit(const unsigned int nbit)  
# 1347 "ProcessorAspect.c"
{



# 1352 "ProcessorAspect.c"
{

#line 345 "Processor.c"

#line 345 "Processor.c"
unsigned int mask = 1;
#line 347 "Processor.c"
mask = mask << nbit; 
#line 349 "Processor.c"
registerPSW_CPU = registerPSW_CPU | mask; 
# 1363 "ProcessorAspect.c"

}

# 1367 "ProcessorAspect.c"

}
 
#line 353 "Processor.c"
void Processor_DeactivatePSW_Bit(const unsigned int nbit)  
# 1373 "ProcessorAspect.c"
{



# 1378 "ProcessorAspect.c"
{

#line 354 "Processor.c"

#line 354 "Processor.c"
unsigned int mask = 1;
#line 356 "Processor.c"
mask = mask << nbit; 
#line 357 "Processor.c"
mask = (~mask); 
#line 359 "Processor.c"
registerPSW_CPU = registerPSW_CPU & mask; 
# 1391 "ProcessorAspect.c"

}

# 1395 "ProcessorAspect.c"

}
 
#line 363 "Processor.c"
unsigned int Processor_PSW_BitState(const unsigned int nbit)  
# 1401 "ProcessorAspect.c"
{
# 1403 "ProcessorAspect.c"
unsigned int retValue_acc;




# 1409 "ProcessorAspect.c"
{

#line 364 "Processor.c"

#line 364 "Processor.c"
unsigned int mask = 1;
#line 366 "Processor.c"
mask = mask << nbit; 
#line 367 "Processor.c"

# 1420 "ProcessorAspect.c"
retValue_acc = (registerPSW_CPU & mask) >> nbit;
# 1422 "ProcessorAspect.c"
return (unsigned int )retValue_acc;
 
# 1425 "ProcessorAspect.c"

}

# 1429 "ProcessorAspect.c"
return (unsigned int )retValue_acc;

# 1432 "ProcessorAspect.c"

}
 
#line 371 "Processor.c"
int Processor_GetMAR()  
# 1438 "ProcessorAspect.c"
{
# 1440 "ProcessorAspect.c"
int retValue_acc;




# 1446 "ProcessorAspect.c"
{

#line 372 "Processor.c"

# 1451 "ProcessorAspect.c"
retValue_acc = registerMAR_CPU;
# 1453 "ProcessorAspect.c"
return (int )retValue_acc;
 
# 1456 "ProcessorAspect.c"

}

# 1460 "ProcessorAspect.c"
return (int )retValue_acc;

# 1463 "ProcessorAspect.c"

}
 
#line 376 "Processor.c"
void Processor_SetMAR(int data)  
# 1469 "ProcessorAspect.c"
{



# 1474 "ProcessorAspect.c"
{

#line 377 "Processor.c"
registerMAR_CPU = data; 
# 1479 "ProcessorAspect.c"

}

# 1483 "ProcessorAspect.c"

}
 
#line 381 "Processor.c"
void Processor_GetMBR( MEMORYCELL *toRegister)  
# 1489 "ProcessorAspect.c"
{



# 1494 "ProcessorAspect.c"
{

#line 382 "Processor.c"
memcpy(((void *)toRegister), ((void *)((&registerMBR_CPU))), sizeof ( MEMORYCELL )); 
# 1499 "ProcessorAspect.c"

}

# 1503 "ProcessorAspect.c"

}
 
#line 386 "Processor.c"
void Processor_SetMBR( MEMORYCELL *fromRegister)  
# 1509 "ProcessorAspect.c"
{



# 1514 "ProcessorAspect.c"
{

#line 387 "Processor.c"
memcpy(((void *)((&registerMBR_CPU))), ((void *)fromRegister), sizeof ( MEMORYCELL )); 
# 1519 "ProcessorAspect.c"

}

# 1523 "ProcessorAspect.c"

}
 
#line 391 "Processor.c"
int Processor_GetMBR_Value()  
# 1529 "ProcessorAspect.c"
{
# 1531 "ProcessorAspect.c"
int retValue_acc;




# 1537 "ProcessorAspect.c"
{

#line 392 "Processor.c"

# 1542 "ProcessorAspect.c"
retValue_acc = registerMBR_CPU.operationCode;
# 1544 "ProcessorAspect.c"
return (int )retValue_acc;
 
# 1547 "ProcessorAspect.c"

}

# 1551 "ProcessorAspect.c"
return (int )retValue_acc;

# 1554 "ProcessorAspect.c"

}
 
#line 396 "Processor.c"
void Processor_SetAccumulator(int acc)  
# 1560 "ProcessorAspect.c"
{



# 1565 "ProcessorAspect.c"
{

#line 397 "Processor.c"
registerAccumulator_CPU = acc; 
# 1570 "ProcessorAspect.c"

}

# 1574 "ProcessorAspect.c"

}
 
#line 401 "Processor.c"
void Processor_SetPC(int pc)  
# 1580 "ProcessorAspect.c"
{



# 1585 "ProcessorAspect.c"
{

#line 402 "Processor.c"
registerPC_CPU = pc; 
# 1590 "ProcessorAspect.c"

}

# 1594 "ProcessorAspect.c"

}
 
#line 411 "Processor.c"
int Processor_GetAccumulator()  
# 1600 "ProcessorAspect.c"
{
# 1602 "ProcessorAspect.c"
int retValue_acc;




# 1608 "ProcessorAspect.c"
{

#line 412 "Processor.c"

# 1613 "ProcessorAspect.c"
retValue_acc = registerAccumulator_CPU;
# 1615 "ProcessorAspect.c"
return (int )retValue_acc;
 
# 1618 "ProcessorAspect.c"

}

# 1622 "ProcessorAspect.c"
return (int )retValue_acc;

# 1625 "ProcessorAspect.c"

}
 
#line 419 "Processor.c"
int Processor_GetRegisterA()  
# 1631 "ProcessorAspect.c"
{
# 1633 "ProcessorAspect.c"
int retValue_acc;




# 1639 "ProcessorAspect.c"
{

#line 420 "Processor.c"

# 1644 "ProcessorAspect.c"
retValue_acc = registerA_CPU;
# 1646 "ProcessorAspect.c"
return (int )retValue_acc;
 
# 1649 "ProcessorAspect.c"

}

# 1653 "ProcessorAspect.c"
return (int )retValue_acc;

# 1656 "ProcessorAspect.c"

}
 
#line 423 "Processor.c"
int Processor_GetRegisterB()  
# 1662 "ProcessorAspect.c"
{
# 1664 "ProcessorAspect.c"
int retValue_acc;




# 1670 "ProcessorAspect.c"
{

#line 424 "Processor.c"

# 1675 "ProcessorAspect.c"
retValue_acc = registerB_CPU;
# 1677 "ProcessorAspect.c"
return (int )retValue_acc;
 
# 1680 "ProcessorAspect.c"

}

# 1684 "ProcessorAspect.c"
return (int )retValue_acc;

# 1687 "ProcessorAspect.c"

}
 
#line 428 "Processor.c"
void Processor_SetPSW(unsigned int psw)  
# 1693 "ProcessorAspect.c"
{



# 1698 "ProcessorAspect.c"
{

#line 429 "Processor.c"
registerPSW_CPU = psw; 
# 1703 "ProcessorAspect.c"

}

# 1707 "ProcessorAspect.c"

}
 
#line 433 "Processor.c"
unsigned int Processor_GetPSW()  
# 1713 "ProcessorAspect.c"
{
# 1715 "ProcessorAspect.c"
unsigned int retValue_acc;




# 1721 "ProcessorAspect.c"
{

#line 434 "Processor.c"

# 1726 "ProcessorAspect.c"
retValue_acc = registerPSW_CPU;
# 1728 "ProcessorAspect.c"
return (unsigned int )retValue_acc;
 
# 1731 "ProcessorAspect.c"

}

# 1735 "ProcessorAspect.c"
return (unsigned int )retValue_acc;

# 1738 "ProcessorAspect.c"

}
 
#line 437 "Processor.c"
char *Processor_ShowPSW()  
# 1744 "ProcessorAspect.c"
{
# 1746 "ProcessorAspect.c"
char* retValue_acc;




# 1752 "ProcessorAspect.c"
{

#line 438 "Processor.c"
strcpy(pswmask, "----------------"); 
#line 439 "Processor.c"

#line 439 "Processor.c"
int tam = strlen(pswmask) - 1;
#line 440 "Processor.c"
if (Processor_PSW_BitState(EXECUTION_MODE_BIT)){
pswmask[tam - EXECUTION_MODE_BIT] = 'X'; }
#line 442 "Processor.c"
if (Processor_PSW_BitState(OVERFLOW_BIT)){
pswmask[tam - OVERFLOW_BIT] = 'F'; }
#line 444 "Processor.c"
if (Processor_PSW_BitState(NEGATIVE_BIT)){
pswmask[tam - NEGATIVE_BIT] = 'N'; }
#line 446 "Processor.c"
if (Processor_PSW_BitState(ZERO_BIT)){
pswmask[tam - ZERO_BIT] = 'Z'; }
#line 448 "Processor.c"
if (Processor_PSW_BitState(POWEROFF_BIT)){
pswmask[tam - POWEROFF_BIT] = 'S'; }
#line 450 "Processor.c"
if (Processor_PSW_BitState(INTERRUPT_MASKED_BIT)){
pswmask[tam - INTERRUPT_MASKED_BIT] = 'M'; }
#line 452 "Processor.c"

# 1781 "ProcessorAspect.c"
retValue_acc = pswmask;
# 1783 "ProcessorAspect.c"
return (char* )retValue_acc;
 
# 1786 "ProcessorAspect.c"

}

# 1790 "ProcessorAspect.c"
return (char* )retValue_acc;

# 1793 "ProcessorAspect.c"

}
 
#line 457 "Processor.c"
void Processor_ShowTime(char section)  
# 1799 "ProcessorAspect.c"
{



# 1804 "ProcessorAspect.c"
{

#line 458 "Processor.c"
ComputerSystem_DebugMessage(98, section, (Processor_PSW_BitState(EXECUTION_MODE_BIT)?"":"")); 
#line 459 "Processor.c"
ComputerSystem_DebugMessage((Processor_PSW_BitState(EXECUTION_MODE_BIT)?5:4), section, Clock_GetTime()); 
# 1811 "ProcessorAspect.c"

}

# 1815 "ProcessorAspect.c"

}
 
#line 463 "Processor.c"
void Processor_RaiseException(int typeOfException)  
# 1821 "ProcessorAspect.c"
{



# 1826 "ProcessorAspect.c"
{

#line 464 "Processor.c"
Processor_RaiseInterrupt(EXCEPTION_BIT); 
#line 465 "Processor.c"
registerB_CPU = typeOfException; 
# 1833 "ProcessorAspect.c"

}

# 1837 "ProcessorAspect.c"

}
 
