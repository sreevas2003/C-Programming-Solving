#include<stdio.h>
#include<stdlib.h>
void main()
{
	int c=0,i,d,arr[10];
	int choice;
	while(1)
	{
		printf("Enter choice\n0.exit\t1.push\t2.pop\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 0: exit(0);
			case 1:printf("enter element : ");
			       scanf("%d",&d);
			       int s=c;
			       arr[c++]=d;
			       for(i=0;i<=s;i++)
				       printf("%d ",arr[i]);
			       printf("\n");
			       break;
			case 2:
			       c--;
			       for(i=0;i<c;i++)
			       		printf("%d ",arr[i]);
			       printf("\n");
			       break;
			default :
			       printf("enter valid ");
		}
	}
}



