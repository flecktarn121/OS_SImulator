
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

extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val) ; 
extern void __utac__exception__cf_handler_free(void * exception);
extern void __utac__exception__cf_handler_reset(void * exception) ; 
extern void * __utac__error_stack_mgt(void * env , int mode, int count) ;

# 1 "MyAspect.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "MyAspect.c" 
# 5 "Clock.h" 1
void Clock_Update(); 
#line 6 "Clock.h"
int Clock_GetTime(); 
# 2 "MyAspect.c" 2
# 1 "Asserts.h" 1
# 37 "Asserts.h" 
int Asserts_LoadAsserts(); 
#line 38 "Asserts.h"
void Asserts_CheckAsserts(); 
#line 5 "MyAspect.c"
 inline void __utac_acc__Aspect__1(void) { 



#line 6 "MyAspect.c"
Clock_Update(); }

 
#line 9 "MyAspect.c"
 inline void __utac_acc__Aspect__2(void) { 



#line 10 "MyAspect.c"
Asserts_CheckAsserts(); }

 
#line 13 "MyAspect.c"
 inline void __utac_acc__Aspect__3(void) { 



#line 14 "MyAspect.c"
Clock_Update(); }

 



