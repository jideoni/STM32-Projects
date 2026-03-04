/*
 * bsp_ble.c
 *
 *  Created on: Feb 13, 2026
 *      Author: Jyde
 */

#include "main.h"
#include "bsp_ble.h"
#include "ble_driver.h"
#include "bsp_led1.h"
#include "led1_service.h"
#include "ble_service.h"

uint8_t rx_buf[RX_SIZE];	//buffer to hold 1 byte of data

UART_HandleTypeDef huart1;

void BSP_BLE_Init(void) {
	/* USER CODE END USART1_Init 1 */
	huart1.Instance = USART1;
	huart1.Init.BaudRate = 9600;
	huart1.Init.WordLength = UART_WORDLENGTH_8B;
	huart1.Init.StopBits = UART_STOPBITS_1;
	huart1.Init.Parity = UART_PARITY_NONE;
	huart1.Init.Mode = UART_MODE_TX_RX;
	huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	huart1.Init.OverSampling = UART_OVERSAMPLING_16;
	huart1.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
	huart1.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
	if (HAL_UART_Init(&huart1) != HAL_OK) {
		Error_Handler();
	}
}

HAL_StatusTypeDef BSP_BLE_Start_RX() {
	return HAL_UART_Receive_IT(BLE_UART_HANDLER, (uint8_t*) rx_buf, RX_SIZE);
}

void BSP_BLE_RX_Complete_Callback(void) {
	if (BSP_BLE_Start_RX() == HAL_OK) {
		BLE_Driver_ISR_Handler();		//call function to set thread flags
	}
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart) {
	if (huart->Instance == USART1) {
		BSP_BLE_RX_Complete_Callback();
	}
}
