#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long int a,b;
    while(scanf("%lld %lld",&a,&b) == 2)
    {
        if(a>b)
        {
            printf("%lld\n",abs(b-a));
        }
        else
        {
            printf("%lld\n",abs(b-a));

        }
    }

    return 0;
}
