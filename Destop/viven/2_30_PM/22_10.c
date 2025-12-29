#include<stdio.h>
void main()
{
	int arr[5]={1,2,3,5,6};
	int i,tsum=0,sum=0;
	for(i=0;i<5;i++)
		sum+=arr[i];
	for(i=1;i<=6;i++)
		tsum+=i;
	printf("missing number is : %d\n",tsum-sum);
}

