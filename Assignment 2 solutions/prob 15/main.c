/*
 * main.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

char count_ones_u32 (unsigned int input);

int main ()
{
	unsigned int num;
	scanf("%u",&num);
	printf("\nNumber of ones in %u is %d", num, count_ones_u32(num));
}

char count_ones_u32 (unsigned int input)
{
	char n = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((input << i) & 0b10000000000000000000000000000000)
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
