/*
 * Registers.h
 *
 * Created: 2/10/2024 8:21:52 PM
 *  Author: Yousef shabaka
 */ 




/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <Write File Name>
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef REGISTERS_H_
#define REGISTERS_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "STD.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

typedef struct
{
	char PIN;
	char DDR;
	char PORT;
}DIO_Type;

#define 	DIO_PORTA 	((volatile DIO_Type*)(0x39))
#define 	DIO_PORTB 	((volatile DIO_Type*)(0x36))
#define 	DIO_PORTC 	((volatile DIO_Type*)(0x33))
#define 	DIO_PORTD 	((volatile DIO_Type*)(0x30))

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 


/**********************************************************************************************************************
 *  END OF FILE: 
 *********************************************************************************************************************/




#endif /* REGISTERS_H_ */