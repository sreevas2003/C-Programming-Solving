#include<stdio.h>
long int display(long int);
void main()
{
	long int num;
	printf("Enter a Number : ");
	scanf("%d",&num);
	num=display(num);
	printf("%ld\n",num);
}
long int display(long int n)
{
	int i,r;
	long int a=1,res=0;
	for(i=0;i<32;i++)
	{
		r=((n>>i)&1);
		printf("%d",r);
		res=res+a*r;
		a*=10;
	}
	printf("\n");
	return res;
}
		
