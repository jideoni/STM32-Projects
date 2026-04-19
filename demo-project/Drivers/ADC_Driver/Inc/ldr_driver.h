/*
 * ldr_driver.h
 *
 *  Created on: Feb 12, 2026
 *      Author: Jyde
 */

#ifndef ADC_DRIVER_INC_LDR_DRIVER_H_
#define ADC_DRIVER_INC_LDR_DRIVER_H_

#include "bsp_conf.h"

HAL_StatusTypeDef LDR_Driver_Start(void);
void LDR_DMA_Driver_Init(void);
void LDR_Driver_DMA_Handler(void);
void BSP_LDR_Callback(void);

#endif /* ADC_DRIVER_INC_LDR_DRIVER_H_ */
