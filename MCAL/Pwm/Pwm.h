#ifndef __PWM_H__
#define __PWM_H_

#include <stdio.h>
#include <stdint.h>
#include "csv_io.h"

void Pwm_Init(void);
void Pwm_SetDutyCycle(uint8_t channelId, uint16_t duty);

#endif