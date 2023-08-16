/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

int check_signof_number (float input);

int main ()
{
	float x; int result;
	scanf("%f",&x);
	result = check_signof_number(x);
	if (result == 1)
	{
		printf("Your input %f is a positive number :)",x);
	}
	else
	{
		printf("Your input %f is a negative number :(",x);
	}
}

int check_signof_number (float input)
{
	if (input < 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
