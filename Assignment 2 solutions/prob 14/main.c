/*
 * main.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

int fibonacci (int n);

int main ()
{
	int nth_term;
	scanf("%d",&nth_term);
	int result = fibonacci(nth_term);
	printf("%d",result);
}

int fibonacci (int n)
{
	if (n <= 3)
	{
		return 1;
	}
	else
	{
		return (fibonacci(n-1) + fibonacci(n-2));
	}
}
