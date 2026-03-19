/*
 * leds_driver.c
 *
 *  Created on: Mar 18, 2026
 *      Author: Jyde
 */

#include "leds_driver.h"

void LEDs_Driver_Init() {
	BSP_LEDs_Init();
}
void LED_On(LED_Id_t LED_ID) {
	BSP_LED_On(LED_ID);
}
void LED_Off(LED_Id_t LED_ID) {
	BSP_LED_Off(LED_ID);
}
void LED_Toggle(LED_Id_t LED_ID) {
	BSP_LED_Toggle(LED_ID);
}
