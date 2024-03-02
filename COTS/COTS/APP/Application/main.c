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
#include "PORT_Core.h"

int main(void)
{
	
	
	
	PORT_Init();
	
    while (1)
	{
		LED_on(LED_0);
		LED_on(LED_1);
		LED_on(LED_2);
		/**********************************************/
    }
	
}

