#ifndef MESSAGES_H
#define MESSAGES_H

#define NUMBEROFMSGS 64

typedef struct {
  int number;
  char format[60];
} DEBUG_MESSAGES;

DEBUG_MESSAGES DebugMessages[NUMBEROFMSGS];

int Messages_Get_Pos(int number);
int Messages_Load_Messages();

#endif

