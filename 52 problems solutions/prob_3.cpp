#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    for(i = 1000; i>=1;i--)
    {
        printf("%d\t",i);
        printf("%d\t",i=i-1);
        printf("%d\t",i=i-1);
        printf("%d\t",i=i-1);
        printf("%d\t\n",i=i-1);
    }
    return 0;
}
