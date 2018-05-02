
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


# 1 "OperatingSystem.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "OperatingSystem.c" 
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
# 2 "OperatingSystem.c" 2
# 1 "OperatingSystemBase.h" 1
# 9 "OperatingSystemBase.h" 
int OperatingSystem_ObtainAnEntryInTheProcessTable(); 
#line 10 "OperatingSystemBase.h"
int OperatingSystem_ObtainProgramSize( FILE **, char *); 
#line 11 "OperatingSystemBase.h"
int OperatingSystem_ObtainPriority( FILE *); 
#line 12 "OperatingSystemBase.h"
int OperatingSystem_LoadProgram( FILE *, int , int ); 
#line 13 "OperatingSystemBase.h"
void OperatingSystem_ReadyToShutdown(); 
#line 14 "OperatingSystemBase.h"
void OperatingSystem_ShowTime(char ); 
#line 15 "OperatingSystemBase.h"
void OperatingSystem_PrintStatus(); 
#line 16 "OperatingSystemBase.h"
void OperatingSystem_PrintReadyToRunQueue(); 
#line 17 "OperatingSystemBase.h"
void OperatingSystem_PrepareTeachersDaemons(); 
#line 18 "OperatingSystemBase.h"
int OperatingSystem_IsThereANewProgram(); 
#line 19 "OperatingSystemBase.h"
int OperatingSystem_InitializePartitionTable(); 
#line 20 "OperatingSystemBase.h"
void OperatingSystem_ShowPartitionTable(char *); 
#line 23 "OperatingSystemBase.h"
extern int sleepingProcessesQueue[4]; 
#line 24 "OperatingSystemBase.h"
extern int numberOfSleepingProcesses; 
#line 26 "OperatingSystemBase.h"
extern int baseDaemonsInProgramList; 
#line 34 "OperatingSystemBase.h"
typedef struct {int occupied; int initAddress; int size; int PID; 
}PARTITIONDATA; 
#line 37 "OperatingSystemBase.h"
extern  PARTITIONDATA partitionsTable[4 * 2]; 
# 3 "OperatingSystem.c" 2
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
# 4 "OperatingSystem.c" 2
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
# 5 "OperatingSystem.c" 2
# 4 "Buses.h" 1
enum BusConnection {MAINMEMORY,MMU,CPU,INPUTDEVICE,OUTPUTDEVICE}; 
#line 10 "Buses.h"
int Buses_write_AddressBus_From_To(int , int ); 
#line 11 "Buses.h"
int Buses_write_DataBus_From_To(int , int ); 
# 6 "OperatingSystem.c" 2
# 1 "Heap.h" 1
# 17 "Heap.h" 
int Heap_add(int , int ([]), int , int *, int ); 
#line 25 "Heap.h"
int Heap_poll(int ([]), int , int *); 
#line 32 "Heap.h"
int Heap_compare(int , int , int ); 
#line 34 "Heap.h"
int Heap_getFirst(int ([]), int ); 
# 7 "OperatingSystem.c" 2
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
# 8 "OperatingSystem.c" 2
# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4
# 39 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int __bswap_32(unsigned int __bsx)  
# 809 "OperatingSystemAspect.c"
{
# 811 "OperatingSystemAspect.c"
unsigned int retValue_acc;




# 817 "OperatingSystemAspect.c"
{

#line 47 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 822 "OperatingSystemAspect.c"
retValue_acc = __builtin_bswap32(__bsx);
# 824 "OperatingSystemAspect.c"
return (unsigned int )retValue_acc;
 
# 827 "OperatingSystemAspect.c"

}

# 831 "OperatingSystemAspect.c"
return (unsigned int )retValue_acc;

# 834 "OperatingSystemAspect.c"

}
 
#line 109 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
static __inline  __uint64_t __bswap_64( __uint64_t __bsx)  
# 840 "OperatingSystemAspect.c"
{
# 842 "OperatingSystemAspect.c"
__uint64_t retValue_acc;




# 848 "OperatingSystemAspect.c"
{

#line 110 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 853 "OperatingSystemAspect.c"
retValue_acc = __builtin_bswap64(__bsx);
# 855 "OperatingSystemAspect.c"
return (__uint64_t )retValue_acc;
 
# 858 "OperatingSystemAspect.c"

}

# 862 "OperatingSystemAspect.c"
return (__uint64_t )retValue_acc;

# 865 "OperatingSystemAspect.c"

}
 
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 61 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/ctype.h" 2 3 4
enum {_ISupper=(((0) < 8?((1 << (0)) << 8):((1 << (0)) >> 8))),_ISlower=(((1) < 8?((1 << (1)) << 8):((1 << (1)) >> 8))),_ISalpha=(((2) < 8?((1 << (2)) << 8):((1 << (2)) >> 8))),_ISdigit=(((3) < 8?((1 << (3)) << 8):((1 << (3)) >> 8))),_ISxdigit=(((4) < 8?((1 << (4)) << 8):((1 << (4)) >> 8))),_ISspace=(((5) < 8?((1 << (5)) << 8):((1 << (5)) >> 8))),_ISprint=(((6) < 8?((1 << (6)) << 8):((1 << (6)) >> 8))),_ISgraph=(((7) < 8?((1 << (7)) << 8):((1 << (7)) >> 8))),_ISblank=(((8) < 8?((1 << (8)) << 8):((1 << (8)) >> 8))),_IScntrl=(((9) < 8?((1 << (9)) << 8):((1 << (9)) >> 8))),_ISpunct=(((10) < 8?((1 << (10)) << 8):((1 << (10)) >> 8))),_ISalnum=(((11) < 8?((1 << (11)) << 8):((1 << (11)) >> 8)))}; 
#line 80 "/usr/include/ctype.h"
extern const unsigned short int **__ctype_b_loc(void ) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 82 "/usr/include/ctype.h"
extern const  __int32_t **__ctype_tolower_loc(void ) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 84 "/usr/include/ctype.h"
extern const  __int32_t **__ctype_toupper_loc(void ) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
# 79 "/usr/include/ctype.h" 3 4
# 110 "/usr/include/ctype.h" 3 4
extern int isalnum(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 111 "/usr/include/ctype.h"
extern int isalpha(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 112 "/usr/include/ctype.h"
extern int iscntrl(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 113 "/usr/include/ctype.h"
extern int isdigit(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 114 "/usr/include/ctype.h"
extern int islower(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 115 "/usr/include/ctype.h"
extern int isgraph(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 116 "/usr/include/ctype.h"
extern int isprint(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 117 "/usr/include/ctype.h"
extern int ispunct(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 118 "/usr/include/ctype.h"
extern int isspace(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 119 "/usr/include/ctype.h"
extern int isupper(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 120 "/usr/include/ctype.h"
extern int isxdigit(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 124 "/usr/include/ctype.h"
extern int tolower(int __c) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 127 "/usr/include/ctype.h"
extern int toupper(int __c) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 136 "/usr/include/ctype.h"
extern int isblank(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 150 "/usr/include/ctype.h"
extern int isascii(int __c) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 154 "/usr/include/ctype.h"
extern int toascii(int __c) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 158 "/usr/include/ctype.h"
extern int _toupper(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 159 "/usr/include/ctype.h"
extern int _tolower(int ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 150 "/usr/include/ctype.h" 3 4
# 271 "/usr/include/ctype.h" 3 4
extern int isalnum_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 272 "/usr/include/ctype.h"
extern int isalpha_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 273 "/usr/include/ctype.h"
extern int iscntrl_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 274 "/usr/include/ctype.h"
extern int isdigit_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 275 "/usr/include/ctype.h"
extern int islower_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 276 "/usr/include/ctype.h"
extern int isgraph_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 277 "/usr/include/ctype.h"
extern int isprint_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 278 "/usr/include/ctype.h"
extern int ispunct_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 279 "/usr/include/ctype.h"
extern int isspace_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 280 "/usr/include/ctype.h"
extern int isupper_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 281 "/usr/include/ctype.h"
extern int isxdigit_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 283 "/usr/include/ctype.h"
extern int isblank_l(int ,  __locale_t ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 287 "/usr/include/ctype.h"
extern int __tolower_l(int __c,  __locale_t __l) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 288 "/usr/include/ctype.h"
extern int tolower_l(int __c,  __locale_t __l) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 291 "/usr/include/ctype.h"
extern int __toupper_l(int __c,  __locale_t __l) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 292 "/usr/include/ctype.h"
extern int toupper_l(int __c,  __locale_t __l) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 347 "/usr/include/ctype.h" 3 4
# 9 "OperatingSystem.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 324 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 3 4
typedef int wchar_t; 
# 33 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 55 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum {P_ALL,P_PID,P_PGID}idtype_t; 
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 97 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
union wait {int w_status; struct {unsigned int __w_termsig:7; unsigned int __w_coredump:1; unsigned int __w_retcode:8; unsigned int :16; 
}__wait_terminated; struct {unsigned int __w_stopval:8; unsigned int __w_stopsig:8; unsigned int :16; 
}__wait_stopped; 
}; 
# 43 "/usr/include/stdlib.h" 2 3 4
# 71 "/usr/include/stdlib.h" 3 4
typedef union {union wait *__uptr; int *__iptr; 
}__WAIT_STATUS __attribute__  (( __transparent_union__ )) ; 
#line 101 "/usr/include/stdlib.h"
typedef struct {int quot; int rem; 
}div_t; 
#line 109 "/usr/include/stdlib.h"
typedef struct {long int quot; long int rem; 
}ldiv_t; 
#line 121 "/usr/include/stdlib.h"
 __extension__ typedef struct {long long int quot; long long int rem; 
}lldiv_t; 
# 95 "/usr/include/stdlib.h" 3 4
# 139 "/usr/include/stdlib.h" 3 4
extern  size_t __ctype_get_mb_cur_max(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 145 "/usr/include/stdlib.h"
extern double atof(const char *__nptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 148 "/usr/include/stdlib.h"
extern int atoi(const char *__nptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 151 "/usr/include/stdlib.h"
extern long int atol(const char *__nptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 158 "/usr/include/stdlib.h"
 __extension__ extern long long int atoll(const char *__nptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 166 "/usr/include/stdlib.h"
extern double strtod(const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 173 "/usr/include/stdlib.h"
extern float strtof(const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 177 "/usr/include/stdlib.h"
extern long double strtold(const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 185 "/usr/include/stdlib.h"
extern long int strtol(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 189 "/usr/include/stdlib.h"
extern unsigned long int strtoul(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 197 "/usr/include/stdlib.h"
 __extension__ extern long long int strtoq(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 202 "/usr/include/stdlib.h"
 __extension__ extern unsigned long long int strtouq(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 211 "/usr/include/stdlib.h"
 __extension__ extern long long int strtoll(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 216 "/usr/include/stdlib.h"
 __extension__ extern unsigned long long int strtoull(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 305 "/usr/include/stdlib.h"
extern char *l64a(long int __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 309 "/usr/include/stdlib.h"
extern long int a64l(const char *__s) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 305 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef  __u_char u_char; 
#line 34 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __u_short u_short; 
#line 35 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __u_int u_int; 
#line 36 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __u_long u_long; 
#line 37 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __quad_t quad_t; 
#line 38 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __u_quad_t u_quad_t; 
#line 39 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __fsid_t fsid_t; 
#line 44 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __loff_t loff_t; 
#line 48 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __ino_t ino_t; 
#line 60 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __dev_t dev_t; 
#line 65 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __gid_t gid_t; 
#line 70 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __mode_t mode_t; 
#line 75 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __nlink_t nlink_t; 
#line 80 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __uid_t uid_t; 
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef  __pid_t pid_t; 
#line 104 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __id_t id_t; 
#line 115 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __daddr_t daddr_t; 
#line 116 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __caddr_t caddr_t; 
#line 122 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __key_t key_t; 
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 59 "/usr/include/time.h" 3 4
typedef  __clock_t clock_t; 
#line 75 "/usr/include/time.h"
typedef  __time_t time_t; 
# 73 "/usr/include/time.h" 3 4
# 91 "/usr/include/time.h" 3 4
typedef  __clockid_t clockid_t; 
#line 103 "/usr/include/time.h"
typedef  __timer_t timer_t; 
# 103 "/usr/include/time.h" 3 4
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 150 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
typedef unsigned long int ulong; 
#line 151 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned short int ushort; 
#line 152 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int uint; 
#line 194 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 195 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 196 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 197 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 200 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int u_int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 201 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int u_int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 202 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int u_int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 203 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int u_int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 205 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int register_t __attribute__  (( __mode__ ( __word__ )  )) ; 
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t; 
#line 30 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
typedef struct {unsigned long int __val[(1024 / (8 * sizeof (unsigned long int )))]; 
}__sigset_t; 
#line 37 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef  __sigset_t sigset_t; 
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 124 "/usr/include/time.h" 3 4
struct timespec { __time_t tv_sec;  __syscall_slong_t tv_nsec; 
}; 
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval { __time_t tv_sec;  __suseconds_t tv_usec; 
}; 
#line 48 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef  __suseconds_t suseconds_t; 
#line 54 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef long int __fd_mask; 
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 75 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct { __fd_mask __fds_bits[1024 / (8 * ((int )sizeof ( __fd_mask )))]; 
}fd_set; 
#line 82 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef  __fd_mask fd_mask; 
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 109 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, struct timeval *__restrict __timeout); 
#line 122 "/usr/include/x86_64-linux-gnu/sys/select.h"
extern int pselect(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, const struct timespec *__restrict __timeout, const  __sigset_t *__restrict __sigmask); 
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
 __extension__ extern unsigned int gnu_dev_major(unsigned long long int __dev) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 31 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern unsigned int gnu_dev_minor(unsigned long long int __dev) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 35 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
# 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
typedef  __blksize_t blksize_t; 
#line 235 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __blkcnt_t blkcnt_t; 
#line 239 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __fsblkcnt_t fsblkcnt_t; 
#line 243 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __fsfilcnt_t fsfilcnt_t; 
# 270 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union pthread_attr_t {char __size[56]; long int __align; 
}; 
#line 69 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union pthread_attr_t pthread_attr_t; 
#line 79 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef struct __pthread_internal_list {struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; 
}__pthread_list_t; 
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 127 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union {struct __pthread_mutex_s {int __lock; unsigned int __count; int __owner; unsigned int __nusers; int __kind; short __spins; short __elision;  __pthread_list_t __list; 
}__data; char __size[40]; long int __align; 
}pthread_mutex_t; 
#line 133 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[4]; int __align; 
}pthread_mutexattr_t; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {struct {int __lock; unsigned int __futex;  __extension__ unsigned long long int __total_seq;  __extension__ unsigned long long int __wakeup_seq;  __extension__ unsigned long long int __woken_seq; void *__mutex; unsigned int __nwaiters; unsigned int __broadcast_seq; 
}__data; char __size[48];  __extension__ long long int __align; 
}pthread_cond_t; 
#line 159 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[4]; int __align; 
}pthread_condattr_t; 
#line 163 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t; 
#line 167 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef int pthread_once_t; 
#line 213 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {struct {int __lock; unsigned int __nr_readers; unsigned int __readers_wakeup; unsigned int __writer_wakeup; unsigned int __nr_readers_queued; unsigned int __nr_writers_queued; int __writer; int __shared; unsigned long int __pad1; unsigned long int __pad2; unsigned int __flags; 
}__data; char __size[56]; long int __align; 
}pthread_rwlock_t; 
#line 219 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[8]; long int __align; 
}pthread_rwlockattr_t; 
#line 225 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef volatile int pthread_spinlock_t; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[32]; long int __align; 
}pthread_barrier_t; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[4]; int __align; 
}pthread_barrierattr_t; 
# 211 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 321 "/usr/include/stdlib.h" 2 3 4
extern long int random(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 324 "/usr/include/stdlib.h"
extern void srandom(unsigned int __seed) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 331 "/usr/include/stdlib.h"
extern char *initstate(unsigned int __seed, char *__statebuf,  size_t __statelen) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 335 "/usr/include/stdlib.h"
extern char *setstate(char *__statebuf) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 352 "/usr/include/stdlib.h"
struct random_data { int32_t *fptr;  int32_t *rptr;  int32_t *state; int rand_type; int rand_deg; int rand_sep;  int32_t *end_ptr; 
}; 
#line 355 "/usr/include/stdlib.h"
extern int random_r(struct random_data *__restrict __buf,  int32_t *__restrict __result) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 358 "/usr/include/stdlib.h"
extern int srandom_r(unsigned int __seed, struct random_data *__buf) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 363 "/usr/include/stdlib.h"
extern int initstate_r(unsigned int __seed, char *__restrict __statebuf,  size_t __statelen, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 367 "/usr/include/stdlib.h"
extern int setstate_r(char *__restrict __statebuf, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 374 "/usr/include/stdlib.h"
extern int rand(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 376 "/usr/include/stdlib.h"
extern void srand(unsigned int __seed) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 381 "/usr/include/stdlib.h"
extern int rand_r(unsigned int *__seed) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 389 "/usr/include/stdlib.h"
extern double drand48(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 390 "/usr/include/stdlib.h"
extern double erand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 393 "/usr/include/stdlib.h"
extern long int lrand48(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 395 "/usr/include/stdlib.h"
extern long int nrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 398 "/usr/include/stdlib.h"
extern long int mrand48(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 400 "/usr/include/stdlib.h"
extern long int jrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 403 "/usr/include/stdlib.h"
extern void srand48(long int __seedval) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 405 "/usr/include/stdlib.h"
extern unsigned short int *seed48(unsigned short int __seed16v[3]) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 406 "/usr/include/stdlib.h"
extern void lcong48(unsigned short int __param[7]) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 420 "/usr/include/stdlib.h"
struct drand48_data {unsigned short int __x[3]; unsigned short int __old_x[3]; unsigned short int __c; unsigned short int __init;  __extension__ unsigned long long int __a; 
}; 
#line 424 "/usr/include/stdlib.h"
extern int drand48_r(struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 427 "/usr/include/stdlib.h"
extern int erand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 432 "/usr/include/stdlib.h"
extern int lrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 436 "/usr/include/stdlib.h"
extern int nrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 441 "/usr/include/stdlib.h"
extern int mrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 445 "/usr/include/stdlib.h"
extern int jrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 449 "/usr/include/stdlib.h"
extern int srand48_r(long int __seedval, struct drand48_data *__buffer) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 452 "/usr/include/stdlib.h"
extern int seed48_r(unsigned short int __seed16v[3], struct drand48_data *__buffer) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 456 "/usr/include/stdlib.h"
extern int lcong48_r(unsigned short int __param[7], struct drand48_data *__buffer) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 466 "/usr/include/stdlib.h"
extern void *malloc( size_t __size) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __malloc__ )) ; 
#line 469 "/usr/include/stdlib.h"
extern void *calloc( size_t __nmemb,  size_t __size) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __malloc__ )) ; 
#line 481 "/usr/include/stdlib.h"
extern void *realloc(void *__ptr,  size_t __size) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 483 "/usr/include/stdlib.h"
extern void free(void *__ptr) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 488 "/usr/include/stdlib.h"
extern void cfree(void *__ptr) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 32 "/usr/include/alloca.h" 2 3 4
extern void *alloca( size_t __size) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 498 "/usr/include/stdlib.h"
extern void *valloc( size_t __size) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __malloc__ )) ; 
#line 504 "/usr/include/stdlib.h"
extern int posix_memalign(void **__memptr,  size_t __alignment,  size_t __size) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 493 "/usr/include/stdlib.h" 2 3 4
# 515 "/usr/include/stdlib.h" 3 4
extern void abort(void ) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __noreturn__ )) ; 
#line 519 "/usr/include/stdlib.h"
extern int atexit(void (*__func)(void )) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 536 "/usr/include/stdlib.h"
extern int on_exit(void (*__func)(int __status, void *__arg), void *__arg) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 543 "/usr/include/stdlib.h"
extern void exit(int __status) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __noreturn__ )) ; 
#line 557 "/usr/include/stdlib.h"
extern void _Exit(int __status) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __noreturn__ )) ; 
#line 564 "/usr/include/stdlib.h"
extern char *getenv(const char *__name) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 530 "/usr/include/stdlib.h" 3 4
# 578 "/usr/include/stdlib.h" 3 4
extern int putenv(char *__string) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 585 "/usr/include/stdlib.h"
extern int setenv(const char *__name, const char *__value, int __replace) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 588 "/usr/include/stdlib.h"
extern int unsetenv(const char *__name) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 595 "/usr/include/stdlib.h"
extern int clearenv(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 606 "/usr/include/stdlib.h"
extern char *mktemp(char *__template) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 606 "/usr/include/stdlib.h" 3 4
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp(char *__template) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 642 "/usr/include/stdlib.h"
extern int mkstemps(char *__template, int __suffixlen) __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 642 "/usr/include/stdlib.h" 3 4
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp(char *__template) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 717 "/usr/include/stdlib.h"
extern int system(const char *__command); 
# 712 "/usr/include/stdlib.h" 3 4
# 735 "/usr/include/stdlib.h" 3 4
extern char *realpath(const char *__restrict __name, char *__restrict __resolved) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 742 "/usr/include/stdlib.h"
typedef int (*__compar_fn_t)(const void *, const void *); 
#line 757 "/usr/include/stdlib.h"
extern void *bsearch(const void *__key, const void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 2, 5 )  )) ; 
#line 766 "/usr/include/stdlib.h"
extern void qsort(void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 4 )  )) ; 
# 752 "/usr/include/stdlib.h" 3 4
# 775 "/usr/include/stdlib.h" 3 4
extern int abs(int __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 776 "/usr/include/stdlib.h"
extern long int labs(long int __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 781 "/usr/include/stdlib.h"
 __extension__ extern long long int llabs(long long int __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 790 "/usr/include/stdlib.h"
extern  div_t div(int __numer, int __denom) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 792 "/usr/include/stdlib.h"
extern  ldiv_t ldiv(long int __numer, long int __denom) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 799 "/usr/include/stdlib.h"
 __extension__ extern  lldiv_t lldiv(long long int __numer, long long int __denom) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 813 "/usr/include/stdlib.h"
extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 819 "/usr/include/stdlib.h"
extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 825 "/usr/include/stdlib.h"
extern char *gcvt(double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 832 "/usr/include/stdlib.h"
extern char *qecvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 835 "/usr/include/stdlib.h"
extern char *qfcvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 837 "/usr/include/stdlib.h"
extern char *qgcvt(long double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 844 "/usr/include/stdlib.h"
extern int ecvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 847 "/usr/include/stdlib.h"
extern int fcvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 852 "/usr/include/stdlib.h"
extern int qecvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 856 "/usr/include/stdlib.h"
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 863 "/usr/include/stdlib.h"
extern int mblen(const char *__s,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 867 "/usr/include/stdlib.h"
extern int mbtowc( wchar_t *__restrict __pwc, const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 870 "/usr/include/stdlib.h"
extern int wctomb(char *__s,  wchar_t __wchar) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 875 "/usr/include/stdlib.h"
extern  size_t mbstowcs( wchar_t *__restrict __pwcs, const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 879 "/usr/include/stdlib.h"
extern  size_t wcstombs(char *__restrict __s, const  wchar_t *__restrict __pwcs,  size_t __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 888 "/usr/include/stdlib.h"
extern int rpmatch(const char *__response) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 812 "/usr/include/stdlib.h" 3 4
# 902 "/usr/include/stdlib.h" 3 4
extern int getsubopt(char **__restrict __optionp, char *const *__restrict __tokens, char **__restrict __valuep) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
#line 952 "/usr/include/stdlib.h"
extern int getloadavg(double __loadavg[], int __nelem) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 951 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 956 "/usr/include/stdlib.h" 2 3 4
# 968 "/usr/include/stdlib.h" 3 4
# 10 "OperatingSystem.c" 2
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 42 "/usr/include/time.h" 2 3 4
# 152 "/usr/include/time.h" 3 4
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; int tm_yday; int tm_isdst; long int tm_gmtoff; const char *tm_zone; 
}; 
#line 165 "/usr/include/time.h"
struct itimerspec {struct timespec it_interval; struct timespec it_value; 
}; 
#line 168 "/usr/include/time.h"
struct sigevent ; 
#line 189 "/usr/include/time.h"
extern  clock_t clock(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 192 "/usr/include/time.h"
extern  time_t time( time_t *__timer) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 196 "/usr/include/time.h"
extern double difftime( time_t __time1,  time_t __time0) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 199 "/usr/include/time.h"
extern  time_t mktime(struct tm *__tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 207 "/usr/include/time.h"
extern  size_t strftime(char *__restrict __s,  size_t __maxsize, const char *__restrict __format, const struct tm *__restrict __tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 186 "/usr/include/time.h" 3 4
# 226 "/usr/include/time.h" 3 4
extern  size_t strftime_l(char *__restrict __s,  size_t __maxsize, const char *__restrict __format, const struct tm *__restrict __tp,  __locale_t __loc) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 239 "/usr/include/time.h"
extern struct tm *gmtime(const  time_t *__timer) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 243 "/usr/include/time.h"
extern struct tm *localtime(const  time_t *__timer) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 250 "/usr/include/time.h"
extern struct tm *gmtime_r(const  time_t *__restrict __timer, struct tm *__restrict __tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 255 "/usr/include/time.h"
extern struct tm *localtime_r(const  time_t *__restrict __timer, struct tm *__restrict __tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 261 "/usr/include/time.h"
extern char *asctime(const struct tm *__tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 264 "/usr/include/time.h"
extern char *ctime(const  time_t *__timer) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 273 "/usr/include/time.h"
extern char *asctime_r(const struct tm *__restrict __tp, char *__restrict __buf) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 277 "/usr/include/time.h"
extern char *ctime_r(const  time_t *__restrict __timer, char *__restrict __buf) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 282 "/usr/include/time.h"
extern char *__tzname[2]; 
#line 283 "/usr/include/time.h"
extern int __daylight; 
#line 284 "/usr/include/time.h"
extern long int __timezone; 
#line 289 "/usr/include/time.h"
extern char *tzname[2]; 
#line 293 "/usr/include/time.h"
extern void tzset(void ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 297 "/usr/include/time.h"
extern int daylight; 
#line 298 "/usr/include/time.h"
extern long int timezone; 
#line 304 "/usr/include/time.h"
extern int stime(const  time_t *__when) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 236 "/usr/include/time.h" 3 4
# 319 "/usr/include/time.h" 3 4
extern  time_t timegm(struct tm *__tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 322 "/usr/include/time.h"
extern  time_t timelocal(struct tm *__tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 325 "/usr/include/time.h"
extern int dysize(int __year) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 335 "/usr/include/time.h"
extern int nanosleep(const struct timespec *__requested_time, struct timespec *__remaining); 
#line 339 "/usr/include/time.h"
extern int clock_getres( clockid_t __clock_id, struct timespec *__res) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 342 "/usr/include/time.h"
extern int clock_gettime( clockid_t __clock_id, struct timespec *__tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 346 "/usr/include/time.h"
extern int clock_settime( clockid_t __clock_id, const struct timespec *__tp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 355 "/usr/include/time.h"
extern int clock_nanosleep( clockid_t __clock_id, int __flags, const struct timespec *__req, struct timespec *__rem); 
#line 358 "/usr/include/time.h"
extern int clock_getcpuclockid( pid_t __pid,  clockid_t *__clock_id) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 365 "/usr/include/time.h"
extern int timer_create( clockid_t __clock_id, struct sigevent *__restrict __evp,  timer_t *__restrict __timerid) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 368 "/usr/include/time.h"
extern int timer_delete( timer_t __timerid) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 373 "/usr/include/time.h"
extern int timer_settime( timer_t __timerid, int __flags, const struct itimerspec *__restrict __value, struct itimerspec *__restrict __ovalue) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 377 "/usr/include/time.h"
extern int timer_gettime( timer_t __timerid, struct itimerspec *__value) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 380 "/usr/include/time.h"
extern int timer_getoverrun( timer_t __timerid) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 334 "/usr/include/time.h" 3 4
# 430 "/usr/include/time.h" 3 4
# 11 "OperatingSystem.c" 2
# 1 "/usr/include/math.h" 1 3 4
# 28 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 1 3 4
# 33 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 1 3 4
# 36 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" 1 3 4
# 39 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" 1 3 4
# 42 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
typedef float float_t; 
#line 29 "/usr/include/x86_64-linux-gnu/bits/mathdef.h"
typedef double double_t; 
# 46 "/usr/include/math.h" 2 3 4
# 69 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double acos(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __acos(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double asin(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __asin(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double atan(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __atan(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double atan2(double __y, double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __atan2(double __y, double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double cos(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __cos(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double sin(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __sin(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double tan(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __tan(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double cosh(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __cosh(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double sinh(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __sinh(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double tanh(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __tanh(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double acosh(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __acosh(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double asinh(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __asinh(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double atanh(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __atanh(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double exp(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __exp(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double frexp(double __x, int *__exponent) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __frexp(double __x, int *__exponent) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double ldexp(double __x, int __exponent) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __ldexp(double __x, int __exponent) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double log(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __log(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double log10(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __log10(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double modf(double __x, double *__iptr) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __modf(double __x, double *__iptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double expm1(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __expm1(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double log1p(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __log1p(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double logb(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __logb(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double exp2(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __exp2(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double log2(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __log2(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double pow(double __x, double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __pow(double __x, double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double sqrt(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __sqrt(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double hypot(double __x, double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __hypot(double __x, double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double cbrt(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __cbrt(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double ceil(double __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __ceil(double __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double fabs(double __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __fabs(double __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double floor(double __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __floor(double __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double fmod(double __x, double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __fmod(double __x, double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 192 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __isinf(double __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 195 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __finite(double __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 201 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isinf(double __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 204 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int finite(double __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double drem(double __x, double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __drem(double __x, double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double significand(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __significand(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double copysign(double __x, double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __copysign(double __x, double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double nan(const char *__tagb) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __nan(const char *__tagb) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 230 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __isnan(double __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isnan(double __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double j0(double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __j0(double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double j1(double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __j1(double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double jn(int , double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __jn(int , double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double y0(double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __y0(double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double y1(double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __y1(double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double yn(int , double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __yn(int , double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double erf(double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __erf(double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double erfc(double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __erfc(double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double lgamma(double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __lgamma(double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double tgamma(double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __tgamma(double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 264 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double gamma(double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 264 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __gamma(double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 271 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double lgamma_r(double , int *__signgamp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 271 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __lgamma_r(double , int *__signgamp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 279 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double rint(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 279 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __rint(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double nextafter(double __x, double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __nextafter(double __x, double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double nexttoward(double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __nexttoward(double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double remainder(double __x, double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __remainder(double __x, double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double scalbn(double __x, int __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __scalbn(double __x, int __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 296 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int ilogb(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 296 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __ilogb(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double scalbln(double __x, long int __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __scalbln(double __x, long int __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double nearbyint(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __nearbyint(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 309 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double round(double __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 309 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __round(double __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 313 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double trunc(double __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 313 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __trunc(double __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double remquo(double __x, double __y, int *__quo) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __remquo(double __x, double __y, int *__quo) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 325 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int lrint(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 325 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int __lrint(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 __extension__ extern long long int llrint(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long long int __llrint(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int lround(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int __lround(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 333 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 __extension__ extern long long int llround(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 333 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long long int __llround(double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double fdim(double __x, double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __fdim(double __x, double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double fmax(double __x, double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __fmax(double __x, double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double fmin(double __x, double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __fmin(double __x, double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 348 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __fpclassify(double __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 352 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __signbit(double __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double fma(double __x, double __y, double __z) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __fma(double __x, double __y, double __z) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double scalb(double __x, double __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __scalb(double __x, double __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 70 "/usr/include/math.h" 2 3 4
# 88 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float acosf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __acosf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float asinf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __asinf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float atanf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __atanf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float atan2f(float __y, float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __atan2f(float __y, float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float cosf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __cosf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float sinf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __sinf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float tanf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __tanf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float coshf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __coshf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float sinhf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __sinhf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float tanhf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __tanhf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float acoshf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __acoshf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float asinhf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __asinhf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float atanhf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __atanhf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float expf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __expf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float frexpf(float __x, int *__exponent) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __frexpf(float __x, int *__exponent) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float ldexpf(float __x, int __exponent) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __ldexpf(float __x, int __exponent) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float logf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __logf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float log10f(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __log10f(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float modff(float __x, float *__iptr) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __modff(float __x, float *__iptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float expm1f(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __expm1f(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float log1pf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __log1pf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float logbf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __logbf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float exp2f(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __exp2f(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float log2f(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __log2f(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float powf(float __x, float __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __powf(float __x, float __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float sqrtf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __sqrtf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float hypotf(float __x, float __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __hypotf(float __x, float __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float cbrtf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __cbrtf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float ceilf(float __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __ceilf(float __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float fabsf(float __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __fabsf(float __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float floorf(float __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __floorf(float __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float fmodf(float __x, float __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __fmodf(float __x, float __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 192 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __isinff(float __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 195 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __finitef(float __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 201 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isinff(float __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 204 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int finitef(float __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float dremf(float __x, float __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __dremf(float __x, float __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float significandf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __significandf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float copysignf(float __x, float __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __copysignf(float __x, float __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float nanf(const char *__tagb) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __nanf(const char *__tagb) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 230 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __isnanf(float __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isnanf(float __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float j0f(float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __j0f(float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float j1f(float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __j1f(float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float jnf(int , float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __jnf(int , float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float y0f(float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __y0f(float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float y1f(float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __y1f(float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float ynf(int , float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __ynf(int , float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float erff(float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __erff(float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float erfcf(float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __erfcf(float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float lgammaf(float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __lgammaf(float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float tgammaf(float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __tgammaf(float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 264 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float gammaf(float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 264 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __gammaf(float ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 271 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float lgammaf_r(float , int *__signgamp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 271 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __lgammaf_r(float , int *__signgamp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 279 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float rintf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 279 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __rintf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float nextafterf(float __x, float __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __nextafterf(float __x, float __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float nexttowardf(float __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __nexttowardf(float __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float remainderf(float __x, float __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __remainderf(float __x, float __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float scalbnf(float __x, int __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __scalbnf(float __x, int __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 296 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int ilogbf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 296 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __ilogbf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float scalblnf(float __x, long int __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __scalblnf(float __x, long int __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float nearbyintf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __nearbyintf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 309 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float roundf(float __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 309 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __roundf(float __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 313 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float truncf(float __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 313 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __truncf(float __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float remquof(float __x, float __y, int *__quo) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __remquof(float __x, float __y, int *__quo) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 325 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int lrintf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 325 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int __lrintf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 __extension__ extern long long int llrintf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long long int __llrintf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int lroundf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int __lroundf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 333 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 __extension__ extern long long int llroundf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 333 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long long int __llroundf(float __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float fdimf(float __x, float __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __fdimf(float __x, float __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float fmaxf(float __x, float __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __fmaxf(float __x, float __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float fminf(float __x, float __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __fminf(float __x, float __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 348 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __fpclassifyf(float __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 352 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __signbitf(float __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float fmaf(float __x, float __y, float __z) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __fmaf(float __x, float __y, float __z) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float scalbf(float __x, float __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __scalbf(float __x, float __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 89 "/usr/include/math.h" 2 3 4
# 132 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double acosl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __acosl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double asinl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __asinl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double atanl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __atanl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double atan2l(long double __y, long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __atan2l(long double __y, long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double cosl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __cosl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double sinl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __sinl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double tanl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __tanl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double coshl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __coshl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double sinhl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __sinhl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double tanhl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __tanhl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double acoshl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __acoshl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double asinhl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __asinhl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double atanhl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __atanhl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double expl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __expl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double frexpl(long double __x, int *__exponent) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __frexpl(long double __x, int *__exponent) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double ldexpl(long double __x, int __exponent) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __ldexpl(long double __x, int __exponent) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double logl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __logl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double log10l(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __log10l(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double modfl(long double __x, long double *__iptr) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __modfl(long double __x, long double *__iptr) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double expm1l(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __expm1l(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double log1pl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __log1pl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double logbl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __logbl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double exp2l(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __exp2l(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double log2l(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __log2l(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double powl(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __powl(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double sqrtl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __sqrtl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double hypotl(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __hypotl(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double cbrtl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __cbrtl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double ceill(long double __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __ceill(long double __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double fabsl(long double __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __fabsl(long double __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double floorl(long double __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __floorl(long double __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double fmodl(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __fmodl(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 192 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __isinfl(long double __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 195 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __finitel(long double __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 201 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isinfl(long double __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 204 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int finitel(long double __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double dreml(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __dreml(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double significandl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __significandl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double copysignl(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __copysignl(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double nanl(const char *__tagb) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __nanl(const char *__tagb) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 230 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __isnanl(long double __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isnanl(long double __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double j0l(long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __j0l(long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double j1l(long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __j1l(long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double jnl(int , long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __jnl(int , long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double y0l(long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __y0l(long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double y1l(long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __y1l(long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double ynl(int , long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __ynl(int , long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double erfl(long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __erfl(long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double erfcl(long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __erfcl(long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double lgammal(long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __lgammal(long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double tgammal(long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __tgammal(long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 264 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double gammal(long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 264 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __gammal(long double ) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 271 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double lgammal_r(long double , int *__signgamp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 271 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __lgammal_r(long double , int *__signgamp) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 279 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double rintl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 279 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __rintl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double nextafterl(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __nextafterl(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double nexttowardl(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __nexttowardl(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double remainderl(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __remainderl(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double scalbnl(long double __x, int __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __scalbnl(long double __x, int __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 296 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int ilogbl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 296 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __ilogbl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double scalblnl(long double __x, long int __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __scalblnl(long double __x, long int __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double nearbyintl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __nearbyintl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 309 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double roundl(long double __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 309 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __roundl(long double __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 313 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double truncl(long double __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 313 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __truncl(long double __x) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double remquol(long double __x, long double __y, int *__quo) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __remquol(long double __x, long double __y, int *__quo) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 325 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int lrintl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 325 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int __lrintl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 __extension__ extern long long int llrintl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long long int __llrintl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int lroundl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int __lroundl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 333 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 __extension__ extern long long int llroundl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 333 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long long int __llroundl(long double __x) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double fdiml(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __fdiml(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double fmaxl(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __fmaxl(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double fminl(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __fminl(long double __x, long double __y) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 348 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __fpclassifyl(long double __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 352 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __signbitl(long double __value) __attribute__  (( __nothrow__ , __leaf__ ))  __attribute__  (( __const__ )) ; 
#line 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double fmal(long double __x, long double __y, long double __z) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __fmal(long double __x, long double __y, long double __z) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double scalbl(long double __x, long double __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __scalbl(long double __x, long double __n) __attribute__  (( __nothrow__ , __leaf__ )) ; 
# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 133 "/usr/include/math.h" 2 3 4
# 148 "/usr/include/math.h" 3 4
extern int signgam; 
#line 206 "/usr/include/math.h"
enum {FP_NAN=0,FP_INFINITE=1,FP_ZERO=2,FP_SUBNORMAL=3,FP_NORMAL=4}; 
# 189 "/usr/include/math.h" 3 4
# 308 "/usr/include/math.h" 3 4
typedef enum {_IEEE_=(-1),_SVID_,_XOPEN_,_POSIX_,_ISOC_}_LIB_VERSION_TYPE; 
#line 313 "/usr/include/math.h"
extern  _LIB_VERSION_TYPE _LIB_VERSION; 
#line 334 "/usr/include/math.h"
struct exception {int type; char *name; double arg1; double arg2; double retval; 
}; 
#line 339 "/usr/include/math.h"
extern int matherr(struct exception *__exc); 
# 326 "/usr/include/math.h" 3 4
# 488 "/usr/include/math.h" 3 4
# 12 "OperatingSystem.c" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stdbool.h" 1 3 4
# 13 "OperatingSystem.c" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include-fixed/syslimits.h" 1 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include-fixed/limits.h" 1 3 4
# 168 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 143 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 144 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 148 "/usr/include/limits.h" 2 3 4
# 169 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include-fixed/limits.h" 2 3 4
# 16 "OperatingSystem.c" 2
void OperatingSystem_PrepareDaemons(); 
#line 17 "OperatingSystem.c"
void OperatingSystem_PCBInitialization(int , int , int , int , int ); 
#line 18 "OperatingSystem.c"
void OperatingSystem_MoveToTheREADYState(int ); 
#line 19 "OperatingSystem.c"
void OperatingSystem_Dispatch(int ); 
#line 20 "OperatingSystem.c"
void OperatingSystem_RestoreContext(int ); 
#line 21 "OperatingSystem.c"
void OperatingSystem_SaveContext(int ); 
#line 22 "OperatingSystem.c"
void OperatingSystem_TerminateProcess(); 
#line 23 "OperatingSystem.c"
int OperatingSystem_LongTermScheduler(); 
#line 24 "OperatingSystem.c"
void OperatingSystem_PreemptRunningProcess(); 
#line 25 "OperatingSystem.c"
int OperatingSystem_CreateProcess(int ); 
#line 26 "OperatingSystem.c"
int OperatingSystem_ObtainMainMemory(int , int ); 
#line 27 "OperatingSystem.c"
int OperatingSystem_ShortTermScheduler(); 
#line 28 "OperatingSystem.c"
int OperatingSystem_ExtractFromReadyToRun(); 
#line 29 "OperatingSystem.c"
void OperatingSystem_HandleException(); 
#line 30 "OperatingSystem.c"
void OperatingSystem_HandleSystemCall(); 
#line 31 "OperatingSystem.c"
void OperatingSystem_PrintReadyToRunQueue(); 
#line 32 "OperatingSystem.c"
void OperatingSystem_HandleClockInterrupt(); 
#line 33 "OperatingSystem.c"
void OperatingSystem_SleepProcess(); 
#line 34 "OperatingSystem.c"
int OperatingSystem_CheckSleepingProcessQueue(); 
#line 35 "OperatingSystem.c"
_Bool OperatingSystem_CheckPriority(int currentPID, int candidatePID); 
#line 36 "OperatingSystem.c"
_Bool OperatingSystem_PerformSwap(); 
#line 37 "OperatingSystem.c"
int OperatingSystem_GetExecutingProcessID(); 
#line 38 "OperatingSystem.c"
int OperatingSystem_IsThereANewProgram(); 
#line 39 "OperatingSystem.c"
char *OperatingSystem_GetExceptionName(int exceptionType); 
#line 40 "OperatingSystem.c"
void OperatingSystem_ReleaseMainMemory(int PID); 
#line 42 "OperatingSystem.c"
char *statesNames[5] = {"NEW","READY","EXECUTING","BLOCKED","EXIT"}; 
#line 43 "OperatingSystem.c"
char *exceptionNames[4] = {"division by zero","invalid processor mode","invalid address","invalid instruction"}; 
#line 46 "OperatingSystem.c"
 PCB processTable[4]; 
#line 49 "OperatingSystem.c"
int sleepingProcessesQueue[4]; 
#line 50 "OperatingSystem.c"
int numberOfSleepingProcesses = 0; 
#line 53 "OperatingSystem.c"
int OS_address_base = 4 * (300 / (4 + 1)); 
#line 56 "OperatingSystem.c"
int executingProcessID = (-1); 
#line 59 "OperatingSystem.c"
int sipID; 
#line 62 "OperatingSystem.c"
int baseDaemonsInProgramList; 
#line 65 "OperatingSystem.c"
int readyToRunQueue[2][4]; 
#line 66 "OperatingSystem.c"
int numberOfReadyToRunProcesses[2] = {0,0}; 
#line 71 "OperatingSystem.c"
int numberOfNotTerminatedUserProcesses = 0; 
#line 74 "OperatingSystem.c"
int numberOfClockInterrupts = 0; 
#line 77 "OperatingSystem.c"
void OperatingSystem_Initialize(int daemonsIndex)  
# 2492 "OperatingSystemAspect.c"
{



# 2497 "OperatingSystemAspect.c"
{

#line 79 "OperatingSystem.c"

#line 79 "OperatingSystem.c"
int i,selectedProcess;
#line 80 "OperatingSystem.c"

#line 80 "OperatingSystem.c"
 FILE *programFile;
#line 83 "OperatingSystem.c"

#line 83 "OperatingSystem.c"
int processSize = OperatingSystem_ObtainProgramSize((&programFile), "OperatingSystemCode");
#line 86 "OperatingSystem.c"
OperatingSystem_LoadProgram(programFile, OS_address_base, processSize); 
#line 89 "OperatingSystem.c"
OperatingSystem_InitializePartitionTable(); 
#line 92 "OperatingSystem.c"
for(i = 0;i < 4;i++) { processTable[i].busy = 0; } 
#line 96 "OperatingSystem.c"
Processor_InitializeInterruptVectorTable(OS_address_base + 1); 
#line 99 "OperatingSystem.c"
OperatingSystem_PrepareDaemons(daemonsIndex); 
#line 102 "OperatingSystem.c"
ComputerSystem_FillInArrivalTimeQueue(); 
#line 103 "OperatingSystem.c"
OperatingSystem_PrintStatus(); 
#line 106 "OperatingSystem.c"
if ((OperatingSystem_LongTermScheduler() <= 1) && (OperatingSystem_IsThereANewProgram() == 1)){
{ 
#line 107 "OperatingSystem.c"
OperatingSystem_ReadyToShutdown(); 
#line 108 "OperatingSystem.c"
OperatingSystem_Dispatch(sipID); } }
#line 111 "OperatingSystem.c"
if (strcmp((programList[processTable[sipID].programListIndex]->executableName), "SystemIdleProcess")){
{ 
#line 113 "OperatingSystem.c"
OperatingSystem_ShowTime('d'); 
#line 114 "OperatingSystem.c"
ComputerSystem_DebugMessage(21, 'd'); 
#line 115 "OperatingSystem.c"
exit(1); } }
#line 120 "OperatingSystem.c"
selectedProcess = OperatingSystem_ShortTermScheduler(); 
#line 124 "OperatingSystem.c"
OperatingSystem_Dispatch(selectedProcess); 
#line 127 "OperatingSystem.c"
Processor_SetPC(OS_address_base); 
# 2548 "OperatingSystemAspect.c"

}

# 2552 "OperatingSystemAspect.c"

}
 
  void __utac_acc__Aspect__4 (void);


#line 133 "OperatingSystem.c"
void OperatingSystem_PrepareDaemons(int programListDaemonsBase)  
# 2561 "OperatingSystemAspect.c"
{



# 2566 "OperatingSystemAspect.c"
{

#line 136 "OperatingSystem.c"
programList[0] = (( PROGRAMS_DATA *)malloc(sizeof ( PROGRAMS_DATA ))); 
#line 138 "OperatingSystem.c"
(programList[0]->executableName) = "SystemIdleProcess"; 
#line 139 "OperatingSystem.c"
(programList[0]->arrivalTime) = 0; 
#line 140 "OperatingSystem.c"
(programList[0]->type) = ((unsigned int )1); 
#line 142 "OperatingSystem.c"
sipID = 0 % 4; 
#line 146 "OperatingSystem.c"
baseDaemonsInProgramList = programListDaemonsBase; 
# 2581 "OperatingSystemAspect.c"

}

{
__utac_acc__Aspect__4();

}

# 2590 "OperatingSystemAspect.c"

}
 
#line 150 "OperatingSystem.c"
int OperatingSystem_GetExecutingProcessID()  
# 2596 "OperatingSystemAspect.c"
{
# 2598 "OperatingSystemAspect.c"
int retValue_acc;




# 2604 "OperatingSystemAspect.c"
{

#line 151 "OperatingSystem.c"

# 2609 "OperatingSystemAspect.c"
retValue_acc = executingProcessID;
# 2611 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 2614 "OperatingSystemAspect.c"

}

# 2618 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2621 "OperatingSystemAspect.c"

}
 
#line 157 "OperatingSystem.c"
int OperatingSystem_LongTermScheduler()  
# 2627 "OperatingSystemAspect.c"
{
# 2629 "OperatingSystemAspect.c"
int retValue_acc;




# 2635 "OperatingSystemAspect.c"
{

#line 160 "OperatingSystem.c"

#line 160 "OperatingSystem.c"
int PID,i,numberOfSuccessfullyCreatedProcesses = 0;
#line 162 "OperatingSystem.c"
while(OperatingSystem_IsThereANewProgram() == 1) { { 
#line 163 "OperatingSystem.c"
i = Heap_poll(arrivalTimeQueue, 0, (&numberOfProgramsInArrivalTimeQueue)); 
#line 164 "OperatingSystem.c"
if ((PID = OperatingSystem_CreateProcess(i)) == (-3)){
{ 
#line 165 "OperatingSystem.c"

#line 165 "OperatingSystem.c"
 PROGRAMS_DATA program = (*programList[i]);
#line 166 "OperatingSystem.c"
OperatingSystem_ShowTime('e'); 
#line 167 "OperatingSystem.c"
ComputerSystem_DebugMessage(103, 'e', program.executableName); } }else{
if (PID == (-1)){
{ 
#line 170 "OperatingSystem.c"

#line 170 "OperatingSystem.c"
 PROGRAMS_DATA program = (*programList[i]);
#line 171 "OperatingSystem.c"
OperatingSystem_ShowTime('e'); 
#line 172 "OperatingSystem.c"
ComputerSystem_DebugMessage(104, 'e', program.executableName, "---it does not exist---"); } }else{
if (PID == (-2)){
{ 
#line 175 "OperatingSystem.c"

#line 175 "OperatingSystem.c"
 PROGRAMS_DATA program = (*programList[i]);
#line 176 "OperatingSystem.c"
OperatingSystem_ShowTime('e'); 
#line 177 "OperatingSystem.c"
ComputerSystem_DebugMessage(104, 'e', program.executableName, "---invalid priority or size---"); } }else{
if (PID == (-4)){
{ 
#line 180 "OperatingSystem.c"

#line 180 "OperatingSystem.c"
 PROGRAMS_DATA program = (*programList[i]);
#line 181 "OperatingSystem.c"
OperatingSystem_ShowTime('d'); 
#line 182 "OperatingSystem.c"
OperatingSystem_ShowTime('e'); 
#line 183 "OperatingSystem.c"
ComputerSystem_DebugMessage(105, 'e', program.executableName); } }else{
if (PID == (-5)){
{ 
#line 185 "OperatingSystem.c"

#line 185 "OperatingSystem.c"
 PROGRAMS_DATA program = (*programList[i]);
#line 186 "OperatingSystem.c"
OperatingSystem_ShowTime('e'); 
#line 187 "OperatingSystem.c"
ComputerSystem_DebugMessage(144, 'e', program.executableName); } }else{
{ 
#line 189 "OperatingSystem.c"
numberOfSuccessfullyCreatedProcesses++; 
#line 190 "OperatingSystem.c"
if ((programList[i]->type) == ((unsigned int )0)){
numberOfNotTerminatedUserProcesses++; }
#line 193 "OperatingSystem.c"
OperatingSystem_MoveToTheREADYState(PID); } }}}}}} } 
#line 196 "OperatingSystem.c"
if (numberOfSuccessfullyCreatedProcesses > 0){
{ 
#line 197 "OperatingSystem.c"
OperatingSystem_PrintStatus(); } }
#line 200 "OperatingSystem.c"

# 2714 "OperatingSystemAspect.c"
retValue_acc = numberOfSuccessfullyCreatedProcesses;
# 2716 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 2719 "OperatingSystemAspect.c"

}

# 2723 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2726 "OperatingSystemAspect.c"

}
 
#line 205 "OperatingSystem.c"
int OperatingSystem_CreateProcess(int indexOfExecutableProgram)  
# 2732 "OperatingSystemAspect.c"
{
# 2734 "OperatingSystemAspect.c"
int retValue_acc;




# 2740 "OperatingSystemAspect.c"
{

#line 207 "OperatingSystem.c"

#line 207 "OperatingSystem.c"
int PID;
#line 208 "OperatingSystem.c"

#line 208 "OperatingSystem.c"
int processSize;
#line 209 "OperatingSystem.c"

#line 209 "OperatingSystem.c"
int partition;
#line 210 "OperatingSystem.c"

#line 210 "OperatingSystem.c"
int loadingPhysicalAddress;
#line 211 "OperatingSystem.c"

#line 211 "OperatingSystem.c"
int priority;
#line 212 "OperatingSystem.c"

#line 212 "OperatingSystem.c"
 FILE *programFile;
#line 213 "OperatingSystem.c"

#line 213 "OperatingSystem.c"
 PROGRAMS_DATA *executableProgram = programList[indexOfExecutableProgram];
#line 216 "OperatingSystem.c"
if ((PID = OperatingSystem_ObtainAnEntryInTheProcessTable()) == (-3)){
{ 
#line 217 "OperatingSystem.c"

# 2776 "OperatingSystemAspect.c"
retValue_acc = (-3);
# 2778 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }
#line 221 "OperatingSystem.c"
if ((processSize = OperatingSystem_ObtainProgramSize((&programFile), (executableProgram->executableName))) == (-1)){
{ 
#line 222 "OperatingSystem.c"

# 2786 "OperatingSystemAspect.c"
retValue_acc = processSize;
# 2788 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }
#line 226 "OperatingSystem.c"
if ((priority = OperatingSystem_ObtainPriority(programFile)) == (-2) || processSize == (-2)){
{ 
#line 227 "OperatingSystem.c"

# 2796 "OperatingSystemAspect.c"
retValue_acc = (-2);
# 2798 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }
#line 231 "OperatingSystem.c"
if ((partition = OperatingSystem_ObtainMainMemory(processSize, PID)) == (-4)){
{ 
#line 232 "OperatingSystem.c"

# 2806 "OperatingSystemAspect.c"
retValue_acc = (-4);
# 2808 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }else{
if (partition == (-5)){
{ 
#line 234 "OperatingSystem.c"

# 2815 "OperatingSystemAspect.c"
retValue_acc = (-5);
# 2817 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }}
#line 236 "OperatingSystem.c"
OperatingSystem_ShowPartitionTable("before allocating memory"); 
#line 237 "OperatingSystem.c"
loadingPhysicalAddress = partitionsTable[partition].initAddress; 
#line 238 "OperatingSystem.c"
partitionsTable[partition].occupied = 1; 
#line 239 "OperatingSystem.c"
partitionsTable[partition].PID = PID; 
#line 240 "OperatingSystem.c"
OperatingSystem_ShowTime('p'); 
#line 241 "OperatingSystem.c"
ComputerSystem_DebugMessage(143, 'm', partition, loadingPhysicalAddress, partitionsTable[partition].size, PID, (programList[processTable[PID].programListIndex]->executableName)); 
#line 242 "OperatingSystem.c"
OperatingSystem_ShowPartitionTable("after allocating memory"); 
#line 245 "OperatingSystem.c"
if ((OperatingSystem_LoadProgram(programFile, loadingPhysicalAddress, processSize)) < 0){
{ 
#line 246 "OperatingSystem.c"

# 2839 "OperatingSystemAspect.c"
retValue_acc = (-4);
# 2841 "OperatingSystemAspect.c"
return (int )retValue_acc;
 } }
#line 250 "OperatingSystem.c"
OperatingSystem_PCBInitialization(PID, loadingPhysicalAddress, processSize, priority, indexOfExecutableProgram); 
#line 253 "OperatingSystem.c"
OperatingSystem_ShowTime('t'); 
#line 254 "OperatingSystem.c"
ComputerSystem_DebugMessage(22, 't', PID, (executableProgram->executableName)); 
#line 256 "OperatingSystem.c"

# 2852 "OperatingSystemAspect.c"
retValue_acc = PID;
# 2854 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 2857 "OperatingSystemAspect.c"

}

# 2861 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2864 "OperatingSystemAspect.c"

}
 
#line 262 "OperatingSystem.c"
int OperatingSystem_ObtainMainMemory(int processSize, int PID)  
# 2870 "OperatingSystemAspect.c"
{
# 2872 "OperatingSystemAspect.c"
int retValue_acc;




# 2878 "OperatingSystemAspect.c"
{

#line 265 "OperatingSystem.c"
if (processSize > (300 / (4 + 1))){

# 2884 "OperatingSystemAspect.c"
retValue_acc = (-4);
# 2886 "OperatingSystemAspect.c"
return (int )retValue_acc;
 }
#line 265 "OperatingSystem.c"

#line 265 "OperatingSystem.c"
int i;
#line 266 "OperatingSystem.c"

#line 266 "OperatingSystem.c"
int selectedAddress = (-5);
#line 267 "OperatingSystem.c"

#line 267 "OperatingSystem.c"
int freeSpace = 2147483647;
#line 268 "OperatingSystem.c"
for(i = 0;i < 4 * 2;i++) { { 
#line 275 "OperatingSystem.c"
if (partitionsTable[i].size >= processSize && (!partitionsTable[i].occupied)){
{ 
#line 274 "OperatingSystem.c"
if ((partitionsTable[i].size - processSize) < freeSpace){
{ 
#line 271 "OperatingSystem.c"
freeSpace = (partitionsTable[i].size - processSize); 
#line 272 "OperatingSystem.c"
selectedAddress = i; } }} }} } 
#line 276 "OperatingSystem.c"
if (selectedAddress != (-5)){
{ 
#line 277 "OperatingSystem.c"
OperatingSystem_ShowTime('p'); 
#line 278 "OperatingSystem.c"
ComputerSystem_DebugMessage(142, 'm', PID, (programList[processTable[PID].programListIndex]->executableName), partitionsTable[selectedAddress].size); } }
#line 280 "OperatingSystem.c"

# 2922 "OperatingSystemAspect.c"
retValue_acc = selectedAddress;
# 2924 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 2927 "OperatingSystemAspect.c"

}

# 2931 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 2934 "OperatingSystemAspect.c"

}
 
#line 285 "OperatingSystem.c"
void OperatingSystem_PCBInitialization(int PID, int initialPhysicalAddress, int processSize, int priority, int processPLIndex)  
# 2940 "OperatingSystemAspect.c"
{



# 2945 "OperatingSystemAspect.c"
{

#line 287 "OperatingSystem.c"
processTable[PID].busy = 1; 
#line 288 "OperatingSystem.c"
processTable[PID].queueID = (programList[processPLIndex]->type); 
#line 289 "OperatingSystem.c"
processTable[PID].initialPhysicalAddress = initialPhysicalAddress; 
#line 290 "OperatingSystem.c"
processTable[PID].processSize = processSize; 
#line 291 "OperatingSystem.c"
processTable[PID].state = NEW; 
#line 292 "OperatingSystem.c"
processTable[PID].priority = priority; 
#line 293 "OperatingSystem.c"
processTable[PID].programListIndex = processPLIndex; 
#line 295 "OperatingSystem.c"
if ((programList[processPLIndex]->type) == ((unsigned int )1)){
{ 
#line 296 "OperatingSystem.c"
processTable[PID].copyOfPCRegister = initialPhysicalAddress; 
#line 297 "OperatingSystem.c"
processTable[PID].queueID = 1; 
#line 298 "OperatingSystem.c"
processTable[PID].copyOfPSWRegister = (((unsigned int )1)) << EXECUTION_MODE_BIT; } }else{
{ 
#line 301 "OperatingSystem.c"
processTable[PID].copyOfPCRegister = 0; 
#line 302 "OperatingSystem.c"
processTable[PID].queueID = 0; 
#line 303 "OperatingSystem.c"
processTable[PID].copyOfPSWRegister = 0; } }
#line 305 "OperatingSystem.c"
OperatingSystem_ShowTime('p'); 
#line 306 "OperatingSystem.c"
ComputerSystem_DebugMessage(111, 'p', PID, statesNames[0]); 
# 2982 "OperatingSystemAspect.c"

}

# 2986 "OperatingSystemAspect.c"

}
 
#line 312 "OperatingSystem.c"
void OperatingSystem_MoveToTheREADYState(int PID)  
# 2992 "OperatingSystemAspect.c"
{



# 2997 "OperatingSystemAspect.c"
{

#line 328 "OperatingSystem.c"
if (PID >= 0){
{ 
#line 327 "OperatingSystem.c"
if (Heap_add(PID, readyToRunQueue[processTable[PID].queueID], processTable[PID].queueID, (&numberOfReadyToRunProcesses[processTable[PID].queueID]), 4) >= 0){
{ 
#line 315 "OperatingSystem.c"

#line 315 "OperatingSystem.c"
char *previousState;
#line 316 "OperatingSystem.c"
if (processTable[PID].state == NEW){
{ 
#line 317 "OperatingSystem.c"
previousState = statesNames[0]; } }else{
{ 
#line 319 "OperatingSystem.c"
previousState = statesNames[3]; } }
#line 321 "OperatingSystem.c"
processTable[PID].state = READY; 
#line 322 "OperatingSystem.c"

#line 322 "OperatingSystem.c"
char *newState = statesNames[1];
#line 323 "OperatingSystem.c"
OperatingSystem_ShowTime('p'); 
#line 324 "OperatingSystem.c"
ComputerSystem_DebugMessage(110, 'p', PID, previousState, newState); } }} }
# 3028 "OperatingSystemAspect.c"

}

# 3032 "OperatingSystemAspect.c"

}
 
#line 334 "OperatingSystem.c"
int OperatingSystem_ShortTermScheduler()  
# 3038 "OperatingSystemAspect.c"
{
# 3040 "OperatingSystemAspect.c"
int retValue_acc;




# 3046 "OperatingSystemAspect.c"
{

#line 336 "OperatingSystem.c"

#line 336 "OperatingSystem.c"
int selectedProcess;
#line 338 "OperatingSystem.c"
selectedProcess = OperatingSystem_ExtractFromReadyToRun(); 
#line 340 "OperatingSystem.c"

# 3057 "OperatingSystemAspect.c"
retValue_acc = selectedProcess;
# 3059 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 3062 "OperatingSystemAspect.c"

}

# 3066 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 3069 "OperatingSystemAspect.c"

}
 
#line 345 "OperatingSystem.c"
int OperatingSystem_ExtractFromReadyToRun()  
# 3075 "OperatingSystemAspect.c"
{
# 3077 "OperatingSystemAspect.c"
int retValue_acc;




# 3083 "OperatingSystemAspect.c"
{

#line 347 "OperatingSystem.c"

#line 347 "OperatingSystem.c"
int selectedProcess = (-1);
#line 349 "OperatingSystem.c"
selectedProcess = Heap_poll(readyToRunQueue[0], 0, (&numberOfReadyToRunProcesses[0])); 
#line 350 "OperatingSystem.c"
if (selectedProcess == (-1)){
{ 
#line 351 "OperatingSystem.c"
selectedProcess = Heap_poll(readyToRunQueue[1], 1, (&numberOfReadyToRunProcesses[1])); } }
#line 354 "OperatingSystem.c"

# 3099 "OperatingSystemAspect.c"
retValue_acc = selectedProcess;
# 3101 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 3104 "OperatingSystemAspect.c"

}

# 3108 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 3111 "OperatingSystemAspect.c"

}
 
#line 359 "OperatingSystem.c"
void OperatingSystem_Dispatch(int PID)  
# 3117 "OperatingSystemAspect.c"
{



# 3122 "OperatingSystemAspect.c"
{

#line 362 "OperatingSystem.c"
executingProcessID = PID; 
#line 364 "OperatingSystem.c"

#line 364 "OperatingSystem.c"
char *previousState = statesNames[1];
#line 365 "OperatingSystem.c"
processTable[PID].state = EXECUTING; 
#line 366 "OperatingSystem.c"

#line 366 "OperatingSystem.c"
char *newState = statesNames[2];
#line 367 "OperatingSystem.c"
OperatingSystem_ShowTime('p'); 
#line 368 "OperatingSystem.c"
ComputerSystem_DebugMessage(110, 'p', PID, previousState, newState); 
#line 370 "OperatingSystem.c"
OperatingSystem_RestoreContext(PID); 
# 3143 "OperatingSystemAspect.c"

}

# 3147 "OperatingSystemAspect.c"

}
 
#line 375 "OperatingSystem.c"
void OperatingSystem_RestoreContext(int PID)  
# 3153 "OperatingSystemAspect.c"
{



# 3158 "OperatingSystemAspect.c"
{

#line 378 "OperatingSystem.c"
Processor_CopyInSystemStack(300 - 1, processTable[PID].copyOfPCRegister); 
#line 379 "OperatingSystem.c"
Processor_CopyInSystemStack(300 - 2, processTable[PID].copyOfPSWRegister); 
#line 380 "OperatingSystem.c"
Processor_SetAccumulator(processTable[PID].copyOfACCRegister); 
#line 383 "OperatingSystem.c"
MMU_SetBase(processTable[PID].initialPhysicalAddress); 
#line 384 "OperatingSystem.c"
MMU_SetLimit(processTable[PID].processSize); 
# 3171 "OperatingSystemAspect.c"

}

# 3175 "OperatingSystemAspect.c"

}
 
#line 389 "OperatingSystem.c"
void OperatingSystem_PreemptRunningProcess()  
# 3181 "OperatingSystemAspect.c"
{



# 3186 "OperatingSystemAspect.c"
{

#line 392 "OperatingSystem.c"
OperatingSystem_SaveContext(executingProcessID); 
#line 394 "OperatingSystem.c"
OperatingSystem_MoveToTheREADYState(executingProcessID); 
#line 396 "OperatingSystem.c"
executingProcessID = (-1); 
# 3195 "OperatingSystemAspect.c"

}

# 3199 "OperatingSystemAspect.c"

}
 
#line 401 "OperatingSystem.c"
void OperatingSystem_SaveContext(int PID)  
# 3205 "OperatingSystemAspect.c"
{



# 3210 "OperatingSystemAspect.c"
{

#line 404 "OperatingSystem.c"
processTable[PID].copyOfPCRegister = Processor_CopyFromSystemStack(300 - 1); 
#line 407 "OperatingSystem.c"
processTable[PID].copyOfPSWRegister = Processor_CopyFromSystemStack(300 - 2); 
#line 410 "OperatingSystem.c"
processTable[PID].copyOfACCRegister = Processor_GetAccumulator(); 
# 3219 "OperatingSystemAspect.c"

}

# 3223 "OperatingSystemAspect.c"

}
 
#line 417 "OperatingSystem.c"
void OperatingSystem_HandleException()  
# 3229 "OperatingSystemAspect.c"
{



# 3234 "OperatingSystemAspect.c"
{

#line 420 "OperatingSystem.c"
OperatingSystem_ShowTime('p'); 
#line 421 "OperatingSystem.c"

#line 421 "OperatingSystem.c"
char *exceptionName = OperatingSystem_GetExceptionName(Processor_GetRegisterB());
#line 422 "OperatingSystem.c"
ComputerSystem_DebugMessage(140, 'i', executingProcessID, (programList[executingProcessID]->executableName), exceptionName); 
#line 424 "OperatingSystem.c"
OperatingSystem_TerminateProcess(); 
#line 425 "OperatingSystem.c"
OperatingSystem_PrintStatus(); 
# 3249 "OperatingSystemAspect.c"

}

# 3253 "OperatingSystemAspect.c"

}
 
#line 428 "OperatingSystem.c"
char *OperatingSystem_GetExceptionName(int exceptionType)  
# 3259 "OperatingSystemAspect.c"
{
# 3261 "OperatingSystemAspect.c"
char* retValue_acc;




# 3267 "OperatingSystemAspect.c"
{

#line 429 "OperatingSystem.c"

# 3272 "OperatingSystemAspect.c"
retValue_acc = exceptionNames[exceptionType];
# 3274 "OperatingSystemAspect.c"
return (char* )retValue_acc;
 
# 3277 "OperatingSystemAspect.c"

}

# 3281 "OperatingSystemAspect.c"
return (char* )retValue_acc;

# 3284 "OperatingSystemAspect.c"

}
 
#line 433 "OperatingSystem.c"
void OperatingSystem_TerminateProcess()  
# 3290 "OperatingSystemAspect.c"
{



# 3295 "OperatingSystemAspect.c"
{

#line 435 "OperatingSystem.c"

#line 435 "OperatingSystem.c"
int selectedProcess;
#line 436 "OperatingSystem.c"

#line 436 "OperatingSystem.c"
char *previousState;
#line 437 "OperatingSystem.c"
if (processTable[executingProcessID].state == NEW){
{ 
#line 438 "OperatingSystem.c"
previousState = statesNames[0]; } }else{
if (processTable[executingProcessID].state == BLOCKED){
{ 
#line 440 "OperatingSystem.c"
previousState = statesNames[3]; } }else{
{ 
#line 442 "OperatingSystem.c"
previousState = statesNames[2]; } }}
#line 444 "OperatingSystem.c"
processTable[executingProcessID].state = EXIT; 
#line 445 "OperatingSystem.c"

#line 445 "OperatingSystem.c"
char *newState = statesNames[4];
#line 446 "OperatingSystem.c"
OperatingSystem_ShowTime('p'); 
#line 447 "OperatingSystem.c"
ComputerSystem_DebugMessage(110, 'p', executingProcessID, previousState, newState); 
#line 448 "OperatingSystem.c"
OperatingSystem_ReleaseMainMemory(executingProcessID); 
#line 450 "OperatingSystem.c"
numberOfNotTerminatedUserProcesses--; 
#line 452 "OperatingSystem.c"
if ((numberOfNotTerminatedUserProcesses <= 0) && (OperatingSystem_IsThereANewProgram() < 0)){
{ 
#line 454 "OperatingSystem.c"
OperatingSystem_ReadyToShutdown(); } }
#line 457 "OperatingSystem.c"
selectedProcess = OperatingSystem_ShortTermScheduler(); 
#line 460 "OperatingSystem.c"
OperatingSystem_Dispatch(selectedProcess); 
# 3341 "OperatingSystemAspect.c"

}

# 3345 "OperatingSystemAspect.c"

}
 
#line 464 "OperatingSystem.c"
void OperatingSystem_ReleaseMainMemory(int PID)  
# 3351 "OperatingSystemAspect.c"
{



# 3356 "OperatingSystemAspect.c"
{

#line 465 "OperatingSystem.c"
OperatingSystem_ShowPartitionTable("before releasing memory"); 
#line 466 "OperatingSystem.c"

#line 466 "OperatingSystem.c"
int i;
#line 467 "OperatingSystem.c"

#line 467 "OperatingSystem.c"
int address;
#line 468 "OperatingSystem.c"

#line 468 "OperatingSystem.c"
int size;
#line 469 "OperatingSystem.c"

#line 469 "OperatingSystem.c"
char *name;
#line 470 "OperatingSystem.c"
for(i = 0;i < 4 * 2;i++) { { 
#line 481 "OperatingSystem.c"
if (partitionsTable[i].PID == PID && partitionsTable[i].occupied){
{ 
#line 472 "OperatingSystem.c"
partitionsTable[i].occupied = 0; 
#line 473 "OperatingSystem.c"
address = partitionsTable[i].initAddress; 
#line 474 "OperatingSystem.c"
size = partitionsTable[i].size; 
#line 475 "OperatingSystem.c"
name = (programList[processTable[PID].programListIndex]->executableName); 
#line 476 "OperatingSystem.c"
OperatingSystem_ShowTime('p'); 
#line 477 "OperatingSystem.c"
ComputerSystem_DebugMessage(145, 'm', i, address, size, PID, name); 
#line 478 "OperatingSystem.c"
OperatingSystem_ShowPartitionTable("after releasing memory"); 
#line 479 "OperatingSystem.c"
break; } }} } 
# 3398 "OperatingSystemAspect.c"

}

# 3402 "OperatingSystemAspect.c"

}
 
#line 485 "OperatingSystem.c"
void OperatingSystem_HandleSystemCall()  
# 3408 "OperatingSystemAspect.c"
{



# 3413 "OperatingSystemAspect.c"
{

#line 487 "OperatingSystem.c"

#line 487 "OperatingSystem.c"
int systemCallID;
#line 488 "OperatingSystem.c"

#line 488 "OperatingSystem.c"
int pid;
#line 490 "OperatingSystem.c"
systemCallID = Processor_GetRegisterA(); 
#line 492 "OperatingSystem.c"
switch(systemCallID){ { 
#line 495 "OperatingSystem.c"
case SYSCALL_PRINTEXECPID: OperatingSystem_ShowTime('p'); 
#line 496 "OperatingSystem.c"
ComputerSystem_DebugMessage(24, 'p', executingProcessID); 
#line 497 "OperatingSystem.c"
break; 
#line 499 "OperatingSystem.c"
case SYSCALL_END: OperatingSystem_ShowTime('p'); 
#line 502 "OperatingSystem.c"
ComputerSystem_DebugMessage(25, 'p', executingProcessID); 
#line 503 "OperatingSystem.c"
OperatingSystem_TerminateProcess(); 
#line 504 "OperatingSystem.c"
OperatingSystem_PrintStatus(); 
#line 505 "OperatingSystem.c"
break; 
#line 506 "OperatingSystem.c"
case SYSCALL_YIELD: if ((pid = OperatingSystem_ExtractFromReadyToRun()) != (-1)){
{ 
#line 514 "OperatingSystem.c"
if (OperatingSystem_CheckPriority(executingProcessID, pid)){
{ 
#line 510 "OperatingSystem.c"
OperatingSystem_PreemptRunningProcess(); 
#line 511 "OperatingSystem.c"
OperatingSystem_Dispatch(pid); 
#line 512 "OperatingSystem.c"
OperatingSystem_PrintStatus(); } }} }
#line 515 "OperatingSystem.c"
break; 
#line 516 "OperatingSystem.c"
case SYSCALL_SLEEP: OperatingSystem_SleepProcess(); 
#line 518 "OperatingSystem.c"
OperatingSystem_PrintStatus(); 
#line 519 "OperatingSystem.c"
break; 
#line 520 "OperatingSystem.c"
default: OperatingSystem_ShowTime('p'); 
#line 522 "OperatingSystem.c"
ComputerSystem_DebugMessage(141, 'i', executingProcessID, (programList[executingProcessID]->executableName), systemCallID); 
#line 523 "OperatingSystem.c"
OperatingSystem_TerminateProcess(); } } 
# 3470 "OperatingSystemAspect.c"

}

# 3474 "OperatingSystemAspect.c"

}
 
#line 527 "OperatingSystem.c"
_Bool OperatingSystem_CheckPriority(int currentPID, int candidatePID)  
# 3480 "OperatingSystemAspect.c"
{
# 3482 "OperatingSystemAspect.c"
_Bool retValue_acc;




# 3488 "OperatingSystemAspect.c"
{

#line 535 "OperatingSystem.c"
if (processTable[currentPID].queueID == processTable[candidatePID].queueID){
{ 
#line 529 "OperatingSystem.c"

# 3496 "OperatingSystemAspect.c"
retValue_acc = processTable[candidatePID].priority > processTable[currentPID].priority;
# 3498 "OperatingSystemAspect.c"
return (_Bool )retValue_acc;
 } }else{
if ((processTable[currentPID].queueID == 0) && (processTable[candidatePID].queueID == 1)){
{ 
#line 531 "OperatingSystem.c"

# 3505 "OperatingSystemAspect.c"
retValue_acc = 0;
# 3507 "OperatingSystemAspect.c"
return (_Bool )retValue_acc;
 } }else{
if ((processTable[currentPID].queueID == 1) && (processTable[candidatePID].queueID == 0)){
{ 
#line 533 "OperatingSystem.c"

# 3514 "OperatingSystemAspect.c"
retValue_acc = 1;
# 3516 "OperatingSystemAspect.c"
return (_Bool )retValue_acc;
 } }}}
#line 535 "OperatingSystem.c"

# 3521 "OperatingSystemAspect.c"
retValue_acc = 0;
# 3523 "OperatingSystemAspect.c"
return (_Bool )retValue_acc;
 
# 3526 "OperatingSystemAspect.c"

}

# 3530 "OperatingSystemAspect.c"
return (_Bool )retValue_acc;

# 3533 "OperatingSystemAspect.c"

}
 
#line 538 "OperatingSystem.c"
void OperatingSystem_SleepProcess()  
# 3539 "OperatingSystemAspect.c"
{



# 3544 "OperatingSystemAspect.c"
{

#line 539 "OperatingSystem.c"

#line 539 "OperatingSystem.c"
int pid = executingProcessID;
#line 540 "OperatingSystem.c"
processTable[executingProcessID].state = BLOCKED; 
#line 541 "OperatingSystem.c"
processTable[executingProcessID].whenToWakeUp = abs(Processor_GetAccumulator()) + numberOfClockInterrupts + 1; 
#line 542 "OperatingSystem.c"
Heap_add(pid, sleepingProcessesQueue, 0, (&numberOfSleepingProcesses), 4); 
#line 543 "OperatingSystem.c"
OperatingSystem_ShowTime('p'); 
#line 544 "OperatingSystem.c"
ComputerSystem_DebugMessage(110, 'p', pid, statesNames[2], statesNames[3]); 
# 3561 "OperatingSystemAspect.c"

}

# 3565 "OperatingSystemAspect.c"

}
 
  void __utac_acc__Aspect__3 (void);


#line 548 "OperatingSystem.c"
void OperatingSystem_InterruptLogic(int entryPoint)  
# 3574 "OperatingSystemAspect.c"
{



{
__utac_acc__Aspect__3();

}

# 3584 "OperatingSystemAspect.c"
{

#line 559 "OperatingSystem.c"
switch(entryPoint){ { 
#line 551 "OperatingSystem.c"
case SYSCALL_BIT: OperatingSystem_HandleSystemCall(); 
#line 552 "OperatingSystem.c"
break; 
#line 553 "OperatingSystem.c"
case EXCEPTION_BIT: OperatingSystem_HandleException(); 
#line 555 "OperatingSystem.c"
break; 
#line 556 "OperatingSystem.c"
case CLOCKINT_BIT: OperatingSystem_HandleClockInterrupt(); 
#line 558 "OperatingSystem.c"
break; } } 
# 3601 "OperatingSystemAspect.c"

}

# 3605 "OperatingSystemAspect.c"

}
 
#line 563 "OperatingSystem.c"
void OperatingSystem_PrintReadyToRunQueue()  
# 3611 "OperatingSystemAspect.c"
{



# 3616 "OperatingSystemAspect.c"
{

#line 564 "OperatingSystem.c"

#line 564 "OperatingSystem.c"
int i;
#line 565 "OperatingSystem.c"

#line 565 "OperatingSystem.c"
int j;
#line 566 "OperatingSystem.c"

#line 566 "OperatingSystem.c"
int PID;
#line 567 "OperatingSystem.c"

#line 567 "OperatingSystem.c"
 PCB pcb;
#line 568 "OperatingSystem.c"
OperatingSystem_ShowTime('s'); 
#line 569 "OperatingSystem.c"
ComputerSystem_DebugMessage(106, 's'); 
#line 570 "OperatingSystem.c"
OperatingSystem_ShowTime('s'); 
#line 571 "OperatingSystem.c"
ComputerSystem_DebugMessage(112, 's'); 
#line 572 "OperatingSystem.c"
for(i = 0;i < numberOfReadyToRunProcesses[0];i++) { { 
#line 573 "OperatingSystem.c"
PID = readyToRunQueue[0][i]; 
#line 574 "OperatingSystem.c"
pcb = processTable[PID]; 
#line 575 "OperatingSystem.c"
ComputerSystem_DebugMessage(107, 's', PID, pcb.priority); } } 
#line 577 "OperatingSystem.c"
ComputerSystem_DebugMessage(108, 's'); 
#line 578 "OperatingSystem.c"
OperatingSystem_ShowTime('s'); 
#line 579 "OperatingSystem.c"
ComputerSystem_DebugMessage(113, 's'); 
#line 580 "OperatingSystem.c"
for(j = 1;j <= numberOfReadyToRunProcesses[1];j++) { { 
#line 581 "OperatingSystem.c"
PID = readyToRunQueue[1][i]; 
#line 582 "OperatingSystem.c"
pcb = processTable[PID]; 
#line 583 "OperatingSystem.c"
ComputerSystem_DebugMessage(107, 's', PID, pcb.priority); } } 
#line 585 "OperatingSystem.c"
ComputerSystem_DebugMessage(108, 's'); 
# 3667 "OperatingSystemAspect.c"

}

# 3671 "OperatingSystemAspect.c"

}
 
#line 589 "OperatingSystem.c"
void OperatingSystem_HandleClockInterrupt()  
# 3677 "OperatingSystemAspect.c"
{



# 3682 "OperatingSystemAspect.c"
{

#line 590 "OperatingSystem.c"
numberOfClockInterrupts++; 
#line 591 "OperatingSystem.c"
OperatingSystem_ShowTime('i'); 
#line 592 "OperatingSystem.c"
ComputerSystem_DebugMessage(120, 'i', numberOfClockInterrupts); 
#line 593 "OperatingSystem.c"
if (OperatingSystem_CheckSleepingProcessQueue() != (-1)){
{ 
#line 594 "OperatingSystem.c"
OperatingSystem_PrintStatus(); 
#line 595 "OperatingSystem.c"
if (OperatingSystem_PerformSwap()){
{ 
#line 596 "OperatingSystem.c"
OperatingSystem_PrintStatus(); } }} }
#line 599 "OperatingSystem.c"
if (OperatingSystem_LongTermScheduler() > 0){
{ 
#line 600 "OperatingSystem.c"
OperatingSystem_PrintStatus(); 
#line 601 "OperatingSystem.c"
if (OperatingSystem_PerformSwap()){
{ 
#line 602 "OperatingSystem.c"
OperatingSystem_PrintStatus(); } }} }
# 3711 "OperatingSystemAspect.c"

}

# 3715 "OperatingSystemAspect.c"

}
 
#line 609 "OperatingSystem.c"
int OperatingSystem_CheckSleepingProcessQueue()  
# 3721 "OperatingSystemAspect.c"
{
# 3723 "OperatingSystemAspect.c"
int retValue_acc;




# 3729 "OperatingSystemAspect.c"
{

#line 610 "OperatingSystem.c"

#line 610 "OperatingSystem.c"
int result = (-1);
#line 611 "OperatingSystem.c"

#line 611 "OperatingSystem.c"
int i;
#line 612 "OperatingSystem.c"
for(i = 0;i < numberOfSleepingProcesses;i++) { { 
#line 618 "OperatingSystem.c"
if (processTable[sleepingProcessesQueue[i]].whenToWakeUp == numberOfClockInterrupts){
{ 
#line 614 "OperatingSystem.c"

#line 614 "OperatingSystem.c"
int pid = Heap_poll(sleepingProcessesQueue, 0, (&numberOfSleepingProcesses));
#line 615 "OperatingSystem.c"
OperatingSystem_MoveToTheREADYState(pid); 
#line 616 "OperatingSystem.c"
result++; } }} } 
#line 619 "OperatingSystem.c"

# 3755 "OperatingSystemAspect.c"
retValue_acc = result;
# 3757 "OperatingSystemAspect.c"
return (int )retValue_acc;
 
# 3760 "OperatingSystemAspect.c"

}

# 3764 "OperatingSystemAspect.c"
return (int )retValue_acc;

# 3767 "OperatingSystemAspect.c"

}
 
#line 622 "OperatingSystem.c"
_Bool OperatingSystem_PerformSwap()  
# 3773 "OperatingSystemAspect.c"
{
# 3775 "OperatingSystemAspect.c"
_Bool retValue_acc;




# 3781 "OperatingSystemAspect.c"
{

#line 623 "OperatingSystem.c"

#line 623 "OperatingSystem.c"
int pid;
#line 624 "OperatingSystem.c"

#line 624 "OperatingSystem.c"
int pidDaemon = Heap_getFirst(readyToRunQueue[1], numberOfReadyToRunProcesses[1]);
#line 625 "OperatingSystem.c"

#line 625 "OperatingSystem.c"
int pidUser = Heap_getFirst(readyToRunQueue[0], numberOfReadyToRunProcesses[0]);
#line 626 "OperatingSystem.c"
if (OperatingSystem_CheckPriority(executingProcessID, pidUser)){
{ 
#line 627 "OperatingSystem.c"
pid = Heap_poll(readyToRunQueue[0], 0, (&numberOfReadyToRunProcesses[0])); 
#line 628 "OperatingSystem.c"
OperatingSystem_Dispatch(pid); 
#line 629 "OperatingSystem.c"
OperatingSystem_ShowTime('s'); 
#line 630 "OperatingSystem.c"
ComputerSystem_DebugMessage(121, 's', pid, pidUser); 
#line 631 "OperatingSystem.c"

# 3809 "OperatingSystemAspect.c"
retValue_acc = 1;
# 3811 "OperatingSystemAspect.c"
return (_Bool )retValue_acc;
 } }else{
if (OperatingSystem_CheckPriority(executingProcessID, pidDaemon)){
{ 
#line 634 "OperatingSystem.c"
pid = Heap_poll(readyToRunQueue[1], 1, (&numberOfReadyToRunProcesses[1])); 
#line 635 "OperatingSystem.c"
OperatingSystem_Dispatch(pid); 
#line 636 "OperatingSystem.c"
OperatingSystem_ShowTime('s'); 
#line 637 "OperatingSystem.c"
ComputerSystem_DebugMessage(121, 's', pid, pidDaemon); 
#line 638 "OperatingSystem.c"

# 3826 "OperatingSystemAspect.c"
retValue_acc = 1;
# 3828 "OperatingSystemAspect.c"
return (_Bool )retValue_acc;
 } }}
#line 640 "OperatingSystem.c"

# 3833 "OperatingSystemAspect.c"
retValue_acc = 0;
# 3835 "OperatingSystemAspect.c"
return (_Bool )retValue_acc;
 
# 3838 "OperatingSystemAspect.c"

}

# 3842 "OperatingSystemAspect.c"
return (_Bool )retValue_acc;

# 3845 "OperatingSystemAspect.c"

}
 
