/*
 * Prob1.c
 *
 *  Created on: Jul 4, 2023
 *      Author: shaher
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int x,y,result;
	printf("Enter two numbers please:\n");
	scanf("%d %d",&x,&y);
	result = ((x + y) * 3) - 10;
	printf("Result = %d\n",result);
	return 0;
}
