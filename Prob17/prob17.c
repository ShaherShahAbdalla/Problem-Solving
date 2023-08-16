/*
 * prob17.c
 *
 *  Created on: Jul 5, 2023
 *      Author: shaher
 */
#include <stdio.h>
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int x,n = 0;
	printf("Enter a number:\n");
	scanf("%d",&x);
	if (x == 0)
	{
		n = 1;
		printf("The number of digits in %d is %d",x,n);
	}
	else
	{
		printf("The number of digits in %d is ",x);
			while (x != 0)
			{
				n++;
				x = x / 10;
			}
			printf("%d",n);
	}
	return 0;
}
