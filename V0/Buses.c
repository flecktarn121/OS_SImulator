#include "Buses.h"
#include "Processor.h"
#include "MainMemory.h"
#include <string.h>
#include <stdlib.h>

//  Function that simulates the delivery of an address by means of the address bus
//  from a hardware component register to another hardware component register
int Buses_write_AddressBus_From_To(int fromRegister, int toRegister) {
  int data;
  switch (fromRegister) {
	case MAINMEMORY:
	  data=MainMemory_GetMAR();
	  break;
	case CPU:
	  data=Processor_GetMAR();
	  break;
	default:
	  return Bus_FAIL;
  }
  
  switch (toRegister) {
	case MAINMEMORY:
	  MainMemory_SetMAR(data);
	  break;
	default:
	 return Bus_FAIL;
  }
  return Bus_SUCCESS;
}


//  Function that simulates the delivery of memory word by means of the data bus
//  from a hardware component register to another hardware component register
int Buses_write_DataBus_From_To(int fromRegister, int toRegister) {
  MEMORYCELL *data = (MEMORYCELL *) malloc(sizeof(MEMORYCELL));
  switch (fromRegister) {
	case MAINMEMORY:
	  MainMemory_GetMBR(data);
	  break;
	case CPU:
	  Processor_GetMBR(data);
	  break;
	default:
	  free(data);
	  return Bus_FAIL;
  }
  
  switch (toRegister) {
	case MAINMEMORY:
	  MainMemory_SetMBR(data);
	  break;
	case CPU:
	  Processor_SetMBR(data);
	  break;
	default:
  	  free(data);
	  return Bus_FAIL;
  }
  
  free(data);
  return Bus_SUCCESS;
}