/*
 * prob19.c
 *
 *  Created on: Jul 5, 2023
 *      Author: shaher
 */
#include <stdio.h>
int main ()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = (6-i); j >=1 ; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
