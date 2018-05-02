#
# Makefile for the Linux Simulator
#
########################################################

PROGRAM = 	Simulator

# Compilation Details
SHELL = /bin/sh
CC = cc
STDCFLAGS = -g -c -Wall -std=gnu90 
INCLUDES =
LIBRERIAS =
ACC = /usr/share/ACC/bin/acc

${PROGRAM}: Simulator.o Aspect.o Asserts.o Buses.o Clock.o ComputerSystem.o ComputerSystemBase.o Heap.o MainMemory.o Messages.o MMU.o OperatingSystemAspect.o OperatingSystemBase.o ProcessorAspect.o 
	$(CC) -o ${PROGRAM} Simulator.o Aspect.o Asserts.o Buses.o Clock.o ComputerSystem.o ComputerSystemBase.o Heap.o MainMemory.o Messages.o MMU.o OperatingSystemAspect.o OperatingSystemBase.o ProcessorAspect.o $(LIBRERIAS)

Simulator.o: Simulator.c Simulator.h
	$(CC) $(STDCFLAGS) $(INCLUDES) Simulator.c

Aspect.o: Aspect.acc
	$(ACC) Aspect.acc
	$(CC) $(STDCFLAGS) $(INCLUDES) -L /tmp/ACC/lib -lacc Aspect.c

Aspect.acc: OperatingSystem.h Processor.h MyAspect.c
	$(CC) -E $(INCLUDES) MyAspect.c > Aspect.acc

Asserts.o: Asserts.c Asserts.h
	$(CC) $(STDCFLAGS) $(INCLUDES) Asserts.c

Buses.o: Buses.c Buses.h
	$(CC) $(STDCFLAGS) $(INCLUDES) Buses.c

Clock.o: Clock.c Clock.h
	$(CC) $(STDCFLAGS) $(INCLUDES) Clock.c

ComputerSystem.o: ComputerSystem.c ComputerSystem.h
	$(CC) $(STDCFLAGS) $(INCLUDES) ComputerSystem.c

ComputerSystemBase.o: ComputerSystemBase.c ComputerSystemBase.h ComputerSystem.h
	$(CC) $(STDCFLAGS) $(INCLUDES) ComputerSystemBase.c

Heap.o: Heap.c Heap.h
	$(CC) $(STDCFLAGS) $(INCLUDES) Heap.c

MainMemory.o: MainMemory.c MainMemory.h
	$(CC) $(STDCFLAGS) $(INCLUDES) MainMemory.c

Messages.o: Messages.c Messages.h
	$(CC) $(STDCFLAGS) $(INCLUDES) Messages.c

MMU.o: MMU.c MMU.h
	$(CC) $(STDCFLAGS) $(INCLUDES) MMU.c

OperatingSystemAspect.o: OperatingSystemAspect.mc Aspect.acc
	$(ACC) OperatingSystemAspect.mc Aspect.acc
	$(CC) $(STDCFLAGS) $(INCLUDES) -L /tmp/ACC/lib -lacc OperatingSystemAspect.c

OperatingSystemAspect.mc: OperatingSystem.c OperatingSystem.h
	$(CC) -E $(INCLUDES) OperatingSystem.c > OperatingSystemAspect.mc

OperatingSystemBase.o: OperatingSystemBase.c OperatingSystemBase.h OperatingSystem.h
	$(CC) $(STDCFLAGS) $(INCLUDES) OperatingSystemBase.c

ProcessorAspect.o: ProcessorAspect.mc Aspect.acc
	$(ACC) ProcessorAspect.mc Aspect.acc
	$(CC) $(STDCFLAGS) $(INCLUDES) -L /tmp/ACC/lib -lacc ProcessorAspect.c

ProcessorAspect.mc: Processor.c Processor.h
	$(CC) -E $(INCLUDES) Processor.c > ProcessorAspect.mc

clean:
	rm -f $(PROGRAM) *.o *~ *.mc *.acc Aspect.c ProcessorAspect.c OperatingSystemAspect.c core
