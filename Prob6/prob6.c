/*
 * prob6.c
 *
 *  Created on: Jul 4, 2023
 *      Author: shaher
 */
#include <stdio.h>

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int x,y;
	printf("Enter two numbers please:\n");
	scanf("%d %d",&x,&y);
	if (x == y)
	{
		printf("%d = %d\n",x,y);
	}
	else if (x > y)
	{
		printf("%d > %d\n",x,y);
	}
	else
	{
		printf("%d < %d\n",x,y);
	}
	return 0;
}

