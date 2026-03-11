## Q1. Two Sum Find two numbers whose sum equals target.
```c
#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,6,11,15,7};
    int tar=9,n=sizeof(arr)/sizeof(arr[0]);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(tar==(arr[i]+arr[j]))
                cout<< i <<" "<< j <<endl;
        }
    }
}
```
## Q2. Maximum Subarray Sum (Kadane’s Algorithm)
```c
#include<stdio.h>
void main()
{
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int i,j,n=sizeof(arr)/sizeof(arr[0]);
    int msum=0;
    for(i=0;i<n;i++)
    {
        int sum=arr[i];
        for(j=i+1;j<n;j++)
        {
            sum+=arr[j];
            if(sum>msum)
                msum=sum;
        }
    }
    printf("%d",msum);
}
```
## Q3. Maximum Sum Subarray of Size K (Sliding Window)
```c
#include<stdio.h>
void main()
{
    int arr[]={2,1,5,1,3,2};
    int k=3;
    int i,n=sizeof(arr)/sizeof(arr[0]);
    int cu=0,sum=arr[0]+arr[1]+arr[2];
    for(i=0;(i+k)<n;i++)
    {
        if(cu<sum)
            cu=sum;
        sum=(arr[i+k]-arr[i]+sum);
    }
    printf("%d\n",cu);
}
```
## Q4. Binary Search
```c
#include<stdio.h>
void main()
{
    int arr[]={1,3,5,7,9,11};
    int tar=7;
    int l=0,h=sizeof(arr)/sizeof(arr[0])-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==tar)
        {
            printf("%d\n",mid);
            return;
        }
        else if(arr[mid]<tar)
            l=mid+1;
        else
            h=mid-1;
    }
}
```
## Q5. Valid Parentheses (Stack)
```c

```
## Count Pairs divisible by 2
You're given a list of numbers. Your task is to find how many pairs of numbers in that list add up to an even number. A pair consists of two different numbers from the list. For example, in the list [1, 2, 3, 4], the pairs that sum to an even number are (1, 3) and (2, 4).
```c
#include<stdio.h>
void main()
{
    int t;
    printf("Enter number of test cases : ");
    scanf("%d",&t);
    while(t)
    {
        int l,i;
        printf("Enter length : ");
        scanf("%d",&l);
        int arr[l];
        for(i=0;i<l;i++)
            scanf("%d",&arr[i]);
        int j,c=0;
        for(i=0;i<l;i++)
        {
            for(j=i+1;j<l;j++)
            {
                if((arr[i]+arr[j])%2==0)
                    c++;
            }
        }
        printf("pair count is %d\n",c);
        t--;
    }
}
```
## Factorial without Multiplication & Division
You are given a positive integer N. Your task is to compute the factorial of N without using any multiplication (∗) or division(/) operators.
```c
#include<stdio.h>
int add(int n,int m)
{
    int sum=0;
    for(int i=0;i<m;i++)
    {
        sum+=n;
    }
    return sum;
}
void main()
{
    int t;
    printf("Enter number of test cases : ");
    scanf("%d",&t);
    while(t)
    {
        int l;
        printf("Enter number : ");
        scanf("%d",&l);
        int i,sum=0;
        for(i=l;i>1;i--)
            l=add(l,i-1);
        printf("pair count is %d\n",l);
        t--;
    }
}
```
