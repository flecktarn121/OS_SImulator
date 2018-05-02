#ifndef CHECKASSERTS_H
#define CHECKASSERTS_H

#define MAX_ASSERTS 500
#define MAXIMUMLENGTH 64
#define ASSERTS_FILE "asserts"
#define E_SIZE 8 



#define RMEM_OP 0
#define RMEM_O1 1
#define RMEM_O2 2
#define AMEM_OP 3
#define AMEM_O1 4
#define AMEM_O2 5
#define PC 6
#define ACC 7
#define IR_OP 8
#define IR_O1 9
#define IR_O2 10
#define PSW 11
#define MAR 12
#define MBR_OP 13
#define MBR_O1 14
#define MBR_O2 15
#define MMU_BS 16
#define MMU_LM 17
#define MMU_MAR 18
#define MMEM_MAR 19
#define MMBR_OP 20
#define MMBR_O1 21
#define MMBR_O2 22
#define XPID 23

typedef struct {
	int time;
	int value;
	char element[E_SIZE]; // Se almacenará lo arriba indicado o MEM si es un elemento de memoria (o RMEM y AMEM en su caso)
	int address;
} ASSERT_DATA;

// Functions prototypes
 int Asserts_LoadAsserts();
 void Asserts_CheckAsserts();
 void Asserts_TerminateAssertions();

extern ASSERT_DATA asserts[MAX_ASSERTS];

#endif