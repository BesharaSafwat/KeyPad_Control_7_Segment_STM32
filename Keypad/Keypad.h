/*
 * Keypad.h
 *
 *  Created on: May 6, 2023
 *      Author: hp
 */

#ifndef KEYPAD_H
#define KEYPAD_H

#include "Gpio.h"

#define COL_PORT GPIO_B 
#define COL_START_INDEX 8
#define COL_END_INDEX 10

#define ROW_PORT GPIO_B
#define ROW_START_INDEX 12
#define ROW_END_INDEX 15


void Keypad_Init(void);

void Keypad_Manage(void);

uint8 Keypad_GetKey(void);

void KeypadCallouts_KeyPressNotification(void);

#endif /* KEYPAD_H */
