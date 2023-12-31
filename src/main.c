/*
 * main.c
 * Name: Beshara Safwat
 * Section: 1
 * BN: 22
 */

#include "Rcc.h"
#include "Keypad.h"
#include "Std_Types.h"
#include "Gpio_Private.h"

int main(){

	Rcc_Init();
    Rcc_Enable(RCC_GPIOA);
    Rcc_Enable(RCC_GPIOB);

    Keypad_Init();
//    test input pin
    // config 7 seg pins as o/p
    uint32 i = 0;
    for (i = 0; i < 7; i++) {
        Gpio_ConfigPin(GPIO_A, i, GPIO_OUTPUT, GPIO_PUSH_PULL);
    }

    //
    while(1){
        Keypad_Manage();
    }
    return 0;
}

void KeypadCallout_KeyPressNotification(){
    uint8 key = Keypad_GetKey();
    switch (key)
    {
    case 1:
        Gpio_WritePin(GPIO_A, 0, LOW);
		Gpio_WritePin(GPIO_A, 1, HIGH);
		Gpio_WritePin(GPIO_A, 2, HIGH);
		Gpio_WritePin(GPIO_A, 3, LOW);
		Gpio_WritePin(GPIO_A, 4, LOW);
		Gpio_WritePin(GPIO_A, 5, LOW);
		Gpio_WritePin(GPIO_A, 6, LOW);
        break;
    case 2:
        Gpio_WritePin(GPIO_A, 0, HIGH);
		Gpio_WritePin(GPIO_A, 1, HIGH);
		Gpio_WritePin(GPIO_A, 2, LOW);
		Gpio_WritePin(GPIO_A, 3, HIGH);
		Gpio_WritePin(GPIO_A, 4, HIGH);
		Gpio_WritePin(GPIO_A, 5, LOW);
		Gpio_WritePin(GPIO_A, 6, HIGH);
        break;
    case 3:
        Gpio_WritePin(GPIO_A, 0, HIGH);
		Gpio_WritePin(GPIO_A, 1, HIGH);
		Gpio_WritePin(GPIO_A, 2, HIGH);
		Gpio_WritePin(GPIO_A, 3, HIGH);
		Gpio_WritePin(GPIO_A, 4, LOW);
		Gpio_WritePin(GPIO_A, 5, LOW);
		Gpio_WritePin(GPIO_A, 6, HIGH);
        break;
    case 4:
        Gpio_WritePin(GPIO_A, 0, LOW);
		Gpio_WritePin(GPIO_A, 1, HIGH);
		Gpio_WritePin(GPIO_A, 2, HIGH);
		Gpio_WritePin(GPIO_A, 3, LOW);
		Gpio_WritePin(GPIO_A, 4, LOW);
		Gpio_WritePin(GPIO_A, 5, HIGH);
		Gpio_WritePin(GPIO_A, 6, HIGH);
        break;
    case 5:
        Gpio_WritePin(GPIO_A, 0, HIGH);
		Gpio_WritePin(GPIO_A, 1, LOW);
		Gpio_WritePin(GPIO_A, 2, HIGH);
		Gpio_WritePin(GPIO_A, 3, HIGH);
		Gpio_WritePin(GPIO_A, 4, LOW);
		Gpio_WritePin(GPIO_A, 5, HIGH);
		Gpio_WritePin(GPIO_A, 6, HIGH);
        break;
    case 6:
        Gpio_WritePin(GPIO_A, 0, HIGH);
		Gpio_WritePin(GPIO_A, 1, LOW);
		Gpio_WritePin(GPIO_A, 2, HIGH);
		Gpio_WritePin(GPIO_A, 3, HIGH);
		Gpio_WritePin(GPIO_A, 4, HIGH);
		Gpio_WritePin(GPIO_A, 5, HIGH);
		Gpio_WritePin(GPIO_A, 6, HIGH);
        break;
    case 7:
        Gpio_WritePin(GPIO_A, 0, HIGH);
		Gpio_WritePin(GPIO_A, 1, HIGH);
		Gpio_WritePin(GPIO_A, 2, HIGH);
		Gpio_WritePin(GPIO_A, 3, LOW);
		Gpio_WritePin(GPIO_A, 4, LOW);
		Gpio_WritePin(GPIO_A, 5, LOW);
		Gpio_WritePin(GPIO_A, 6, LOW);
        break;
    case 8:
        Gpio_WritePin(GPIO_A, 0, HIGH);
		Gpio_WritePin(GPIO_A, 1, HIGH);
		Gpio_WritePin(GPIO_A, 2, HIGH);
		Gpio_WritePin(GPIO_A, 3, HIGH);
		Gpio_WritePin(GPIO_A, 4, HIGH);
		Gpio_WritePin(GPIO_A, 5, HIGH);
		Gpio_WritePin(GPIO_A, 6, HIGH);
        break;
    case 9:
        Gpio_WritePin(GPIO_A, 0, HIGH);
		Gpio_WritePin(GPIO_A, 1, HIGH);
		Gpio_WritePin(GPIO_A, 2, HIGH);
		Gpio_WritePin(GPIO_A, 3, LOW);
		Gpio_WritePin(GPIO_A, 4, LOW);
		Gpio_WritePin(GPIO_A, 5, HIGH);
		Gpio_WritePin(GPIO_A, 6, HIGH);
        break;
    case 0:
        Gpio_WritePin(GPIO_A, 0, HIGH);
		Gpio_WritePin(GPIO_A, 1, HIGH);
		Gpio_WritePin(GPIO_A, 2, HIGH);
		Gpio_WritePin(GPIO_A, 3, HIGH);
		Gpio_WritePin(GPIO_A, 4, HIGH);
		Gpio_WritePin(GPIO_A, 5, HIGH);
		Gpio_WritePin(GPIO_A, 6, LOW);
        break;
    default:
        Gpio_WritePin(GPIO_A, 0, HIGH);
		Gpio_WritePin(GPIO_A, 1, HIGH);
		Gpio_WritePin(GPIO_A, 2, HIGH);
		Gpio_WritePin(GPIO_A, 3, HIGH);
		Gpio_WritePin(GPIO_A, 4, HIGH);
		Gpio_WritePin(GPIO_A, 5, HIGH);
		Gpio_WritePin(GPIO_A, 6, LOW);
        break;
    }
}
