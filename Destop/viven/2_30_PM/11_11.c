#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char str[15];
	int i,n,j;
	char stack[15]="";
	printf("Enter a string:");
	gets(str);
	n=strlen(str);
	int k=0,choice;
	while(1)
	{
		printf("Enter choice :");
		printf("1.push\n2.pop\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: 
				stack[k]=str[j];
				printf("%s\n",stack);
				k++;
				j++;
				break;
			case 2: k--;
				j--;
				stack[k]='\0';
				printf("%s\n",stack);
				break;
			default:
		       		exit(1);
	}
}

}

