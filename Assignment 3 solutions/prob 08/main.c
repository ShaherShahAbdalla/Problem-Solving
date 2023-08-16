/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

int nth_power_of_3_series (int position);

int main ()
{
	int n;
	scanf("%d",&n);
	if (nth_power_of_3_series(n) != -1)
	{
		printf("%dth number in the {1,3,9,27,...} series = %d",n, nth_power_of_3_series(n));
	}
	else
	{
		printf("Try again entering a positive index");
	}
}

int nth_power_of_3_series (int position)
{
	int i, result = 1;
	if (position > 0)
	{
		if (position > 1)
		{
			for (i = 0; i < position-1; i++)
			{
				result = result * 3;
			}
			return result;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return -1;
	}
}
