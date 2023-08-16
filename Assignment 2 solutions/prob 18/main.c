/*
 * main.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>
#include <math.h>

char checkif_perfectsquare(int input);

int main ()
{
	int num;
	char result;
	scanf("%d",&num);
	result = checkif_perfectsquare(num);
	if (result)
	{
		printf("%d is a perfect square :)",num);
	}
	else
	{
		printf("%d is not a perfect square :(",num);
	}
}

char checkif_perfectsquare(int input)
{
	int result;
	result = sqrt(input);
	if (input == (result * result))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
