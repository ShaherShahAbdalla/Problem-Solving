/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

#define	SIZE	10

int first_occur (int* input, int size, int num);

int main ()
{
	int arr[SIZE], i, index, num;
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&num);
	index = first_occur(arr,SIZE,num);
	if (index == -1)
	{
		printf("%d is not present in the array :(",num);
	}
	else
	{
		printf("%d is present in index %d",num, index);
	}
}

int first_occur (int* input, int size, int num)
{
	int i, result = -1;
	for (i = 0; i < size; i++)
	{
		if (input[i] == num)
		{
			return i;
		}
		else
		{

		}
	}
	return result;
}
