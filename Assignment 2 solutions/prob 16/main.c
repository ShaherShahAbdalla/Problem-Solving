/*
 * main.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

unsigned char count_ones_u32 (unsigned char input);

int main ()
{
	unsigned char num;
	scanf("%hhu",&num);
	printf("\nNumber of ones in %hhu is %hhu", num, count_ones_u32(num));
}

unsigned char count_ones_u32 (unsigned char input)
{
	unsigned char n = 0;
	for (int i = 0; i < 8; i++)
	{
		if ((input << i) & 0b10000000)
		{
			n++;
			printf("1");
		}
		else
		{
			printf("0");
		}
		if ((i+1) % 4 == 0)
		{
			printf(" ");
		}
		else
		{

		}
	}
	return n;
}
