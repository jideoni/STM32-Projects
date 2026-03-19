/*
 * bsp_leds.c
 *
 *  Created on: Mar 18, 2026
 *      Author: Jyde
 */

#include "main.h"
#include "gpio_map.h"
#include "bsp_leds.h"

void BSP_LEDs_Init(void) {
	GPIO_InitTypeDef GPIO_InitStruct = { 0 };

	/* GPIO Ports Clock Enable */
	__HAL_RCC_GPIOA_CLK_ENABLE();
	__HAL_RCC_GPIOB_CLK_ENABLE();

	/*Configure GPIO pin Output Level */
	HAL_GPIO_WritePin(BLE_BTN_LED_PORT, BLE_BTN_LED_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LDR_LED_PORT, LDR_LED_PIN, GPIO_PIN_RESET);

	/*Configure GPIO pin : LD2_Pin */
	GPIO_InitStruct.Pin = BLE_BTN_LED_PIN;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(BLE_BTN_LED_PORT, &GPIO_InitStruct);

	/*Configure GPIO pin : LED2_Pin */
	GPIO_InitStruct.Pin = LED2_Pin;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(LDR_LED_PORT, &GPIO_InitStruct);
}

void BSP_LED_On(LED_Id_t LED_ID) {
	switch (LED_ID) {
	case BLE_BTN_LED:
		//BLE_BTN_LED_PORT->BSRR = (1 << 2);
		break;
	case LDR_LED:
		LDR_LED_PORT->BSRR = ON;
		break;
	}
}

void BSP_LED_Off(LED_Id_t LED_ID) {
	switch (LED_ID) {
	case BLE_BTN_LED:
		//BLE_BTN_LED_PORT->BSRR = (1 << (2 + 16));
		break;
	case LDR_LED:
		LDR_LED_PORT->BSRR = OFF;
		break;
	}
}

void BSP_LED_Toggle(LED_Id_t LED_ID) {
	switch (LED_ID) {
	case BLE_BTN_LED:
		HAL_GPIO_TogglePin(BLE_BTN_LED_PORT, BLE_BTN_LED_PIN);
		break;
	case LDR_LED:
		//HAL_GPIO_TogglePin(LDR_LED_PORT, LED1_PIN);
		break;
	}
}
