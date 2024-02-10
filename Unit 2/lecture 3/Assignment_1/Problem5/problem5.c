/*
 * problem1.c

 *
 *  Created on: 10 Feb 2024
 *      Author: ehab
 */
#include "stdio.h"
int main()
{
	char x;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	printf("ASCII value of G = %d",(int)x);
	return 0;
}

