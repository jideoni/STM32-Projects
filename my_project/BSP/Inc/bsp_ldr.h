/*
 * bsp_ldr.h
 *
 *  Created on: Feb 13, 2026
 *      Author: Jyde
 */

#ifndef INC_BSP_LDR_H_
#define INC_BSP_LDR_H_

//#include "main.h"

#define ADC_BUF_LEN 1
#define ADC_HANDLER &hadc

extern ADC_HandleTypeDef hadc;		//originally defined in ldr_driver.c


void BSP_LDR_Init(void);

void BSP_LDR_DMA_Init(void);

void BSP_LDR_Start_DMA(void);		//Start ADC in DMA Mode

void BSP_LDR_Callback(void);

#endif /* INC_BSP_LDR_H_ */
