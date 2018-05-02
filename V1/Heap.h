#ifndef HEAP_H
#define HEAP_H

#include "OperatingSystem.h"

#define QUEUE_PRIORITY 1


int Heap_poll(int[], int, int*);
int Heap_add(int, int[], int , int*, int);
int Heap_compare(int, int, int);
int Heap_getFirst(int[], int);
#endif