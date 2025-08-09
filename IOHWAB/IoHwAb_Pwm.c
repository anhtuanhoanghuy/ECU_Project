#include <stdio.h>
#include "IoHwAb_Pwm.h"
#include "Pwm.h"

/***********************************************
 * Function: IoHwAb_SetDutyCycle
 * Description: set dutycycle
 * Parameters: uint8_t channelId , uint8_t duty
 * Returns: E_OK
 * Author: hoanghuyanhtuan
 * Date: 2025-08-09 17:06:09
 ***********************************************/
Std_ReturnType IoHwAb_SetDutyCycle(uint8_t channelId , uint8_t duty){
    Pwm_SetDutyCycle(channelId,duty);
    return E_OK;
}

/***********************************************
 * Function: IoHwAb_ReadRpm
 * Description: read rpm
 * Parameters: uint16_t *rpm
 * Returns: E_OK
 * Author: hoanghuyanhtuan
 * Date: 2025-08-09 17:06:09
 ***********************************************/
Std_ReturnType IoHwAb_ReadRpm(uint16_t *rpm){
   *rpm = csv_getInt("rpm");
   return E_OK;
};