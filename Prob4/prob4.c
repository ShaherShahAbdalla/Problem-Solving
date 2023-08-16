/*
 * prob4.c
 *
 *  Created on: Jul 4, 2023
 *      Author: shaher
 */

#include <stdio.h>
 int main ()
 {
	 setvbuf(stdout, NULL, _IONBF, 0);
	 setvbuf(stderr, NULL, _IONBF, 0);
	 float r, area , circumference;
	 printf("Enter radius please:\n");
	 scanf("%f",&r);
	 area = 22.0/7 * r * r;
	 circumference = 2 * 22/7.0 * r;
	 printf("Circle of radius %f has area = %f and circumference = %f\n",r,area,circumference);
	 return 0;
 }
