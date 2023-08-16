/*
 * prob3.c
 *
 *  Created on: Jul 4, 2023
 *      Author: shaher
 */

#include <stdio.h>

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float C,F;
	printf("Enter temperature in Celsius please:\n");
	scanf("%f",&C);
	F = (C * 9 / 5) + 32;
	printf("Degree in Fahrenheit is: %f\n",F);
	return 0;
}
