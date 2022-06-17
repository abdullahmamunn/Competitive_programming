#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,r2,b,t;
    double current_rr,require_rr;
    cin>>t;
    while(t--){
    cin>>r1>>r2>>b;
    if(r1>r2 && b<=300){
    current_rr = r2/((300-b)/double(6));
    require_rr = ((r1-r2+1)/(b/double(6)));
    printf("%.2lf %.2lf\n",current_rr,require_rr);
    }
    else
        break;
    }
    return 0;
}
