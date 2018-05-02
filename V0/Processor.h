#ifndef PROCESSOR_H
#define PROCESSOR_H

#include "MainMemory.h"

#define POWEROFF 1

// Functions prototypes
void Processor_InitializeRegisters(int, int, unsigned int);
void Processor_InstructionCycleLoop();

// Buses needs to access MAR and MBR
int Processor_GetMAR();
void Processor_SetMAR(int);
void Processor_GetMBR(MEMORYCELL *);
void Processor_SetMBR(MEMORYCELL *);

#endif
