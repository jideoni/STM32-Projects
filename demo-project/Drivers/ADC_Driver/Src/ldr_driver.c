/*
 * ldr_driver.c
 *
 *  Created on: Feb 12, 2026
 *      Author: Jyde
 */

#include <bsp_adc.h>
#include <ldr_driver.h>
#include "thread_handles.h"
#include "thread_notification_flags.h"

extern ADC_HandleTypeDef LDR_ADC_HANDLER;

uint16_t adc_buf[ADC_BUF_LEN];

HAL_StatusTypeDef LDR_Driver_Start(void) {
	return HAL_ADC_Start_DMA(&LDR_ADC_HANDLER, (uint32_t*) adc_buf, ADC_BUF_LEN); //Convert ADC in DMA Mode
}

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef *hadc) {
	if (LDR_ADC_HANDLER->Instance == LDR_ADC) {
		osThreadFlagsSet(LED2ThreadHandle, LED2_THREAD_FLAG);	//set thread flag
	}
}
