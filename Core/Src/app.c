#include "app.h"
#include <stdint.h>
#include "gpio.h"
#include "uart.h"
#include "tim.h"
#include "stm32f4xx_hal.h"

// Define HIGH and LOW for GPIO library
#define HIGH 1
#define LOW 0

// Delay for loop
uint32_t nextTick = 250;


void App_Init()
{
    GPIO_Init(GPIOA, 5);
    UART_Init(USART2, 115200);
    TIM_Init_ms(TIM2, 14);
    TIM_Start(TIM2);
}

void App_Loop(void)
{

    uint32_t now = uwTick;


    if (now >= nextTick) {
        UART_SendString(USART2, "C\r\n");

        nextTick += 1000;
    }

    if (TIM_Ready(TIM2)) {
        GPIO_Toggle(GPIOA, 5);
    }



//    if (now >= nextTick) {
//        GPIO_Toggle(GPIOA, 5);
//        nextTick += 500;
//    }



}
