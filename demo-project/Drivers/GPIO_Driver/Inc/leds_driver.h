/*
 * leds_driver.h
 *
 *  Created on: Mar 18, 2026
 *      Author: Jyde
 */

#ifndef GPIO_DRIVER_INC_LEDS_DRIVER_H_
#define GPIO_DRIVER_INC_LEDS_DRIVER_H_

#include "bsp_leds.h"

void LEDs_Driver_Init();
void LED_On(LED_Id_t LED_ID);
void LED_Off(LED_Id_t LED_ID);
void LED_Toggle(LED_Id_t LED_ID);

#endif /* GPIO_DRIVER_INC_LEDS_DRIVER_H_ */
