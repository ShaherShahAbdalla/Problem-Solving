/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

#define	SIZE	9

void reverse_array (int* input, int size);

int main ()
{
	int arr[SIZE], i;
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d",&arr[i]);
	}
	reverse_array(arr, SIZE);
	printf("{");
	for (i = 0; i < SIZE-1; i++)
	{
		printf("%d,",arr[i]);
	}
	printf("%d}",arr[i]);
}

void reverse_array (int* input, int size)
{
	int i, j = size/2, temp;
	for (i = 0; i < j; i++)
	{
		temp = input[size-(i+1)];
		input[size-(i+1)] = input[i];
		input[i] = temp;
	}
}
