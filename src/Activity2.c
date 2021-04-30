
/**
 * @file Activity2.c
 * @author Hanuma Kumar G ()
 * @brief 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>


/**
 * @brief A function to initialise the Convertor from analog to
 * 
 */
void InitADC()
{
    ADMUX = (1<<REFS0);
    ADCSRA = (1<<ADEN)|(7<<ADPS0);
}

/**
 * @brief This is the function to receive the inputs from temperature sensor from analog pin and output it to a register ADC which has two  8 bit registers ADCL and ADCH.
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t ch)
{
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    ADCSRA|=(1<<ADSC);
    while(!(ADCSRA&(1<<ADIF)));ADCSRA|=(1<<ADIF);
    return(ADC);
}