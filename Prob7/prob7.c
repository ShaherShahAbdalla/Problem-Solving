/*
 * prob7.c
 *
 *  Created on: Jul 4, 2023
 *      Author: shaher
 */

#include <stdio.h>

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int x,y,z;
	printf("Enter three integers please\n");
	scanf("%d %d %d",&x,&y,&z);
	if ((x <= y) && (x <= z))
	{
		printf("%d is the smallest number\n",x);
	}
	else if ((y <= x) && (y <= z))
	{
		printf("%d is the smallest number\n",y);
	}
	else
	{
		printf("%d is the smallest number\n",z);
	}
	return 0;
}
