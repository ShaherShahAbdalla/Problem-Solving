/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

int nth_odd_number (int position);

int main ()
{
	int n;
	scanf("%d",&n);
	if (nth_odd_number(n) != -1)
	{
		printf("%dth number in the {1,3,5,7,...} series = %d",n, nth_odd_number(n));
	}
	else
	{
		printf("Try again entering a positive index");
	}
}

int nth_odd_number (int position)
{
	if (position > 0)
	{
		return ((2*position)-1);
	}
	else
	{
		return -1;
	}
}
