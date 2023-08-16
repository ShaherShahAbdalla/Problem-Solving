/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

char ifmultiple (int input1, int input2);

int main ()
{
	int num1, num2;
	char check;
	scanf("%d%d",&num1,&num2);
	check = ifmultiple(num1, num2);
	if (check == 1)
	{
		printf("%d is multiple of %d",num1, num2);
	}
	else
	{
		printf("%d is not multiple of %d",num1, num2);
	}
}

char ifmultiple (int input1, int input2)
{
	if (input1 == (2 * input2))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
