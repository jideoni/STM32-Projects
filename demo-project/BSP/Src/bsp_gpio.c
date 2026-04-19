/*
 * bsp_gpio.h
 *
 *  Created on: Apr 16, 2026
 *      Author: Jyde
 */

#include "bsp_gpio.h"

void BSP_GPIO_Init(void) {
	///////////////LEDs
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
	GPIO_InitStruct.Pin = LDR_LED_PIN;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(LDR_LED_PORT, &GPIO_InitStruct);

	//////////////////Button
	//GPIO_InitTypeDef GPIO_InitStruct = { 0 };
	/* USER CODE BEGIN MX_GPIO_Init_1 */
	/* USER CODE END MX_GPIO_Init_1 */

	/* GPIO Ports Clock Enable */
	__HAL_RCC_GPIOF_CLK_ENABLE();
	__HAL_RCC_GPIOC_CLK_ENABLE();

	/*Configure GPIO pin : B1_Pin */
	GPIO_InitStruct.Pin = BUTTON_PIN;
	GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	HAL_GPIO_Init(BUTTON_GPIO_PORT, &GPIO_InitStruct);

	/* EXTI interrupt init*/
	HAL_NVIC_SetPriority(EXTI4_15_IRQn, 3, 0);
	HAL_NVIC_EnableIRQ(EXTI4_15_IRQn);
}
