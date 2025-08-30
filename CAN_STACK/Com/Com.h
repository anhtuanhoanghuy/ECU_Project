#ifndef __COM_H__
#define __COM_H_

#include <stdio.h>
#include <stdint.h>
#include "type.h"

Std_ReturnType Com_Indication(uint32_t canId, uint8_t* data, uint8_t dlc);

#endif
