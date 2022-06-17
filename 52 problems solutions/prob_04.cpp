#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,c=1;
   cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<"Case "<<c++<<":";
          for(i=1;i<=n;i++){
            if(n%i==0)
                cout<<" "<<i;
        }
        cout<<endl;
    }
    return 0;
}
