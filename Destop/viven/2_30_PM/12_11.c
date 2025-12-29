#include<stdio.h>
int least(int *a)
{
	int i,val=0;
	int min=a[0];
	for(i=1;i<3;i++)
	{
		if(min>a[i])
			val=i;
	}	
	 return val;
}
int search(int val,int* value,int var)
{
	int i;
	for(i=0;i<3;i++)
	{
		if(value[i]==val)
			return i;
	}
	return -1;
}
void print(int *a,int* b)
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
}

void main()
{
	int arr[9]={7,0,1,2,0,2,3,5,4};
	int sea,var,i=0,c=1;
	int cpu[3];
	int value[3];
	while(i<3)
	{
		value[i]=arr[i];
		cpu[i]=c++;
		i++;
	}
	print(value,cpu);
	printf("\n");
	int temp,j,k;
	for(i=3;i<9;i++)
	{
		temp=arr[i];
		if((sea=search(temp,value,j))!=-1)
		{
			cpu[sea]=c;
			c++;
			print(value,cpu);
		}
		else
		{
			j=least(cpu);
			value[j]=temp;
			cpu[j]=c;
			c++;
			print(value,cpu);

		}
		printf("\n");
	}
}

			
			



