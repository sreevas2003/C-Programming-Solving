//Equilibrium
#include<stdio.h>
int equili(int *arr,int s);
void main()
{
	int s;
	printf("Enter size : ");
	scanf("%d",&s);
	int i,arr[s];
	for(i=0;i<s;i++)
		scanf("%d",&arr[i]);
	int equi=equili(arr,s);
	if(equi!=-1)
		printf("Equilibrium position at %d\n",equi);
	else
		printf("not found\n");
}
int equili(int* arr,int s)
{
	if(s==0)
		return -1;
	if(s==1)
		return 0;
	int i,j,lsum=0,rsum=0;
	for(i=0;i<s;i++)
	{
		rsum=0;
		for(j=s-1;j>i;j--)
			rsum+=arr[j];
		if(lsum==rsum)
			return i;
		lsum+=arr[i];
	}
	return -1;
}
