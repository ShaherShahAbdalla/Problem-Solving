/*
 * main.c
 *
 *  Created on: Jul 13, 2023
 *      Author: shahe
 */

#define F_CPU 1000000UL
#include <avr/io.h>
#include <avr/delay.h>

void main (void)
{
	DDRA = 0x01;
	while (1)
	{
		PORTA = 0x01;
		_delay_ms(1000);
		PORTA = 0x00;
		_delay_ms(1000);
	}
}
