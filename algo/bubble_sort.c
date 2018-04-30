#include<stdio.h>
int main()
{
	int n, i,j,temp=0,k,largest=1;
	printf("\nPlease enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("\nPlease enter the elements: \n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j+1]>arr[j])
			{
				temp = arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	//printf("\nThe elements are :\n");
	//for(i=0;i<n;i++)
	//	printf("%d ",arr[i]);
	printf("\nPlease enter the kth largest element to be found: ");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(largest<k)
		{
			if(arr[i]==arr[i+1])
				continue;
			if(arr[i+1]<arr[i])
				largest++;
		}
		if(largest==k)
		{
			printf("\nLargest = %d",arr[i+1]);
			break;
		}
		
	}
		if(largest>k)
			printf("\nABORT! WRONG INPUT\n\n");
}

	

	

