/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

int fibonacci (int index);

int main ()
{
	int n;
	scanf("%d",&n);
	if (fibonacci(n) != -1)
	{
		printf("%dth term in Fibonacci series is %d",n, fibonacci(n));
	}
	else
	{
		printf("Try again entering a positive index");
	}
}

int fibonacci (int index)
{
	if (index > 0)
	{
		if (index > 1)
		{
			int m = 0, n = 1, z;
			for (int i = 0; i <= index-2; i++)
			{
				z = m + n;
				m = n;
				n = z;
			}
			return z;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return -1;
	}
}
