/**
 * @file Activity3.h
 * @author Hanuma Kumar G()
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>
#include<util/delay.h>

/**
 * @brief A function which receives the input from temperature sensor and shows the output in PWM waveform
 * 
 */
char PWM(uint16_t temp)