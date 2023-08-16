/*
 * prob16.c
 *
 *  Created on: Jul 5, 2023
 *      Author: shaher
 */

#include <stdio.h>
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int n,r = 0;
	printf("Enter a number:\n");
	scanf("%d",&n);
	printf("reverse of %d is ",n);
	while (n > 0)
	{
		r = (n%10) + r * 10;
		n = n / 10;
	}
	printf("%d",r);
	return 0;
}
