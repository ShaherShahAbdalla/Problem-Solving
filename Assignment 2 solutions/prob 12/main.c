/*
 * main.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Shaher Shah Abdalla Kamal
 */

#include <stdio.h>

char heater_time (float input);

int main ()
{
	float temp;
	scanf("%f",&temp);
	if (heater_time(temp))
	{
		printf("Required time is %d",heater_time(temp));
	}
	else
	{
		printf("INVALID INPUT");
	}
}

char heater_time (float input)
{
	if (input >= 0 && input <= 30)
		return 7;
	else if (input > 30 && input <= 60)
		return 5;
	else if(input > 60 && input <= 90)
		return 3;
	else if(input > 90 && input <= 100)
		return 1;
	else
		return 0;
}
