/*
 * bsp_ble.h
 *
 *  Created on: Feb 13, 2026
 *      Author: Jyde
 */

#ifndef INC_BSP_BLE_H_
#define INC_BSP_BLE_H_

#include "main.h"

#include <stdio.h>
#include <string.h>

#define RX_SIZE 1	//size for 1 data element
#define BLE_UART_HANDLER &huart1

extern UART_HandleTypeDef huart1;

void BSP_BLE_Init(void);

void BSP_BLE_Start_RX(void);
void BSP_BLE_RX_Complete_Callback(void);

#endif /* INC_BSP_BLE_H_ */
