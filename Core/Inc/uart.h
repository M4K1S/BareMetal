#ifndef INC_UART_H_
#define INC_UART_H_

#include <stdint.h>
#include "stm32f4xx.h"

void UART_Init(USART_TypeDef *port, uint32_t baudRate);
void UART_SendChar(USART_TypeDef *port, char c);
void UART_SendString(USART_TypeDef *port, const char *s);

#endif
