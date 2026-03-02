```c
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int rev=0;
    while(num)
    {
        rev=rev*10+num%10;
        num/=10;
    }
    printf("%d",rev);
}
```
