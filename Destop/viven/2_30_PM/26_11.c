#include<stdio.h>
#include<string.h>

char* swap(char s[],int i,int j)
{
	char ch;
	ch = s[i];
	s[i] = s[j];
	s[j] = ch;
	return s;	
}
void main()
{
	char *str,*s;
	printf("Enter a string :");
	gets(str);
	int i,j;
	for(i=0;str[i]!='\0';i++)
	{
		//s=str;
		for(j=0;str[j]!='\0';j++)
		{
			s = swap(str,i,j);
			printf("%s\n",s);

		}
		
	}
}
