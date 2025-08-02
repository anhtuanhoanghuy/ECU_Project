#include <stdio.h>
#include "Adc.h"

/***********************************************
 * Function: FunctionName
 * Description: initial Adc
 * Parameters: void
 * Returns: void
 * Author: hoanghuyanhtuan
 * Date: 2025-08-02 17:25:35
 ***********************************************/
void Adc_Init(void){
    printf("Sensor is ready.\n");
}

/***********************************************
 * Function: FunctionName
 * Description: read sensor value
 * Parameters: const char* channelId
 * Returns: (uint16_t) value of sensor
 * Author: hoanghuyanhtuan
 * Date: 2025-08-02 17:25:38
 ***********************************************/
uint16_t Adc_ReadChannel(const char* channelId){
    csv_getInt(channelId);
}
