/*
 * bsp_ldr.h
 *
 *  Created on: Feb 13, 2026
 *      Author: Jyde
 */

#ifndef INC_BSP_ADC_H_
#define INC_BSP_ADC_H_

#define ADC_BUF_LEN 1
#define LDR_ADC 				ADC1

#ifndef LDR_ADC_HANDLER
#define LDR_ADC_HANDLER        	hadc
#endif

void BSP_LDR_Init(void);
void BSP_LDR_DMA_Init(void);
void BSP_ADC_Init(void);

#endif /* INC_BSP_ADC_H_ */
