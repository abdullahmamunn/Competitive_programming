#include <stdio.h>

long long uva100(long long n)
{
   // printf("%d\n",n);
    if(n == 1)
        return 1;
    else if(n&1)
        return uva100(3*n + 1) + 1;
    else
        return uva100(n/2) + 1;
}
long long maxcycle(long long a,long long b)
{
    if(a>b)
        return maxcycle(b,a);
    long long max = 0,cycle;
    while(a<=b)
    {
        cycle = uva100(a);
        if(max<cycle)
            max = cycle;
            a++;
    }
    return max;
}
int main()
{
    long long a,b;
    while(scanf("%lld %lld",&a,&b) != EOF){
         printf("%lld %lld %lld\n",a,b,maxcycle(a,b));
    }

  return 0;
}
