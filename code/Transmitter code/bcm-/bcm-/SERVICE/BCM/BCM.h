/*
 * BCM.h
 *
 * Created: 5/23/2023 5:47:45 PM
 *  Author: Sarah
 */ 


#ifndef BCM_H_
#define BCM_H_
#include "../../LIB/std.h"
#include "../../LIB/bit_math.h"
#include "../../MCAL/UART/UART_interface.h"
#include "../../HAL/LED/led.h"
typedef enum
{
	SYSTEM_OK,
	SYSTEM_NOK,
	
	}enu_system_status_t;
typedef enum     
{   BCM_OK,     
	BCM_NOK,
		
		}enu_error_t;

typedef enum
{
	BCM_TX = 0,
	BCM_RX,
	BCM_TX_RX,

	BCM_STATE_INVALID

}enu_tx_rx_state_t;
typedef enum
{
	BCM_UART = 0,
	BCM_SPI,
	BCM_I2C,

	BCM_COMM_INVALID

}enu_communication_sel_t;
typedef struct
{
	enu_communication_sel_t enu_communication_sel;
	enu_tx_rx_state_t		enu_tx_rx_state;

}str_bcm_instance_t;


enu_system_status_t BCM_init(str_bcm_instance_t * ptr_str_bcm_instance );
enu_system_status_t BCM_deinit(str_bcm_instance_t * ptr_str_bcm_instance);
enu_system_status_t BCM_send(u8 byte, str_bcm_instance_t * ptr_str_bcm_instance );
enu_system_status_t BCM_send_n(u8 byteArr,u16 bytesLength, str_bcm_instance_t * ptr_str_bcm_instance);
enu_error_t BCM_dispatcher( str_bcm_instance_t * ptr_str_bcm_instance);


#endif /* BCM_H_ */