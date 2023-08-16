/*
 * main.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

unsigned char count_ones_u32 (unsigned short int input);

int main ()
{
	unsigned short int num;
	scanf("%hu",&num);
	printf("\nNumber of ones in %hu is %hhu", num, count_ones_u32(num));
}

unsigned char count_ones_u32 (unsigned short input)
{
	unsigned char n = 0;
	for (int i = 0; i < 16; i++)
	{
		if ((input << i) & 0b1000000000000000)
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
