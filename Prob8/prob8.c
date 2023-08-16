/*
 * prob8.c
 *
 *  Created on: Jul 4, 2023
 *      Author: shaher
 */

#include <stdio.h>
#include <math.h>

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int x,y;
	printf("Enter a positive integer:\n");
	scanf("%d",&x);
	y = sqrt(x);
	if ((x == (y * y)) && (x != 0))
	{
		printf("%d is a perfect square\n",x);
	}
	else
	{
		printf("%d is not a perfect square\n",x);
	}
	return 0;
}
