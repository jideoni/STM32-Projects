/*
 * led2_service.c
 *
 *  Created on: Feb 13, 2026
 *      Author: Jyde
 */

#include "led2_service.h"
#include "led2_driver.h"

void LED2_Service_Init(void) {
	LED2_Init();
}

void LED2_Service_ON(void) {
	LED2_On();
}

void LED2_Service_OFF(void) {
	LED2_Off();
}
