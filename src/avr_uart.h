/* 

  * ATmega32A_UART.h

  * Created: 17/4/2021 8:16 AM

  * Author: Abdelaziz

*/

#ifndef ATMEGA_UART_H_
#define ATMEGA_UART_H_

#define UART_BAUDRATE (57600)


/* this func starts UART */ 
void avr_uart_init(void);

/* this func sends Byte through UART */
void avr_uart_send_byte((unsigned char tx_byte);

/* this func receive Byte through UART */
int16_t avr_uart_receive_byte(void);


#endif /* ATMEGA_UART_H_ */

