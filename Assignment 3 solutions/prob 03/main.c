/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

#define	SIZE	10

void bubble_sort (int* input, int size);

int main ()
{
	int arr[SIZE], i;
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,SIZE);
	printf("Array after being assorted:\n{");
	for (i = 0; i < SIZE-1; i++)
	{
		printf("%d,",arr[i]);
	}
	printf("%d}",arr[i]);
}

void bubble_sort (int* input, int size)
{
	char is_sorted;
	int temp, i, j;
	for (i = 0; i < size; i++)
	{
		is_sorted = 1;
		for (j = 0; j < size-1; j++)
		{
			if (input[j] > input[j+1])
			{
				is_sorted = 0;
				temp = input[j];
				input[j] = input[j+1];
				input[j+1] = temp;
			}
			else
			{

			}
		}
		if (is_sorted == 1)
		{
			return;
		}
		else
		{

		}
	}
}
