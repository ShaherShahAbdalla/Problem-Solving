/*
 * main.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

char checkif_powerof3 (int input);

int main ()
{
	int num;
	scanf("%d",&num);
	if (checkif_powerof3(num))
	{
		printf("%d is not power of 3 :(",num);
	}
	else
	{
		printf("%d is power of 3 :)",num);
	}
}

char checkif_powerof3 (int input)
{
	if (input == 1)
	{
		return 0;
	}
	else if (input == 0)
	{
		return 1;
	}
	else
	{
		while (input != 3)
		{
			if (input % 3 == 0)
			{
				input = input / 3;
			}
			else
			{
				return 1;
			}
		}
		return 0;
	}
}
