/*
 * prob15.c
 *
 *  Created on: Jul 5, 2023
 *      Author: shaher
 */

#include <stdio.h>
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int x,y,result = 1;
	printf("Enter the number please:\n");
	scanf("%d",&x);
	printf("Enter the power please:\n");
	scanf("%d",&y);
	if (y >= 0)
	{
		printf("%d to the power %d = ",x,y);
		while (y > 0)
			{
				result = result * x;
				y--;
			}
		printf("%d\n",result);
	}
	else
	{
		printf("You should have entered a positive power\n");
	}
	return 0;

}
