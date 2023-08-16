/*
 * Prob9.c
 *
 *  Created on: Jul 4, 2023
 *      Author: shaher
 */
#include <stdio.h>

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float grade;
	printf("Enter your grade please:\n");
	scanf("%f",&grade);
	if ((grade >= 0) && (grade < 50))
	{
		printf("Fail\n");
	}
	else if ((grade >= 50) && (grade < 65))
	{
		printf("Pass\n");
	}
	else if ((grade >= 65) && (grade < 75))
		{
			printf("Good\n");
		}
	else if ((grade >= 75) && (grade < 85))
		{
			printf("Very Good\n");
		}
	else if ((grade >= 85) && (grade <= 100))
		{
			printf("Excellent\n");
		}
	else
	{
		printf("Invalid input\nGrade must be between 0 and 100\n");
	}
	return 0;
}

