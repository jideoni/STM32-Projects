/*
 * ble_driver.c
 *
 *  Created on: Feb 12, 2026
 *      Author: Jyde
 */

#include "ble_driver.h"
#include "bsp_ble.h"
#include "thread_handles.h"
#include "thread_notification_flags.h"

void BLE_Driver_Init(void) {
	BSP_BLE_Init();
}

void BLE_Driver_Start(void) {
	BSP_BLE_Start_RX();
}

void BLE_Driver_ISR_Handler(void){
	osThreadFlagsSet(LED1ThreadHandle, LED1_THREAD_BLE_RX_FLAG);
}
