/**
 * @file Activity1.c
 * @author Hanuma Kumar G(you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
#include <util/delay.h>

/**
 * @brief A function to operate the button and heater sensor
 * 
 */
void Button_LED_Init()
{
SET_LED_AS_OUTPUT; //set led as output port B
SET_BUTTON_AS_INPUT; //clear bit 6 of DDR D
PULLUP_BUTTON; //Set bit 6 of Port B
SET_HEATER_AS_INPUT; //clear bit 7 of DDR D
PULLUP_HEATER;//Set bit 7 of DDR D

}
