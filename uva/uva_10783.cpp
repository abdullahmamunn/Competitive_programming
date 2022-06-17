#include <bits/stdc++.h>
using  namespace std;
int main()
{
    int a,b,i,t,sum;
    cin>>t;
    for(i = 0; i<t; i++)
    {
    cin>>a>>b;
    sum = 0;
        while(a<=b)
        {
           if(a&1)
           {
               sum =  sum + a;
           }
           a++;
        }
        cout<<"Case "<<i+1<<": "<<sum<<endl;
    }
    return 0;
}
