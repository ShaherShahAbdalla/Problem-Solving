/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

char even_or_odd (int input);

int main ()
{
	int num;
	char result;
	scanf("%d",&num);
	result = even_or_odd(num);
	if (result == 0)
	{
		printf("%d is even",num);
	}
	else
	{
		printf("%d is odd",num);
	}
}

char even_or_odd (int input)
{
	if (input % 2 == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
