/**
 * @file  Activity_main.c
 * @author HanumaKumar G ()
 * @brief 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */


int main(void)
{
  /**
   * @brief A function to intialize the Timers and channels and setting prescaler value
   * 
   */
    TCCR0A|=(1<<COM0A1)|(1<<WGM01)|(1<<WGM00);// CONFIGURING FOR FAST PWM MODE
    TCCR0B|=(1<<CS01)|(1<<CS00);// SETTING THE PRESCALER TO 64
    DDRD|=(1<<DDD6);//CONFIGURING PIN D6

 port();
 InitADC();
 USARTInit(103);

 uint16_t temp;
 timer();
 while(1)

{
    if(BUTTON_SENSOR_ON) //// Button Sensor ON
   {
       if(HEATER_ON)
       {

            SET_LED; //LED On
           _delay_ms(1000);
           temp=ReadADC(0);
           PWM(temp);
           serial();

       }
       else
       {

        CLEAR_LED;// LED OFF
         OCR1A=0//makeing PWM Output is 0 if Switch is Off
        _delay_ms(1000);

       }
    }
   else
   {

      CLEAR_LED; //make led off
      OCR1A=0//makeing PWM Output is 0 if Switch is Off
     _delay_ms(1000);
   }

}
{
 // Do nothing
}
return 0;
}
