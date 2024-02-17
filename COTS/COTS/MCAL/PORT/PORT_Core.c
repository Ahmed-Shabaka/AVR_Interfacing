/*
 * PORT_Core.c
 *
 * Created: 2/17/2024 10:46:09 PM
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
#include "PORT_Core.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/
#define PORT_A		0
#define PORT_B		1
#define PORT_C		2
#define PORT_D		3
/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

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
void PORT_Init(void)
{
	uint8 counter=0, Port=0 , Pin=0, Dir=0;
	
	for(counter=0;counter<DEFINED_PINS;counter++)
	{
		Port = PORT_Init_Pins[counter].pin_order / NUMBER_PORT_PINS ;
		Pin = PORT_Init_Pins[counter].pin_order % NUMBER_PORT_PINS ;
		Dir = PORT_Init_Pins[counter].pin_dir ;
		
		switch(Dir)
		{
			case OUTPUT :
			switch(Port)
			{
				case PORT_A :
				SET_BIT(DIO_PORTA->DDR , Pin );
				break;
				case PORT_B :
				SET_BIT(DIO_PORTB->DDR , Pin );
				break;
				case PORT_C :
				SET_BIT(DIO_PORTC->DDR , Pin );
				break;
				case PORT_D :
				SET_BIT(DIO_PORTD->DDR , Pin );
				break;
			}
			break;
			case INPUT :
			switch(Port)
			{
				case PORT_A :
				CLEAR_BIT(DIO_PORTA->DDR , Pin );
				break;
				case PORT_B :
				CLEAR_BIT(DIO_PORTB->DDR , Pin );
				break;
				case PORT_C :
				CLEAR_BIT(DIO_PORTC->DDR , Pin );
				break;
				case PORT_D :
				CLEAR_BIT(DIO_PORTD->DDR , Pin );
				break;
			}
			break;
			default:
			break;
		}
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
