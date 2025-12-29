#include<stdio.h>
void main()
{
	int a[5]={1,2,3,4,5};
	int temp,i,j,pos;
	printf("Enter position: ");
	scanf("%d",&pos);
	pos=pos%5;
	for(i=0;i<pos-1;i++)
	{
		temp=a[0];
		for(j=0;j<5;j++)
		{
			a[j]=a[j+1];
		}
		a[4]=temp;
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
}

