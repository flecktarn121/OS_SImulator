#include "Clock.h"
#include "Processor.h"
#include "ComputerSystem.h"

int tics=0;

void Clock_Update() {
	tics++;
    ComputerSystem_DebugMessage(97,CLOCK,tics);
}


int Clock_GetTime() {

	return tics;
}
