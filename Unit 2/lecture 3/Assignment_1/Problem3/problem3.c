/*
 * problem1.c

 *
 *  Created on: 10 Feb 2024
 *      Author: ehab
 */
#include "stdio.h"
int main()
{
	int x,y;
	printf("Enter two integers: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("Sum: %d",x+y);
	return 0;
}

