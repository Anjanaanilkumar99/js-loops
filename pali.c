#include<stdio.h>
int main()
{
    int n,a,rslt,rem;
    printf("enter a number:");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        rem=n%10;
        rslt=rslt*10+rem;
        n=n/10;

    }
    if(rslt == a)
    {
        printf("palindrome");
    }
    else
    {
                printf(" not palindrome");

    }
    return 0;
    }