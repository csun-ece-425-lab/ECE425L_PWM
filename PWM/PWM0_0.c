/**
 * @file PWM0_0.c
 *
 * @brief Source file for the PWM0_0 driver.
 *
 * This file contains the function definitions for the PWM0_0 driver.
 * It uses the Module 0 PWM Generator 0 to generate a PWM signal using the PB6 pin.
 *
 * @note This driver assumes that the system clock's frequency is 50 MHz.
 *
 * @note This driver assumes that the PWM_Clock_Init function has been called
 * before calling the PWM0_0_Init function.
 *
 * @author Aaron Nanas
 */

#include "PWM0_0.h"
 
void PWM0_0_Init(uint16_t period_constant, uint16_t duty_cycle)
{	

}

void PWM0_0_Update_Duty_Cycle(uint16_t duty_cycle)
{

}
