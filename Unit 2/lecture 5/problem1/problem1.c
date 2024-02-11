/*
 * problem.c
 *
 *  Created on: 11 Feb 2024
 *      Author: ehab
 */
#include "stdio.h"
int Prime(int );
int main()
{
	int a,b;
	printf("Enter two numbers(interval): ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&a,&b);

		for(int i=a;i<=b;i++)
		{
			if(Prime(i)==0) {printf("%d ",i); }
		}


	return 0;
}

int Prime(int x)
{
	int count=0;
	for(int i=2;i<=10;i++)
	{
		if(x%i==0){count++;break;}
	}
return count;
}


