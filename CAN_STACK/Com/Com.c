#include <stdio.h>
#include "Com.h"

#define PDU_ENGINE_SPEED 0x3f0

static struct{
    uint8_t id;
    uint8_t data[8];
    uint8_t len;
} g_ENGINE_SPEED_Buffer;

/***********************************************
 * Function: Com_Indication
 * Description: get packet frame
 * Parameters: uint32_t canId, uint8_t* data, uint8_t dlc
 * Returns: COM state
 * Author: hoanghuyanhtuan
 * Date: 2025-08-30 11:40:09
 ***********************************************/
Std_ReturnType Com_Indication(uint32_t canId, uint8_t* data, uint8_t dlc){
    if (canId == PDU_ENGINE_SPEED) {
        g_ENGINE_SPEED_Buffer.id = canId;
        g_ENGINE_SPEED_Buffer.len = dlc;
        memcpy(g_ENGINE_SPEED_Buffer.data, data, dlc);
    } 
    return E_OK;
};

/***********************************************
 * Function: Com_EngineSpeed
 * Description: get Motor speed from buffer
 * Parameters: uint16_t* rpm)
 * Returns: COM state
 * Author: hoanghuyanhtuan
 * Date: 2025-08-30 11:40:03
 ***********************************************/
Std_ReturnType Com_EngineSpeed(uint16_t* rpm) {
    *rpm = (g_ENGINE_SPEED_Buffer.data[0] << 8) | g_ENGINE_SPEED_Buffer.data[1];
    return E_OK;
}