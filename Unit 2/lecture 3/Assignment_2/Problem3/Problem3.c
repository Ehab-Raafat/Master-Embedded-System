/*
 * Problem.c

 *
 *  Created on: 10 Feb 2024
 *      Author: ehab
 */
#include"stdio.h"
int main ()
{
	float a,b,c;
	printf("Enter a three numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	if(a>=b&&a>=c)
		printf("Largest number: %f",a);
	else if(b>=a&&b>=c)
		printf("Largest number: %f",b);
	else if(c>=a&&c>=b)
		printf("Largest number: %f",c);

	return 0;
}


