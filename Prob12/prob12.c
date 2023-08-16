/*
 * prob12.c
 *
 *  Created on: Jul 4, 2023
 *      Author: shaher
 */

#include <stdio.h>

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int n,fact = 1;
	printf("Enter a positive integer:\n");
	scanf("%d",&n);
	if (n > 0)
	{
		printf("%d! = ",n);
		while (n > 1)
			{
				fact = fact * n;
				n--;
			}
		printf("%d\n",fact);
	}
	else
	{
		printf("You should have entered a positive integer :(\n");
	}
	return 0;
}

