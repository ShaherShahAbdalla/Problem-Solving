/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

unsigned char arr[256];

unsigned char* inbetween_descending (unsigned char input1, unsigned char input2, int* size);

int main ()
{
	unsigned char num1, num2;
	scanf("%hhu%hhu",&num1, &num2);
	int size;
	unsigned char* array = inbetween_descending(num1, num2, &size);
	int i;
	printf("In-between values in descending order:\n{");
	for (i = 0; i < size-1; i++)
	{
		printf("%hhu,",array[i]);
	}
	printf("%hhu}",array[i]);
}

unsigned char* inbetween_descending (unsigned char input1, unsigned char input2, int* size)
{
	if (input2 > input1)
	{
		int i;
		*size = input2 - input1 - 1;
		for(i = 0; i < (*size); i++)
		{
			arr[i] = input2 - i - 1;
		}
	}
	else
	{
		*size = 2;
		arr[0] = 0xFF;
		arr[1] = 0xFF;
	}
	return arr;
}
