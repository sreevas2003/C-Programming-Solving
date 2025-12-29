#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
static int counter=0;
pthread_mutex_t m;
void fun1(void)
{
	int i;
	pthread_mutex_lock(&m);
	for(i=1;i<=100000;i++)
	{
		counter++;
	//	printf("counter is %d\n",counter);
	}
	pthread_mutex_unlock(&m);
}
void fun2(void)
{
	int i;
	pthread_mutex_lock(&m);
	for(i=1;i<=100000;i++)
	{
		counter++;
	//	printf("counter is %d\n",counter);
	}
	pthread_mutex_unlock(&m);
}
void main()
{
	pthread_t ti1,ti2;
	pthread_create(&ti1,NULL,fun1,NULL);
	pthread_create(&ti2,NULL,fun2,NULL);
	pthread_join(ti1,NULL);
	pthread_join(ti2,NULL);
	printf("counter is %d\n",counter);
}
