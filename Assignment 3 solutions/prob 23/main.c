/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

#define SIZE	100

void freq_of_characters (char* input);

int main ()
{
	char string[SIZE];
	gets(string);
	freq_of_characters(string);
}

void freq_of_characters (char* input)
{
	int i = 0, j, occurrence;
	while (input[i] != '\0')
	{
		j = 0;
		occurrence = 0;
		while (input[j] != '\0')
		{
			if ((input[j] == input[i]) && (j >= i))
			{
				occurrence++;
				j++;
			}
			else if (input[j] == input[i])
			{
				break;
			}
			else
			{
				j++;
			}
		}
		if (occurrence)
		{
			printf("'%c'\t%d\n",input[i], occurrence);
			i++;
		}
		else
		{
			i++;
		}
	}
}
