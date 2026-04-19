/*
 * bsp_serial_debug.c
 *
 *  Created on: Feb 13, 2026
 *      Author: Jyde
 */

#include <serial_debug_driver.h>
#include "bsp_uart.h"

void print_message(const char *msg) {
	HAL_UART_Transmit(&SERIAL_DEBUG_UART_HANDLER, (uint8_t*) msg, strlen(msg), 100);
}
