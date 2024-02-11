/*
 * problem.c
 *
 *  Created on: 11 Feb 2024
 *      Author: ehab
 */
#include "stdio.h"
int fac(int );
int main()
{
	int a;
	printf("Enter an positive number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	printf("Factorial of %d = %d ",a,fac(a));

	return 0;
}

int fac(int x)
{
	int f;
	if (x==1)
		{f=1;}
	else
		{f=x*fac(x-1);}
	return f;
}


