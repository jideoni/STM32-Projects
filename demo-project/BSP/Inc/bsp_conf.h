/*
 * bsp_conf.h
 *
 *  Created on: Apr 13, 2026
 *      Author: Jyde
 */

#ifndef INC_BSP_CONF_H_
#define INC_BSP_CONF_H_

// Choose a microcontroller family
#define STM32F0
//#define STM32F4

#if defined(STM32F0)
#include "stm32f0xx_hal.h"
#elif defined(STM32F4)
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_gpio.h"
#else
#error "Not tested on the specified MCU Family"
#endif

#endif /* INC_BSP_CONF_H_ */
