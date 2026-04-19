/*
 * ble_driver.h
 *
 *  Created on: Feb 12, 2026
 *      Author: Jyde
 */

#ifndef USART_DRIVER_INC_BLE_DRIVER_H_
#define USART_DRIVER_INC_BLE_DRIVER_H_

#include "bsp_conf.h"

HAL_StatusTypeDef BLE_Driver_Start(void);
void BLE_Driver_ISR_Handler(void);
void BLE_RX_Complete_Callback(void);

#endif /* USART_DRIVER_INC_BLE_DRIVER_H_ */
