#ifndef __DIO_H__
#define __DIO_H_

#include <stdio.h>
#include <stdint.h>
#include "csv_io.h"

void Dio_Init(void);
void Dio_WriteChannel(uint8_t channelId, int level);

#endif