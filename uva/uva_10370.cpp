#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,num,sum,cnt;
    double avg,sotkora;

    cin>>t;
    for(i=0;i<t;i++)
    {
       cin>>num;
        int val[num];
         sum = 0;

        for(j = 0; j<num; j++)
        {

            scanf("%d",&val[j]);
            sum = sum + val[j];
        }
        avg = sum/(double)num;
         cnt = 0;
        for(j=0;j<num;j++)
        {
            if(avg<val[j]){
                cnt++;
            }
        }
        sotkora = cnt/(double)num * 100;
        printf("%.3lf%%\n",sotkora);
    }
    return 0;
}
