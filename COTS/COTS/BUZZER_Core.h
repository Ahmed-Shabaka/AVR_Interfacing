/*
 * BUZZER_Core.h
 *
 * Created: 2/15/2024 3:17:33 AM
 *  Author: Yousef shabaka
 */ 


#ifndef BUZZER_CORE_H_
#define BUZZER_CORE_H_


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
#include "STD.h"
#include "Registers.h"

#define F_CPU	16000000U

#include <util/delay.h>

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define  BUZZER		(uint8)(5U)

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
void Buzzer_init(void);
 
void Buzzer_start(uint8 clk_times);

/**********************************************************************************************************************
 *  END OF FILE: 
 *********************************************************************************************************************/



#endif /* BUZZER_CORE_H_ */