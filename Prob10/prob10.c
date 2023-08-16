/*
 * prob10.c
 *
 *  Created on: Jul 4, 2023
 *      Author: shaher
 */

#include <stdio.h>

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float x,y;
	char operation;
	printf("Choose one operation:\t[+ - * /]\n");
	scanf("%c",&operation);
	switch (operation)
	{
	case '+':
		printf("Enter two numbers:\n");
		scanf("%f %f",&x,&y);
		printf("%f + %f = %f",x,y,x+y);
		break;
	case '-':
		printf("Enter two numbers:\n");
		scanf("%f %f",&x,&y);
		printf("%f - %f = %f",x,y,x-y);
		break;
	case '*':
		printf("Enter two numbers:\n");
		scanf("%f %f",&x,&y);
		printf("%f * %f = %f",x,y,x*y);
		break;
	case '/':
		printf("Enter two numbers:\n");
		scanf("%f %f",&x,&y);
		if (y !=0 )
		{
			printf("%f / %f = %f",x,y,x/y);
		}
		else
		{
			printf("You can not divide by zero");
		}
		break;
	default:
		printf("Invalid input!\n");
	}
	return 0;
}
