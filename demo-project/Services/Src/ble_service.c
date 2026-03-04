/*
 * ble_service.c
 *
 *  Created on: Feb 13, 2026
 *      Author: Jyde
 */

#include "cmsis_os.h"
#include "thread_handles.h"
#include "thread_notification_flags.h"
#include "ble_service.h"
#include "ble_driver.h"
#include "bsp_ble.h"

#include "bsp_serial_debug.h"

void BLE_Service_Init(void) {
	BLE_Driver_Init();
}

void BLE_Service_Start(void) {
	BLE_Driver_Start();
}
