#include <stdio.h>
void main() {
    int i,n,a=0,b=1,c;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        c=a+b;
     printf("%d",c);
     a=b;
     b=c;
    }
} 
