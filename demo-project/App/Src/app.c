/*
 * app.c
 *
 *  Created on: Feb 12, 2026
 *      Author: Jyde
 */
// everything that should happen before the main loop
//#include "button_driver.h"
#include "app.h"
#include "serial_debug_driver.h"
#include "LED1_Thread.h"
#include "LED2_Thread.h"
#include "ldr_driver.h"
#include "ble_driver.h"
#include "bsp_init.h"

void App_Init(void) {
	BSP_Init();
	LED1_Thread_Init();
	LED2_Thread_Init();
}

void App_Start(void) {
	LDR_Driver_Start();
	BLE_Driver_Start();

	print_message("Ready to roll...\r\n");
}
