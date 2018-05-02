#include <stdio.h>
#include <stdlib.h>
#include "ComputerSystem.h"
#include "OperatingSystem.h"
#include "ComputerSystemBase.h"
#include "Processor.h"
#include "Messages.h"
#include "Asserts.h"

// Functions prototypes
void ComputerSystem_PrintProgramList();
// Array that contains basic data about all daemons
// and all user programs specified in the command line
PROGRAMS_DATA *programList[PROGRAMSMAXNUMBER];

int arrivalTimeQueue[PROGRAMSMAXNUMBER];
int numberOfProgramsInArrivalTimeQueue;

// Powers on of the Computer System.
void ComputerSystem_PowerOn(int argc, char *argv[]) {

	// Load debug messages
	int nm=0;
	nm=Messages_Load_Messages(nm,TEACHER_MESSAGES_FILE);
	nm=Messages_Load_Messages(nm,STUDENT_MESSAGES_FILE);
	printf("%d Messages Loaded\n",nm);

	int na=Asserts_LoadAsserts();
	if (na==-1)
		printf("Asserts file unavailable\n");
	else
		printf("%d Asserts Loaded\n",na);

	// Obtain a list of programs in the command line
	int daemonsBaseIndex = ComputerSystem_ObtainProgramList(argc, argv);

	//Show the loaded user programs
	ComputerSystem_PrintProgramList();

	// Request the OS to do the initial set of tasks. The last one will be
	// the processor allocation to the process with the highest priority
	OperatingSystem_Initialize(daemonsBaseIndex);
	
	
	// Tell the processor to begin its instruction cycle 
	Processor_InstructionCycleLoop();
	
}

// Powers off the CS (the C program ends)
void ComputerSystem_PowerOff() {
	// Show message in red colour: "END of the simulation\n" 
	ComputerSystem_DebugMessage(99,SHUTDOWN); 
	exit(0);
}

/////////////////////////////////////////////////////////
//  New functions below this line  //////////////////////
void ComputerSystem_PrintProgramList() {
	int i;
	PROGRAMS_DATA program;
	ComputerSystem_DebugMessage(101, INIT);
	for( i = 0; i < PROGRAMSMAXNUMBER; i++){
		if(i != 0 && programList[i] != NULL){
			program = *programList[i];
			ComputerSystem_DebugMessage(102, INIT, program.executableName, program.arrivalTime);
		}
	}
}
