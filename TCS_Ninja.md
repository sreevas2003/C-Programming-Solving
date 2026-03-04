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
## Q15. Check Anagram (Without Sorting Function)
```c
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[]="listen";
    char str2[]="silent";
    int temp[256]={0};
    int i=0;
    while(str1[i] && str2[i])
    {
        temp[str1[i]]++;
        temp[str2[i]]++;
        i++;
    }
    i=0;
    while(str1[i])
    {
        if(temp[str1[i]]!=2)
        {
            printf("Not anagrams\n");
            return;
        }
        i++;
    }
    printf("Anagrams\n");
    
}
```
## Q16. Decimal to Binary (Without Built-in)
```c
#include<stdio.h>
void main()
{
    int n=10,r=0,c=1,bin=0;
    while(n)
    {
        
        r=n%2;
        bin+=r*c;
        n/=2;
        c*=10;
        printf("%d\n",bin);
    }
    printf("%d\n",bin);
}
```
## Q17. Armstrong Number (General Case)
```c
#include<stdio.h>
#include<math.h>
void main()
{
    int n=153;
    int temp=n;
    int c=0;
    while(temp)
    {
        c++;
        temp/=10;
    }
    temp=n;
    int r,sum=0;
    while(temp)
    {
        r=temp%10;
        sum=sum+pow(r,c);
        temp/=10;
    }
    if(n==sum)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
}
```
## Q18. Matrix Addition
```c
#include<stdio.h>
void main()
{
    int a[2][2]={1,2,3,4},b[2][2]={4,3,2,1};
    int i,j,c[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",c[i][j]);
        }
    }
}
```
## Q19. Transpose of Matrix
```c
#include<stdio.h>
void main()
{
    int a[2][3]={1,2,3,4,5,6};
    int i,j,c[3][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            c[j][i]=a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
```
## Q20. Strong Number
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
    int num=145,sum=0;
    int n=num;
    while(n)
    {
        sum+=fact(n%10);
        n/=10;
    }
    if(num==sum)
        printf("Strong number\n");
    else
        printf("Not strong number\n");
    
}
```
## Q21. Find Missing Number (1 to N)
```c
#include<stdio.h>
void main()
{
    int arr[]={1,2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]),arraysum=0,original=0,i;
    for(i=0;i<n;i++)
    {
        arraysum+=arr[i];
        original+=i+1;
    }
    original+=n+1;
    printf("missing number is %d\n",original-arraysum);
    
}
```
## Q22. Find Majority Element (> n/2 times)
```c
#include<stdio.h>
void main()
{
    int arr[]={2,2,1,2,3,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,cand,vote=0;
    for(i=0;i<n;i++)
    {
        if(vote==0)
        {
            cand=arr[i];
            vote=1;
        }
        else
        {
            if(cand==arr[i])
                vote++;
            else
                vote--;
        }
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        if(cand==arr[i])
            count++;
    }
    if(count>=n/2)
        printf("Candi is %d\n",cand);
    else
        printf("There is no element\n");
    
}
```
## Q23. Move All Zeros to End
```c
#include<stdio.h>
void main()
{
    int arr[]={0,0,1,0,3,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,pos=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
            arr[pos++]=arr[i];
    }
    while(pos<n)
    {
        arr[pos++]=0;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
```
## Q24. Check if Array is Sorted
```c
#include<stdio.h>
void main()
{
    int arr[]={1,3,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,flag=0;
    for(i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag)
        printf("Not sorted");
    else
        printf("Sorted array");
}
```
## Q25. Find Duplicate Element
```c
#include<stdio.h>
void main()
{
    int arr[]={1,3,2,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,j,cand=0;
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
            if(arr[i]==arr[j])
            {
                cand=arr[i];
                break;
            }
        }
    }
    printf("%d",cand);
}
```
## Q26. Rotate Array by 1 Position
```c
#include<stdio.h>
void main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,k=1;
    while(k)
    {
        int temp=arr[n-1];
        for(i=n-1;i>=0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
        k--;
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
```
## Q27. Reverse Words in String
```c
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void reverse(char str[],int i,int j)
{
    for(;i<=j;i++,j--)
    {
        char ch=str[i];
        str[i]=str[j];
        str[j]=ch;
    }
}
void main()
{
    char str[]="i love tcs";
    int i=0,n=strlen(str);
    reverse(str,0,n-1);
    while(str[i])
    {
        while(isspace(str[i]))
            i++;
        int l=i;
        while(!isspace(str[i]) && str[i])
            i++;
        reverse(str,l,i-1);
    }
    puts(str);
}
```
## Q28. Count Frequency of Characters
```c
#include<stdio.h>
#include<string.h>
void main()
{
    char str[]="programming";
    int i=0,freq[256]={0},n=strlen(str);
    while(str[i])
    {
        freq[str[i]]++;
        i++;
    }
    i=0;
    while(i<n)
    {
        if(freq[str[i]])
        {
            printf("%c -> %d\n",str[i],freq[str[i]]);
            freq[str[i]]=0;
        }
        i++;
        
    }
    
}
```
## Q29. Find First Non-Repeating Character
```c
#include<stdio.h>
#include<string.h>
void main()
{
    char str[]="stress";
    int i=0,freq[256]={0},n=strlen(str);
    while(str[i])
    {
        freq[str[i]]++;
        i++;
    }
    i=0;
    while(i<n)
    {
        if(freq[str[i]]==1)
        {
            printf("%c\n",str[i]);
            return;
        }
        i++;
    }
    
}
```
## Q30. Swap Two Numbers Without Third Variable
```c
#include<stdio.h>
void main()
{
    int a=10,b=5;
    a^=b;
    b^=a;
    a^=b;
    printf("%d and %d\n",a,b);
}
```


