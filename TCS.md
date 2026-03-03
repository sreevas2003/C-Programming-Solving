## Q1. Reverse a Number
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
## Q2. Check Palindrome Number
```c
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int temp=num;
    int rev=0;
    while(num)
    {
        rev=rev*10+num%10;
        num/=10;
    }
    if(temp==rev)
        printf("Palindrome\n");
    else
        printf("Not palin\n");
}
```
## Q3. Find GCD and LCM of Two Numbers
```c
#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter a and b number:");
    scanf("%d%d",&num1,&num2);
    int a=num1,b=num2;
    while(num1!=num2)
    {
        if(num1>num2)
            num1-=num2;
        else
            num2-=num1;
    }
    printf("HCF is %d\n",num2);
    printf("LCM is %d\n",(a*b)/num2);
}
```
## Q4. Check Prime Number (Optimized)
```c
#include<stdio.h>
#include<math.h>
void main()
{
    int i,num,flag=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag)
        printf("Prime");
    else
        printf("not prime");
}
```
## Q5. Fibonacci Series up to N terms
```c
#include<stdio.h>
void main()
{
    int n,a=0,b=1,c;
    printf("Enter n term:");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(int i=1;i<n-1;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}
```
## Q6. Count Digits in a Number
```c
#include<stdio.h>
void main()
{
    int n,c=0;
    printf("Enter a num:");
    scanf("%d",&n);
    while(n)
    {
        c++;
        n/=10;
    }
    printf("count is %d",c);
}
```
## Q7. Find Second Largest Element in Array
```c
#include<stdio.h>
void main()
{
    int arr[8]={2,5,6,4,3,8,9,7};
    int i,slar=arr[0],lar=arr[0];
    for(i=1;i<8;i++)
    {
        if(arr[i]>lar)
        {
            slar=lar;
            lar=arr[i];
        }
        else if(slar<arr[i] && arr[i]!=lar)
            slar=arr[i];
    }
    printf("%d",slar);
}
```
## Q8. Remove Duplicates from Array
```c
#include<stdio.h>
void main()
{
    int temp[8],arr[8]={1,5,1,2,5,3,2,5};
    int i=0,k=0;
    while(i<8)
    {
        temp[i]=-1;
        i++;
    }
    for(i=0;i<8;i++)
    {
        if(temp[i]==-1)
        {
            for(int j=i+1;j<8;j++)
            {
                if(arr[i]==arr[j])
                {
                     temp[j]=0;
                }
            }
            arr[k++]=arr[i];
        }
    }
    for(i=0;i<k;i++)
        printf("%d ",arr[i]);
}
```
## Q9. Reverse a String (Without Library)
```c
#include<stdio.h>
#include<string.h>
void my_strrev(char a[],int i,int j)
{
    for(;i<=j;i++,j--)
    {
        char ch=a[i];
        a[i]=a[j];
        a[j]=ch;
    }
}
void main()
{
    char str[]="sreenivasulu";
    int n=strlen(str);
    my_strrev(str,0,n-1);
    puts(str);
}
```
## Q10. Count Vowels and Consonants in String
```c
#include<stdio.h>
#include<string.h>
void main()
{
    char str[]="sreenivasulu";
    int i=0,n=strlen(str);
    int vowel=0,consonant=0;
    while(str[i])
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            vowel++;
        else
            consonant++;
        i++;
    }
    printf("vowels count is %d\nconsonant count is %d",vowel,consonant);
}
```
## Frequency of elements in array
```c
#include<stdio.h>
void main()
{
    int temp[10],arr[10]={1,2,5,4,1,2,6,3,4,3};
    int i=0,c;
    while(i<10)
        temp[i++]=0;
    for(i=0;i<10;i++)
    {
        if(temp[i]!=-1){
        c=0;
        for(int j=0;j<10;j++)
        {
            if(arr[i]==arr[j])
            {
                temp[j]=-1;
                c++;
            }
        }
        printf("%d times %d\n",arr[i],c);
    }}
}
```
## Sorting without library
```c
#include<stdio.h>
void main()
{
    int arr[10]={1,2,5,4,1,2,6,3,4,3};
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=i;j<10;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
        printf("%d ",arr[i]);
}
```
## Q13. Pattern Problem – Pyramid
```c
#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<6;i++)
    {
        for(j=5;j>=i;j--)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("*");
        for(j=1;j<i;j++)
            printf("*");
        printf("\n");
    }
}
```
## Q14. Sum of Digits Until Single Digit
```c
#include<stdio.h>
void main()
{
    int n=9857;
    while(n>=9)
    {
        int sum=0;
        while(n)
        {
            sum=sum+n%10;
            n/=10;
        }
        printf("%d\n",sum);
        n=sum;
    }
}
```
## 
