/*
 * ldr_service.c
 *
 *  Created on: Feb 13, 2026
 *      Author: Jyde
 */

#include "ldr_service.h"
#include "ldr_driver.h"

void LDR_Service_Init(void) {
	LDR_Driver_Init();
}

void LDR_Service_DMA_Init(void){
	LDR_DMA_Driver_Init();
}

void LDR_Service_Start(void){
	LDR_Driver_Start();
}
