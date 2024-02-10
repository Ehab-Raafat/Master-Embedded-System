/*
 * problem1.c

 *
 *  Created on: 10 Feb 2024
 *      Author: ehab
 */
#include "stdio.h"
int main()
{
	float x,y;
	printf("Enter two numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x,&y);
	printf("Product: %f",x*y);
	return 0;
}

