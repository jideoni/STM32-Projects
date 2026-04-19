/*
 * bsp_init.c
 *
 *  Created on: Apr 18, 2026
 *      Author: Jyde
 */

#include "bsp_init.h"
#include "bsp_adc.h"
#include "bsp_gpio.h"
#include "bsp_uart.h"

void BSP_Init(void){
	BSP_UART_Init();
	BSP_ADC_Init();
	BSP_GPIO_Init();
}
