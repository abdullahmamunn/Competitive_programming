#include<stdio.h>

long long fact(long long n)
{

    if(n<=1)
        return n;
    else
        return (n*fact(n-1));
}
int main()
{
     printf("%lld",fact(5));
    return 0;
}
