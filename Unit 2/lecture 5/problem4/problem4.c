/*
 * problem.c
 *
 *  Created on: 11 Feb 2024
 *      Author: ehab
 */
#include "stdio.h"
int pow(int,int );
int main(){
	int a,b;
	printf("enter base number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	printf("enter power number(positive integer):");
		fflush(stdin);fflush(stdout);
		scanf("%d",&b);
	printf("%d^%d=%d",a,b,pow(a,b));


	return 0;
}
int pow(int a,int b)
{
	int pw;
	if(b!=0)
	{
		pw=a*pow(a,b-1);
	}
	else {pw=1;}
	return pw;

}


