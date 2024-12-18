#include <stdio.h>
void main()
{
    int n,rem,temp,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=rem*rem*rem+sum;
        n=n/10;
    }
    if(temp==sum){
    printf("the given number is an armstrong number");
    }
    else{
        printf("the given number is not an armstrong number");
    }
}
