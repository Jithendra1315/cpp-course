#include <stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter size of the array:");
	scanf("%d",&n);
	int i,arr[n];
	printf("\n Enter the elements of the array:");
	for( i =0; i<n; i++)
	{
		scanf("%d",&arr[i]);	
	}
	printf("\n print element are:");
	for (i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
		
	}
	return 0;
}
