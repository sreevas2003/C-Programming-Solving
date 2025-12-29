#include<stdio.h>
void rearrange(int arr[],int val,int index)
{
	int i;
	int temp=arr[val];
	arr[val]=arr[index];
	arr[index]=temp;
}
void main()
{
	int i,arr[4];
	printf("Enter array : ");
	for(i=0;i<4;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<4;i++)
	{
		rearrange(arr,arr[i],i);

	}
	for(i=0;i<5;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

