/*
 * problem.c

 *
 *  Created on: 11 Feb 2024
 *      Author: ehab
 */
#include "stdio.h"
#include "string.h"
int main()
{
	char x[50];
	int length;
	printf("Enter the string: ");
	fflush(stdin);fflush(stdout);
	gets(x);
	length=strlen(x);
	for (int i=length-1;i>=0;i--)
	{
		printf("%c",x[i]);
	}
	return 0;
}
