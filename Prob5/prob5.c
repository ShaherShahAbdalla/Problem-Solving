/*
 * prob5.c
 *
 *  Created on: Jul 4, 2023
 *      Author: shaher
 */
#include <stdio.h>
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	unsigned char character;
	printf("Enter a character please:\n");
	scanf("%c",&character);
	printf("ASCII corresponds to %c is %d",character,character);
	return 0;
}

