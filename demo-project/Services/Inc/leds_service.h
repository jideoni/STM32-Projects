/*
 * led_service.h
 *
 *  Created on: Mar 18, 2026
 *      Author: Jyde
 */

#ifndef INC_LEDS_SERVICE_H_
#define INC_LEDS_SERVICE_H_

#include "leds_driver.h"

void LED_Service_Init(void);
void LED_Service_Toggle(LED_Id_t LED_ID);
void LED_Service_On(LED_Id_t LED_ID);
void LED_Service_Off(LED_Id_t LED_ID);

#endif /* INC_LEDS_SERVICE_H_ */
