/*
 * bsp_led2.c
 *
 *  Created on: Feb 13, 2026
 *      Author: Jyde
 */

#include "main.h"
#include "led2_driver.h"	//to access port and pin

void BSP_LED2_On(void) {
	//HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, 1);
	LED2_GPIO_Port->BSRR = (1 << 2);
}
void BSP_LED2_Off(void) {
	//HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, 0);
	LED2_GPIO_Port->BSRR = (1 << (2 + 16));
}
