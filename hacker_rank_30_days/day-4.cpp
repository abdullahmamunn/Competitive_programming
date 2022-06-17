#include <bits/stdc++.h>

using namespace std;
int main()
{
    int N;
    cin >> N;
    if(N%2==1)
      cout<<"Weird"<<endl;
    else if(N>=2 && N<=5)
    {
        if(N%2==0)
           cout<<"Not Weird"<<endl;
    }
    else if(N>=6 && N<=20)
    {
        if(N%2==0)
           cout<<"Weird"<<endl;
    }
    else{
        if(N%2==0)
           cout<<"Not Weird"<<endl;
    }

    return 0;
}

