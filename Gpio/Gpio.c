/*
 * Gpio.c
 *
 *  Created on: May 6, 2023
 *      Author: hp
 */

#include "Std_Types.h"
#include "Gpio.h"
#include "Gpio_Private.h"

void Gpio_ConfigPin(uint8 PortName, uint8 PinNum, uint8 PinMode,
                    uint8 DefaultState) {
  switch (PortName) {
    case GPIO_A:
      GPIOA_MODER &= ~(0x03 << (PinNum * 2));
      GPIOA_MODER |= (PinMode << (PinNum * 2));

      GPIOA_OTYPER &= ~(0x01 << PinNum);
      GPIOA_OTYPER |= (DefaultState << PinNum);

      break;
    case GPIO_B:
      GPIOB_MODER &= ~(0x03 << (PinNum * 2));
      GPIOB_MODER |= (PinMode << (PinNum * 2));

      GPIOB_OTYPER &= ~(0x01 << PinNum);
      GPIOB_OTYPER |= (DefaultState << PinNum);

      break;
    case GPIO_C:
      // TODO:
      GPIOC_MODER &= ~(0X03 << PinNum*2);
      GPIOC_MODER |= (PinMode << PinNum*2);

      GPIOC_OTYPER &= ~(0X01 << PinNum);
      GPIOC_OTYPER |= (DefaultState << PinNum);

      break;
    case GPIO_D:
      // TODO:
      GPIOD_MODER &= ~(0X03 << PinNum*2);
      GPIOD_MODER |= (PinMode << PinNum*2);

      GPIOD_OTYPER &= ~(0X01 << PinNum);
      GPIOD_OTYPER |= (DefaultState << PinNum);

      break;
    default:
      break;
  }
}

void Gpio_WritePin(uint8 PortName, uint8 PinNum, uint8 Data) {

 //TODO: check if the pin is output
  uint8 PinMode;
  switch (PortName) {
    case GPIO_A:
      PinMode = (GPIOA_MODER & (0X03 << PinNum*2)) >> (PinNum*2) ;
      if (PinMode == GPIO_OUTPUT ){
        GPIOA_ODR &= ~(0x1 << PinNum);
        GPIOA_ODR |= (Data << PinNum);
      }
      break;
    case GPIO_B:
      // PinMode = (GPIOB_MODER & (0X01 << PinNum*2)) >> (PinNum*2);
      // if (PinMode == GPIO_OUTPUT ){
        GPIOB_ODR &= ~(0x1 << PinNum);
        GPIOB_ODR |= (Data << PinNum);
      // }
      break;
    case GPIO_C:
      // TODO:
      PinMode = (GPIOC_MODER & (0X01 << PinNum*2)) >> (PinNum*2);
      if (PinMode == GPIO_OUTPUT ){
        GPIOC_ODR &= ~(0X01 << PinNum);
        GPIOC_ODR |= (Data << PinNum);
      }
      break;
    case GPIO_D:
      // TODO:
      PinMode = (GPIOD_MODER & (0X01 << PinNum*2)) >> (PinNum*2);
      if (PinMode == GPIO_OUTPUT ){
        GPIOD_ODR &= ~(0X01 << PinNum);
        GPIOD_ODR |= (Data << PinNum);
      }
      break;
    default:
      break;
  }
}

uint8 Gpio_ReadPin(uint8 PortName,uint8 PinNum){
  uint8 data;
  switch (PortName)
  {
  case GPIO_A:
    data = (GPIOA_IDR & (0X01<<PinNum)) >> PinNum;
    break;
  case GPIO_B:
    data = (GPIOB_IDR & (0X01<<PinNum)) >> PinNum;
    break;
  case GPIO_C:
    data = (GPIOC_IDR & (0X01<<PinNum)) >> PinNum;
    break;
  case GPIO_D:
    data = (GPIOD_IDR & (0X01<<PinNum)) >> PinNum;
    break;
  default:
    break;
  }
  return data;
}

