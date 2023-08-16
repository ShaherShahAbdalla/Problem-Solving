/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

void swap_by_value (int input1, int input2);

int main ()
{
	int num1, num2;
	scanf("%d%d",&num1, &num2);
	swap_by_value(num1,num2);
}

void swap_by_value (int input1, int input2)
{
	int temp;
	temp = input1;
	input1 = input2;
	input2 = temp;
	printf("Numbers after swapping:\n%d\t%d",input1, input2);
}
