/*
 * prob21.c
 *
 *  Created on: Jul 5, 2023
 *      Author: shaher
 */
#include <stdio.h>
int main ()
{
	char i,j,k;
	for (i = 1; i <= 5; i++)
	{
		for (j = (i-1); j > 0; j--)
		{
			printf(" ");
		}
		printf("*");
		for (k = (10 - (2*i-1)); k > 0; k--)
		{
			printf(" ");
		}
		printf("*");
		for (j = (i-1); j > 0; j--)
		{
			printf(" ");
		}
		printf("\n");
	}
	for (i = 1; i <= 5; i++)
	{
		for (j = (5-i); j > 0; j--)
		{
			printf(" ");
		}
		printf("*");
		for (k = ((2*i) - 1); k > 0; k--)
		{
			printf(" ");
		}
		printf("*");
		for (j = (5-i); j > 0; j--)
		{
			printf(" ");
		}
		printf("\n");
	}
}
