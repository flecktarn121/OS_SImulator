#include "OperatingSystem.h"
#include "OperatingSystemBase.h"
#include "MMU.h"
#include "Processor.h"
#include "Buses.h"
#include "Heap.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

// Functions prototypes
void OperatingSystem_PrepareDaemons();
void OperatingSystem_PCBInitialization(int, int, int, int, int);
void OperatingSystem_MoveToTheREADYState(int);
void OperatingSystem_Dispatch(int);
void OperatingSystem_RestoreContext(int);
void OperatingSystem_SaveContext(int);
void OperatingSystem_TerminateProcess();
int OperatingSystem_LongTermScheduler();
void OperatingSystem_PreemptRunningProcess();
int OperatingSystem_CreateProcess(int);
int OperatingSystem_ObtainMainMemory(int, int);
int OperatingSystem_ShortTermScheduler();
int OperatingSystem_ExtractFromReadyToRun();
void OperatingSystem_HandleException();
void OperatingSystem_HandleSystemCall();
void OperatingSystem_PrintReadyToRunQueue();
void OperatingSystem_HandleClockInterrupt();
void OperatingSystem_SleepProcess();
int OperatingSystem_CheckSleepingProcessQueue();
bool OperatingSystem_CheckPriority(int currentPID, int candidatePID);
bool OperatingSystem_PerformSwap();
int OperatingSystem_GetExecutingProcessID();
int OperatingSystem_IsThereANewProgram();

char *statesNames[5] = {"NEW", "READY", "EXECUTING", "BLOCKED", "EXIT"};

// The process table
PCB processTable[PROCESSTABLEMAXSIZE];

// Heap with blocked processes sorted by when to wakeup
int sleepingProcessesQueue[PROCESSTABLEMAXSIZE];
int numberOfSleepingProcesses=0;

// Address base for OS code in this version
int OS_address_base = PROCESSTABLEMAXSIZE * MAINMEMORYSECTIONSIZE;

// Identifier of the current executing process
int executingProcessID=NOPROCESS;

// Identifier of the System Idle Process
int sipID;

// Begin indes for daemons in programList
int baseDaemonsInProgramList; 

// Array that contains the identifiers of the READY processes
int readyToRunQueue[NUMBEROFQUEUES][PROCESSTABLEMAXSIZE];
int numberOfReadyToRunProcesses[NUMBEROFQUEUES] = {0 , 0};
//int readyToRunQueue[PROCESSTABLEMAXSIZE];
//int numberOfReadyToRunProcesses=0;

// Variable containing the number of not terminated user processes
int numberOfNotTerminatedUserProcesses=0;

//Variable containing the number of clock interrupts
int numberOfClockInterrupts = 0;

// Initial set of tasks of the OS
void OperatingSystem_Initialize(int daemonsIndex) {
	
	int i, selectedProcess;
	FILE *programFile; // For load Operating System Code

	// Obtain the memory requirements of the program
	int processSize=OperatingSystem_ObtainProgramSize(&programFile, "OperatingSystemCode");

	// Load Operating System Code
	OperatingSystem_LoadProgram(programFile, OS_address_base, processSize);
	
	// Process table initialization (all entries are free)
	for (i=0; i<PROCESSTABLEMAXSIZE;i++)
		processTable[i].busy=0;
	
	// Initialization of the interrupt vector table of the processor
	Processor_InitializeInterruptVectorTable(OS_address_base+1);
		
	// Create all system daemon processes
	OperatingSystem_PrepareDaemons(daemonsIndex);
	
	//Fill the ArrivalTimeQueue
	ComputerSystem_FillInArrivalTimeQueue();
	OperatingSystem_PrintStatus();
	
	// Create all user processes from the information given in the command line
	if(OperatingSystem_LongTermScheduler() <= 1 && (OperatingSystem_
IsThereANewProgram() == 1)){
		OperatingSystem_ReadyToShutdown();
		OperatingSystem_Dispatch(sipID);
	}
	
	if (strcmp(programList[processTable[sipID].programListIndex]->executableName,"SystemIdleProcess")) {
		// Show message "ERROR: Missing SIP program!\n"
		OperatingSystem_ShowTime(SHUTDOWN);		
		ComputerSystem_DebugMessage(21,SHUTDOWN);
		exit(1);		
	}

	// At least, one user process has been created
	// Select the first process that is going to use the processor
	selectedProcess=OperatingSystem_ShortTermScheduler();
		

	// Assign the processor to the selected process
	OperatingSystem_Dispatch(selectedProcess);

	// Initial operation for Operating System
	Processor_SetPC(OS_address_base);

}

// Daemon processes are system processes, that is, they work together with the OS.
// The System Idle Process uses the CPU whenever a user process is able to use it
void OperatingSystem_PrepareDaemons(int programListDaemonsBase) {
  
	// Include a entry for SystemIdleProcess at 0 position
	programList[0]=(PROGRAMS_DATA *) malloc(sizeof(PROGRAMS_DATA));

	programList[0]->executableName="SystemIdleProcess";
	programList[0]->arrivalTime=0;
	programList[0]->type=DAEMONPROGRAM; // daemon program

	sipID=INITIALPID%PROCESSTABLEMAXSIZE; // first PID for sipID

	// Prepare aditionals daemons here
	// index for aditionals daemons program in programList
	baseDaemonsInProgramList=programListDaemonsBase;

}

int OperatingSystem_GetExecutingProcessID(){
	return executingProcessID;
}

// The LTS is responsible of the admission of new processes in the system.
// Initially, it creates a process from each program specified in the 
// 			command lineand daemons programs
int OperatingSystem_LongTermScheduler() {
  
	int PID, i,
		numberOfSuccessfullyCreatedProcesses=0;
	
	while(OperatingSystem_IsThereANewProgram() == 1) {
		i = Heap_poll(arrivalTimeQueue,USERPROCESSQUEUE ,&numberOfProgramsInArrivalTimeQueue);
		if((PID=OperatingSystem_CreateProcess(i)) == NOFREEENTRY){
			PROGRAMS_DATA program = *programList[i];
			OperatingSystem_ShowTime(ERROR);
			ComputerSystem_DebugMessage(103, ERROR, program.executableName);
			
		}else if(PID == PROGRAMDOESNOTEXIST){
			PROGRAMS_DATA program = *programList[i];
			OperatingSystem_ShowTime(ERROR);
			ComputerSystem_DebugMessage(104, ERROR,program.executableName, "---it does not exist---");

		}else if(PID == PROGRAMNOTVALID){
			PROGRAMS_DATA program = *programList[i];
			OperatingSystem_ShowTime(ERROR);
			ComputerSystem_DebugMessage(104, ERROR, program.executableName, "---invalid priority or size---");

		}else if(PID == TOOBIGPROCESS){
			PROGRAMS_DATA program = *programList[i];
			OperatingSystem_ShowTime(SHUTDOWN);
			OperatingSystem_ShowTime(ERROR);
			ComputerSystem_DebugMessage(105, ERROR, program.executableName);

		}else{
			numberOfSuccessfullyCreatedProcesses++;
			if (programList[i]->type==USERPROGRAM) 
				numberOfNotTerminatedUserProcesses++;
			// Move process to the ready state
			OperatingSystem_MoveToTheREADYState(PID);
		}
	}
	if(numberOfSuccessfullyCreatedProcesses > 0){
		OperatingSystem_PrintStatus();
	}
	// Return the number of succesfully created processes
	return numberOfSuccessfullyCreatedProcesses;
}


// This function creates a process from an executable program
int OperatingSystem_CreateProcess(int indexOfExecutableProgram) {
  	
	int PID;
	int processSize;
	int loadingPhysicalAddress;
	int priority;
	FILE *programFile;
	PROGRAMS_DATA *executableProgram=programList[indexOfExecutableProgram];

	// Obtain a process ID
	if((PID=OperatingSystem_ObtainAnEntryInTheProcessTable()) == NOFREEENTRY){
		return NOFREEENTRY;
	}

	// Obtain the memory requirements of the program
	if((processSize=OperatingSystem_ObtainProgramSize(&programFile, executableProgram->executableName)) == PROGRAMDOESNOTEXIST){
		return processSize;
	}	

	// Obtain the priority for the process
	if((priority=OperatingSystem_ObtainPriority(programFile)) == PROGRAMNOTVALID || processSize == PROGRAMNOTVALID){
		return PROGRAMNOTVALID;
	}
	
	// Obtain enough memory space
 	if((loadingPhysicalAddress=OperatingSystem_ObtainMainMemory(processSize, PID)) == TOOBIGPROCESS){
		return TOOBIGPROCESS;
	}

	// Load program in the allocated memory
	if((OperatingSystem_LoadProgram(programFile, loadingPhysicalAddress, processSize)) < 0){
		return TOOBIGPROCESS;
	}
	
	// PCB initialization
	OperatingSystem_PCBInitialization(PID, loadingPhysicalAddress, processSize, priority, indexOfExecutableProgram);
	
	// Show message "Process [PID] created from program [executableName]\n"
	OperatingSystem_ShowTime(INIT);
	ComputerSystem_DebugMessage(22,INIT,PID,executableProgram->executableName);
	
	return PID;
}


// Main memory is assigned in chunks. All chunks are the same size. A process
// always obtains the chunk whose position in memory is equal to the processor identifier
int OperatingSystem_ObtainMainMemory(int processSize, int PID) {

 	if (processSize>MAINMEMORYSECTIONSIZE)
		return TOOBIGPROCESS;
	
 	return PID*MAINMEMORYSECTIONSIZE;
}


// Assign initial values to all fields inside the PCB
void OperatingSystem_PCBInitialization(int PID, int initialPhysicalAddress, int processSize, int priority, int processPLIndex) {

	processTable[PID].busy=1;
	processTable[PID].queueID = programList[processPLIndex]-> type;
	processTable[PID].initialPhysicalAddress=initialPhysicalAddress;
	processTable[PID].processSize=processSize;
	processTable[PID].state=NEW;
	processTable[PID].priority=priority;
	processTable[PID].programListIndex=processPLIndex;
	// Daemons run in protected mode and MMU use real address
	if (programList[processPLIndex]->type == DAEMONPROGRAM) {
		processTable[PID].copyOfPCRegister=initialPhysicalAddress;
		processTable[PID].queueID = DAEMONSQUEUE;
		processTable[PID].copyOfPSWRegister= ((unsigned int) 1) << EXECUTION_MODE_BIT;
	} 
	else {
		processTable[PID].copyOfPCRegister=0;
		processTable[PID].queueID = USERPROCESSQUEUE;
		processTable[PID].copyOfPSWRegister=0;
	}
	OperatingSystem_ShowTime(SYSPROC);
	ComputerSystem_DebugMessage(111,SYSPROC, PID, statesNames[NEW_STATE]); 
}


// Move a process to the READY state: it will be inserted, depending on its priority, in
// a queue of identifiers of READY processes
void OperatingSystem_MoveToTheREADYState(int PID) {
	//TODO: modify here the table of processes, differenciating between dameon and user processes (by means of the program data atribute type.
	if(PID >= 0){
		if (Heap_add(PID, readyToRunQueue[processTable[PID].queueID],processTable[PID].queueID ,&numberOfReadyToRunProcesses[processTable[PID].queueID] ,PROCESSTABLEMAXSIZE)>=0) {
			char *previousState;		
			if(processTable[PID].state == NEW){
				previousState = statesNames[NEW_STATE];
			}else{
				previousState = statesNames[BLOCKED_STATE];
			}
			processTable[PID].state=READY;
			char *newState = statesNames[READY_STATE];
			OperatingSystem_ShowTime(SYSPROC);
			ComputerSystem_DebugMessage(110, SYSPROC, PID, previousState, newState);
		} 
		//OperatingSystem_PrintReadyToRunQueue();
	}
}


// The STS is responsible of deciding which process to execute when specific events occur.
// It uses processes priorities to make the decission. Given that the READY queue is ordered
// depending on processes priority, the STS just selects the process in front of the READY queue
int OperatingSystem_ShortTermScheduler() {
	
	int selectedProcess;

	selectedProcess=OperatingSystem_ExtractFromReadyToRun();
	
	return selectedProcess;
}


// Return PID of more priority process in the READY queue
int OperatingSystem_ExtractFromReadyToRun() {
  
	int selectedProcess=NOPROCESS;

	selectedProcess=Heap_poll(readyToRunQueue[USERPROCESSQUEUE],USERPROCESSQUEUE ,&numberOfReadyToRunProcesses[USERPROCESSQUEUE]);
	if(selectedProcess == NOPROCESS){
		selectedProcess=Heap_poll(readyToRunQueue[DAEMONSQUEUE],DAEMONSQUEUE ,&numberOfReadyToRunProcesses[DAEMONSQUEUE]);
	}
	// Return most priority process or NOPROCESS if empty queue
	return selectedProcess; 
}


// Function that assigns the processor to a process
void OperatingSystem_Dispatch(int PID) {

	// The process identified by PID becomes the current executing process
	executingProcessID=PID;
	// Change the process' state
	char *previousState = statesNames[READY_STATE];
	processTable[PID].state=EXECUTING;
	char *newState = statesNames[EXECUTING_STATE];
	OperatingSystem_ShowTime(SYSPROC);
	ComputerSystem_DebugMessage(110, SYSPROC, PID, previousState, newState);
	// Modify hardware registers with appropriate values for the process identified by PID
	OperatingSystem_RestoreContext(PID);
}


// Modify hardware registers with appropriate values for the process identified by PID
void OperatingSystem_RestoreContext(int PID) {
  
	// New values for the CPU registers are obtained from the PCB
	Processor_CopyInSystemStack(MAINMEMORYSIZE-1,processTable[PID].copyOfPCRegister);
	Processor_CopyInSystemStack(MAINMEMORYSIZE-2,processTable[PID].copyOfPSWRegister);
	Processor_SetAccumulator(processTable[PID].copyOfACCRegister);
	
	// Same thing for the MMU registers
	MMU_SetBase(processTable[PID].initialPhysicalAddress);
	MMU_SetLimit(processTable[PID].processSize);
}


// Function invoked when the executing process leaves the CPU 
void OperatingSystem_PreemptRunningProcess() {

	// Save in the process' PCB essential values stored in hardware registers and the system stack
	OperatingSystem_SaveContext(executingProcessID);
	// Change the process' state
	OperatingSystem_MoveToTheREADYState(executingProcessID);
	// The processor is not assigned until the OS selects another process
	executingProcessID=NOPROCESS;
}


// Save in the process' PCB essential values stored in hardware registers and the system stack
void OperatingSystem_SaveContext(int PID) {
	
	// Load PC saved for interrupt manager
	processTable[PID].copyOfPCRegister=Processor_CopyFromSystemStack(MAINMEMORYSIZE-1);
	
	// Load PSW saved for interrupt manager
	processTable[PID].copyOfPSWRegister=Processor_CopyFromSystemStack(MAINMEMORYSIZE-2);
	
	//Load Acc saved for interrupt manager
		processTable[PID].copyOfACCRegister=Processor_GetAccumulator();

	
}


// Exception management routine
void OperatingSystem_HandleException() {
  
	// Show message "Process [executingProcessID] has generated an exception and is terminating\n"
	OperatingSystem_ShowTime(SYSPROC);
	ComputerSystem_DebugMessage(23,SYSPROC,executingProcessID);
	//ComputerSystem
	OperatingSystem_TerminateProcess();
	OperatingSystem_PrintStatus();
}


// All tasks regarding the removal of the process
void OperatingSystem_TerminateProcess() {
  
	int selectedProcess;
	char *previousState;	
	if(processTable[executingProcessID].state == NEW){
		previousState = statesNames[NEW_STATE];
	}else if(processTable[executingProcessID].state == BLOCKED){
		previousState = statesNames[BLOCKED_STATE];
	}else{
		previousState = statesNames[EXECUTING_STATE];
	}
	processTable[executingProcessID].state=EXIT;
	char *newState = statesNames[EXIT_STATE];
	OperatingSystem_ShowTime(SYSPROC);
	ComputerSystem_DebugMessage(110, SYSPROC, executingProcessID, previousState, newState);
	// One more process that has terminated
	numberOfNotTerminatedUserProcesses--;
	
	if ((numberOfNotTerminatedUserProcesses<=0) && (OperatingSystem_
IsThereANewProgram() < 0)) {
		// Simulation must finish 
		OperatingSystem_ReadyToShutdown();
	}
	// Select the next process to execute (sipID if no more user processes)
	selectedProcess=OperatingSystem_ShortTermScheduler();
	
	// Assign the processor to that process
	OperatingSystem_Dispatch(selectedProcess);

}


// System call management routine
void OperatingSystem_HandleSystemCall() {
  
	int systemCallID;
	int pid;
	// Register A contains the identifier of the issued system call
	systemCallID=Processor_GetRegisterA();
	
	switch (systemCallID) {
		case SYSCALL_PRINTEXECPID:
			// Show message: "Process [executingProcessID] has the processor assigned\n"
			OperatingSystem_ShowTime(SYSPROC);
			ComputerSystem_DebugMessage(24,SYSPROC,executingProcessID);
			break;

		case SYSCALL_END:
			// Show message: "Process [executingProcessID] has requested to terminate\n"
			OperatingSystem_ShowTime(SYSPROC);
			ComputerSystem_DebugMessage(25,SYSPROC,executingProcessID);
			OperatingSystem_TerminateProcess();
			OperatingSystem_PrintStatus();
			break;
		case SYSCALL_YIELD:
			//Show message Process [old process] transfers control of the processor to process [new process]
			if((pid = OperatingSystem_ExtractFromReadyToRun()) != NOPROCESS){
				if(OperatingSystem_CheckPriority(executingProcessID, pid)){
					OperatingSystem_PreemptRunningProcess();
					OperatingSystem_Dispatch(pid);
					OperatingSystem_PrintStatus();
				}
			}
			break;
		case SYSCALL_SLEEP:
			OperatingSystem_SleepProcess();			
			OperatingSystem_PrintStatus();
			break;
	}
}

bool OperatingSystem_CheckPriority(int currentPID, int candidatePID){
	if(processTable[currentPID].queueID == processTable[candidatePID].queueID){
		return processTable[candidatePID].priority > processTable[currentPID].priority;
	}else if((processTable[currentPID].queueID == USERPROCESSQUEUE) && (processTable[candidatePID].queueID == DAEMONSQUEUE)){
		return false;
	}else if((processTable[currentPID].queueID == DAEMONSQUEUE) && (processTable[candidatePID].queueID == USERPROCESSQUEUE)){
		return true;
	}
	return false;
}

void OperatingSystem_SleepProcess(){
	int pid = executingProcessID;
	processTable[executingProcessID].state = BLOCKED;
	processTable[executingProcessID].whenToWakeUp = abs(Processor_GetAccumulator()) + numberOfClockInterrupts + 1;
	Heap_add(pid, sleepingProcessesQueue, QUEUE_WAKEUP, &numberOfSleepingProcesses, PROCESSTABLEMAXSIZE);
	OperatingSystem_ShowTime(SYSPROC);
	ComputerSystem_DebugMessage(110, SYSPROC, pid, statesNames[EXECUTING_STATE], statesNames[BLOCKED_STATE]);
}
	
//	Implement interrupt logic calling appropriate interrupt handle
void OperatingSystem_InterruptLogic(int entryPoint){
	switch (entryPoint){
		case SYSCALL_BIT: // SYSCALL_BIT=2
			OperatingSystem_HandleSystemCall();
			break;
		case EXCEPTION_BIT: // EXCEPTION_BIT=6
			OperatingSystem_HandleException();
			break;
		case CLOCKINT_BIT:
			OperatingSystem_HandleClockInterrupt();
			break;
	}

}

void OperatingSystem_PrintReadyToRunQueue(){
	int i;
	int j;
	int PID;
	PCB pcb;
	OperatingSystem_ShowTime(SHORTTERMSCHEDULE);
	ComputerSystem_DebugMessage(106, SHORTTERMSCHEDULE);
	OperatingSystem_ShowTime(SHORTTERMSCHEDULE);
	ComputerSystem_DebugMessage(112, SHORTTERMSCHEDULE);
	for( i = 0; i < numberOfReadyToRunProcesses[USERPROCESSQUEUE]; i++){
		PID = readyToRunQueue[USERPROCESSQUEUE][i];
		pcb = processTable[PID];
		ComputerSystem_DebugMessage(107, SHORTTERMSCHEDULE, PID, pcb.priority);
	}
	ComputerSystem_DebugMessage(108, SHORTTERMSCHEDULE);
	OperatingSystem_ShowTime(SHORTTERMSCHEDULE);
	ComputerSystem_DebugMessage(113, SHORTTERMSCHEDULE);
	for( j = 1; j <= numberOfReadyToRunProcesses[DAEMONSQUEUE]; j++){
		PID = readyToRunQueue[DAEMONSQUEUE][i];
		pcb = processTable[PID];
		ComputerSystem_DebugMessage(107, SHORTTERMSCHEDULE, PID, pcb.priority); 
	}
	ComputerSystem_DebugMessage(108, SHORTTERMSCHEDULE);
	
}

void OperatingSystem_HandleClockInterrupt(){
	numberOfClockInterrupts++;
	OperatingSystem_ShowTime(INTERRUPT);
	ComputerSystem_DebugMessage(120, INTERRUPT, numberOfClockInterrupts);
	if (OperatingSystem_CheckSleepingProcessQueue() != NOPROCESS){
		OperatingSystem_PrintStatus();
		if(OperatingSystem_PerformSwap()){
			OperatingSystem_PrintStatus();
		}
	}
	if(OperatingSystem_LongTermScheduler() > 0){
		OperatingSystem_PrintStatus();
		if(OperatingSystem_PerformSwap()){
			OperatingSystem_PrintStatus();
		}
	}
	

}

int OperatingSystem_CheckSleepingProcessQueue(){
	int result = NOPROCESS;
	int i;
	for(i = 0; i < numberOfSleepingProcesses; i++){
		if(processTable[sleepingProcessesQueue[i]].whenToWakeUp == numberOfClockInterrupts){
			int pid = Heap_poll(sleepingProcessesQueue,QUEUE_WAKEUP , &numberOfSleepingProcesses);
			OperatingSystem_MoveToTheREADYState(pid);
			result++;
		}
	}
	return result;
}

bool OperatingSystem_PerformSwap(){
	int pid;
	int pidDaemon = Heap_getFirst(readyToRunQueue[DAEMONSQUEUE], numberOfReadyToRunProcesses[DAEMONSQUEUE]);
	int pidUser = Heap_getFirst(readyToRunQueue[USERPROCESSQUEUE], numberOfReadyToRunProcesses[USERPROCESSQUEUE]);
	if(OperatingSystem_CheckPriority(executingProcessID, pidUser)){
		pid=Heap_poll(readyToRunQueue[USERPROCESSQUEUE],USERPROCESSQUEUE ,&numberOfReadyToRunProcesses[USERPROCESSQUEUE]);
		OperatingSystem_Dispatch(pid);
		OperatingSystem_ShowTime(SHORTTERMSCHEDULE);
		ComputerSystem_DebugMessage(121, SHORTTERMSCHEDULE, pid, pidUser);
		return true;
	
	}else if(OperatingSystem_CheckPriority(executingProcessID, pidDaemon)){
		pid=Heap_poll(readyToRunQueue[DAEMONSQUEUE],DAEMONSQUEUE ,&numberOfReadyToRunProcesses[DAEMONSQUEUE]);
		OperatingSystem_Dispatch(pid);
		OperatingSystem_ShowTime(SHORTTERMSCHEDULE);
		ComputerSystem_DebugMessage(121, SHORTTERMSCHEDULE, pid, pidDaemon);
		return true;
	}
	return false;
}
