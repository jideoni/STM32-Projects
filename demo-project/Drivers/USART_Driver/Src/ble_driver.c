/*
 * ble_driver.c
 *
 *  Created on: Feb 12, 2026
 *      Author: Jyde
 */

#include <bsp_uart.h>
#include "ble_driver.h"
#include "thread_handles.h"
#include "thread_notification_flags.h"

uint8_t rx_buf[RX_SIZE];	//buffer to hold 1 byte of data

void BLE_Driver_ISR_Handler(void){
	osThreadFlagsSet(LED1ThreadHandle, LED1_THREAD_BLE_RX_FLAG);
}

HAL_StatusTypeDef BLE_Driver_Start() {
	return HAL_UART_Receive_IT(&BLE_UART_HANDLER, (uint8_t*) rx_buf, RX_SIZE);
}

void BLE_RX_Complete_Callback(void) {
	if (BLE_Driver_Start() == HAL_OK) {
		BLE_Driver_ISR_Handler();		//call function to set thread flags
	}
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart) {
	if (huart->Instance == BLE_USART) {
		BLE_RX_Complete_Callback();
	}
}
