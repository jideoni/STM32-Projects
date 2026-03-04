/*
 * bsp_button.h
 *
 *  Created on: Feb 13, 2026
 *      Author: Jyde
 */

#ifndef INC_BSP_BUTTON_H_
#define INC_BSP_BUTTON_H_

void BSP_Button_Init(void);

/* called from ISR */
void BSP_Button_EXTI_Callback(void);

#endif /* INC_BSP_BUTTON_H_ */
