#include <stdio.h>
#include "csv_io.h"
#include "Adc.h"
#include "Can.h"
#include "Dio.h"
#include "Pwm.h"

#define DRIVE 1
#define REAR -1

enum {
    channel_0 = 0,
    channel_1,
    channel_2    
};

int main() {
    char* file = "UI/data.csv";
    csv_init(file);
    csv_setInt("temp",10);
    Dio_Init();
    Dio_WriteChannel(channel_0,REAR);
    Pwm_Init();
    Pwm_SetDutyCycle(channel_0,50);
    Adc_Init();
    int torque = Adc_ReadChannel("torque");
    printf("Torque=%d",torque);
    Can_Init();
    const char* can = Can_Receive("can",0,0);
    printf("CAN:%s",can);
    return 0;
}