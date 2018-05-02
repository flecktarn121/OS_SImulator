#ifndef QUEUEFIFO_H
#define QUEUEFIFO_H

// Implements the insertion operation in FIFO queue. 
// Parameters are:
//    info: PID to be inserted 
//    queue: the corresponding queue
//    numElem: number of current elements inside the queue, if successfull is increased by one
//    limit: maximum capacity of the queue
// return 0/-1  ok/fail
int QueueFIFO_add (int, int[], int*, int);

// Implements the extraction operation (the first element).
// Parameters are:
//    queue: the corresponding queue
//    numElem: number of current elements inside the queue, if successfull is decremented by one
// Returns: the first item in the queue or -1 if empty queue
int QueueFIFO_poll (int[], int*);

// Return first value of the FIFO queue
// fifo: queue to get first value
// numElem: number of elements actually into the queue
// return first item, but not extract from queue
int QueueFIFO_getFirst (int [], int);

#endif
