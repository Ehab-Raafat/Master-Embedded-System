/*
 * problem.c

 *
 *  Created on: 11 Feb 2024
 *      Author: ehab
 */
#include "stdio.h"
int main()
{
	int n;
	float sum=0.0;
	printf("Enter the number of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	float a[n];
	for(int i=1;i<=n;i++)
	{
		printf("%d. Enter number: ",i);
		fflush(stdin);fflush(stdout);
		scanf("%f",&a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		sum+=a[i];
	}
	printf("Average = %0.2f",sum/n);

return 0;
}

