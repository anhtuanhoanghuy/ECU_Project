#include <stdio.h>
#include "Can.h"

/***********************************************
 * Function: Can_Init
 * Description: initial CAN
 * Parameters: void
 * Returns: void
 * Author: hoanghuyanhtuan
 * Date: 2025-08-02 17:37:42
 ***********************************************/
void Can_Init(void){
    printf("CAN is ready.\n");
}

/***********************************************
 * Function: Can_Receive
 * Description: read CAN data
 * Parameters: const char* canId, uint8* data, uint8* dlc
 * Returns: (const char*) CAN data
 * Author: hoanghuyanhtuan
 * Date: 2025-08-02 17:37:39
 ***********************************************/
const char* Can_Receive(const char* canId, uint8_t* data, uint8_t* dlc){
    const char* CAN_data = csv_getString(canId);
    return CAN_data;
}
