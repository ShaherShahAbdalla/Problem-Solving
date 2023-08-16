/*
 * prob11.c
 *
 *  Created on: Jul 4, 2023
 *      Author: shaher
 */
#include <stdio.h>

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int sum = 0,i;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + i;
	}
	printf("Sum of first 100 integer = %d\n",sum);
	return 0;
}

