#include<stdio.h>
#include<math.h>
void main()
{
	float p,r,t,ci;
	scanf("%f%f%f",&p,&r,&t);
	ci=p*(pow(1+r/100,t)-1);
	printf("compound interest ci=%f",ci);
}

