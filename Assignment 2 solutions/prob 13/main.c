/*
 * main.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

int floored_sum (float input1, float input2);

int main ()
{
	float num1,num2,result;
	scanf("%f%f",&num1, &num2);
	result = floored_sum(num1, num2);
	printf("Result of the sum (floored) = %f",result);
}
int floored_sum (float input1, float input2)
{
	int result = input1 + input2;
	if (result >= 0)
	{
		return result;
	}
	else
	{
		result = result - 1;
		return result;
	}
}
