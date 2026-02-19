/*
 * bsp_ldr.c
 *
 *  Created on: Feb 13, 2026
 *      Author: Jyde
 */

#include "main.h"
#include "ldr_service.h"
#include "bsp_ldr.h"

static uint32_t currentMillis = 0;
static uint32_t previousMillis = 0;

void LDR_Start_DMA(void) {
	HAL_ADC_Start_DMA(&hadc, (uint32_t*) adc_buf, ADC_BUF_LEN);	//Convert ADC in DMA Mode
}

void LDR_Convert_DMA(void) {
	currentMillis = HAL_GetTick();
	if ((currentMillis - previousMillis) >= 1000) {
		HAL_ADC_Start_DMA(&hadc, (uint32_t*) adc_buf, ADC_BUF_LEN);	//start ADC in DMA Mode
		previousMillis = currentMillis;
	}
}
void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef *hadc) {
	LDR_Service_DMA();		//call function to set threadflag
}
