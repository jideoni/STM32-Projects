/*
 * button.h
 *
 *  Created on: Feb 12, 2026
 *      Author: Jyde
 */

#ifndef GPIO_DRIVER_INC_BUTTON_DRIVER_H_
#define GPIO_DRIVER_INC_BUTTON_DRIVER_H_

#include "bsp_button.h"

void Button_Driver_Init(void);

/* called from BSP ISR */
void Button_Driver_ISR_Handler(void);

#endif /* GPIO_DRIVER_INC_BUTTON_DRIVER_H_ */
