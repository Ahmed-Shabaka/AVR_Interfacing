/*
 * COTS.c
 *
 * Created: 2/9/2024 9:37:44 PM
 * Author : Yousef shabaka
 */ 

// #include <avr/io.h>

#define F_CPU	16000000U

#include <util/delay.h>

#include "LED_Core.h"
#include "BUTTON_Core.h"
#include "SevenSegment.h"
#include "BUZZER_Core.h"


int main(void)
{
	uint8 button_value_0=0;
	uint8 button_value_1=0;
	uint8 button_value_2=0;
	uint8 button_value_3=0;
	uint8 digit=0;
	
	
	BUTTON_init(Button_0);		//  Reset
	BUTTON_init(Button_1);		//  Start
	BUTTON_init(Button_2);		//  Minutes
	BUTTON_init(Button_3);		//  Seconds
	SevenSegment_init();
	Buzzer_init();
	
    while (1)
	{
		SevenSegment_DisplayDigits(digit);
		/**********************************************/
		button_value_3=BUTTON_GetValue(Button_3);				// Seconds
		if(button_value_3 == 0 )
		{
			if(digit!=95)		digit++;
			if(digit%10==6)		digit+=4;
		}
		/**********************************************/
		button_value_2=BUTTON_GetValue(Button_2);				// Minutes
		if(button_value_2 == 0 )
		{
			if( digit<90 )		digit+=10;
		}
		/**********************************************/
		button_value_1=BUTTON_GetValue(Button_1);				// Start
		if(button_value_1 == 0 )
		{
			while(digit!=0)
			{
				SevenSegment_DisplayDigits(digit);
				if(  (digit%10)==0 )	digit-=4;
				_delay_ms(10000);
				digit--;
			}
			Buzzer_start(4);
		}
		/**********************************************/
		button_value_0=BUTTON_GetValue(Button_0);				// Reset
		if(button_value_0 == 0 )
		{
			digit=0;
		}
		/**********************************************/
    }
	
}

