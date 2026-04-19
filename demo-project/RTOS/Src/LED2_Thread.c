/*
 * LED2_Thread.c
 *
 *  Created on: Feb 12, 2026
 *      Author: Jyde
 */

#include "cmsis_os.h"
#include "LED2_Thread.h"
#include "thread_notification_flags.h"
#include "serial_debug_driver.h"
#include "app_ldr.h"

/* Definitions for LED2Thread */
osThreadId_t LED2ThreadHandle;

const osThreadAttr_t LED2Thread_attributes = { .name = "LED2Thread",
		.stack_size = 128 * 4, .priority = (osPriority_t) osPriorityNormal, };
static void StartLED2Thread(void *argument);

void LED2_Thread_Init(void) {
	/* creation of LED2Thread */
	LED2ThreadHandle = osThreadNew(StartLED2Thread, NULL,
			&LED2Thread_attributes);
}
/* USER CODE END Header_StartLED2Thread */
static void StartLED2Thread(void *argument) {
	/* USER CODE BEGIN 5 */
	/* Infinite loop */
	for (;;) {
		LDR_Driver_Start();
		osThreadFlagsWait(LED2_THREAD_FLAG, osFlagsWaitAny, osWaitForever);
		process_brightness();
		osDelay(1000);
	}
	/* USER CODE END 5 */
}
