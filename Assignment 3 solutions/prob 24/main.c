/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

#define	SIZE	10

int get_second_largest (int* input, int size);

int main ()
{
	int array[SIZE], i;
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Second largest number is: %d",get_second_largest(array,SIZE));
}

int get_second_largest (int* input, int size)
{
	int largest = input[0], second_largest = -2147483648, i;
	for (i = 1; i < size; i++)
	{
		if (input[i] > largest)
		{
			second_largest = largest;
			largest = input[i];
		}
		else if (input[i] > second_largest)
		{
			second_largest = input[i];
		}
	}
	return second_largest;
}
