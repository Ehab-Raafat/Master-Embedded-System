/*
 * problem.c

 *
 *  Created on: 11 Feb 2024
 *      Author: ehab
 */
#include"stdio.h"
int main()
{

	int n,location=0;
	printf("please enter the number of elements:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	float x[n],num;
	for(int i=0;i<n;i++){
		scanf("%f",&x[i]);
	}
	printf("enter the element to be searched:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&num);
	for(int i=0;i<n;i++){
		location++;
		if(num==x[i]) {printf("Number found at the location = %d",location);break;}

	}

	return 0;
}

