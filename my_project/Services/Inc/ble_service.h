/*
 * ble_service.h
 *
 *  Created on: Feb 13, 2026
 *      Author: Jyde
 */

#ifndef INC_BLE_SERVICE_H_
#define INC_BLE_SERVICE_H_

#include "bsp_ble.h"

extern uint8_t ble_rx_complete;

void BLE_Service_Init(void);
void BLE_Service_Set_Threadflag(void);

#endif /* INC_BLE_SERVICE_H_ */
