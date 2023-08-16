/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

char uppering (char letter);

int main ()
{
	char character;
	scanf("%c",&character);
	character = uppering(character);
	printf("%c\n",character);
}

char uppering (char letter)
{
	if (letter >= 'a' && letter <= 'z')
	{
		printf("Its upper case: ");
		return (letter - 32);
	}
	else
	{
		printf("This is not lower-case letter ");
		return letter;
	}
}
