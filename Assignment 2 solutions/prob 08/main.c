/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

void display_prime (int input1, int input2);

int main ()
{
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	display_prime(num1,num2);
}

void display_prime (int input1, int input2)
{
	int i;
	char flag = 0;
	for (i = input1; i <= input2; i++)
	{
		if (i == 0 || i == 1)
		{
			continue;
		}
		else if (i == 2 || i == 3 || i == 5 || i == 7)
		{
			flag = 1;
			printf("\n%d is prime",i);
		}
		else if ((i%2 != 0)&&(i%3 != 0)&&(i%5 != 0)&&(i%7 != 0)&&(i > 0))
		{
			flag = 1;
			printf("\n%d is prime",i);
		}
		else
		{

		}
	}
	if (flag == 0)
	{
		printf("No prime number found");
	}
	else
	{

	}
}
