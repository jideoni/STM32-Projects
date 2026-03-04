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
#include "bsp_serial_debug.h"
#include "LED1_Thread.h"
#include "LED2_Thread.h"
#include "ldr_service.h"
#include "ble_service.h"
#include "button_service.h"
#include "led1_service.h"
#include "led2_service.h"

void App_Init(void){
	LED1_Service_Init();
	LED2_Service_Init();
	Button_Service_Init();
	Serial_Debugger_Init();
	BLE_Service_Init();
	LDR_Service_DMA_Init();
	LDR_Service_Init();
	LDR_Service_Start();
	BLE_Service_Start();
	LED1_Thread_Init();
	LED2_Thread_Init();

	print_message("Ready to roll...\r\n");
}
