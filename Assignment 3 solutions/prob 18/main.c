/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

#define	SIZE	14

int longest_consecutive (int* input, int size, int num);

int main ()
{
	int arr[SIZE], x, i;
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&x);
	printf("The count of the longest consecutive occurrence of %d = %d",x, longest_consecutive(arr,SIZE,x));
}

int longest_consecutive (int* input, int size, int num)
{
	int i, occurrence = 0, longest = 0;
	for (i = 0; i < size; i++)
	{
		if (input[i] == num)
		{
			occurrence++;
			if (occurrence > longest)
			{
				longest = occurrence;
			}
			else
			{

			}
		}
		else
		{
			occurrence = 0;
		}
	}
	return longest;
}
