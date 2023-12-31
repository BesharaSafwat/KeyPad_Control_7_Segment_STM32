/*
 * Gpio.h
 *
 *  Created on: May 6, 2023
 *      Author: hp
 */

#ifndef GPIO_H
#define GPIO_H
#include "Std_Types.h"

/*PortName*/
#define GPIO_A 'A'
#define GPIO_B 'B'
#define GPIO_C 'C'
#define GPIO_D 'D'

/*PinMode*/
#define GPIO_INPUT  0x00
#define GPIO_OUTPUT 0x01
#define GPIO_AF     0x02
#define GPIO_ANALOG 0x03

/*DefaultState*/
#define GPIO_PUSH_PULL  0x00
#define GPIO_OPEN_DRAIN 0x01


/*Data*/
#define LOW  0x00
#define HIGH 0x01


void Gpio_ConfigPin(uint8 PortName, uint8 PinNum, uint8 PinMode, uint8 DefaultState);

void Gpio_WritePin(uint8 PortName, uint8 PinNum, uint8 Data);

uint8 Gpio_ReadPin(uint8 PortName,uint8 PinNum);


#endif /* GPIO_H_ */
