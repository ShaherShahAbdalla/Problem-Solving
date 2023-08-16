/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

#define		SIZE	100

void str_concatenate (char* input1, char* input2);

int main ()
{
	char str1[SIZE], str2[SIZE];
	gets(str1);
	gets(str2);
	str_concatenate(str1, str2);
	printf("%s",str1);
}

void str_concatenate (char* input1, char* input2)
{
	int size1, size2, i = 0;
	while (input1[i] != '\0')
	{
		size1++;
		i++;
	}
	i = 0;
	while (input2[i] != '\0')
		{
			size2++;
			i++;
		}
	for (i = 0; i < (size1+size2); i++)
	{
		input1[size1+i] = input2[i];
	}
	input1[size1+i] = input2[i];
}
