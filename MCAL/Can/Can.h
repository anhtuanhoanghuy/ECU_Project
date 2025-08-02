#ifndef __CAN_H__
#define __CAN_H_

#include <stdio.h>
#include <stdint.h>
#include "csv_io.h"

void Can_Init(void);
const char* Can_Receive(const char* canId, uint8_t* data, uint8_t* dlc);

#endif