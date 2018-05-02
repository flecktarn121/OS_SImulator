#include <stdlib.h>
#include "Heap.h"
#include "OperatingSystem.h"
#include "Asserts.h"

// Internal Functions prototypes
void Heap_swap_Up(int, int[], int);
void Heap_swap_Down(int, int[], int, int);


// Insertion of a PID into a binary heap
// info: PID to insert
// heap: Binary heap to insert: user o daemon ready queue, sleeping queue, ...
// queueType: QUEUE_PRIORITY, QUEUE_WAKEUP, QUEUE_ARRIVAL, ...
// numElem: number of elements actually into the queue, if successful is increased by one
// limit: max size of the queue
// return 0/-1  ok/fail
int Heap_add(int info, int heap[], int queueType, int *numElem, int limit) {
	if (*numElem >= limit || info<0)
		return -1;
	heap[*numElem]=info;
	Heap_swap_Up(*numElem, heap, queueType);
	(*numElem)++;
	return 0;
}

// Extract the more priority item
// heap: Binary heap to extract: user o daemon ready queue, sleeping queue, ...
// queueType: QUEUE_PRIORITY, QUEUE_WAKEUP, QUEUE_ARRIVAL, ...
// numElem: number of elements actually into the queue, if successful is decremented by one
// return more priority item into the queue
int Heap_poll(int heap[], int queueType, int *numElem) {
	int info = heap[0];
	if (*numElem==0)
		return -1; // no elements into priority queue
	else {
		heap[0]=heap[*numElem-1];
		Heap_swap_Down(0, heap, queueType, *numElem);
		(*numElem)--;
	}
	return info;		
}

// Return top value of heap
// heap: Binary heap to get top value
// numElem: number of elements actually into the queue
// return more priority item, but not extract from heap
int Heap_getFirst(int heap[], int numElem) {
	if (numElem>0) 
		return heap[0];
	else
		return -1;
}

//  Auxiliary function for implementation of binary heaps
void Heap_swap_Up(int p, int heap[], int queueType) {
	if (p > 0)  { // if not at the top...
		int padre = abs(p - 1) / 2; // integer operation
		if (Heap_compare(heap[p],heap[padre],queueType)>0) { // less than father...
			int aux = heap[padre]; 
			heap[padre] = heap[p];
			heap[p] = aux;
			Heap_swap_Up(padre, heap, queueType);
		} // if not less, don't switch
	}  // at the top...
}

//  Auxiliary function for implementation of binary heaps
void Heap_swap_Down(int p, int heap[], int queueType, int numElem) {
	int izq = 2*p+1;
	int der = 2*p+2;
	int aux = heap[p];
	
	if (der < numElem) //  2 children... 
		if ((Heap_compare(heap[izq],heap[der], queueType)>0) && (Heap_compare(heap[p],heap[izq],queueType)<0)){ // Switch with left-child if right-child greater
			heap[p] = heap[izq];
			heap[izq] = aux;
			Heap_swap_Down(izq, heap, queueType, numElem);
		} else { // right 
			if (Heap_compare(heap[p],heap[der], queueType)<0) { // Switch with right-child
				heap[p] = heap[der];
				heap[der] = aux;
				Heap_swap_Down(der, heap, queueType, numElem);
			}
		}
	else if (izq<numElem) { // only left-child...
		if (Heap_compare(heap[p],heap[izq], queueType)<0){ // Switch with left-child
			heap[p] = heap[izq];
			heap[izq] = aux;
			Heap_swap_Down(izq, heap, queueType, numElem);
		} // Less than left-child, don't switch
	} // leaf-node...
}

// Auxiliary for priority comparations
int Heap_compare_priority(int value1, int value2) {
  return processTable[value2].priority-processTable[value1].priority;
}

// Auxiliary for  WakeUp-time comparations
int Heap_compare_wakeup(int value1, int value2) {
#ifdef SLEEPINGQUEUE
	return processTable[value2].whenToWakeUp - processTable[value1].whenToWakeUp;
#else
	return 0;
#endif
}

// Auxiliary for arrival-time comparations
int Heap_compare_arrival(int value1, int value2) {
  return programList[value2]->arrivalTime - programList[value1]->arrivalTime;
}

// Auxiliary for assert-time comparations
int Heap_compare_assertsTime(int value1, int value2) {
  return asserts[value2].time - asserts[value1].time;
}

// Auxiliary for generic comparations
int Heap_compare(int value1, int value2, int queueType) {
  
  switch (queueType) {
	case QUEUE_WAKEUP:
	  return Heap_compare_wakeup(value1, value2);
	case QUEUE_PRIORITY:
	  return Heap_compare_priority(value1, value2);
	case QUEUE_ASSERTS:
	  return Heap_compare_assertsTime(value1, value2);
	default:
	  return 0; // 
  }
}


