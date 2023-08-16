/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

#define	SIZE	100

void lowering_uppercase (char* input);

int main ()
{
	char string[SIZE];
	gets(string);
	lowering_uppercase(string);
	printf("The string after lowering any upper-case letter in it:\n%s",string);
}

void lowering_uppercase (char* input)
{
	int i = 0;
	while (input[i] != '\0')
	{
		if ((input[i] >= 'A') && (input[i] <= 'Z'))
		{
			input[i] = input[i] + 32;
			i++;
		}
		else
		{
			i++;
		}
	}
}
