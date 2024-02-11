/*
 * problem.c

 *
 *  Created on: 11 Feb 2024
 *      Author: ehab
 */
#include "stdio.h"
int main()
{
	char x[50];
	int count=0;
	printf("Enter the string: ");
	fflush(stdin);fflush(stdout);
	gets(x);
	for(int i=0;x[i]!='\0';i++)
	{
		count++;
	}

			printf("Length of string: %d",count);

	return 0;
}
