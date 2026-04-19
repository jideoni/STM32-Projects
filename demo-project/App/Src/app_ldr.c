/*
 * app_ldr.c
 *
 *  Created on: Apr 18, 2026
 *      Author: Jyde
 */

#include "app_ldr.h"
#include "serial_debug_driver.h"
#include "app_leds.h"

static uint16_t LDR_Value;

void process_brightness(void) {
	LDR_Value = (uint16_t) adc_buf[0];
	if (LDR_Value <= 1000) {
		ON_LDR_LED();
		print_message("Dark!\r\n");
	} else if (LDR_Value >= 2000) {
		OFF_LDR_LED();
		print_message("Bright!\r\n");
	}
}
