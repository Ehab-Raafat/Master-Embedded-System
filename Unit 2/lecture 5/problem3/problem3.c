/*
 * problem.c
 *
 *  Created on: 11 Feb 2024
 *      Author: ehab
 */
#include "stdio.h"
void reverse();
int main(){
	printf("enter a sentence:");
	fflush(stdin);fflush(stdout);
reverse();
	return 0;
}
void reverse(){

	char c;
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	if(c!='\n')
	{
reverse();
printf("%c",c);
	}
}


