#ifndef __CAN_H__
#define __CAN_H_

#include <stdio.h>
#include <stdint.h>
#include "csv_io.h"

typedef enum {
    E_NOT_OK,
    E_OK
} Std_ReturnType;

void Can_Init(void);

Std_ReturnType Can_Receive(uint32_t* canId, uint8_t* data, uint8_t* dlc);

Std_ReturnType CanIf_Receive(uint32_t canId, uint8_t* data, uint8_t dlc);

#endif