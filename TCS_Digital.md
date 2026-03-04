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
