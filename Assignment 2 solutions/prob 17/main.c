/*
 * main.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

void max_xor (unsigned short int input1, unsigned short int input2);

int main ()
{
	unsigned short num1, num2;
	scanf("%hu%hu",&num1, &num2);
	max_xor(num1, num2);
}

void max_xor (unsigned short int input1, unsigned short int input2)
{
	unsigned short int i,j,left,right;
	int result = -1;
	for (i = input1; i <= input2; i++)
	{
		for(j = i; j <= input2; j++)
		{
			if ((i^j) >= result)
			{
				if ((i^j) > result)
				{
					result = i^j;
					left = i;
					right = j;
				}
				else
				{
					printf("(%hu,%hu) has max xor value %d\n",i,j,i^j);
				}
			}
		}
	}
	printf("(%hu,%hu) has max xor value %d",left,right,result);
}
