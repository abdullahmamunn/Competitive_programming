#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int cnt = 0;
        string str,r;
        cin>>str;
        r=str;
        reverse(r.begin(),r.end());
        for(int i=0;i<r.length();i++)
        {
            if(abs(str[i]-str[i+1]) == abs(r[i]-r[i+1]))
            {
                cnt++;
            }
        }
         if(cnt==str.length()-1)
            printf("Funny\n");
         else
            printf("Not Funny\n");
    }
    return 0;
}
