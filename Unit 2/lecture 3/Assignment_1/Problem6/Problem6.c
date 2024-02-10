/*
 * Problem6.c

 *
 *  Created on: 10 Feb 2024
 *      Author: ehab
 */
#include "stdio.h"
int main()
{
	float a,b,c;
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping, value of a = %f \n",a);
	printf("After swapping, value of b = %f",b);
	return 0;
}

