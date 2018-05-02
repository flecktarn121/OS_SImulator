#include "Clock.h"
#include "Asserts.h"


before(): execution(void Processor_FetchInstruction()) {
	Clock_Update();
}

after(): execution(void Processor_DecodeAndExecuteInstruction()){
    Asserts_CheckAsserts();
}

before(): execution(void OperatingSystem_InterruptLogic(int)){
	Clock_Update();
}

