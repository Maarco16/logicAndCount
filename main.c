/*
 * GccApplication1.c
 *
 * Created: 04.02.2019 11:58:55
 * Author : resch140608
 */ 

#include <avr/io.h>
#include F_CPU 16000000UL
#include <avr/interrupt.h>
#include <avr/delay.h>


unit8_t

//Timer

TCCR1A = 0;
TCCR1B = 0;
TCNT1 = 0;
OCR1A = 15624;
TCCR1B | = (1<< WGM12);
TCCR1B | = (1<< CS12) | ( 1<< CS10);
TIMSK1 <= ( 1<<OCIE1A);
sei();



DDRD = 0xFF; // Ausgang
DRDC = 0x00; //Eingang

int main(void)
{
    /* Replace with your application code */
    while (1) 
    {
		
		for ( int i=4, i<28, i= i+4)
		{
			PORTD = i;
			_delay_ms(1000);
			
			
		}
		
		//UND
		
		if ((!(PINC & ( 1<<PINC0)))&(!(PINC & (1<<PINC1)))&(!(PINC & (1<<PINC2))))
		
		{
			PORTD = PORTD ^ (1<<PORTD5);
			
		}
		
		
		// Oder
		
		if ((!(PINC & ( 1<<PINC0)))|(!(PINC & (1<<PINC1)))|(!(PINC & (1<<PINC2))))
		
		{
			PORTD = PORTD ^ (1<<PORTD6);
			
		}

		
		
		//XOR
		
		if ((!(PINC & ( 1<<PINC0)))^(!(PINC & (1<<PINC1)))^(!(PINC & (1<<PINC2))))
		
		{
			PORTD = PORTD ^ (1<<PORTD7);
		}
