#include <stdio.h>
#include "IoHwAb_Dio.h"
#include "Dio.h"

/***********************************************
 * Function: IoHwAb_WriteDirection
 * Description: set motor direction
 * Parameters: uint8_t channelId, int direction
 * Returns: E_OK
 * Author: hoanghuyanhtuan
 * Date: 2025-08-09 17:06:09
 ***********************************************/
Std_ReturnType IoHwAb_WriteDirection(uint8_t channelId, int direction){
    Dio_WriteChannel(channelId, direction);
    return E_OK;
};