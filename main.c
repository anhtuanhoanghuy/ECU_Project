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

uint32_t canId;
uint8_t data[8];
uint8_t dlc;
int main() {
    char* file = "UI/data.csv";
    csv_init(file);
    Can_Receive(&canId, data, &dlc);
    printf("CanId: %x\n",canId);
    printf("data: %s\n",data);
    printf("dlc: %d\n",dlc);
    return 0;
}