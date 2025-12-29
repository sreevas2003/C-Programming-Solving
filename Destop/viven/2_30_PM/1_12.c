#include<stdio.h>
#include<stdlib.h>
void main()
{
	int p1,p2,p3;
	printf("Enter p1 p2 p3 : ");
	scanf("%d%d%d",&p1,&p2,&p3);
	int cpu=3;
	int time=0;
	while(1)
	{
		if(p1>0)
		{
			p1=(p1-cpu<0)?0:p1-cpu;
			printf("Process 1 executed and remaing time is %d\n",p1);
			sleep(1);
			printf("Waiting time is %d\n",time);
			time+=cpu;

		}
		if(p2>0)
		{
			p2=(p2-cpu<0)?0:p2-cpu;
			printf("Process 2 executed and remaing time is %d\n",p2);
			sleep(1);
			printf("Waiting time is %d\n",time);
			time+=cpu;
		}
		if(p3>0)
		{
			p3=(p3-cpu<0)?0:p3-cpu;
			printf("Process 3 executed and remaing time is %d\n",p3);
			sleep(1);
			printf("Waiting time for p3 is %d\n",time);
			time+=cpu;
		}
		if(p1==0 && p2==0 && p3==0)
			exit(0);
	}
}
