/*
 * button.c
 *
 *  Created on: Feb 12, 2026
 *      Author: Jyde
 */

#include "main.h"
#include "button_driver.h"
#include "bsp_button.h"
#include "thread_notification_flags.h"
#include "thread_handles.h"

void Button_Driver_Init(){
	BSP_Button_Init();
}

void Button_Driver_ISR_Handler(void)
{
    //buttonEvent = 1;   // set event flag (ISR safe)
	osThreadFlagsSet(LED1ThreadHandle, LED1_THREAD_BUTTON_FLAG);
}
