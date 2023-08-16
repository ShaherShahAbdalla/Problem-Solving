/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

long long int cube_of_int(int x);

int main ()
{
	int n;
	long long int result;
	scanf("%d",&n);
	result = cube_of_int(n);
	printf("Cube of %d = %lld",n,result);
}

long long int cube_of_int(int x)
{
	return (x*x*x);
}
