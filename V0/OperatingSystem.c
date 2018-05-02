#include "OperatingSystem.h"
#include "MainMemory.h"
#include "Processor.h"
#include "Buses.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Function that processes the contents of the file named by the first argument
// in order to load it in main memory from the address given as the second
// argument
// IT IS NOT NECESSARY TO COMPLETELY UNDERSTAND THIS FUNCTION

int OperatingSystem_LoadProgram(FILE *programFile, int initialAddress) {

	char lineRead[LINEMAXIMUMLENGTH];
	char *token0, *token1, *token2;
	int isComment=1;
	int programSize;
	MEMORYCELL data;
	
	// Read the first number as the size of the program. Skip all comments.
	while (isComment==1) {
		if (fgets(lineRead, LINEMAXIMUMLENGTH, programFile) == NULL) {
			return PROGRAMNOTVALID;
		}
		else
		      if (lineRead[0]!='/') { // Line IS NOT a comment
			    isComment=0;
			    programSize=atoi(strtok(lineRead," "));
				if (programSize>MAINMEMORYSIZE) 
					return PROGRAMNOTVALID;
		      }
	}

	Processor_SetMAR(initialAddress);  
	while (fgets(lineRead, LINEMAXIMUMLENGTH, programFile) != NULL) {
		// REMARK: if lineRead is greater than TAMANIOMAXIMOLINEA in number of characters, the program
		// loading does not work
		data.operationCode=' '; data.operand1=data.operand2=0;
		token0=strtok(lineRead," ");
		if ((token0!=NULL) && (token0[0]!='/')&& (token0[0]!='\n')) {
		      // I have an instruction with, at least, an operation code
			  data.operationCode=tolower(token0[0]);
		      token1=strtok(NULL," ");
		      if ((token1!=NULL) && (token1[0]!='/')) {
			    // I have an instruction with, at least, an operand
			    data.operand1=atoi(token1);
			    token2=strtok(NULL," ");
			    if ((token2!=NULL) && (token2[0]!='/')) {
				  // The read line is similar to 'sum 2 3 //coment'
				  // I have an instruction with two operands
				  data.operand2=atoi(token2);
			    }
		      }
		      
		      Processor_SetMBR(&data);
		      // Send data to main memory using the system buses
		      Buses_write_DataBus_From_To(CPU, MAINMEMORY);
		      Buses_write_AddressBus_From_To(CPU, MAINMEMORY);
		      // Tell the main memory controller to write
		      MainMemory_writeMemory();
		      Processor_SetMAR(Processor_GetMAR()+1);
		}
	}
	return SUCCESS;
}	
