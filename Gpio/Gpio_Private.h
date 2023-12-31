/*
 * Gpio_Private.h
 *
 *  Created on: May 6, 2023
 *      Author: hp
 */

#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H

#include "Utils.h"

#define GPIOA_BASE_ADDR 0x40020000
#define GPIOA_MODER REG32(GPIOA_BASE_ADDR, 0x00)
#define GPIOA_OTYPER REG32(GPIOA_BASE_ADDR, 0x04)
#define GPIOA_OSPEEDR REG32(GPIOA_BASE_ADDR, 0x08)
#define GPIOA_PUPDR REG32(GPIOA_BASE_ADDR, 0x0C)
#define GPIOA_IDR REG32(GPIOA_BASE_ADDR, 0x10)
#define GPIOA_ODR REG32(GPIOA_BASE_ADDR, 0x14)
#define GPIOA_BSRR REG32(GPIOA_BASE_ADDR, 0x18)
#define GPIOA_LCKR REG32(GPIOA_BASE_ADDR, 0x1C)
#define GPIOA_AFRL REG32(GPIOA_BASE_ADDR, 0x20)
#define GPIOA_AFRH REG32(GPIOA_BASE_ADDR, 0x24)

#define GPIOB_BASE_ADDR 0x40020400
#define GPIOB_MODER REG32(GPIOB_BASE_ADDR, 0x00)
#define GPIOB_OTYPER REG32(GPIOB_BASE_ADDR, 0x04)
#define GPIOB_OSPEEDR REG32(GPIOB_BASE_ADDR, 0x08)
#define GPIOB_PUPDR REG32(GPIOB_BASE_ADDR, 0x0C)
#define GPIOB_IDR REG32(GPIOB_BASE_ADDR, 0x10)
#define GPIOB_ODR REG32(GPIOB_BASE_ADDR, 0x14)
#define GPIOB_BSRR REG32(GPIOB_BASE_ADDR, 0x18)
#define GPIOB_LCKR REG32(GPIOB_BASE_ADDR, 0x1C)
#define GPIOB_AFRL REG32(GPIOB_BASE_ADDR, 0x20)
#define GPIOB_AFRH REG32(GPIOB_BASE_ADDR, 0x24)

#define GPIOC_BASE_ADDR 0x40020800
#define GPIOC_MODER REG32(GPIOC_BASE_ADDR, 0x00)
#define GPIOC_OTYPER REG32(GPIOC_BASE_ADDR, 0x04)
#define GPIOC_OSPEEDR REG32(GPIOC_BASE_ADDR, 0x08)
#define GPIOC_PUPDR REG32(GPIOC_BASE_ADDR, 0x0C)
#define GPIOC_IDR REG32(GPIOC_BASE_ADDR, 0x10)
#define GPIOC_ODR REG32(GPIOC_BASE_ADDR, 0x14)
#define GPIOC_BSRR REG32(GPIOC_BASE_ADDR, 0x18)
#define GPIOC_LCKR REG32(GPIOC_BASE_ADDR, 0x1C)
#define GPIOC_AFRL REG32(GPIOC_BASE_ADDR, 0x20)
#define GPIOC_AFRH REG32(GPIOC_BASE_ADDR, 0x24)


#define GPIOC_BASE_ADDR 0x40020800
#define GPIOC_MODER REG32(GPIOC_BASE_ADDR, 0x00)
#define GPIOC_OTYPER REG32(GPIOC_BASE_ADDR, 0x04)
#define GPIOC_OSPEEDR REG32(GPIOC_BASE_ADDR, 0x08)
#define GPIOC_PUPDR REG32(GPIOC_BASE_ADDR, 0x0C)
#define GPIOC_IDR REG32(GPIOC_BASE_ADDR, 0x10)
#define GPIOC_ODR REG32(GPIOC_BASE_ADDR, 0x14)
#define GPIOC_BSRR REG32(GPIOC_BASE_ADDR, 0x18)
#define GPIOC_LCKR REG32(GPIOC_BASE_ADDR, 0x1C)
#define GPIOC_AFRL REG32(GPIOC_BASE_ADDR, 0x20)
#define GPIOC_AFRH REG32(GPIOC_BASE_ADDR, 0x24)


#define GPIOD_BASE_ADDR 0x40020800
#define GPIOD_MODER REG32(GPIOD_BASE_ADDR, 0x00)
#define GPIOD_OTYPER REG32(GPIOD_BASE_ADDR, 0x04)
#define GPIOD_OSPEEDR REG32(GPIOD_BASE_ADDR, 0x08)
#define GPIOD_PUPDR REG32(GPIOD_BASE_ADDR, 0x0C)
#define GPIOD_IDR REG32(GPIOD_BASE_ADDR, 0x10)
#define GPIOD_ODR REG32(GPIOD_BASE_ADDR, 0x14)
#define GPIOD_BSRR REG32(GPIOD_BASE_ADDR, 0x18)
#define GPIOD_LCKR REG32(GPIOD_BASE_ADDR, 0x1C)
#define GPIOD_AFRL REG32(GPIOD_BASE_ADDR, 0x20)
#define GPIOD_AFRH REG32(GPIOD_BASE_ADDR, 0x24)



#endif /* GPIO_PRIVATE_H */
