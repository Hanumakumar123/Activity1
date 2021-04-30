/**
 * @file Activity3.c
 * @author Hanuma Kumar G (you@domain.com)
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
 * @brief A function to intialize the Timers and channels and setting prescaler value
 * 
 */
void timer()
{
    TCCR0A|=(1<<COM0A1)|(1<<WGM01)|(1<<WGM00);// CONFIGURING FOR FAST PWM MODE
    TCCR0B|=(1<<CS01)|(1<<CS00);// SETTING THE PRESCALER TO 64
    DDRD|=(1<<DDD6);//CONFIGURING PIN D6
    
}

/**
 * @brief A function it is used to get the ADC value by using this ADC values we can generate the PWM. 
 * By using this we will get duty cycle.
 
 */
char PWM(uint16_t temp)
{

    char temperature;

    if((temp=0)&&(temp=210))
    {
         OCR1A=205;
         temperature=20;
        _delay_ms(1000);
    }
    else if((temp=210)&&(temp=510))
    {
         OCR1A=410;
         temperature=25;
        _delay_ms(1000);
    }
    else if((temp=510)&&(temp=710))
    {
         OCR1A=717;
         temperature=29;
        _delay_ms(1000);
    }
    else if((temp=710)&&(temp=1024))
    {
         OCR1A=973;
         temperature=33;
        _delay_ms(1000);
    }
    else
    {
        OCR1A=0;
        temperature=0;
    }
    return temperature;

}