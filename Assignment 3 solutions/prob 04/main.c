/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

#define	SIZE	10

void selection_sort (int* input, int size);

int main ()
{
	int arr[SIZE], i;
	for(i = 0; i < SIZE; i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,SIZE);
	printf("Array after being selection sorted:\n{");
	for(i = 0; i < SIZE-1; i++)
	{
		printf("%d,",arr[i]);
	}
	printf("%d}",arr[i]);
}

void selection_sort (int* input, int size)
{
	int i, j, min, index, is_sorted;
	for (i = 0; i < size-1; i++)
	{
		min = input[i];
		is_sorted = 1;
		for (j = i+1; j < size; j++)
		{
			if (input[j] < min)
			{
				is_sorted = 0;
				index = j;
				min = input[j];
			}
		}
		if (is_sorted == 1)
		{

		}
		else
		{
			input[index] = input[i];
			input[i] = min;
		}
	}
}
