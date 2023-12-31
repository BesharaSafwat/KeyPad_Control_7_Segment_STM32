/*
 * Keypad.c
 *
 *  Created on: May 6, 2023
 *      Author: hp
 */
#include "Keypad.h"
#include "Gpio.h"
#include "Std_Types.h"
#include "Gpio_Private.h"

uint8 no_col = 3 ;
uint8 key_pressed = 0 ;
uint8 arr[4][3] = {
					{1,2,3},
					{4,5,6},
					{7,8,9},
					{0,0,0}
				   };

void Keypad_Init(void){

    uint8 index =0;
    for ( index = COL_START_INDEX; index <= COL_END_INDEX; index++){
        Gpio_ConfigPin(COL_PORT, index, GPIO_INPUT, GPIO_PUSH_PULL);
        GPIOB_PUPDR &= ~(0x03 << (index*2) );
        GPIOB_PUPDR |= (0x02 << (index*2));
    }
    for ( index = ROW_START_INDEX; index <= ROW_END_INDEX; index++){
        Gpio_ConfigPin(ROW_PORT, index, GPIO_OUTPUT, GPIO_PUSH_PULL);
        Gpio_WritePin(ROW_PORT, index, LOW);
    }
}

void Keypad_Manage(void){
    uint32 i,j,k;
    uint8 col_pin,key;

    for ( i = ROW_START_INDEX; i <= ROW_END_INDEX; i++){
        Gpio_WritePin(ROW_PORT,i,HIGH);
        for(j = COL_START_INDEX; j <= COL_END_INDEX; j++){
            col_pin = Gpio_ReadPin(COL_PORT,j);
            if(col_pin == 1){
            	 for(k=0; k<100000; k++);
                 col_pin = Gpio_ReadPin(COL_PORT,j);
            	 if(col_pin == 1){
            		 key = arr[i-ROW_START_INDEX][j-COL_START_INDEX];
            		 switch(key){
						 case 10:
							 key_pressed = 0;
							 break;
						 case 11:
							 key_pressed = 0;
							 break;
						 case 12:
							 key_pressed = 0;
							 break;
						 default:
							 key_pressed = key;
							 break;
            		 }
                    KeypadCallout_KeyPressNotification();
                    for(k=0;k<50000;k++);
            	 }
            }
        }
        Gpio_WritePin(ROW_PORT,i,LOW);
    }
}
uint8 Keypad_GetKey(void){
    return key_pressed; 
}
