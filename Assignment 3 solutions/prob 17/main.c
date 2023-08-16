/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

#define	SIZE1	10
#define	SIZE2	5

void swap (int a_size,int *a,int b_size,int *b);

int main ()
{
	int arr1[SIZE1], arr2[SIZE1], i;
	for (i = 0; i < SIZE1; i++)
	{
		scanf("%d",&arr1[i]);
	}
	for (i = 0; i < SIZE2; i++)
	{
		scanf("%d",&arr2[i]);
	}
	swap(SIZE1, arr1, SIZE2, arr2);
	printf("First array after swapping:\n{");
	for (i = 0; i < SIZE2-1; i++)
	{
		printf("%d,",arr1[i]);
	}
	printf("%d}",arr1[i]);
	printf("\nSecond array after swapping:\n{");
	for (i = 0; i < SIZE1-1; i++)
	{
		printf("%d,",arr2[i]);
	}
	printf("%d}",arr2[i]);
}

void swap (int a_size,int *a,int b_size,int *b)
{
	int i, temp;
	if (a_size >= b_size)
	{
		for (i = 0; i < a_size; i++)
			{
				temp = a[i];
				a[i] = b[i];
				b[i] = temp;
			}
	}
	else
	{
		for (i = 0; i < b_size; i++)
			{
				temp = b[i];
				b[i] = a[i];
				a[i] = temp;
			}
	}
}
