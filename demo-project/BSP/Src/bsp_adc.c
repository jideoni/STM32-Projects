/*
 * bsp_ldr.c
 *
 *  Created on: Feb 13, 2026
 *      Author: Jyde
 */

#include <bsp_adc.h>
#include "main.h"

ADC_HandleTypeDef LDR_ADC_HANDLER;
DMA_HandleTypeDef hdma_adc;

void BSP_LDR_Init(void) {
	ADC_ChannelConfTypeDef sConfig = { 0 };

	/** Configure the global features of the ADC (Clock, Resolution, Data Alignment and number of conversion)
	 */
	LDR_ADC_HANDLER.Instance = LDR_ADC;
	LDR_ADC_HANDLER.Init.ClockPrescaler = ADC_CLOCK_ASYNC_DIV1;
	LDR_ADC_HANDLER.Init.Resolution = ADC_RESOLUTION_12B;
	LDR_ADC_HANDLER.Init.DataAlign = ADC_DATAALIGN_RIGHT;
	LDR_ADC_HANDLER.Init.ScanConvMode = ADC_SCAN_DIRECTION_FORWARD;
	LDR_ADC_HANDLER.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
	LDR_ADC_HANDLER.Init.LowPowerAutoWait = DISABLE;
	LDR_ADC_HANDLER.Init.LowPowerAutoPowerOff = DISABLE;
	LDR_ADC_HANDLER.Init.ContinuousConvMode = DISABLE;
	LDR_ADC_HANDLER.Init.DiscontinuousConvMode = DISABLE;
	LDR_ADC_HANDLER.Init.ExternalTrigConv = ADC_SOFTWARE_START;
	LDR_ADC_HANDLER.Init.ExternalTrigConvEdge = ADC_EXTERNALTRIGCONVEDGE_NONE;
	LDR_ADC_HANDLER.Init.DMAContinuousRequests = ENABLE;
	LDR_ADC_HANDLER.Init.Overrun = ADC_OVR_DATA_PRESERVED;
	if (HAL_ADC_Init(&LDR_ADC_HANDLER) != HAL_OK) {
		Error_Handler();
	}

	/** Configure for the selected ADC regular channel to be converted.
	 */
	sConfig.Channel = ADC_CHANNEL_0;
	sConfig.Rank = ADC_RANK_CHANNEL_NUMBER;
	sConfig.SamplingTime = ADC_SAMPLETIME_239CYCLES_5;
	if (HAL_ADC_ConfigChannel(&LDR_ADC_HANDLER, &sConfig) != HAL_OK) {
		Error_Handler();
	}
}

void BSP_LDR_DMA_Init(void) {
	/* DMA controller clock enable */
	__HAL_RCC_DMA1_CLK_ENABLE();

	/* DMA interrupt init */
	/* DMA1_Channel1_IRQn interrupt configuration */
	HAL_NVIC_SetPriority(DMA1_Channel1_IRQn, 3, 0);
	HAL_NVIC_EnableIRQ(DMA1_Channel1_IRQn);
}

void BSP_ADC_Init(void){
	BSP_LDR_Init();
	BSP_LDR_DMA_Init();
}
