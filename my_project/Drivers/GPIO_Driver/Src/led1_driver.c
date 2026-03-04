/*
 * led1_driver.c
 *
 *  Created on: Feb 12, 2026
 *      Author: Jyde
 */

#include "main.h"
#include "led1_driver.h"
#include "bsp_led1.h"

void LED1_Init(){
	BSP_LED1_Init();
}

void LED1_Toggle(){
	BSP_LED1_Toggle();
}
