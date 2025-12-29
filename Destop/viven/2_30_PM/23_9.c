#include<stdio.h>
void display(int,int);
int countset(int,int);
void main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	display(num,15);
	int i,c= countset(num,15);
	for(i=num+1;i;i++)
	{
		if(countset(i,15)==c)
		{
			printf("%d\n",i);
			display(i,15);
			break;
		}
	}
}
int countset(int n,int i)
{
	int c=0;
	for(i;i>=0;i--)
	{
		if(((n>>i)&1))
			c++;
	}
	return c;
}
void display(int n,int i)
{
	for(i;i>=0;i--)
	{
		printf("%d",((n>>i)&1));
		if(i%8==0)
			printf(" ");
	}
	printf("\n");
}
