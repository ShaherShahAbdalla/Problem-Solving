/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

#define SIZE	100
#define TRUE	1
#define	FALSE	0

char checkif_distinct (char* input);

int main ()
{
	char string[SIZE], if_distinct;
	gets(string);
	if_distinct = checkif_distinct(string);
	if (if_distinct == TRUE)
	{
		printf("All characters of %s are distinct",string);
	}
	else
	{
		printf("Characters of %s are not distinct",string);
	}
}

char checkif_distinct (char* input)
{
	int i = 0, j;
	while (input[i] != '\0')
	{
		j = 0;
		while (input[j] != '\0')
		{
			if (((input[i] == input[j]) || (input[i] == input[j]+32) || (input[i] == input[j]-32)) && (i != j) && (input[i] != ' '))
			{
				return FALSE;
			}
			else
			{
				j++;
			}
		}
		i++;
	}
	return TRUE;
}
