/*
 * COTS.c
 *
 * Created: 2/9/2024 9:37:44 PM
 * Author : Yousef shabaka
 */ 

// #include <avr/io.h>

typedef unsigned char            uint8_t;
typedef signed char              sint8_t;
typedef unsigned short          uint16_t;
typedef signed short            sint16_t;
typedef unsigned int            uint32_t;
typedef signed int              sint32_t;
typedef float                  float32_t;
typedef double                 float64_t;


#define 	PINA  	*(volatile uint8_t *)(0x39)
#define 	DDRA  	*(volatile uint8_t *)(0x3A)
#define 	PORTA 	*(volatile uint8_t *)(0x3B)

#define 	PINB  	*(volatile uint8_t *)(0x36)
#define 	DDRB  	*(volatile uint8_t *)(0x37)
#define 	PORTB 	*(volatile uint8_t *)(0x38)

#define 	PINC  	*(volatile uint8_t *)(0x33)
#define 	DDRC  	*(volatile uint8_t *)(0x34)
#define 	PORTC 	*(volatile uint8_t *)(0x35)

#define 	PIND  	*(volatile uint8_t *)(0x30)
#define 	DDRD  	*(volatile uint8_t *)(0x31)
#define 	PORTD 	*(volatile uint8_t *)(0x32)

typedef struct
{
	uint8_t PIN;
	uint8_t DDR;
	uint8_t PORT;
}DIO_Type;

#define 	DIO_PORTA 	((volatile DIO_Type*)(0x39))
#define 	DIO_PORTB 	((volatile DIO_Type*)(0x36))
#define 	DIO_PORTC 	((volatile DIO_Type*)(0x33))
#define 	DIO_PORTD 	((volatile DIO_Type*)(0x30))

#define		SET_BIT(REG,BIT)	( REG|= (0x01<<BIT) )
#define		CLEAR_BIT(REG,BIT)	( REG&= ~(0x01<<BIT) )
#define		TOGGLE_BIT(REG,BIT)	( REG^= (0x01<<BIT) )
#define		GET_BIT(REG,BIT)	( (REG>>BIT)&0x01 )

#define LED_0   ((uint8_t)(0U))
#define LED_1   ((uint8_t)(1U))
#define LED_2   ((uint8_t)(2U))
#define LED_3   ((uint8_t)(3U))
#define LED_4   ((uint8_t)(4U))
#define LED_5   ((uint8_t)(5U))
#define LED_6   ((uint8_t)(6U))
#define LED_7   ((uint8_t)(7U))

void LED_init(uint8_t led_num)
{
	SET_BIT(DIO_PORTC->DDR , led_num);
}

void LED_on(uint8_t led_num)
{
	SET_BIT(DIO_PORTC->PORT , led_num);
}

void LED_off(uint8_t led_num)
{
	CLEAR_BIT(DIO_PORTC->PORT,led_num);
}

void LED_toggle(uint8_t led_num)
{
	TOGGLE_BIT(DIO_PORTC->PORT,led_num);
}

int main(void)
{
    LED_init(LED_0);
	LED_on(LED_0);
	LED_init(LED_1);
	LED_on(LED_1);
	LED_init(LED_2);
	LED_on(LED_2);
	
    while (1) 
    {
		
    }
	
}

