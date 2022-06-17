#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("input.txt","w",stdin);
    long long t,s,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        s = (sqrt(1+4*2*n)-1)/2;
        printf("%lld\n",s);
    }
    return 0;
}
