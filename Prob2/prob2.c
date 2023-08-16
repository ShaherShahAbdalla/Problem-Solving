/*
 * prob2.c
 *
 *  Created on: Jul 4, 2023
 *      Author: shaher
 */
#include <stdio.h>

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char name[20];
	float grade;
	printf("Enter your name please:\n");
	gets(name);
	printf("Enter your grade please:\n");
	scanf("%f",&grade);
	printf("Name: %s\nGrade: %.2f\n",name,grade);
	return 0;
}
