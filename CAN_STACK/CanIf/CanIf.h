#ifndef __CAN_IF_H__
#define __CAN_IF_H_

#include <stdio.h>
#include <stdint.h>
#include "type.h"

Std_ReturnType Can_Receive(uint32_t* canId, uint8_t* data, uint8_t* dlc);

Std_ReturnType CanIf_Receive(uint32_t canId, uint8_t* data, uint8_t dlc);

#endif