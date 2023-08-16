/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

char ispower_of2 (int input);

int main ()
{
	int num;
	scanf("%d",&num);
	char result = ispower_of2(num);
	if (result == 1)
	{
		printf("%d is power of 2 :)",num);
	}
	else
	{
		printf("%d is not power of 2 :(",num);
	}
}

char ispower_of2 (int input)
{
	int n = 0;
	if (input == 1)
	{
		return 1;
	}
	else if (input == 0)
	{
		return 0;
	}
	else
	{
		while (input != 2)
		{
			if (input%2 == 0)
			{
				input = input/2;
			}
			else
			{
				n = 1;
				break;
			}
		}
	}
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
