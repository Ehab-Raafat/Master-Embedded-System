/*
 * problem.c

 *
 *  Created on: 11 Feb 2024
 *      Author: ehab
 */
#include "stdio.h"
int main()
{
	char x[50],ch;
	int count=0,i;
	printf("Enter the string: ");
	fflush(stdin);fflush(stdout);
	gets(x);
	printf("Enter the character to find frequency: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);
	for(i=0;i<50;i++)
	{
		if(ch==x[i]){count++;}

	}
	printf("Frequency of %c = %d ",ch,count);

	return 0;
}
