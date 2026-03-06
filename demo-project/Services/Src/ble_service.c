/*
 * ble_service.c
 *
 *  Created on: Feb 13, 2026
 *      Author: Jyde
 */

#include "ble_service.h"
#include "ble_driver.h"
#include "bsp_ble.h"

void BLE_Service_Init(void) {
	BLE_Driver_Init();
}
void BLE_Service_Start(void) {
	BLE_Driver_Start();
}
