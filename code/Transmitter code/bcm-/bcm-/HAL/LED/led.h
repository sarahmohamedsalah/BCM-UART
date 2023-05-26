/*
 * led.h
 *
 * Created: 5/25/2023 11:05:26 PM
 *  Author: Sarah
 */ 


#ifndef LED_H_
#define LED_H_


#include "../../MCAL/DIO/GPIO.h"

void LED0_Init(void);
void LED0_ON(void);
void LED0_OFF(void);
void LED0_Toggle(void);

void LED1_Init(void);
void LED1_ON(void);
void LED1_OFF(void);
void LED1_Toggle(void);

#endif /* LED_H_ */