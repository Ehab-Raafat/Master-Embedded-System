/*
 * main.c
 *
 *  Created on: Jan 16, 2024
 *      Author: Ehab Raafat
 */
#include "stdio.h"
#define pi 3.14
#define areaCalc(x)(pi*(x)*(x))


int main()
{
	float  radius,area;
	printf("Enter radius :");
	fflush(stdin);fflush(stdout);
	scanf("%f",&radius);
	area=areaCalc(radius);
	printf("Area = %.2f",area);
	return 0;
}
