#include<stdio.h>
void swap(int arr[],int i,int j)
{
	int k;
	for(k=i;k>j;k--)
	{
		int temp=arr[k];
		arr[k]=arr[k-1];
		arr[k-1]=temp;
	}
}
void main()
{
	int arr[]={1,2,3,4,-5,-6,-7,-8};
	int i,j,n=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			if(arr[i]>0)
				continue;
			else
			{
				j=i;
				while(j<n && arr[j]>0)
					j++;
				swap(arr,j,i);
			}
		}
		else
		{
			if(arr[i]<0)
				continue;
			else
			{
				j=i;
				while(j<n && arr[j]>0)
					j++;
				swap(arr,j,i);
			}
		}
		
	}
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
