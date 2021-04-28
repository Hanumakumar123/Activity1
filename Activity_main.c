/**
 * @file main.c
 * @author HanumaKumar G ()
 * @brief 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include <avr/io.h>
#include<util/delay.h>
/**
 * @brief By using the button sensor turn on the heater sensor that turn on heater sensor shows by LED
 * 
 * @return int 
 */
int main(void)
{
  Button_led_Init();
  init_ADC;
  unit16_ temp;

 /**
     * @brief Infinite loop to run the microcontroller
     * 
     */
 while(1)
    {
      if(button_sensor_on))) // Checking if the input bit to 0th bit of pinD is made 0 from 1 by pressing led

       if((Heater_on))) // Checking if the input bit to 1th bit of pinD is made 0 from 1 by pressing led
      {
         set_led;//make 0th bit of port B as 1, makes led glow
         temp=Read_ADC(0);
        _delay_ms(1000); // delay 
      }
        else
      {
        set_led; // make led off
         _delay_ms(1000);
      }

      else
      {
        set_led_off // Make led off
        _delay_ms(1000);

      }

    }
    return 0;
  }

