/*
 * app.c
 *
 * Created: 5/26/2023 3:25:13 PM
 *  Author: Sarah
 */ 
#include "app.h"
#include "../SERVICE/BCM/BCM.h"
#include "../LIB/std.h"
extern str_bcm_instance_t app_str_bcm_instance ;

u8 var = 0;

void APP_init(void)
{
	LED0_Init();
	LED1_Init();


	(void) BCM_init(&app_str_bcm_instance);
	(void) BCM_send_n("sarah",9, &app_str_bcm_instance);

}


void APP_start(void)
{
	_delay_ms(1000);
	(void) BCM_dispatcher(&app_str_bcm_instance);


}