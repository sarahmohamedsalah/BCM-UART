/*
 * GPIO.h
 *
 *  Created on: Apr 4, 2023
 *      Author: HAZEM-PC
 */

#ifndef MCAL_DIO_GPIO_H_
#define MCAL_DIO_GPIO_H_

/*Macros*/
#include "GPIO_CONFIG.h"
#include "GPIO_private.h"
/*Functions Prototypes*/
/*Functions for PINS*/
void DIO_SetPin_Direction(u8 port, u8 pin, u8 direction);/*Define Direction for pin(Ip/Op)*/
void DIO_SetPin_Value(u8 port, u8 pin, u8 value);/*Output Mode*/
void DIO_TogglePin(u8 port, u8 pin);/*Toggle Output Mode*/
void DIO_ReadPin_Value(u8 port, u8 pin, u8* value);/*Input Mode*/
/*Functions for PORTS*/
void DIO_SetPort_Direction(u8 port, u8 direction);/*Define Direction for Port(Ip/Op)*/
void DIO_SetPort_Value(u8 port, u8 value);/*Output Mode*/
void DIO_TogglePort(u8 port);/*Toggle Output Mode*/
void DIO_ReadPort_Value(u8 port, u8* value);/*Input Mode*/
/*Activate Pull up Resistor*/
void DIO_SetPULLUP(u8 port, u8 pin);

#endif /* MCAL_DIO_GPIO_H_ */



