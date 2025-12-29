#include<stdio.h>
#include<string.h>
void store(char* s,int i,int j)
{
	char a[10];
	for(i=0;i<j;i++)
		a[i]=s[i];
	puts(a);
}
int check(char* s,int i,int j)
{
	int a;
	for(i;i<j;i++)
	{
		for(a=i+1;a<j;a++)
		{
			if(s[i]==s[j])
			{
				flag=1;
				break
			}
		}
	}
	if(flag==0)
		return 1;
	else
		return 0;
}
void main()
{
	char s[15];
	char* temp;
	printf("Enter a string: ");
	scanf("%s",s);
	int i=0,j,n1=0,n2=1,k,n=strlen(s);
	while(s[i])
	{
		if(n2)
		{
			j=i+1;
			while(s[i]!=s[j])
			{
				j++;
			}
			store(s,i,j);
		
		}
		i++;
	
	}
	for(i=0;i<j;i++)
		putchar(s[i]);
	printf("\n");
}
