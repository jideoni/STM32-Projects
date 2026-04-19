/*
 * bsp_ble.h
 *
 *  Created on: Feb 13, 2026
 *      Author: Jyde
 */

#ifndef INC_BSP_UART_H_
#define INC_BSP_UART_H_

#include "bsp_conf.h"

#define RX_SIZE 1	//size for 1 byte of data
#define BLE_USART 				USART1

#ifndef BLE_UART_HANDLER
#define BLE_UART_HANDLER        huart1
#endif

#if defined(BLE_UART_HANDLER)
extern UART_HandleTypeDef BLE_UART_HANDLER;
#endif

#define SERIAL_DEBUG_UART 					USART2

#ifndef SERIAL_DEBUG_UART_HANDLER
#define SERIAL_DEBUG_UART_HANDLER        	huart2
#endif

#if defined(SERIAL_DEBUG_UART_HANDLER)
extern UART_HandleTypeDef SERIAL_DEBUG_UART_HANDLER;
#endif

void BSP_BLE_Init(void);
void Serial_Debugger_Init(void);

void BSP_UART_Init(void);

#endif /* INC_BSP_UART_H_ */
