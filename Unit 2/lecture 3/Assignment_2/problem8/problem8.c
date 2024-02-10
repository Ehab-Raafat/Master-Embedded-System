/*
 * problem4.c

 *
 *  Created on: 10 Feb 2024
 *      Author: ehab
 */
#include"stdio.h"
int main ()
{
	float a,b;
	char op;
	printf("Enter operator either +,-,*,divide: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&op);
	printf("Enter two operands: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&a,&b);
	switch(op)
	{
	case'+':
		printf("%f + %f= %f",a,b,a+b);break;
	case'-':
		printf("%f - %f= %f",a,b,a-b);break;
	case'*':
		printf("%f * %f= %f",a,b,a*b);break;
	case'/':
		printf("%f / %f= %f",a,b,a/b);break;
	default:
		printf("Error!!! please enter +,-,*,divide");
	}
	return 0;
}

