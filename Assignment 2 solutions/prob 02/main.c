/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

int check_if_alphabet (char letter);

int main ()
{
	char input;
	scanf("%c",&input);
	int result = check_if_alphabet(input);
	if (result == 1)
	{
		printf("Your input %c is an alphabet :)",input);
	}
	else
	{
		printf("Your input %c is not an alphabet :(",input);
	}
}
int check_if_alphabet (char letter)
{
	if (((letter >= 'A')&&(letter <= 'Z'))||((letter >= 'a')&&(letter <= 'z')))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
