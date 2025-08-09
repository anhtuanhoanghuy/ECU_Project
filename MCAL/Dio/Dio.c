#include <stdio.h>
#include "Dio.h"

/***********************************************
 * Function: Dio_Init
 * Description: initial motor
 * Parameters: void
 * Returns: void
 * Author: hoanghuyanhtuan
 * Date: 2025-08-02 17:06:06
 ***********************************************/
void Dio_Init(void){
    printf("Motor is set in Pin\n");
}

/***********************************************
 * Function: Dio_WriteChannel
 * Description: set motor direction
 * Parameters: uint8 channelId, uint8 direction
 * Returns: void
 * Author: hoanghuyanhtuan
 * Date: 2025-08-02 17:06:09
 ***********************************************/
void Dio_WriteChannel(uint8_t channelId, int direction){
    csv_setInt("direction", direction);
}