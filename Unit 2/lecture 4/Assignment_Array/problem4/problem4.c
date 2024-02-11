/*
 * problem.c

 *
 *  Created on: 11 Feb 2024
 *      Author: ehab
 */
#include"stdio.h"
int main()
{

	int loc,n;
	printf("please enter the number of elements:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	float x[n],c,y[n+1];
	for(int i=0;i<n;i++){
		scanf("%f",&x[i]);
	}
	printf("please enter the element to be insert:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&c);
	printf("please enter the location:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&loc);
	for(int i=0;i<=n;i++){
		if(i<(loc-1)){ y[i]=x[i];}
		else if(i==(loc-1)){y[i]=c;}
		else {y[i]=x[i-1];}
	}

	for(int i=0;i<=n;i++){

		printf("%0.1f   ",y[i]);

	}
	return 0;
}

