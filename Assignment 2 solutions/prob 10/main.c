/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

int count_holes (int input);

int main ()
{
	int num;
	scanf("%d",&num);
	printf("Number of holes in %d is %d",num, count_holes(num));
}

int count_holes (int input)
{
	int n,i = 0;
	while (input != 0)
	{
		n = input % 10;
		if ((n == 1)||(n == 2)||(n == 3)||(n == 5)||(n == 7))
		{

		}
		else if ((n == 0)||(n == 4)||(n == 6)||(n == 9))
		{
			i++;
		}
		else
		{
			i = i + 2;
		}
		input = input / 10;
	}
	return i;
}
