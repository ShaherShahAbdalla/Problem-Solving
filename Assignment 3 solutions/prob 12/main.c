/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

#define	SIZE	100

int string_length (char* input);

int main ()
{
	char string[SIZE];
	gets(string);
	printf("Length of this %s = %d",string, string_length(string));
}

int string_length (char* input)
{
	int i = 0;
	while (input[i] != '\0')
	{
		i++;
	}
	return i;
}
