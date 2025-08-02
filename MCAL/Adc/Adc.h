#ifndef __ADC_H__
#define __ADC_H_

#include <stdio.h>
#include <stdint.h>
#include "csv_io.h"

void Adc_Init(void);
uint16_t Adc_ReadChannel(const char* channelId);

#endif