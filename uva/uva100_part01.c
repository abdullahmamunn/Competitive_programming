#include<stdio.h>
long long maxrange(long long n)
{
    printf("%lld ",n);
    if(n == 1)
        return 1;
    else if(n&1)
        return maxrange(3*n + 1);
    else
        return maxrange(n/2);
}

int main()
{
    long long a,b;
    while(scanf("%lld",&a) != EOF)
    {
       maxrange(a);
    }
    return 0;
}
