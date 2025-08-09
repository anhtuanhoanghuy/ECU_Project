#ifndef __IOHWAB_PWM_H__
#define __IOHWAB_PWM_H__

#include <stdio.h>
#include <stdint.h>

typedef enum {
    E_NOT_OK,
    E_OK
} Std_ReturnType;

Std_ReturnType IoHwAb_SetDutyCycle(uint16_t channelId, uint8_t duty);

Std_ReturnType IoHwAb_ReadRpm(uint16_t *rpm);

#endif