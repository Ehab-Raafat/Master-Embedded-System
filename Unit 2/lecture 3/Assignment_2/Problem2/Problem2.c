/*
 * Problem.c

 *
 *  Created on: 10 Feb 2024
 *      Author: ehab
 */
#include"stdio.h"
int main ()
{
	char x;
	printf("Enter an alphabet: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
		printf("%c is a vowel",x);
	else
		printf("%c is constant",x);
	return 0;
}


