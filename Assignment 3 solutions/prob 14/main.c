/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

#define	SIZE	100

void reverse_string (char* input);

int main ()
{
	char string[SIZE];
	gets(string);
	reverse_string(string);
	printf("The reverse of the input string:\n%s",string);
}

void reverse_string (char* input)
{
	int i = 0, size = 0;
	while (input[i] != '\0')
	{
		i++;
		size++;
	}
	int j = size/2;
	char temp;
	for (i = 0; i < j; i++)
	{
		temp = input[size-(i+1)];
		input[size-(i+1)] = input[i];
		input[i] = temp;
	}
}
