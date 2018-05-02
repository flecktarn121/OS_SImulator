#include "Asserts.h"
#include <string.h>
#include <stdio.h>
#include "MainMemory.h"
#include "Clock.h"
#include "ComputerSystemBase.h"
#include "MMU.h"
#include "Heap.h"

extern MEMORYCELL mainMemory[];
extern int registerPC_CPU; // Program counter
extern int registerAccumulator_CPU; // Accumulator
extern MEMORYCELL registerIR_CPU; // Instruction register
extern unsigned int registerPSW_CPU; // Processor state word
extern int registerMAR_CPU; // Memory Address Register
extern MEMORYCELL registerMBR_CPU; // Memory Buffer Register
extern int executingProcessID; // Executing process PID


char *elements[]={
	"RMEM_OP",
	"RMEM_O1",
	"RMEM_O2",
	"AMEM_OP",
	"AMEM_O1",
	"AMEM_O2",
	"PC",
	"ACC",
	"IR_OP",
	"IR_O1",
	"IR_O2",
	"PSW",
	"MAR",
	"MBR_OP",
	"MBR_O1",
	"MBR_O2",
	"MMU_BS",
	"MMU_LM",
	"MMU_MAR",
	"MMEM_MAR",
	"MMBR_OP",
	"MMBR_O1",
	"MMBR_O2",
	"XPID",
	NULL};

ASSERT_DATA asserts[MAX_ASSERTS];

// Montículo de asertos
int assertsQueue[MAX_ASSERTS];
int numOfElementsInAssertsQueue=0;

// La lista de asertos en todos los instantes está al final de la assertsQueue metida al revés
int beginOfAllTimeAsserts=MAX_ASSERTS;

// prototype functions
int Asserts_IsThereANewAssert(int);
void Asserts_CheckOneAssert(int);

extern int GEN_ASSERTS;

int elementNumber(char *cmp) {
 int n=0;

 while ((elements[n]!=NULL) && strcmp(cmp, elements[n]))
   n++;

 if (elements[n]==NULL) return -1;
 else return n;
	
}

void strcmpSpaces(char *target, char *src, int nChars) {
	int l, s, t;

	l=strlen(src);
	t=0;
	for (s=0; (t<nChars-1) && (s<l); s++) {
		if (src[s]!=' ') target[t++]=src[s];
	}
	target[t]=0;
}

int Asserts_LoadAsserts() {
	// leer el fichero e ir almacenando en cada elemento lo que sea;
 ASSERT_DATA a;

 char lineRead[MAXIMUMLENGTH];
 FILE *mf;
 char *time, *element, *value, *address;
 char svalue[E_SIZE];
 

 int lineNumber=0;;
 int numberAsserts=0;
 int rc;
 int en;

 mf=fopen(ASSERTS_FILE, "r");
 if (mf==NULL) {
   asserts[0].time=-1;
   return -1;
  }
   
   while (fgets(lineRead,MAXIMUMLENGTH, mf) != NULL && numberAsserts<MAX_ASSERTS) {
	lineNumber++;	
	// Leemos hasta 4 elementos por aserto
	time=strtok(lineRead,",");
    if (time==NULL){
 		printf("Illegal Assert in line %d of file %s\n",lineNumber,ASSERTS_FILE);
		continue;
	}
	
	if ((time[0]=='/') || (time[0]=='\n'))
		continue;

	element=strtok(NULL,",");
    if (element==NULL){
 		printf("Illegal Assert in line %d of file %s\n",lineNumber,ASSERTS_FILE);
		continue;
	}

	value=strtok(NULL,",");
    if (value==NULL){
 		printf("Illegal Assert in line %d of file %s\n",lineNumber,ASSERTS_FILE);
		continue;
	}
    address=strtok(NULL,"\n");

    //printf("-> %s, %s, %s, %s\n",time, element, value, address);
	
	strcmpSpaces(a.element, element,E_SIZE);
	if (strcmp(time,"*")) {
      rc=sscanf(time,"%d",&a.time);
	  if (rc==0){
 		printf("Illegal time format in line %d of file %s\n",lineNumber,ASSERTS_FILE);
		continue;
	  }
	}
    else a.time=-33; // All the instants of time.
        
	//printf("-%s-\n",a.element);
	// Si vamos a verificar un código de operación leemos un char (RMEM_OP, AMEM_OP,IR_OP, MBR_OP, MMBR_OP)
	en=elementNumber(a.element);
	if ((en==RMEM_OP) || (en==AMEM_OP) || (en==IR_OP) || (en==MBR_OP) || (en==MMBR_OP)) {
		strcmpSpaces(svalue, value,E_SIZE);
		rc=sscanf(svalue,"%c",(char *) &a.value);

	}
	else
		rc=sscanf(value,"%d",&a.value);

    if (rc==0){
 			printf("Illegal expected value format in line %d of file %s (%s)\n",lineNumber,ASSERTS_FILE,value);
			continue;
	}

    // Si vamos a verificar una posición de memoria leemos la dirección (RMEM_OP, RMEM_O1, RMEM_O2, AMEM_OP, AMEM_O1, AMEM_O2)
	en=elementNumber(a.element);
	if ((en==RMEM_OP) || (en==RMEM_O1) || (en==RMEM_O2) || (en==AMEM_OP) || (en==AMEM_O1) || (en==AMEM_O2)) {
		if (address==NULL){
 			printf("Illegal Assert in line %d of file %s\n",lineNumber,ASSERTS_FILE);
			continue;
		}
		rc=sscanf(address,"%d",&a.address);
        if (rc==0){
	 		printf("Illegal address format in line %d of file %s\n",lineNumber,ASSERTS_FILE);
			continue;    
	    }
	}
	else a.address=0;

	asserts[numberAsserts]=a;

	if (a.time!=-33)
		// Lo mete en cola de asertos
		Heap_add(numberAsserts,assertsQueue,QUEUE_ASSERTS,&numOfElementsInAssertsQueue,MAX_ASSERTS);
	else
		// Lo mete en lista al final y guarda donde empiezan los asertos sin tiempo
		assertsQueue[--beginOfAllTimeAsserts]=numberAsserts;

	numberAsserts++;
   }
   fclose(mf);
   if (numberAsserts==MAX_ASSERTS)
		printf("Warning maximun number of asserts reached !!!  (%d)\n",numberAsserts);
   else
	   asserts[numberAsserts].time=-1; // Para indicar el fin de los asertos (sobraría)
   return numberAsserts;
}


void genAssertMsg(int time, char *ele, int realValue, int addr) {
	int en;

	printf("%d, %s",time, ele);
	en=elementNumber(ele);
	
	if ((en==RMEM_OP) || (en==AMEM_OP) || (en==IR_OP) || (en==MBR_OP)) 
	  	printf(", %c",realValue);
	else
		printf(", %d", realValue);
	
	if ((en==RMEM_OP) || (en==RMEM_O1) || (en==RMEM_O2) || (en==AMEM_OP) || (en==AMEM_O1) || (en==AMEM_O2)) 
		printf(", %d", addr);
	
	printf("\n");
}
	
void assertMsg(int time, char *ele, int expectedValue, int realValue, int addr) {
	int en;

	if (GEN_ASSERTS) { 
		genAssertMsg(time, ele, realValue,addr);
		return;
	}	

	// printf("Assert failed. Time: %d; Element: %s; ", time, ele);
	ComputerSystem_DebugMessage(90,ERROR, time, ele);
	en=elementNumber(ele);
	
	if ((en==RMEM_OP) || (en==AMEM_OP) || (en==IR_OP) || (en==MBR_OP)) 
	  	// printf("Expected: '%c'; Real: '%c'", expectedValue, realValue);
	  	ComputerSystem_DebugMessage(91,ERROR, expectedValue, realValue);
	else
		// printf("Expected: %d; Real: %d", expectedValue, realValue);
		ComputerSystem_DebugMessage(92,ERROR, expectedValue, realValue);
	
	if ((en==RMEM_OP) || (en==RMEM_O1) || (en==RMEM_O2) || (en==AMEM_OP) || (en==AMEM_O1) || (en==AMEM_O2)) 
		// printf("; Memory address: %d", addr);
		ComputerSystem_DebugMessage(93,ERROR, addr);
	
	// printf("\n");
	ComputerSystem_DebugMessage(98, ERROR, "\n");
}


void Asserts_CheckAsserts(){
	int na;
	int globalCounter=Clock_GetTime();
	
 	// Checking unique time asserts
	while (Asserts_IsThereANewAssert(globalCounter)>0) {
		na=Heap_poll(assertsQueue,QUEUE_ASSERTS,&numOfElementsInAssertsQueue);
		// if ((asserts[na].time==globalCounter) || (asserts[na].time==-33)) {
		if ((asserts[na].time==globalCounter)/* || (asserts[na].time==-33)*/) {
            Asserts_CheckOneAssert(na);
		}
		else {
			ComputerSystem_DebugMessage(95,ERROR,asserts[na].time,asserts[na].element); 
		}
	}

	na=beginOfAllTimeAsserts;

   // Checking asserts for all time
 	while (na<MAX_ASSERTS) {
 		 Asserts_CheckOneAssert(assertsQueue[na++]);
 	}
}

void Asserts_CheckOneAssert(int na){
	MEMORYCELL data;
	int op=elementNumber(asserts[na].element);
	int globalCounter=Clock_GetTime();

	switch (op) {
		case RMEM_OP:  	
				if ((mainMemory[MMU_GetBase()+asserts[na].address].operationCode!=(char)asserts[na].value) || GEN_ASSERTS)
				assertMsg(globalCounter,"RMEM_OP",asserts[na].value,mainMemory[MMU_GetBase()+asserts[na].address].operationCode,asserts[na].address);
				break;
		case RMEM_O1:  	
				if ((mainMemory[MMU_GetBase()+asserts[na].address].operand1!=(char)asserts[na].value) || GEN_ASSERTS)
				assertMsg(globalCounter,"RMEM_O1",asserts[na].value,mainMemory[MMU_GetBase()+asserts[na].address].operand1,asserts[na].address);
				break;		
		case RMEM_O2:
				if ((mainMemory[MMU_GetBase()+asserts[na].address].operand2!=(char)asserts[na].value) || GEN_ASSERTS)
				assertMsg(globalCounter,"RMEM_O2",asserts[na].value,mainMemory[MMU_GetBase()+asserts[na].address].operand2,asserts[na].address);
			  	break;					
		case AMEM_OP: 				       
				if ((mainMemory[asserts[na].address].operationCode!=(char)asserts[na].value) || GEN_ASSERTS)
				assertMsg(globalCounter,"AMEM_OP",asserts[na].value,mainMemory[asserts[na].address].operationCode,asserts[na].address);
			 	break;
		case AMEM_O1:  
				if ((mainMemory[asserts[na].address].operand1!=asserts[na].value)|| GEN_ASSERTS)
				assertMsg(globalCounter,"AMEM_01",asserts[na].value,mainMemory[asserts[na].address].operand1,asserts[na].address);
			 	break;
		case AMEM_O2:
				if ((mainMemory[asserts[na].address].operand2!=asserts[na].value)|| GEN_ASSERTS)
				assertMsg(globalCounter,"AMEM_02",asserts[na].value,mainMemory[asserts[na].address].operand2,asserts[na].address);
			 	break;	 		 	
		case PC:  
				if ((registerPC_CPU!=asserts[na].value)|| GEN_ASSERTS)
				assertMsg(globalCounter,"PC",asserts[na].value,registerPC_CPU,0);
				break;
		case ACC:  
				if ((registerAccumulator_CPU!=asserts[na].value)|| GEN_ASSERTS)
				assertMsg(globalCounter,"ACC",asserts[na].value,registerAccumulator_CPU,0);
				break;
		case IR_OP: 
				if ((registerIR_CPU.operationCode!=(char) asserts[na].value)|| GEN_ASSERTS)
				assertMsg(globalCounter,"IR_OP",asserts[na].value,registerIR_CPU.operationCode,0);
				break;
		case IR_O1:
				if ((registerIR_CPU.operand1!= asserts[na].value)|| GEN_ASSERTS)
				assertMsg(globalCounter,"IR_01",asserts[na].value,registerIR_CPU.operand1,0);
				break;
		case IR_O2:
				if ((registerIR_CPU.operand2!=asserts[na].value)|| GEN_ASSERTS)
				assertMsg(globalCounter,"IR_02",asserts[na].value,registerIR_CPU.operand2,0);			
				break;
		case PSW:
				if ((registerPSW_CPU!=asserts[na].value)|| GEN_ASSERTS)
				assertMsg(globalCounter,"PSW",asserts[na].value,registerPSW_CPU,0);
				break;
		case MAR: 
				if ((registerMAR_CPU!=asserts[na].value)|| GEN_ASSERTS)
				assertMsg(globalCounter,"MAR",asserts[na].value,registerMAR_CPU,0);
				break;
		case MBR_OP:
				if ((registerMBR_CPU.operationCode!=(char) asserts[na].value)|| GEN_ASSERTS)
				assertMsg(globalCounter,"MBR_OP",asserts[na].value,registerMBR_CPU.operationCode,0);
				break;
		case MBR_O1:
				if ((registerMBR_CPU.operand1!= asserts[na].value)|| GEN_ASSERTS)
				assertMsg(globalCounter,"MBR_O1",asserts[na].value,registerMBR_CPU.operand1,0);
				break;
		case MBR_O2:
				if ((registerMBR_CPU.operand2!=asserts[na].value) || GEN_ASSERTS)
				assertMsg(globalCounter,"MBR_02",asserts[na].value,registerMBR_CPU.operand2,0);			
				break;
		case MMU_BS:
				if ((MMU_GetBase()!=asserts[na].value) || GEN_ASSERTS)
				assertMsg(globalCounter,"MMU_BS",asserts[na].value,MMU_GetBase(),0);			
				break;
		case MMU_LM:
				if ((MMU_GetLimit()!=asserts[na].value) || GEN_ASSERTS)
				assertMsg(globalCounter,"MMU_LM",asserts[na].value,MMU_GetLimit(),0);			
				break;
		case MMU_MAR:
				if ((MMU_GetMAR()!=asserts[na].value) || GEN_ASSERTS)
				assertMsg(globalCounter,"MMU_MAR",asserts[na].value,MMU_GetMAR(),0);			
				break;
		case MMEM_MAR:
				if ((MainMemory_GetMAR()!=asserts[na].value) || GEN_ASSERTS)
				assertMsg(globalCounter,"MMEM_MAR",asserts[na].value,MainMemory_GetMAR(),0);			
				break;
		case MMBR_OP:
				MainMemory_GetMBR(&data);
				if ((data.operationCode!=asserts[na].value) || GEN_ASSERTS)
				assertMsg(globalCounter,"MMBR_OP",asserts[na].value,data.operationCode,0);			
				break;
		case MMBR_O1:
				MainMemory_GetMBR(&data);
				if ((data.operand1!=asserts[na].value) || GEN_ASSERTS)
				assertMsg(globalCounter,"MMBR_O1",asserts[na].value,data.operand1,0);			
				break;
		case MMBR_O2:
				MainMemory_GetMBR(&data);
				if ((data.operand2!=asserts[na].value) || GEN_ASSERTS)
				assertMsg(globalCounter,"MMBR_O2",asserts[na].value,data.operand2,0);			
				break;
		case XPID:
				if ((executingProcessID!=asserts[na].value) || GEN_ASSERTS)
				assertMsg(globalCounter,"XPID",asserts[na].value,executingProcessID,0);			
				break;
		default: ;

	}
}

// This function returns:
// 		-1 if no asserts in assertsQueue
//		1 if any asserts is now
//		0 else
// considered by CheckAsserts to compare at the current time
int Asserts_IsThereANewAssert(int currentTime) {
#ifdef QUEUE_ASSERTS
		int indexInAsserts = Heap_getFirst(assertsQueue,numOfElementsInAssertsQueue);

		if (indexInAsserts < 0)
		  return -1;  // No new asserts to check
		
		if (asserts[indexInAsserts].time <= currentTime)
		  return 1;  //  There'is new assert
#endif		 
		return 0;  //  No assert in current time
}

void Asserts_TerminateAssertions(){
	if (numOfElementsInAssertsQueue)
		// printf("Warning, numOfElementsInAssertsQueue unchecked asserts in Asserts queue !!! );
		ComputerSystem_DebugMessage(94,ERROR,numOfElementsInAssertsQueue);
};