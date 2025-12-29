#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n;
	printf("Enter size :");
	scanf("%d",&n);
	int a[n],temp[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	i=0;
	while(i<n)
	{
		temp[i]=-1;
		i++;
	}
	int j,c, pc = n/2;
	printf("half count %d\n",pc);
	for(i=0;i<n;i++)
	{
		if(temp[i]==-1)
		{
			c=0;
			for(j=i;j<n;j++)
			{
				if(a[i]==a[j])
				{
					c++;
					temp[j]=0;
				}
			}
		}
		if(c>pc)
		{
			printf("number is %d\n",a[i]);
			exit(0);
		}
	}
	printf("Not found\n");
}
