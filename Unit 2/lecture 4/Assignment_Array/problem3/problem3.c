/*
 * problem.c

 *
 *  Created on: 11 Feb 2024
 *      Author: ehab
 */
/*
 * problem.c

 *
 *  Created on: 11 Feb 2024
 *      Author: ehab
 */
/*
 * problem.c

 *
 *  Created on: 11 Feb 2024
 *      Author: ehab
 */
#include "stdio.h"
int main()
{
	int r,c;
	printf("Enter rows and column of matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&r,&c);
	float a[r][c],b[c][r];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("Enter elements a%d%d: ",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[i][j]);

		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%f   ",a[i][j]);

		}
		printf("\n");
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			b[j][i]=a[i][j];

		}
	}
	printf("Transpose of matrix \n");
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("%f   ",b[i][j]);

		}
		printf("\n");
	}


	return 0;
}





