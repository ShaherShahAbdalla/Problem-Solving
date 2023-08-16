/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

#define SIZE	100

char string_compare (char* input1, char* input2);

int main ()
{
	char string1[SIZE], string2[SIZE];
	gets(string1);
	gets(string2);
	if (string_compare(string1, string2))
	{
		printf("'%s' and '%s' are not the same",string1, string2);
	}
	else
	{
		printf("'%s' and '%s' are same",string1, string2);
	}
}

char string_compare (char* input1, char* input2)
{
	int i = 0;
	while (input1[i] != '\0')
	{
		if (input1[i] == input2[i])
		{
			i++;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}
