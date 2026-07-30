#ifndef INC_GPIO_H_
#define INC_GPIO_H_

#include <stdint.h>
#include "stm32f4xx.h"

void GPIO_Init(GPIO_TypeDef *port, uint8_t pin);
void GPIO_Set(GPIO_TypeDef *port, uint8_t pin, uint8_t state);
void GPIO_Toggle(GPIO_TypeDef *port, uint8_t pin);

#endif /* INC_GPIO_H_ */
