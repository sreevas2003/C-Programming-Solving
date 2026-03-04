## Q. Reverse the order of words in a sentence.
Example:

Input:  "I love coding"
Output: "coding love I"
```c
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void reverse(char s[],int i,int j)
{
    for(;i<=j;i++,j--)
    {
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
}
void main()
{
    char str[20]="sree nivasa namah";
    reverse(str,0,strlen(str)-1);
    int i=0;
    while(str[i])
    {
        while(isspace(str[i]))
            i++;
        int low=i;
        while(i<strlen(str) && !isspace(str[i]))
            i++;
        int high=i-1;
        reverse(str,low,high);
    }
    puts(str);
}
```

## Q. Find the factorial of a number using recursion.
Example:

Input: 5
Output: 120

```c
#include<stdio.h>
int fact(int n)
{
    if(n==1)
        return n;
    return n*fact(n-1);
}
void main()
{
    int n=6;
    printf("%d",fact(n));
}

```
## Q. Check if two strings are anagrams of each other.

Example:

Input : "listen", "silent"
Output: YES
```c
#include<stdio.h>
#include<string.h>
void sort(char s[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(s[i]>s[j])
            {
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
}
void main()
{
    char s[10]="listen";
    char str[10]="silent";
    int n1=strlen(s);
    int n2=strlen(str);
    if(n1==n2)
    {
        sort(s,n1);
        sort(str,n2);
        if(strcmp(s,str)==0)
        {
            printf("Yes");
        }
        else
            printf("No");
    }
    else
        printf("NO");
}
```

## Q. Move all zeros to the end of the array while maintaining the order of non-zero elements.

```c
#include<stdio.h>

int main() {
    int arr[6] = {1,0,2,0,3,0};
    int n = 6;
    int pos = 0;

    for(int i = 0; i < n; i++)
        if(arr[i] != 0)
            arr[pos++] = arr[i];

    while(pos < n)
        arr[pos++] = 0;

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
```
## Q. Print numbers from 1 to N without using any loop(Recursion).

Example:

Input: 5
Output: 1 2 3 4 5
```c
#include<stdio.h>
void print(int n)
{
    if(n==0)
        return;
    print(n-1);
    printf("%d ",n);
}
void main()
{
    print(5);
}
```
## Q. Find the majority element in an array (element appearing more than n/2 times).

Example:

Input:  [2, 2, 1, 1, 2, 2, 2]
Output: 2
```c
#include<stdio.h>
void main()
{
    int arr[]={1,1,2,3,1,1,2,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,vote=0,can=-1;
    for(i=0;i<n;i++)
    {
        if(vote==0)
        {
            can=arr[i];
            vote=1;
        }
        else
        {
            if(can==arr[i])
                vote++;
            else
                vote--;
        }
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        if(can==arr[i])
            count++;
    }
    if(count>n/2)
        printf("%d\n",can);
}
```

## Q. Remove all duplicate characters from a string but keep the first occurrences.

Example:

Input:  "banana"
Output: "ban"
```c
#include<stdio.h>
#include<string.h>
void main()
{
    char s[]="sreenivasulu";
    int i,n=strlen(s),j=0;
    int seen[256]={0};
    for(i=0;i<n;i++)
    {
        if(!seen[s[i]])
        {
            seen[s[i]]=1;
            s[j++]=s[i];
        }
    }
    s[j]='\0';
    puts(s);
}
```
## Q. Print all subsets of a string (power set) in lexicographical order.

Example:

Input: "abc"
Output:
a
ab
abc
ac
b
bc
c
(empty subset also allowed)

```c
#include<stdio.h>
#include<string.h>
void print(char *s,char* c,int i,int n)
{
    if(s[i]=='\0')
    {
        c[n]='\0';
        printf("{ %s }\n",c);
        return;
    }
    c[n]=s[i];
    print(s,c,i+1,n+1);
    print(s,c,i+1,n);
}
void main()
{
    char s[]="abc";
    int n=strlen(s);
    char c[n];
    print(s,c,0,0);
 
}
```

## Q. Check whether a string is a valid palindrome ignoring spaces and case.

Example

Input : "A man a plan a canal Panama"
Output: YES

```c
#include<string.h>
#include<stdio.h>
#include<ctype.h>
void main()
{
    char str[40]= "A Man a Plan a canal Panama";
    int i=0,j;
    while(str[i])
    {
        str[i]=tolower(str[i]);
        if(isspace(str[i]))
        {
            j=i;
            while(str[j])
            {
                str[j]=str[j+1];
                j++;
            }
            str[j]='\0';
            continue;
        }
        i++;
    }
    puts(str);
    int n=strlen(str);
    for(i=0,j=n-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        {
            printf("Not palin\n");
            return;
        }
    }
    printf("Palin\n");
}
```
## Q. Find the sum of elements in an array using recursion.

Example

Input : [1, 2, 3, 4, 5]
Output: 15
```c
#include<stdio.h>
int sum(int a[],int n)
{
    if(n==0)
        return a[n];
    int su=0;
    su=a[n]+sum(a,n-1);
    return su;
 
}
void main()
{
    int arr[5]={9,8,7,6,5};
    printf("sum is %d\n",sum(arr,4));
}
```

## Q. Find the equilibrium index of an array.

An index i is an equilibrium index if
sum of elements before i == sum of elements after i.

Example

Input : [1, 3, 5, 2, 2]
Output: 2
```c
#include<stdio.h>
void main()
{
    int arr[5]={1,3,5,2,2};
    int i,j,ls,rs,to;
    ls=rs=to=0;
    for(i=0;i<5;i++)
        to+=arr[i];
    for(i=0;i<5;i++)
    {
        rs=to-ls-arr[i];
        if(ls==rs)
        {
            printf("%d\n",i);
            return;
        }
        ls+=arr[i];
    }
    printf("No equilibrium\n");
}
```

## Q. Find the first non-repeating character in a string.

Example

Input : "aabbcdde"
Output: c

```c
#include<stdio.h>
#include<string.h>
char first(char s[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        int c=0;
        for(j=0;j<n;j++)
        {
            if(s[i]==s[j] && i!=j)
            {
                c++;
                break;
            }
        }
        if(c==0)
            return s[i];
    }
}
void main()
{
    char str[]="ababcdd";
    int n=strlen(str);
    printf("%c",first(str,n));
}
```

## Q.Find the second largest element in an array (single pass).

Example

Input : [12, 35, 1, 10, 34, 1]
Output: 34
```c
#include<stdio.h>
void main()
{
    int arr[6]={12, 35, 36, 10, 34, 1};
    int i;
    int lar=arr[0],slar=arr[0];
    for(i=1;i<6;i++)
    {
        if(lar<arr[i])
        {
            slar=lar;
            lar=arr[i];
        }
        else if(slar<arr[i] && lar>arr[i])
            slar=arr[i];
    }

    printf("%d %d",lar,slar);
}
```
## Q. Check whether a string has all unique characters (no duplicates).

Example

Input : "coding"
Output: YES

Input : "programming"
Output: NO
```c
#include<stdio.h>
#include<string.h>
void main()
{
    char str[]="programming";
    int n=strlen(str);
    int i=0;
    int freq[256]={0};
    while(str[i])
    {
        if(freq[str[i]]>0)
        {
            printf("No\n");
            return;
        }
        freq[str[i]]++;
        i++;
    }
    printf("Yes\n");
 
}
```

## Q. Find all leaders in an array.

An element is a leader if it is greater than all elements to its right.

Example

Input : [16, 17, 4, 3, 5, 2]
Output: 17 5 2


Rules

Traverse from right to left

Time: O(n)

Space: O(1)

```c
#include<stdio.h>
void main()
{
    int arr[6]={16, 17, 4, 3, 5, 2};
    int i,k=0,j=0;
    int a[5];
    for(i=5;i>=0;i--)
    {
        if(k<arr[i])
        {
            k=arr[i];
            a[j++]=k;
        }
    }
   for(i=j-1;i>=0;i--)
        printf("%d ",a[i]);
}
```

## Q. Find the first repeating character in a string.

Example

Input : "abca"
Output: a
```c
#include<stdio.h>
#include<string.h>
void main()
{
    char str[]="sreenivasulu";
    int n=strlen(str);
    int i;
    int freq[256]={0};
    char ch=0;
    for(i=0;i<n;i++)
    {
        if(freq[str[i]]>1)
        {
            ch=str[i];
            break;
        }
        freq[str[i]]++;
    }
    if(ch)
        printf("%c ",ch);
    else
        printf("No charcter");
}
```
## Q. Count the number of set bits (1s) in an integer.

Example

Input : 13
Binary: 1101
Output: 3


Rules

Use bitwise operations
```c
#include<stdio.h>
void main()
{
    int n=7,s=0;
    while(n)
    {
        if(n&1)
            s++;
        n=n>>1;
    }
    printf("%d",s);
}
```

## Q. Remove duplicates from a sorted array in-place and return the new length.

Example

Input : [1,1,2,2,3,4,4]
Output: Array = [1,2,3,4], Length = 4


Rules

Array is already sorted

Modify array in-place

Time: O(n)
```c
#include<stdio.h>
void main()
{
    int arr[7]= {1,1,2,3,3,4,4};
    int i,j=1;
    for(i=1;i<7;i++)
    {
        if(arr[i-1]!=arr[i])
            arr[j++]=arr[i];
    }
    for(i=0;i<j;i++)
    {
        printf("%d ",arr[i]);
    }
}
```
## Find the maximum sum of any subarray of size k.

Example

Input : arr = [2, 1, 5, 1, 3, 2], k = 3
Output: 9
Explanation: [5,1,3]


Rules

Use sliding window

Time: O(n)

Space: O(1)
```c
#include<stdio.h>
void main()
{
    int arr[6]={2, 1, 5, 1, 3, 2};
    int i,j=3,msum=arr[0]+arr[1]+arr[2];
    int sum=msum;
    for(i=0;i+j<6;i++)
    {
        sum=sum+arr[i+j]-arr[i];
        if(sum>msum)
            msum=sum;
    }
    printf("%d\n",psum);
 
}
```
## Q.Check if a number is a power of two.

Example

Input : 16
Output: YES


Rules

Use bitwise operations only

No loops preferred
```c
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if((num&(num-1))==0)
        printf("this is power of two");
    else
        printf("num is not power of two");
}
```
## Q. Reverse an array using recursion (no loops).

Example

Input : [1, 2, 3, 4, 5]
Output: [5, 4, 3, 2, 1]


Rules

Use recursion only

Swap elements during recursion

Time: O(n)
```c
#include<stdio.h>
void swap(int arr[],int i,int j)
{
    int c=arr[i];
    arr[i]=arr[j];
    arr[j]=c;
}
void reverse(int arr[],int i,int j)
{
    if(i>=j)
        return;
    swap(arr,i,j);
    reverse(arr,i+1,j+1);
}
void main()
{
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,0,n-1);
    int i;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
```
## Q. Find the pair with sum equal to a given target in a sorted array.

Example

Input : arr = [1, 2, 3, 4, 6], target = 6
Output: (2, 4)

Rules

Array is sorted

Use two-pointer technique

Time: O(n)

Space: O(1)
```c
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    int i = 0, j = n - 1;

    while (i < j) {
        int sum = arr[i] + arr[j];
        if (sum == target) {
            printf("Pair found: %d %d\n", arr[i], arr[j]);
            return 0;
        }
        else if (sum < target)
            i++;
        else
            j--;
    }

    printf("No pair found\n");
    return 0;
}
```
## Q. Check whether a string is a subsequence of another string.

Example

Input : s = "ace", t = "abcde"
Output: YES

Rules

Characters must appear in order

Two-pointer approach

Time: O(n)
```c
#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "abe";
    char s[] = "adbec";

    int i = 0, j = 0;

    while (str[i] && s[j]) {
        if (str[i] == s[j])
            i++;
        j++;
    }

    if (str[i] == '\0')
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
```

## Q. Find the count of subarrays whose sum is equal to K.

Example

Input : arr = [1, 1, 1], K = 2
Output: 2
Explanation: [1,1] (index 0–1) and [1,1] (index 1–2)


Rules

Use prefix sum technique

Time: O(n²) acceptable, O(n) is a bonus

Space: O(1) or O(n)
```c
#include<stdio.h>
void main()
{
    int arr[]={1,1,1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2,c=0,i,j;
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==k)
                c++;
        }
    }
    printf("%d",c);
}
```
## Q.Check whether two strings are anagrams (without sorting).

Example

Input : "listen", "silent"
Output: YES


Rules

Use frequency array / hashing

Case-sensitive

Time: O(n)
```c
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[]="aaabbb", str2[]="ababab";
    int n1=strlen(str1), n2=strlen(str2);
    int i,freq[256]={0};
    if(n1==n2)
    {
        for(i=0;str1[i];i++)
        {
            freq[str1[i]]++;
        }
        for(i=0;str2[i];i++)
        {
            freq[str2[i]]--;
            if(freq[str2[i]]<0)
            {
                printf("No\n");
                return;
            }
        }
        printf("Yes\n");
    }
    else
        printf("No\n");
}
```

## Q. Find the length of a string using recursion (no loops, no strlen).

Example

Input : "coding"
Output: 6


Rules

Use recursion only

No loops

No library functions
```c
#include<stdio.h>
#include<string.h>
int len(char s[],int c)
{
    if(s[c]=='\0')
        return 0;
    return (1+ len(s,c+1));
}
void main()
{
    char str[]="Sreenivasulu";
    printf("length is : %d\n",len(str,0));
}
```
