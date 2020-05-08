/**
 ******************************************************************************
 * @file           : main.c
 * @author         : The Thu Tran
 * @brief          : Blinkie test with base adresses and pointers on NUCLEO F303RE
 ******************************************************************************
*/

#include <stdint.h>
int main(void)
{




	// Enable AHB peripheral clock enable register (RCC_AHBENR) for GPIOA
	uint32_t *pRCC_AHBENR = (uint32_t*)0x40021014;
	*pRCC_AHBENR|=1<<17;




	// Enable  GPIO port mode register (GPIOA_MODER) General purpose output mode for GPIOA Pin5
	uint32_t *pGPIOA_MODER = 0x48000000;
	*pGPIOA_MODER|=(1<<10);

	// Write 1 in GPIO port output data register (GPIOA_ODR) for GPIOA Pin5
	uint32_t *pGPIOA_ODR = (uint32_t*) 0x48000014;
	*pGPIOA_ODR|=(1<<5);

	for(;;);
}
