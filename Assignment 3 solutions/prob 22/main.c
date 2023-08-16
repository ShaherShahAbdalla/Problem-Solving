/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

#define	SIZE	10

void removeDuplicates(int* arr_old, int size_old, int* arr_new, int *size_new);

int main ()
{
	int old_arr[SIZE], new_arr[SIZE], i, new_size;
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d",&old_arr[i]);
	}
	removeDuplicates(old_arr, SIZE, new_arr, &new_size);
	printf("The array after removing duplicates:\n{");
	for (i = 0; i < new_size-1; i++)
	{
		printf("%d,",new_arr[i]);
	}
	printf("%d}",new_arr[i]);
}

void removeDuplicates(int* arr_old, int size_old, int* arr_new, int *size_new)
{
	*size_new = 0;
	int i, j, h = 0, not_repeated = 1;
	arr_new[h] = arr_old[0];
	h++;
	(*size_new)++;
	for (i = 1; i < size_old; i++)
	{
		for (j = i-1; j >= 0; j--)
		{
			if (arr_old[i] == arr_old[j])
			{
				not_repeated = 0;
			}
			else
			{

			}
		}
		if (not_repeated == 1)
		{
			arr_new[h] = arr_old[i];
			h++;
			(*size_new)++;
		}
		else
		{

		}
		not_repeated = 1;
	}
}
