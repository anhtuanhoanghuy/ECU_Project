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
 * Parameters: uint32_t* canId, uint8* data, uint8* dlc
 * Returns: (Std_ReturnType) CAN data state
 * Author: hoanghuyanhtuan
 * Date: 2025-08-02 17:37:39
 ***********************************************/
Std_ReturnType Can_Receive(uint32_t* canId, uint8_t* data, uint8_t* dlc){
    const char* CAN_data = csv_getString("can");
    int n = sscanf(CAN_data, "%x %hhu %hhx %hhx %hhx %hhx %hhx %hhx %hhx %hhx",
               canId, dlc,
               &data[0], &data[1], &data[2], &data[3],
               &data[4], &data[5], &data[6], &data[7]);
    if (n < 10) {
        return E_NOT_OK;
    }
    return E_OK;
}

/***********************************************
 * Function: CanIf_Receive
 * Description: receive CAN data
 * Parameters: uint32_t canId, uint8_t* data, uint8_t dlc
 * Returns: (Std_ReturnType) CAN data state
 * Author: hoanghuyanhtuan
 * Date: 2025-08-02 17:37:39
 ***********************************************/
Std_ReturnType CanIf_Receive(uint32_t canId, uint8_t* data, uint8_t dlc){

};
