#include<stdio.h>

void main()
{
	int s;
	printf("Enter size : ");
	scanf("%d",&s);
	int i,j,arr[s];
	printf("Enter arrey elements : ");
	for(i=0;i<s;i++)
		scanf("%d",&arr[i]);
	int temp[10][2];
	int l=0;
	for(i=0;i<s;i++)
	{
		while(arr[i]==0)
			i++;
		temp[l][0]=i;
		temp[l][1]=arr[i];
		l++;
	}
	for(i=0;i<l;i++)
	{
		for(j=0;j<2;j++)
			printf("%d ",temp[i][j]);
		printf("\n");
	}
}

