#include <stdio.h>
#include "Pwm.h"

/***********************************************
 * Function: Pwm_Init
 * Description: initial PWM
 * Parameters: void
 * Returns: void
 * Author: hoanghuyanhtuan
 * Date: 2025-08-02 17:16:53
 ***********************************************/
void Pwm_Init(void){
    printf("Motor is ON\n");
}

/***********************************************
 * Function: Pwm_SetDutyCycle
 * Description: set motor speed
 * Parameters: int8_t channelId, uint16_t duty
 * Returns: void
 * Author: hoanghuyanhtuan
 * Date: 2025-08-02 17:16:50
 ***********************************************/
void Pwm_SetDutyCycle(uint8_t channelId, uint16_t duty){
    csv_setInt("duty", duty);
}

