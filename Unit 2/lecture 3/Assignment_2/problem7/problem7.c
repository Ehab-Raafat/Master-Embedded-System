/*
 * problem4.c

 *
 *  Created on: 10 Feb 2024
 *      Author: ehab
 */
#include"stdio.h"
int main ()
{
	int n,fac=1;
	printf("Enter a integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	if(n<0)
		printf("ERROR!!! factorial of negative number doesn't exist");
	else
	{
	for(int i=1;i<=n;i++)
		fac*=i;
	printf("Factorial = %d",fac);
	}
	return 0;
}

