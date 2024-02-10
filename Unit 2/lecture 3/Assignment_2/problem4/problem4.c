/*
 * problem4.c

 *
 *  Created on: 10 Feb 2024
 *      Author: ehab
 */
#include"stdio.h"
int main ()
{
	float a;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	if(a>0)
	{printf("%f is positive",a);}
	else if(a<0)
	{printf("%f is negative",a);}
	else
	{printf("you entered zero.");}

	return 0;
}

