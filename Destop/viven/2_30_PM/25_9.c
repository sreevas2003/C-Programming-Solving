#include<stdio.h>
void display(int n);
void main()
{
	int n;
	printf("Enter Num:");
	scanf("%d",&n);
	printf("%b",n);
	display(n);
}
void display(int n)
{
	int c=-1,i;
	for(i=0;i<32;i++)
	{
		if(((n>>i)&1) && c==-1)
			c=i;
	}
	printf("\n");
	printf("position : %d",c);
}

