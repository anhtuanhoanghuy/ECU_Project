#include <stdio.h>
#include "PduR.h"
#include "Com.h"

/***********************************************
 * Function: PduR_RouteReceive
 * Description: receive PDU packet from CanIf and route to COM
 * Parameters: uint32_t pduId, uint8_t* data, uint8_t dlc
 * Returns: (Std_ReturnType) PduR state
 * Author: hoanghuyanhtuan
 * Date: 2025-08-30 11:13:26
 ***********************************************/
Std_ReturnType PduR_RouteReceive(uint32_t canId, uint8_t* data, uint8_t dlc) {
    Com_Indication(canId, data, dlc);
    return E_OK;
};