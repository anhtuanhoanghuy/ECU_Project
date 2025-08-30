#ifndef __PDUR_H__
#define __PDUR_H_

#include <stdio.h>
#include <stdint.h>
#include "type.h"

Std_ReturnType PduR_RouteReceive(uint32_t canId, uint8_t* data, uint8_t dlc);

#endif
