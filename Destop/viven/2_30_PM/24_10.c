#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int j=0,l;
	for(l=0;l<3;l++)
		printf("%d ",a[l][j]);
	j++;
	for(l=2;l>=0;l--)
		printf("%d ",a[l][j]);
	j++;
	for(l=0;l<3;l++)
		printf("%d ",a[l][j]);

}
		
