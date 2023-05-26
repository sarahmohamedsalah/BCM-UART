/*
 * led.c
 *
 * Created: 5/25/2023 11:05:08 PM
 *  Author: Sarah
 */ 
#include "led.h"

void LED0_Init(void)
{
	
	//DDRC = 0x04;
	DIO_SetPin_Direction(DIO_PORTC, DIO_PIN2, DIO_PIN_OUTPUT);
}
void LED0_ON(void)
{
	//PORTC = 0x04;
	DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_HIGH);
}
void LED0_OFF(void)
{
	//PORTC = 0x00;
	DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_LOW);
}
void LED0_Toggle(void)
{
	//TGL_BIT(PORTC, 2);
	DIO_TogglePin(DIO_PORTC, DIO_PIN2);
}


//led 1

void LED1_Init(void)
{
	
	//DDRC = 0x04;
	DIO_SetPin_Direction(DIO_PORTC, DIO_PIN3, DIO_PIN_OUTPUT);
}
void LED1_ON(void)
{
	//PORTC = 0x04;
	DIO_SetPin_Value(DIO_PORTC, DIO_PIN3, DIO_PIN_HIGH);
}
void LED1_OFF(void)
{
	//PORTC = 0x00;
	DIO_SetPin_Value(DIO_PORTC, DIO_PIN3, DIO_PIN_LOW);
}
void LED1_Toggle(void)
{
	//TGL_BIT(PORTC, 2);
	DIO_TogglePin(DIO_PORTC, DIO_PIN3);
}