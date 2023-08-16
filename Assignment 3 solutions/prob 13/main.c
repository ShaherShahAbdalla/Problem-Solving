/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

#define	SIZE	100

void remove_nonalphabet (char* input);

int main ()
{
	char string[SIZE];
	gets(string);
	remove_nonalphabet(string);
	printf("String after removing any non-alphabet character:\n%s",string);
}

void remove_nonalphabet (char* input)
{
	int i = 0, j;
	while (input[i] != '\0')
	{
		if (((input[i] >= 'A')&&(input[i] <= 'Z')) || ((input[i] >= 'a')&&(input[i] <= 'z')))
		{
			i++;
		}
		else
		{
			j = i;
			while (input[j] != '\0')
			{
				input[j] = input[j+1];
				j++;
			}
		}
	}
}
