/*
 * bsp_ble.h
 *
 *  Created on: Feb 13, 2026
 *      Author: Jyde
 */

#ifndef INC_BSP_BLE_H_
#define INC_BSP_BLE_H_

#include <stdio.h>
#include <string.h>
#include "bsp_conf.h"

#define RX_SIZE 1	//size for 1 byte of data
#define BLE_USART USART1

#ifndef BLE_UART_HANDLER
#define BLE_UART_HANDLER        huart1
#endif

#if defined(BLE_UART_HANDLER)
extern UART_HandleTypeDef BLE_UART_HANDLER;
#endif

HAL_StatusTypeDef BSP_BLE_Start_RX(void);
void BSP_BLE_Init(void);
void BSP_BLE_RX_Complete_Callback(void);

#endif /* INC_BSP_BLE_H_ */
