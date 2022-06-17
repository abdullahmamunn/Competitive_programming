#include<stdio.h>
long long int fact(long long int n)
{
    if(n==1)
        return 1;
    else
        return fact(n-1)*n;
}
int main()
{
    long long n,i;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double sum = 0.0;
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
           sum = sum + i/(double)fact(i);
        }
        printf("%.4lf\n",sum);
        sum = 0.0;

    }
    return 0;
}
