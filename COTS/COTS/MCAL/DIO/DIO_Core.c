/*
 * DIO_Core.c
 *
 * Created: 3/1/2024 9:09:10 PM
 *  Author: Yousef shabaka
 */ 
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  FileName.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

#include "DIO_Core.h"
/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/
#define TOTAL_PORTS_NUMBER			8
/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/
void DIO_WriteChannel(uint8 pin_number , uint8 value )
{
	uint8 port=0,pin=0;
	
	port=pin_number/TOTAL_PORTS_NUMBER;
	pin=pin_number%TOTAL_PORTS_NUMBER;
	
	switch (value)
	{
		case PIN_HIGH : 
		switch (port)
		{
			case DIO_PORT_A : 
			SET_BIT(DIO_PORTA->PORT,pin);
			break;
			case DIO_PORT_B :
			SET_BIT(DIO_PORTB->PORT,pin);
			break;
			case DIO_PORT_C :
			SET_BIT(DIO_PORTC->PORT,pin);
			break;
			case DIO_PORT_D :
			SET_BIT(DIO_PORTD->PORT,pin);
			break;
			default :
			break;
		}
		
		case PIN_LOW : 
		switch (port)
		{
			case DIO_PORT_A :
			CLEAR_BIT(DIO_PORTA->PORT,pin);
			break;
			case DIO_PORT_B :
			CLEAR_BIT(DIO_PORTB->PORT,pin);
			break;
			case DIO_PORT_C :
			CLEAR_BIT(DIO_PORTC->PORT,pin);
			break;
			case DIO_PORT_D :
			CLEAR_BIT(DIO_PORTD->PORT,pin);
			break;
			default : 
			break;
		}
	}
}
void DIO_ReadChannel(uint8 pin_number , uint8 *value )
{
	uint8 port=0,pin=0;
	
	port=pin_number/TOTAL_PORTS_NUMBER;
	pin=pin_number%TOTAL_PORTS_NUMBER;
	
	switch (port)
	{
		case DIO_PORT_A :
		*value=GET_BIT(DIO_PORTA->PIN,pin);
		break;
		case DIO_PORT_B :
		*value=GET_BIT(DIO_PORTB->PIN,pin);
		break;
		case DIO_PORT_C :
		*value=GET_BIT(DIO_PORTC->PIN,pin);
		break;
		case DIO_PORT_D :
		*value=GET_BIT(DIO_PORTD->PIN,pin);
		break;
		default :
		break;
	}
}
void DIO_FlipChannel(uint8 pin_number )
{
	uint8 port=0,pin=0;
	
	port=pin_number/TOTAL_PORTS_NUMBER;
	pin=pin_number%TOTAL_PORTS_NUMBER;
	
	switch (port)
	{
		case DIO_PORT_A :
		TOGGLE_BIT(DIO_PORTA->PORT,pin);
		break;
		case DIO_PORT_B :
		TOGGLE_BIT(DIO_PORTB->PORT,pin);
		break;
		case DIO_PORT_C :
		TOGGLE_BIT(DIO_PORTC->PORT,pin);
		break;
		case DIO_PORT_D :
		TOGGLE_BIT(DIO_PORTD->PORT,pin);
		break;
		default :
		break;
	}
}
void DIO_SetPullup(uint8 pin_number )
{
	uint8 port=0,pin=0;
	
	port=pin_number/TOTAL_PORTS_NUMBER;
	pin=pin_number%TOTAL_PORTS_NUMBER;
	
	switch (port)
	{
		case DIO_PORT_A :
		SET_BIT(DIO_PORTA->PORT,pin);
		break;
		case DIO_PORT_B :
		SET_BIT(DIO_PORTB->PORT,pin);
		break;
		case DIO_PORT_C :
		SET_BIT(DIO_PORTC->PORT,pin);
		break;
		case DIO_PORT_D :
		SET_BIT(DIO_PORTD->PORT,pin);
		break;
		default :
		break;
	}
}
void DIO_WritePortValue(uint8 port , uint8 PORTvalue )
{
	switch (port)
	{
		case DIO_PORT_A :
		DIO_PORTA->PORT=port;
		break;
		case DIO_PORT_B :
		DIO_PORTB->PORT=port;
		break;
		case DIO_PORT_C :
		DIO_PORTC->PORT=port;
		break;
		case DIO_PORT_D :
		DIO_PORTD->PORT=port;
		break;
		default :
		break;
	}
}
void DIO_ReadPortValue(uint8 port , uint8 *PORTvalue )
{
	switch (port)
	{
		case DIO_PORT_A :
		*PORTvalue=DIO_PORTA->PIN;
		break;
		case DIO_PORT_B :
		*PORTvalue=DIO_PORTB->PIN;
		break;
		case DIO_PORT_C :
		*PORTvalue=DIO_PORTC->PIN;
		break;
		case DIO_PORT_D :
		*PORTvalue=DIO_PORTD->PIN;
		break;
		default :
		break;
	}
}

/******************************************************************************
* \Syntax          : Std_ReturnType FunctionName(AnyType parameterName)        
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion                     
* \Parameters (out): None                                                      
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK                                  
*******************************************************************************/


/**********************************************************************************************************************
 *  END OF FILE: 
 *********************************************************************************************************************/
