#include<bits/stdc++.h>
using namespace std;
int main()
{
    int lombo,vhumi,otivhuj,i,t;

       while(1)
        {
            scanf("%d %d %d",&lombo,&vhumi,&otivhuj);
             if(lombo == 0 && vhumi == 0 && otivhuj == 0)
                break;
                 if(lombo*lombo + vhumi*vhumi == otivhuj*otivhuj)
                    cout<<"right\n";
                 else if(otivhuj*otivhuj + vhumi*vhumi == lombo*lombo)
                    cout<<"right\n";
                 else if(otivhuj*otivhuj + lombo*lombo == vhumi*vhumi)
                    cout<<"right\n";
                 else
                    cout<<"wrong\n";
       }

    return 0;
}
