/*
 * led1_service.c
 *
 *  Created on: Feb 13, 2026
 *      Author: Jyde
 */

#include "led1_service.h"
#include "bsp_led1.h"
#include "led1_driver.h"

void LED1_Service_Init(void){
	LED1_Init();
}
void LED1_Service_Toggle(void) {
	LED1_Toggle(); // Toggle The Output (LED) Pin
}
