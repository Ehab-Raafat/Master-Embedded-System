/*
 * Problem.c

 *
 *  Created on: 10 Feb 2024
 *      Author: ehab
 */
 #include"stdio.h"
 int main ()
{
	int x;
	printf("Enter an integer you want to check: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x%2==0)
	{printf("%d is even",x);}
	else
	{printf("%d is odd",x);}
 return 0;

}


