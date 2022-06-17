#include<stdio.h>
long long isPrime(long long n)
{
    long long i;
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
for(i=3;i<n;i=i+2)
{
    if(n%i==0)
    {
        return 0;
    }
}
return 1;
}
int main()
{
    long long n;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(isPrime(n)==1)
            printf("%lld is a prime\n",n);
        else
            printf("%lld is not a prime\n",n);
    }
    return 0;
}
