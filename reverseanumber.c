#include <stdio.h>
void main()
{
    int n,rem,rev=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("the reversed number is %d",rev);
}