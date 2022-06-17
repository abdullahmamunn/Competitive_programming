#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        string str;
        string s,s1;
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            if(i%2==0)
            {
               s = s + str[i];
            }
            else
            {
                s1 = s1 + str[i];
            }
        }
        cout<<s<<" "<<s1<<endl;
    }
    return 0;
}
