#include<stdio.h>
int main()
{
	int P,T,R;
	float SI;
	printf("Enter principal amount(P):");
	scanf("%d",&P);
	printf("\n Enter T:");
	scanf("%d",&T);
	printf("\n Enter R:");
	scanf("%d",&R);
	SI=(P*T*R)/100;
	printf("Simple Interest SI=%f",SI);
}
