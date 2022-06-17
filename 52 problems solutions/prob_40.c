#include <stdio.h>
int main()
{
    int x,k,sum = 1,pow,t;
    scanf("%d",&t);
    while(t--){
    scanf("%d %d",&x,&k);
    int i;
    pow = 1;
    for(i=0;i<k;i++)
    {
        pow = pow*x;
        sum = sum + pow;
    }
    printf("%d\n",sum);
    sum = 1;
    }
    return 0;
}
