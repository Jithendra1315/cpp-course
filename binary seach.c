#include<stdio.h>
int main()
{
	int a[10],n,i,key,found=0,l,h,mid,index=0;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("enter values to array a in sorted order");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter element to be search");
	scanf("%d",&key);
	l=0;
	h=n-1;
	while(1<=h)
	{
		mid=(l+h)/2;
		index=mid;
		if(key==a[mid])
		{
			found=1;
			break;
		}
		else if(key<a[mid])
		h=mid-1;
		else if(key>a[mid])
		l=mid+1;
	}
	if(found==1)
	printf("%d element found at index %d",key,index);
	else
	printf("not found");
	return 0;					
}
