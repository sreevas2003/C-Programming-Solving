#include<stdio.h>
void display(int *a[][])
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
int minimum(int *a[][],int i,int j)
{
	int min = a[i][j+1] < a[j+1][i] ? a[i][j+1] : a[j+1][i];
	min = a[i+1][j+1] < min ? a[i+1][j+1] : min;
	return min;
}

void main()
{
	int a[3][3]={1,1,1,1,99,99,99,99,1};
	display(a);
	int sum=a[0][0],psum;
	int i=0,j=0,n=3;
	while(i<n ||j<n)
	{
		int min=minimum(a,i,j);
		sum+=min;
		i++;
	}
	printf("sum=%d\n",sum);
}
		
		
			
	
