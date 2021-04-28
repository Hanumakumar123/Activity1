/**
 * @file Activity1.h
 * @author Hanuma Kumar G(you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>


/**
 * @brief A macro to check if the button is pressed or not. If pressed, the input to 1st bit of PIND is 0.
 * 
 */
#define BUTTON_SESOR_ON !(PIND&(1<<PD1)))

/**
 * @brief A macro to check if the button is pressed or not. If pressed, the input to 0th bit of PIND is 0.
 * 
 */
#define HEATER_SESNOR_ON !(PIND&(1<<PD0)))

/**
 * @brief  A macro to turn off the LED by clearing the 0th bit of PORTB
 * 
 */
#define SET_LED PORTB|=(1<<PB0);

/**
 * @brief  A macro to turn off the LED by clearing the 0th bit of PORTB
 * 
 */
#define LED_OFF PORTB&=~(1<<PB0);

/**
 * @brief A macro to set 0th bit of PORTB as output
 * 
 */
#define SET_LED_AS_OUTPUT DDRB|=(1<<PB0)

/**
 * @brief A macro to set 0th bit of PORTD as input
 * 
 */
#define SET_BUTTON_AS_INPUT DDRD&=~(1<<PD0)

/**
 * @brief A macro to set 1st bit of PORTD as input
 * 
 */
#define SET_BUTTON_AS_INPUT DDRD&=~(1<<PD1)


/**
 * @brief A macro to set 0th bit of PORTD
 * 
 */
#define PULLUP_HEATER PORTD|=(1<<PD0)


/**
 * @brief A function to operate the button and heater sensor
 * 
 */
#define PULLUP_HEATER PORTD|=(1<<PD1)

void Buttons_LED_Init();

/**
 * @brief A function to initialise the analog to digital converter
 * 
 */

void Init_ADC();

/**
 * @brief A funciton to receive temperature sensor inputs from analog pin and output it to a register ADC which has 2 8 bit registers ADCL and ADCH.
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t Read_ADC(uint8_t ch);

