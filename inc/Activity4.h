/**
 * @file Activity4.h
 * @author Hanuma Kumar (you@domain.com)
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
 * @brief A function intialise the UART Serial Communication
 * 
 * @param ubrr_value
 * 
 */
void USARTInit(uint16_t ubrr_value)

/**
 * @brief A function to read characters from UART Port 
 * 
 */
char USARTReadchar()

/**
 * @brief  Function to write the characters to send UART port
 * 
 */
void USARTWritechar(char data)