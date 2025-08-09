#include <stdio.h>
#include "IoHwAb_Adc.h"
#include "Adc.h"

/***********************************************
 * Function: IoHwAb_ReadTemp
 * Description: read temp
 * Parameters: uint16_t* temp_adc, float* temp_C
 * Returns: E_OK
 * Author: hoanghuyanhtuan
 * Date: 2025-08-09 17:06:09
 ***********************************************/
Std_ReturnType IoHwAb_ReadTemp(uint16_t* temp_adc, float* temp_C){
    *temp_adc = Adc_ReadChannel("temp");
    *temp_C = (*temp_adc) * 200.0 / 4095;
    return E_OK;
};

/***********************************************
 * Function: IoHwAb_ReadVoltage
 * Description: read voltage
 * Parameters: uint16_t* voltage_adc, float* voltage_V
 * Returns: E_OK
 * Author: hoanghuyanhtuan
 * Date: 2025-08-09 17:06:09
 ***********************************************/
Std_ReturnType IoHwAb_ReadVoltage(uint16_t* voltage_adc, float* voltage_V){
    *voltage_adc = Adc_ReadChannel("voltage");
    *voltage_V = (*voltage_adc) * 60.0 / 4095;
    return E_OK;
};

/***********************************************
 * Function: IoHwAb_ReadCurrent
 * Description: read current
 * Parameters: uint16_t* current_adc, float* current_A
 * Returns: E_OK
 * Author: hoanghuyanhtuan
 * Date: 2025-08-09 17:06:09
 ***********************************************/
Std_ReturnType IoHwAb_ReadCurrent(uint16_t* current_adc, float* current_A){
    *current_adc = Adc_ReadChannel("current");
    *current_A = (*current_adc) * 50.0 / 4095;
    return E_OK;
};

/***********************************************
 * Function: IoHwAb_ReadTorque
 * Description: read torque
 * Parameters: uint16_t* torque_adc, float* torque_Nm
 * Returns: E_OK
 * Author: hoanghuyanhtuan
 * Date: 2025-08-09 17:06:09
 ***********************************************/
Std_ReturnType IoHwAb_ReadTorque(uint16_t* torque_adc, float* torque_Nm){
    *torque_adc = Adc_ReadChannel("torque");
    *torque_Nm = (*torque_adc) * 120.0 / 4095;
    return E_OK;
};
