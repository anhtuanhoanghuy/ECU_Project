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

float temperature = 0;
uint16_t temp_ADC = 0;
int main() {
    char* file = "UI/data.csv";
    IoHwAb_ReadTemp(&temp_ADC, &temperature);
    printf("TEMP: %f",temperature);
    return 0;
}