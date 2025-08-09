#ifndef __IOHWAB_DIO_H__
#define __IOHWAB_DIO_H__

#include <stdio.h>
#include <stdint.h>

typedef enum {
    E_NOT_OK,
    E_OK
} Std_ReturnType;

Std_ReturnType IoHwAb_WriteDirection(uint8_t channelId, int direction);

#endif