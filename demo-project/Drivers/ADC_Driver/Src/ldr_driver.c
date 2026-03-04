/*
 * ldr_driver.c
 *
 *  Created on: Feb 12, 2026
 *      Author: Jyde
 */

#include "main.h"
#include "thread_handles.h"
#include "thread_notification_flags.h"
#include "bsp_ldr.h"
#include "ldr_driver.h"

void LDR_Driver_Init(void) {
	BSP_LDR_Init();
}
void LDR_DMA_Driver_Init(void){
	BSP_LDR_DMA_Init();
}
void LDR_Driver_DMA_Handler(void) {
	osThreadFlagsSet(LED2ThreadHandle, LED2_THREAD_FLAG);	//set thread flag
}
void LDR_Driver_Start(void) {
	BSP_LDR_Start_DMA();
}
