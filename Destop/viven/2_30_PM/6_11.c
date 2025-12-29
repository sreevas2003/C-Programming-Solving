#include<stdio.h>
void main()
{
	int a[3][3];
	printf("Enter 3*3 matrix:");
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	int flag=0;
	int left=0;
	int right=0;
	for(i=0;i<3;i++)
	{
		left += a[i][i];
		right += a[i][3-i-1];
		int csum=0;
		int rsum=0;
		for(j=0;j<3;j++)
		{
			csum+=a[i][j];
			rsum+=a[j][i];
		}
		if(rsum!=csum)
		{
			flag=1;
			break;
		}
	}
	if(right==left && flag==0)
		printf("Magic Square\n");
	else
		printf("Not Magic \n");
}
			

	

		
