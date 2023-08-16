/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

#define	SIZE	100

void print_frequency_of_character (char* input, char character);

int main ()
{
	char string[SIZE], character;
	gets(string);
	scanf("%c",&character);
	print_frequency_of_character(string,character);
}

void print_frequency_of_character (char* input, char character)
{
	int i = 0, frequency = 0;
	while (input[i] != '\0')
	{
		if (input[i] == character)
		{
			frequency++;
			i++;
		}
		else
		{
			i++;
		}
	}
	printf("Frequency of %c in %s = %d",character, input, frequency);
}
