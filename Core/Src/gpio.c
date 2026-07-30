void GPIO_Init() {
    RCC->AHB1ENR |= (1 << 0); // Turn on GPIOA Clock

    // PA5 Output mpde (01)
    GPIOA->MODER &= ~(0b11 << 10); // Clear bits 11:10
    GPIOA->MODER |=  (0b01 << 10); // Set bits 11:10 to 01

}
void GPIO_Set() {

}
void GPIO_Clear() {

}
void GPIO_Toggle() {

}
