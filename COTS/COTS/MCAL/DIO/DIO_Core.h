/*
 * DIO_Core.h
 *
 * Created: 3/1/2024 9:09:25 PM
 *  Author: Yousef shabaka
 */ 


#ifndef DIO_CORE_H_
#define DIO_CORE_H_


/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <Write File Name>
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "BIT_Math.h"
#include "Registers.h"
/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define DIO_PORT_A		((uint8)(0U))
#define DIO_PORT_B		((uint8)(1U))
#define DIO_PORT_C		((uint8)(2U))
#define DIO_PORT_D		((uint8)(3U)) 


#define PORTA_PIN_0  0#define PORTA_PIN_1  1#define PORTA_PIN_2  2#define PORTA_PIN_3  3#define PORTA_PIN_4  4#define PORTA_PIN_5  5#define PORTA_PIN_6  6#define PORTA_PIN_7  7#define PORTB_PIN_0  8#define PORTB_PIN_1  9#define PORTB_PIN_2  10#define PORTB_PIN_3  11#define PORTB_PIN_4  12#define PORTB_PIN_5  13#define PORTB_PIN_6  14#define PORTB_PIN_7  15#define PORTC_PIN_0  16#define PORTC_PIN_1  17#define PORTC_PIN_2  18#define PORTC_PIN_3  19#define PORTC_PIN_4  20#define PORTC_PIN_5  21#define PORTC_PIN_6  22#define PORTC_PIN_7  23#define PORTD_PIN_0  24#define PORTD_PIN_1  25#define PORTD_PIN_2  26#define PORTD_PIN_3  27#define PORTD_PIN_4  28#define PORTD_PIN_5  29#define PORTD_PIN_6  30#define PORTD_PIN_7  31
/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum 
{
	PIN_LOW=0,
	PIN_HIGH=1
}PIN_VALUE_t;



/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void DIO_WriteChannel(uint8 pin_number , uint8 value );
void DIO_ReadChannel(uint8 pin_number , uint8 *value );
void DIO_FlipChannel(uint8 pin_number );
void DIO_SetPullup(uint8 pin_number );
void DIO_WritePortValue(uint8 port , uint8 PORTvalue );
void DIO_ReadPortValue(uint8 port , uint8 *PORTvalue );
/**********************************************************************************************************************
 *  END OF FILE: 
 *********************************************************************************************************************/



#endif /* DIO_CORE_H_ */