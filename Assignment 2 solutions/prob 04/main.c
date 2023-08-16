/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

float mini_calculator(char operation, float input1, float input2);
char error = 0;

int main ()
{
	char operation;
	float operand1, operand2, result;
	scanf("%c",&operation);
	scanf("%f%f",&operand1,&operand2);
	result = mini_calculator(operation, operand1, operand2);
	if (error == 0)
	{
		printf("%f %c %f = %f",operand1, operation, operand2, result);
	}
	else
	{

	}
}

float mini_calculator(char operation, float input1, float input2)
{
	if (operation == '/' && input2 == 0)
	{
		printf("error");
		error = 1;
		return -1;
	}
	switch (operation)
	{
	case '+':
		return (input1 + input2);
	case '-':
		return (input1 - input2);
	case '*':
		return (input1 * input2);
	case '/':
		return (input1 / input2);
	default:
		printf("You entered a wrong operation :(");
		error = 1;
		return -1;
	}
}
