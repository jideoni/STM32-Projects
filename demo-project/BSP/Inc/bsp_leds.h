/*
 * bsp_leds.h
 *
 *  Created on: Mar 18, 2026
 *      Author: Jyde
 */

#ifndef INC_BSP_LEDS_H_
#define INC_BSP_LEDS_H_

#define ON (1 << 2);
#define OFF (1 << (2 + 16));

typedef enum {
	BLE_BTN_LED, LDR_LED
//add more LEDs if needed
} LED_Id_t;

void BSP_LEDs_Init(void);
void BSP_LED_On(LED_Id_t LED_ID);
void BSP_LED_Off(LED_Id_t LED_ID);
void BSP_LED_Toggle(LED_Id_t LED_ID);

#endif /* INC_BSP_LEDS_H_ */
