/*
 * leds_service.c
 *
 *  Created on: Mar 18, 2026
 *      Author: Jyde
 */

#include "leds_service.h"

void LED_Service_Init(void){
	LEDs_Driver_Init();
}
void LED_Service_On(LED_Id_t LED_ID){
	LED_On(LED_ID);
}
void LED_Service_Off(LED_Id_t LED_ID){
	LED_Off(LED_ID);
}
void LED_Service_Toggle(LED_Id_t LED_ID){
	LED_Toggle(LED_ID);
}
