/*
 * button.c
 *
 *  Created on: Feb 12, 2026
 *      Author: Jyde
 */

//#include "main.h"
//
#include "button_driver.h"
#include "thread_notification_flags.h"
#include "thread_handles.h"

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {
	if (GPIO_Pin == BUTTON_PIN) // If The INT Source Is Push_Button_Pin (PB5)
	{
		osThreadFlagsSet(LED1ThreadHandle, LED1_THREAD_BUTTON_FLAG);
	}
}
