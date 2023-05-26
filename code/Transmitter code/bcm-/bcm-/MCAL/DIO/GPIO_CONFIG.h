/*
 * GPIO_CONFIG.h
 *
 * Created: 5/25/2023 11:14:33 PM
 *  Author: Sarah
 */ 


#ifndef GPIO_CONFIG_H_
#define GPIO_CONFIG_H_
#include "../../LIB/std.h"
#include "../../LIB/bit_math.h"
/*DIO PORTS*/
#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3
/*DIO PINS*/
#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7
/*DIO PIN State*/
#define DIO_PIN_LOW  0
#define DIO_PIN_HIGH 1
/*DIO PIN Direction*/
#define DIO_PIN_INPUT  0
#define DIO_PIN_OUTPUT 1
/*DIO PORT State*/
#define DIO_PORT_LOW  0x00 /*0000 0000*//*0*/
#define DIO_PORT_HIGH 0xFF /*1111 1111*//*255*/
/*DIO PORT Direction*/
#define DIO_PORT_INPUT  0x00
#define DIO_PORT_OUTPUT 0xFF


#endif /* GPIO_CONFIG_H_ */