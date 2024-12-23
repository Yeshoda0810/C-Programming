#include <stdio.h>
void main() {
    int n,rem,temp,rev=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("given number is a palindrome");
    }
    else
    {
        printf("given number is not a palidrome");
    }
    }
