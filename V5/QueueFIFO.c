#include <stdlib.h>
// #include "OperatingSystem.h"

// Internal Functions prototypes

// Implements the insertion operation in FIFO queue. 
// Parameters are:
//    info: PID to be inserted 
//    queue: the corresponding queue
//    numElem: number of current elements inside the queue, if successfull is increased by one
//    limit: maximum capacity of the queue
// return 0/-1  ok/fail
int QueueFIFO_add (int info, int fifo[], int *numElem, int limit) {
	if (*numElem >= limit || info<0)
		return -1;
	fifo[*numElem]=info;
	(*numElem)++;
	return 0;
}

// Implements the extraction operation (the first element).
// Parameters are:
//    queue: the corresponding queue
//    numElem: number of current elements inside the queue, if successfull is decremented by one
// Returns: the first item in the queue or -1 if empty queue
int QueueFIFO_poll (int fifo[], int *numElem) {
	int info = fifo[0];
	int i;
	if (*numElem==0)
		return -1; // empty queue
	else {
		// memcpy((void *) fifo, (void *) &fifo[1], (*numElem-1)*sizeof(int));
		for (i=0; i< (*numElem)-1; i++)
			fifo[i]=fifo[i+1];
		(*numElem)--;
	}
	return info;		
}

// Return first value of the FIFO queue
// fifo: queue to get first value
// numElem: number of elements actually into the queue
// return first item, but not extract from queue
int QueueFIFO_getFirst (int fifo[], int numElem) {
	if (numElem>0) 
		return fifo[0];
	else
		return -1;
}
