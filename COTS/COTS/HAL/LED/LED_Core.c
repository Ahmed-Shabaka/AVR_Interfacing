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
#include "LED_Core.h"
#include "DIO_Core.h"
/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

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
void LED_on(uint8 led_num)
{
	switch (led_num)
	{
		case LED_0 : 
		DIO_WriteChannel(PORTC_PIN_0,PIN_HIGH);
		break;
		case LED_1 :
		DIO_WriteChannel(PORTC_PIN_1,PIN_HIGH);
		break;
		case LED_2 :
		DIO_WriteChannel(PORTC_PIN_2,PIN_HIGH);
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
void LED_off(uint8 led_num)
{
	switch (led_num)
	{
		case LED_0 :
		DIO_WriteChannel(PORTC_PIN_0,PIN_LOW);
		break;
		case LED_1 :
		DIO_WriteChannel(PORTC_PIN_1,PIN_LOW);
		break;
		case LED_2 :
		DIO_WriteChannel(PORTC_PIN_2,PIN_LOW);
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
void LED_toggle(uint8 led_num)
{
	switch (led_num)
	{
		case LED_0 :
		DIO_FlipChannel(PORTC_PIN_0);
		break;
		case LED_1 :
		DIO_FlipChannel(PORTC_PIN_1);
		break;
		case LED_2 :
		DIO_FlipChannel(PORTC_PIN_2);
		break;
		default :
		break;
	}
}

/**********************************************************************************************************************
 *  END OF FILE: 
 *********************************************************************************************************************/
