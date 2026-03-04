/*
 * ldr_service.c
 *
 *  Created on: Feb 13, 2026
 *      Author: Jyde
 */

#include "cmsis_os.h"
#include "thread_handles.h"
#include "thread_notification_flags.h"
#include "ldr_driver.h"
#include "ldr_service.h"

void LDR_Service_Init(void) {
	LDR_Driver_Init();
}

void LDR_Service_DMA_Init(void){
	LDR_DMA_Driver_Init();
}
