/*
 * problem4.c

 *
 *  Created on: 10 Feb 2024
 *      Author: ehab
 */
#include"stdio.h"
int main ()
{
	int n,sum=0;
	printf("Enter a integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		{
		sum+=i;
		}
		printf("Sum = %d",sum);

	return 0;
}

