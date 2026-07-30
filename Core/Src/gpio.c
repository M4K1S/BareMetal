#include <stm32f4xx.h>

void GPIO_Init(GPIO_TypeDef *port, uint8_t pin) {

    if (port == GPIOA) {
        RCC->AHB1ENR |= (1U << 0); // Turn on GPIOA Clock
    } else if (port == GPIOB) {
        RCC->AHB1ENR |= (1U << 1); // Turn on GPIOB Clock
    } else if (port == GPIOC) {
        RCC->AHB1ENR |= (1U << 2); // Turn on GPIOC Clock
    }

    // Configure pin as output  (01)
    port->MODER &= ~(0b11U << (pin * 2)); // Clear MODER bits
    port->MODER |=  (0b01U << (pin * 2)); // Set set MODER bits to 01
}
void GPIO_Set(GPIO_TypeDef *port, uint8_t pin, uint8_t state) {
    if (state) port->ODR |= (0b1U << pin); // Sets pin HIGH if state is 1
    else port->ODR &= ~(0b1U << pin); // Sets pin LOW if state is 0
}

void GPIO_Toggle(GPIO_TypeDef *port, uint8_t pin) {
    port->ODR  ^= (0b1U << pin);
}
