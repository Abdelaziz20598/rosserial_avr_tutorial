/* 

  * ATmega32A_UART.c

  * Created: 17/4/2021 8:16 AM

  * Author: Abdelaziz

*/

/*
*BAUD   = 57600
*Stop   = 1 Stop
*parity = Disabled
*Data   = 7bit
*Async "from datasheet, avr by default 1 MH "  

*/
#include "avr_uart.h"
#include <avr/io.h>

/* this func starts UART */ 
void avr_uart_init(void){


}

/* this func sends Byte through UART */
void avr_uart_send_byte((unsigned char tx_byte){}

/* this func receive Byte through UART */
int16_t avr_uart_receive_byte(void){}



