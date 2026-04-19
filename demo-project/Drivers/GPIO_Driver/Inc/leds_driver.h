/*
 * leds_driver.h
 *
 *  Created on: Mar 18, 2026
 *      Author: Jyde
 */

#ifndef GPIO_DRIVER_INC_LEDS_DRIVER_H_
#define GPIO_DRIVER_INC_LEDS_DRIVER_H_

#include "bsp_gpio.h"
#include "bsp_conf.h"

#define ON (1 << 2);
#define OFF (1 << (2 + 16));

typedef enum {
	BLE_BTN_LED, LDR_LED
//add more LEDs if needed
} LED_Id_t;

void LED_On(LED_Id_t LED_ID);
void LED_Off(LED_Id_t LED_ID);
void LED_Toggle(LED_Id_t LED_ID);

#endif /* GPIO_DRIVER_INC_LEDS_DRIVER_H_ */
