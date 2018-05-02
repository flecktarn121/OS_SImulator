#ifndef DEVICE_H
#define DEVICE_H

enum DeviceStatus {FREE, BUSY};

typedef struct {
	int info;
	int IOEndTick;
} IODATA;

// Prototipos de las funciones
void Device_UpdateStatus();
void Device_PrintIOResult();
void Device_StartIO(int);
int Device_GetStatus();
void Device_Initialize(char *, int);

#endif
