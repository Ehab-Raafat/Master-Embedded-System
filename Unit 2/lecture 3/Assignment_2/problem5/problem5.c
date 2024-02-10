/*
 * problem4.c

 *
 *  Created on: 10 Feb 2024
 *      Author: ehab
 */
#include"stdio.h"
int main ()
{
	char x;
	int y;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	y=(int)x;
	if((y>=65&&y<=90)||(y>=97&&y<=122))
	{printf("%c is alphabet",x);}
	else
	{printf("%c is not alphabet",x);}
	return 0;
}

