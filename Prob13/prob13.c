/*
 * prob13.c
 *
 *  Created on: Jul 4, 2023
 *      Author: shaher
 */

#include <stdio.h>

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int n;
	printf("Enter a number please:\n");
	scanf("%d",&n);
	if (n > 0)
	{
		if (((n%2) == 0) || ((n%3) == 0) || ((n%5) == 0) || ((n%7) == 0) || (n == 1))
		{
			if ((n == 2) || ( n == 3) || (n == 5) || (n == 7))
			{
				printf("%d is a prime number\n",n);
			}
			else
			{
				printf("%d is not a prime number\n",n);
			}
		}
		else
		{
			printf("%d is a prime number\n",n);
		}
	}
	else
	{
		printf("You should have entered a positive integer :(\n");
	}
	return 0;
}
