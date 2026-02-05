## Find the missing number in an array containing numbers from 1 to N.
Example
Input : [1, 2, 4, 5]
Output: 3
```c
#include<stdio.h>
void main()
{
    int arr[]={1,2,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0,total=0,i;
    for(i=1;i<=n+1;i++)
        total+=i;
    for(i=0;i<n;i++)
        sum+=arr[i];
    printf("missing number is : %d\n",total-sum);
}
```
## Reverse a subarray between given indices l and r.
Example
Input : arr = [1,2,3,4,5], l=1, r=3
Output: [1,4,3,2,5]
```c
#include<stdio.h>
void reverse(int arr[],int l,int r)
{
    int i,j;
    for(i=l,j=r;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
void main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,l,r;
    printf("Enter left and right indices : ");
    scanf("%d%d",&l,&r);
    reverse(arr,l,r);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
```
## Check whether a string has balanced parentheses.
Example
Input : "{[()]}"
Output: YES

Input : "{[(])}"
Output: NO
```c
#include <stdio.h>
#include <string.h>

int isMatching(char open, char close) {
    if (open == '(' && close == ')') return 1;
    if (open == '{' && close == '}') return 1;
    if (open == '[' && close == ']') return 1;
    return 0;
}

int main() {
    char str[100];
    char stack[100];
    int top = -1;

    printf("Enter parentheses: ");
    scanf("%s", str);

    for (int i = 0; str[i]; i++) {
        char ch = str[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;   // push
        }
        else {
            if (top == -1) {
                printf("NO\n");
                return 0;
            }
            if (!isMatching(stack[top], ch)) {
                printf("NO\n");
                return 0;
            }
            top--;   // pop
        }
    }

    if (top == -1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

```
## Check whether a number has exactly one bit set.
Example
Input : 8
Output: YES

Input : 10
Output: NO
```c
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(!(num&(num-1)))
        printf("Yes\n");
    else
        printf("No\n");
}
```
## Print all binary strings of length N without consecutive 1s.
Example
Input : N = 3
Output:
000
001
010
100
101
```c
#include <stdio.h>

void generate(int pos, int n, char str[]) {
    if (pos == n) {
        str[pos] = '\0';
        printf("%s\n", str);
        return;
    }

    // Always place 0
    str[pos] = '0';
    generate(pos + 1, n, str);

    // Place 1 only if previous is not 1
    if (pos == 0 || str[pos - 1] != '1') {
        str[pos] = '1';
        generate(pos + 1, n, str);
    }
}

int main() {
    int n;
    printf("Enter number of bits length: ");
    scanf("%d", &n);

    char str[20];
    generate(0, n, str);

    return 0;
}
```
