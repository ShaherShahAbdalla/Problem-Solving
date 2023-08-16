/*
 * prob20.c
 *
 *  Created on: Jul 5, 2023
 *      Author: shaher
 */
#include <stdio.h>
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int h;
	printf("Enter the number of rows (height):\n");
	scanf("%d",&h);
	for (int i = 1; i <= h; i++)
	{
		for (int j = (h - i); j > 0; j--)
		{
			printf(" ");
		}
		for (int k = (2 * i - 1); k > 0; k--)
		{
			printf("*");
		}
		for (int j = (h - i); j > 0; j--)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
