/*
 * leds_driver.c
 *
 *  Created on: Mar 18, 2026
 *      Author: Jyde
 */

#include <leds_driver.h>
#include "bsp_conf.h"
#include "bsp_gpio.h"
#include "button_driver.h"
#include "thread_notification_flags.h"
#include "thread_handles.h"

/////////////////LED Driver
void LED_On(LED_Id_t LED_ID) {
	switch (LED_ID) {
	case BLE_BTN_LED:
		//BLE_BTN_LED_PORT->BSRR = (1 << 2);
		break;
	case LDR_LED:
		LDR_LED_PORT->BSRR = ON;
		break;
	}
}

void LED_Off(LED_Id_t LED_ID) {
	switch (LED_ID) {
	case BLE_BTN_LED:
		//BLE_BTN_LED_PORT->BSRR = (1 << (2 + 16));
		break;
	case LDR_LED:
		LDR_LED_PORT->BSRR = OFF;
		break;
	}
}

void LED_Toggle(LED_Id_t LED_ID) {
	switch (LED_ID) {
	case BLE_BTN_LED:
		HAL_GPIO_TogglePin(BLE_BTN_LED_PORT, BLE_BTN_LED_PIN);
		break;
	case LDR_LED:
		//HAL_GPIO_TogglePin(LDR_LED_PORT, LED1_PIN);
		break;
	}
}
