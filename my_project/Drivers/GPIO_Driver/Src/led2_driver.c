/*
 * led2_driver.c
 *
 *  Created on: Feb 12, 2026
 *      Author: Jyde
 */

#include "main.h"
#include "led2_driver.h"

void LED2_Init(void){
	BSP_LED2_Init();
}

void LED2_On(void){
	BSP_LED2_On();
}

void LED2_Off(void){
	BSP_LED2_Off();
}
