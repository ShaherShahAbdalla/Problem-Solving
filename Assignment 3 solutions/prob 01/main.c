/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

#define SIZE	10
int summation(int numbers_size, int numbers[]);

int main ()
{
	int arr[SIZE],i;
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Sum of the elements = %d",summation(SIZE,arr));
}

int summation(int numbers_size, int numbers[])
{
	int i, sum = 0;
	for (i = 0; i < numbers_size; i++, numbers++)
	{
		sum = sum + (*numbers);
	}
	return sum;
}
