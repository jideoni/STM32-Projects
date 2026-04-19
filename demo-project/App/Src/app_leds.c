/*
 * app_leds.c
 *
 *  Created on: Apr 18, 2026
 *      Author: Jyde
 */

#include "app_leds.h"

void toggle_BLE_BTN_LED(void){
	LED_Toggle(BLE_BTN_LED);
}
void ON_LDR_LED(void){
	LED_On(LDR_LED);
}
void OFF_LDR_LED(void){
	LED_Off(LDR_LED);
}
