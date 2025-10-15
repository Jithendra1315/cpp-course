#include<stdio.h>
int main()
{
	int a[10],n,i,j,t;
	printf("Enter no.of elements");
	scanf("%d",&n);
	printf("Enter array  elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Before sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(a[j-1]>a[j])
			{
				t=a[j-1];
				a[j-1]=a[j];
				a[j]=t;
			}
		}
	}
	printf("After sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
