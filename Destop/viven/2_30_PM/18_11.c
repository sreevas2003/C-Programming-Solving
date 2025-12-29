#include<stdio.h>
#include<string.h>
int found(char *str,char* sub)
{
	while(*str)
	{
		char* s=sub;
		while(*str==*s && *str && *s)
		{
			str++;
			s++;
		}
		if(*s=='\0')
		{
			return 1;
		}
		str++;
	}
	return 0;
}
void main()
{
	char str[50];
	char sub[50];
	printf("enter a string :");
	gets(str);
	printf("Enter sub string : ");
	gets(sub);
	if(found(str,sub))
		printf("Substring found\n");
	else
		printf("Not found\n");
}
