#include<stdio.h>
#include<stdlib.h>
void display(int num);
void reverse(int num);

void main()
{
	int num;
	printf("enter number : ");
	scanf("%d",&num);
	display(num);
	reverse(num);

}
void reverse(int num)
{
	int i;
	for(i=0;i<16;i++)
		printf("%d",((num>>i)&1));
	printf("\n");
}

void display(int num)
{
	int i;
	for(i=15;i>=0;i--)
		printf("%d",((num>>i)&1));
	printf("\n");
}

