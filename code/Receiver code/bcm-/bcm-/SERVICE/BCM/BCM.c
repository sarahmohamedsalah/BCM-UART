/*
 * BCM.c
 *
 * Created: 5/23/2023 5:48:01 PM
 *  Author: Sarah
 */ 
#include "BCM.h"

extern u8 *Copy_u8String;
volatile u8 u8_txComplete;
volatile u8 u8_rxComplete;
//extern str_bcm_instance_t app_str_bcm_instance ;
/**
 * @brief This function inialize communication protocol
 *
 * @param * ptr_str_bcm_instance --> pointer to structure
 *         Id--> id number of  protocol
 *
 * @return Returns enu_system_status_t --> status of system
 */
enu_system_status_t BCM_init(str_bcm_instance_t * ptr_str_bcm_instance  ){
	enu_system_status_t enu_system_status = BCM_OK;
	
	if(ptr_str_bcm_instance->enu_communication_sel == BCM_UART){
		  UART_init();
		  if (ptr_str_bcm_instance->enu_tx_rx_state == BCM_RX || ptr_str_bcm_instance->enu_tx_rx_state == BCM_TX_RX)
		  {
			  UART_TransmitString(&Copy_u8String);
		  }
	}else {}
}
/**
 * @brief This function deinialize communication protocol
 *
 * @param * ptr_str_bcm_instance --> pointer to structure
 *
 * @return Returns enu_system_status_t --> status of system
 */
enu_system_status_t BCM_deinit(str_bcm_instance_t * ptr_str_bcm_instance){
	enu_system_status_t enu_system_status = BCM_OK;
	if(ptr_str_bcm_instance->enu_communication_sel == BCM_UART){
		//add code
	}
	
	
	
}
/**
 * @brief This function send protocol
 *
 * @param * ptr_str_bcm_instance --> pointer to structure
 *
 * @return Returns enu_system_status_t --> status of system
 */

enu_system_status_t BCM_send(u8 byte, str_bcm_instance_t * ptr_str_bcm_instance){
	enu_system_status_t bcm_error_status = BCM_OK;
	if(ptr_str_bcm_instance->enu_communication_sel == BCM_UART){
		 UART_TransmitData(byte)	;
		}else {}
	
}

/**
 * @brief This function send array of data using uart
 *
 * @param * ptr_str_bcm_instance --> pointer to structure
 *          byteArr --> array of data to be send 
 *          byteslength  --> length of byte to be send
 *
 * @return Returns enu_system_status_t --> status of system
 */

enu_system_status_t BCM_send_n(u8 byteArr,u16 bytesLength, str_bcm_instance_t * ptr_str_bcm_instance ){
	enu_system_status_t bcm_error_status = BCM_OK;
	if(ptr_str_bcm_instance->enu_communication_sel == BCM_UART){
		UART_TransmitString(byteArr)	;
		}else {}
}

/**
 * @brief This function send address of new data 
 *
 * @param * ptr_str_bcm_instance --> pointer to structure
 *
 * @return Returns enu_error_t --> status of system
 */

enu_error_t BCM_dispatcher( str_bcm_instance_t * ptr_str_bcm_instance){
	enu_system_status_t bcm_error_status = BCM_OK;
	if(ptr_str_bcm_instance->enu_communication_sel == BCM_UART){
		if (u8_txComplete == 1)
		{
			u8_txComplete = 0;
			LED0_Toggle();
		}
		else if(u8_rxComplete == 1)
		{
			u8_rxComplete = 0;
			_delay_ms(500);
			LED0_Toggle();
			BCM_send_n("sarah",9, &ptr_str_bcm_instance);
			
		}
		else
		{

		}
	
	}
}