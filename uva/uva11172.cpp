#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a,b;
    cin>>t;
    i = 0;
    while(i<t){
        cin>>a>>b;
        if(a>b){
            cout<<">\n";
        }
        else if(a<b){
            cout<<"<\n";
        }
        else{
            cout<<"=\n";
        }
        i++;
    }
}
