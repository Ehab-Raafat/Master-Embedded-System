/*
 * problem.c

 *
 *  Created on: 11 Feb 2024
 *      Author: ehab
 */
#include "stdio.h"
int main()
{
	float a[2][2],b[2][2],x[2][2];
	printf("Enter the elements of 1st matrix \n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("enter a[%d][%d]: ",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the elements of 2st matrix \n");
	for(int i=0;i<2;i++)
		{
			for(int j=0;j<2;j++)
			{
				printf("enter b[%d][%d]: ",i,j);
				fflush(stdin);fflush(stdout);
				scanf("%f",&b[i][j]);
			}
		}
	printf("Sum of matrix: \n");
	for(int i=0;i<2;i++)
		{
			for(int j=0;j<2;j++)
			{
				x[i][j]=a[i][j]+b[i][j];
				printf("%f \t ",x[i][j]);
			}
			printf("\n");
		}
	return 0;
}

